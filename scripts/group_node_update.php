<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

$content_types = array('group');
foreach ($content_types as $type) {
  echo "updated $type \n";
  $nids = db_select('node', 'n')
      ->fields('n', array('nid'))    
      ->condition('n.type', $type)
      ->execute()
      ->fetchCol();

  foreach($nids as $nid){
   echo "$nid \n";
    $node = node_load($nid);
    node_save($node);
  }  
}


