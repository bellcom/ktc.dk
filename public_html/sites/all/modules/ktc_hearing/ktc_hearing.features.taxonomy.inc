<?php
/**
 * @file
 * ktc_hearing.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_hearing_taxonomy_default_vocabularies() {
  return array(
    'hearing_authority' => array(
      'name' => 'Myndighed',
      'machine_name' => 'hearing_authority',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'hearing_response_type' => array(
      'name' => 'Høringsvar type',
      'machine_name' => 'hearing_response_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'hearing_status' => array(
      'name' => 'Høring status',
      'machine_name' => 'hearing_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'official' => array(
      'name' => 'Officiel',
      'machine_name' => 'official',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os2web_news_page_newstypes' => array(
      'name' => 'Nyhedstype',
      'machine_name' => 'os2web_news_page_newstypes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
