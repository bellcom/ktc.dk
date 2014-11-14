<?php
/**
 * @file
 * ktc_hearing.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_hearing_taxonomy_default_vocabularies() {
  return array(
    'h_ring_status' => array(
      'name' => 'Høring status',
      'machine_name' => 'h_ring_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
