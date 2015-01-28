<?php
require 'WebUser.php';

$webuser = new KTC\WebUser\WebUser();

$request = new KTC\WebUser\Request();

$retrievewebusers = new KTC\WebUser\RetrieveWebUsers($request);

$result = $webuser->RetrieveWebUsers($retrievewebusers);

$webusers = $result->RetrieveWebUsersResult->Results->WebUserDto;


error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($webusers, 1));
$count = count($webusers);

echo $count;
