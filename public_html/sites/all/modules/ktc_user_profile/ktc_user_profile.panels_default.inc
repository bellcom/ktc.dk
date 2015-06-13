<?php
/**
 * @file
 * ktc_user_profile.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ktc_user_profile_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'min_side_top';
  $mini->category = '';
  $mini->admin_title = 'Min side top';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'h__jre',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'h__jre' => array(
        'type' => 'region',
        'title' => 'Højre',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'h__jre' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a34126a6-c8d3-4fde-9e41-2853a6c2decb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d2855733-3409-4add-9159-1b5a5a50715b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'ktc_hearing-ktc_hearing_unresponded';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Høringer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2855733-3409-4add-9159-1b5a5a50715b';
    $display->content['new-d2855733-3409-4add-9159-1b5a5a50715b'] = $pane;
    $display->panels['center'][0] = 'new-d2855733-3409-4add-9159-1b5a5a50715b';
    $pane = new stdClass();
    $pane->pid = 'new-a0668675-1029-4559-a868-d69a9a2302f6';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'signup_current_signups';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = 'a0668675-1029-4559-a868-d69a9a2302f6';
    $display->content['new-a0668675-1029-4559-a868-d69a9a2302f6'] = $pane;
    $display->panels['center'][1] = 'new-a0668675-1029-4559-a868-d69a9a2302f6';
    $pane = new stdClass();
    $pane->pid = 'new-4ccf03b0-0e2e-4129-a4f5-209ea85f79d7';
    $pane->panel = 'h__jre';
    $pane->type = 'views';
    $pane->subtype = 'comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '4ccf03b0-0e2e-4129-a4f5-209ea85f79d7';
    $display->content['new-4ccf03b0-0e2e-4129-a4f5-209ea85f79d7'] = $pane;
    $display->panels['h__jre'][0] = 'new-4ccf03b0-0e2e-4129-a4f5-209ea85f79d7';
    $pane = new stdClass();
    $pane->pid = 'new-18a7d176-e2d5-40ff-a535-3e202685121a';
    $pane->panel = 'h__jre';
    $pane->type = 'views';
    $pane->subtype = 'new_content_from_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Nyt indhold',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '18a7d176-e2d5-40ff-a535-3e202685121a';
    $display->content['new-18a7d176-e2d5-40ff-a535-3e202685121a'] = $pane;
    $display->panels['h__jre'][1] = 'new-18a7d176-e2d5-40ff-a535-3e202685121a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['min_side_top'] = $mini;

  return $export;
}
