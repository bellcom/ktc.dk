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
  $field_group->identifier = 'group_afstemning|node|meeting_doodle|form';
  $field_group->group_name = 'group_afstemning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afstemning',
    'weight' => '0',
    'children' => array(
      0 => 'group_doodle',
      1 => 'group_indhold',
      2 => 'group_netvaerk',
      3 => 'group_emner',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-afstemning field-group-tabs',
      ),
    ),
  );
  $export['group_afstemning|node|meeting_doodle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_andet|node|magazine|form';
  $field_group->group_name = 'group_andet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Andet',
    'weight' => '4',
    'children' => array(),
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
    'weight' => '23',
    'children' => array(
      0 => 'group_banner1',
      1 => 'group_banner2',
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
    'label' => 'Fra arrangementet',
    'weight' => '64',
    'children' => array(
      0 => 'field_arrangement_pressentations',
      1 => 'field_arrangement_referat',
      2 => 'field_artikel_reference',
      3 => 'field_flere_billeder',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Fra arrangementet',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'Faglige emner',
    'weight' => '61',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_topics',
      2 => 'field_os2web_base_field_hidlinks',
      3 => 'field_os2web_base_field_kle_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Faglige emner',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'Bilag og links',
    'weight' => '59',
    'children' => array(
      0 => 'field_link_arrangement_organizer',
      1 => 'field_link_to_arrangement',
      2 => 'field_os2web_base_field_media',
      3 => 'field_os2web_base_field_ext_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Bilag og links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
      4 => 'group_arrangementtildm',
      5 => 'group_arrangement',
      6 => 'group_groups',
      7 => 'group_side1',
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
    'label' => 'Tid og sted',
    'weight' => '58',
    'children' => array(
      0 => 'field_arrangement_address',
      1 => 'field_arrangement_date',
      2 => 'field_arrangement_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tid og sted',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'weight' => '60',
    'children' => array(
      0 => 'field_arrangement_price',
      1 => 'field_link_to_signup',
      2 => 'field_registration_deadline',
      3 => 'field_event_seats',
      4 => 'field_submission',
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
    'label' => 'Beskriv arrangement',
    'weight' => '57',
    'children' => array(
      0 => 'body',
      1 => 'field_target_group',
      2 => 'field_meeting_type',
      3 => 'title',
      4 => 'group_mediabilllederdiv',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Beskriv arrangement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_arrangement|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artiklernyheder|node|magazine|form';
  $field_group->group_name = 'group_artiklernyheder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generelst';
  $field_group->data = array(
    'label' => 'Artikler og Nyheder',
    'weight' => '21',
    'children' => array(
      0 => 'field_artikler_og_nyheder',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Artikler og Nyheder',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artiklernyheder field-group-tab',
        'description' => 'Her tilknyttes alle artikler og nyheder der har relation til denne udgivelse.
For at vise artikler og nyheder skal de desuden tilknyttes under Intro - det vil kun være det indhold der er tilknyttet der, der vises ude på hjemmesiden under teknik og miljø. Denne tilknytning skaber relationen til knappen - "Vis alle" der er på Teknik og Miljø siden.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_artiklernyheder|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner1|node|magazine|form';
  $field_group->group_name = 'group_banner1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_annoncer';
  $field_group->data = array(
    'label' => 'Banner 1',
    'weight' => '21',
    'children' => array(
      0 => 'field_banner_1_tekst_og_link',
      1 => 'field_bannere',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-banner1 field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_banner1|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner2|node|magazine|form';
  $field_group->group_name = 'group_banner2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_annoncer';
  $field_group->data = array(
    'label' => 'Banner 2',
    'weight' => '23',
    'children' => array(
      0 => 'field_banner_2',
      1 => 'field_banner_2_tekst_og_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-banner2 field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_banner2|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilag|node|document|form';
  $field_group->group_name = 'group_bilag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_filer';
  $field_group->data = array(
    'label' => 'Bilag',
    'weight' => '16',
    'children' => array(
      0 => 'field_dokument',
      1 => 'field_tekst_til_bilaget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bilag',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-bilag field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bilag|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilag|node|forum_post|form';
  $field_group->group_name = 'group_bilag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Bilag og links',
    'weight' => '1',
    'children' => array(
      0 => 'field_os2web_base_field_media',
      1 => 'field_os2web_base_field_ext_link',
      2 => '_add_new_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Bilag og links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bilag field-group-tab',
        'description' => '<div class="well well-sm">Du kan sætte bilag og eksterne links på din Diskussion</div>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_bilag|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilag|node|os2web_base_news|form';
  $field_group->group_name = 'group_bilag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Bilag og links',
    'weight' => '13',
    'children' => array(
      0 => 'field_os2web_base_field_media',
      1 => 'group_ekstlinks',
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
  $export['group_bilag|node|os2web_base_news|form'] = $field_group;

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
    'label' => 'Billeder',
    'weight' => '12',
    'children' => array(
      0 => 'field_os2web_base_field_lead_img',
      1 => 'field_flere_billeder',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Billeder',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-billede field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_billede|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dineoplysninger|node|arrangement|form';
  $field_group->group_name = 'group_dineoplysninger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_side1';
  $field_group->data = array(
    'label' => 'Dine oplysninger',
    'weight' => '3',
    'children' => array(
      0 => 'field_arrangement_direkte_tele',
      1 => 'field_arrangement_efternavn',
      2 => 'field_arrangement_fornavn',
      3 => 'field_arrangement_opretteremail',
      4 => 'field_arrangement_stilling_titel',
      5 => 'field_arrangement_virksomhed',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dine oplysninger',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dineoplysninger|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diskussion|node|forum_post|form';
  $field_group->group_name = 'group_diskussion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Diskussion',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Diskussion',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-diskussion field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_diskussion|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dokument|node|document|form';
  $field_group->group_name = 'group_dokument';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Dokument',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_document_type',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dokument field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dokument|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doodle|node|meeting_doodle|form';
  $field_group->group_name = 'group_doodle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afstemning';
  $field_group->data = array(
    'label' => 'Publicering *',
    'weight' => '15',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2web_base_field_promote',
      2 => 'scheduler_settings',
      3 => 'group_synlighedsdiv',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publicering *',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doodle field-group-tab',
        'description' => '<div class="well well-sm">Vælg de netværk som afstemningen skal publiceres i</div>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_doodle|node|meeting_doodle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ekstlinks|node|os2web_base_news|form';
  $field_group->group_name = 'group_ekstlinks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bilag';
  $field_group->data = array(
    'label' => 'Eksterne links',
    'weight' => '7',
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
        'description' => 'Tilføj evt. eksterne links der vises på sammen med nyheden.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ekstlinks|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emner|node|document|form';
  $field_group->group_name = 'group_emner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Faglige emner',
    'weight' => '2',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_os2web_base_field_hidlinks',
      2 => 'group_kle',
      3 => 'group_tags',
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
  $export['group_emner|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emner|node|forum_post|form';
  $field_group->group_name = 'group_emner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Faglige emner',
    'weight' => '2',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_os2web_base_field_hidlinks',
      2 => 'group_kle',
      3 => 'group_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Faglige emner',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-emner field-group-tab',
        'description' => '<div class="well well-sm">Hvilke faglige emner behandles i denne diskussion? Når du vælger emner, så vær grundig og præcis, så systemet kan matche dine diskussioner med andet indhold med samme emner</div>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_emner|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emner|node|meeting_doodle|form';
  $field_group->group_name = 'group_emner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afstemning';
  $field_group->data = array(
    'label' => 'Faglige emner',
    'weight' => '14',
    'children' => array(
      0 => 'field_topics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-emner field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_emner|node|meeting_doodle|form'] = $field_group;

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
    'weight' => '22',
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
        'description' => 'Månedens forside. Det er kun muligt at vælge de artikler der i forvejen er tilknyttet under "Artikler og nyheder". Hvis artiklen du leder efter ikke er i listen, skal du muligvis gemme først, og bagefter komme tilbage til denne side. Artikler behøver ikke at være udgivet til omverdenen for at kunne tilknyttes her.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_featured|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_filer|node|document|form';
  $field_group->group_name = 'group_filer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Upload filer',
    'weight' => '1',
    'children' => array(
      0 => 'field_os2web_base_field_media',
      1 => 'group_bilag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-filer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_filer|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|document|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '1',
    'children' => array(
      0 => 'group_dokument',
      1 => 'group_emner',
      2 => 'group_filer',
      3 => 'group_publicering',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-general field-group-tabs',
      ),
    ),
  );
  $export['group_general|node|document|form'] = $field_group;

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
    'weight' => '0',
    'children' => array(
      0 => 'group_annoncer',
      1 => 'group_artiklernyheder',
      2 => 'group_featured',
      3 => 'group_sider',
      4 => 'group_udgave',
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
      2 => 'field_os2web_news_page_type',
      3 => 'title',
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
    'label' => 'Publicering',
    'weight' => '62',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2web_base_field_promote',
      2 => 'scheduler_settings',
      3 => 'group_visn',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publicering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_groups|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|node|forum_post|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group',
    'weight' => '0',
    'children' => array(
      0 => 'group_bilag',
      1 => 'group_diskussion',
      2 => 'group_emner',
      3 => 'group_publicering',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-tabs',
      ),
    ),
  );
  $export['group_group|node|forum_post|form'] = $field_group;

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
    'weight' => '1',
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
  $field_group->parent_name = '';
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
    'weight' => '1',
    'children' => array(
      0 => 'field_news_author',
      1 => 'field_gammel_gid',
      2 => 'field_gammel_nid',
      3 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skjul',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-div hidden',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hidden|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hvemerdu|node|arrangement|form';
  $field_group->group_name = 'group_hvemerdu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_side1';
  $field_group->data = array(
    'label' => '',
    'weight' => '33',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hvemerdu|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indholdet|node|magazine|form';
  $field_group->group_name = 'group_indholdet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'magazine';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sider';
  $field_group->data = array(
    'label' => 'Udgivelsens indhold',
    'weight' => '46',
    'children' => array(
      0 => 'field_magasin_indhold',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Udgivelsens indhold',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indholdet field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_indholdet|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indhold|node|meeting_doodle|form';
  $field_group->group_name = 'group_indhold';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afstemning';
  $field_group->data = array(
    'label' => 'Doodle',
    'weight' => '13',
    'children' => array(
      0 => 'field_doodle',
      1 => 'field_registration_deadline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Doodle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indhold field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_indhold|node|meeting_doodle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kle|node|document|form';
  $field_group->group_name = 'group_kle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emner';
  $field_group->data = array(
    'label' => 'KLE',
    'weight' => '9',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'KLE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-kle field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kle|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kle|node|forum_post|form';
  $field_group->group_name = 'group_kle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emner';
  $field_group->data = array(
    'label' => 'KLE',
    'weight' => '4',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'KLE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-kle field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kle|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kle|node|os2web_base_news|form';
  $field_group->group_name = 'group_kle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'KLE',
    'weight' => '14',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'KLE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-kle field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kle|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logodiv|node|arrangement|form';
  $field_group->group_name = 'group_logodiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_side1';
  $field_group->data = array(
    'label' => 'logo',
    'weight' => '4',
    'children' => array(
      0 => 'field_arrangement_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'logo',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-logodiv field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_logodiv|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mediabilllederdiv|node|arrangement|form';
  $field_group->group_name = 'group_mediabilllederdiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangement';
  $field_group->data = array(
    'label' => 'mediabilleder',
    'weight' => '3',
    'children' => array(
      0 => 'field_arrangement_billede',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'mediabilleder',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mediabilllederdiv field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mediabilllederdiv|node|arrangement|form'] = $field_group;

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
    'label' => 'Faglige emner',
    'weight' => '14',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_os2web_base_field_hidlinks',
      2 => 'group_kle',
      3 => 'group_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Faglige emner',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_metadata|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_netvaerk|node|meeting_doodle|form';
  $field_group->group_name = 'group_netvaerk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afstemning';
  $field_group->data = array(
    'label' => 'Afstemning / Doodle',
    'weight' => '12',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Afstemning / Doodle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-netvaerk field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_netvaerk|node|meeting_doodle|form'] = $field_group;

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
    'label' => 'Publicering',
    'weight' => '15',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
      1 => 'og_group_ref',
      2 => 'scheduler_settings',
      3 => 'group_synlighedsdiv',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publicering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_networkngroups|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publicering|node|document|form';
  $field_group->group_name = 'group_publicering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_general';
  $field_group->data = array(
    'label' => 'Publicering',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2web_base_field_promote',
      2 => 'scheduler_settings',
      3 => 'group_synlighedsdiv',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publicering field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publicering|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publicering|node|forum_post|form';
  $field_group->group_name = 'group_publicering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Publicering',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2web_base_field_promote',
      2 => 'scheduler_settings',
      3 => 'group_synlighedsdiv',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publicering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-publicering field-group-tab',
        'description' => '<div class="well well-sm">Vælg netværk som Diskussionen skal publiceres i.</div>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_publicering|node|forum_post|form'] = $field_group;

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
  $field_group->identifier = 'group_side1|node|arrangement|form';
  $field_group->group_name = 'group_side1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_arrangementform';
  $field_group->data = array(
    'label' => 'Opret arrangement',
    'weight' => '56',
    'children' => array(
      0 => 'field_arrangement_type',
      1 => 'group_dineoplysninger',
      2 => 'group_logodiv',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Opret arrangement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_side1|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side2|node|arrangement|form';
  $field_group->group_name = 'group_side2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sider';
  $field_group->data = array(
    'label' => 'Side 2',
    'weight' => '41',
    'children' => array(
      0 => 'group_arrangementform',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-side2',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_side2|node|arrangement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sider|node|arrangement|form';
  $field_group->group_name = 'group_sider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sider',
    'weight' => '0',
    'children' => array(
      0 => 'group_side1',
      1 => 'group_side2',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Sider',
      'instance_settings' => array(
        'classes' => 'group-sider field-group-multipage-group',
        'page_header' => '2',
        'page_counter' => '2',
        'move_button' => '1',
        'move_additional' => '1',
      ),
    ),
  );
  $export['group_sider|node|arrangement|form'] = $field_group;

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
    'weight' => '24',
    'children' => array(
      0 => 'field_os2web_base_field_ext_link',
      1 => 'field_antal_sider',
      2 => 'group_indholdet',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sider',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sider field-group-tab ',
        'description' => 'Indholdet af udgivelsen bygges under "Udgivelser" i den sorte top-menu. Kræver man har de rigtige rettigheder.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_sider|node|magazine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skjult|node|document|form';
  $field_group->group_name = 'group_skjult';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '11',
    'children' => array(
      0 => 'field_gammel_gid',
      1 => 'field_gammel_nid',
      2 => 'field_news_author',
      3 => 'path',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skjult',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_skjult|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skjult|node|meeting_doodle|form';
  $field_group->group_name = 'group_skjult';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '1',
    'children' => array(
      0 => 'field_gammel_nid',
      1 => 'field_news_author',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skjult',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_skjult|node|meeting_doodle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synlighedsdiv|node|document|form';
  $field_group->group_name = 'group_synlighedsdiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publicering';
  $field_group->data = array(
    'label' => 'Synlighed',
    'weight' => '21',
    'children' => array(
      0 => 'group_content_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Synlighed',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_synlighedsdiv|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synlighedsdiv|node|forum_post|form';
  $field_group->group_name = 'group_synlighedsdiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publicering';
  $field_group->data = array(
    'label' => 'Synlighed for netværkets indhold',
    'weight' => '3',
    'children' => array(
      0 => 'group_content_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Synlighed for netværkets indhold',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-synlighedsdiv field-group-div well well-sm',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_synlighedsdiv|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synlighedsdiv|node|meeting_doodle|form';
  $field_group->group_name = 'group_synlighedsdiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meeting_doodle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doodle';
  $field_group->data = array(
    'label' => 'Synlighed',
    'weight' => '6',
    'children' => array(
      0 => 'group_content_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Synlighed',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-synlighedsdiv field-group-div well well-sm',
        'description' => 'Vælg om afstemningen skal være offentlig (kan læses af alle), eller privat (kan kun læses af medlemmer i de netværk, afstemningen er publiceret i)',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_synlighedsdiv|node|meeting_doodle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synlighedsdiv|node|os2web_base_news|form';
  $field_group->group_name = 'group_synlighedsdiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_networkngroups';
  $field_group->data = array(
    'label' => 'Synlighed for nyhed',
    'weight' => '12',
    'children' => array(
      0 => 'group_content_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Synlighed for nyhed',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-synlighedsdiv field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_synlighedsdiv|node|os2web_base_news|form'] = $field_group;

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
      0 => 'group_bilag',
      1 => 'group_billede',
      2 => 'group_generelt',
      3 => 'group_metadata',
      4 => 'group_networkngroups',
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
  $field_group->identifier = 'group_tags|node|document|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emner';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '10',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tags field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|forum_post|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emner';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tags field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|os2web_base_news|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '15',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tags field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|os2web_base_news|form'] = $field_group;

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
      5 => 'field_tags',
      6 => 'field_topics',
      7 => 'title',
      8 => 'scheduler_settings',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visn|node|arrangement|form';
  $field_group->group_name = 'group_visn';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arrangement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Visning',
    'weight' => '47',
    'children' => array(
      0 => 'group_content_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Visning',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-visn field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_visn|node|arrangement|form'] = $field_group;

  return $export;
}
