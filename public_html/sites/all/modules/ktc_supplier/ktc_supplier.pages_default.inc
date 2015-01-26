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
  $handler->weight = 5;
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
    $pane->uuid = 'd27d8fa0-d6dc-4cfc-9ee9-12144017faec';
    $display->content['new-d27d8fa0-d6dc-4cfc-9ee9-12144017faec'] = $pane;
    $display->panels['right'][0] = 'new-d27d8fa0-d6dc-4cfc-9ee9-12144017faec';
    $pane = new stdClass();
    $pane->pid = 'new-03f59f51-61f7-4cd0-a8c0-eded4c1ce0fe';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_supplier_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Leverandører kategori',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03f59f51-61f7-4cd0-a8c0-eded4c1ce0fe';
    $display->content['new-03f59f51-61f7-4cd0-a8c0-eded4c1ce0fe'] = $pane;
    $display->panels['right'][1] = 'new-03f59f51-61f7-4cd0-a8c0-eded4c1ce0fe';
    $pane = new stdClass();
    $pane->pid = 'new-8ea2400e-7420-45cf-bed7-e73a0a34eae7';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'subscriptions_ui-0';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8ea2400e-7420-45cf-bed7-e73a0a34eae7';
    $display->content['new-8ea2400e-7420-45cf-bed7-e73a0a34eae7'] = $pane;
    $display->panels['right'][2] = 'new-8ea2400e-7420-45cf-bed7-e73a0a34eae7';
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
  $page->path = 'leverandoerer';
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
  $display->layout = 'twocol';
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
  $display->title = 'Leverandører';
  $display->uuid = '2c7ed9a6-5ab2-4c4b-89bd-08c736067505';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5acaa6e0-5cfc-4766-964d-911e1a3f8dab';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'supplier_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '20',
      'offset' => '0',
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
    $pane->uuid = '5acaa6e0-5cfc-4766-964d-911e1a3f8dab';
    $display->content['new-5acaa6e0-5cfc-4766-964d-911e1a3f8dab'] = $pane;
    $display->panels['left'][0] = 'new-5acaa6e0-5cfc-4766-964d-911e1a3f8dab';
    $pane = new stdClass();
    $pane->pid = 'new-24ff592b-4351-4003-8db9-41501e5b5080';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/leverandoerlist" class="btn-primary">Vis alle</a>',
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
    $display->panels['left'][1] = 'new-24ff592b-4351-4003-8db9-41501e5b5080';
    $pane = new stdClass();
    $pane->pid = 'new-071a051f-c1bd-4e99-9649-e17779751525';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'supplier_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '22',
      'offset' => '20',
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
    $pane->uuid = '071a051f-c1bd-4e99-9649-e17779751525';
    $display->content['new-071a051f-c1bd-4e99-9649-e17779751525'] = $pane;
    $display->panels['right'][0] = 'new-071a051f-c1bd-4e99-9649-e17779751525';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['suppliers'] = $page;

  return $pages;

}
