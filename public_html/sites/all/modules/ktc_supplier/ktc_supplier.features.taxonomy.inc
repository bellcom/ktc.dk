<?php
/**
 * @file
 * ktc_supplier.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_supplier_taxonomy_default_vocabularies() {
  return array(
    'suppelier_type' => array(
      'name' => 'Leverandører type',
      'machine_name' => 'suppelier_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
