<?php
/**
 * @file
 * Group specific things for the ktc crm module.
 */

/**
 * This funcition calls all nessecary functions in order to update groups.
 */
function ktc_crm_group_update_groups() {
  $logger = KtcCrmLogger::getInstance();
  $logger->log->addInfo('cron', 'start group sync');

  $groups = ktc_crm_fetch_groups();

  if ($groups) {
    $logger->log->addInfo('cron group', 'update groups');
    ktc_crm_group_process_groups($groups);

    $logger->log->addInfo('cron group', 'remove old groups');
    ktc_crm_group_remove_old_groups($groups);
  }

  $logger->log->addInfo('cron group', 'update grouproles');
  $grouproles = ktc_crm_fetch_grouproles();
  ktc_crm_group_update_grouproles($grouproles);

  $groups = ktc_crm_fetch_groupmembers();

  $group_members = ktc_crm_group_create_array($groups);
  if ($group_members) {
    $logger->log->addInfo('cron group', 'update memberhips');
    ktc_crm_group_process_memberships($group_members);

    $logger->log->addInfo('cron group', 'remove old memberships');
    ktc_crm_group_remove_old_memberships($group_members);
  }
}

/**
 * Process groups from CRM.
 */
function ktc_crm_group_process_groups($groups) {
  foreach ($groups->Results->GroupDto as $groupdto) {
    if ($groupdto->VisibleOnWeb) {
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
    // hf@bellcom.dk, only send if a network was deleted
    if ($node->type === 'group') {
      $groupdto = ktc_crm_group_map_group_to_groupdto($node);

      $groupdto->VisibleOnWeb = 0;

      ktc_crm_update_group($groupdto);
    }
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

      $logger->log->addInfo('group add membership', array('crm_uuid' => $membership_uuid));

      // Set the membership uuid on the og_membership entity.
      $og_membership->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $membership_uuid;
      $og_membership->is_new = FALSE;
      og_membership_save($og_membership);
    }
  }
}

/**
 * Implements hook_og_membership_update().
 */
