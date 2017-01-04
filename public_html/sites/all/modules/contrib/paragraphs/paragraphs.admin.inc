<?php
/**
 * @file
 * Admin functions for the paragraphs module.
 */

/**
 * Page callback to show the bundle overview page.
 *
 * @return null|string
 *   Rendered table of bundles.
 *
 * @throws Exception
 */
function paragraphs_admin_bundle_overview() {
  $page = array();
  $bundles = paragraphs_bundle_load();
  $field_ui = module_exists('field_ui');

  $header = array(
    t('Bundle name'),
    array('data' => t('Operations'), 'colspan' => $field_ui ? '4' : '2')
  );
  $rows = array();
  foreach ($bundles as $bundle) {

    $type_url_str = strtr($bundle->bundle, array('_' => '-'));

    $row = array(
      array(
        'data' => $bundle->name . ' (' . $bundle->bundle . ')',
      )
    );

    if ($field_ui) {

      // Manage fields.
      $row[] = array(
        'data' => l(t('manage fields'), 'admin/structure/paragraphs/' . $type_url_str . '/fields')
      );

      // Display fields.
      $row[] = array(
        'data' => l(t('manage display'), 'admin/structure/paragraphs/' . $type_url_str . '/display')
      );
    }

    // Manage bundle.
    $row[] = array(
      'data' => l(t('edit bundle'), 'admin/structure/paragraphs/' . $type_url_str . '/edit')
    );
    // Delete bundle.
    $row[] = array(
      'data' => l(t('delete bundle'), 'admin/structure/paragraphs/' . $type_url_str . '/delete')
    );

    $rows[$bundle->bundle] = $row;
  }

  // Sort rows by bundle.
  ksort($rows);

  // Render paragraphs bundle table.
  $page['paragraphs_bundle_table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#empty' => t('No paragraph bundles have been defined yet.'),
  );

  return $page;
}

/**
 * Form to create or edit an paragraph bundle.
 */
