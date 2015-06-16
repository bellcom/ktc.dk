<?php
/**
 * @file
 * ktc_accounts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_accounts_taxonomy_default_vocabularies() {
  return array(
    'accounts' => array(
      'name' => 'Firmaer',
      'machine_name' => 'accounts',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
