<?php

// Load all events
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'arrangement')
  ->fieldCondition('field_submission', 'target_id', 'NULL', '!=');
$result = $query->execute();

if (isset($result['node'])) {
  $nids = array_keys($result['node']);

  // Run through nids
  foreach($nids as $nid) {
    $node = node_load($nid);

    // Get all submissions
    if ($field_submissions = field_get_items('node', $node, 'field_submission')) {

      // Run through all submissions
      foreach ($field_submissions as $submission) {
        $uid = $submission['target_id'];

        // Signup
        $signup_form = array();
        $reply = _signup_user_forced($nid, $uid);

        // Output
        echo $uid . ' has been transferred \n';
      }
    }
  }
}

/*
 * Hi-jacked from signup module
 */
function _signup_user_forced($nid, $uid) {
  $account = user_load($uid);
  $node = node_load($nid);
  $notify_user = FALSE;
  $reset_node_load = FALSE;

  // Grab the current time once, since we need it in a few places.
  $current_time = REQUEST_TIME;

  // Allow other modules to inject data into the user's signup data.
  $extra = module_invoke_all('signup_sign_up', $node, $account);
  $signup_info = array();
  if (!empty($signup_form['signup_form_data'])) {
    $signup_info = $signup_form['signup_form_data'];
  }
  if (!empty($extra)) {
    $signup_info = array_merge($signup_info, $extra);
  }

  // Figure out if confirmation or reminder emails will be sent and
  // inform the user.
  $confirmation_email = $node->signup_send_confirmation ? '  ' . t('A confirmation email will be sent shortly containing further information about this %node_type.', array('%node_type' => node_type_get_name($node->type))) : '';
  $reminder_email = $node->signup_send_reminder ? '  ' . t('A reminder email will be sent !number !days before the %node_type.', array('!number' => $node->signup_reminder_days_before, '!days' => format_plural($node->signup_reminder_days_before, 'day', 'days'), '%node_type' => node_type_get_name($node->type))) : '';

  // Construct the appropriate $signup object representing this signup.
  $signup = new stdClass;
  $signup->nid = $node->nid;
  // Grab the values from the $account object we care about
  foreach (array('uid', 'name', 'mail') as $field) {
    $signup->$field = $account->$field;
  }
  // Other special signup values.
  $signup->form_data = $signup_info;
  $signup->signup_time = $current_time;
  // By default, signups should count towards the limit.
  $signup->count_towards_limit = 1;
  if (!empty($signup_anon_mail)) {
    $signup->anon_mail = $signup_anon_mail;
  }

  // Invoke hook_signup_data_alter() to let other modules change this.
  drupal_alter('signup_data', $signup, $signup_form);

  // Insert the signup into the {signup_log} table.
  signup_save_signup($signup);

  $node->signup_total++;
  if (!empty($signup->count_towards_limit)) {
    $node->signup_effective_total += $signup->count_towards_limit;
    if ($node->signup_close_signup_limit) {
      _signup_check_limit($node, 'total');
    }
  }

  return $signup->sid;
}
