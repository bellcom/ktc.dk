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
    ),
  );
  $display->cache = array();
  $display->title = 'Netværk';
  $display->uuid = 'a4843727-2a83-4e66-af34-80abdd646f84';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca0e33d2-ca38-48a9-8f4d-41b8b85eb73b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'indhold_m_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'group',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca0e33d2-ca38-48a9-8f4d-41b8b85eb73b';
    $display->content['new-ca0e33d2-ca38-48a9-8f4d-41b8b85eb73b'] = $pane;
    $display->panels['left'][0] = 'new-ca0e33d2-ca38-48a9-8f4d-41b8b85eb73b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['netvaerk'] = $page;

  return $pages;

}
