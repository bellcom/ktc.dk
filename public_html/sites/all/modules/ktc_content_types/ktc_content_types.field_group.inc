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
  $field_group->identifier = 'group_andet|node|magazine|form';
  $field_group->group_name = 'group_andet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Andet',
    'weight' => '24',
    'children' => array(
      0 => 'field_os2web_base_field_ext_link',
      1 => 'field_os2web_base_field_hidlinks',
      2 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-andet field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_andet|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_annoncer|node|magazine|form';
  $field_group->group_name = 'group_annoncer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Annoncer',
    'weight' => '22',
    'children' => array(
      0 => 'field_banner_1_tekst_og_link',
      1 => 'field_banner_2',
      2 => 'field_banner_2_tekst_og_link',
      3 => 'field_bannere',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-annoncer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_annoncer|node|magazine|form'] = $field_group;

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
      5 => 'field_arrangement_billede',
      6 => 'field_arrangement_logo',
      7 => 'title',
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
  $field_group->identifier = 'group_billede|node|os2web_base_news|form';
  $field_group->group_name = 'group_billede';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Billede og filer',
    'weight' => '12',
    'children' => array(
      0 => 'field_os2web_base_field_lead_img',
      1 => 'field_os2web_base_field_media',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-billede field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_billede|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured|node|magazine|form';
  $field_group->group_name = 'group_featured';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '21',
    'children' => array(
      0 => 'field_ekstra_artikler',
      1 => 'field_top_artikel',
      2 => 'field_magasinleder',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Intro',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-featured field-group-tab',
        'description' => 'Månedens forside',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_featured|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_generelst|node|magazine|form';
  $field_group->group_name = 'group_generelst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelst',
    'weight' => '3',
    'children' => array(
      0 => 'group_udgave',
      1 => 'group_annoncer',
      2 => 'group_sider',
      3 => 'group_featured',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-generelst field-group-tabs',
      ),
    ),
  );
  $export['group_generelst|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_generelt|node|os2web_base_news|form';
  $field_group->group_name = 'group_generelt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '11',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_base_field_summary',
      2 => 'field_news_category',
      3 => 'field_os2web_news_page_type',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-generelt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_generelt|node|os2web_base_news|form'] = $field_group;

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
  $field_group->identifier = 'group_hidden|node|magazine|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '25',
    'children' => array(
      0 => 'field_image',
      1 => 'field_internt_link_url_',
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
  $export['group_hidden|node|magazine|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_news_author',
      1 => 'field_gammel_gid',
      2 => 'field_gammel_nid',
      3 => 'field_link',
      4 => 'path',
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
    'weight' => '13',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
      1 => 'field_topics',
      2 => 'field_tags',
      3 => 'field_os2web_base_field_edi_tags',
      4 => 'field_os2web_base_field_hidlinks',
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
    'weight' => '14',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
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
    'weight' => '15',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
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
  $export['group_redaktion|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sider|node|magazine|form';
  $field_group->group_name = 'group_sider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Sider',
    'weight' => '23',
    'children' => array(
      0 => 'field_magasin_indhold',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sider',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sider field-group-tab hidden',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_sider|node|magazine|form'] = $field_group;

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
    'weight' => '0',
    'children' => array(
      0 => 'group_metadata',
      1 => 'group_networkngroups',
      2 => 'group_redaktion',
      3 => 'group_generelt',
      4 => 'group_billede',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_udgave|node|magazine|form';
  $field_group->group_name = 'group_udgave';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Udgave',
    'weight' => '20',
    'children' => array(
      0 => 'body',
      1 => 'field_forside_billede_',
      2 => 'field_linkbladreversion',
      3 => 'field_udgave',
      4 => 'field_udgivelsesdato',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-udgave field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_udgave|node|magazine|form'] = $field_group;

  return $export;
}
