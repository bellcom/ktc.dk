<?

/**
 * Dont transform data in property.
 */
function ktc_import_no_transform($entity, $prop, $value) {
  if (is_object($value)) {
    $entity->{$prop} = obj_to_array($value);
  }
  else {
    $entity->{$prop} = $value;
  }
}

/**
 *
 */
function ktc_import_set_new_uid($entity, $prop, $value) {
  $new_uid = ktc_import_new_uid($value);

  $entity->{$prop} = $new_uid;
}

/**
 *
 */
function ktc_import_set_new_nid($entity, $prop, $value) {
  $new_nid = ktc_import_new_nid($value);

  $entity->{$prop} = $new_nid;
}

/**
 *
 */
function ktc_import_new_uid($old_uid) {
  $uid = FALSE;
  $query = db_select('field_data_field_gammel_uid', 'g')
    ->fields('g', array('entity_id'))
    ->condition('field_gammel_uid_value', $old_uid, '=')
    ->condition('bundle', 'user', '=');
  $result = $query->execute()->fetchAssoc();
  if ($result) {
    $uid = $result['entity_id'];
  }
  return $uid;
}

/**
 *
 */
function ktc_import_new_nid($old_nid) {
  $nid = FALSE;
  $query = db_select('field_data_field_gammel_nid', 'g')
    ->fields('g', array('entity_id'))
    ->condition('field_gammel_nid_value', $old_nid, '=');

  $result = $query->execute()->fetchAssoc();

  if ($result) {
    $nid = $result['entity_id'];
  }

  return $nid;
}

function obj_to_array($obj){
  return json_decode(json_encode($obj), TRUE);
}
