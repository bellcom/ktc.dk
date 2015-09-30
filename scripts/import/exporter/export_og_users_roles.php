<?php
$dir = __DIR__ . '/';

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
   ->entityCondition('bundle', 'group');

$result = $query->execute();

$group_roles = array();

$memberRoleRid = 2;

foreach ($result['node'] as $group_nid => $info) {
  $group = node_load($group_nid);
  $result = db_select('og', 'c')
    ->fields('c')
    ->condition('etid', $group->nid, '=')
    ->condition('entity_type', 'node', '=')
    ->execute()
    ->fetchAssoc();
  if ($result) {
    $gid = $result['gid'];
  }

  $query = db_select('og_membership', 'ogm')
    ->fields('ogm')
    ->condition('ogm.gid', $gid, '=');

  $member_result = $query->execute()->fetchAll();

  foreach ($member_result as $member) {
    $query = db_select('og_users_roles', 'ogur');
    $query
      ->fields('ogur')
      ->condition('ogur.gid', $gid, '=')
      ->condition('ogur.uid', $member->etid, '=');

    $role_result = $query->execute()->fetchAll();

    if ($role_result) {
      foreach ($role_result as $role) {
        if ($role->rid) {
          $group_roles[$group->nid][$member->etid][$role->rid] = $role->rid;
        }
      }
    } else {
      $group_roles[$group->nid][$member->etid][$memberRoleRid] = $memberRoleRid;
    }
  }
}

file_put_contents($dir . 'og_users_roles.json', json_encode($group_roles, JSON_PRETTY_PRINT));
