<?php
/**
 * @file
 * Company specifics for CRM integration.
 */

/**
 * Update accounts.
 */
function ktc_crm_account_update_accounts() {
  $logger = KtcCrmLogger::getInstance();
  $logger->log->addInfo('cron', 'start account sync');
  // The webservice complains about not using paging cookie.
  $fetch_accounts = TRUE;
  $amount = 100;
  $i = 0;

  $vocab = taxonomy_vocabulary_machine_name_load('accounts');
  // Set all terms as updated = 0. When the term is updated, it will be set
  // to 1.
  db_update('taxonomy_term_data')
    ->fields(array('updated' => 0))
    ->condition('vid', $vocab->vid)
    ->execute();

  while ($fetch_accounts) {
    $options = array(
      'MaxReturned' => $amount,
      'Skip' => ($i * $amount),
      'UpdatedSince' => $updated_since,
    );

    $accounts = ktc_crm_fetch_accounts($options);

    if (!$accounts && $i == 0) {
      // If no accounts are returned on first fetch, don't no anything more.
      $logger->log->addInfo('cron', 'no accounts returned from webservice');
      return;
    }
    if (!$accounts) {
      $fetch_accounts = FALSE;
      break;
    }

    foreach ($accounts as $accountdto) {
      // Reset the static cache for taxonomy terms. Before this we ran out of
      // memory once in a while.
      taxonomy_terms_static_reset();
      ktc_crm_account_create_update($accountdto);
    }
    $i++;
  }

  // Fetch all accounts not updated, and remove them. We only get here if some
  // accounts are updated.
  $result = db_query('SELECT * FROM {taxonomy_term_data} WHERE updated = 0 AND vid = :vid', array(':vid' => $vocab->vid));

  foreach ($result as $record) {
    taxonomy_term_delete($record->tid);
  }
}

/**
 * Create/update account from AccountDto.
 */
function ktc_crm_account_create_update(\KTC\AccountService\AccountDto $accountdto) {
  $vocab = taxonomy_vocabulary_machine_name_load('accounts');
  $logger = KtcCrmLogger::getInstance();

  $logger->log->addDebug('create_update_account', $accountdto);
  // Try to load an account term.
  $account = ktc_crm_account_load_from_uuid($accountdto->CrmId);

  // If no luck, create a new one.
  if (!$account) {
    $account = new StdClass();
    $account->vid = $vocab->vid;
    $account->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $accountdto->CrmId;
  }

  $account->name = $accountdto->Name;

  if ($accountdto->DepartmentId) {
    if ($department = ktc_crm_account_load_from_uuid($accountdto->DepartmentId)) {
      $account->parent = array($department->tid);
    }
  }

  $account->field_account_number[LANGUAGE_NONE][0]['value'] = $accountdto->Address->AccountNumber;

  $account->field_adresse[LANGUAGE_NONE][0]['value'] = $accountdto->Address->AddressLine1;
  $account->field_adresse_2[LANGUAGE_NONE][0]['value'] = $accountdto->Address->AddressLine2;
  $account->field_city[LANGUAGE_NONE][0]['value'] = $accountdto->Address->City;
  $account->field_zipcode[LANGUAGE_NONE][0]['value'] = $accountdto->Address->PostalCode;
  $account->field_country[LANGUAGE_NONE][0]['value'] = $accountdto->Address->Country;

  if ($region_tid = _ktc_crm_group_get_region_tid($accountdto->Address->Region)) {
    $account->field_regioner[LANGUAGE_NONE]['0']['tid'] = $region_tid;
  }

  $account->field_departmentid[LANGUAGE_NONE][0]['value'] = $accountdto->DepartmentId;
  $account->field_departmentname[LANGUAGE_NONE][0]['value'] = $accountdto->DepartmentName;

  $account->field_toplevelaccountid[LANGUAGE_NONE][0]['value'] = $accountdto->TopLevelAccountId;
  $account->field_toplevelaccountname[LANGUAGE_NONE][0]['value'] = $accountdto->TopLevelAccountName;

  $account->field_phone[LANGUAGE_NONE][0]['value'] = $accountdto->Phone;

  $account->field_ean[LANGUAGE_NONE][0]['value'] = $accountdto->Address->EAN;
  $account->field_cvr[LANGUAGE_NONE][0]['value'] = $accountdto->Cvr;

  taxonomy_term_save($account);

  if ($accountdto->CustomerTypeName) {
    ktc_crm_account_set_type($account, $accountdto->CustomerTypeName, $accountdto->TopLevelAccountId);
  }

  // Set status updated = 1
  db_update('taxonomy_term_data')
    ->fields(array('updated' => 1))
    ->condition('tid', $account->tid)
    ->execute();
}

/**
 * Set the top level account type for toplevelaccount term.
 */
function ktc_crm_account_set_type($account, $type, $toplevelaccountid) {
  // The account type determine the parent term for the toplevelaccount.
  // This creates a term, for the type set on the account.
  $vocab = taxonomy_vocabulary_machine_name_load('accounts');
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
     ->propertyCondition('name', $type)
     ->propertyCondition('vid', $vocab->vid);
  $result = $query->execute();

  if (!empty($result['taxonomy_term'])) {
    $type_term = taxonomy_term_load(key($result['taxonomy_term']));
  }
  else {
    $type_term = new StdClass();
    $type_term->vid = $vocab->vid;
    $type_term->name = $type;
    taxonomy_term_save($type_term);
  }

  // Set status updated = 1
  db_update('taxonomy_term_data')
    ->fields(array('updated' => 1))
    ->condition('tid', $type_term->tid)
    ->execute();

  if ($toplevelaccountid) {
    $toplevelaccount = ktc_crm_account_load_from_uuid($toplevelaccountid);
  }
  else {
    // The account is toplevel.
    $toplevelaccount = $account;
  }

  if (is_object($toplevelaccount)) {
    $toplevelaccount->parent = array($type_term->tid);

    taxonomy_term_save($toplevelaccount);
  }
}

/**
 * Get Account from UUID.
 */
function ktc_crm_account_load_from_uuid($uuid) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
     ->fieldCondition('field_crm_uuid', 'value', $uuid);
  $result = $query->execute();

  if (!empty($result['taxonomy_term'])) {
    return taxonomy_term_load(key($result['taxonomy_term']));
  }

  return FALSE;
}

/**
 * Return top level account term for specified term.
 */
function ktc_crm_account_load_top_level_account($account) {
  if ($field = field_get_items('taxonomy_term', $account, 'field_toplevelaccountid')) {
    return ktc_crm_account_load_from_uuid($field[0]['value']);
  }
  return $account;
}

/**
 * Get users account term.
 */
function _ktc_crm_account_get_users_account($account) {
  if ($field = field_get_items('user', $account, 'field_account')) {
    return taxonomy_term_load($field[0]['tid']);
  }
  return FALSE;
}
