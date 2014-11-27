<?php
/**
 * @file
 * ktc_users.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_users_taxonomy_default_vocabularies() {
  return array(
    'brugertyper' => array(
      'name' => 'Brugertyper',
      'machine_name' => 'brugertyper',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'kommuner' => array(
      'name' => 'Kommuner',
      'machine_name' => 'kommuner',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
