<?php
include dirname(__FILE__) . '/transform.php';
include dirname(__FILE__) . '/handler.php';

$file_contents = file_get_contents(__DIR__ . '/var/' . 'og_users_roles.json');

$data = json_decode($file_contents);

// CRM sync checks if the update is form a form submission by checking what
// form_id is set in the $_POST array. We want these changes sent to CRM.

// Maybe we don't
// $_POST['form_id'] = 'og_ui_edit_membership';

foreach ($data as $group_nid => $_data) {
  $new_group_nid = ktc_import_new_nid($group_nid);

  foreach ($_data as $uid => $roles) {
    $new_uid = ktc_import_new_uid($uid);

    if ($new_uid == 0) {
      continue;
    }

    if ($user = user_load($new_uid)) {
      og_group('node', $new_group_nid, array(
        "entity type"     => "user",
        "entity"          => $user,
        "membership type" => OG_MEMBERSHIP_TYPE_DEFAULT,
      ));
    }
  }
}
