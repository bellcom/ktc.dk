<?php
/**
 * @file
 * Group specific things for the ktc crm module.
 */

/**
 * Implements hook_og_membership_delete().
 */
function ktc_crm_og_membership_delete($og_membership) {
  // Send changes for membership to CRM.
  if ($crm_uuid = _ktc_crm_get_uuid('og_membership', $og_membership)) {
    ktc_crm_group_membership_delete($crm_uuid);
  }
}

/**
 * Implements hook_og_membership_insert().
 */
function ktc_crm_og_membership_insert($og_membership) {
  // If a users is added to a group send this info to CRM.
  $group_uuid = _ktc_crm_group_get_group_uuid($og_membership->gid);

  $member_uuid = _ktc_crm_user_get_user_uuid($og_membership->etid);

  if ($group_uuid && $member_uuid) {
    $groupmemberdto = new \KTC\GroupService\GroupMemberDto(NULL, TRUE);

    $groupmemberdto->Group = new \KTC\GroupService\ReferenceDto($group_uuid);
    $groupmemberdto->Member = new \KTC\GroupService\ReferenceDto($member_uuid);

    $membership_uuid = ktc_crm_update_groupmember($groupmemberdto);

    // Set the membership uuid on the og_membership entity.
    $og_membership->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $membership_uuid;
    $og_membership->is_new = FALSE;
    og_membership_save($og_membership);
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
  foreach ($groups as $membership_info) {
    $group_uuid = $membership_info['group_uuid'];
    $membership_uuid = $membership_info['membership_uuid'];
    $group = ktc_crm_group_load_from_uuid($group_uuid);

    $values = array(
      'entity_type' => 'user',
      'entity' => $account,
      'state' => OG_STATE_ACTIVE,
      'field_crm_uuid' => $membership_uuid,
    );

    og_group('node', $group->nid, $values);
  }
}

/**
 * Remove all old memberships.
 */
function ktc_crm_group_remove_old_memberships($memberships) {
  $all_membership_uuid = array();

  // Generate a list of all membership ids in CRM.
  foreach ($memberships as $user_memberships) {
    foreach ($user_memberships as $membership) {
      $all_membership_uuid[] = $membership['membership_uuid'];
    }
  }

  if (!empty($all_membership_uuid)) {
    // Find all that only exist in Drupal.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'og_membership')
        ->fieldCondition('field_crm_uuid', 'value', $all_membership_uuid, 'NOT IN');
    $result = $query->execute();

    if (isset($result['og_membership'])) {
      foreach ($result['og_membership'] as $membership_id => $info) {
        og_membership_delete($membership_id);
      }
    }
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
    $membership_uuid = $groupmember->CrmId;
    $memberships[$user_uuid][] = array(
      'group_uuid' => $group_uuid,
      'membership_uuid' => $membership_uuid,
    );
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
 * Helper, delete a membership in crm by uuid.
 */
function ktc_crm_group_membership_delete($crm_uuid) {
  $groupmemberdto = new \KTC\GroupService\GroupMemberDto($crm_uuid, FALSE);

  ktc_crm_update_groupmember($groupmemberdto);
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

/**
 * Helper, get group uuid from group nid.
 */
function _ktc_crm_group_get_group_uuid($group_nid) {
  if ($group_node = node_load($group_nid)) {
    if ($crm_uuid_field = field_get_items('node', $group_node, 'field_crm_uuid')) {
      return $crm_uuid_field[0]['value'];
    }
  }
  return FALSE;
}
