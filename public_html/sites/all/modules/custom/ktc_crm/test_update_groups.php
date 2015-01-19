<?php

//$groups = ktc_crm_fetch_groups();


$groups = ktc_crm_fetch_groupmembers();
ktc_crm_group_create_array($groups);
error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($groups, 1));
return;
$groups = ktc_crm_fetch_grouproles();
ktc_crm_group_create_array($groups);
//error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($groups, 1));
return;

foreach($groups->Results->GroupDto as $groupdto) {
  error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($groupdto, 1));
  ktc_crm_group_update_from_groupdto($groupdto);
}
