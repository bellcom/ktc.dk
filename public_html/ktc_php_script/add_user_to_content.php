<?php
include 'functions.php';

 addUidToContent('group');
 addUidToContent('arrangement');
 addUidToContent('forum_post');
 //addUidToContent('os2web_base_news');
 //addUidToContent('document');
// addUidToContent('meeting_doodle');
  //addUidToHoering('hearing');
 // addUidToHoering('hearing_responses');

function addUidToContent($type) {
  $count = 0;
  $nodes = node_load_multiple(array(), array('type' => $type));
  foreach ($nodes as $node) {
    if ($forfatter = field_get_items('node', $node, 'field_news_author')) {
      if ($uid = get_new_uid($forfatter[0]['value'])) {
        $node->uid = $uid;
      }
      else {
        $node->uid = 1;
        $count++;
      }
      $node->modified = $node->changed;
      node_save($node);
    }
  }
  print "\n count is "  . $count . "\n\n";
}

function addUidToHoering($type) {

  $count = 0;
  $missing = '';
  $nodes = node_load_multiple(array(), array('type' => $type));
  foreach ($nodes as $node) {
    // Get originator typo3 user id.
    if ($forfatter = field_get_items('node', $node, 'field_typo3_user_id')) {
      if ($uid = get_id_by_typo3_uid($forfatter[0]['value'], 'user')) {
        $node->uid = $uid;
      }
      else {
        $node->uid = 1;
        if ($uid = get_old_user_info_from_typo3($forfatter[0]['value'])) {
          $node->uid = $uid;
        }
        else {
          if ($mail = get_email_from_fe_users($forfatter[0]['value'])) {
            $missing .= ',' . $mail;
            $count++;

          }
        }
      }
      $node->modified = $node->changed;
      node_save($node);
    }
    else {
      // Then get responsible_foreman to uid.
      if ($admin = field_get_items('node', $node, 'field_responsible_admin')) {
        $node->uid = $admin[0]['target_id'];
        node_save($node);
      }
      elseif ($responsible_forman = field_get_items('node', $node, 'field_responsible_foreman')) {
        $node->uid = $responsible_forman[0]['target_id'];
        $node->modified = $node->changed;
        node_save($node);
      }
    }
  }
  print "\n count is "  . $count . "\n\n";
  print_r($missing);
}
/*
function get_old_user_info_from_typo3($typo3_uid) {
  if (is_numeric($typo3_uid)) {
    $query = db_select('fe_users', 'g')
      ->fields('g', array('email'))
      ->condition('uid', $typo3_uid, '=');
    $result = $query->execute()->fetchAssoc();
    if ($result) {
      $user = user_load_by_mail($result['email']);
      if ($user) {
        return $user->uid;
      }
      else {
        return FALSE;
      }
    }
  }
}

function get_email_from_fe_users($typo3_uid) {
  if (is_numeric($typo3_uid)) {
    $query = db_select('fe_users', 'g')
      ->fields('g', array('email'))
      ->condition('uid', $typo3_uid, '=');
    $result = $query->execute()->fetchAssoc();
    if ($result) {
      if ($result['email'] != '') {
        return $result['email'];
      }
      else {
        return FALSE;
      }
    }
    else {
      return FALSE;
    }
  }
}
*/