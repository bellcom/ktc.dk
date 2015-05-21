<?
/**
 * Dont transform data in property.
 */
function ktc_import_no_transform($entity, $prop, $value, $opt) {
  if ($opt['field']) {
    $prop = $opt['field'];
  }

  if (is_object($value)) {
    $value = obj_to_array($value);
    $entity->{$prop} = $value;
  }
  else {
    $entity->{$prop} = $value;
  }
}

function ktc_import_update_to_entity_reference($entity, $prop, $value, $opt) {
  $value = obj_to_array($value);

  $language = key($value);
  foreach($value[$language] as $_key => $_value) {
    $value[$language][$_key]['target_id'] = reset($_value);
  }

  $entity->{$prop} = $value;
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

/**
 *
 */
function ktc_import_new_gid($gid) {
  $new_gid = FALSE;
  if (is_numeric($gid)) {
    $query = db_select('field_data_field_gammel_gid', 'g')
      ->fields('g', array('entity_id'))
      ->condition('field_gammel_gid_value', $gid, '=')
      ->condition('bundle', 'group', '=');

    $result = $query->execute()->fetchAssoc();
    if ($result) {
      $new_gid = $result['entity_id'];
    }
  }

  return $new_gid;
}

/**
 *
 */
function ktc_import_set_user_name($entity, $prop, $value) {
  $entity->{$prop} = $value . user_password();
}

/**
 *
 */
function ktc_import_fetch_file($entity, $prop, $value, $opt) {
  $dir_map = DRUPAL_ROOT . '/../tmp/ktc/sites/default/files/uploads/';

  $value = obj_to_array($value);

  if (!$value) {
    return;
  }

  $field_name = $opt['field'];

  $language = key($value);
  foreach ($value[$language] as $_key => $_val) {
    $uri = $_val['uri'];

    list($scheme, $path) = explode('://', $uri);

    list($dir) = explode('/', $path);

    $destination_dir = $scheme . '://' . $dir;
    $destination_uri = $destination_dir . '/' . $_val['filename'];
    $file_path = $dir_map . $scheme . '/' . $path;

    // Make sure there is a directory for the file.
    file_prepare_directory($destination_dir, FILE_CREATE_DIRECTORY);

    $file = file_uri_to_object(file_unmanaged_copy($file_path, $destination_uri, FILE_EXISTS_REPLACE));
    $file->display = 1;
    file_save($file);

    $entity->{$field_name}[LANGUAGE_NONE][$_key] = (array) $file;
  }
}

/**
 *
 */
function ktc_import_set_old_nid($entity, $prop, $value) {
  $entity->field_gammel_nid[LANGUAGE_NONE][0]['value'] = $value;
}

/**
 *
 */
function ktc_import_set_old_uid($entity, $prop, $value) {
  $entity->field_gammel_uid[LANGUAGE_NONE][0]['value'] = $value;
}

/**
 *
 */
function ktc_import_set_new_groups($entity, $prop, $value) {
  $value = obj_to_array($value);

  if (!is_array($value)) {
    return;
  }

  $language = key($value);

  $entity->og_user_node = array();
  foreach ($value[$language] as $_key => $_value) {
    $gid = ktc_import_new_gid($_value['gid']);
    if ($gid) {
      $entity->og_user_node[LANGUAGE_NONE][]['target_id'] = $gid;
    }
  }
}

/**
 *
 */
function ktc_import_set_group_info($entity, $prop, $value) {
  $value = obj_to_array($value);
  $old_gid = $value[LANGUAGE_NONE][0]['gid'];
  $gid = ktc_import_new_gid($old_gid);

  if ($gid) {
    $entity->og_group_ref[LANGUAGE_NONE][0]['target_id'] = $gid;
  }
  else {
    $entity->og_group_ref = array();
  }
  $entity->field_gammel_gid[LANGUAGE_NONE][0]['value'] = $old_gid;
}

function obj_to_array($obj){
  return json_decode(json_encode($obj), TRUE);
}
