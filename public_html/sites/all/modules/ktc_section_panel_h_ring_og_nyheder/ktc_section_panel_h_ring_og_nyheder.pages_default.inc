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
    $pane->pid = 'new-045670b8-4397-45ec-9a4b-7f779dceafa3';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'indhold_m_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'arguments' => array(
        'type' => 'hearing',
        'term_node_tid_depth' => 'all',
        'term_node_tid_depth_1' => 'all',
        'term_node_tid_depth_2' => 'all',
      ),
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
    $pane->uuid = '045670b8-4397-45ec-9a4b-7f779dceafa3';
    $display->content['new-045670b8-4397-45ec-9a4b-7f779dceafa3'] = $pane;
    $display->panels['left'][0] = 'new-045670b8-4397-45ec-9a4b-7f779dceafa3';
    $pane = new stdClass();
    $pane->pid = 'new-4a70b5fc-99f5-4dd4-9b76-38dabf6941b4';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = '-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '22',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'filter-1',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a70b5fc-99f5-4dd4-9b76-38dabf6941b4';
    $display->content['new-4a70b5fc-99f5-4dd4-9b76-38dabf6941b4'] = $pane;
    $display->panels['right'][0] = 'new-4a70b5fc-99f5-4dd4-9b76-38dabf6941b4';
    $pane = new stdClass();
    $pane->pid = 'new-90018328-9ccf-4891-a548-fef1b205effd';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = '-panel_pane_3';
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
      'css_id' => 'filter-3',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '90018328-9ccf-4891-a548-fef1b205effd';
    $display->content['new-90018328-9ccf-4891-a548-fef1b205effd'] = $pane;
    $display->panels['right'][1] = 'new-90018328-9ccf-4891-a548-fef1b205effd';
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
    $pane->pid = 'new-4925a69d-ee87-44e4-b66b-4e33e72132a6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'indhold_m_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'os2web_base_news',
        'term_node_tid_depth' => 'all',
        'term_node_tid_depth_1' => 'all',
        'term_node_tid_depth_2' => 'all',
      ),
      'items_per_page' => '20',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'section-page-with-filter',
      'css_class' => 'term all',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4925a69d-ee87-44e4-b66b-4e33e72132a6';
    $display->content['new-4925a69d-ee87-44e4-b66b-4e33e72132a6'] = $pane;
    $display->panels['left'][0] = 'new-4925a69d-ee87-44e4-b66b-4e33e72132a6';
    $pane = new stdClass();
    $pane->pid = 'new-59478bee-cabd-4c62-8350-68c550903d45';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = '-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
      'arguments' => array(
        'vid' => '19',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'filter-1',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59478bee-cabd-4c62-8350-68c550903d45';
    $display->content['new-59478bee-cabd-4c62-8350-68c550903d45'] = $pane;
    $display->panels['right'][0] = 'new-59478bee-cabd-4c62-8350-68c550903d45';
    $pane = new stdClass();
    $pane->pid = 'new-04718195-6188-4fce-8669-5bd20fa616bb';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = '-panel_pane_2';
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
      'css_id' => 'filter-2',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '04718195-6188-4fce-8669-5bd20fa616bb';
    $display->content['new-04718195-6188-4fce-8669-5bd20fa616bb'] = $pane;
    $display->panels['right'][1] = 'new-04718195-6188-4fce-8669-5bd20fa616bb';
    $pane = new stdClass();
    $pane->pid = 'new-831588a8-cb6a-4437-bd1c-49da124a4581';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = '-panel_pane_3';
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
      'css_id' => 'filter-3',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '831588a8-cb6a-4437-bd1c-49da124a4581';
    $display->content['new-831588a8-cb6a-4437-bd1c-49da124a4581'] = $pane;
    $display->panels['right'][2] = 'new-831588a8-cb6a-4437-bd1c-49da124a4581';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nyheder'] = $page;

  return $pages;

}
