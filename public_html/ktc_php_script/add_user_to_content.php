<?php
include 'functions.php';

// addUidToContent('group');
// addUidToContent('arrangement');
// addUidToContent('forum_post');
// addUidToContent('os2web_base_news');
// addUidToContent('document');
// addUidToContent('meeting_doodle');

function addUidToContent($type) {
  $nodes = node_load_multiple(array(), array('type' => $type));
  foreach ($nodes as $node) {
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
