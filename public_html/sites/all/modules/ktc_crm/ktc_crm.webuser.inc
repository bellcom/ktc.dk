<?php
/**
 * @file
 * Webuser specifics for the ktc_crm module.
 */

/**
 * Update users with data from CRM.
 */
function ktc_crm_webuser_update_users() {
  $logger = KtcCrmLogger::getInstance();
  $logger->log->addInfo('cron: start user sync');

  // The webservice complains about not using paging cookie.
  $fetch_users = TRUE;
  $amount = 50;
  $i = 0;

  $last_run = variable_get('ktc_crm_user_sync_last_run', time());
  variable_set('ktc_crm_user_sync_last_run', time());
  // Get timezone offset
  $offset = date('Z');
  $updated_since = date('Y-m-d\TH:i:s', ($last_run - $offset));

  while ($fetch_users) {
    $options = array(
      'MaxReturned' => $amount,
      'Skip' => ($i * $amount),
      'UpdatedSince' => $updated_since,
    );

    $webusers = ktc_crm_fetch_webusers($options);

    if (!$webusers) {
      $fetch_users = FALSE;
      return;
    }

    foreach ($webusers as $webuserdto) {
      $logger->log->addInfo('cron: syncing user', array ('crm_uuid' => $webuserdto));
      ktc_crm_update_account_from_webuserdto($webuserdto);
    }
    if (sizeof($webusers) < $amount){
       $fetch_users = FALSE;
    }
    $i++;
  }
}

/**
 * Implements hook_user_presave().
 */
function ktc_crm_user_presave(&$edit, $account, $category) {
  // Only update user if $_POST['form_id'] is correct. Presave is also called
  // when a user is updated programmatically, so this could turn into an
  // unwanted loop otherwise.
  if (isset($_POST['form_id']) && ($_POST['form_id'] == 'user_profile_form' || $_POST['form_id'] == 'ktc_users_signup_form')) {
    // ktc_crm_map_account_to_webuserdto() takes a normal drupal user
    // account object. Since the $account object is not populated with the
    // new values at this point, we create a temporary one, where we do this
    // in order to be able to send all updated values to CRM.
    $tmp_account = clone $account;
    foreach ($edit as $key => $value) {
      $tmp_account->$key = $value;
    }

    if ($account->is_new) {
      $webuserdto = ktc_crm_map_account_to_webuserdto($tmp_account);
      if ($crm_uuid = ktc_crm_update_user($webuserdto)) {
        $edit['field_crm_uuid'][LANGUAGE_NONE][0]['value'] = $crm_uuid;
      }
    }
    else {
      // Only send the user to CRM if a UUID is set.
      if ($uuid_field = field_get_items('user', $account, 'field_crm_uuid')) {
        $webuserdto = ktc_crm_map_account_to_webuserdto($tmp_account);
        ktc_crm_update_user($webuserdto);
      }
    }
  }

  //invite users by email
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'og_massadd_massadd_form') {
    $tmp_account = clone $account;
    foreach ($edit as $key => $value) {
      $tmp_account->$key = $value;
    }
    if ($account->is_new) {
      $webuserdto = ktc_crm_lookup_webuser_by_mail($edit['mail']);
      if ($webuserdto){
        $edit = array_merge($edit, ktc_crm_map_webuserdto_to_edit_array($webuserdto));
        $edit['status'] = 1;
      }
      else {
        $webuserdto = ktc_crm_map_account_to_webuserdto($tmp_account);
        if ($crm_uuid = ktc_crm_update_user($webuserdto)) {
          $edit['field_crm_uuid'][LANGUAGE_NONE][0]['value'] = $crm_uuid;
        }
      }
    }
      else {
        $webuserdto = ktc_crm_lookup_webuser_by_mail($tmp_account->mail);
        $edit['field_crm_uuid'][LANGUAGE_NONE][0]['value'] = $webuserdto->CrmId;
        $edit['field_navn'][LANGUAGE_NONE][0]['value'] = $webuserdto->FirstName;
        $edit['field_efternavn'][LANGUAGE_NONE][0]['value'] = $webuserdto->LastName;
    }
  }
}

