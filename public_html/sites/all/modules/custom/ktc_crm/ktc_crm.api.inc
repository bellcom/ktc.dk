<?php
/**
 * @file
 * API definitions for interacting with this module.
 */

/**
 * Fetch all webusers from Webservice.
 */
function ktc_crm_fetch_webusers($options = array()) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_WEBUSER_WSDL;

  try {
    $webuser = new KTC\WebUser\WebUser(array(), $wsdl_url);

    $request = new KTC\WebUser\Request();

    foreach ($options as $key => $value) {
      $request->$key = $value;
    }

    $retrievewebusers = new KTC\WebUser\RetrieveWebUsers($request);

    $result = $webuser->RetrieveWebUsers($retrievewebusers);

    $webusers = $result->RetrieveWebUsersResult->Results->WebUserDto;

    if ($webusers) {
      if (is_array($webusers)) {
        return $webusers;
      }
      // If there is only one, it won't be returned as an array.
      else {
        return array($webusers);
      }
    }
  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
}

/**
 * Update user in CRM.
 */
function ktc_crm_update_user(\KTC\WebUser\WebUserDto $webuserdto) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_WEBUSER_WSDL;

  try {
    $webuser = new KTC\WebUser\WebUser(array(), $wsdl_url);

    $createupdate = new KTC\WebUser\CreateUpdateWebUser($webuserdto);

    $result = $webuser->CreateUpdateWebUser($createupdate);

    if (is_object($result) && isset($result->CreateUpdateWebUserResult)) {
      return $result->CreateUpdateWebUserResult;
    }
  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
    return FALSE;
  }

  return FALSE;
}

/**
 * Update user account in drupal, from WebUserDto.
 */
function ktc_crm_update_account_from_webuserdto(\KTC\WebUser\WebUserDto $webuserdto) {
  error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($webuserdto, 1));
  $uuid = $webuserdto->CrmId;

  if ($account = ktc_crm_load_account_from_crm_uuid($uuid)) {

    $edit = ktc_crm_map_webuserdto_to_edit_array($webuserdto);

    user_save($account, $edit);
  }
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
