<?php
include 'functions.php';
 changeUpdatedDate('group', 'node-export-group.xml');
 changeUpdatedDate('arrangement', 'node-export-arrangement.xml');

 changeUpdatedDate('forum_post', 'node-export-diskussion.xml');
 changeUpdatedDate('os2web_base_news' , 'node-export-nyhed.xml');

function changeUpdatedDate($type, $filename) {
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
      $node->modified = strtotime($data->children('opdateret')->text());
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
