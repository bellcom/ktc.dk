<?php
/**
 * @file
 * Webuser specifics for the ktc_crm module.
 */

/**
 * Implements hook_user_presave().
 */
function ktc_crm_user_presave(&$edit, $account, $category) {
  // Only update user if $_POST['form_id'] is correct. Presave is also called
  // when a user is updated programmatically, so this could turn into an
  // unwanted loop otherwise.
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'user_profile_form') {
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
        $edit['field_crm_uuid'][LANGUAGE_NONE][1]['value'] = $crm_uuid;
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
}

/**
 * Get users address.
 */
function ktc_crm_get_user_address($user, $type) {
  switch ($type) {
    case 'Work':
      if ($field = field_get_items('user', $user, 'field_account')) {
        if ($account = taxonomy_term_load($field[0]['tid'])) {
          $address = _ktc_crm_get_formatted_address($account, 'taxonomy_term');
        }
      }
      break;

    case 'Private':
      $address = _ktc_crm_get_formatted_address($user, 'user');
      break;
  }

  return $address;
}

/**
 * Get formatted address from entity.
 */
function _ktc_crm_get_formatted_address($entity, $type) {
  $address = '';

  if ($field = field_get_items($type, $entity, 'field_adresse')) {
    $address = $field[0]['value'] . '<br />';
  }
  if ($field = field_get_items($type, $entity, 'field_adresse_2')) {
    $address .= $field[0]['value'] . '<br />';
  }
  if ($field = field_get_items($type, $entity, 'field_zipcode')) {
    $address .= $field[0]['value'] . ' ';
  }
  if ($field = field_get_items($type, $entity, 'field_city')) {
    $address .= $field[0]['value'] . '<br />';
  }
  if ($field = field_get_items($type, $entity, 'field_country')) {
    $address .= $field[0]['value'];
  }

  return $address;
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

  if ($name_field = field_get_items('user', $account, 'field_navn')) {
    $name_array = explode(' ', $name_field[0]['value']);
    $firstname = $name_array[0];

    array_shift($name_array);

    $lastname = implode(' ', $name_array);

    $webuserdto->FirstName = $firstname;
    $webuserdto->LastName = $lastname;
  }

  if ($field = field_get_items('user', $account, 'field_jobposition')) {
    $webuserdto->Salutation = $field[0]['value'];
  }

  if ($field = field_get_items('user', $account, 'field_phone')) {
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
    $eanaddressdto->Region = $term_name;
  }

  $eanaddressdto->AddressType = 'Private';

  $webuserdto->Adresses = new stdClass();
  $webuserdto->Adresses->EANAddressDto = $eanaddressdto;

  if ($field = field_get_items('user', $account, 'field_account')) {
    if ($account = taxonomy_term_load($field[0]['tid'])) {
      $account_uuid = _ktc_crm_get_uuid('taxonomy_term', $account);
      $webuserdto->DepartmentId = $account_uuid;
    }
  }

  $webuserdto->Active = $account->status;

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

    $edit = ktc_crm_map_webuserdto_to_edit_array($webuserdto);

    user_save($account, $edit);
  }
}

/**
 * Map WebUserDto to edit array for user object.
 */
function ktc_crm_map_webuserdto_to_edit_array($webuserdto) {
  $edit = array();

  $edit['mail'] = $webuserdto->EMail;
  // Username is generated from firstname, lastname and toplevelaccount name.
  $edit['name'] = $webuserdto->FirstName . ' ' . $webuserdto->LastName . ' - '
    . str_replace(array(','), '', $webuserdto->TopLevelAccountName);

  $edit['field_navn'][LANGUAGE_NONE][0]['value'] = $webuserdto->FirstName . ' ' . $webuserdto->LastName;
  $edit['field_jobposition'][LANGUAGE_NONE][0]['value'] = $webuserdto->Salutation;
  $edit['field_dob'][LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($webuserdto->Birthday));
  $edit['field_phone'][LANGUAGE_NONE][0]['value'] = $webuserdto->Phone;
  $edit['field_cell'][LANGUAGE_NONE][0]['value'] = $webuserdto->MobilePhone;

  $edit['field_adresse'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->AddressLine1;
  $edit['field_adresse_2'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->AddressLine2;
  $edit['field_country'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->Country;
  $edit['field_city'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->City;
  $edit['field_zipcode'][LANGUAGE_NONE][0]['value'] = $webuserdto->Adresses->EANAddressDto[1]->PostalCode;

  if ($account = ktc_crm_account_load_from_uuid($webuserdto->DepartmentId)) {
    $edit['field_account'][LANGUAGE_NONE][0]['tid'] = $account->tid;
  }
  $edit['field_employer_name'][LANGUAGE_NONE][0]['value'] = $webuserdto->TopLevelAccountName;

  if ($region_tid = _ktc_crm_group_get_region_tid($webuserdto->Adresses->EANAddressDto[1]->Region)) {
    $edit['field_regioner'][LANGUAGE_NONE][0]['tid'] = $region_tid;
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
