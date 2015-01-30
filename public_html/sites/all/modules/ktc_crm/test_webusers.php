<?php

$webuserdto = ktc_crm_map_account_to_webuserdto(user_load(2465));

error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($webuserdto, 2));

ktc_crm_update_user($webuserdto);
//
//error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r(ktc_crm_fetch_webusers(), 1));
