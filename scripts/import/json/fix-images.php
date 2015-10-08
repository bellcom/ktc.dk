<?php

$file_contents = file_get_contents(__DIR__ . '/var/nodes.json');
$nodes = json_decode($file_contents);
require dirname(__FILE__) .'/transform.php';

$config = include dirname(__FILE__) . '/config.php';

foreach ($nodes as $node) {
  if ($node->type !== 'article') {
    continue;
  }

  $nid = ktc_import_new_nid($node->nid);

  if (is_numeric($nid) && $existing_node = node_load($nid)) {
    ktc_import_field_fetch_file($existing_node, FALSE, $node->field_image, ['field' => 'field_image']);
    node_save($existing_node);
  }
  else {
    echo "[WARNING]: Could not load node {$node->title}\n";
  }
}
