<?php
/**
 * @file
 * Assign content to correct groups.
 */

$type = "group";
$nodes = node_load_multiple(array(), array('type' => $type));

$nodes_missing_gids = [];

$file_contents = file_get_contents(__DIR__ . '/var/nid_to_gid_mapping.json');

$nid_to_gid_mapping = json_decode($file_contents);
unset($file_contents);

echo "[INFO]: Finding groups with missing old gid ============================> \n";
foreach ($nodes as $node) {
  if (empty($node->field_gammel_gid[LANGUAGE_NONE][0]['value'])) {

    $key = $node->title . '-' . $node->created;
    if (isset($nodes_missing_gids[$key])) {
      echo "[NOTICE]: Dupe: {$node->title} {$node->created}\n";
      continue;
    }

    $nodes_missing_gids[$key] = $node->nid;
  }
}

unset($nodes);

$file_contents = file_get_contents(__DIR__ . '/var/nodes.json');
$nodes = json_decode($file_contents);
unset($file_contents);

$created_nodes = [];

echo "[INFO]: Getting missing gid ============================> \n";
foreach ($nodes as $node) {
  if ($node->type !== 'group') {
    continue;
  }
  $key = $node->title . '-' . $node->created;
  if (isset($nodes_missing_gids[$key])) {
    $existing_node = node_load($nodes_missing_gids[$key]);
    if (!is_object($existing_node)) {
      echo "[ERROR]: Could not load: " . $node->title . " - " . $nodes_missing_gids[$key] . "\n";
      continue;
    }

    $existing_node->field_gammel_gid[LANGUAGE_NONE][0]['value'] = $nid_to_gid_mapping->{$node->nid};
    echo "[INFO]: Updating " . $existing_node->title . " (" . $existing_node->nid . ") with old gid: " . $nid_to_gid_mapping->{$node->nid} . "\n";
    node_save($existing_node);
    $created_nodes[$nid_to_gid_mapping->{$node->nid}] = $existing_node->nid;
  }
}

echo "[INFO]: Assingning content to groups ============================> \n";

foreach ($nodes as $node) {
  $gid = $node->group_audience->{LANGUAGE_NONE}[0]->gid;
  if (isset($created_nodes[$gid])) {
    $nid = $created_nodes[$gid];
    echo "[INFO]: " . $node->title . " (" . $node->nid . "/" . $node->type . ") belongs in " . $nid . "\n";

    $query = db_select('field_data_field_gammel_nid', 'g')
      ->fields('g', array('entity_id'))
      ->condition('field_gammel_nid_value', $node->nid, '=');

    $result = $query->execute()->fetchAssoc();

    if ($result) {
      $existing_nid = $result['entity_id'];
    }
    else {
      echo "[ERROR]: Could not load old nid for {$node->title}\n";
      continue;
    }

    $existing_node = node_load($existing_nid);
    $existing_node->og_group_ref[LANGUAGE_NONE][0]['target_id'] = $nid;

    try {
      node_save($existing_node);
    }
    catch (Exception $e) {
      echo "[ERROR]: Could not save node: {$e->getMessage()}\n";
      print_r($existing_node);
    }
  }
}
