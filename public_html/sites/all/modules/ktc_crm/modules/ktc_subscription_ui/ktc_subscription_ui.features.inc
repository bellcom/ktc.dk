<?php
/**
 * @file
 * ktc_subscription_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_subscription_ui_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ktc_subscription_ui_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Produkt'),
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
