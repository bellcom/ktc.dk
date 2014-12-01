<?php
function getNodeElements($type) {
  $content = file_get_contents(dirname(__FILE__) . '/xml/group.xml');
  $count = 0;
  $size = sizeof(qp($content, 'node'));
  print "There are " . $size . " nodes \n";
  $step = 0;
  $count = 0;
  foreach (qp($content, 'node') as $data) {
    $uuid = $data->children('uuid')->text();

    if ($node = node_guid_load($uuid)) {
      //foreach ($data->children('field_regioner'))
      if (is_numeric($data->children('field_regioner')->find('tid')->text()) && $type == 'group')
        $node->field_regioner[LANGUAGE_NONE][0]['tid'] = $data->children('field_regioner')->find('tid')->text();
      if (is_numeric($data->children('field_netvaerkstype')->find('tid')->text()) && $type == 'group')
        $node->field_netvaerkstype[LANGUAGE_NONE][0]['tid'] = $data->children('field_netvaerkstype')->find('tid')->text();
      $node->body[LANGUAGE_NONE][0]['value'] = $data->children('body')->find('value')->text();
      $node->body[LANGUAGE_NONE][0]['safe_value'] = $data->children('body')->find('value')->text();
      $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';

      //print_r($data->children('field_topics')->find('und')->text());
      $p = '<?xml version="1.0"?>' . $data->children('field_topics')->html();

      if (count(qp($p, 'und')) > 0) {

        foreach (qp($p, 'tid') as $key => $value) {
          $node->field_topics[LANGUAGE_NONE][$key]['tid'] = $value->text();
        }
      }

      $tags_html = '<?xml version="1.0"?>' .$data->children('field_tags')->html();

      if (count(qp($tags_html, 'und')) > 0) {
        foreach (qp($tags_html, 'tid') as $key => $value) {
          $node->field_tags[LANGUAGE_NONE][$key]['tid'] = $value->text();
        }
      }

      node_save($node);
    }

    $count ++;
    if ($count > $step) {
      print "node nid (" . $node->nid . ") is updated, number " . $count . ". There are " . $left . " left. \n";
      $step += 10;
    }
    if ($count == $size) {
      print $count . " nodes are updated. Done \n";
    }
  }
  print "\n\n\n\n";
}

//getNodeElements('group');
getNodeElements('event');

function node_guid_load($guid) {
  $node = FALSE;
  if (isset($guid)) {
    $query = db_select('field_data_field_guid', 'g')
      ->fields('g', array('entity_id'))
      ->condition('field_guid_value', $guid, '=');

    $result = $query->execute();
  }
  print_r($result);
  while ($record = $result->fetchAssoc()) {
    $node = node_load($record['entity_id']);
  }
  return $node;
}
