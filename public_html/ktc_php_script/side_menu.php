<?php

$nodes = node_load_multiple(array(), array('type' => 'page'));
foreach ($nodes as $node) {
  if ($node->nid == 189) {
    continue;
  }

  $menu = array(
    'link_title' => $node->title,
    'link_path' => 'node/' . $node->nid,
    'menu_name' => 'main-menu',
    'plid' => 486,
    'enabled' => 1,
    'weight' => 0,
    'language' => $node->language,
    'module' => 'menu',
  );
  $node->menu = $menu;
  menu_node_save($node);
  node_save($node);
}
