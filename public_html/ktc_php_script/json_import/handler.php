<?php
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
