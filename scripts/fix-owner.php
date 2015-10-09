<?php

require __DIR__.'/import/json/transform.php';

$conditions = ['uid' => 1];
$nodes = node_load_multiple([], $conditions);
$old_nids = [];

foreach ($nodes as $node) {
  if (isset($node->field_gammel_nid)) {
    $old_nids[$node->field_gammel_nid[LANGUAGE_NONE][0]['value']] = $node->nid;
  }
}
unset($nodes);

$file_contents = file_get_contents(__DIR__ . '/import/json/var/nodes.json');

$nodes = json_decode($file_contents);
unset($file_contents);

foreach ($nodes as $node) {
  if (isset($old_nids[$node->nid])) {
    // We got one
    $old_uid = $node->uid;
    $new_uid = ktc_import_new_uid($old_uid);

    if ($new_uid !== FALSE && $new_uid != 0) {
      echo "[INFO]: Updating {$node->title} ({$old_nids[$node->nid]}) to user {$new_uid}\n";
      $existing_node = node_load($old_nids[$node->nid]);
      $existing_node->uid = $new_uid;
      node_save($existing_node);
    }
    else {
      echo "[WARNING]: Could not find user (old:{$node->uid}) for {$node->title} ({$old_nids[$node->nid]})\n";
    }
  }
}
