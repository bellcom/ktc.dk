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
    'design_enhed' => array(
      'name' => 'Design-enhed',
      'machine_name' => 'design_enhed',
      'description' => 'Standard, boks, harmonika - andre typer af strukturelle design-enheder.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'side_status' => array(
      'name' => 'Side-status',
      'machine_name' => 'side_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sidegenrer' => array(
      'name' => 'Sidegenrer',
      'machine_name' => 'sidegenrer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'status' => array(
      'name' => 'Status',
      'machine_name' => 'status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'udgivelser_side_layouts' => array(
      'name' => 'Udgivelser - Section Layouts',
      'machine_name' => 'udgivelser_side_layouts',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
