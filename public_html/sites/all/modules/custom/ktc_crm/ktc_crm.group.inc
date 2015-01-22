<?php
/**
 * @file
 * Group specific things for the ktc crm module.
 */

/**
 * This funcition calls all nessecary functions in order to update groups.
 */
function ktc_crm_group_update_groups($lastupdate) {
  $groups = ktc_crm_fetch_groupmembers(array('UpdatedSince' => $lastupdate));
  $group_members = ktc_crm_group_create_array($groups);
  ktc_crm_group_parse_memberships($group_members);
  ktc_crm_group_remove_old_memberships($group_members);

  $grouproles = ktc_crm_fetch_grouproles();
  ktc_crm_group_update_userroles($grouproles);
}

/**
 * Implements hook_og_membership_delete().
 */
function ktc_crm_og_membership_delete($og_membership) {
  if ((isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_delete_membership') ||
    (isset($_GET['q']) && $_GET['q'] == 'batch')) {
    // Send changes for membership to CRM.
    if ($crm_uuid = _ktc_crm_get_uuid('og_membership', $og_membership)) {
      ktc_crm_group_membership_delete($crm_uuid);
    }
  }
}

/**
 * Implements hook_og_membership_insert().
 */
function ktc_crm_og_membership_insert($og_membership) {
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_add_users') {
    // If a users is added to a group send this info to CRM.
    if ($groupmemberdto = _ktc_crm_group_groupmemberdto_from_og_membership($og_membership)) {
      $membership_uuid = ktc_crm_update_groupmember($groupmemberdto);

      // Set the membership uuid on the og_membership entity.
      $og_membership->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $membership_uuid;
      $og_membership->is_new = FALSE;
      og_membership_save($og_membership);
    }
  }
}

/**
 * Implements hook_og_role_grant().
 */
function ktc_crm_og_role_grant($group_type, $gid, $uid, $rid) {
  if ((isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_add_users') ||
    (isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_edit_membership')) {
    $og_membership = og_get_membership($group_type, $gid, 'user', $uid);

    _ktc_crm_group_grant_user_role($og_membership, $rid);
  }
}

/**
 * Implements hook_og_role_revoke().
 */
function ktc_crm_og_role_revoke($group_type, $gid, $uid, $rid) {
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_edit_membership') {
    $og_membership = og_get_membership($group_type, $gid, 'user', $uid);

    _ktc_crm_group_revoke_user_role($og_membership, $rid);
  }
}

/**
 * Implements hook_node_presave().
 */
function ktc_crm_node_presave($node) {
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'group_node_form') {
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

    if ($group = ktc_crm_group_load_from_uuid($group_uuid)) {
      $role_id = $membership_info['role_id'];

      $values = array(
        'entity_type' => 'user',
        'entity' => $account,
        'state' => OG_STATE_ACTIVE,
        'field_crm_uuid' => $membership_uuid,
      );

      if (!og_is_member('node', $group->nid, 'user', $account)) {
        $status = og_group('node', $group->nid, $values);
      }

      $user_roles = og_get_user_roles('node', $group->nid, $account->uid);

      // Handle if the user has more than one role in OG and none set from
      // CRM.
      if (count($user_roles) > 1 && !$role_id) {
        $default_roles = og_get_default_roles();

        // Remove all non-default (CRM), roles from the user.
        foreach ($user_roles as $id => $role) {
          if (!in_array($role, $default_roles)) {
            og_role_revoke('node', $group->nid, $account->uid, $id);
          }
        }
      }

      // Grant user role from CRM.
      if ($role_id) {
        og_role_grant('node', $group->nid, $account->uid, $role_id);
      }
    }
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
  $og_roles = array_flip(og_roles('node', 'group'));

  $memberships = array();
  foreach ($groupmembers->Results->GroupMemberDto as $groupmember) {

    $group_uuid = $groupmember->Group->CrmId;
    $user_uuid = $groupmember->Member->CrmId;
    $membership_uuid = $groupmember->CrmId;
    $role_name = $groupmember->Role->Name;

    $memberships[$user_uuid][] = array(
      'group_uuid' => $group_uuid,
      'membership_uuid' => $membership_uuid,
      'role_id' => $og_roles[$role_name],
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

/**
 * Helper, remove a users role in CRM.
 */
function _ktc_crm_group_revoke_user_role($og_membership, $rid) {
  error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($rid, 1));
  if ($groupmemberdto = _ktc_crm_group_groupmemberdto_from_og_membership($og_membership)) {

    $roles = _ktc_crm_group_get_group_info();

    // Only update(remove) the role, if it exists in CRM.
    if (isset($roles[$rid])) {
      // @TODO This should not be hardcoded.
      $grouproledto = new \KTC\GroupService\ReferenceDto('50c5655f-d09f-e411-91f9-005056a23404');
      $groupmemberdto->Role = $grouproledto;

      ktc_crm_update_groupmember($groupmemberdto);
    }
  }
}

/**
 * Helper, grant a users role in CRM.
 */
function _ktc_crm_group_grant_user_role($og_membership, $rid) {
  if ($groupmemberdto = _ktc_crm_group_groupmemberdto_from_og_membership($og_membership)) {
    $roles = _ktc_crm_group_get_group_info();

    // Only update the role, if it exists in CRM.
    if (isset($roles[$rid])) {
      $role_uuid = $roles[$rid]['role_uuid'];
      $role_name = $roles[$rid]['name'];

      $grouproledto = new \KTC\GroupService\ReferenceDto($role_uuid);
      $grouproledto->Name = $role_name;

      $groupmemberdto->Role = $grouproledto;

      ktc_crm_update_groupmember($groupmemberdto);
    }
  }
}

/**
 * Helper, create an array of all roles, with CRM UUIDs.
 */
function _ktc_crm_group_get_group_info() {
  // We need to create an array that contains the info from these 2 functions.
  $og_roles = array_flip(og_roles('node', 'group'));
  $grouproles = ktc_crm_fetch_grouproles();

  $group_info = array();

  foreach ($grouproles->Results->GroupRoleDto as $grouprole) {
    $name = $grouprole->Name;

    $rid = $og_roles[$name];

    $group_info[$rid] = array(
      'name' => $name,
      'role_uuid' => $grouprole->CrmId,
    );
  }

  return $group_info;
}

/**
 * Create GroupMemberDto from og_membership.
 */
function _ktc_crm_group_groupmemberdto_from_og_membership($og_membership) {
  $group_uuid = _ktc_crm_group_get_group_uuid($og_membership->gid);
  $member_uuid = _ktc_crm_user_get_user_uuid($og_membership->etid);

  $has_uuid = _ktc_crm_get_uuid('og_membership', $og_membership);
  $membership_uuid = $has_uuid ? $has_uuid : NULL;

  if ($group_uuid && $member_uuid) {
    $groupmemberdto = new \KTC\GroupService\GroupMemberDto($membership_uuid, TRUE);

    $groupmemberdto->Group = new \KTC\GroupService\ReferenceDto($group_uuid);
    $groupmemberdto->Member = new \KTC\GroupService\ReferenceDto($member_uuid);

    return $groupmemberdto;
  }

  return FALSE;
}
