<?php

include_once('GroupService.php');

$client = new \KTC\GroupService\GroupService();

$request = new \KTC\GroupService\Request();
$retrivegroups = new \KTC\GroupService\RetrieveGroupMembers($request);

$result = $client->RetrieveGroupMembers($retrivegroups);

error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($result, 1));
