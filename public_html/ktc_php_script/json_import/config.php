<?php
/**
 * @file
 * Configuration for data import.
 */

$config['files'] = array(
  // 'users' => 'users.json',
  // 'nodes' => 'nodes.json',
  'comments' => 'comments.json',
);

/**
 * Define handlers, load and save for entities.
 */
$config['handler'] = array(
  'comments' => array(
    'load' => 'ktc_import_load_comment',
    'save' => 'ktc_import_save_comment',
  ),
);

/**
 * Define transformations for comments.
 */
$config['transform'] = array(
  'comments' => array(
    'subject' => array('ktc_import_no_transform', 'opt' => array()),
    'comment_body' => 'ktc_import_no_transform',
    'nid' => 'ktc_import_set_new_nid',
    'uid' => 'ktc_import_set_new_uid',
    'thread' => 'ktc_import_no_transform',
    'created' => 'ktc_import_no_transform',
    'changed' => 'ktc_import_no_transform',
    'language' => 'ktc_import_no_transform',
    'status' => 'ktc_import_no_transform',
    'name' => 'ktc_import_no_transform',
  ),
);

return $config;
