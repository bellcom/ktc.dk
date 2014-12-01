<?php
include 'functions.php';
include 'add_user_to_content.php';
getDocmentElements('comment', 'comments-import.xml');

function getDocmentElements($type, $filename) {
  $path = 'private://xml';
  $content = file_get_contents(drupal_realpath($path) . '/' . $filename);

  $count = 0;
  $size = count(qp($content, 'comment'));
  print "There are " . $size . " comments \n";
  $step = 0;
  $count = 0;
  foreach (qp($content, 'comment') as $data) {
    $nid = $data->children('nid')->text();
    $uid = $data->children('uid')->text();

    $node = node_load_by_old_nid($nid);
    $new_uid = get_new_uid($uid);
    if (!$new_uid) {
      $new_uid = 1;
    }
    $cid = $data->children('cid')->text();
    $body = $data->children('comment_body')->text();

    if ($comment = get_comment_elements($cid)) {
      $comment['uid'] = $new_uid;
      $comment['nid'] = $node->nid;
      $comment['comment_body'] = array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => $body,
            'format' => 'filtered_html',
          ),
        ),
      );
      add_comments($comment);
    }
    $count++;
    if ($count > 4) {
      //break;
    }
  }
}

function get_comment_elements($cid) {
  $query = 'SELECT * FROM {comment_netvaerk} where cid = :cid';
  $result = db_query($query, array('cid' => $cid))->fetchAssoc();
  if ($result) {
    return $result;
  }
}

function add_comments($comment_array) {
  $comment = (object) array(
    'nid' => $comment_array['nid'],
    'cid' => $comment_array['cid'],
    'pid' => $comment_array['pid'],
    'uid' => $comment_array['uid'],
    'mail' => $comment_array['mail'],
    'name' => $comment_array['name'],
    'thread' => $comment_array['thread'],
    'created' => $comment_array['created'],
    'changed' => $comment_array['changed'],
    'is_anonymous' => 0,
    'homepage' => $comment_array['homepage'],
    'status' => $comment_array['status'],
    'subject' => $comment_array['subject'],
    'language' => LANGUAGE_NONE,
    'comment_body' => $comment_array['comment_body'],
  );
  comment_submit($comment);
  comment_save($comment);
  db_update('comment')
      ->fields(array(
          'hostname' => $comment_array['hostname'],
        ))
      ->condition('cid', $comment->cid)
      ->execute();

  db_insert('comment')
  ->fields(array(
    'cid' => $comment_array['cid'],
    'nid' => $comment_array['nid'],
    'pid' => $comment_array['pid'],
    'uid' => $comment_array['uid'],
    'mail' => $comment_array['mail'],
    'name' => $comment_array['name'],
    'thread' => $comment_array['thread'],
    'created' => $comment_array['created'],
    'changed' => $comment_array['changed'],
    'hostname' => $comment_array['hostname'],
    'homepage' => $comment_array['homepage'],
    'status' => $comment_array['status'],
    'subject' => $comment_array['subject'],
    'language' => LANGUAGE_NONE,
  ))
  ->execute();
}
