<?php

if (!isset($argv[1])) {
  echo "Usage: php $argv[0] password";
  die();
}

$file_uris = json_decode(file_get_contents('files.json'));
$pass = $argv[1];

$count = count($file_uris);
foreach ($file_uris as $delta => $file_uri) {

  $exp = explode('://', $file_uri);
  $scheme = $exp[0];
  $filepath = $exp[1];

  $path_exp = explode('/', $filepath);
  array_pop($path_exp);

  $dir = $scheme . '/' . implode('/', $path_exp);
  if (!is_dir($dir)) {
    mkdir($dir, 0770, TRUE);
  }

  $num = $delta + 1;
  echo "Copy file: $scheme/$filepath ($num of $count)\n";
  $cmd = "sshpass -p '$pass' scp ktc.dk:/var/www/netvaerk.ktc.dk/htdocs/sites/default/files/uploads/$scheme/$filepath $scheme/$filepath";

  exec($cmd);
}