function paragraphs_admin_bundle_form($form, &$form_state, $bundle = NULL) {

  if (!isset($bundle) && !$bundle) {
    // This is a new bundle
    $bundle = new stdClass();
    $bundle->name = '';
    $bundle->bundle = '';
    $bundle->locked = 0;
  }
  else {
    if (!$bundle) {
      drupal_set_message(t('Could not load bundle'), 'error');
      drupal_goto('admin/structure/paragraphs');
    }
  }

  $form['#paragraphs_bundle'] = $bundle;

  $form['name'] = array(
    '#title' => t('Name'),
    '#type' => 'textfield',
    '#default_value' => $bundle->name,
    '#description' => t('The human-readable name of this bundle. It is recommended that this name begin with a capital letter and contain only letters, numbers, and spaces. This name must be unique.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  if (!$bundle->locked) {

    $form['bundle'] = array(
      '#type' => 'machine_name',
      '#default_value' => $bundle->bundle,
      '#maxlength' => 32,
      '#disabled' => $bundle->locked,
      '#machine_name' => array(
        'exists' => 'paragraphs_bundle_load',
      ),
      '#description' => t('A unique machine-readable name for this paragraph bundle. It must only contain lowercase letters, numbers, and underscores.'),
    );
  }

  $form['locked'] = array(
    '#type' => 'value',
    '#value' => $bundle->locked,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Paragraph bundle'),
    '#weight' => 40,
  );

  return $form;
}

/**
 * Form validation handler for paragraphs_admin_bundle_form().
 *
 * @see paragraphs_admin_bundle_form_submit()
 */
function paragraphs_admin_bundle_form_validate($form, &$form_state) {
  $bundle = new stdClass();
  $bundle->name = trim($form_state['values']['name']);

  if (!$form_state['values']['locked']) {
    $bundle->bundle = trim($form_state['values']['bundle']);
    // 'theme' conflicts with theme_node_form().
    // '0' is invalid, since elsewhere we check it using empty().
    if (in_array($bundle->bundle, array('0', 'theme'))) {
      form_set_error('type', t("Invalid machine-readable name. Enter a name other than %invalid.", array('%invalid' => $bundle->bundle)));
    }
  }

}

/**
 * Submit handler for paragraphs_admin_bundle_form().
 *
 * @see paragraphs_admin_bundle_form()
 */
function paragraphs_admin_bundle_form_submit($form, &$form_state) {

  $bundle = new stdClass();

  if (!$form_state['values']['locked']) {
    $bundle->bundle = trim($form_state['values']['bundle']);
  }
  else {
    $bundle->bundle = $form['#paragraphs_bundle']->bundle;
  }

  $bundle->locked = 1;

  $bundle->name = trim($form_state['values']['name']);

  $variables = $form_state['values'];

  // Remove everything that's been saved already - whatever's left is assumed
  // to be a persistent variable.
  foreach ($variables as $key => $value) {
    if (isset($bundle->$key)) {
      unset($variables[$key]);
    }
  }

  unset($variables['form_token'], $variables['op'], $variables['submit'], $variables['delete'], $variables['reset'], $variables['form_id'], $variables['form_build_id']);


  $status = paragraphs_bundle_save($bundle);

  $t_args = array('%name' => $bundle->name);

  if ($status == SAVED_UPDATED) {
    drupal_set_message(t('The paragraph bundle %name has been updated.', $t_args));
  }
  elseif ($status == SAVED_NEW) {
    drupal_set_message(t('The paragraph bundle %name has been added.', $t_args));
    watchdog('node', 'Added paragraph bundle %name.', $t_args, WATCHDOG_NOTICE, l(t('view'), 'admin/structure/paragraphs'));
  }

  $form_state['redirect'] = 'admin/structure/paragraphs';
  return;
}

/**
 * Menu callback; delete a single paragraph bundle
 *
 * @ingroup forms
 */
function paragraphs_admin_bundle_delete_form($form, &$form_state, $bundle) {
  if (!$bundle) {
    drupal_set_message(t('Could not load bundle'), 'error');
    drupal_goto('admin/structure/paragraphs');
  }

  $form['type'] = array('#type' => 'value', '#value' => $bundle->bundle);
  $form['name'] = array('#type' => 'value', '#value' => $bundle->name);

  $message = t('Are you sure you want to delete the paragraph bundle %bundle?', array('%bundle' => $bundle->name));
  $caption = '<p>' . t('This action cannot be undone. Content using the bundle will be broken.') . '</p>';

  return confirm_form($form, filter_xss_admin($message), 'admin/structure/paragraphs', filter_xss_admin($caption), t('Delete'));
}

/**
 * Process paragraph bundle delete confirm submissions.
 *
 * @see paragraphs_admin_bundle_delete_form()
 */
function paragraphs_admin_bundle_delete_form_submit($form, &$form_state) {
  paragraphs_bundle_delete($form_state['values']['type']);

  $t_args = array('%name' => $form_state['values']['name']);
  drupal_set_message(t('The paragraph bundle %name has been deleted.', $t_args));
  watchdog('node', 'Deleted paragraph bundle %name.', $t_args, WATCHDOG_NOTICE);

  $form_state['redirect'] = 'admin/structure/paragraphs';
  return;
}

/**
 * Helper to get the title of a bundle.
 *
 * @param $bundle
 *   The bundle.
 */
function paragraphs_bundle_title_callback($bundle) {
  return t('Edit Paragraph Bundle !name', array('!name' => $bundle->name));
}

/**
 * Separate paragraphs_item edit form
 */
function paragraphs_form_edit($form, &$form_state, $paragraphs_item) {
  if (!$paragraphs_item) {
    drupal_not_found();
  }

  $bundle = paragraphs_bundle_load($paragraphs_item->bundle);
  drupal_set_title(t('Edit !title paragraph', array('!title' => $bundle->name)));

  $form['paragraphs_item'] = array(
    '#type' => 'value',
    '#value' => $paragraphs_item,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#weight' => 10000,
    '#value' => t('Save'),
  );

  field_attach_form('paragraphs_item', $paragraphs_item, $form, $form_state);

  // Get the top-level host entity.
  $item = $paragraphs_item;
  $host = NULL;
  while (method_exists($item, 'hostEntity')) {
    $host = $item->hostEntity();
    $host_entity_type = $item->hostEntityType();
    $host_entity_id = $item->hostEntityId();
    $host_entity_bundle = $item->hostEntityBundle();
    $item = $host;
  }
  // Only show revisioning options if our host is definitely revisioned.
  $show_revision_options = FALSE;
  $use_revisions = FALSE;
  if ($host_entity_type == 'node') {
    $show_revision_options = TRUE;
    $host_settings = variable_get('node_options_' . $host_entity_bundle, array());
    $use_revisions = in_array('revision', $host_settings, TRUE);
  }
  if ($show_revision_options) {
    $form['additional_settings'] = array(
      '#type' => 'vertical_tabs',
      '#weight' => 99,
    );
    $form['revision_information'] = array(
      '#type' => 'fieldset',
      '#title' => t('Revision information'),
      '#collapsible' => TRUE,
      // Collapsed by default when "Create new revision" is unchecked.
      '#collapsed' => !$use_revisions,
      '#group' => 'additional_settings',
      '#attributes' => array(
        'class' => array('node-form-revision-information'),
      ),
      '#attached' => array(
        'js' => array(drupal_get_path('module', 'node') . '/node.js'),
      ),
      '#weight' => 20,
      '#access' => user_access('administer nodes'),
    );
    $form['revision_information']['revision'] = array(
      '#type' => 'checkbox',
      '#title' => t('Create new revision'),
      '#default_value' => $use_revisions,
      '#access' => user_access('administer nodes'),
    );
  }

  return $form;
}

/**
 * Validation function for entity form for validating the fields.
 */
function paragraphs_form_edit_validate($form, &$form_state) {
  field_attach_form_validate('paragraphs_item', $form_state['values']['paragraphs_item'], $form, $form_state);
}

/**
 * Submit function for edit entity form.
 */
function paragraphs_form_edit_submit($form, &$form_state) {
  $paragraphs_item = $form_state['values']['paragraphs_item'];
  field_attach_submit('paragraphs_item', $paragraphs_item, $form, $form_state);

  // Save a new revision of our host entity?
  $save_new_revision = !empty($form_state['values']['revision']);
  if ($save_new_revision) {
    $paragraphs_item->is_new_revision = TRUE;
  }

  // You get a new revision when you save a node, even if there are no changes.
  // Ensure that we do not save the host node if $save_new_revision is FALSE.
  $paragraphs_item->save(FALSE);

  $bundle = paragraphs_bundle_load($paragraphs_item->bundle);
  drupal_set_message(t('Paragraph !title has been saved.', array('!title' => $bundle->name)));
}

/**
 * Separate paragraphs_item delete confirm page.
 */
function paragraphs_form_delete($form, &$form_state, $paragraphs_item) {
  $paragraphs_bundle = paragraphs_bundle_load($paragraphs_item->bundle);
  drupal_set_title(t('Delete !title paragraph', array('!title' => $paragraphs_bundle->name)));

  $form['paragraphs_item'] = array(
    '#type' => 'value',
    '#value' => $paragraphs_item,
  );

  return confirm_form(
    $form,
    t('Are you sure you want to delete this !bundle paragraph?', array('!bundle' => $paragraphs_bundle->name)),
    NULL,
    t('This action cannot be undone.'),
    t('Delete paragraph'),
    t('Cancel'));
}

/**
 * Separate paragraphs_item create form.
 */
function paragraphs_form_add($form, &$form_state, $mode, $paragraphs_bundle, $host_entity_type, $entity_id, $field_name) {
  $new_paragraph_position = 0;

  // If we start from an empty paragraph field.
  if ($mode == 'scratch') {
    // Load the host entity for the new paragraph.
    $host_entity = entity_load($host_entity_type, array($entity_id));
    $host_entity = reset($host_entity);
  }

  // Inserting a paragraph before or after an existing paragraph.
  else {
    // Load the existing paragraphs item
    $paragraphs_item = paragraphs_item_load_multiple(array($entity_id));
    $paragraphs_item = reset($paragraphs_item);
    $host_entity = $paragraphs_item->hostEntity();
    $field_name = $paragraphs_item->field_name;

    // If we are inserting the new paragraph after an existing one.
    if ($mode == 'after' && $paragraphs_item) {
      // Load the paragraphs field
      $paragraphs = field_get_items($host_entity_type, $host_entity, $paragraphs_item->field_name);

      // Calculate the position of the new paragraph (delta).
      foreach ($paragraphs as $key => $value) {
        if ($value['value'] === $paragraphs_item->item_id) {
          // After the existing one.
          $new_paragraph_position = $key + 1;
          break;
        }
      }
    }
  }
  // Create the new paragraph item and set the host entity + position.
  $new_paragraph = entity_create('paragraphs_item', array(
    'bundle' => $paragraphs_bundle->bundle,
    'field_name' => $field_name
  ));
  $new_paragraph->setHostEntity($host_entity_type, $host_entity, $host_entity->language, FALSE);
  $new_paragraph->position = $new_paragraph_position;

  // Nice title for the creation page.
  drupal_set_title(t('Create !bundle paragraph', array('!bundle' => $paragraphs_bundle->name)));

  // Pass variables in form for usage in submit handler.
  $form['paragraphs_bundle'] = array(
    '#type' => 'value',
    '#value' => $paragraphs_bundle,
  );
  $form['paragraphs_item'] = array(
    '#type' => 'value',
    '#value' => $new_paragraph,
  );
  $form['host_entity'] = array(
    '#type' => 'value',
    '#value' => $host_entity,
  );
  $form['host_entity_type'] = array(
    '#type' => 'value',
    '#value' => $host_entity_type,
  );
  $form['mode'] = array(
    '#type' => 'value',
    '#value' => $mode,
  );

  // Attach the form to create the new paragraphs item.
  field_attach_form('paragraphs_item', $new_paragraph, $form, $form_state);

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#weight' => 10000,
    '#value' => t('Save'),
  );

  // Use the same validation handler as the edit form.
  $form['#validate'][] = 'paragraphs_form_edit_validate';

  return $form;
}

