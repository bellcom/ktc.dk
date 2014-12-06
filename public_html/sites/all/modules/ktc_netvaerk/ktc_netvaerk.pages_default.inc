<?php
/**
 * @file
 * ktc_netvaerk.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_netvaerk_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'netvaerk';
  $page->task = 'page';
  $page->admin_title = 'Netværk';
  $page->admin_description = '';
  $page->path = 'netvaerk';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Netværk',
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
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_netvaerk_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'netvaerk';
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
  $display->title = 'Netværk';
  $display->uuid = 'a4843727-2a83-4e66-af34-80abdd646f84';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ea15f9c9-765a-44d7-90b8-23d2e188ad34';
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
      'css_id' => 'section-page-with-filter-my-groups',
      'css_class' => 'col-md-6 col-s-6 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea15f9c9-765a-44d7-90b8-23d2e188ad34';
    $display->content['new-ea15f9c9-765a-44d7-90b8-23d2e188ad34'] = $pane;
    $display->panels['left'][0] = 'new-ea15f9c9-765a-44d7-90b8-23d2e188ad34';
    $pane = new stdClass();
    $pane->pid = 'new-fa007e67-f170-4084-a1f9-6341dc668521';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter_extra-panel_pane_3';
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
      'css_id' => 'section-page-with-filter-all-groups',
      'css_class' => 'col-md-6 col-s-6 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa007e67-f170-4084-a1f9-6341dc668521';
    $display->content['new-fa007e67-f170-4084-a1f9-6341dc668521'] = $pane;
    $display->panels['left'][1] = 'new-fa007e67-f170-4084-a1f9-6341dc668521';
    $pane = new stdClass();
    $pane->pid = 'new-d74d4c00-3b60-4ef8-afce-e543d8bd0f3a';
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
      'css_class' => 'col-md-12 col-sm-12 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd74d4c00-3b60-4ef8-afce-e543d8bd0f3a';
    $display->content['new-d74d4c00-3b60-4ef8-afce-e543d8bd0f3a'] = $pane;
    $display->panels['left'][2] = 'new-d74d4c00-3b60-4ef8-afce-e543d8bd0f3a';
    $pane = new stdClass();
    $pane->pid = 'new-71d180bd-301f-436e-a2e5-ad4589321508';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_user_groups-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
      'override_title' => 1,
      'override_title_text' => 'Netværk',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71d180bd-301f-436e-a2e5-ad4589321508';
    $display->content['new-71d180bd-301f-436e-a2e5-ad4589321508'] = $pane;
    $display->panels['right'][0] = 'new-71d180bd-301f-436e-a2e5-ad4589321508';
    $pane = new stdClass();
    $pane->pid = 'new-ad5de7f6-c231-465e-97a5-915771f30a4b';
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
    $pane->uuid = 'ad5de7f6-c231-465e-97a5-915771f30a4b';
    $display->content['new-ad5de7f6-c231-465e-97a5-915771f30a4b'] = $pane;
    $display->panels['right'][1] = 'new-ad5de7f6-c231-465e-97a5-915771f30a4b';
    $pane = new stdClass();
    $pane->pid = 'new-7a795114-b3b8-469b-b134-d29e5edb9f3f';
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
      'override_title_text' => 'Filtrer på emner',
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
    $pane->uuid = '7a795114-b3b8-469b-b134-d29e5edb9f3f';
    $display->content['new-7a795114-b3b8-469b-b134-d29e5edb9f3f'] = $pane;
    $display->panels['right'][2] = 'new-7a795114-b3b8-469b-b134-d29e5edb9f3f';
    $pane = new stdClass();
    $pane->pid = 'new-bde1ec35-344e-4376-8dd8-fc5bcb421a1e';
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
        'vid' => '11',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på netværkstyper',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bde1ec35-344e-4376-8dd8-fc5bcb421a1e';
    $display->content['new-bde1ec35-344e-4376-8dd8-fc5bcb421a1e'] = $pane;
    $display->panels['right'][3] = 'new-bde1ec35-344e-4376-8dd8-fc5bcb421a1e';
    $pane = new stdClass();
    $pane->pid = 'new-4a5bbdb0-e94c-4d85-b903-10cdff053bcc';
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
        'vid' => '2',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på regioner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'regioner',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4a5bbdb0-e94c-4d85-b903-10cdff053bcc';
    $display->content['new-4a5bbdb0-e94c-4d85-b903-10cdff053bcc'] = $pane;
    $display->panels['right'][4] = 'new-4a5bbdb0-e94c-4d85-b903-10cdff053bcc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['netvaerk'] = $page;

  return $pages;

}
