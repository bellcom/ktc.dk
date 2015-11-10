<?php

$config = include dirname(__FILE__) . '/config.php';
include dirname(__FILE__) . '/transform.php';
include dirname(__FILE__) . '/handler.php';

ini_set('default_socket_timeout', 1200);

foreach ($config['files'] as $entity => $filename) {
  process_file($entity, $filename, $config);
}

function process_file($entity, $filename, $config) {
  $file_contents = file_get_contents(__DIR__ . '/var/' . $filename);

  $data = json_decode($file_contents);

  foreach ($data as $delta => $_data) {
    // For debugging single node
    #if (!in_array($_data->nid, [131226, 131227])) {
    #  continue;
    #}
 
    process_data($entity, $_data, $config);
  }
}

/**
 * Process the given data as to an entity.
 */
function process_data($entity_type, $data, $config) {
  // Get the specified handler to load the entity.
  $load = $config['handler'][$entity_type]['load'];
  $save = $config['handler'][$entity_type]['save'];

  if (!function_exists($load) || !function_exists($save)) {
    error_log('Missing handler for ' . $entity_type);
    die();
  }

  // Load the entity.
  $entity = $load($data);

  if ($entity === FALSE) {
    // echo "[WARNING]: No entity could be loaded for: {$data->title}\n";
    return;
  }

  if (!$entity) {
    // error_log('No entity could be loaded for: ' . print_r($data, 1));
    return;
  }

  // un: 2015.11.05
  // forum_post & arrangement skal være her sammen for at virke.
  // os2web_base_news og group skal være her sammen for at virke.
  $accepted_types = [
    'os2web_base_news',
    'group',

# there are a lot of document's so migrating these takes a looooooong time ...
    'document',
#    'meeting_doodle',

    'forum_post',
    'arrangement',
  ];

  if (!in_array($entity->type, $accepted_types)) {
    return;
  }

  // Iterate over the properties.
  foreach ($data as $prop => $value) {
    // Find transform function for current property.
    $opt = array();
    $transform = $config['transform'][$entity_type][$prop];

    // If the transform is defined with options.
    if (is_array($transform)) {
      $opt = $transform['opt'];
      $transform = $transform[0];
    }

    // If it exists, send the entity and data to the transformer.
    if (function_exists($transform)) {
      $transform($entity, $prop, $value, $opt);
    }
  }

  // Save the entity to the db.
  $save($entity);
  // print_r($entity);
}
