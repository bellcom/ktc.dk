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

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_user_profile_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'new_content';
  $page->task = 'page';
  $page->admin_title = 'New content';
  $page->admin_description = '';
  $page->path = 'user/group/new_content';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_new_content_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'new_content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nyt indhold',
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
  $display->uuid = '9c79ef42-646b-4230-a1c1-a797d1812e4a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9065c081-2583-44db-8c41-3c14c76a53c5';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'new_content_from_group-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'section-page-with-filter',
      'css_class' => 'col-md-12 col-sm-12 col-sm-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9065c081-2583-44db-8c41-3c14c76a53c5';
    $display->content['new-9065c081-2583-44db-8c41-3c14c76a53c5'] = $pane;
    $display->panels['left'][0] = 'new-9065c081-2583-44db-8c41-3c14c76a53c5';
    $pane = new stdClass();
    $pane->pid = 'new-fa8a59ce-b16b-4406-a7d2-16ffd7d64235';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-md-12 col-sm-12 col-xs-12"><a class="btn filter-link col-md-12 col-sm-12 col-xs-12 btn-blacknblue" href="/user">Min profil</a></div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa8a59ce-b16b-4406-a7d2-16ffd7d64235';
    $display->content['new-fa8a59ce-b16b-4406-a7d2-16ffd7d64235'] = $pane;
    $display->panels['right'][0] = 'new-fa8a59ce-b16b-4406-a7d2-16ffd7d64235';
    $pane = new stdClass();
    $pane->pid = 'new-980fdfdd-8c0e-4334-8ee9-0d4961073d2a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter_extra-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'content_type',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '980fdfdd-8c0e-4334-8ee9-0d4961073d2a';
    $display->content['new-980fdfdd-8c0e-4334-8ee9-0d4961073d2a'] = $pane;
    $display->panels['right'][1] = 'new-980fdfdd-8c0e-4334-8ee9-0d4961073d2a';
    $pane = new stdClass();
    $pane->pid = 'new-2d064e08-f9f7-4ac2-94e0-9dc24ed8e686';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_user_groups-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'override_title' => 1,
      'override_title_text' => 'Mine netværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'groups',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2d064e08-f9f7-4ac2-94e0-9dc24ed8e686';
    $display->content['new-2d064e08-f9f7-4ac2-94e0-9dc24ed8e686'] = $pane;
    $display->panels['right'][2] = 'new-2d064e08-f9f7-4ac2-94e0-9dc24ed8e686';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['new_content'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_comments';
  $page->task = 'page';
  $page->admin_title = 'User comments';
  $page->admin_description = '';
  $page->path = 'user/user_comments';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_comments_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_comments';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User comments',
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '350031fb-1f4e-4521-a1ca-d47351bebdc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a5ab92d-4ba9-452e-8a6f-789416a69f5a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-user_comments_block';
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
    $pane->uuid = '4a5ab92d-4ba9-452e-8a6f-789416a69f5a';
    $display->content['new-4a5ab92d-4ba9-452e-8a6f-789416a69f5a'] = $pane;
    $display->panels['left'][0] = 'new-4a5ab92d-4ba9-452e-8a6f-789416a69f5a';
    $pane = new stdClass();
    $pane->pid = 'new-ea7ceb5b-a10d-4420-8ea0-d1a0c71c6b9e';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-md-12 col-sm-12 col-xs-12">
	<a class="btn filter-link col-md-12 col-sm-12 col-xs-12 btn-blacknblue" href="/user">Min profil</a></div>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea7ceb5b-a10d-4420-8ea0-d1a0c71c6b9e';
    $display->content['new-ea7ceb5b-a10d-4420-8ea0-d1a0c71c6b9e'] = $pane;
    $display->panels['right'][0] = 'new-ea7ceb5b-a10d-4420-8ea0-d1a0c71c6b9e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_comments'] = $page;

  return $pages;

}
