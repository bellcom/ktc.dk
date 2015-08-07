<?php
/**
 * @file
 * API definitions for interacting with this module.
 */

/**
 * Fetch all webusers from Webservice.
 */
function ktc_crm_fetch_webusers($options = array()) {
  $logger = KtcCrmLogger::getInstance();
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

    $logger->log->addDebug('RetrieveWebUsers result', $result);

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
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveWebUsers',
    ));
  }

  return FALSE;
}

/**
 * Lookup user in CRM by e-mail.
 */
function ktc_crm_lookup_webuser_by_mail($mail) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_WEBUSER_WSDL;

  $logger->log->AddInfo('RetrieveWebUsersByMail', $mail);

  try {
    $webuser = new KTC\WebUser\WebUser(array(), $wsdl_url);

    $retrievewebuserbymail = new KTC\WebUser\RetrieveWebUserByMail($mail);

    $result = $webuser->RetrieveWebUserByMail($retrievewebuserbymail);

    $logger->log->AddDebug('RetrieveWebUserByMail result', $result);

    if (is_object($result->RetrieveWebUserByMailResult->Results->WebUserDto)) {
      return $result->RetrieveWebUserByMailResult->Results->WebUserDto;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveWebUserByMail',
    ));
    return 'error';
  }

  return FALSE;
}

/**
 * Update user in CRM.
 */
function ktc_crm_update_user(\KTC\WebUser\WebUserDto $webuserdto) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_WEBUSER_WSDL;

  $logger->log->addInfo('CreateUpdateWebUser', $webuserdto);
  try {
    $webuser = new KTC\WebUser\WebUser(array(), $wsdl_url);

    $createupdate = new KTC\WebUser\CreateUpdateWebUser($webuserdto);

    $result = $webuser->CreateUpdateWebUser($createupdate);

    $logger->log->addDebug('CreateUpdateWebUser result', $result);

    if (is_object($result) && isset($result->CreateUpdateWebUserResult)) {
      return $result->CreateUpdateWebUserResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'CreateUpdateWebUser',
    ));
  }

  return FALSE;
}

/**
 * Fetch subscriptions from Webservice.
 */
function ktc_crm_fetch_subscriptions($options = array()) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_SUBSCRIPTION_WSDL;

  try {
    $subscription = new KTC\Subscription\Subscription(array(), $wsdl_url);

    $request = new KTC\Subscription\Request();

    $retrievesubscriptions = new KTC\Subscription\RetrieveSubscriptions($request);

    $result = $subscription->RetrieveSubscriptions($retrievesubscriptions);

    $logger->log->addDebug('RetrieveSubscriptions result', $result);

    if (is_object($result) && isset($result->RetrieveSubscriptionsResult)) {
      return $result->RetrieveSubscriptionsResult;
    }

  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveSubscriptions',
    ));
    return 'error';
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
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_SUBSCRIPTION_WSDL;

  try {
    $subscription = new KTC\Subscription\Subscription(array(), $wsdl_url);

    $createupdatesubscriptions = new KTC\Subscription\CreateUpdateSubscription($subscriptiondto);

    $result = $subscription->CreateUpdateSubscription($createupdatesubscriptions);

    $logger->log->addDebug('CreateUpdateSubscription result', $result);

    if (is_object($result) && isset($result->CreateUpdateSubscriptionResponse)) {
      return $result->CreateUpdateSubscriptionResponse;
    }

  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => __FUNCTION__,
    ));
    return 'error';
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

  $subscriptions = &drupal_static(__FUNCTION__);
  if (isset($subscriptions[$user->uid])) {
    return $subscriptions[$user->uid];
  }

  $account = user_load($user->uid);

  if ($crm_uuid_field = field_get_items('user', $account, 'field_crm_uuid')) {
    $user_uuid = strtolower($crm_uuid_field[0]['value']);
  }
  else {
    return 'error';
  }

  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_SUBSCRIPTION_WSDL;

  try {
    $subscription = new KTC\Subscription\Subscription(array(), $wsdl_url);

    $retrievesubscriptionsforsubscriber = new KTC\Subscription\RetrieveSubscriptionsForSubscriber($user_uuid);

    $result = $subscription->RetrieveSubscriptionsForSubscriber($retrievesubscriptionsforsubscriber);
    if (is_object($result) && isset($result->RetrieveSubscriptionsForSubscriberResult)) {
      $fetch_subscription = reset($result->RetrieveSubscriptionsForSubscriberResult);
      if (is_object($fetch_subscription)) {
        $fetch_subscription = array($fetch_subscription);
      }
    }

   $user_subscriptions = array();
    if (isset($fetch_subscription) && is_array($fetch_subscription)) {
      foreach ($fetch_subscription as $subscription) {
        $subscription->is_active = TRUE;

        if ($subscription->EndDate) {
          $end = strtotime($subscription->EndDate);

          if (time() > $end) {
            continue;
          }
        }
        $user_subscriptions[$subscription->ProductId] = $subscription;
      }

      $subscriptions[$user->uid] = $user_subscriptions;
      return $user_subscriptions;
    }

  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => __FUNCTION__,
    ));
    return 'error';
  }

  return FALSE;
}

