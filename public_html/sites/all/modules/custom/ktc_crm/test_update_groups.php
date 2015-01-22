<?php

_ktc_crm_group_get_group_info();
return;
//$groups = ktc_crm_fetch_groups();


$groups = ktc_crm_fetch_groupmembers();
$group_members = ktc_crm_group_create_array($groups);
ktc_crm_group_parse_memberships($group_members);
ktc_crm_group_remove_old_memberships($group_members);

$grouproles = ktc_crm_fetch_grouproles();
ktc_crm_group_update_userroles($grouproles);

return;
error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($groups, 1));
return;

foreach($groups->Results->GroupDto as $groupdto) {
  error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($groupdto, 1));
  ktc_crm_group_update_from_groupdto($groupdto);
}
