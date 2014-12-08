<?php
/**
 * @file
 * ktc_user_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_user_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ktcstd';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '716dee15-d670-4fed-9f47-8da198d75d4e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2743fafa-a238-438a-b45d-e199e0754e77';
    $pane->panel = 'left';
    $pane->type = 'token';
    $pane->subtype = 'user:picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-2 col-sm-2 col-xs-2',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2743fafa-a238-438a-b45d-e199e0754e77';
    $display->content['new-2743fafa-a238-438a-b45d-e199e0754e77'] = $pane;
    $display->panels['left'][0] = 'new-2743fafa-a238-438a-b45d-e199e0754e77';
    $pane = new stdClass();
    $pane->pid = 'new-01cef55c-2185-4ffc-85c9-7dc21a3ae1bf';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_profile_info-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Min info',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-3 col-sm-3 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '01cef55c-2185-4ffc-85c9-7dc21a3ae1bf';
    $display->content['new-01cef55c-2185-4ffc-85c9-7dc21a3ae1bf'] = $pane;
    $display->panels['left'][1] = 'new-01cef55c-2185-4ffc-85c9-7dc21a3ae1bf';
    $pane = new stdClass();
    $pane->pid = 'new-82076a2d-b976-4877-af79-126c14cb359c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_profile_info-panel_pane_2';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-3 col-sm-3 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82076a2d-b976-4877-af79-126c14cb359c';
    $display->content['new-82076a2d-b976-4877-af79-126c14cb359c'] = $pane;
    $display->panels['left'][2] = 'new-82076a2d-b976-4877-af79-126c14cb359c';
    $pane = new stdClass();
    $pane->pid = 'new-c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_user_groups-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4 col-sm-4 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $display->content['new-c5f91c91-ce44-4336-a89c-d47fa38b612d'] = $pane;
    $display->panels['left'][3] = 'new-c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $pane = new stdClass();
    $pane->pid = 'new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'forfatters_indhold-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-12 col-sm-12 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
    $display->content['new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9'] = $pane;
    $display->panels['left'][4] = 'new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
    $pane = new stdClass();
    $pane->pid = 'new-f866bc9f-a2c1-47c1-9b85-8705a69a731a';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'edit-tabs',
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
    $pane->uuid = 'f866bc9f-a2c1-47c1-9b85-8705a69a731a';
    $display->content['new-f866bc9f-a2c1-47c1-9b85-8705a69a731a'] = $pane;
    $display->panels['right'][0] = 'new-f866bc9f-a2c1-47c1-9b85-8705a69a731a';
    $pane = new stdClass();
    $pane->pid = 'new-d250d87a-3551-4b58-8d22-d3771aa38dc6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-profile-menu';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd250d87a-3551-4b58-8d22-d3771aa38dc6';
    $display->content['new-d250d87a-3551-4b58-8d22-d3771aa38dc6'] = $pane;
    $display->panels['right'][1] = 'new-d250d87a-3551-4b58-8d22-d3771aa38dc6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