/**
 * Fetch groups from the webservice.
 */
function ktc_crm_fetch_groups($options = array()) {
  $logger = KtcCrmLogger::getInstance();
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

    $logger->log->addDebug('RetrieveGroups result', $result);

    if (is_object($result) && isset($result->RetrieveGroupsResult)) {
      return $result->RetrieveGroupsResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveGroups',
    ));
  }

  return FALSE;
}

/**
 * Fetch grouptypes from the webservice.
 */
function ktc_crm_fetch_grouptypess($options = array()) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $request = new \KTC\GroupService\Request();

    foreach ($options as $key => $value) {
      $request->$key = $value;
    }

    $retrivegrouptypes = new \KTC\GroupService\RetrieveGroupTypes($request);

    $result = $groupservice->RetrieveGroupTypes($retrivegrouptypes);

    $logger->log->addDebug('RetrieveGroupTypess result', $result);

    if (is_object($result) && isset($result->RetrieveGroupTypesResult)) {
      return $result->RetrieveGroupTypesResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => __FUNCTION__,
    ));
  }

  return FALSE;
}

/**
 * Fetch group userroles from the webservice.
 */
function ktc_crm_fetch_grouproles($options = array()) {
  $logger = KtcCrmLogger::getInstance();
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

    $logger->log->addDebug('RetrieveGroupRoles result', $result);

    if (is_object($result) && isset($result->RetrieveGroupRolesResult)) {
      return $result->RetrieveGroupRolesResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveGroupRoles',
    ));
  }

  return FALSE;
}

/**
 * Fetch group users from the webservice.
 */
function ktc_crm_fetch_groupmembers() {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $request = new \KTC\GroupService\Request();
    $retrivegroups = new \KTC\GroupService\RetrieveGroupMembers($request);

    $result = $groupservice->RetrieveGroupMembers($retrivegroups);

    $logger->log->addDebug('RetrieveGroupMembers result', $result);

    if (is_object($result) && isset($result->RetrieveGroupMembersResult)) {
      return $result->RetrieveGroupMembersResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveGroupMembers',
    ));
  }

  return FALSE;
}

/**
 * Update group.
 */
function ktc_crm_update_group(\KTC\GroupService\GroupDto $groupdto) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $createupdategroup = new \KTC\GroupService\CreateUpdateGroup($groupdto);

    $result = $groupservice->CreateUpdateGroup($createupdategroup);

    $logger->log->addDebug('CreateUpdateGroup result', $result);

    if (is_object($result) && isset($result->CreateUpdateGroupResult)) {
      return $result->CreateUpdateGroupResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'CreateUpdateGroupMember',
    ));
  }

  return FALSE;
}

/**
 * Update groupmembership.
 */
function ktc_crm_update_groupmember(\KTC\GroupService\GroupMemberDto $groupmemberdto) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_GROUPSERVICE_WSDL;

  try {
    $groupservice = new \KTC\GroupService\GroupService(array(), $wsdl_url);

    $createupdategroupmember = new \KTC\GroupService\CreateUpdateGroupMember($groupmemberdto);

    $result = $groupservice->CreateUpdateGroupMember($createupdategroupmember);

    $logger->log->addDebug('CreateUpdateGroupMember result', $result);

    if (is_object($result) && isset($result->CreateUpdateGroupMemberResult)) {
      return $result->CreateUpdateGroupMemberResult;
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'CreateUpdateGroupMember',
    ));
  }

  return FALSE;
}

/**
 * Fetch all accounts from Webservice.
 */
function ktc_crm_fetch_accounts($options = array()) {
  $logger = KtcCrmLogger::getInstance();
  $url = variable_get('ktc_crm_url', '');

  $wsdl_url = $url . '/' . KTC_CRM_ACCOUNTSERVICE_WSDL;

  try {
    $webuser = new \KTC\AccountService\AccountService(array(), $wsdl_url);

    $request = new \KTC\AccountService\Request();

    foreach ($options as $key => $value) {
      $request->$key = $value;
    }

    $retrieveaccounts = new \KTC\AccountService\RetrieveAccounts($request);

    $result = $webuser->RetrieveAccounts($retrieveaccounts);

    $logger->log->addDebug('RetrieveAccounts result', $result);

    $accounts = $result->RetrieveAccountsResult->Results->AccountDto;

    if ($accounts) {
      if (is_array($accounts)) {
        return $accounts;
      }
      // If there is only one, it won't be returned as an array.
      else {
        return array($accounts);
      }
    }
  }
  catch (\Exception $e) {
    $logger->log->addError('soap error', array(
      'message' => $e->getMessage(),
      'method' => 'RetrieveAccounts',
    ));

    if ($e->getMessage() == 'Error Fetching http headers') {
      return 'error';
    }
  }

  return FALSE;
}
