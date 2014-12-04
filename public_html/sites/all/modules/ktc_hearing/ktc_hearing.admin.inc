<?php
/**
 * @file
 * Admin stuff for KTC Hearings.
 */

/**
 * Admin settings.
 */
function ktc_hearing_permission_settings() {
  $form = array();

  if (!$vocabulary = taxonomy_vocabulary_machine_name_load('brugertyper')) {
    drupal_set_message('Vocabulary with machinename "brugertyper" is missing', 'error');
  }
  else {
    $taxonomy_terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));

    $usertypes = array();

    foreach ($taxonomy_terms as $term) {
      $usertypes[$term->tid] = $term->name;
    }

    $form['ktc_hearings_usertype_create'] = array(
      '#title' => 'Bruger typer der kan oprette høringer',
      '#type' => 'checkboxes',
      '#options' => $usertypes,
      '#default_value' => variable_get('ktc_hearings_usertype_create', array()),
    );
  }

  if (!$vocabulary = taxonomy_vocabulary_machine_name_load('hearing_status')) {
    drupal_set_message('Vocabulary with machinename "hearing_status" is missing', 'error');
  }
  else {
    $taxonomy_terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));

    $status_open = array();

    foreach ($taxonomy_terms as $term) {
      $status_open[$term->tid] = $term->name;
    }

    $form['ktc_hearing_status_open'] = array(
      '#title' => 'Høringstatus der tillader svar',
      '#type' => 'checkboxes',
      '#options' => $status_open,
      '#default_value' => variable_get('ktc_hearing_status_open', array()),
    );
  }

  // Mail settings.
  $form['mail_templates'] = array(
    '#type' => 'fieldset',
    '#title' => t('Email templates'),
  );

  $form['mail_templates']['tokens'] = array(
    '#theme' => 'token_tree',
    '#token_types' => array('user', 'node'),
    '#global_types' => FALSE,
    '#click_insert' => FALSE,
  );

  $attendee_roles = array(
    'chairman',
    'responsible_foreman',
    'responsible_admin',
    'coordinator',
    'attendees',
  );

  $ops = array(
    'new',
  );

  foreach ($attendee_roles as $role) {
    $form['mail_templates'][$role] = array(
      '#type' => 'fieldset',
      '#title' => $role,
    );
    foreach ($ops as $op) {

      $form['mail_templates'][$role]['ktc_hearing_mail_subj_' . $op . '_' . $role] = array(
        '#type' => 'textfield',
        '#default_value' => variable_get('ktc_hearing_mail_subj_' . $op . '_' . $role, ''),
      );

      $form['mail_templates'][$role]['ktc_hearing_mail_body_' . $op . '_' . $role] = array(
        '#type' => 'textarea',
        '#default_value' => variable_get('ktc_hearing_mail_body_' . $op . '_' . $role, ''),
      );
    }
  }

  $op = 'approved';
  $role = 'creator';

  $form['mail_templates'][$role] = array(
    '#type' => 'fieldset',
    '#title' => $role,
  );
  $form['mail_templates'][$role]['ktc_hearing_mail_subj_' . $op . '_' . $role] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('ktc_hearing_mail_subj_' . $op . '_' . $role, ''),
  );

  $form['mail_templates'][$role]['ktc_hearing_mail_body_' . $op . '_' . $role] = array(
    '#type' => 'textarea',
    '#default_value' => variable_get('ktc_hearing_mail_body_' . $op . '_' . $role, ''),
  );

  return system_settings_form($form);
}
