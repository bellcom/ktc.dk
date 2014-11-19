<?php
require 'QueryPath/src/qp.php';
function getNodeElements($feed_url) {

  $qp = htmlqp($feed_url, '.news-single-text');

  $created = $qp->find('.news-single-timedata')->text();
  $created_1 = substr($created, 0, 8);
  $created_2 = substr($created, -5);

  $date = explode('.', $created_1);
  $created_1 = '20' . $date[2] . '-' . $date[1] . '-' . $date[0];
  $user = $qp->find('.news-single-author')->text();
  $category = $qp->find('.news-single-category')->text();

  $imgs = array();
  foreach ($qp->find('.news-single-img')->children('a') as $img) {
    $imgs[] = $img->attr('href');
  }
  $qp->find('.news-single-author')->remove();
  $qp->find('.news-single-category')->remove();
  $qp->find('.news-single-img')->remove();
  $qp->find('.news-single-timedata')->remove();
  $qp->find('.news-single-backlink')->remove();
  $qp->find('h1')->remove();

  $elements = array(
    'created' => strtotime(date('Y-m-d', strtotime($created_1)) . ' ' . $created_2),
    'user' => $user,
    'category' => $category,
    'imgs' => $imgs,
    'body' => $qp->html(),
  );

  return $elements;

}

$nodes = node_load_multiple(array(), array('type' => 'os2web_base_news'));
$count = 0;
$size = sizeof($nodes);
print "There are " . $size . " nodes \n";
$step = 0;
foreach($nodes as $node) {
  if ($node->body[LANGUAGE_NONE][0]['value'] == '') {
    if ($link = field_get_items('node', $node, 'field_link')) {
      $elements = getNodeElements($link[0]['value']);
      $node->body[LANGUAGE_NONE][0]['value'] = $elements['body'];
      $node->body[LANGUAGE_NONE]['0']['safe_value'] = $elements['body'];
      $node->body[LANGUAGE_NONE]['0']['format'] = 'full_html';
      $node->field_news_category[LANGUAGE_NONE][0]['value'] = $elements['category'];
      $node->field_news_category[LANGUAGE_NONE][0]['safe_value'] = $elements['category'];

      $node->field_news_author[LANGUAGE_NONE][0]['value'] = $elements['user'];
      $node->field_news_author[LANGUAGE_NONE][0]['safe_value'] = $elements['user'];

      $node->created = $elements['created'];

      foreach ($elements['imgs'] as $key => $img) {
        $url = getImagePath($img);
        $image = system_retrieve_file($url, NULL, TRUE, FILE_EXISTS_RENAME);
          if(is_object($image)){
            $node->field_os2web_base_field_lead_img[LANGUAGE_NONE][$key]['fid'] = $image->fid;
            $node->field_os2web_base_field_lead_img[LANGUAGE_NONE][$key]['uri'] = $image->uri;
          }
      }

      node_save($node);
      $count ++;

      $left = (int)($size - $count);
      if ($count > $step) {
        print "node nid (" . $node->nid . ") is updated, number " . $count . ". There are " . $left . " left. \n";
        $step += 10;
      }
      if ($count == $size) {
        print $count . " nodes are updated. Done \n";
      }
    }
  }
  else {
    $count ++;
    print "Skip node (" . $node->nid . "), there is body text. \n";
    if ($count == $size) {
      print $count . " nodes are updated. Done \n";
    }
  }
}

function getImagePath($url) {
  preg_match('/file=([^&]*)/', $url, $matches);
  return $path = 'http://www.ktc.dk/' . preg_replace('/%2F/', '/', $matches[1]);
}
