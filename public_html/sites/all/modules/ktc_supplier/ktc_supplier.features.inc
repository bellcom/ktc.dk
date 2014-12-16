<?php
/**
 * @file
 * ktc_supplier.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_supplier_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ktc_supplier_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ktc_supplier_node_info() {
  $items = array(
    'ktc_supplier' => array(
      'name' => t('Leverandører'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
