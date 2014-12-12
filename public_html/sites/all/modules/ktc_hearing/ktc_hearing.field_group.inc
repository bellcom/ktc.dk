<?php
/**
 * @file
 * ktc_hearing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ktc_hearing_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attendee|node|hearing|form';
  $field_group->group_name = 'group_attendee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'Deltagere',
    'weight' => '2',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_attendees',
      2 => 'field_chairman',
      3 => 'field_coordinator',
      4 => 'field_responsible_admin',
      5 => 'field_responsible_foreman',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attendee field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_attendee|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hearing_dates|node|hearing|form';
  $field_group->group_name = 'group_hearing_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'Datoer og frister',
    'weight' => '3',
    'children' => array(
      0 => 'field_attendee_deadlines',
      1 => 'field_enrollment_deadlines',
      2 => 'field_official_date',
      3 => 'field_official_responsedate',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_hearing_dates|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hearing_fields|node|hearing|form';
  $field_group->group_name = 'group_hearing_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Høring felter',
    'weight' => '0',
    'children' => array(
      0 => 'group_attendee',
      1 => 'group_hearing_dates',
      2 => 'group_hearing_letter',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_hearing_fields|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hearing_letter|node|hearing|form';
  $field_group->group_name = 'group_hearing_letter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'Høringsbrev og bilag',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_hearing_materials',
      2 => 'field_status',
      3 => 'field_hearing_type',
      4 => 'field_abstract',
      5 => 'field_hearing_archived',
      6 => 'field_topics',
      7 => 'field_hearing_authority',
      8 => 'field_hearing_official',
      9 => 'field_message',
      10 => 'field_titel_lang',
      11 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_hearing_letter|node|hearing|form'] = $field_group;

  return $export;
}
