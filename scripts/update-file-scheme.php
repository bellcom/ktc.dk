<?php
/**
 * @file
 * That script goes though all files stored in fields "field_dokument", "field_os2web_base_field_media")
 * in the content of predefined type ('document', 'arrangement', 'forum-post', 'group', 'os2web-base-news') and moves the them from public directory to private directory.
 * References in "file_managed" table are updated as well.
 * If file is already stored in a private directory, no further actions are made.
 *
 * @author Stanislav Kutasevits stan@bellcom.dk
 */

$fields_to_update = array('field_dokument', 'field_os2web_base_field_media');
$affected_content_type = array('document', 'arrangement', 'forum-post', 'group', 'os2web-base-news');

foreach($fields_to_update as $field) {
    $fids = db_select('field_data_' . $field, 'f')
      ->fields('f', array($field . '_fid'))
      ->condition('bundle', $affected_content_type, 'IN')
      ->execute()
	    ->fetchAllKeyed();

    foreach($fids as $fid => $value) {
      $file = file_load($fid);
      if (strpos($file->uri, 'public://') !== false) {
        if (!file_exists($file->uri)) {
          print("File $file->uri does not exist, skipping" . PHP_EOL);
          continue;
        }

        print("Moving fid ($fid) from $file->uri" . PHP_EOL);
        $replaced_dir = str_replace('public://','private://',$file->uri);

        if (file_move($file, $replaced_dir)) {
          print("Done" . PHP_EOL);
        } else {
          print("Cannot move fid ($fid) from $file->uri to $replaced_dir" . PHP_EOL);
          print("Aborting" . PHP_EOL);
        }
      }
    }
}
