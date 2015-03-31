<?php
/**
 * @file
 * ktc_netvaerk.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ktc_netvaerk_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'netvaerks_kontekst';
  $mini->category = 'netvaerk';
  $mini->admin_title = 'Netværks std venstre side';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b0a01e70-bf08-4fb4-be19-5e7b77306330';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9bf30e44-8866-4cc3-a7cf-b90a811038e3';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'og_ktc_kontekst';
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
    $pane->uuid = '9bf30e44-8866-4cc3-a7cf-b90a811038e3';
    $display->content['new-9bf30e44-8866-4cc3-a7cf-b90a811038e3'] = $pane;
    $display->panels['center'][0] = 'new-9bf30e44-8866-4cc3-a7cf-b90a811038e3';
    $pane = new stdClass();
    $pane->pid = 'new-67723592-4cd5-4f4f-a433-1e87c5b3a146';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'ktc_signup_block-ktc_signup_link_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67723592-4cd5-4f4f-a433-1e87c5b3a146';
    $display->content['new-67723592-4cd5-4f4f-a433-1e87c5b3a146'] = $pane;
    $display->panels['center'][1] = 'new-67723592-4cd5-4f4f-a433-1e87c5b3a146';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9bf30e44-8866-4cc3-a7cf-b90a811038e3';
  $mini->display = $display;
  $export['netvaerks_kontekst'] = $mini;

  return $export;
}
