<?php
include 'functions.php';

// getDocmentElements('document', 'node-export-dokument_1.xml');
// getDocmentElements('document', 'node-export-dokument_2.xml');
// getDocmentElements('document', 'node-export-dokument_3.xml');
// getDocmentElements('document', 'node-export-dokument_4.xml');
// getDocmentElements('document', 'node-export-dokument_5.xml');
// getDocmentElements('document', 'node-export-dokument_6.xml');
// getDocmentElements('document', 'node-export-dokument_7.xml');
// getDocmentElements('document', 'node-export-dokument_8.xml');
// getDocmentElements('document', 'node-export-dokument_9.xml');
// getDocmentElements('document', 'node-export-dokument_10.xml');
// getDocmentElements('document', 'node-export-dokument_11.xml');
// getDocmentElements('document', 'node-export-dokument_12.xml');
// getDocmentElements('document', 'node-export-dokument_13.xml');
// getDocmentElements('document', 'node-export-dokument_14.xml');
// getDocmentElements('document', 'node-export-dokument_15.xml');
// getDocmentElements('document', 'node-export-dokument_16.xml');
// getDocmentElements('document', 'node-export-dokument_17.xml');
// getDocmentElements('document', 'node-export-dokument_18.xml');
// getDocmentElements('document', 'node-export-dokument_19.xml');

function getDocmentElements($type, $filename) {
  $path = 'private://xml';
  $content = file_get_contents(drupal_realpath($path) . '/' . $filename);

  $count = 0;
  $size = count(qp($content, 'node'));
  print "There are " . $size . " nodes \n";
  $step = 0;
  $count = 0;

  foreach (qp($content, 'node') as $data) {
    $old_nid = $data->children('nid')->text();
    if ($node = node_load_by_old_nid($old_nid)) {

      // <field_dokument>
      if (is_numeric($data->children('field_dokument')->text())) {
        $node->field_document_type[LANGUAGE_NONE][0]['tid'] = $data->children('field_dokument')->text();
      }
      // Old gid.
      if (!$gid = field_get_items('node', $node, 'field_gammel_gid')) {
        $node->field_gammel_gid[LANGUAGE_NONE][0]['value'] = $data->children('gid')->text();
        $node->field_gammel_gid[LANGUAGE_NONE][0]['safe_value'] = $data->children('gid')->text();
      }
      // <created>
      $node->created = strtotime($data->children('created')->text());

      // New gid in og_group_ref.
      if ($new_gid = get_group_id_by_oldGid($data->children('gid')->text())) {
        $node->og_group_ref[LANGUAGE_NONE][0]['target_id'] = $new_gid;
      }

      $topics = $data->children('field_topics')->text();
      $topics_ar = explode(',', $topics);
      $error = array_filter($topics_ar);
      if (!empty($error)) {
        foreach ($topics_ar as $key => $value) {
          $node->field_topics[LANGUAGE_NONE][$key]['tid'] = $value;
        }
      }
      $tags = $data->children('field_tags')->text();
      $tags_ar = explode(',', $tags);
      $error = array_filter($tags_ar);
      if (!empty($error)) {
        foreach ($tags_ar as $key => $value) {
          $node->field_tags[LANGUAGE_NONE][$key]['tid'] = $value;
        }
      }
      // <forfatteruid> <body> <nid> Get from feeds import.

      // <group_content_access>
      if (isset($node->group_content_access) && is_numeric($data->children('group_content_access')->text())) {
        $node->group_content_access[LANGUAGE_NONE][0]['value'] = $data->children('group_content_access')->text();
      }

      // Files, documents.

      if (isset($node->field_os2web_base_field_media)) {
        $files = $data->children('fil')->text();
        $files_ar = explode(',', $files);
        $error = array_filter($files_ar);
        if (!empty($error)) {
          foreach ($files_ar as $key => $url) {
            $url_ar = explode('/', $url);

            $new_url = 'public://documents/' . $url_ar[count($url_ar) - 1];
            if (!file_exists($new_url)) {

              $new_url = preg_replace('/netvaerk.yani\/system\/files\/documents/', 'ktc.bellcom.dk/sites/default/files/uploads/public/doc_typo_3', $url);
              $dfile = system_retrieve_file($new_url, NULL, TRUE, FILE_EXISTS_RENAME);
              if (is_object($dfile)) {
                $dfile = file_copy($dfile, 'private://documents_typo3/' . $url_ar[count($url_ar) - 1], FILE_EXISTS_RENAME);
                $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['fid'] = $dfile->fid;
                $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['uri'] = $dfile->uri;
                $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['display'] = 1;
                $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['description'] = '';
              }
            }
            elseif ($drupalfile = get_images_or_files($new_url, 'documents', $url_ar[count($url_ar) - 1])) {
              $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['fid'] = $drupalfile->fid;
              $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['uri'] = $drupalfile->uri;
              $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['display'] = 1;
              $node->field_os2web_base_field_media[LANGUAGE_NONE][$key]['description'] = '';
            }
          }
        }
      }
      node_save($node);
    }
    $count++;
    if ($count > 4) {
      //break;
    }
    $left = (int) $size - $count;
    if ($count > $step) {
      print "node nid (" . $node->nid . ") is updated, number " . $count . ". There are " . $left . " left. \n";
      $step += 10;
    }
    if ($count == $size) {
      print $count . " nodes are updated. Done \n";
    }
  }
  print "\n\n";
}
