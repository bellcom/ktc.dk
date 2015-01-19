<?php
/**
 * @file
 * Group specific things for the ktc crm module.
 */

/**
 * Update a group node from a crm entity.
 */
function ktc_crm_group_update_from_groupdto(\KTC\GroupService\GroupDto $groupdto) {
  $group_node = ktc_crm_group_load_from_uuid($groupdto->CrmId);

  if (!$group_node) {
    return FALSE;
  }

  $language = field_language('node', $group_node, 'field_regioner');
  if ($region_tid = _ktc_group_get_region_tid($groupdto->Region)) {
    $group_node->field_regioner[$language]['0']['tid'] = $region_tid;
  }
}

/**
 * Helper, create an associative array of group memberships.
 */
function ktc_crm_group_create_array($result) {
  foreach($result->Results->GroupMemberDto as $ent) {
    error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($ent, 1));
  } 
}

/**
 * Helper, load a group(node) from crm UUID.
 */
function ktc_crm_group_load_from_uuid($uuid) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'group')
    ->fieldCondition('field_crm_uuid', 'value', $uuid);
  $result = $query->execute();

  if (isset($result['node'])) {
    return node_load(key($result['node']));
  }
  return FALSE;
}

/**
 * Helper, get tid for at region.
 */
function _ktc_group_get_region_tid($region) {
  $vocabulary = taxonomy_vocabulary_machine_name_load('regioner');

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('name', $region)
    ->propertyCondition('vid', $vocabulary->vid)
    ->execute();

  if (!empty($result['taxonomy_term'])) {
    return key($result['taxonomy_term']);
  }
  return FALSE;
}
