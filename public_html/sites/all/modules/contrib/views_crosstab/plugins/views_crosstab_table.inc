<?php

/**
 * @file
 * Plugin functions
 */

/**
 * Style plugin to transform a linear query into a crosstab table.
 *
 * @ingroup views_style_plugins
 */
class views_crosstab_table extends views_plugin_style_table {

/**
 * Define plugin options.
 *
 */

  function option_definition() {
  $options = parent::option_definition();

  $options['crosstab_rows'] = array('default' => NULL);
  $options['crosstab_columns'] = array('default' => NULL);
  $options['crosstab_data'] = array('default' => NULL);
  $options['crosstab_operation'] = array('default' => 'COUNT');
  $options['include_crosstab_operation_on_row'] = array('default' => TRUE, 'bool' => TRUE);
  $options['include_crosstab_operation_on_column'] = array('default' => TRUE, 'bool' => TRUE);
  $options['crosstab_decimals'] = array('default' => '0');

  return $options;
}

  /**
   * Render the options form.
   *
   * @param array $form
   *   Reference to the form array we're building.
   * @param array $form_state
   *   Reference to the form state.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $handlers = $this->display->handler->get_handlers('field');
    $columns = $this->sanitize_columns($this->options['columns']);

    $defaults_select = array_keys($columns);
    if (count($defaults_select) < 3) {
      drupal_set_message(
          t('At least 3 fields need to be added to your view to create a crosstab.'), 'error');
      return;
    }

    $crosstab_rows_default = array_shift($defaults_select);
    $crosstab_columns_default = array_shift($defaults_select);
    $crosstab_data_default = array_shift($defaults_select);

    // Define theme function to handling options format format.
    $form['#theme'] = 'views_crosstab_ui_table';

    foreach ($columns as $field => $column) {
      $safe = str_replace(array('][', '_', ' '), '-', $field);
      $id = 'edit-style-options-columns-' . $safe;

      // Collect the row, column and data fields.
      // TODO: JS helper.
      $radio_id = drupal_html_id('edit-crosstab-rows-' . $field);
      $form['crosstab_rows'][$field] = array(
        '#type' => 'radio',
        '#return_value' => $field,
        '#parents' => array('style_options', 'crosstab_rows'),
        '#id' => $radio_id,
        '#attributes' => array('id' => $radio_id),
        '#default_value' => isset($this->options['crosstab_rows']) ? $this->options['crosstab_rows'] : $crosstab_rows_default,
        '#dependency' => array($id => array($field)),
      );
      $radio_id = drupal_html_id('edit-crosstab-columns-' . $field);
      $form['crosstab_columns'][$field] = array(
        '#type' => 'radio',
        '#return_value' => $field,
        '#parents' => array('style_options', 'crosstab_columns'),
        '#id' => $radio_id,
        '#attributes' => array('id' => $radio_id),
        '#default_value' => isset($this->options['crosstab_columns']) ? $this->options['crosstab_columns'] : $crosstab_columns_default,
        '#dependency' => array($id => array($field)),
      );
      $radio_id = drupal_html_id('edit-crosstab-data-' . $field);
      $form['crosstab_data'][$field] = array(
        '#type' => 'radio',
        '#return_value' => $field,
        '#parents' => array('style_options', 'crosstab_data'),
        '#id' => $radio_id,
        '#attributes' => array('id' => $radio_id),
        '#default_value' => isset($this->options['crosstab_data']) ? $this->options['crosstab_data'] : $crosstab_data_default,
        '#dependency' => array($id => array($field)),
      );
    }

    // Aggregation operators to use on the data.
    $form['crosstab_operation'] = array(
      '#type' => 'select',
      '#title' => 'Crosstab operation',
      '#options' => array(
        'COUNT' => 'Count',
        'SUM' => 'Sum',
        'AVG' => 'Average',
        'MIN' => 'Minimum',
        'MAX' => 'Maximum',
      ),
      '#default_value' => $this->options['crosstab_operation'],
      '#weight' => -5,
    );

    $form['include_crosstab_operation_on_row'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add an extra column for aggregating entire row '),
      '#default_value' => $this->options['include_crosstab_operation_on_row'],
      '#weight' => -4,
    );

    $form['include_crosstab_operation_on_column'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add an extra row for aggregating each column '),
      '#default_value' => $this->options['include_crosstab_operation_on_column'],
      '#weight' => -4,
    );

    // Decimals for the functions.
    $form['crosstab_decimals'] = array(
      '#type' => 'select',
      '#title' => 'Round to N number of decimals.',
      '#options' => array(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10),
      '#default_value' => $this->options['crosstab_decimals'],
      '#weight' => -3,
    );
  }
  
  /**
   * Returns the header name for the given aggretation operation.
   *
   *
   * @param string $op
   *    The capitalized name of the aggregation operation.
   * @return string
   *    The header name for this operation.
   */
  static function crosstab_operation_header($op) {
    $ops = array(
      'COUNT' => t('Total'),
      'SUM' => t('Total'),
      'AVG' => t('Average'),
      'MIN' => t('Minimum'),
      'MAX' => t('Maximum'),
    );
    return $ops[$op];
  }

