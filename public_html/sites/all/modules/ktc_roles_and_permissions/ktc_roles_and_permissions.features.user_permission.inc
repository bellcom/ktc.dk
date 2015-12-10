<?php
/**
 * @file
 * ktc_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ktc_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ktc_crm'.
  $permissions['administer ktc_crm'] = array(
    'name' => 'administer ktc_crm',
    'roles' => array(
      'super_administrator' => 'super_administrator',
    ),
    'module' => 'ktc_crm',
  );

  return $permissions;
}
