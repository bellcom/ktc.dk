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
 * Update user roles from webservice.
 */
function ktc_crm_group_update_userroles($grouproles) {
  // Create group roles for users.
  $query = db_select('og_role', 'ogr')
    ->fields('ogr', array('rid', 'name'))
    ->orderBy('rid', 'ASC');

  $rids = $query
    ->execute()
    ->fetchAllkeyed();

  foreach ($grouproles->Results->GroupRoleDto as $grouprole) {
    $name = $grouprole->Name;

    if (!in_array($name, $rids)) {
      $new_role = og_role_create($name, 'node', 0, 'group');
      og_role_save($new_role);
    }
  }
}

/**
 * Update users memberships.
 */
function ktc_crm_group_parse_memberships($memberships) {
  foreach ($memberships as $user_uuid => $groups) {

    if ($account = ktc_crm_load_account_from_crm_uuid($user_uuid)) {
      ktc_crm_group_update_users_memberships($account, $groups);
    }
  }
}

/**
 * Update the users groupmemberships.
 */
function ktc_crm_group_update_users_memberships($account, $groups) {
  foreach ($groups as $group_uuid) {
    $group = ktc_crm_group_load_from_uuid($group_uuid);

    $values = array(
      'entity_type' => 'user',
      'entity' => $account,
      'state' => OG_STATE_ACTIVE,
    );

    og_group('node', $group->nid, $values);
  }
}

/**
 * Implements hook_node_presave().
 */
function ktc_crm_node_presave($node) {
  if (isset($_POST['form_id']) && $_POST['from_id'] == 'group_node_form') {
    // @Todo Send changes to crm.
  }
}

/**
 * Helper, create an associative array of group memberships.
 */
function ktc_crm_group_create_array($groupmembers) {
  $memberships = array();
  foreach ($groupmembers->Results->GroupMemberDto as $groupmember) {
    $group_uuid = $groupmember->Group->CrmId;
    $user_uuid = $groupmember->Member->CrmId;
    $memberships[$user_uuid][] = $group_uuid;
  }

  return $memberships;
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
