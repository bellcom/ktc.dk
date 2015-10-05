<?php

include dirname(__FILE__) . '/import/json/transform.php';

$file_contents = file_get_contents(__DIR__ . '/import/json/var/nodes.json');

$data = json_decode($file_contents);

foreach ($data as $delta => $_data) {
  fix_timestamp($_data);
}

function fix_timestamp($entity) {
  if ($nid = ktc_import_new_nid($entity->nid)) {
    echo $entity->nid.'/'.$nid."\n";
    db_update('node')
      ->fields(array(
        'created' => $entity->created,
        'changed' => $entity->changed,
      ))
      ->condition('nid', $nid)
      ->execute();
  }
  else {
    echo "No nid found for: ". $entity->nid."\n";
  }
}
