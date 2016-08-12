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
  $field_group->identifier = 'group_advanced|node|hearing|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avanceret',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Avanceret',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advanced field-group-div advanced form-inline well well-sm',
        'description' => '<p>Hvis denne ændres under oprettelse af ny høring, vil ingen blive informeret om høringen.</p>
<p></p>',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_advanced|node|hearing|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_attendees',
      2 => 'field_chairman',
      3 => 'field_coordinator',
      4 => 'field_responsible_admin',
      5 => 'field_responsible_foreman',
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
  $export['group_attendee|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_besked|node|hearing|form';
  $field_group->group_name = 'group_besked';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'Besked til faggruppe',
    'weight' => '2',
    'children' => array(
      0 => 'field_message',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-besked field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_besked|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilag|node|hearing|form';
  $field_group->group_name = 'group_bilag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'Bilag',
    'weight' => '3',
    'children' => array(
      0 => 'field_hearing_materials',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bilag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bilag|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emner|node|hearing|form';
  $field_group->group_name = 'group_emner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'Emner',
    'weight' => '4',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_tags',
      2 => 'field_os2web_base_field_kle_ref',
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
  $export['group_emner|node|hearing|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_attendee_deadlines',
      1 => 'field_enrollment_deadlines',
      2 => 'field_official_date',
      3 => 'field_official_responsedate',
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
      1 => 'group_besked',
      2 => 'group_bilag',
      3 => 'group_emner',
      4 => 'group_hearing_dates',
      5 => 'group_hearing_letter',
      6 => 'group_klhoeringssvar',
    ),
    'format_type' => 'tabs',
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
    'label' => 'Høringsbrev',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_titel_kort',
      2 => 'title',
      3 => 'group_indstillinger',
      4 => 'group_officiel',
      5 => 'field_status',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Høringsbrev',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_hearing_letter|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|hearing|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '2',
    'children' => array(
      0 => 'field_hearing_archived',
      1 => 'field_titel_lang',
      2 => 'field_typo3_uid',
      3 => 'field_typo3_user_id',
      4 => 'field_missing_files',
      5 => 'field_os2web_base_field_hidlinks',
      6 => 'group_content_access',
      7 => 'metatags',
      8 => 'path',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skjult',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hidden|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|hearing|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_letter';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '19',
    'children' => array(
      0 => 'field_hearing_type',
      1 => 'field_hearing_authority',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Indstillinger',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indstillinger field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_indstillinger|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_klhoeringssvar|node|hearing|form';
  $field_group->group_name = 'group_klhoeringssvar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_fields';
  $field_group->data = array(
    'label' => 'KL Høringssvar / Eksterne links',
    'weight' => '7',
    'children' => array(
      0 => 'field_os2web_base_field_ext_link',
      1 => 'field_link_kl_hoeringssvar',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'KL Høringssvar / Eksterne links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-klhoeringssvar field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_klhoeringssvar|node|hearing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_officiel|node|hearing|form';
  $field_group->group_name = 'group_officiel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hearing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hearing_letter';
  $field_group->data = array(
    'label' => 'Officiel eller intern høring',
    'weight' => '20',
    'children' => array(
      0 => 'field_hearing_official',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Officiel eller intern høring',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-officiel field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_officiel|node|hearing|form'] = $field_group;

  return $export;
}
