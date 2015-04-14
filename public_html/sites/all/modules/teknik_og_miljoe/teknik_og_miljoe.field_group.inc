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
    'label' => 'Titel og type',
    'weight' => '14',
    'children' => array(
      0 => 'field_news_author',
      1 => 'field_artikel_type',
      2 => 'field_tema_trompet',
      3 => 'field_foto_af_forfatter',
      4 => 'field_coforfattere',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Titel og type',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artikel field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'weight' => '16',
    'children' => array(
      0 => 'field_os2web_base_field_media',
      1 => 'field_os2web_base_field_ext_link',
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
    'weight' => '17',
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
      4 => 'group_workflow',
      5 => 'group_publicering',
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
      2 => 'field_short',
      3 => 'field_artikel_afsnit',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publicering|node|artikler|form';
  $field_group->group_name = 'group_publicering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formular';
  $field_group->data = array(
    'label' => 'Publicering',
    'weight' => '18',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
      1 => 'scheduler_settings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publicering field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publicering|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|artikler|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formular';
  $field_group->data = array(
    'label' => 'Redaktion',
    'weight' => '19',
    'children' => array(
      0 => 'field_magasin',
      1 => 'field_artikel_status',
      2 => 'field_artikel_forfattere',
      3 => 'field_deadline',
      4 => 'field_antal_anslag',
      5 => 'field_send_opdateringer_til_alle',
      6 => 'field_highres_billeder',
      7 => 'field_annonce',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Redaktion',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-workflow field-group-tab redaktion',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_workflow|node|artikler|form'] = $field_group;

  return $export;
}
