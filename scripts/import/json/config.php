<?php
/**
 * @file
 * Configuration for data import.
 */

$config = [];

$config['files'] = array(
 // 'users' => 'users.json',
  'nodes' => 'nodes.json',
 // 'makemeeting' => 'makemeeting.json',
 // 'comments' => 'comments.json',
);

$config['image_field_mapping'] = [
    'os2web_base_news' => ['field_image' => 'field_os2web_base_field_lead_img'],
    'group',
    'forum_post',
    'document',
    'meeting_doodle',
    'arrangement',
  ];

/**
 * Define handlers, load and save for entities.
 */
$config['handler'] = array(
  'users' => array(
    'load' => 'ktc_import_load_user',
    'save' => 'ktc_import_save_user',
  ),
  'nodes' => array(
    'load' => 'ktc_import_load_node',
    'save' => 'ktc_import_save_node',
  ),
  'comments' => array(
    'load' => 'ktc_import_load_comment',
    'save' => 'ktc_import_save_comment',
  ),
  'makemeeting' => array(
    'load' => 'ktc_import_load_makemeeting',
    'save' => 'ktc_import_save_makemeeting',
  ),
);

/**
 * Define transformations for nodes.
 */
$config['transform']['nodes'] = array(
  'nid' => 'ktc_import_set_old_nid',
  'uid' => 'ktc_import_set_new_uid',
 'title' => 'ktc_import_no_transform',
  'status' => 'ktc_import_no_transform',
  'body' => 'ktc_import_no_transform',
  'language' => 'ktc_import_no_transform',
  'group_audience' => 'ktc_import_set_group_info',
  'group_access' => 'ktc_import_group_access',
  'og_roles_permissions' => 'ktc_import_roles_permissions',
  'field_short' => 'ktc_import_no_transform',
  'field_topics' => 'ktc_import_no_transform',
  'field_regioner' => 'ktc_import_no_transform',
  'field_grouptype' => array('ktc_import_no_transform', 'opt' => array('field' => 'field_netvaerkstype')),
  'field_tags' => 'ktc_import_no_transform',
  'field_event_seats' => 'ktc_import_no_transform',
  'field_doodle' => 'ktc_import_no_transform',
  'field_meeting_type' => 'ktc_import_update_to_entity_reference',
  'field_fil' => array('ktc_import_field_fetch_file', 'opt' => array('field' => 'field_os2web_base_field_media')),
  'field_groupimage' => array('ktc_import_field_fetch_file', 'opt' => array('field' => 'field_groupimage')),
  'field_image' => array('ktc_import_field_fetch_file', 'opt' => array('field' => 'field_image')),
);

/**
 * Define transformations for users.
 */
$config['transform']['users'] = array(
  'uid' => 'ktc_import_set_old_uid',
  'created' => 'ktc_import_no_transform',
  'status' => 'ktc_import_no_transform',
 'name' => 'ktc_import_set_user_name',
  'mail' => 'ktc_import_no_transform',
  'init' => 'ktc_import_no_transform',
  'pass' => 'ktc_import_no_transform',
  'roles' => 'ktc_import_no_transform',
  'access' => 'ktc_import_no_transform',
  'language' => 'ktc_import_no_transform',
  'picture' => 'ktc_import_prop_fetch_file',
  'group_audience' => 'ktc_import_set_new_groups',
  'field_navn' => 'ktc_import_split_name',
  'field_adresse' => 'ktc_import_no_transform',
  'field_phone' => 'ktc_import_no_transform',
  'field_cell' => 'ktc_import_no_transform',
  'field_linkedin' => 'ktc_import_no_transform',
  'field_ekspertise' => 'ktc_import_no_transform',
  'field_regioner' => 'ktc_import_no_transform',
  'field_topics' => 'ktc_import_no_transform',
  'field_tags' => 'ktc_import_no_transform',
  'field_employer_name' => 'ktc_import_no_transform',
  'field_employer_kommune' => 'ktc_import_no_transform',
  'field_usertype' => 'ktc_import_no_transform',
  'field_jobposition' => 'ktc_import_no_transform',
  'field_department' => 'ktc_import_no_transform',
  'field_zipcode' => 'ktc_import_no_transform',
  'field_city' => 'ktc_import_no_transform',
  'field_dob' => 'ktc_import_no_transform',
  'field_memberships_text' => 'ktc_import_no_transform',
  'field_special_skills' => 'ktc_import_no_transform',
  'field_directe_telefon' => 'ktc_import_no_transform',
);

/**
 * Define transformations for comments.
 */
$config['transform']['comments'] = array(
  'subject' => array('ktc_import_no_transform', 'opt' => array()),
  'language' => 'ktc_import_no_transform',
  'comment_body' => 'ktc_import_no_transform',
  'nid' => 'ktc_import_set_new_nid',
  'uid' => 'ktc_import_set_new_uid',
  'thread' => 'ktc_import_no_transform',
  'created' => 'ktc_import_no_transform',
  'changed' => 'ktc_import_no_transform',
  'language' => 'ktc_import_no_transform',
  'status' => 'ktc_import_no_transform',
  'name' => 'ktc_import_no_transform',
);

/**
 * Transformations for makemeeting answers.
 */
$config['transform']['makemeeting'] = array(
  'uid' => 'ktc_import_set_new_uid',
  'entity_id' => 'ktc_import_set_new_nid',
  'value' => 'ktc_import_makemeeting_value',
);

// Define directory where the importer can find files from the original site.
$config['import_files'] = '/var/tmp/ktc.dk-files/drupal/';

return $config;
