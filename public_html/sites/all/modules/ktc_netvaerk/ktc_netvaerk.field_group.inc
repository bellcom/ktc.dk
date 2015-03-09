<?php
/**
 * @file
 * ktc_netvaerk.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ktc_netvaerk_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administration|node|group|form';
  $field_group->group_name = 'group_administration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genral';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '3',
    'children' => array(
      0 => 'group_access',
      1 => 'og_roles_permissions',
      2 => 'field_start_date',
      3 => 'field_end_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-administration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_administration|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emner|node|group|form';
  $field_group->group_name = 'group_emner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genral';
  $field_group->data = array(
    'label' => 'Emner',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_topics',
      2 => 'field_os2web_base_field_hidlinks',
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
  $export['group_emner|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_genral|node|group|form';
  $field_group->group_name = 'group_genral';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '0',
    'children' => array(
      0 => 'group_administration',
      1 => 'group_emner',
      2 => 'group_indhold',
      3 => 'group_netvaerk',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-genral field-group-tabs',
      ),
    ),
  );
  $export['group_genral|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|group|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjul',
    'weight' => '1',
    'children' => array(
      0 => 'group_group',
      1 => 'field_gammel_gid',
      2 => 'field_gammel_nid',
      3 => 'field_gammel_typo3_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Skjul',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'hidden group-hidden field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hidden|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indhold|node|group|form';
  $field_group->group_name = 'group_indhold';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genral';
  $field_group->data = array(
    'label' => 'Indhold',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_groupimage',
      2 => 'field_os2web_base_field_ext_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indhold field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_indhold|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_netvaerk|node|group|form';
  $field_group->group_name = 'group_netvaerk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genral';
  $field_group->data = array(
    'label' => 'Netværk',
    'weight' => '0',
    'children' => array(
      0 => 'field_netvaerkstype',
      1 => 'field_regioner',
      2 => 'field_subgroup',
      3 => 'og_group_ref',
      4 => 'group_content_access',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_netvaerk|node|group|form'] = $field_group;

  return $export;
}
