<?php
/**
 * @file
 * ktc_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ktc_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: super_administrator.
  $roles['super_administrator'] = array(
    'name' => 'super_administrator',
    'weight' => 16,
  );

  return $roles;
}
