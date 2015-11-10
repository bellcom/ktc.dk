<?php

/*
 * $user = user_load(28);
 *
 * print_r($user);
 */

// $email = 'bpa@odense.dk';
$email = 'ngm@randers.dk';
// $email = 'lmn@ktc.dk';
// $email = 'pml@jammerbugt.dk';
// $email = 'amc@ktc.dk';

$result = ktc_crm_lookup_webuser_by_mail($email);
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
  echo $crm_field. '=' . (int) $result->{$crm_field}."\n";
}

print_r($result);

$account = ktc_crm_account_load_from_uuid($result->DepartmentId);
print_r($account);
// $result = ktc_crm_map_webuserdto_to_edit_array($result);

/*
 * $result = ktc_crm_fetch_grouproles();
 * print_r($result);
 */
return;

$fetch_users = TRUE;
$amount = 100;
$i = 0;

$offset = date('Z');
$updated_since = date('Y-m-d\TH:i:s', ($last_run - $offset));

while ($fetch_users) {
  $options = array(
    'MaxReturned' => $amount,
    'Skip' => ($i * $amount),
  );

  $webusers = ktc_crm_fetch_webusers($options);

  if (!$webusers) {
    $fetch_users = FALSE;
    return;
  }

  foreach ($webusers as $webuser) {
    echo $webuser->LastSavedByCrmName.' '. $webuser->EMail."\n";
  }
  $i++;
}