  /**
   * Validate the options form.
   *
   * @param array $form
   *   Reference to the form array we're building.
   * @param array $form_state
   *   Reference to the form state.
   */
  function options_validate(&$form, &$form_state) {
    parent::options_validate($form, $form_state);

    // Get machine_names (keys) of crosstab field options.
    $crosstab_options = array_keys(views_crosstab_field_options());

    // Ensure that the user has not picked the same field for more than
    // crosstab option.  Do this by looping over the three crosstab options
    // (rows, columns, data) twice.
    foreach ($crosstab_options as $crosstab_option) {
      // Perform nested loop over same crosstab options array.
      foreach ($crosstab_options as $crosstab_option_compare) {
        // Only compare different options.
        if ($crosstab_option != $crosstab_option_compare) {
          // Get field name used in each of the two options being compared.
          $crosstab_option_field_name = $form_state['values']['style_options'][$crosstab_option];
          $crosstab_option_compare_field_name = $form_state['values']['style_options'][$crosstab_option_compare];
          // If the field names are the same, then the user has picked the same
          // field for two different crosstab options and the query will likely
          // not work or produce unintended results.
          // TODO: check that this test doesn't return false positive errors
          // due to same field name from two different sources.
          if ($crosstab_option_field_name == $crosstab_option_compare_field_name) {
            // Define placeholders for error message.
            $error_items = array(
              '%field_display_value' => $form['info'][$crosstab_option_field_name]['name']['#markup'],
              '%crosstab_option' => $crosstab_option,
              '%crosstab_option_compare' => $crosstab_option_compare,
            );
            // Report the error.
            $error_message = 'You cannot set the same field (%field_display_value) ';
            $error_message .= 'to be a source for <strong>both</strong> ';
            $error_message .= '%crosstab_option and %crosstab_option_compare.';
            form_error($form[$crosstab_option][$crosstab_option_field_name], t($error_message, $error_items));

            // Break out of nested loop and outer loop.
            break 2;
          }
        }
      }
    }

    // Ensure that the field type selected for aggregation options is valid for
    // the chosen aggregation operation.
    // Get the aggregation operation.
    $crosstab_operation = $form_state['values']['style_options']['crosstab_operation'];

    // Define field types that can be aggregated.
    $field_types_that_can_be_aggregated = array(
      'SUM' => array('serial', 'int', 'float', 'numeric'),
      'AVG' => array('serial', 'int', 'float', 'numeric'),
      'MIN' => array('serial', 'int', 'float', 'numeric', 'varchar', 'char', 'text'),
      'MAX' => array('serial', 'int', 'float', 'numeric', 'varchar', 'char', 'text'),
    );

    // Assume all field types can be COUNTed and do not need to be included
    // in this validation check.
    if ($crosstab_operation != "COUNT") {

      // Get field handlers for the current display.
      $field_handlers = $this->display->handler->handlers['field'];
      if ($field_handlers) {

        // Loop over the field handlers.
        foreach ($field_handlers as $handler) {
          // Get the table name and field associated with
          // the handler of the field.
          $table_name = $handler->table;
          $field_name = $handler->field;
          // Get crosstab option field name.
          $crosstab_data_field_name = $form_state['values']['style_options']['crosstab_data'];
          // Check if the crosstab data field name matches the handler field.
          if ($crosstab_data_field_name == $field_name) {
            // Check the field exists - this should be a redundant check.
            $field_exists = db_field_exists($table_name, $field_name);
            if ($field_exists) {
              // Get the database schema for the field's table.
              $schema = drupal_get_schema($table_name);
              // Get the drupal database field type for the field.
              $field_type = $schema['fields'][$field_name]['type'];

              // Look for a matching field type for the aggregation operation.
              if (!in_array($field_type, $field_types_that_can_be_aggregated[$crosstab_operation])) {
                // Define placeholders for error message.
                $error_items = array(
                  '%crosstab_data_field_name' => $crosstab_data_field_name,
                  '%field_type' => $field_type,
                  '%operation' => $crosstab_operation,
                );
                // Report the error.
                form_error($form['crosstab_data'][$crosstab_data_field_name], t('The field selected for the crosstab data (%crosstab_data_field_name)
                has a %field_type, which cannot be used in a %operation operation.', $error_items));
              }
            }
          }
        }
      }
    }
  }

  /**
   * Add cross table column fields and alter the query.
   */
  function query() {
    parent::query();

    // Get crosstab style options.
    $options = $this->view->style_plugin->options;

    // Check the crosstab options are set - when creating a new query
    // (with Preview on), the first time the Crosstab Table display is chosen
    // Views calls query() before the options have been set.
    if (isset($options['crosstab_rows']) &&
        isset($options['crosstab_columns']) &&
        isset($options['crosstab_data'])
        ) {

      // Clone the existing query.  This cloned query will be used to determine
      // the columns for the crosstab table.
      $crosstab_columns_view_query = clone $this->view->query;
      $crosstab_columns_view_query->view = clone $this->view;

      // Loop over cloned query fields.
      foreach ($crosstab_columns_view_query->fields as $key => $field) {

        // Set remove function attribute if it exists.
        if (isset($crosstab_columns_view_query->fields[$key]['function'])) {
          unset($crosstab_columns_view_query->fields[$key]['function']);
        }
        // Set aggregate to TRUE for each non-crosstab columns field,
        // to ensure only grouping by crosstab columns in the query that
        // fetches column names.
        // see http://drupal.org/node/385158#comment-2871182
        // Locate the crosstab rows, column and data fields.
        if ($this->crosstab_match_field($field['field'], $options['crosstab_rows'])) {
          $crosstab_rows = $field;
          $crosstab_columns_view_query->fields[$key]['aggregate'] = TRUE;
        }
        elseif ($this->crosstab_match_field($field['field'], $options['crosstab_columns'])) {
          $crosstab_columns = $field;
          $this->view->query->fields[$key]['aggregate'] = TRUE;
        }
        elseif ($this->crosstab_match_field($field['field'], $options['crosstab_data'])) {
          $crosstab_data = $field;
          $this->view->query->fields[$key]['aggregate'] = TRUE;
          $crosstab_columns_view_query->fields[$key]['aggregate'] = TRUE;
        }
        else {
          $this->view->query->fields[$key]['aggregate'] = TRUE;
          $crosstab_columns_view_query->fields[$key]['aggregate'] = TRUE;
        }
      }

      // Basic sanity checking.
      // Get column names.
      $columns = $this->sanitize_columns($this->options['columns']);
      $defaults_select = array_keys($columns);
      if (count($defaults_select) < 3) {
        // This is only a warning at this stage (unlike on the options screen,
        // where we set an error, to further ensure we have the users attention.
        drupal_set_message(t('At least 3 fields need to be added to your view to create a crosstab.'), 'warning');
        $error = TRUE;
      }
      // The options do not appear to be set, or we haven't located each field
      // in the query. This can happen on fresh views, or on views where a field
      // used for a previously configured crosstab has been removed.
      if (empty($options['crosstab_rows']) || empty($options['crosstab_columns']) || empty($options['crosstab_data']) || empty($options['crosstab_operation']) || !isset($crosstab_rows['field']) || !isset($crosstab_columns['field']) || !isset($crosstab_data['field'])) {
        drupal_set_message(t('The Crosstab Table views style does not appear to be configured.'), 'warning');
        $error = TRUE;
      }
      if (isset($error)) {
        // This falls back to the parent table handler.
        drupal_set_message(t('The crosstab could not be displayed, showing a linear table instead.'), 'message');
        return;
      }

      // Remove existing ORDER BY clause.
      $crosstab_columns_view_query->orderby = array();
      // Remove existing GROUP BY clause.
      $crosstab_columns_view_query->groupby = array();
      // Convert query to a SelectQuery object.
      $crosstab_columns_query = $crosstab_columns_view_query->query();
      // Add GROUP BY clause.
      $crosstab_columns_query->groupBy($crosstab_columns['alias']);

      // Run the query and collate the results.
      $results = $crosstab_columns_query->execute();

      // Crosstab COUNT is really a SUM of 1s.
      if ($options['crosstab_operation'] == 'COUNT') {
        $data = '1';
        $data_else = '0';
        $options['crosstab_operation'] = 'SUM';
        $options['crosstab_operation_on_row'] = 'COUNT';
      }
      else {
        $data = $crosstab_data['table'] . '.' . $crosstab_data['field'];
        $data_else = 'NULL';
        $options['crosstab_operation_on_row'] = $options['crosstab_operation'];
      }

      // Loop through the columns, adding to the query and the view.
      
      foreach ($results as $i => $result) {
        $crosstab_column = $result->$crosstab_columns['alias'];
        // Add the new field to the query, basing it on the original data
        // query field.
        $placeholder = ':' . $crosstab_column . '_' . $i . '_placeholder';
        $alias = $this->view->query->add_field(
            NULL,
            "CASE WHEN {$crosstab_columns['table']}.{$crosstab_columns['field']} = $placeholder THEN $data ELSE $data_else END",
            $crosstab_columns['alias'] . '_' . strtolower(preg_replace('/[^A-Za-z0-9_]+/', '_', $crosstab_column)),
            array(
              'function' => strtolower($options['crosstab_operation']),
              'placeholders' => array($placeholder => $crosstab_column),
            )
        );
        $this->view->query->fields[$alias]['aggregate'] = TRUE;

        // Add the field to the view, basing it on the data view field.
        // TODO: linea problematica.
        $this->view->field[$alias] = clone($this->view->field[$crosstab_data['field']]);

        // Set the alias, label and remove the table association
        // (since it is an aggregate).
        $this->view->field[$alias]->field_alias = $alias;
        $this->view->field[$alias]->options['label'] = $crosstab_column;
        $this->view->field[$alias]->options['id'] = $alias;
        unset($this->view->field[$alias]->table_alias);

        // Add the field to the current style_plugin, so we can sort with it.
        $this->view->style_plugin->options['info'][$alias] = $this->view->style_options['info'][$crosstab_data['field']];
        $this->view->style_plugin->options['columns'][$alias] = $alias;
      }

    // If selected by user, add an additional column for aggregating
    // on entire row.
      if ($options['include_crosstab_operation_on_row'] == TRUE) {
        $alias = $this->view->query->add_field(
            NULL,
            $crosstab_data['table'] . '.' . $crosstab_data['field'],
            $crosstab_columns['alias'] . '_total',
            array(
              'function' => strtolower($options['crosstab_operation_on_row']),
            )
        );
        $this->view->query->fields[$alias]['aggregate'] = TRUE;
        $this->view->field[$alias] = clone($this->view->field[$crosstab_data['field']]);
        $this->view->field[$alias]->field_alias = $alias;
        $this->view->field[$alias]->options['id'] = $alias;
        $this->view->field[$alias]->options['label'] = self::crosstab_operation_header($this->view->style_plugin->options['crosstab_operation']);
        $this->view->style_plugin->options['info'][$alias] = $this->view->style_options['info'][$crosstab_data['field']];
        $this->view->style_plugin->options['columns'][$alias] = $alias;
      }

      // Remove the source header and data source fields, since they have now
      // been replaced by the crosstab.
      unset($this->view->field[$crosstab_data['field']]);
      unset($this->view->field[$crosstab_columns['field']]);
      unset($this->view->style_plugin->options['info'][$crosstab_data['field']]);
      unset($this->view->style_plugin->options['info'][$crosstab_columns['field']]);
      unset($this->view->style_plugin->options['columns'][$crosstab_data['field']]);
      unset($this->view->style_plugin->options['columns'][$crosstab_columns['field']]);
      unset($this->view->display['default']->display_options['fields'][$crosstab_data['field']]);
      unset($this->view->display['default']->display_options['style_options']['columns'][$crosstab_data['field']]);
      unset($this->view->display['default']->display_options['style_options']['info'][$crosstab_data['field']]);
      unset($this->view->display['default']->handler->options['fields'][$crosstab_data['field']]);

      // Rebuild the sort, so that column sorts will be added by the new fields.
      $this->view->style_plugin->build_sort();

      // Add a group by for the crosstab row grouping field.
      // This has to come after the build_sort, or it tries to add groups.
      $this->view->query->add_groupby($crosstab_rows['alias']);
    }
  }
  
  /**
   * Determines if a field defined in the options matches a field or real field
   * in the view's query.
   * 
   * @param $string $query_field
   *    The name of the field (or real field) from the view's query
   * @param $string $option_field
   *    The name of the field from the view's definition
   * @return boolean
   *    TRUE iff they match
   */
  function crosstab_match_field($query_field, $option_field) {
    // First check for a field defined using the field's name
    // Then check for a field defined with a different 'real field'
    return $option_field == $query_field ||
           (isset($this->view->field[$option_field]->definition['real field']) &&
            $this->view->field[$option_field]->definition['real field'] == $query_field);
  }
  
  function pre_render(&$values) {
    // Get options array.
    $options = $this->view->style_plugin->options;
    
    // Generate summary row
    if (count($values) && $options['include_crosstab_operation_on_column']) {
      $summary_query = clone $this->view->build_info['query'];
      // Remove groupBy to summarize all rows
      $group_by = &$summary_query->getGroupBy();
      $group_by = array();        
      $summary_results = $summary_query->execute()->fetchObject();
      $values[] = $summary_results;
    }
    
    // Get attribute that defines numerical precision.
    $rounding = $options['crosstab_decimals'];

    // Loop over rows in $values array.
    foreach ($values as &$result_row) {
      // Loop over fields in current row.
      foreach ($result_row as &$field_value) {
        // Check if value is numeric.
        if (is_numeric($field_value)) {
          // Round result to appropriate precision.
          $field_value = number_format($field_value, $rounding, '.', '');
        }
      }
    }
  }

  /**
   * Render all of the fields for a given style and store them on the object.
   *
   * @param $result
   *   The result array from $view->result
   */
  function render_fields($result) {
    $rendered_fields = parent::render_fields($result);
    if ($this->view->style_plugin->options['include_crosstab_operation_on_column']) {
      // Create proper heading in last summary row, first column. This cannot be done earlier
      // because it might be subjected to numeric or other formatting.
      $row_field = $this->view->style_options['crosstab_rows'];
      end($rendered_fields);
      $rendered_fields[key($rendered_fields)][$row_field] = self::crosstab_operation_header($this->view->style_plugin->options['crosstab_operation']);
    }
    return $rendered_fields;
  }
}
