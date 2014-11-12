<?php
/**
 * @file
 * os2web_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_contact_opening|node|os2web_contact_contact|form';
  $field_group->group_name = 'group_os2web_contact_opening';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_contact_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Åbningstider',
    'weight' => '10',
    'children' => array(
      0 => 'field_os2web_contact_field_friop',
      1 => 'field_os2web_contact_field_fricl',
      2 => 'field_os2web_contact_field_satop',
      3 => 'field_os2web_contact_field_satcl',
      4 => 'field_os2web_contact_field_monop',
      5 => 'field_os2web_contact_field_moncl',
      6 => 'field_os2web_contact_field_mowcl',
      7 => 'field_os2web_contact_field_mowop',
      8 => 'field_os2web_contact_field_wedop',
      9 => 'field_os2web_contact_field_wedcl',
      10 => 'field_os2web_contact_field_sunop',
      11 => 'field_os2web_contact_field_suncl',
      12 => 'field_os2web_contact_field_tueop',
      13 => 'field_os2web_contact_field_tuecl',
      14 => 'field_os2web_contact_field_thuop',
      15 => 'field_os2web_contact_field_thucl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_os2web_contact_opening|node|os2web_contact_contact|form'] = $field_group;

  return $export;
}
