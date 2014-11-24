<?php
/**
 * @file
 * ktc_netvaerk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_netvaerk_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ktc_netvaerk_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ktc_netvaerk_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Netværk'),
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
