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

  if (!$vocabulary = taxonomy_vocabulary_machine_name_load('ktc_netvaerk_grouproles')) {
    drupal_set_message('Vocabulary with machinename "brugertyper" is missing', 'error');
  }
  else {
    $taxonomy_terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));

    $group_roles = array();

    foreach ($taxonomy_terms as $term) {
      $group_roles[$term->tid] = $term->name;
    }

    $form['ktc_hearings_group_roles_create'] = array(
      '#title' => 'Grupperoller der kan oprette høringer i egne faggruppenetværk.',
      '#type' => 'checkboxes',
      '#options' => $group_roles,
      '#default_value' => variable_get('ktc_hearings_group_roles_create', array()),
    );
  }

  if (!$vocabulary = taxonomy_vocabulary_machine_name_load('hearing_status')) {
    drupal_set_message('Vocabulary with machinename "hearing_status" is missing', 'error');
  }
  else {
    $taxonomy_terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));

    $stateoptions = array();

    foreach ($taxonomy_terms as $term) {
      $stateoptions[$term->tid] = $term->name;
    }

    $states = array(
      'ktc_hearing_status_new',
      'ktc_hearing_status_open',
      'ktc_hearing_status_recap',
      'ktc_hearing_status_approval',
      'ktc_hearing_status_approved',
      'ktc_hearing_status_closed',
      'ktc_hearing_status_kl_answer',
    );
  }

  foreach ($states as $state) {
    $form[$state] = array(
      '#type' => 'select',
      '#title' => $state,
      '#options' => $stateoptions,
      '#default_value' => variable_get($state),
    );
  }

  return system_settings_form($form);
}
