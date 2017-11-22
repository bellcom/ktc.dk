<?php
/**
 * @file
 * ktc_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ktc_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|user|user|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjul',
    'weight' => '10',
    'children' => array(
      0 => 'field_all_comment_notify',
      1 => 'field_content_type_notify',
      2 => 'field_department',
      3 => 'field_ekspertise',
      4 => 'field_employer_name',
      5 => 'field_kommune',
      6 => 'field_my_comment_notify',
      7 => 'field_phone',
      8 => 'field_regioner',
      9 => 'field_tags',
      10 => 'field_gammel_uid',
      11 => 'field_typo3_uid',
      12 => 'field_membership_ktc_category',
      13 => 'ckeditor',
      14 => 'metatags',
      15 => 'timezone',
      16 => 'locale',
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
  $export['group_hidden|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_address|user|user|form';
  $field_group->group_name = 'group_home_address';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Privatadresse',
    'weight' => '2',
    'children' => array(
      0 => 'field_adresse',
      1 => 'field_city',
      2 => 'field_country',
      3 => 'field_zipcode',
      4 => 'field_adresse_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Privatadresse',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Denne adresse bliver ikke vist offentligt, ej heller til andre brugere på ktc.dk. Den anvendes KUN til udsendelse af Magasinet "Teknik & Miljø", såfremt du har valgt levering til din privatadresse.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_home_address|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_memberships|user|user|form';
  $field_group->group_name = 'group_memberships';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Medlemskaber og udpegninger',
    'weight' => '6',
    'children' => array(
      0 => 'field_memberships_text',
      1 => 'field_membership_appointments',
      2 => 'field_membership_dabyfo',
      3 => 'field_membership_dp',
      4 => 'field_membership_envina',
      5 => 'field_membership_ffuk',
      6 => 'field_membership_kef',
      7 => 'field_membership_kpn',
      8 => 'field_membership_ktc',
      9 => 'field_membership_kvf',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-memberships field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_memberships|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_navn|user|user|form';
  $field_group->group_name = 'group_navn';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'Navn',
    'weight' => '6',
    'children' => array(
      0 => 'field_navn',
      1 => 'field_efternavn',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Navn',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-navn field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_navn|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_network|user|user|form';
  $field_group->group_name = 'group_network';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dine netværk på KTC.dk',
    'weight' => '7',
    'children' => array(
      0 => 'og_user_node',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dine netværk på KTC.dk',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-network field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_network|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notification_help|user|user|form';
  $field_group->group_name = 'group_notification_help';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_notifikationer';
  $field_group->data = array(
    'label' => 'Notifikationer fra netværk',
    'weight' => '62',
    'children' => array(
      0 => 'field_netvaerk_notifications',
      1 => 'field_netvaerk_comment_notify',
      2 => 'comment_notify_settings',
      3 => 'mimemail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Notifikationer fra netværk',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-notification-help field-group- well well-sm',
        'description' => 'Herunder kan du vælge hvilke notifikationer du vil modtage fra de netværk du er medlem af. Du kan vælge at få notifikationer om nyt indhold (f.esk. diskussioner, arrangementer, dokumenter mm.) og du kan vælge at få en besked, når der er kommentarer til indhold i dine netværk. Kryds af i listen herunder.

<br/>',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notification_help|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notifikationer|user|user|form';
  $field_group->group_name = 'group_notifikationer';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notifikationer',
    'weight' => '8',
    'children' => array(
      0 => 'field_hidden',
      1 => 'field_nyhedsbrev_ktc_update',
      2 => 'group_notification_help',
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
  $export['group_notifikationer|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktoplysninger',
    'weight' => '1',
    'children' => array(
      0 => 'field_dob',
      1 => 'field_jobposition',
      2 => 'picture',
      3 => 'group_navn',
      4 => 'group_sociale',
      5 => 'group_telefon',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Kontaktoplysninger',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional|user|user|form';
  $field_group->group_name = 'group_professional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ansættelse',
    'weight' => '3',
    'children' => array(
      0 => 'field_usertype',
      1 => 'field_account',
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
  $export['group_professional|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sociale|user|user|form';
  $field_group->group_name = 'group_sociale';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'Sociale netværk',
    'weight' => '12',
    'children' => array(
      0 => 'field_linkedin',
      1 => 'field_twitter_brugernavn',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sociale netværk',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sociale field-group-div well well-sm',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sociale|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_telefon|user|user|form';
  $field_group->group_name = 'group_telefon';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'Telefon',
    'weight' => '8',
    'children' => array(
      0 => 'field_cell',
      1 => 'field_directe_telefon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Telefon',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-telefon field-group-div well well-sm',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_telefon|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_website|user|user|form';
  $field_group->group_name = 'group_website';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ktc.dk',
    'weight' => '0',
    'children' => array(
      0 => 'account',
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
  $export['group_website|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_resources|user|user|form';
  $field_group->group_name = 'group_your_resources';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dine kompetencer',
    'weight' => '5',
    'children' => array(
      0 => 'field_special_skills',
      1 => 'field_topics',
      2 => 'field_uddannelser_og_kurser',
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
  $export['group_your_resources|user|user|form'] = $field_group;

  return $export;
}
