<?php
include 'functions.php';

import_files('hearing');

function import_files($type) {
  $count = 0;
  $count_1 = 0;
  $step = 0;
  $fil_nr = 0;
  $miss = 0;
  $elements = get_hearing_elements_from_db_table('tx_ktchoringdb_proposal', 'files');
  print "There are " . count($elements) . "nodes contain files. \n";
  foreach ($elements as $element) {
    if ($element['files'] != '') {
      $files_ar = explode(',', $element['files']);
      if ($nid = get_id_by_typo3_uid($element['uid'], 'hearing')) {
        $node = node_load($nid);
        $node->field_hearing_materials[LANGUAGE_NONE] = array();
        $node->field_missing_files[LANGUAGE_NONE] = array();;
        // There are empty elements in files_ar.
        $files_ar = rebuild_array($files_ar);
        foreach ($files_ar as $key => $file_no) {
          if ($file = get_file_md5filename($file_no)) {
            $name = convert_char(check_title_name($file['filename']));
            if ($drupalfile = get_images_or_files('/var/tmp/ktc.dk-files/uploads/tx_ktcfileman/' . $file['md5filename'], 'hearing', $name, $name)) {
              $node->field_hearing_materials[LANGUAGE_NONE][$key]['fid'] = $drupalfile->fid;
              $node->field_hearing_materials[LANGUAGE_NONE][$key]['uri'] = $drupalfile->uri;
              $node->field_hearing_materials[LANGUAGE_NONE][$key]['display'] = 1;
              $node->field_hearing_materials[LANGUAGE_NONE][$key]['description'] = '';
            }
            else {
              $miss++;
              if ($missing = field_get_items('node', $node, 'field_missing_files')) {
                $value = $missing[0]['value'];
                $node->field_missing_files[LANGUAGE_NONE][0]['value'] = $value . ',' . convert_char($file['filename']);
                $node->field_missing_files[LANGUAGE_NONE][0]['safe_value'] = $value . ',' . convert_char($file['filename']);
                $node->field_missing_files[LANGUAGE_NONE][0]['format'] = 'full_html';
              }
              else {
                $node->field_missing_files[LANGUAGE_NONE][0]['value'] = convert_char($file['filename']);
                $node->field_missing_files[LANGUAGE_NONE][0]['safe_value'] = convert_char($file['filename']);
                $node->field_missing_files[LANGUAGE_NONE][0]['format'] = 'full_html';
              }
            }
          }
          else {
            $fil_nr++;
          }
        }
        node_save($node);
      }
      // Node does not found.
      else {
        $count++;
      }
      $count_1++;
      $left = (int) count($elements) - $count_1;
      if ($count_1 > $step) {
        print "node nid (" . $node->nid . ") is updated, number " . $count_1 . ". There are " . $left . " left. \n";
        $step += 10;
      }
    }
  }
  print "\n Node not found - " . $count . "\n";
  print "\n File number not found - " . $fil_nr . "\n";
  print "\n File miss on server - " . $miss . "\n";

}
