<?php
/**
 * @file
 * ktc_arrangement.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ktc_arrangement_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-arrangement-field_os2web_base_field_promote'
  $field_instances['node-arrangement-field_os2web_base_field_promote'] = array(
    'bundle' => 'arrangement',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 43,
      ),
      'listevisning' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'listevisningboks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'listevisningstor' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teasercomments' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaserfront' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_os2web_base_field_promote',
    'label' => 'Forfrem til',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 49,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Forfrem til');

  return $field_instances;
}