/**
 * Update a list of user ids from CRM.
 */
function ktc_crm_webuser_update_user_ids($user_ids) {
  foreach ($user_ids as $user_id) {
    $account = user_load($user_id);

    $webuserdto = ktc_crm_lookup_webuser_by_mail($account->mail);
    ktc_crm_update_account_from_webuserdto($webuserdto);
  }
}

/**
 * Helper, get users uuid.
 */
function _ktc_crm_user_get_user_uuid($uid) {
  if ($account = user_load($uid)) {
    return _ktc_crm_get_uuid('user', $account);
  }
  return FALSE;
}

/**
 * Map account values to webuser object.
 *
 * Creates a WebUserDto object from a drupal user account.
 * If the user already has a crm uuid, this will be added to the entity
 * in order to update this in CRM.
 */
function ktc_crm_map_account_to_webuserdto($account) {
  $webuserdto = new \KTC\WebUser\WebUserDto(NULL);

  if ($uuid_field = field_get_items('user', $account, 'field_crm_uuid')) {
    $uuid = $uuid_field[0]['value'];
    $webuserdto = new \KTC\WebUser\WebUserDto($uuid);
  }

  $webuserdto->EMail = $account->mail;
  $webuserdto->UserName = $account->mail;
  $webuserdto->DrupalId = $account->uid;

  if ($field = field_get_items('user', $account, 'field_navn')) {
    $webuserdto->FirstName = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_efternavn')) {
    $webuserdto->LastName = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_jobposition')) {
    $webuserdto->Salutation = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_directe_telefon')) {
    $webuserdto->Phone = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_cell')) {
    $webuserdto->MobilePhone = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_dob')) {
    $birthday = str_replace(' ', 'T', $field[0]['value']);
    $webuserdto->Birthday = $birthday;
  }

  $eanaddressdto = new \KTC\WebUser\EANAddressDto();

  if ($field = field_get_items('user', $account, 'field_adresse')) {
    $eanaddressdto->AddressLine1 = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_adresse_2')) {
    $eanaddressdto->AddressLine2 = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_city')) {
    $eanaddressdto->City = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_zipcode')) {
    $eanaddressdto->PostalCode = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_country')) {
    $eanaddressdto->Country = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_regioner')) {
    $term_name = _ktc_crm_get_term_name($field[0]['tid']);
    $term_name = $term_name;
    $eanaddressdto->Region = $term_name;
  }

  $eanaddressdto->AddressType = 'Private';

  $webuserdto->Adresses = new stdClass();
  $webuserdto->Adresses->EANAddressDto = $eanaddressdto;

  if ($field = field_get_items('user', $account, 'field_account')) {
    if ($company = taxonomy_term_load($field[0]['tid'])) {
      $account_uuid = _ktc_crm_get_uuid('taxonomy_term', $company);
      $webuserdto->DepartmentId = $account_uuid;
    }
  }

  $extra_fields = array(
    'field_special_skills' => 'AndreKompetencer',
    'field_twitter_brugernavn' => 'TwitterBrugernavn',
    'field_linkedin' => 'LinkedInBrugernavn',
    'field_uddannelser_og_kurser' => 'UddannelseOgKurser',
    'field_memberships_text' => 'MemberOther',
    'field_membership_appointments' => 'UdpegningerIForeningerUdvalgOgNaevn',
  );

  foreach ($extra_fields as $field_name => $crm_field) {
    if ($field = field_get_items('user', $account, $field_name)) {
      $webuserdto->{$crm_field} = $field[0]['value'];
    }
  }

  $memberships = array(
    'field_membership_kef' => 'KefMember',
    'field_membership_ktc' => 'KtcMember',
    'field_membership_dp' => 'DpMember',
    'field_membership_kvf' => 'KvfMember',
    'field_membership_envina' => 'EnvinaMember',
    'field_membership_dabyfo' => 'DabyfoMember',
    'field_membership_kpn' => 'KpnMember',
    'field_membership_ffuk' => 'FfukMember',
  );

  foreach ($memberships as $field_name => $crm_field) {
    if ($field = field_get_items('user', $account, $field_name)) {
      $webuserdto->{$crm_field} = (bool) $field[0]['value'];
    }
  }

  // Topics is a text field in CRM.
  if ($field_topics = field_get_items('user', $account, 'field_topics')) {
    $topics = '';

    foreach ($field_topics as $field) {
      $term = taxonomy_term_load($field['tid']);

      $topics .= $term->name . "\n";
    }

    // CRM can only handle 2000 characters in this field.
    $webuserdto->EmnerFraWeb = substr($topics, 0, 1999);
  }

  $webuserdto->Active = $account->status;

  $webuserdto->WebUser = TRUE;

  if ($account->access) {
    $webuserdto->LastLogin = date('Y-m-d\TH:i:s', $account->access);
  }

  return $webuserdto;
}

