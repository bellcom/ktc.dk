<?php

/* 
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/
?>
<?php $links = array();
foreach ($row->field_og_group_ref as $key => $value ) {
  $group_info = ktc_netvaerk_get_node_group_info($value['raw']['target_id']);
  print l($group_info['name'], drupal_get_path_alias('node/' . $value['raw']['target_id'] ), array('attributes' => array('class' => $group_info['class'])));
 }
?>
<?php // print implode(', ', $links); ?>