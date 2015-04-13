<?php
/**
 * @file
 * Send groups to CRM Webservice.
 */

$count = 0;
$max = 0;

echo "Send groups to CRM";
foreach (node_load_multiple(array(), array('type' => 'group')) as $group) {
  $count++;
  $groupdto = ktc_crm_group_map_group_to_groupdto($group);

  $result = ktc_crm_update_group($groupdto);

  $group->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $result;

  node_save($group);

  echo $count;
  if ($max && $count == $max) {
    die();
  }
}
