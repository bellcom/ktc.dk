<?php
require 'WebUser.php';

$webuser = new WebUser();

$user = new WebUserDto('00000000-0000-0000-0000-000000000000');
$user->EMail = 'bellcom@test.dk';
$user->FirstName = 'TEST BELLCOM Fornavn';
$user->LastName = 'TEST BELLCOM Fornavn';

$createupdate = new CreateUpdateWebUser($user);

$result = $webuser->CreateUpdateWebUser($createupdate);
error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($result, 1));
