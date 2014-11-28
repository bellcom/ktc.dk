<?php

//addUidToContent('group');
//addUidToContent('arrangement');
//addUidToContent('forum_post');
//addUidToContent('os2web_base_news');
//addUidToContent('document');
//addUidToContent('meeting_doodle');

function addUidToContent($type) {
  $nodes = node_load_multiple(array(), array('type' => $type));
  //print_r($nodes);
    foreach($nodes as $node) {
      if ($forfatter = field_get_items('node', $node, 'field_news_author')) {
        if ($uid = get_new_uid($forfatter[0]['value'])) {
          $node->uid = $uid;
        }
        else {
          $node->uid = 1;
        }
        node_save($node);
      }
  }
}

function get_new_uid($old_uid) {
  $uid = FALSE;
  if (is_numeric($old_uid)) {
    $query = db_select('field_data_field_gammel_uid', 'g')
      ->fields('g', array('entity_id'))
      ->condition('field_gammel_uid_value', $old_uid, '=')
      ->condition('bundle', 'user', '=');
    $result = $query->execute()->fetchAssoc();
    if ($result) {
      $uid = $result['entity_id'];
    }
  }
  $uid;
  return $uid;
}