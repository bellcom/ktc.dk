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
  }

  return FALSE;
}

/**
 * Fetch subscriptions from Webservice.
 */
function ktc_crm_fetch_subscriptions($options = array()) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_SUBSCRIPTION_WSDL;

  try {
    $subscription = new KTC\Subscription\Subscription(array(), $wsdl_url);

    $request = new KTC\Subscription\Request();

    $retrievesubscriptions = new KTC\Subscription\RetrieveSubscriptions($request);

    $result = $subscription->RetrieveSubscriptions($retrievesubscriptions);

    if (is_object($result) && isset($result->RetrieveSubscriptionsResult)) {
      return $result->RetrieveSubscriptionsResult;
    }

  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
}

/**
 * Update a user subscription using the Webservice.
 *
 * @todo figure out how the user is related to the subscription.
 * @todo chosen address switch is not updated in crm
 */
function ktc_crm_update_user_subscription(\KTC\Subscription\SubscriptionDto $subscriptiondto) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_SUBSCRIPTION_WSDL;

  try {
    $subscription = new KTC\Subscription\Subscription(array(), $wsdl_url);

    $createupdatesubscriptions = new KTC\Subscription\CreateUpdateSubscription($subscriptiondto);

    $result = $subscription->CreateUpdateSubscription($createupdatesubscriptions);

    if (is_object($result) && isset($result->CreateUpdateSubscriptionResponse)) {
      return $result->CreateUpdateSubscriptionResponse;
    }

  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
}

/**
 * Fetch a users subscriptions from Webservice.
 *
 * @todo figure out how the users subscriptions are fetched.
 */
function ktc_crm_subscriptions_fetch_user_subscriptions($user = NULL) {
  if (!$user) {
    global $user;
  }

  $account = user_load($user->uid);

  if ($crm_uuid_field = field_get_items('user', $account, 'field_crm_uuid')) {
    $user_uuid = strtolower($crm_uuid_field[0]['value']);
  }

  $subscriptions = ktc_crm_fetch_subscriptions();

  $user_subscriptions = array();

  foreach ($subscriptions->Results->SubscriptionDto as $subscription) {
    if ($subscription->RecipientId == $user_uuid) {
      $user_subscriptions[] = $subscription;
    }
  }

  return $user_subscriptions;
}

/**
 * Fetch groups from the webservice.
 */
function ktc_crm_fetch_groups($options = array()) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $request = new \KTC\GroupService\Request();

    foreach ($options as $key => $value) {
      $request->$key = $value;
    }

    $retrivegroups = new \KTC\GroupService\RetrieveGroups($request);

    $result = $groupservice->RetrieveGroups($retrivegroups);

    if (is_object($result) && isset($result->RetrieveGroupsResult)) {
      return $result->RetrieveGroupsResult;
    }
  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
}

/**
 * Fetch group userroles from the webservice.
 */
function ktc_crm_fetch_grouproles($options = array()) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $request = new \KTC\GroupService\Request();

    foreach ($options as $key => $value) {
      $request->$key = $value;
    }

    $retrivegroups = new \KTC\GroupService\RetrieveGroupRoles($request);

    $result = $groupservice->RetrieveGroupRoles($retrivegroups);

    if (is_object($result) && isset($result->RetrieveGroupRolesResult)) {
      return $result->RetrieveGroupRolesResult;
    }
  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
}

/**
 * Fetch group users from the webservice.
 */
function ktc_crm_fetch_groupmembers() {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $request = new \KTC\GroupService\Request();
    $retrivegroups = new \KTC\GroupService\RetrieveGroupMembers($request);

    $result = $groupservice->RetrieveGroupMembers($retrivegroups);

    if (is_object($result) && isset($result->RetrieveGroupMembersResult)) {
      return $result->RetrieveGroupMembersResult;
    }
  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
}

/**
 * Update groupmembership.
 */
function ktc_crm_update_groupmember(\KTC\GroupService\GroupMemberDto $groupmemberdto) {
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $createupdategroupmember = new \KTC\GroupService\CreateUpdateGroupMember($groupmemberdto);

    $result = $groupservice->CreateUpdateGroupMember($createupdategroupmember);

    if (is_object($result) && isset($result->CreateUpdateGroupMemberResult)) {
      return $result->CreateUpdateGroupMemberResult;
    }
  }
  catch (\Exception $e) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($e, 1));
  }

  return FALSE;
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
