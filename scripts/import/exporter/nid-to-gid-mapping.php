<?php

// Dumps the nid => gid relation

$query = db_select('og', 'og')
  ->fields('og');

$result = $query->execute();

$mapping = [];
foreach ($result as $row) {
  $mapping[$row->etid] = $row->gid;
}

file_put_contents($dir . 'nid_to_gid_mapping.json', json_encode($mapping, JSON_PRETTY_PRINT));
