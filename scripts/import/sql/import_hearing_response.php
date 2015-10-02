<?php

include 'functions.php';
create_hearing_response_nodes();

function create_hearing_response_nodes() {
  if (!defined('HEARINGS_RESPONSE_CREATE_NEW')) {
    echo "====================================== ONLY NEW HEARINGS_RESPONSE ARE CREATED ======================================\n";
    define('HEARINGS_RESPONSE_CREATE_NEW', true);
  }

  $elements = get_hearing_elements_from_db_table('tx_ktchoringdb_answer');
  print "There are " . count($elements) . " elements. \n";
  $step = 0;
  $count = 0;
  $skip = 0;
  $not_found = 0;
  foreach ($elements as $element) {
    if ($element['proposal_id'] == 0 || !isset($element['proposal_id'])) {
      $skip++;
      $count++;

      if ($count == count($elements)) {
        print ($count - $skip) . " node are updated. Done \n";
        print "Skip " . $skip . " node \n";
      }
      continue;
    }

    if ($nid = get_id_by_typo3_uid($element['uid'], 'hearing_responses')) {
      // FIXME: only create new
      continue;
      $node = node_load($nid);
    }
    else {
      $node = new stdClass();
    }

    $node->language = LANGUAGE_NONE;
    $node->type = 'hearing_responses';
    $node->created = $element['crdate'];
    $node->modified = $element['tstamp'];
    $node->status = $element['hidden'] ? 0 : 1;

    $hearing_id = get_id_by_typo3_uid($element['proposal_id'], 'hearing');
    if ($hearing_id) {
      $node->title = 'Høringssvar - ' . $hearing_id;
    }
    else {
      $node->title = 'Høringssvar - ' . $element['proposal_id'];
    }
    if ($hearing_id) {
      $hearing_node = node_load($hearing_id);
      if ($groups = field_get_items('node', $hearing_node, 'og_group_ref')) {
        foreach ($groups as $key => $group) {
          $node->og_group_ref[LANGUAGE_NONE][$key]['target_id'] = $group['target_id'];
        }
      }
      $node->field_hearing_node[LANGUAGE_NONE][$key]['target_id'] = $hearing_id;
    }

    if ($uid = get_old_user_info_from_typo3($element['author'])) {
      $node->uid = $uid;
    }
    else {
      $not_found++;
      $node->uid = 1;
    }

    $node->field_impression[LANGUAGE_NONE][0]['value'] = convert_char($element['impression']);
    $node->field_impression[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['impression']);
    $node->field_impression[LANGUAGE_NONE][0]['format'] = 'full_html';

    $node->body[LANGUAGE_NONE][0]['value'] = convert_char($element['detailed_comments']);
    $node->body[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['detailed_comments']);
    $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';

    $node->field_general_comments[LANGUAGE_NONE][0]['value'] = convert_char($element['general_comments']);
    $node->field_general_comments[LANGUAGE_NONE][0]['safe_value'] = convert_char($element['general_comments']);
    $node->field_general_comments[LANGUAGE_NONE][0]['format'] = 'full_html';

    $node->field_is_final[LANGUAGE_NONE][0]['value'] = $element['is_final'];
    $node->field_is_no_answer[LANGUAGE_NONE][0]['value'] = $element['is_no_answer'];
    $node->field_is_summary[LANGUAGE_NONE][0]['value'] = $element['is_summary'];

    $node->field_typo3_uid[LANGUAGE_NONE][0]['value'] = $element['uid'];
    if (is_numeric($element['author'])) {
      $node->field_typo3_user_id[LANGUAGE_NONE][0]['value'] = $element['author'];
    }

    node_save($node);
    $count++;

    $left = (int) count($elements) - $count;
    if ($count > $step) {
      print "node nid (" . $node->nid . ") is updated, number " . $count . ". There are " . $left . " left. \n";
      $step += 10;
    }
    if (count($elements) == $size) {
      print (count($elements) - $skip) . " Node  are updated. Done \n";
      print "Skip " . $skip . " nodes \n";
      print "Not found " . $not_found;
    }
  }
}
