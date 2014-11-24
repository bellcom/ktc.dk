<?php
/**
 * @file
 * ktc_netvaerk.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_netvaerk_taxonomy_default_vocabularies() {
  return array(
    'emner' => array(
      'name' => 'Emner (frie)',
      'machine_name' => 'emner',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'emner_faste_' => array(
      'name' => 'Emner (faste)',
      'machine_name' => 'emner_faste_',
      'description' => 'Emner (faste)',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'netv_rkstype' => array(
      'name' => 'Netværkstype',
      'machine_name' => 'netv_rkstype',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'regioner' => array(
      'name' => 'Regioner',
      'machine_name' => 'regioner',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
