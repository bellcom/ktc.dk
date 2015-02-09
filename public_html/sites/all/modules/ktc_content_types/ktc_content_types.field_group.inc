<?php
/**
 * @file
 * ktc_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ktc_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementbesk|node|arrangement|form';
  $field_group->group_name = 'group_arrangementbesk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Beskrivelse',
    'weight' => '34',
    'children' => array(
      0 => 'body',
      1 => 'field_link_to_arrangement',
      2 => 'field_os2web_base_field_ext_link',
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
  $export['group_arrangementbesk|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementemner|node|arrangement|form';
  $field_group->group_name = 'group_arrangementemner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Emner',
    'weight' => '40',
    'children' => array(
      0 => 'field_arrangement_categories',
      1 => 'field_tags',
      2 => 'field_topics',
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
  $export['group_arrangementemner|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementfiles|node|arrangement|form';
  $field_group->group_name = 'group_arrangementfiles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Filer',
    'weight' => '39',
    'children' => array(
      0 => 'field_os2web_base_field_media',
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
  $export['group_arrangementfiles|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementform|node|arrangement|form';
  $field_group->group_name = 'group_arrangementform';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form',
    'weight' => '1',
    'children' => array(
      0 => 'group_arrangementbesk',
      1 => 'group_arrangementemner',
      2 => 'group_arrangementfiles',
      3 => 'group_arrangementsted',
      4 => 'group_arrangementsynlighed',
      5 => 'group_arrangementtildm',
      6 => 'group_arrangement',
      7 => 'group_groups',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_arrangementform|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementsted|node|arrangement|form';
  $field_group->group_name = 'group_arrangementsted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Sted',
    'weight' => '33',
    'children' => array(
      0 => 'field_arrangement_address',
      1 => 'field_arrangement_location',
      2 => 'field_link_arrangement_organizer',
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
  $export['group_arrangementsted|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementsynlighed|node|arrangement|form';
  $field_group->group_name = 'group_arrangementsynlighed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Synlighed',
    'weight' => '38',
    'children' => array(
      0 => 'field_arrangement_period',
      1 => 'group_content_access',
      2 => 'field_os2web_base_field_hidlinks',
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
  $export['group_arrangementsynlighed|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangementtildm|node|arrangement|form';
  $field_group->group_name = 'group_arrangementtildm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Tilmelding',
    'weight' => '35',
    'children' => array(
      0 => 'field_arrangement_price',
      1 => 'field_link_to_signup',
      2 => 'field_event_seats',
      3 => 'field_submission',
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
  $export['group_arrangementtildm|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrangement|node|arrangement|form';
  $field_group->group_name = 'group_arrangement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Arrangement',
    'weight' => '32',
    'children' => array(
      0 => 'field_arrangement_date',
      1 => 'field_registration_deadline',
      2 => 'field_target_group',
      3 => 'field_meeting_type',
      4 => 'field_short',
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
  $export['group_arrangement|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups|node|arrangement|form';
  $field_group->group_name = 'group_groups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Netværk',
    'weight' => '37',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_regioner',
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
  $export['group_groups|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|arrangement|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjulte',
    'weight' => '2',
    'children' => array(
      0 => 'field_gammel_gid',
      1 => 'field_gammel_nid',
      2 => 'field_news_author',
      3 => 'path',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skjulte',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-hidden field-group-div hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hidden|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|forum_post|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjul',
    'weight' => '9',
    'children' => array(
      0 => 'field_gammel_gid',
      1 => 'field_gammel_nid',
      2 => 'field_news_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Skjul',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hidden field-group-fieldset hidden',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hidden|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|os2web_base_news|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjul',
    'weight' => '15',
    'children' => array(
      0 => 'field_news_author',
      1 => 'field_gammel_gid',
      2 => 'field_gammel_nid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Skjul',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hidden field-group-fieldset hidden',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hidden|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|os2web_base_news|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '15',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
      1 => 'field_os2web_base_field_edi_tags',
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
  $export['group_metadata|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_networkngroups|node|os2web_base_news|form';
  $field_group->group_name = 'group_networkngroups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Netværk',
    'weight' => '16',
    'children' => array(
      0 => 'og_group_ref',
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
  $export['group_networkngroups|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_redaktion|node|os2web_base_news|form';
  $field_group->group_name = 'group_redaktion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Redaktion',
    'weight' => '17',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
      1 => 'field_os2web_base_field_ext_link',
      2 => 'field_os2web_base_field_hidlinks',
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
  $export['group_redaktion|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|os2web_base_news|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nyheder',
    'weight' => '8',
    'children' => array(
      0 => 'group_metadata',
      1 => 'group_networkngroups',
      2 => 'group_redaktion',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|os2web_base_news|form'] = $field_group;

  return $export;
}
