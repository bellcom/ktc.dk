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
      0 => 'field_tema_trompet',
      1 => 'field_artikeltype',
      2 => 'title',
      3 => 'group_forfatters',
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
      'label' => 'Bilag',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Du kan sætte bilag og eksterne links på din nartikel. Hvis din artikel skal trykkes, kan der tilføjes højtopløste billeder under fanen Redaktion.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_bilag|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billede|node|artikler|form';
  $field_group->group_name = 'group_billede';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indhold';
  $field_group->data = array(
    'label' => 'Billede',
    'weight' => '14',
    'children' => array(
      0 => 'field_os2web_base_field_lead_img',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Billede',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-billede field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_billede|node|artikler|form'] = $field_group;

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
    'label' => 'Faglige emner',
    'weight' => '17',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_os2web_base_field_kle_ref',
      2 => 'group_skjulauto',
      3 => 'group_tags',
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
  $export['group_emner|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forfatterperm|node|artikler|form';
  $field_group->group_name = 'group_forfatterperm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_workflow';
  $field_group->data = array(
    'label' => 'Skriveadgang',
    'weight' => '26',
    'children' => array(
      0 => 'field_artikel_forfattere',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skriveadgang',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forfatterperm field-group-div well well-sm',
        'description' => 'Du kan tildele artiklen til en eller flere andre brugere, som skal arbejde på artiklen.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_forfatterperm|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forfatters|node|artikler|form';
  $field_group->group_name = 'group_forfatters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_artikel';
  $field_group->data = array(
    'label' => 'Viste forfattere',
    'weight' => '8',
    'children' => array(
      0 => 'field_coforfattere',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Viste forfattere',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forfatters field-group-div well well-sm',
        'description' => '<strong>Visning/præsentation</strong> af forfattere og medforfattere vælges her. Hvis forfatteren allerede har en profil på KTC.dk, kan denne findes under "Eksisterende bruger". Når der vælges en "eksisterende bruger", er det ikke nødvendigt at udfylde da andre felter (Navn, foto og stilling).',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_forfatters|node|artikler|form'] = $field_group;

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
      1 => 'group_bilag',
      2 => 'group_emner',
      3 => 'group_indhold',
      4 => 'group_publicering',
      5 => 'group_workflow',
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
  $field_group->identifier = 'group_hidden|field_collection_item|field_magasin_indhold|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_magasin_indhold';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_opbygning';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '9',
    'children' => array(
      0 => 'field_magasin_filer',
      1 => 'field_magasin_side_artikel',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hidden field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|field_collection_item|field_magasin_indhold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|artikler|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjul',
    'weight' => '48',
    'children' => array(
      0 => 'field_send_opdateringer_til_alle',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Skjul',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hidden field-group-fieldset hidden',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_hidden|node|artikler|form'] = $field_group;

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
      0 => 'field_short',
      1 => 'field_artikel_afsnit',
      2 => 'group_billede',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Indhold',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indhold field-group-fieldset',
        'description' => 'Her skal du lave indholdet til din har artikel. Du kan vælge at tilføje et eller flere afsnit af forskellig typer til din artikel.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_indhold|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|field_collection_item|field_magasin_indhold|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_magasin_indhold';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_opbygning';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '7',
    'children' => array(
      0 => 'field_magasin_side_nr',
      1 => 'field_magasin_side_status',
      2 => 'field_magasin_tema',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|field_collection_item|field_magasin_indhold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opbygning|field_collection_item|field_magasin_indhold|form';
  $field_group->group_name = 'group_opbygning';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_magasin_indhold';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sideopbygning',
    'weight' => '0',
    'children' => array(
      0 => 'group_meta',
      1 => 'group_hidden',
      2 => 'group_sidebygger',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Sideopbygning',
      'instance_settings' => array(
        'classes' => 'group-opbygning field-group-tabs well',
      ),
    ),
  );
  $export['group_opbygning|field_collection_item|field_magasin_indhold|form'] = $field_group;

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
  $field_group->identifier = 'group_sidebygger|field_collection_item|field_magasin_indhold|form';
  $field_group->group_name = 'group_sidebygger';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_magasin_indhold';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_opbygning';
  $field_group->data = array(
    'label' => 'Sidebygger',
    'weight' => '8',
    'children' => array(
      0 => 'field_magasin_side_indhold',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebygger field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebygger|field_collection_item|field_magasin_indhold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skjulauto|node|artikler|form';
  $field_group->group_name = 'group_skjulauto';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emner';
  $field_group->data = array(
    'label' => 'Skjul autolinks',
    'weight' => '47',
    'children' => array(
      0 => 'field_os2web_base_field_hidlinks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skjul autolinks',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-skjulauto field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_skjulauto|node|artikler|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|artikler|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikler';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emner';
  $field_group->data = array(
    'label' => 'Emner',
    'weight' => '46',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Emner',
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
  $export['group_tags|node|artikler|form'] = $field_group;

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
      0 => 'field_artikel_status',
      1 => 'field_annonce',
      2 => 'field_antal_anslag',
      3 => 'field_deadline',
      4 => 'field_highres_billeder',
      5 => 'field_medtaget_i_udgivelse',
      6 => 'group_forfatterperm',
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
