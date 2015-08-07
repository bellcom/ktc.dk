<?php

include dirname(__FILE__) . '/transform.php';
include dirname(__FILE__) . '/handler.php';

$file_contents = file_get_contents(__DIR__ . '/var/' . 'og_users_roles.json');

$data = json_decode($file_contents);

foreach ($data as $group_nid => $_data) {
  $new_group_nid = ktc_import_new_nid($group_nid);
  error_log(__FILE__ . ' : ' . __LINE__ . ' : ' .  print_r($new_group_nid, 1));

  foreach ($_data as $uid => $roles) {
    $new_uid = ktc_import_new_uid($uid);

    foreach ($roles as $role) {
      if ($role == 3) {

        if ($membership = og_get_membership('node', $new_group_nid, 'user', $new_uid)) {
          og_role_grant('node', $new_group_nid, $new_uid, 3);
          $membership->field_grouprole[LANGUAGE_NONE][0]['target_id'] = KTC_NETVAERK_ADMIN_TID;
          og_membership_save($membership);
        }
      }
    }
  }
}
