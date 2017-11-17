<?php

/**
 * @file
 * Used for Views hooks.
 */

/**
 * Implements hook_views_plugins().
 */
function views_crosstab_views_plugins() {

  $plugins = array(
    'style' => array(
      'views_crosstab_table' => array(
        'title' => t('Crosstab Table'),
        'help' => t('Creates a crosstab table.'),
        'handler' => 'views_crosstab_table',
        'path' => drupal_get_path('module', 'views_crosstab') . '/plugins',
        'theme' => 'views_view_table',
        'theme_path' => drupal_get_path('module', 'views_crosstab'),
        'theme file' => 'theme.inc',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => FALSE,
        'even empty' => FALSE,
        'type' => 'normal',
      ),
    ),
  );
  return $plugins;
}
