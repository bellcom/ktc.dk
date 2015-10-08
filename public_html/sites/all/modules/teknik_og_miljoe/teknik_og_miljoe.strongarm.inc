<?php
/**
 * @file
 * teknik_og_miljoe.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function teknik_og_miljoe_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_artikler';
  $strongarm->value = 0;
  $export['comment_anonymous_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_artikler';
  $strongarm->value = '2';
  $export['comment_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_artikler';
  $strongarm->value = 1;
  $export['comment_default_mode_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_artikler';
  $strongarm->value = '150';
  $export['comment_default_per_page_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_artikler';
  $strongarm->value = 1;
  $export['comment_form_location_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_artikler';
  $strongarm->value = '0';
  $export['comment_preview_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_artikler';
  $strongarm->value = 0;
  $export['comment_subject_field_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__artikler';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'listevisning' => array(
        'custom_settings' => TRUE,
      ),
      'listevisningstor' => array(
        'custom_settings' => TRUE,
      ),
      'teasercomments' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'scheduler_settings' => array(
          'weight' => '22',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(
        'signup' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'listevisning' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teasercomments' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser_front' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'listevisningstor' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaserfront' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_artikler';
  $strongarm->value = '0';
  $export['language_content_type_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_artikler';
  $strongarm->value = array();
  $export['menu_options_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_artikler';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_artikler';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_artikler';
  $strongarm->value = '0';
  $export['node_preview_artikler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_artikler';
  $strongarm->value = 0;
  $export['node_submitted_artikler'] = $strongarm;

  return $export;
}
