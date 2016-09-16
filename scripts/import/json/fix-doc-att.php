<?php

$file_contents = file_get_contents(__DIR__ . '/var/nodes.json');
$nodes = json_decode($file_contents);
require dirname(__FILE__) . '/transform_doc_files.php';

$config = include dirname(__FILE__) . '/config.php';
echo dirname(__FILE__);
foreach ($nodes as $node) {
  if ($node->type !== 'document') {
    continue;
  }

  $nid = ktc_import_new_nid($node->nid);
//if ($nid == '11625'){
  if (is_numeric($nid) && $existing_node = node_load($nid)) {
// unset the field for the node
    if (!isset($existing_node->field_os2web_base_field_media[LANGUAGE_NONE][0])) {
    //if ($existing_node->field_os2web_base_field_media[LANGUAGE_NONE][0]['uri']==""){      
     // $file = file_load($existing_node->field_os2web_base_field_media[LANGUAGE_NONE][0]['fid']);
     // unset($existing_node->field_os2web_base_field_media[LANGUAGE_NONE][0]);

      // delete file from disk and from database
    //  file_delete($file);
      // Save the node.
     // node_save($existing_node); 
      //$existing_node->field_os2web_base_field_media = [];
      ktc_import_field_fetch_file($existing_node, 'field_file', $node->field_fil, ['field' => 'field_os2web_base_field_media'], $existing_node->language);
      node_save($existing_node);
   }
   // }   
     
  } else {
    echo "[WARNING]: Could not load node {$node->title}\n";
  }
}
//}