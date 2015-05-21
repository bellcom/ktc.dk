<?php

function ktc_import_load_node($data) {
  $node_types = array(
    'article' => 'os2web_base_news',
    'filarkiv' => FALSE,
    'group' => 'group',
    'discussion' => 'forum_post',
    'document' => 'document',
    'event' => 'arrangement',
  );

  if (!$node_types[$data->type]) {
    return FALSE;
  }

  $nid = ktc_import_new_nid($data->nid);

  if (is_numeric($nid) && $node = node_load($nid)) {
    return $node;
  }
  $node = new stdClass();
  $node->type = $node_types[$data->type];

  node_object_prepare($node);

  return $node;
}

function ktc_import_save_node($entity) {
  $changed = $entity->changed;
  if (!$changed) {
    $changed = time();
  }
  $created = $entity->created;

  if (!$entity->uid) {
    $entity->uid = 1;
  }

  node_submit($entity);
  node_save($entity);

  db_update('node')
    ->fields(array(
      'created' => $created,
      'changed' => $changed,
    ))
    ->condition('nid', $entity->nid)
    ->execute();
}

function ktc_import_load_user($data) {
  if ($uid = ktc_import_new_uid($data->uid)) {
    return user_load($uid);
  }

  $user = new stdClass();

  return $user;
}

function ktc_import_save_user($entity) {
  $access = $entity->access;
  $created = $entity->created;

  user_save($entity, (array) $entity);

  db_update('users')
    ->fields(array(
      'created' => $created,
      'access' => $access,
    ))
    ->condition('uid', $entity->uid)
    ->execute();
}

function ktc_import_load_comment($data) {
  // Find the existing comment, by searching for it by uid, nid and created
  // timestamp.
  $uid = ktc_import_new_uid($data->uid);
  $nid = ktc_import_new_nid($data->nid);

  if (!$nid) {
    return;
  }

  $result = db_select('comment', 'c')
    ->fields('c')
    ->condition('uid', $uid, '=')
    ->condition('nid', $nid, '=')
    ->condition('created', $data->created, '=')
    ->execute()
    ->fetchAssoc();

  $comment = new stdClass();

  if (isset($result['cid'])) {
    $comment = comment_load($result['cid']);
  }
  return $comment;
}

function ktc_import_save_comment($entity) {
  $changed = $entity->changed;
  $created = $entity->created;

  comment_submit($entity);
  comment_save($entity);

  db_update('comment')
    ->fields(array(
      'created' => $created,
      'changed' => $changed,
    ))
    ->condition('cid', $entity->cid)
    ->execute();
}
