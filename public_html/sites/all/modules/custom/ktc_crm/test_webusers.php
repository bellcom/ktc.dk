<?php

$webuserdto = ktc_crm_map_account_to_webuserdto(user_load(11));

$webuserdto->LastName = 'Bent' . rand(0, 19);
error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($webuserdto, 1));

ktc_crm_update_user($webuserdto);
