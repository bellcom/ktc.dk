<?php

/**
 * @file
 * Theming functions for UI
 */

/**
 * Theme the form for the crosstab table style plugin.
 */
function theme_views_crosstab_ui_table($variables) {
  $form = $variables['form'];

  $output = drupal_render($form['description_markup']);

  $options = views_crosstab_field_options();
  $header = array(
    t('Field'),
    $options['crosstab_rows'],
    $options['crosstab_columns'],
    $options['crosstab_data'],
    t('Column'),
    t('Align'),
    t('Separator'),
    array(
      'data' => t('Sortable'),
      'align' => 'center',
    ),
    array(
      'data' => t('Default order'),
      'align' => 'center',
    ),
    array(
      'data' => t('Default sort'),
      'align' => 'center',
    ),
    array(
      'data' => t('Hide empty column'),
      'align' => 'center',
    ),
  );
  $rows = array();
  foreach (element_children($form['columns']) as $id) {
    $row = array();
    $row[] = drupal_render($form['info'][$id]['name']);
    $row[] = array(
      'data' => drupal_render($form['crosstab_rows'][$id]),
      'align' => 'center',
    );
    $row[] = array(
      'data' => drupal_render($form['crosstab_columns'][$id]),
      'align' => 'center',
    );
    $row[] = array(
      'data' => drupal_render($form['crosstab_data'][$id]),
      'align' => 'center',
    );
    $row[] = drupal_render($form['columns'][$id]);
    $row[] = drupal_render($form['info'][$id]['align']);
    $row[] = drupal_render($form['info'][$id]['separator']);
    if (!empty($form['info'][$id]['sortable'])) {
      $row[] = array(
        'data' => drupal_render($form['info'][$id]['sortable']),
        'align' => 'center',
      );
      $row[] = array(
        'data' => drupal_render($form['info'][$id]['default_sort_order']),
        'align' => 'center',
      );
      $row[] = array(
        'data' => drupal_render($form['default'][$id]),
        'align' => 'center',
      );
    }
    else {
      $row[] = '';
      $row[] = '';
    }
    $row[] = array(
      'data' => drupal_render($form['info'][$id]['empty_column']),
      'align' => 'center',
    );
    $rows[] = $row;
  }

  // Add the special 'None' row.
  $rows[] = array(
    t('None'),
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    array(
      'align' => 'center',
      'data' => drupal_render($form['default'][-1]),
    ),
    '',
    '',
  );

  $output .= theme(
    'table',
    array(
      'header' => $header,
      'rows' => $rows,
    )
  );

  $output .= drupal_render_children($form);
  return $output;
}
