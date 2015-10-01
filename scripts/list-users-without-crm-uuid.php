<?php

$users = entity_load('user');
$count = 0;
foreach ($users as $user)
{
  if ($user->field_crm_uuid[LANGUAGE_NONE][0]['value'] == '') {
    echo $count++.' '.$user->mail."\n";
  }
}
