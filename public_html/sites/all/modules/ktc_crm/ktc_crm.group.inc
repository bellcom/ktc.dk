<?php
/**
 * @file
 * Group specific things for the ktc crm module.
 */

/**
 * This funcition calls all nessecary functions in order to update groups.
 */
function ktc_crm_group_update_groups($lastupdate) {
  $logger = KtcCrmLogger::getInstance();
  $logger->log->addInfo('cron', 'start group sync');

  $logger->log->addInfo('cron group', 'update groups');
  $groups = ktc_crm_fetch_groups();
  ktc_crm_group_process_groups($groups);

  $logger->log->addInfo('cron group', 'remove old groups');
  ktc_crm_group_remove_old_groups($groups);

  $logger->log->addInfo('cron group', 'update userroles');
  $grouproles = ktc_crm_fetch_grouproles();
  ktc_crm_group_update_userroles($grouproles);

  $groups = ktc_crm_fetch_groupmembers();

  $logger->log->addInfo('cron group', 'update memberhips');
  $group_members = ktc_crm_group_create_array($groups);
  ktc_crm_group_process_memberships($group_members);

  $logger->log->addInfo('cron group', 'remove old memberships');
  ktc_crm_group_remove_old_memberships($group_members);
}

/**
 * Process groups from CRM.
 */
function ktc_crm_group_process_groups($groups) {
  foreach ($groups->Results->GroupDto as $groupdto) {
    if ($groupdto->Active) {
      ktc_crm_group_update_from_groupdto($groupdto);
    }
  }
}

/**
 * Implements hook_node_delete().
 */
function ktc_crm_node_delete($node) {
  if ((isset($_POST['form_id']) && $_POST['form_id'] == 'node_admin_content') ||
    (isset($_POST['form_id']) && $_POST['form_id'] == 'node_delete_confirm')) {
    $groupdto = ktc_crm_group_map_group_to_groupdto($node);

    $groupdto->GroupName = 'Skal slettes';
    $groupdto->Active = 0;

    ktc_crm_update_group($groupdto);
  }
}

/**
 * Implements hook_og_membership_delete().
 */