/**
 * Submit function for delete entity form.
 */
function paragraphs_form_delete_submit($form, &$form_state) {
  $paragraphs_item = $form_state['values']['paragraphs_item'];
  $paragraphs_bundle = paragraphs_bundle_load($paragraphs_item->bundle);
  $paragraphs_item->deleteRevision();

  drupal_set_message(t('Paragraph !bundle has been deleted.', array('!bundle' => $paragraphs_bundle->name)));
}

/**
 * Submit function for create entity form.
 */
function paragraphs_form_add_submit($form, &$form_state) {
  // Get data from form object.
  $paragraphs_item = $form['paragraphs_item']['#value'];
  $host_entity = $form['host_entity']['#value'];
  $host_entity_type = $form['host_entity_type']['#value'];
  $mode = $form['mode']['#value'];

  // We have to perform a host save if we are adding the first paragraph in the paragraph field.
  $skip_host_save = $mode == 'scratch' ? FALSE : TRUE;

  // Set host entity for new paragraph.
  $paragraphs_item->setHostEntity($host_entity_type, $host_entity, $host_entity->language, FALSE);

  // Attach submit handler for paragraph items + save paragraph item.
  field_attach_submit('paragraphs_item', $paragraphs_item, $form, $form_state);
  $paragraphs_item->save($skip_host_save);

  // If a paragraphs item is passed, we want to add the new paragraph after it.
  if ($paragraphs_item && $mode != 'scratch') {
    $new_paragraph = array(
      array(
        'value' => $paragraphs_item->item_id,
        'revision_id' => $paragraphs_item->revision_id
      )
    );

    // Load the paragraphs field from the host entity and insert the new paragraph item in the correct position.
    if ($paragraphs = field_get_items($host_entity_type, $host_entity, $paragraphs_item->field_name)) {
      array_splice($paragraphs, $paragraphs_item->position, 0, $new_paragraph);
    }

    // Overwrite the paragraph field + save the host entity.
    $field_name = $paragraphs_item->field_name;
    $host_entity->{$field_name}[LANGUAGE_NONE] = $paragraphs;
    entity_save($host_entity_type, $host_entity);
  }

  // Nice confirmation message.
  $paragraphs_bundle = paragraphs_bundle_load($paragraphs_item->bundle);
  drupal_set_message(t('Paragraph !bundle has been saved.', array('!bundle' => $paragraphs_bundle->name)));
}
