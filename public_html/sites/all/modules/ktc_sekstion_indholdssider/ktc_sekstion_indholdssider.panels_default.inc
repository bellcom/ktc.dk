<?php
/**
 * @file
 * ktc_sekstion_indholdssider.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ktc_sekstion_indholdssider_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sektionsside_footer';
  $mini->category = '';
  $mini->admin_title = 'Sektionsside footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e494d5e1-4976-43e6-9e6b-8f9300ec5c48';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b0ca8672-662f-4348-b4e8-5e48bd74a903';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>1- kolonne</p>
',
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
    $pane->uuid = 'b0ca8672-662f-4348-b4e8-5e48bd74a903';
    $display->content['new-b0ca8672-662f-4348-b4e8-5e48bd74a903'] = $pane;
    $display->panels['left'][0] = 'new-b0ca8672-662f-4348-b4e8-5e48bd74a903';
    $pane = new stdClass();
    $pane->pid = 'new-6e79d6fe-fbf1-4438-9766-00f8b77e3055';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
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
    $pane->uuid = '6e79d6fe-fbf1-4438-9766-00f8b77e3055';
    $display->content['new-6e79d6fe-fbf1-4438-9766-00f8b77e3055'] = $pane;
    $display->panels['left'][1] = 'new-6e79d6fe-fbf1-4438-9766-00f8b77e3055';
    $pane = new stdClass();
    $pane->pid = 'new-7c3991e4-0497-4500-bb74-d7de99c74850';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>2. kolonne</p>
',
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
    $pane->uuid = '7c3991e4-0497-4500-bb74-d7de99c74850';
    $display->content['new-7c3991e4-0497-4500-bb74-d7de99c74850'] = $pane;
    $display->panels['middle'][0] = 'new-7c3991e4-0497-4500-bb74-d7de99c74850';
    $pane = new stdClass();
    $pane->pid = 'new-8a0c88cb-f0ce-4cdf-87ce-9c3169f151a2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>3. kolonne</p>
',
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
    $pane->uuid = '8a0c88cb-f0ce-4cdf-87ce-9c3169f151a2';
    $display->content['new-8a0c88cb-f0ce-4cdf-87ce-9c3169f151a2'] = $pane;
    $display->panels['right'][0] = 'new-8a0c88cb-f0ce-4cdf-87ce-9c3169f151a2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b0ca8672-662f-4348-b4e8-5e48bd74a903';
  $mini->display = $display;
  $export['sektionsside_footer'] = $mini;

  return $export;
}