function ktc_crm_og_membership_delete($og_membership) {
  if ((isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_delete_membership') ||
    (isset($_GET['q']) && $_GET['q'] == 'batch')) {
    $logger = KtcCrmLogger::getInstance();
    $logger->log->addInfo('group delete membership', array('crm_uuid' => $crm_uuid));

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
      $logger = KtcCrmLogger::getInstance();

      $membership_uuid = ktc_crm_update_groupmember($groupmemberdto);

      $logger->log->addInfo('group add membership', array('crm_uuid' => $crm_uuid));

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
  // Send group role to CRM.
  if ((isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_add_users') ||
    (isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_edit_membership')) {

    $logger = KtcCrmLogger::getInstance();
    $logger->log->addInfo('group grant role', array(
      'uid' => $uid,
      'gid' => $gid,
      'rid' => $rid,
    ));

    $og_membership = og_get_membership($group_type, $gid, 'user', $uid);

    _ktc_crm_group_grant_user_role($og_membership, $rid);
  }
}

/**
 * Implements hook_og_role_revoke().
 */
function ktc_crm_og_role_revoke($group_type, $gid, $uid, $rid) {
  // Send revoked group role to CRM.
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_edit_membership') {
    $logger = KtcCrmLogger::getInstance();
    $logger->log->addInfo('group revoke role', array(
      'uid' => $uid,
      'gid' => $gid,
      'rid' => $rid,
    ));

    $og_membership = og_get_membership($group_type, $gid, 'user', $uid);

    _ktc_crm_group_revoke_user_role($og_membership, $rid);
  }
}

/**
 * Implements hook_node_presave().
 */
function ktc_crm_node_presave($node) {
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'group_node_form') {
    // Create groupdto from group node.
    $groupdto = ktc_crm_group_map_group_to_groupdto($node);

    // Send the groupdto to CRM.
    $result = ktc_crm_update_group($groupdto);

    $node->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $result;
  }
}

/**
 * Map group values to group object.
 */
function ktc_crm_group_map_group_to_groupdto($group) {
  $group_uuid = _ktc_crm_get_uuid('node', $group);
  if ($group_uuid === FALSE) {
    $group_uuid = NULL;
  }

  $groupdto = new \KTC\GroupService\GroupDto($group_uuid);

  $groupdto->Active = $group->status;

  if ($field = field_get_items('node', $group, 'body')) {
    $groupdto->Description = $field[0]['value'];
  }

  $groupdto->GroupName = $group->title;

  if ($field = field_get_items('node', $group, 'field_netvaerkstype')) {
    $tid = $field[0]['tid'];
    $type = taxonomy_term_load($tid);

    if ($grouptype_uuid = _ktc_crm_get_uuid('taxonomy_term', $type)) {
      $grouptype = new \KTC\GroupService\ReferenceDto($grouptype_uuid);
      $grouptype->Name = $type->name;

      $groupdto->GroupType = $grouptype;
    }
  }

  if ($field = field_get_items('node', $group, 'field_regioner')) {
    $tid = $field[0]['tid'];
    $region = taxonomy_term_load($tid);
    $groupdto->Region = $region->name;
  }

  if ($field = field_get_items('node', $group, 'og_group_ref')) {
    $parent_group = node_load($field[0]['target_id']);
    $parent_group_uuid = _ktc_crm_get_uuid('node', $parent_group);

    $parentgroupdto = new \KTC\GroupService\ReferenceDto($parent_group_uuid);
    $groupdto->ParentGroup = $parentgroupdto;
  }

  if ($field = field_get_items('node', $group, 'field_os2web_base_field_ext_link')) {
    $groupdto->WebSite = $field[1]['url'];
  }

  if ($field = field_get_items('node', $group, 'field_open_group')) {
    $groupdto->AabenPrivat = _ktc_crm_group_transform_open($field[0]['value']);
  }

  if ($field = field_get_items('node', $group, 'group_content_access')) {
    $groupdto->GruppensRollerOgTilladelser = _ktc_crm_group_transform_content_access($field[0]['value']);
  }

  return $groupdto;
}

/**
 * Update a group node from a crm entity.
 */
function ktc_crm_group_update_from_groupdto(\KTC\GroupService\GroupDto $groupdto) {
  $group_node = ktc_crm_group_load_from_uuid($groupdto->CrmId);

  if (!$group_node) {
    $group_node = ktc_crm_group_new_group();

    $language = field_language('node', $group_node, 'field_crm_uuid');

    $group_node->field_crm_uuid[$language][0]['value'] = $groupdto->CrmId;
  }

  $group_node->title = $groupdto->GroupName;

  $language = field_language('node', $group_node, 'field_regioner');
  if ($region_tid = _ktc_crm_group_get_region_tid($groupdto->Region)) {
    $group_node->field_regioner[$language][0]['tid'] = $region_tid;
  }

  if ($grouptype_tid = _ktc_crm_group_get_grouptype_tid($groupdto->GroupType->CrmId, $groupdto->GroupType->Name)) {
    $group_node->field_netvaerkstype[$language][0]['tid'] = $grouptype_tid;
  }

  $group_node->body[$language][0]['value'] = $groupdto->Description;

  $group_node->field_os2web_base_field_ext_link[$language][0]['url'] = $groupdto->WebSite;

  $group_node->field_start_date[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($groupdto->StartDate));
  $group_node->field_end_date[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($groupdto->EndDate));

  if (!empty($groupdto->ParentGroup)) {
    if ($parent_group = ktc_crm_group_load_from_uuid($groupdto->ParentGroup->CrmId)) {
      $group_node->og_group_ref[$language][0]['target_id'] = $parent_group->nid;
    }
  }

  $group_node->field_open_group[$language][0]['value'] = _ktc_crm_group_transform_open($groupdto->AabenPrivat);
  $group_node->group_content_access[$language][0]['value'] = _ktc_crm_group_transform_content_access($groupdto->GruppensRollerOgTilladelser);

  node_save($group_node);
}

/**
 * Greate a new group object.
 */
function ktc_crm_group_new_group() {
  $node = new stdClass();
  $node->type = "group";

  node_object_prepare($node);
  $node->language = LANGUAGE_NONE;
  $node->uid = 1;
  $node->status = 1;

  return $node;
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
function ktc_crm_group_process_memberships($memberships) {
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
      if (count($user_roles) > 1) {
        $default_roles = og_get_default_roles();

        // Remove all non-default (CRM), roles from the user.
        foreach ($user_roles as $id => $role) {
          if (!in_array($role, $default_roles) && $id != $role_id) {
            og_role_revoke('node', $group->nid, $account->uid, $id);
          }
        }
      }

      // Grant user role from CRM. If the user doesn't already have it.
      if ($role_id && !in_array($role_id, array_flip($user_roles))) {
        og_role_grant('node', $group->nid, $account->uid, $role_id);
      }
    }
  }
}

/**
 * Remove all old groups.
 *
 * This will delete all group nodes, that have a value in the crm_uuid field,
 * and that are not in the group data retrieved from the webservice.
 */
function ktc_crm_group_remove_old_groups($groups) {
  $all_group_uuid = array();

  // List of all group uuids.
  foreach ($groups->Results->GroupDto as $groupdto) {
    $all_group_uuid[] = $groupdto->CrmId;
  }

  if (!empty($all_group_uuid)) {
    $logger = KtcCrmLogger::getInstance();

    // All groups, with UUID, no longer in CRM.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'group')
      ->fieldCondition('field_crm_uuid', 'value', $all_group_uuid, 'NOT IN');
    $result = $query->execute();

    if (isset($result['node'])) {
      foreach ($result['node'] as $node_id => $info) {
        $logger->log->addInfo('Removing old group', $node);
        node_delete($node_id);
      }
    }
  }
}

/**
 * Remove all old memberships.
 *
 * This will remove all memberships with a value in the crm_uuid field, that
 * are no longer in the data from the webservice.
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
function _ktc_crm_group_get_region_tid($region) {
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
 * Get a term id for a GroupType.
 */
function _ktc_crm_group_get_grouptype_tid($crm_uuid, $name) {
  if (!$crm_uuid && !$name) {
    return FALSE;
  }

  $vocabulary = taxonomy_vocabulary_machine_name_load('netv_rkstype');

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $vocabulary->vid)
    ->fieldCondition('field_crm_uuid', 'value', $crm_uuid)
    ->execute();

  if (isset($result['taxonomy_term'])) {
    return key($result['taxonomy_term']);
  }

  $term = new stdClass();
  $term->vid = $vocabulary->vid;
  $term->name = $name;

  $term->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $crm_uuid;

  if (taxonomy_term_save($term)) {
    return $term->tid;
  }
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

/**
 * Helper, transform open status to/from CRM <> bool.
 */
function _ktc_crm_group_transform_open($status) {
  if (is_numeric($status)) {
    return $status == 1 ? "Open" : "Closed";
  }
  return $status == "Open" ? 1 : 0;
}

/**
 * Helper, transform visibility status to/from CRM <> bool.
 */
function _ktc_crm_group_transform_content_access($status) {
  if (is_numeric($status)) {
    return $status == 1 ? "Visible" : "Invisible";
  }
  return $status == "Visible" ? 1 : 2;
}
