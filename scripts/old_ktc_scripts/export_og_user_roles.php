<?php

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
   ->entityCondition('bundle', 'group');

$result = $query->execute();

$group_roles = array();

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

  $query = db_select('og_users_roles', 'ogur');
  $query->rightJoin('og_membership', 'ogm', 'ogm.etid = ogur.uid');
  $query->fields('ogm')
    ->fields('ogur')
    ->condition('ogm.gid', $gid, '=');

  $role_result = $query->execute()->fetchAll();

  foreach ($role_result as $row) {
    if ($row->rid) {
      $group_roles[$row->gid][$row->etid][] = $row->rid;
    }
  }
}

echo "<?php \n";
echo "return " . var_export($group_roles, 1) . ";";
