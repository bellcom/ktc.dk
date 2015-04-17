<?php
/**
 * @file
 * teknik_og_miljoe.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function teknik_og_miljoe_taxonomy_default_vocabularies() {
  return array(
    'artikeltyper' => array(
      'name' => 'Artikeltyper',
      'machine_name' => 'artikeltyper',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
