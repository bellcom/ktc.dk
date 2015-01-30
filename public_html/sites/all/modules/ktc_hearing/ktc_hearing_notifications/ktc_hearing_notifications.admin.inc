<?php
/**
 * @file
 * Admin stuff for KTC Hearing notifications module.
 */

/**
 * Form callback for admin settings.
 */
function ktc_hearing_notifications_settings() {
  $values = variable_get('ktc_hearing_notification_settings', array());

  $template_options = array(t('Ingen'));

  $mail_nodes = node_load_multiple(array(), array('type' => 'ktc_hearings_notification'));

  foreach ($mail_nodes as $mail_node) {
    $template_options[$mail_node->nid] = $mail_node->title;

    $edit_links[] = $mail_node->title . l(t('- rediger'), 'node/' . $mail_node->nid . '/edit', array('query' => array('destination' => current_path())));
  }

  // Mail settings.
  $form['mail_templates'] = array(
    '#type' => 'fieldset',
    '#title' => t('Email templates'),
    '#tree' => TRUE,
  );

  $form['mail_templates']['create_new'] = array(
    '#type' => 'item',
    '#markup' => '<h3>' . l(t('Opret ny skabelon'), 'node/add/ktc-hearings-notification', array('query' => array('destination' => current_path())))  . '</h3>',
  );

  $form['mail_templates']['existing'] = array(
    '#type' => 'item',
    '#markup' => implode($edit_links, '<br />'),
  );

  $attendee_roles = array(
    'chairman' => 'Formand',
    'responsible_foreman' => 'Ansvarlig Formand',
    'responsible_admin' => 'Ansvarlig Tovholder',
    'coordinator' => 'Tovholder',
    'attendees' => 'Deltagere',
    'creator' => 'Opretter',
  );

  $ops = array(
    'new_hearing' => 'Ny høring udsendt',
    'change_coordinator' => 'Ændring af ansvarlig tovholder',
    'change_chairman' => 'Ændring af ansvarlig formand',
    'notify' => 'Påmindelser',
    'approval' => 'Svar sammenskrevet (handling "Send til godkendelse")',
    'approved' => 'Status sat til "Godkendt og lukket"',
    'kl_answer' => 'Status sat til "KL høringssvar uploadet"',
  );

  foreach ($attendee_roles as $role => $title) {
    $form['mail_templates'][$role] = array(
      '#type' => 'fieldset',
      '#title' => $title,
    );

    foreach ($ops as $op => $title) {
      $form['mail_templates'][$role][$op] = array(
        '#type' => 'select',
        '#title' => $title,
        '#options' => $template_options,
        '#default_value' => !empty($values) ? $values[$role][$op] : 0,
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Gem'),
  );

  return $form;
}

/**
 * Submit handler for ktc_hearing_notifications_settings().
 */
function ktc_hearing_notifications_settings_submit(&$form, &$form_state) {
  $values = $form_state['values']['mail_templates'];
  variable_set('ktc_hearing_notification_settings', $values);

  drupal_set_message(t('Indstillingerne er blevet gemt'));
}
