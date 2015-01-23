<?php
/**
 * @file
 * ktc_hearing_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_hearing_notifications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ktc_hearing_notifications_node_info() {
  $items = array(
    'ktc_hearings_notification' => array(
      'name' => t('KTC høring notifikation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
