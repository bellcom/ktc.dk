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
    'design_enhed' => array(
      'name' => 'Design-enhed',
      'machine_name' => 'design_enhed',
      'description' => 'Standard, boks, harmonika - andre typer af strukturelle design-enheder.',
      'hierarchy' => 0,
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
    'side_status' => array(
      'name' => 'Side-status',
      'machine_name' => 'side_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
