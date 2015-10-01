<?php
$dir = __DIR__ . '/';

//
// Nodes
//
// First regular content.
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'group', '!=')
  ->propertyCondition('changed', strtotime('2013-09-01 00:00:01'), '>');
$result = $query->execute();

$nodes = node_load_multiple(array_keys($result['node']));

$file_fields = array('field_fil', 'field_groupimage', 'field_image');
foreach ($nodes as $node) {
  foreach ($file_fields as $field_name) {
    if ($field = field_get_items('node', $node, $field_name)) {
      foreach ($field as $delta => $data) {
        $files[] = $data['uri'];
      }
    }
  }
}

// And now groups.
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'group');
$result = $query->execute();

$nodes = array_merge($nodes, node_load_multiple(array_keys($result['node'])));

$file_fields = array('field_fil', 'field_groupimage', 'field_image');
foreach ($nodes as $node) {
  foreach ($file_fields as $field_name) {
    if ($field = field_get_items('node', $node, $field_name)) {
      foreach ($field as $delta => $data) {
        $files[] = $data['uri'];
      }
    }
  }
}

file_put_contents($dir . 'nodes.json', json_encode($nodes, JSON_PRETTY_PRINT));
$nodes = NULL;

//
// Comments
//
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'comment')
   ->propertyCondition('changed', strtotime('2013-09-01 00:00:01'), '>');
$result = $query->execute();

$comments = comment_load_multiple(array_keys($result['comment']));

file_put_contents($dir . 'comments.json', json_encode($comments, JSON_PRETTY_PRINT));
$comments = NULL;

//
// Users
//
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'user')
   ->propertyCondition('access', strtotime('2013-09-01 00:00:01'), '>');
$result = $query->execute();

$users = user_load_multiple(array_keys($result['user']));

$i = 0;
$y = 0;
foreach ($users as $user) {
  if ($field = field_get_items('user', $user, 'field_navn')) {
    if (strpos($field[0]['value'], ' ')) {
      $keep_users[$user->uid] = $user;
      if ($user->picture) {
        $files[] = $user->picture->uri;
      }
      $y++;
      continue;
    }
    else {
      $i++;
    }
  }
}

file_put_contents($dir . 'users.json', json_encode($keep_users, JSON_PRETTY_PRINT));
$users = NULL;
$keep_users = NULL;

$makemeeting = db_select('makemeeting_answers', 'm')
            ->fields('m')
            ->execute()
            ->fetchAll();


file_put_contents($dir . 'makemeeting.json', json_encode($makemeeting, JSON_PRETTY_PRINT));
file_put_contents($dir . 'files.json', json_encode($files, JSON_PRETTY_PRINT));
