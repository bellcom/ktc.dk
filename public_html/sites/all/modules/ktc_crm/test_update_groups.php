<?php

$groups = ktc_crm_fetch_groups();

foreach($groups->Results->GroupDto as $groupdto) {
  ktc_crm_group_update_from_groupdto($groupdto);
}

//$groups = ktc_crm_fetch_groupmembers();
//$group_members = ktc_crm_group_create_array($groups);
//ktc_crm_group_parse_memberships($group_members);
//ktc_crm_group_remove_old_memberships($group_members);

//$grouproles = ktc_crm_fetch_grouproles();
//ktc_crm_group_update_userroles($grouproles);


