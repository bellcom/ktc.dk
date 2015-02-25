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
    'weight' => '7',
    'children' => array(
      0 => 'field_all_comment_notify',
      1 => 'field_content_type_notify',
      2 => 'field_department',
      3 => 'field_ekspertise',
      4 => 'field_employer_name',
      5 => 'field_hidden',
      6 => 'field_kommune',
      7 => 'field_my_comment_notify',
      8 => 'field_phone',
      9 => 'field_regioner',
      10 => 'field_tags',
      11 => 'field_gammel_uid',
      12 => 'field_typo3_uid',
      13 => 'field_crm_uuid',
      14 => 'ckeditor',
      15 => 'mimemail',
      16 => 'timezone',
      17 => 'locale',
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
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
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
      1 => 'field_membership_ktc',
      2 => 'field_membership_dp',
      3 => 'field_membership_kvf',
      4 => 'field_membership_envina',
      5 => 'field_membership_dabyfo',
      6 => 'field_membership_kpn',
      7 => 'field_membership_ffuk',
      8 => 'field_membership_appointments',
      9 => 'field_membership_kef',
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
      0 => 'field_cell',
      1 => 'field_directe_telefon',
      2 => 'field_dob',
      3 => 'field_jobposition',
      4 => 'field_linkedin',
      5 => 'field_navn',
      6 => 'field_efternavn',
      7 => 'field_twitter_brugernavn',
      8 => 'picture',
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
      0 => 'field_account',
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
      0 => 'field_usertype',
      1 => 'account',
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
    'weight' => '4',
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
