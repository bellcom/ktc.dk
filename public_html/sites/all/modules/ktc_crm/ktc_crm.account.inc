<?php
/**
 * @file
 * Company specifics for CRM integration.
 */

/**
 * Update accounts.
 */
function ktc_crm_account_update_accounts() {
  $accounts = ktc_crm_fetch_accounts();

  $vocab = taxonomy_vocabulary_machine_name_load('accounts');

  // Set all terms as updated = 0.
  db_update('taxonomy_term_data')
    ->fields(array('updated' => 0))
    ->condition('vid', $vocab->vid)
    ->execute();

  foreach ($accounts as $accountdto) {
    ktc_crm_account_create_update($accountdto);
  }

  // Fetch all accounts not updated, and remove them.
  $result = db_query('SELECT * FROM {taxonomy_term_data} WHERE updated = 0 AND vid = :vid', array(':vid' => $vocab->vid));
  foreach ($result as $record) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($record, 1));
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

  if ($region_tid = _ktc_crm_group_get_region_tid($accountdto->Region)) {
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

  // Set status updated = 1
  db_update('taxonomy_term_data')
    ->fields(array('updated' => 1))
    ->condition('tid', $account->tid)
    ->execute();
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
