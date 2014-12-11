<?php
include 'functions.php';

create_hearing_nodes();

function create_hearing_nodes() {
  $elements = get_hearing_elements_from_db_table('tx_ktchoringdb_proposal');
  foreach ($elements as $element) {

    if ($nid = get_id_by_typo3_uid($element['uid'], 'hearing') && is_numeric($nid)) {
      $node = node_load($nid);
    }
    else {
      $node = new stdClass();
    }

    $node->language = LANGUAGE_NONE;
    $node->type = 'hearing';
    $node->created = $element['crdate'];
    $node->modified = $element['tstamp'];
    $node->status = $element['hidden'] ? 0 : 1;
    if (strlen($element['title']) > 255) {
      $node->field_titel_lang[LANGUAGE_NONE][0]['value'] = $element['title'];
      $node->field_titel_lang[LANGUAGE_NONE][0]['safe_value'] = $element['title'];
      $node->title = convert_char(substr($element['title'], 0, 250));
    }
    else {
      $node->title = (convert_char($element['title']));
    }

    if ($uid = get_id_by_typo3_uid($element['originator'], 'user')) {
      $node->uid = $uid;
    }
    else {
      $node->uid = 1;
    }

    $node->field_hearing_authority[LANGUAGE_NONE][0]['value'] = convert_char($element['authority']);
    $node->field_hearing_authority[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['authority']);

    $node->field_abstract[LANGUAGE_NONE][0]['value'] = convert_char($element['abstract']);
    $node->field_abstract[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['abstract']);
    $node->field_abstract[LANGUAGE_NONE][0]['format'] = 'full_html';

    $node->body[LANGUAGE_NONE][0]['value'] = convert_char($element['text']);
    $node->body[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['text']);
    $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';

    $node->field_message[LANGUAGE_NONE][0]['value'] = convert_char($element['message']);
    $node->field_message[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['message']);
    $node->field_message[LANGUAGE_NONE][0]['format'] = 'full_html';

    $type_tid = get_term_tid(get_type_name($element['type']), 30);
    if (is_numeric($type_tid)) {
      $node->field_hearing_type[LANGUAGE_NONE][0]['tid'] = $type_tid;
    }

    if ($element['kategories'] != '') {
      $cat_ar = explode(',', $element['kategories']);
      foreach ($cat_ar as $key => $cat) {
        if ($tid = get_id_by_typo3_uid($cat, 'emner_faste_')) {
          $node->field_topics[LANGUAGE_NONE][$key]['tid'] = $tid;
        }
      }
    }

    if ($element['official_start_date'] > 0) {
      $node->field_official_date[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', $element['official_start_date']);
      $node->field_official_date[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
    }
    if ($element['official_answer_date'] > 0) {
      $node->field_official_responsedate[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', $element['official_answer_date']);
      $node->field_official_responsedate[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
    }

    if ($element['deadline'] > 0) {
      $node->field_attendee_deadlines[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', $element['deadline']);
      $node->field_attendee_deadlines[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
    }

    if ($element['return_date'] > 0) {
      $node->field_enrollment_deadlines[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', $element['return_date']);
      $node->field_enrollment_deadlines[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
    }

    if ($element['foreman'] != '') {
      $forman_ar = explode(',', $element['foreman']);
      foreach ($forman_ar as $key => $forman) {
        if ($uid = get_id_by_typo3_uid($forman, 'user')) {
          $node->field_chairman[LANGUAGE_NONE][$key]['target_id'] = $uid;
        }
      }
    }

    if ($element['admin'] != '') {
      $admin_ar = explode(',', $element['admin']);
      foreach ($admin_ar as $key => $admin) {
        if ($uid = get_id_by_typo3_uid($admin, 'user')) {
          $node->field_coordinator[LANGUAGE_NONE][$key]['target_id'] = $uid;
        }
      }
    }

    if ($element['participants'] != '') {
      $attendee_ar = explode(',', $element['participants']);
      foreach ($attendee_ar as $key => $attendee) {
        if ($uid = get_id_by_typo3_uid($attendee, 'user')) {
          $node->field_attendees[LANGUAGE_NONE][$key]['target_id'] = $uid;
        }
      }
    }

    if (is_numeric($element['responsible_admin'])) {
      if ($uid = get_id_by_typo3_uid($element['responsible_admin'], 'user')) {
        $node->field_responsible_admin[LANGUAGE_NONE][0]['target_id'] = $uid;
      }
    }

    if (is_numeric($element['responsible_foreman'])) {
      if ($uid = get_id_by_typo3_uid($element['responsible_foreman'], 'user')) {
        $node->field_responsible_foreman[LANGUAGE_NONE][0]['target_id'] = $uid;
      }
    }

    if ($element['groups'] != '') {
      $group_ar = explode(',', $element['groups']);
      foreach ($group_ar as $key => $group) {
        if ($gid = get_new_gid($group)) {
          $node->og_group_ref[LANGUAGE_NONE][$key]['target_id'] = $gid;
        }
      }
    }

    if (is_numeric($element['state'])) {
      $term_id = get_term_tid(get_state_name($element['state']), 28);
      if (is_numeric($term_id)) {
        $node->field_status[LANGUAGE_NONE][0]['tid'] = $term_id;
      }
    }

    $node->field_hearing_official[LANGUAGE_NONE][0]['value'] = $element['official'];
    $node->field_hearing_archived[LANGUAGE_NONE][0]['value'] = $element['archived'];

    $node->field_typo3_uid[LANGUAGE_NONE][0]['value'] = $element['uid'];
    if (is_numeric($element['originator'])) {
      $node->field_typo3_user_id[LANGUAGE_NONE][0]['value'] = $element['originator'];
    }

    node_save($node);
  }
}
