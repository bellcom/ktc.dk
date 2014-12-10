<?php
/**
 * @file
 * ktc_user_profile.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ktc_user_profile_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-user-profile-menu.
  $menus['menu-user-profile-menu'] = array(
    'menu_name' => 'menu-user-profile-menu',
    'title' => 'User profile menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('User profile menu');


  return $menus;
}
