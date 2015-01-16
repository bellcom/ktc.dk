<?php
/**
 * @file
 * ktc_hearing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_hearing_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Hearing',
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
  $display->uuid = '699a9930-964c-478b-8888-7e7c4d6984d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17fbae50-8f5f-4a8b-b8bd-cbf0248b03f5';
    $pane->panel = 'left';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '17fbae50-8f5f-4a8b-b8bd-cbf0248b03f5';
    $display->content['new-17fbae50-8f5f-4a8b-b8bd-cbf0248b03f5'] = $pane;
    $display->panels['left'][0] = 'new-17fbae50-8f5f-4a8b-b8bd-cbf0248b03f5';
    $pane = new stdClass();
    $pane->pid = 'new-332ce655-1638-4cbf-a8e6-cd5c90c0e16d';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'edit-tabs',
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
    $pane->uuid = '332ce655-1638-4cbf-a8e6-cd5c90c0e16d';
    $display->content['new-332ce655-1638-4cbf-a8e6-cd5c90c0e16d'] = $pane;
    $display->panels['right'][0] = 'new-332ce655-1638-4cbf-a8e6-cd5c90c0e16d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-332ce655-1638-4cbf-a8e6-cd5c90c0e16d';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Hoering',
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
              'hearing' => 'hearing',
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
  $display->title = '%node:title';
  $display->uuid = 'ff4b577a-9f6b-41f0-aad6-b3b7b50b0cac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2876f4c-61a7-434e-ba15-6b55c661e0aa';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'hearing_node_view-panel_pane_1';
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
      'css_class' => 'col-md-8 col-sm-8 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2876f4c-61a7-434e-ba15-6b55c661e0aa';
    $display->content['new-a2876f4c-61a7-434e-ba15-6b55c661e0aa'] = $pane;
    $display->panels['left'][0] = 'new-a2876f4c-61a7-434e-ba15-6b55c661e0aa';
    $pane = new stdClass();
    $pane->pid = 'new-179549f2-12d2-4336-808f-02c96d065857';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4 col-sm-4 col-xs',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '179549f2-12d2-4336-808f-02c96d065857';
    $display->content['new-179549f2-12d2-4336-808f-02c96d065857'] = $pane;
    $display->panels['left'][1] = 'new-179549f2-12d2-4336-808f-02c96d065857';
    $pane = new stdClass();
    $pane->pid = 'new-ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'hearing_node_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Deltagere',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4 col-sm-4 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69';
    $display->content['new-ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69'] = $pane;
    $display->panels['left'][2] = 'new-ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69';
    $pane = new stdClass();
    $pane->pid = 'new-9cf58d6e-0388-4ed1-b9d8-7e24b16ea83c';
    $pane->panel = 'left';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-8 col-sm-8 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9cf58d6e-0388-4ed1-b9d8-7e24b16ea83c';
    $display->content['new-9cf58d6e-0388-4ed1-b9d8-7e24b16ea83c'] = $pane;
    $display->panels['left'][3] = 'new-9cf58d6e-0388-4ed1-b9d8-7e24b16ea83c';
    $pane = new stdClass();
    $pane->pid = 'new-9067a27e-7b7c-4019-a149-3527eeba2558';
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9067a27e-7b7c-4019-a149-3527eeba2558';
    $display->content['new-9067a27e-7b7c-4019-a149-3527eeba2558'] = $pane;
    $display->panels['right'][0] = 'new-9067a27e-7b7c-4019-a149-3527eeba2558';
    $pane = new stdClass();
    $pane->pid = 'new-966ef502-6c59-4eec-9cfe-af57f3a20b1f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_hearing-ktc_hearing_set_status_form';
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
    $pane->uuid = '966ef502-6c59-4eec-9cfe-af57f3a20b1f';
    $display->content['new-966ef502-6c59-4eec-9cfe-af57f3a20b1f'] = $pane;
    $display->panels['right'][1] = 'new-966ef502-6c59-4eec-9cfe-af57f3a20b1f';
    $pane = new stdClass();
    $pane->pid = 'new-77c8ff1f-1df0-41c4-aa75-76f647ad37b9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_related_links-related_links_block';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '77c8ff1f-1df0-41c4-aa75-76f647ad37b9';
    $display->content['new-77c8ff1f-1df0-41c4-aa75-76f647ad37b9'] = $pane;
    $display->panels['right'][2] = 'new-77c8ff1f-1df0-41c4-aa75-76f647ad37b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
