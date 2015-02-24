<?php
/**
 * @file
 * teknik_og_miljoe.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function teknik_og_miljoe_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artikel|node|artikler|form';
  $field_group->group_name = 'group_artikel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formular';
  $field_group->data = array(
    'label' => 'Artikel',
    'weight' => '14',
    'children' => array(
      0 => 'field_magasin',
      1 => 'field_news_author',
      2 => 'field_short',
      3 => 'field_artikel_type',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-artikel field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_artikel|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilag|node|artikler|form';
  $field_group->group_name = 'group_bilag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formular';
  $field_group->data = array(
    'label' => 'Bilag',
    'weight' => '18',
    'children' => array(
      0 => 'field_os2web_base_field_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-bilag field-group-tabs',
      ),
    ),
  );
  $export['group_bilag|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emner|node|artikler|form';
  $field_group->group_name = 'group_emner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formular';
  $field_group->data = array(
    'label' => 'Emner',
    'weight' => '16',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-emner field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_emner|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formular|node|artikler|form';
  $field_group->group_name = 'group_formular';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form',
    'weight' => '0',
    'children' => array(
      0 => 'group_artikel',
      1 => 'group_indhold',
      2 => 'group_emner',
      3 => 'group_bilag',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-formular field-group-tabs',
      ),
    ),
  );
  $export['group_formular|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indhold|node|artikler|form';
  $field_group->group_name = 'group_indhold';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formular';
  $field_group->data = array(
    'label' => 'Indhold',
    'weight' => '15',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_base_field_lead_img',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indhold field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_indhold|node|artikler|form'] = $field_group;

  return $export;
}
