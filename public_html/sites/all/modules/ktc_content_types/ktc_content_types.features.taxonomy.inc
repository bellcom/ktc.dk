<?php
/**
 * @file
 * ktc_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_content_types_taxonomy_default_vocabularies() {
  return array(
    'dokument' => array(
      'name' => 'Dokument',
      'machine_name' => 'dokument',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
    'faktaboks_typer' => array(
      'name' => 'Faktaboks typer',
      'machine_name' => 'faktaboks_typer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'meeting_type' => array(
      'name' => 'Møde type',
      'machine_name' => 'meeting_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os2web_base_tax_promoteto' => array(
      'name' => 'Forfrem til',
      'machine_name' => 'os2web_base_tax_promoteto',
      'description' => 'Forside og portalforsider',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os2web_taxonomies_tax_kle' => array(
      'name' => 'KLE',
      'machine_name' => 'os2web_taxonomies_tax_kle',
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
