<?php
/**
 * @file
 * ktc_supplier.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_supplier_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Leverandører',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ktc_supplier' => 'ktc_supplier',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ee08bb69-2605-4f13-ba7c-19b04b25a38e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-471ef9f7-eb7f-47b4-8d19-c1556b487066';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '471ef9f7-eb7f-47b4-8d19-c1556b487066';
    $display->content['new-471ef9f7-eb7f-47b4-8d19-c1556b487066'] = $pane;
    $display->panels['left'][0] = 'new-471ef9f7-eb7f-47b4-8d19-c1556b487066';
    $pane = new stdClass();
    $pane->pid = 'new-d27d8fa0-d6dc-4cfc-9ee9-12144017faec';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => 'Værktøjer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-tabs ktc-aside-tabs-1-col ktc-aside-action',
      'template_suggestion' => 'page_tabs',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd27d8fa0-d6dc-4cfc-9ee9-12144017faec';
    $display->content['new-d27d8fa0-d6dc-4cfc-9ee9-12144017faec'] = $pane;
    $display->panels['right'][0] = 'new-d27d8fa0-d6dc-4cfc-9ee9-12144017faec';
    $pane = new stdClass();
    $pane->pid = 'new-b9ddf039-171f-4de2-8458-c313e5fd8d8c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'leverandoerer_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b9ddf039-171f-4de2-8458-c313e5fd8d8c';
    $display->content['new-b9ddf039-171f-4de2-8458-c313e5fd8d8c'] = $pane;
    $display->panels['right'][1] = 'new-b9ddf039-171f-4de2-8458-c313e5fd8d8c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-471ef9f7-eb7f-47b4-8d19-c1556b487066';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_supplier_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'suppliers';
  $page->task = 'page';
  $page->admin_title = 'Leverandører';
  $page->admin_description = '';
  $page->path = 'om-ktc/leverandoerer';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_suppliers_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'suppliers';
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
  $display->layout = 'ktc1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Leverandører';
  $display->uuid = '2c7ed9a6-5ab2-4c4b-89bd-08c736067505';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5acaa6e0-5cfc-4766-964d-911e1a3f8dab';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'supplier_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => 'Leverandørkategorier',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5acaa6e0-5cfc-4766-964d-911e1a3f8dab';
    $display->content['new-5acaa6e0-5cfc-4766-964d-911e1a3f8dab'] = $pane;
    $display->panels['top'][0] = 'new-5acaa6e0-5cfc-4766-964d-911e1a3f8dab';
    $pane = new stdClass();
    $pane->pid = 'new-24ff592b-4351-4003-8db9-41501e5b5080';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a class="btn btn-primary" href="/leverandoerlist">Vis alle</a></p>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24ff592b-4351-4003-8db9-41501e5b5080';
    $display->content['new-24ff592b-4351-4003-8db9-41501e5b5080'] = $pane;
    $display->panels['top'][1] = 'new-24ff592b-4351-4003-8db9-41501e5b5080';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['suppliers'] = $page;

  return $pages;

}