function ktc_crm_og_membership_update($og_membership) {
  if (isset($_POST['form_id']) && $_POST['form_id'] == 'og_ui_edit_membership') {
    if ($groupmemberdto = _ktc_crm_group_groupmemberdto_from_og_membership($og_membership)) {
      $logger = KtcCrmLogger::getInstance();

      $membership_uuid = ktc_crm_update_groupmember($groupmemberdto);

      $logger->log->addInfo('group update membership', array('crm_uuid' => $crm_uuid));
    }
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

  $groupdto->VisibleOnWeb = $group->status;
  $groupdto->Active = $group->status;
  $groupdto->SynchronizeWithKtcDk = 1;

  if ($field = field_get_items('node', $group, 'body')) {
    $groupdto->Description = substr($field[0]['value'], 0, 1999);
  }

  $groupdto->GroupName = $group->title;

  if ($field = field_get_items('node', $group, 'field_netvaerkstype')) {
    $tid = $field[0]['tid'];
    $type = taxonomy_term_load($tid);

    if ($grouptype_uuid = _ktc_crm_get_uuid('taxonomy_term', $type)) {
      $grouptype = new \KTC\GroupService\ReferenceDto($grouptype_uuid);
      $grouptype->Name = $type->name;

      $groupdto->GroupType = $grouptype;
      $groupdto->GroupTypeId = $grouptype_uuid;
    }
  }

  if ($field = field_get_items('node', $group, 'field_regioner')) {
    $tid = $field[0]['tid'];
    $region = taxonomy_term_load($tid);
    $groupdto->Region = _ktc_crm_translitterate($region->name);
  }

  if ($field = field_get_items('node', $group, 'og_group_ref')) {
    $parent_group = node_load($field[0]['target_id']);
    $parent_group_uuid = _ktc_crm_get_uuid('node', $parent_group);

    $parentgroupdto = new \KTC\GroupService\ReferenceDto($parent_group_uuid);
    $groupdto->ParentGroup = $parentgroupdto;
  }

  if ($field = field_get_items('node', $group, 'field_topics')) {
    foreach ($field as $delta => $value) {
      if ($term = taxonomy_term_load($value['tid'])) {
        if ($uuid_field = field_get_items('taxonomy_term', $term, 'field_crm_uuid')) {
          $professionalfielddto = new \KTC\GroupService\ReferenceDto($uuid_field[0]['value']);
          $groupdto->ProfessionalField = $professionalfielddto;
          break;
        }
      }
    }
  }

  $groupdto->WebSite = url('node/' . $group->nid, array('absolute' => TRUE));

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
  $group_node->body[$language][0]['format'] = 'filtered_html';

  $group_node->field_start_date[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($groupdto->StartDate));
  $group_node->field_end_date[LANGUAGE_NONE][0]['value'] = date('Y-m-d H:i:s', strtotime($groupdto->EndDate));

  $group_node->og_group_ref = array();
  if (!empty($groupdto->ParentGroup)) {
    if ($parent_group = ktc_crm_group_load_from_uuid($groupdto->ParentGroup->CrmId)) {
      $group_node->og_group_ref[$language][0]['target_id'] = $parent_group->nid;
    }
  }

  if ($groupdto->ProfessionalField) {
    $professional_tid = _ktc_crm_group_get_tid('emner_faste_', $groupdto->ProfessionalField->CrmId, $groupdto->ProfessionalField->Name);

    $add_professional = TRUE;
    if ($field = field_get_items('node', $group_node, 'field_topics')) {
      foreach ($field as $delta => $value) {
        if ($value['tid'] == $professional_tid) {
          $add_professional = FALSE;
          break;
        }
      }
    }
    if ($add_professional) {
      $group_node->field_topics[$language][]['tid'] = $professional_tid;
    }
  }

  $group_node->{OG_GROUP_FIELD}[$language][0]['value'] = 1;
  $group_node->field_open_group[$language][0]['value'] = _ktc_crm_group_transform_open($groupdto->AabenPrivat);
  $group_node->group_content_access[$language][0]['value'] = _ktc_crm_group_transform_content_access($groupdto->GruppensRollerOgTilladelser);
  $group_node->status = $groupdto->VisibleOnWeb;

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

  $uid = 1;
  $user = user_load_by_mail(variable_get('group_owner',FALSE));
  if ($user) {
    $uid = $user->uid;
  }
  $node->uid = $uid;
  $node->status = 1;

  return $node;
}

/**
 * Update user roles from webservice.
 */
function ktc_crm_group_update_grouproles($grouproles) {
  foreach ($grouproles->Results->GroupRoleDto as $grouprole) {
    _ktc_crm_group_get_grouprole_tid($grouprole->CrmId, $grouprole->Name);
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
  $logger = KtcCrmLogger::getInstance();

  foreach ($groups as $membership_info) {
    $group_uuid = $membership_info['group_uuid'];
    $membership_uuid = $membership_info['membership_uuid'];

    if ($group = ktc_crm_group_load_from_uuid($group_uuid)) {

      $values = array(
        'entity_type' => 'user',
        'entity' => $account,
        'state' => OG_STATE_ACTIVE,
      );

      $group_membership = og_group('node', $group->nid, $values);

      // If a grouprole_uuid is set, check to see what the tid is.
      if ($membership_info['grouprole_uuid']) {
        $grouprole_tid = _ktc_crm_group_get_grouprole_tid($membership_info['grouprole_uuid']);
      }
      // Update the membership to show the grouprole.
      if ($grouprole_tid) {
        $group_membership->field_grouprole[LANGUAGE_NONE][0]['target_id'] = $grouprole_tid;
      }
      // Empty the field if the user has no grouprole.
      else {
        $group_membership->field_grouprole = array();
      }
      $group_membership->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $membership_uuid;

      $logger->log->addInfo('cron', 'Setting membership for '. $account->name.' ('.$account->uid.') to gid: '.$group->nid.' role: '.$grouprole_tid);
      og_membership_save($group_membership);
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
      ->propertyCondition('status', 1)
      ->fieldCondition('field_crm_uuid', 'value', $all_group_uuid, 'NOT IN');
    $result = $query->execute();

    if (isset($result['node'])) {
      foreach ($result['node'] as $node_id => $info) {
        $logger->log->addInfo('Unpublish old group', $node_id);

        $node = node_load($node_id);
        $node->status = 0;
        node_save($node);
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
  $logger = KtcCrmLogger::getInstance();
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
        $logger->log->addInfo('cron', 'Deleting membership: '.$membershop_id);
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
    $grouprole_uuid = $groupmember->Role->CrmId;

    $memberships[$user_uuid][] = array(
      'group_uuid' => $group_uuid,
      'membership_uuid' => $membership_uuid,
      'grouprole_uuid' => $grouprole_uuid,
    );
  }

  return $memberships;
}

/**
 * Helper, load a group(node) from crm UUID.
 */
function ktc_crm_group_load_from_uuid($uuid) {
  $result = db_select('field_data_field_crm_uuid', 'f')
    ->fields('f')
    ->condition('field_crm_uuid_value', $uuid)
    ->orderBy('entity_id', 'ASC')
    ->execute()
    ->fetchAll();

  if (!empty($result)) {
    return node_load($result[0]->entity_id);
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
  // crm return region name as Sjaelland
  if ($region == 'Sjaelland')     $region = 'Sjælland'; 
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
 * Updates CRM if node changes status.
 *
 * Implements hook_node_update.
 *
 * @param object $node
 *   Node to check.
 *
 * @author Henrik Farre <hf@bellcom.dk>
 */
function ktc_crm_node_update($node) {
  if ($node->type === 'group') {
    $status = $node->status;

    $groupdto = ktc_crm_group_map_group_to_groupdto($node);

    $groupdto->VisibleOnWeb = $status;

    ktc_crm_update_group($groupdto);
  }
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
 * Return the tid for a grouprole.
 */
function _ktc_crm_group_get_grouprole_tid($crm_uuid, $name = FALSE) {
  return _ktc_crm_group_get_tid('ktc_netvaerk_grouproles', $crm_uuid, $name);
}

/**
 * Get tid in the specified vocabulary for crm uuid.
 *
 * If a term does not exist with the specified crm_uuid a new one will
 * be created with the specified name. If a new name is specified it will
 * be updated.
 */
function _ktc_crm_group_get_tid($vocabulary, $crm_uuid, $name) {
  if (!$crm_uuid && !$name) {
    return FALSE;
  }

  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary);

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $vocabulary->vid)
    ->fieldCondition('field_crm_uuid', 'value', $crm_uuid)
    ->execute();

  if (isset($result['taxonomy_term'])) {
    $term = taxonomy_term_load(key($result['taxonomy_term']));

    $term->name = $name;
  }
  else {
    $term = new stdClass();
    $term->vid = $vocabulary->vid;
    $term->name = $name;

    $term->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $crm_uuid;
  }

  // Only update the name if one is specified.
  if ($name) {
    taxonomy_term_save($term);
  }

  return $term->tid ? $term->tid : FALSE;
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
 * Helper, get the grouprole UUID for a membership.
 */
function _ktc_crm_group_get_grouprole_uuid($og_membership) {
  // Assume grouprole is member.
  $grouprole_tid = KTC_NETVAERK_MEMBER_TID;

  if ($field = field_get_items('og_membership', $og_membership, 'field_grouprole')) {
    $grouprole_tid = $field[0]['target_id'];
  }

  if ($grouprole = taxonomy_term_load($grouprole_tid)) {
    return _ktc_crm_get_uuid('taxonomy_term', $grouprole);
  }
}

/**
 * Create GroupMemberDto from og_membership.
 */
function _ktc_crm_group_groupmemberdto_from_og_membership($og_membership) {
  $group_uuid = _ktc_crm_group_get_group_uuid($og_membership->gid);
  $member_uuid = _ktc_crm_user_get_user_uuid($og_membership->etid);
  $grouprole_uuid = _ktc_crm_group_get_grouprole_uuid($og_membership);

  $group = node_load($og_membership->gid);
  $account = user_load($og_membership->etid);

  // Check if there is a UUID for this membership.
  $has_uuid = _ktc_crm_get_uuid('og_membership', $og_membership);
  $membership_uuid = $has_uuid ? $has_uuid : NULL;

  if ($group_uuid && $member_uuid) {
    $groupmemberdto = new \KTC\GroupService\GroupMemberDto($membership_uuid, TRUE);
    $groupmemberdto->IsActiveMember = TRUE;

    $groupmemberdto->Group = new \KTC\GroupService\ReferenceDto($group_uuid);
    $groupmemberdto->Group->Name = $group->title;
    $groupmemberdto->Member = new \KTC\GroupService\ReferenceDto($member_uuid);
    $groupmemberdto->Member->Name = $account->name;
    $groupmemberdto->Role = new \KTC\GroupService\ReferenceDto($grouprole_uuid);

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
