<?php
function getNodeElements($type, $filename) {
  $content = file_get_contents(dirname(__FILE__) . '/xml/' . $filename);
  $count = 0;
  $size = count(qp($content, 'node'));
  print "There are " . $size . " nodes \n";
  $step = 0;
  $count = 0;

  foreach (qp($content, 'node') as $data) {
    $old_nid = $data->children('nid')->text();
    if ($node = node_load_by_old_nid($old_nid)) {
      // <regioner>
      if (is_numeric($data->children('regioner')->text()) && ($type == 'group' || $type == 'arrangement')) {
        $node->field_regioner[LANGUAGE_NONE][0]['tid'] = $data->children('regioner')->text();
      }
      // <group_type>
      if (is_numeric($data->children('group_type')->text()) && $type == 'group') {
        $node->field_netvaerkstype[LANGUAGE_NONE][0]['tid'] = $data->children('group_type')->text();
      }

      // os2web_base_news type.
      if ($type == 'os2web_base_news') {
        $node->field_os2web_base_field_summary[LANGUAGE_NONE][0]['value'] = $data->children('field_short')->text();
        $node->field_os2web_base_field_summary[LANGUAGE_NONE][0]['safe_value'] = $data->children('field_short')->text();
        $node->field_os2web_base_field_summary[LANGUAGE_NONE][0]['format'] = 'full_html';
      }
      // field_short.
      elseif (isset($node->field_short)) {
        $node->field_short[LANGUAGE_NONE][0]['value'] = $data->children('field_short')->text();
        $node->field_short[LANGUAGE_NONE][0]['safe_value'] = $data->children('field_short')->text();
        $node->field_short[LANGUAGE_NONE][0]['format'] = 'full_html';
      }

      // Image.
      $urls = $data->children('billede')->text();
      $urls_ar = explode(',', $urls);
        $error = array_filter($files_ar);
        if (!empty($error)) {
          foreach ($urls_ar as $key => $url) {
            $url_ar = explode('/', $url);

            switch ($type) {
              case 'arrangement':
                $file_dir = 'events';
                $field = 'field_image';
                break;

              case 'forum_post':
                $file_dir = 'discussion';
                $field = 'field_image';
                break;

              case 'os2web_base_news':
                $files_ar = 'news';
                $field = 'field_os2web_base_field_lead_img';
                break;

              case 'group':
                $file_dir = 'netvaerk';
                $field = 'field_groupimage';
                break;

              default:
                $file_dir = 'images';
                $field = 'field_image';
                break;
            }
            $url = 'public://' . $file_dir . '/' . $url_ar[count($url_ar) - 1];
            if ($drupalfile = get_images_or_files($url, $file_dir)) {
              $node->$field[LANGUAGE_NONE][$key]['fid'] = $drupalfile->fid;
              $node->$field[LANGUAGE_NONE][$key]['uri'] = $drupalfile->uri;
            }
          }
        }

      /*if (is_object($image) && $type == 'os2web_base_news'){
        $node->field_os2web_base_field_lead_img[LANGUAGE_NONE][0]['fid'] = $image->fid;
        $node->field_os2web_base_field_lead_img[LANGUAGE_NONE][0]['uri'] = $image->uri;
      }
      elseif (is_object($image) && $type == 'group') {
        $node->field_groupimage[LANGUAGE_NONE][0]['fid'] = $image->fid;
        $node->field_groupimage[LANGUAGE_NONE][0]['uri'] = $image->uri;
      }
      elseif (is_object($image) && $type != 'os2web_base_news') {
        $node->field_image[LANGUAGE_NONE][0]['fid'] = $image->fid;
        $node->field_image[LANGUAGE_NONE][0]['uri'] = $image->uri;
      }*/

      // old gid
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

      // $node->field_gammel_nid[LANGUAGE_NONE][0]['value'] = $data->children('nid')->text();
      // $node->field_gammel_nid[LANGUAGE_NONE][0]['safe_value'] = $data->children('nid')->text();

      $topics = $data->children('field_topics')->text();
      $topics_ar = explode(',', $topics);
      $error = array_filter($topics_ar);
      //print_r($topics_ar);
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
      // <forfatteruid> <body> <nid> get from feeds import
      if ($type == 'arrangement') {
        // <field_event_seats>
        if (is_numeric($data->children('field_event_seats')->text())) {
          $node->field_event_seats[LANGUAGE_NONE][0]['value'] = $data->children('field_event_seats')->text();
        }
        // <startdato> <slutdato>
        $start = preg_replace('/-/', ' ', $data->children('startdato')->text());
        $end = preg_replace('/-/', ' ', $data->children('slutdato')->text());

        $node->field_arrangement_date[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($start));
        $node->field_arrangement_date[LANGUAGE_NONE][0]['value2'] = date('Y-m-d H:i:s', strtotime($end));
        $node->field_arrangement_date[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
        // <place>
        $node->field_arrangement_address[LANGUAGE_NONE][0]['value'] = $data->children('place')->text();
        $node->field_arrangement_address[LANGUAGE_NONE][0]['safe_value'] = $data->children('place')->text();
        // <tilmeldingsfrist>
        $temp = preg_replace('/-/', ' ', $data->children('tilmeldingsfrist')->text());
        $node->field_registration_deadline[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($temp));
        $node->field_registration_deadline[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
        // <field_meeting_type>
        if (is_numeric($data->children('field_meeting_type')->text())) {
          $node->field_meeting_type[LANGUAGE_NONE][0]['tid'] = $data->children('field_meeting_type')->text();
        }
      }

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

            switch ($type) {
              case 'arrangement':
                $file_dir = 'events';
                break;

              case 'forum_post':
                $file_dir = 'discussion';
                break;

              default:
                $file_dir = 'events';
                break;
            }
            $url = 'public://' . $file_dir . '/' . $url_ar[count($url_ar) - 1];
            if ($drupalfile = get_images_or_files($url, $file_dir)) {
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
    $count ++;
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

// getNodeElements('group', 'node-export-group.xml');
 getNodeElements('arrangement', 'node-export-arrangement.xml');

// getNodeElements('forum_post', 'node-export-diskussion.xml');
// getNodeElements('os2web_base_news' , 'node-export-nyhed.xml');

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

function get_images_or_files($url, $file_dir) {
  $drupalfile = FALSE;
  if (file_exists($url)) {
    $dfile = (object) array(
      'uri' => $url,
      'filemime' => file_get_mimetype($url),
      'status' => 1,
    );
    // Now get Drupal to copy it.
    $drupalfile = file_copy($dfile, 'private://' . $file_dir);
  }
  return $drupalfile;
}
