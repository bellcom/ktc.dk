<?php
/**
 * @file
 * teknik_og_miljoe.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function teknik_og_miljoe_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_artikel_type'
  $field_bases['field_artikel_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_artikel_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'leder' => 'Leder',
        'artikel' => 'Artikel',
        'navne' => 'Nyt om navne',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
