<?php

function get_hearing_elements_from_db_table($table, $condition = NULL) {
  $elements = array();
  $query = db_select($table, 'tx')
    ->fields('tx');
    //->range(0, 4);

  if (isset($condition)) {
    $query->condition($condition, '', '<>');
  }
  $result = $query->execute();
  while ($record = $result->fetchAssoc()) {
    $elements[] = $record;
  }
  return $elements;
}
function get_id_by_typo3_uid($typo3_uid, $bundle) {
  $eid = FALSE;
  if (is_numeric($typo3_uid)) {
    $query = db_select('field_data_field_typo3_uid', 'g')
      ->fields('g', array('entity_id'))
      ->condition('field_typo3_uid_value', $typo3_uid, '=')
      ->condition('bundle', $bundle, '=');
    $result = $query->execute()->fetchAssoc();
    if ($result) {
      $eid = $result['entity_id'];
    }
  }
  return $eid;
}

function get_new_gid($typo3_gid) {
  $gid = FALSE;
  switch ($typo3_gid) {
    // Digital Forvatning.
    case 1295:
      $gid = 617;
      break;

    // Kommunnal ejendonsdrift.
    case 1531:
      $gid = 613;
      break;

    // Klima, energi og ressourcer.
    case 1296:
      $qid = 645;
      break;

    // Miljø og Grundvand.
    case 1299:
      $gid = 674;
      break;

    // Natur og overfladevand.
    case 1298:
      $gid = 672;
      break;

    // Plan.
    case 1300:
      $gid = 671;
      break;

    // Veje, Trafik og Trafiksikkerhed.
    case 1301:
      $gid = 670;
      break;

    // Almene Boliger.
    case 1391:
      $gid = 612;
      break;

    // Byggelov.
    case 1294:
      $gid = FALSE;
      break;

    default:
      $gid = FALSE;
      break;

  }
  return $gid;
}

function get_type_name($tid) {
  $name = FALSE;
  switch ($tid) {
    case 1:
      $name = 'Lovforslag';
      break;

    case 2:
      $name = 'Bekendtgørelse';
      break;

    case 3:
      $name = 'Vejledning';
      break;

    case 4:
      $name = 'Cirkulære';
      break;

    case 5:
      $name = 'Rapport';
      break;

    case 6:
      $name = 'Andet';
      break;

    case 7:
      $name = 'EU direktiv';
      break;

    case 8:
      $name = 'Udpegning';
      break;
  }
  return $name;
}

function get_state_name($tid) {
  $name = FALSE;
  switch ($tid) {
    case 0:
      $name = 'Ny';
      break;

    case 1:
      $name = 'Åben';
      break;

    case 2:
      $name = 'Under sammenskrivning';
      break;

    case 3:
      $name = 'Under godkendelse';
      break;

    case 4:
      $name = 'Godkendt og lukket';
      break;

    default:
      $name = FALSE;
      break;
  }
  return $name;
}

function convert_char($string) {
  $find = array("Ã†", "Ã¸", "Ã¦", "Ã¥", "Ã˜", "Ã…", "&#39;", "Ã©", );
  $replace = array("Æ", "ø", "æ", "å", "Ø", "Å", "'", "é", );
  $string = str_replace($find, $replace, $string);
  return $string;
}
function get_term_tid($name, $vid) {
  $tid = FALSE;
  $query = db_select('taxonomy_term_data', 't')
      ->fields('t', array('tid'))
      ->condition('name', $name, '=')
      ->condition('vid', $vid, '=');
  $result = $query->execute()->fetchAssoc();
  if ($result) {
    $tid = $result['tid'];
  }
  return $tid;
}
function node_load_by_old_nid($nid) {
  $node = FALSE;
  if (isset($nid)) {
    $query = db_select('field_data_field_gammel_nid', 'g')
      ->fields('g', array('entity_id'))
      ->condition('field_gammel_nid_value', $nid, '=');

    $result = $query->execute();
  }
  if ($result->rowCount() > 0) {
    while ($record = $result->fetchAssoc()) {
      $node = node_load($record['entity_id']);
    }
  }
  return $node;
}

function get_group_id_by_oldGid($gid) {
  $new_gid = FALSE;
  if (isset($gid)) {
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

function get_images_or_files($url, $file_dir, $name = NULL, $real_name = NULL) {
  $drupalfile = FALSE;
  if (file_exists($url)) {
    if (!isset($real_name)) {
      $dfile = (object) array(
        'uri' => $url,
        'filemime' => file_get_mimetype($url),
        'status' => 1,
      );
    }
    else {
      $dfile = (object) array(
        'uri' => $url,
        'filemime' => file_get_mimetype($real_name),
        'status' => 1,
      );
    }
    // Now get Drupal to copy it.
    $mydir = 'private://' . $file_dir;
    file_prepare_directory($mydir, FILE_CREATE_DIRECTORY);
    if (!isset($real_name)) {
      $drupalfile = file_copy($dfile, 'private://' . $file_dir . '/' . $name, FILE_EXISTS_RENAME);
    }
    else {
      $drupalfile = file_copy($dfile, 'private://' . $file_dir . '/' . $real_name, FILE_EXISTS_RENAME);
    }
  }
  return $drupalfile;
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

function get_file_md5filename($file_no) {
  $file_name = FALSE;
  $query = db_select('tx_ktcfileman_files', 'tx')
    ->fields('tx', array('md5filename', 'filename'))
    ->condition('uid', $file_no, '=');
  $result = $query->execute()->fetchAssoc();
  if ($result) {
    $file_name = $result;
  }
  return $file_name;
}

function check_title_name($str) {
  $text = explode('.', $str);
  if (strlen($text[0]) > 220) {
    $str = substr($text[0], 0, 100) . '.' . $text[1];
  }
  return $str;
}

function rebuild_array($array) {
  $array_2 = array();
  foreach($array as $value) {
    if($value != '') {
      $array_2[] = $value;
    }
  }
  return $array_2;
}
