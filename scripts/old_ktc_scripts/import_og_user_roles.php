<?php

$role_map = array(
  // old_role_id => array(
  //   network_type => new_role_id
  // )
  3 => array(
    1128 => 5,
    1129 => 5,
    1130 => 5,
    1131 => 5,
    1132 => 5,
    1133 => 4,
    1134 => 4,
    1155 => 4,
    1159 => 4,
  ),
);

$user_roles = require 'og_user_roles.php';

foreach ($user_roles as $group_id => $user_roles) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
     ->fieldCondition('field_gammel_gid', 'value', $group_id);
  $result = $query->execute();

  $new_group_node = node_load(key($result['node']));

  if (!$new_group_node) {
    continue;
  }

  $type = 0;
  if ($netv_rkstype_field = field_get_items('node', $new_group_node, 'field_netvaerkstype')) {
    $type = $netv_rkstype_field[0]['tid'];
  }

  foreach ($user_roles as $uid => $roles) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'user')
      ->fieldCondition('field_gammel_uid', 'value', $uid);
    $result = $query->execute();

    $new_uid = key($result['user']);
    $role_tmp = '';

    foreach($roles as $role) {
      if ($role == $role_tmp) {
        continue;
      }
      if ($role_map[$role] && $role_map[$role][$type]) {
        og_role_grant('node', $new_group_node->nid, $new_uid, $role_map[$role][$type]);
        echo $new_group_node->nid . ' ' . $new_uid . ' ' .  $role_map[$role][$type] . "\n";
      }

      $role_tmp = $role;
    }
  }
}