/**
 * Update user account in drupal, from WebUserDto.
 */
function ktc_crm_update_account_from_webuserdto(\KTC\WebUser\WebUserDto $webuserdto) {
  $uuid = $webuserdto->CrmId;

  if ($account = ktc_crm_load_account_from_crm_uuid($uuid)) {

    $edit = ktc_crm_map_webuserdto_to_edit_array($webuserdto, $account->uid);

    user_save($account, $edit);
  }
}

/**
 * Map WebUserDto to edit array for user object.
 */
function ktc_crm_map_webuserdto_to_edit_array($webuserdto, $uid = 0) {
  $edit = array();

  $edit['mail'] = $webuserdto->EMail;
  $edit['field_crm_uuid'][LANGUAGE_NONE][0]['value'] = $webuserdto->CrmId;
  // Setting wheter the account is active or not.
  $edit['status'] = $webuserdto->Active;
  // Username is generated from firstname, lastname and toplevelaccount name.
  $edit['name'] = ktc_users_generate_username($webuserdto->FirstName . ' ' . $webuserdto->LastName, $webuserdto->TopLevelAccountName, $webuserdto->EMail, $uid);

  $edit['field_navn'][LANGUAGE_NONE][0]['value'] = $webuserdto->FirstName;
  $edit['field_efternavn'][LANGUAGE_NONE][0]['value'] = $webuserdto->LastName;
  $edit['field_jobposition'][LANGUAGE_NONE][0]['value'] = $webuserdto->Salutation;
  $edit['field_dob'][LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($webuserdto->Birthday));
  $edit['field_phone'][LANGUAGE_NONE][0]['value'] = $webuserdto->Phone;
  $edit['field_cell'][LANGUAGE_NONE][0]['value'] = $webuserdto->MobilePhone;

  if (is_array($webuserdto->Adresses->EANAddressDto)) {
    $edit['field_adresse'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->AddressLine1;
    $edit['field_adresse_2'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->AddressLine2;
    $edit['field_country'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->Country;
    $edit['field_city'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->City;
    $edit['field_zipcode'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->PostalCode;

    if ($region_tid = _ktc_crm_group_get_region_tid($webuserdto->Adresses->EANAddressDto[1]->Region)) {
      $edit['field_regioner'][LANGUAGE_NONE][0]['tid'] = $region_tid;
    }
  }

  if ($account = ktc_crm_account_load_from_uuid($webuserdto->DepartmentId)) {
    $edit['field_account'][LANGUAGE_NONE][0]['tid'] = $account->tid;

    // Calculate the usertype. And set it.
    $top_level_term = end(taxonomy_get_parents_all($account->tid));
    $ktc_users_edit_type_company_map = array_flip(variable_get('ktc_users_edit_type_company_map', array()));
    $usertype_tid = $ktc_users_edit_type_company_map[$top_level_term->tid];

    $edit['field_usertype'][LANGUAGE_NONE][0]['tid'] = $usertype_tid;
  }
  $edit['field_employer_name'][LANGUAGE_NONE][0]['value'] = $webuserdto->TopLevelAccountName;

  $extra_fields = array(
    'field_special_skills' => 'AndreKompetencer',
    'field_twitter_brugernavn' => 'TwitterBrugernavn',
    'field_linkedin' => 'LinkedInBrugernavn',
    'field_uddannelser_og_kurser' => 'UddannelseOgKurser',
    'field_memberships_text' => 'MemberOther',
    'field_membership_appointments' => 'UdpegningerIForeningerUdvalgOgNaevn',
  );

  foreach ($extra_fields as $field_name => $crm_field) {
    $edit[$field_name][LANGUAGE_NONE][0]['value'] = $webuserdto->{$crm_field};
  }

  $memberships = array(
    'field_membership_kef' => 'KefMember',
    'field_membership_ktc' => 'KtcMember',
    'field_membership_dp' => 'DpMember',
    'field_membership_kvf' => 'KvfMember',
    'field_membership_envina' => 'EnvinaMember',
    'field_membership_dabyfo' => 'DabyfoMember',
    'field_membership_kpn' => 'KpnMember',
    'field_membership_ffuk' => 'FfukMember',
  );

  foreach ($memberships as $field_name => $crm_field) {
    $edit[$field_name][LANGUAGE_NONE][0]['value'] = (int) $webuserdto->{$crm_field};
  }

  if ($uid && is_int($uid)) {
    if ($user_account = user_load($uid)) {
      $edit['roles'] = $user_account->roles;
    }
  }

  return $edit;
}

/**
 * Load a user with the supplied crm UUID.
 */
function ktc_crm_load_account_from_crm_uuid($uuid) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'user')
     ->fieldCondition('field_crm_uuid', 'value', $uuid);
  $result = $query->execute();

  if (isset($result['user'])) {
    return user_load(key($result['user']));
  }
  return FALSE;
}

/**
 * Update the users membership category in CRM.
 */
function ktc_crm_webuser_update_membership_category($account, $category) {
  $edit['field_membership_ktc'][LANGUAGE_NONE][0]['value'] = 1;
  $edit['field_membership_ktc_category'][LANGUAGE_NONE][0]['value'] = $category;
  user_save($account, $edit);

  $webuserdto = ktc_crm_map_account_to_webuserdto($account);
  $webuserdto->KtcMemberCategory = $category;
  $webuserdto->KtcMember = TRUE;
  ktc_crm_update_user($webuserdto);
}

/**
 * Cancel ktc membership set boolean to false.
 */
function ktc_crm_webuser_cancel_membership($account) {
  $webuserdto = ktc_crm_map_account_to_webuserdto($account);

  $webuserdto->KtcMember = FALSE;

  $edit['field_membership_ktc'][LANGUAGE_NONE][0]['value'] = 0;

  user_save($account, $edit);
  ktc_crm_update_user($webuserdto);
}

/**
 * Return membership categories.
 */
function ktc_crm_webuser_membership_categories() {
  // CRM allowed value => pretty name.
  return array(
    'DirektoerDirektionsmedlem'                    => '§3. Stk.1A - Direktør/direktionsmedlem',
    'DirektoerDirektionsmedlemSuppl'               => '§3. Stk.1A-sup - Direktør/direktionsmedlem suppl.',
    'AndreCheferMedRefTil1A'                       => '§3. Stk.1B - Andre chefer med ref. til 1a',
    'DirektoerOeversteChefFaellesKommunalSelskab'  => '§3. Stk.1C - Direktør/øverste chef fælles kommunal selskab',
    'AndreCheferMedRefTil1C'                       => '§3. Stk.1D - Andre chefer med ref. til 1c',
    'DirektoerI100ProcentKommEjetSelskab'          => '§3. Stk.1E - Direktør i 100% komm. ejet selskab',
    'FormandAssocieringForening'                   => '§3. Stk.1F - Formand associeret forening',
    'SaerligFagkundskabEllerLedendeRolle'          => '§3. Stk.1G - Særlig fagkundskab eller ledende rolle',
    'Senior'                                       => 'Senior',
  );
}
