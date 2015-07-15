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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ktcstd';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:field-navn - mig selv';
  $display->uuid = '716dee15-d670-4fed-9f47-8da198d75d4e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a72c94bd-fa43-4527-a01c-3698092d1437';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'min_side_top';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a72c94bd-fa43-4527-a01c-3698092d1437';
    $display->content['new-a72c94bd-fa43-4527-a01c-3698092d1437'] = $pane;
    $display->panels['left'][0] = 'new-a72c94bd-fa43-4527-a01c-3698092d1437';
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
      'css_class' => 'ktc-content',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
    $display->content['new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9'] = $pane;
    $display->panels['left'][1] = 'new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
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
      'override_title' => 1,
      'override_title_text' => 'Faner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' pane-page-tabs ktc-aside-no-stack ktc-aside-action ktc-aside-tabs ktc-aside-tabs-2-col',
      'template_suggestion' => 'page_tabs',
    );
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-tabs ktc-aside-action ktc-aside-tabs ktc-aside-tabs-2-col ktc-aside-tabs-menu-fix',
      'template_suggestion' => 'page_tabs',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd250d87a-3551-4b58-8d22-d3771aa38dc6';
    $display->content['new-d250d87a-3551-4b58-8d22-d3771aa38dc6'] = $pane;
    $display->panels['right'][1] = 'new-d250d87a-3551-4b58-8d22-d3771aa38dc6';
    $pane = new stdClass();
    $pane->pid = 'new-c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_user_groups-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'etid' => '%user:uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Medlem af disse netværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside ktc-aside-list',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $display->content['new-c5f91c91-ce44-4336-a89c-d47fa38b612d'] = $pane;
    $display->panels['right'][2] = 'new-c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $pane = new stdClass();
    $pane->pid = 'new-16f2a7be-4329-4cf5-ae42-30b8b1c71a2f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_netvaerk_notifications-current_groups';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Notifikationer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '16f2a7be-4329-4cf5-ae42-30b8b1c71a2f';
    $display->content['new-16f2a7be-4329-4cf5-ae42-30b8b1c71a2f'] = $pane;
    $display->panels['right'][3] = 'new-16f2a7be-4329-4cf5-ae42-30b8b1c71a2f';
    $pane = new stdClass();
    $pane->pid = 'new-1ed2b2cb-b551-485c-ad12-9063c55d9e9b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_links',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => 'Faglige emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1ed2b2cb-b551-485c-ad12-9063c55d9e9b';
    $display->content['new-1ed2b2cb-b551-485c-ad12-9063c55d9e9b'] = $pane;
    $display->panels['right'][4] = 'new-1ed2b2cb-b551-485c-ad12-9063c55d9e9b';
    $pane = new stdClass();
    $pane->pid = 'new-6e7dc23a-cccb-4af4-bfe4-364ea1dc888f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_text',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => 'Tags / stikord',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6e7dc23a-cccb-4af4-bfe4-364ea1dc888f';
    $display->content['new-6e7dc23a-cccb-4af4-bfe4-364ea1dc888f'] = $pane;
    $display->panels['right'][5] = 'new-6e7dc23a-cccb-4af4-bfe4-364ea1dc888f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Other user',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ktcstd';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:field-navn - mig selv';
  $display->uuid = '716dee15-d670-4fed-9f47-8da198d75d4e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6cff09e6-8d36-4148-9125-bbb2b682f0c0';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'vis_bruger-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'uid' => '%user:uid',
      ),
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
    $pane->uuid = '6cff09e6-8d36-4148-9125-bbb2b682f0c0';
    $display->content['new-6cff09e6-8d36-4148-9125-bbb2b682f0c0'] = $pane;
    $display->panels['left'][0] = 'new-6cff09e6-8d36-4148-9125-bbb2b682f0c0';
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
      'css_class' => 'ktc-content',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
    $display->content['new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9'] = $pane;
    $display->panels['left'][1] = 'new-06ecfa2e-ef6d-4228-91a1-4446ea8ceff9';
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
      'override_title' => 1,
      'override_title_text' => 'Faner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' pane-page-tabs ktc-aside-no-stack ktc-aside-action ktc-aside-tabs ktc-aside-tabs-2-col',
      'template_suggestion' => 'page_tabs',
    );
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-tabs ktc-aside-action ktc-aside-tabs ktc-aside-tabs-2-col ktc-aside-tabs-menu-fix',
      'template_suggestion' => 'page_tabs',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd250d87a-3551-4b58-8d22-d3771aa38dc6';
    $display->content['new-d250d87a-3551-4b58-8d22-d3771aa38dc6'] = $pane;
    $display->panels['right'][1] = 'new-d250d87a-3551-4b58-8d22-d3771aa38dc6';
    $pane = new stdClass();
    $pane->pid = 'new-82076a2d-b976-4877-af79-126c14cb359c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_profile_info-panel_pane_2';
    $pane->shown = FALSE;
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82076a2d-b976-4877-af79-126c14cb359c';
    $display->content['new-82076a2d-b976-4877-af79-126c14cb359c'] = $pane;
    $display->panels['right'][2] = 'new-82076a2d-b976-4877-af79-126c14cb359c';
    $pane = new stdClass();
    $pane->pid = 'new-c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_user_groups-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'etid' => '%user:uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Medlem af disse netværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $display->content['new-c5f91c91-ce44-4336-a89c-d47fa38b612d'] = $pane;
    $display->panels['right'][3] = 'new-c5f91c91-ce44-4336-a89c-d47fa38b612d';
    $pane = new stdClass();
    $pane->pid = 'new-1ed2b2cb-b551-485c-ad12-9063c55d9e9b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_links',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => 'Faglige emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1ed2b2cb-b551-485c-ad12-9063c55d9e9b';
    $display->content['new-1ed2b2cb-b551-485c-ad12-9063c55d9e9b'] = $pane;
    $display->panels['right'][4] = 'new-1ed2b2cb-b551-485c-ad12-9063c55d9e9b';
    $pane = new stdClass();
    $pane->pid = 'new-6e7dc23a-cccb-4af4-bfe4-364ea1dc888f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_text',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => 'Tags / stikord',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6e7dc23a-cccb-4af4-bfe4-364ea1dc888f';
    $display->content['new-6e7dc23a-cccb-4af4-bfe4-364ea1dc888f'] = $pane;
    $display->panels['right'][5] = 'new-6e7dc23a-cccb-4af4-bfe4-364ea1dc888f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

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
  $page->path = 'user/%user/group/new_content';
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
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Nyt indhold',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'Bruger: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
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
  $display->title = '%user:field_navn';
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
    $pane->pid = 'new-691d03da-f3e3-4c3c-93cd-7e081bdd7aaa';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '691d03da-f3e3-4c3c-93cd-7e081bdd7aaa';
    $display->content['new-691d03da-f3e3-4c3c-93cd-7e081bdd7aaa'] = $pane;
    $display->panels['right'][0] = 'new-691d03da-f3e3-4c3c-93cd-7e081bdd7aaa';
    $pane = new stdClass();
    $pane->pid = 'new-b97d9368-4e27-41a6-a4c4-6ddd3526e506';
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
    $pane->uuid = 'b97d9368-4e27-41a6-a4c4-6ddd3526e506';
    $display->content['new-b97d9368-4e27-41a6-a4c4-6ddd3526e506'] = $pane;
    $display->panels['right'][1] = 'new-b97d9368-4e27-41a6-a4c4-6ddd3526e506';
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
  $page->path = 'user/%user/user_comments';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Kommentarer',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'Bruger: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
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
  $display->title = '%user:field_navn';
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
    $pane->pid = 'new-ba48d5ef-ffda-4de0-89af-9eb22ccc4177';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => 'Faner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba48d5ef-ffda-4de0-89af-9eb22ccc4177';
    $display->content['new-ba48d5ef-ffda-4de0-89af-9eb22ccc4177'] = $pane;
    $display->panels['right'][0] = 'new-ba48d5ef-ffda-4de0-89af-9eb22ccc4177';
    $pane = new stdClass();
    $pane->pid = 'new-eb30f21d-6315-4808-86c3-74137f587843';
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
    $pane->uuid = 'eb30f21d-6315-4808-86c3-74137f587843';
    $display->content['new-eb30f21d-6315-4808-86c3-74137f587843'] = $pane;
    $display->panels['right'][1] = 'new-eb30f21d-6315-4808-86c3-74137f587843';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_comments'] = $page;

  return $pages;

}
