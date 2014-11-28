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
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personligt',
    'weight' => '1',
    'children' => array(
      0 => 'field_dob',
      1 => 'field_memberships_text',
      2 => 'field_navn',
      3 => 'field_special_skills',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_adresse',
      1 => 'field_cell',
      2 => 'field_city',
      3 => 'field_country',
      4 => 'field_department',
      5 => 'field_directe_telefon',
      6 => 'field_ekspertise',
      7 => 'field_employer_name',
      8 => 'field_jobposition',
      9 => 'field_kommune',
      10 => 'field_linkedin',
      11 => 'field_phone',
      12 => 'field_regioner',
      13 => 'field_tags',
      14 => 'field_topics',
      15 => 'field_zipcode',
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
      0 => 'og_user_node',
      1 => 'field_all_comment_notify',
      2 => 'field_content_type_notify',
      3 => 'field_hidden',
      4 => 'field_my_comment_notify',
      5 => 'field_usertype',
      6 => 'ckeditor',
      7 => 'account',
      8 => 'timezone',
      9 => 'locale',
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

  return $export;
}
