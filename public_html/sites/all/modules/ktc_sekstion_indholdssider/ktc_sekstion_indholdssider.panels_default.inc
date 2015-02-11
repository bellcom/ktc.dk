<?php
/**
 * @file
 * ktc_sekstion_indholdssider.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ktc_sekstion_indholdssider_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sektionsside_footer';
  $mini->category = '';
  $mini->admin_title = 'Sektionsside footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'ktc3col33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e494d5e1-4976-43e6-9e6b-8f9300ec5c48';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef6f8db7-648f-4f2c-8f56-057290f80f9d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef6f8db7-648f-4f2c-8f56-057290f80f9d';
    $display->content['new-ef6f8db7-648f-4f2c-8f56-057290f80f9d'] = $pane;
    $display->panels['center'][0] = 'new-ef6f8db7-648f-4f2c-8f56-057290f80f9d';
    $pane = new stdClass();
    $pane->pid = 'new-7d2f5ab8-57dc-46de-bdf3-73cd1502b26a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d2f5ab8-57dc-46de-bdf3-73cd1502b26a';
    $display->content['new-7d2f5ab8-57dc-46de-bdf3-73cd1502b26a'] = $pane;
    $display->panels['center'][1] = 'new-7d2f5ab8-57dc-46de-bdf3-73cd1502b26a';
    $pane = new stdClass();
    $pane->pid = 'new-6e79d6fe-fbf1-4438-9766-00f8b77e3055';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e79d6fe-fbf1-4438-9766-00f8b77e3055';
    $display->content['new-6e79d6fe-fbf1-4438-9766-00f8b77e3055'] = $pane;
    $display->panels['left'][0] = 'new-6e79d6fe-fbf1-4438-9766-00f8b77e3055';
    $pane = new stdClass();
    $pane->pid = 'new-17c495bf-2c09-4bf5-a562-be66cd6eed69';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17c495bf-2c09-4bf5-a562-be66cd6eed69';
    $display->content['new-17c495bf-2c09-4bf5-a562-be66cd6eed69'] = $pane;
    $display->panels['left'][1] = 'new-17c495bf-2c09-4bf5-a562-be66cd6eed69';
    $pane = new stdClass();
    $pane->pid = 'new-c0c63011-c5e0-4731-9fd7-a2a47ca4a728';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c0c63011-c5e0-4731-9fd7-a2a47ca4a728';
    $display->content['new-c0c63011-c5e0-4731-9fd7-a2a47ca4a728'] = $pane;
    $display->panels['right'][0] = 'new-c0c63011-c5e0-4731-9fd7-a2a47ca4a728';
    $pane = new stdClass();
    $pane->pid = 'new-2659b210-70e3-4bfe-aec3-ce7f5799005c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2659b210-70e3-4bfe-aec3-ce7f5799005c';
    $display->content['new-2659b210-70e3-4bfe-aec3-ce7f5799005c'] = $pane;
    $display->panels['right'][1] = 'new-2659b210-70e3-4bfe-aec3-ce7f5799005c';
    $pane = new stdClass();
    $pane->pid = 'new-3c0fc8b3-14c0-4a4b-90d1-60911825e45f';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Leverandører',
      'title' => 'Leverandører',
      'body' => '<p><a href="/leverandoerer">Se vore leverandører her</a></p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3c0fc8b3-14c0-4a4b-90d1-60911825e45f';
    $display->content['new-3c0fc8b3-14c0-4a4b-90d1-60911825e45f'] = $pane;
    $display->panels['right'][2] = 'new-3c0fc8b3-14c0-4a4b-90d1-60911825e45f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['sektionsside_footer'] = $mini;

  return $export;
}
