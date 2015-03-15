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
    'label' => 'Netværkets indstillinger',
    'weight' => '4',
    'children' => array(
      0 => 'group_access',
      1 => 'field_os2web_base_field_hidlinks',
      2 => 'field_subgroup',
      3 => 'og_group_ref',
      4 => 'group_content_access',
      5 => 'field_open_group',
      6 => 'group_dates',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Netværkets indstillinger',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-administration field-group-tab',
        'description' => 'Her skal du angive netværkets indstillinger som f.eks. rettigheder og medlemmer',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_administration|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|group|form';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Datoer',
    'weight' => '12',
    'children' => array(
      0 => 'field_end_date',
      1 => 'field_start_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Datoer',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-dates field-group-div well',
        'description' => 'Hvornår blev netværket etableret og lukker det evt. på en given dato.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dates|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ekstlinks|node|group|form';
  $field_group->group_name = 'group_ekstlinks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Eksterne links',
    'weight' => '6',
    'children' => array(
      0 => 'field_os2web_base_field_ext_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Eksterne links',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ekstlinks field-group-div well well-sm',
        'description' => 'Tilføj evt. eksterne links der vises på netværkts hovedside.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ekstlinks|node|group|form'] = $field_group;

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
    'label' => 'Faglige emner',
    'weight' => '3',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Faglige emner',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-emner field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
      2 => 'group_netvaerk',
      3 => 'group_media',
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
    'weight' => '2',
    'children' => array(
      0 => 'group_group',
      1 => 'field_gammel_gid',
      2 => 'field_gammel_nid',
      3 => 'og_roles_permissions',
      4 => 'field_gammel_typo3_id',
      5 => 'field_crm_uuid',
      6 => 'path',
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
  $field_group->identifier = 'group_logodiv|node|group|form';
  $field_group->group_name = 'group_logodiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Logo',
    'weight' => '4',
    'children' => array(
      0 => 'field_groupimage',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Logo',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-logodiv field-group-div well well-sm',
        'description' => 'Indsæt netværket logo / billede',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_logodiv|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|group|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genral';
  $field_group->data = array(
    'label' => 'Logo, bilag og links',
    'weight' => '1',
    'children' => array(
      0 => 'field_os2web_base_field_media',
      1 => 'group_logodiv',
      2 => 'group_ekstlinks',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|group|form'] = $field_group;

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
    'label' => 'Navn og beskrivelse',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_netvaerkstype',
      2 => 'field_regioner',
      3 => 'field_target_group',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Navn og beskrivelse',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_netvaerk|node|group|form'] = $field_group;

  return $export;
}
