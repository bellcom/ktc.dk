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
    'KTC_HEARING_STATUS_OPEN' => 'Ny',
    'KTC_HEARING_STATUS_RECAP' => 'Sammenfatning',
    'KTC_HEARING_STATUS_APPROVAL' => 'Godkendelse',
    'KTC_HEARING_STATUS_APPROVED' => 'Godekendt',
  );

  foreach ($attendee_roles as $role) {
    $form['mail_templates'][$role] = array(
      '#type' => 'fieldset',
      '#title' => $role,
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );

    foreach ($ops as $op => $title) {

      $form['mail_templates'][$role]['ktc_hearing_mail_subj_' . $op . '_' . $role] = array(
        '#type' => 'textfield',
        '#default_value' => variable_get('ktc_hearing_mail_subj_' . $op . '_' . $role, ''),
        '#prefix' => '<b>' . $title . '</b>',
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
    '#description' => 'Vedhæftet denne mail, vil være høringssvaret som pdf og ren tekst. Pdf for høring kan ses på: ' . l('node/%/hearing_summary_answer_pdf', 'node/%/hearing_summary_answer_pdf') . '(erstat "%" med nid)',
  );

  return system_settings_form($form);
}
