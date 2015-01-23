<?php
$webuser = new KTC\WebUser\WebUser();

$request = new KTC\WebUser\Request();

$retrievewebusers = new KTC\WebUser\RetrieveWebUsers($request);

$result = $webuser->RetrieveWebUsers($retrievewebusers);

$webusers = $result->RetrieveWebUsersResult->Results->WebUserDto;

$count = count($webusers);

echo $count;
