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
    'faktaboks_typer' => array(
      'name' => 'Faktaboks typer',
      'machine_name' => 'faktaboks_typer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'gammel_menuplacering' => array(
      'name' => 'Gammel menuplacering',
      'machine_name' => 'gammel_menuplacering',
      'description' => 'Hvor var indholdet placeret på det gamle site?',
      'hierarchy' => 1,
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
    'os2web_taxonomies_tax_editor_tag' => array(
      'name' => 'Stikord',
      'machine_name' => 'os2web_taxonomies_tax_editor_tag',
      'description' => 'Taksonomi til at opsamle redaktørers egne tags',
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
  );
}
