<?php
/**
 * @file
 * ktc_section_panel_h_ring_og_nyheder.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_section_panel_h_ring_og_nyheder_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hoeringer';
  $page->task = 'page';
  $page->admin_title = 'Høringer';
  $page->admin_description = '';
  $page->path = 'hoeringer';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Høringer',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hoeringer_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hoeringer';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'da0043b1-428d-4faf-b96e-823d7b3eebbb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bacda143-d7ce-4d30-94ea-1f15399d0332';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-hearing_page_block';
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
      'css_id' => 'section-page-with-filter',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bacda143-d7ce-4d30-94ea-1f15399d0332';
    $display->content['new-bacda143-d7ce-4d30-94ea-1f15399d0332'] = $pane;
    $display->panels['left'][0] = 'new-bacda143-d7ce-4d30-94ea-1f15399d0332';
    $pane = new stdClass();
    $pane->pid = 'new-901298b7-c235-44ad-b566-c6e66d3f0aa1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-custom_filter_on_hearing';
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
      'css_class' => 'filter-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '901298b7-c235-44ad-b566-c6e66d3f0aa1';
    $display->content['new-901298b7-c235-44ad-b566-c6e66d3f0aa1'] = $pane;
    $display->panels['right'][0] = 'new-901298b7-c235-44ad-b566-c6e66d3f0aa1';
    $pane = new stdClass();
    $pane->pid = 'new-2eab7d37-2f31-4a2a-bbc6-e106f003ed85';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '30',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2eab7d37-2f31-4a2a-bbc6-e106f003ed85';
    $display->content['new-2eab7d37-2f31-4a2a-bbc6-e106f003ed85'] = $pane;
    $display->panels['right'][1] = 'new-2eab7d37-2f31-4a2a-bbc6-e106f003ed85';
    $pane = new stdClass();
    $pane->pid = 'new-6d63a8fc-f80d-4c9e-bd4a-9d57fc117274';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '4',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på emne',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'emner',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6d63a8fc-f80d-4c9e-bd4a-9d57fc117274';
    $display->content['new-6d63a8fc-f80d-4c9e-bd4a-9d57fc117274'] = $pane;
    $display->panels['right'][2] = 'new-6d63a8fc-f80d-4c9e-bd4a-9d57fc117274';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hoeringer'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nyheder';
  $page->task = 'page';
  $page->admin_title = 'Nyheder';
  $page->admin_description = '';
  $page->path = 'nyheder';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Nyheder',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nyheder_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'nyheder';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = '36c741fb-5efa-45bc-b260-2289e2dffe59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a393436-27fd-46b5-a545-de3571939ccf';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-section_default_content';
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
      'css_id' => 'section-page-with-filter',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a393436-27fd-46b5-a545-de3571939ccf';
    $display->content['new-5a393436-27fd-46b5-a545-de3571939ccf'] = $pane;
    $display->panels['left'][0] = 'new-5a393436-27fd-46b5-a545-de3571939ccf';
    $pane = new stdClass();
    $pane->pid = 'new-965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '19',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $display->content['new-965c96a3-3ea6-434b-af9f-402dd6f705ff'] = $pane;
    $display->panels['right'][0] = 'new-965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $pane = new stdClass();
    $pane->pid = 'new-35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'tags',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $display->content['new-35218de2-66ce-4bd1-acbd-e9103ef9d846'] = $pane;
    $display->panels['right'][1] = 'new-35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $pane = new stdClass();
    $pane->pid = 'new-8235599d-8033-42a7-aeb7-42c724f3fc10';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '4',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på faglige emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'emner',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8235599d-8033-42a7-aeb7-42c724f3fc10';
    $display->content['new-8235599d-8033-42a7-aeb7-42c724f3fc10'] = $pane;
    $display->panels['right'][2] = 'new-8235599d-8033-42a7-aeb7-42c724f3fc10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nyheder'] = $page;

  return $pages;

}
