<?php
/**
 * @file
 * ktc_hearing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_hearing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ktc_hearing_node_info() {
  $items = array(
    'hearing' => array(
      'name' => t('Høring'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'hearing_responses' => array(
      'name' => t('Høringssvar'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
