<?php
require 'WebUser.php';

$webuser = new WebUser();

$user = new WebUserDto('c460fac2-3a81-e411-90ba-005056a23404');
$user->EMail = 'bellcom@test.dk';
$user->FirstName = 'TEST BELLCOM Fornavn Rettet';
$user->LastName = 'TEST BELLCOM Efternavn';

$createupdate = new CreateUpdateWebUser($user);

$result = $webuser->CreateUpdateWebUser($createupdate);
error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($result, 1));
