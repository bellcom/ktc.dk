<?php
/**
 * @file
 * Syncronize users with CRM.
 *
 * The flow of this script is as follows:
 * - Fetch all users from CRM
 * - Try to match the user on e-mail
 *  - If the user matches set CRM UUID on the drupal user
 *  - If not set the webuser property of the user to FALSE and send it back
 */

// We have to take it in chunks, because of the possible amount of data.
// 100 at a time, seems appropriate.
$amount = 100;

// Counters.
$count_all = 0;
$no_email = 0;
$uids = array();

echo "This will set up the initial user syncronization based on users emails.\n";

    echo "Name,";
    echo "UserName,";
    echo "CrmId,";
    echo "WebUser,";
    echo "Website\n";

$fetch_users = TRUE;

while ($fetch_users) {
  $options = array(
    'MaxReturned' => $amount,
    'Skip' => ($i * $amount),
  );
  $start = time();

  $webusers = ktc_crm_fetch_webusers($options);
  $stop = time();

  if (!$webusers) {
    $fetch_users = FALSE;
    return;
  }

  // Just for the fun of it we time it.
#  echo "Time for connection " . ($stop - $start) . "s\n";

  foreach ($webusers as $webuserdto) {
    $uid = 0;
    if (!$webuserdto->EMail) {
    echo $webuserdto->FirstName . " " . $webuserdto->LastName . ",";
    echo $webuserdto->UserName . ",";
    echo $webuserdto->CrmId . ",";
    echo $webuserdto->WebUser . ",";
    echo $webuserdto->Website . "\n";

#      sync_users_disable_webuser($webuserdto);
      $no_email++;
    }
    else {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'user')
         ->propertyCondition('mail', $webuserdto->EMail);
      $result = $query->execute();

      if (isset($result['user'])) {
        $uid = key($result['user']);

        sync_users_update_user($uid, $webuserdto);
        $uids[] = $uid;
      }
    }
    $count_all++;
 }

  $i++;
}

/**
 * Enable this, when we want to send all users that are in drupal but not
 * matched with CRM users to CRM.
 *
// Send the users from drupal, that are not in the webservice to CRM.
foreach ($uids as $uid) {
  $webuserdto = ktc_crm_map_account_to_webuserdto(user_load($uid));
  if ($crm_uuid = ktc_crm_update_user($webuserdto)) {
    $edit['field_crm_uuid'][LANGUAGE_NONE][1]['value'] = $crm_uuid;
  }
}
 */

/**
 * Update a drupal user, from the webuserdto.
 */
function sync_users_update_user($uid, $webuserdto) {
  $account = user_load($uid);
  $edit = ktc_crm_map_webuserdto_to_edit_array($webuserdto);

  error_log('Sync: ' . $uid . ' > ' . $account->name);
  user_save($account, $edit);
}

/**
 * Disable a webuser in the Webservice.
 */
function sync_users_disable_webuser($webuserdto) {
  // Set "WebUser" to 0, this will exclude the user from the webservice.
  // $webuserdto->WebUser = 0;
  // ktc_crm_update_user($webuserdto);

  error_log('Disable: ' .  print_r($webuserdto->FirstName, 1));
}
