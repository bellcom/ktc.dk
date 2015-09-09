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
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Hearing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'opret indhold',
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
              'hearing_responses' => 'hearing_responses',
            ),
          ),
          'context' => 'argument_node_edit_1',
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
      'type' => 'both',
      'id' => 'edit-tabs',
      'override_title' => 1,
      'override_title_text' => 'Rediger',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action ktc-aside-tabs ktc-aside-tabs-1-col',
      'template_suggestion' => 'page_tabs',
    );
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
  $handler->weight = -27;
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
  $display->layout = 'ktc3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'contentrighttop' => NULL,
      'contentrightbotleft' => NULL,
      'contentrightbotright' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ff4b577a-9f6b-41f0-aad6-b3b7b50b0cac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-57cf4d97-37d8-4500-843f-ef2d52fd131b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-no-stack',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57cf4d97-37d8-4500-843f-ef2d52fd131b';
    $display->content['new-57cf4d97-37d8-4500-843f-ef2d52fd131b'] = $pane;
    $display->panels['center'][0] = 'new-57cf4d97-37d8-4500-843f-ef2d52fd131b';
    $pane = new stdClass();
    $pane->pid = 'new-7378a88c-349b-48e5-903b-525dc851e5cb';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-no-stack',
      'template_suggestion' => 'node_title',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7378a88c-349b-48e5-903b-525dc851e5cb';
    $display->content['new-7378a88c-349b-48e5-903b-525dc851e5cb'] = $pane;
    $display->panels['center'][1] = 'new-7378a88c-349b-48e5-903b-525dc851e5cb';
    $pane = new stdClass();
    $pane->pid = 'new-a2876f4c-61a7-434e-ba15-6b55c661e0aa';
    $pane->panel = 'center';
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
      'css_class' => 'ktc-content',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a2876f4c-61a7-434e-ba15-6b55c661e0aa';
    $display->content['new-a2876f4c-61a7-434e-ba15-6b55c661e0aa'] = $pane;
    $display->panels['center'][2] = 'new-a2876f4c-61a7-434e-ba15-6b55c661e0aa';
    $pane = new stdClass();
    $pane->pid = 'new-f567db17-ef50-4c61-95ad-4af14da45015';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'haering_answers-panel_pane_1';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f567db17-ef50-4c61-95ad-4af14da45015';
    $display->content['new-f567db17-ef50-4c61-95ad-4af14da45015'] = $pane;
    $display->panels['center'][3] = 'new-f567db17-ef50-4c61-95ad-4af14da45015';
    $pane = new stdClass();
    $pane->pid = 'new-c01083fa-d23c-4d08-be88-960878febe39';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_message';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hearing:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'tid' => '1840',
                ),
              ),
            ),
            'field_status_tid' => '1840',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:hearing:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'tid' => '1892',
                ),
              ),
            ),
            'field_status_tid' => '1892',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
      'css_class' => 'ktc-aside-color ktc-margin-top',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c01083fa-d23c-4d08-be88-960878febe39';
    $display->content['new-c01083fa-d23c-4d08-be88-960878febe39'] = $pane;
    $display->panels['center'][4] = 'new-c01083fa-d23c-4d08-be88-960878febe39';
    $pane = new stdClass();
    $pane->pid = 'new-d719a157-3846-432d-b0c3-21ef4dd0a5a3';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Høringsbrev',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color ktc-margin-top',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd719a157-3846-432d-b0c3-21ef4dd0a5a3';
    $display->content['new-d719a157-3846-432d-b0c3-21ef4dd0a5a3'] = $pane;
    $display->panels['center'][5] = 'new-d719a157-3846-432d-b0c3-21ef4dd0a5a3';
    $pane = new stdClass();
    $pane->pid = 'new-62173256-cc74-4777-8f4a-209fd7074757';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'hearing_responses-panel_pane_1';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '62173256-cc74-4777-8f4a-209fd7074757';
    $display->content['new-62173256-cc74-4777-8f4a-209fd7074757'] = $pane;
    $display->panels['center'][6] = 'new-62173256-cc74-4777-8f4a-209fd7074757';
    $pane = new stdClass();
    $pane->pid = 'new-91f4a3e1-7705-4ddb-9fed-5a816f7243f2';
    $pane->panel = 'center';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
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
      'template_suggestion' => 'comments-list',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '91f4a3e1-7705-4ddb-9fed-5a816f7243f2';
    $display->content['new-91f4a3e1-7705-4ddb-9fed-5a816f7243f2'] = $pane;
    $display->panels['center'][7] = 'new-91f4a3e1-7705-4ddb-9fed-5a816f7243f2';
    $pane = new stdClass();
    $pane->pid = 'new-a4ae3b9f-a87d-4fdc-9bce-752032213029';
    $pane->panel = 'center';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hearing:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'tid' => '1840',
                ),
              ),
            ),
            'field_status_tid' => '1840',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:hearing:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'tid' => '1892',
                ),
              ),
            ),
            'field_status_tid' => '1892',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-comments-form',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a4ae3b9f-a87d-4fdc-9bce-752032213029';
    $display->content['new-a4ae3b9f-a87d-4fdc-9bce-752032213029'] = $pane;
    $display->panels['center'][8] = 'new-a4ae3b9f-a87d-4fdc-9bce-752032213029';
    $pane = new stdClass();
    $pane->pid = 'new-a82904d3-c87a-4a39-9487-c0d39d865f14';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'listevisning',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Faggruppe(r)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a82904d3-c87a-4a39-9487-c0d39d865f14';
    $display->content['new-a82904d3-c87a-4a39-9487-c0d39d865f14'] = $pane;
    $display->panels['left'][0] = 'new-a82904d3-c87a-4a39-9487-c0d39d865f14';
    $pane = new stdClass();
    $pane->pid = 'new-b23006c5-6ea6-4cfd-9a66-0ebb341082c6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Hørings Indmelder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b23006c5-6ea6-4cfd-9a66-0ebb341082c6';
    $display->content['new-b23006c5-6ea6-4cfd-9a66-0ebb341082c6'] = $pane;
    $display->panels['left'][1] = 'new-b23006c5-6ea6-4cfd-9a66-0ebb341082c6';
    $pane = new stdClass();
    $pane->pid = 'new-ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'hearing_node_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Høringsansvarlige',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'bum',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69';
    $display->content['new-ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69'] = $pane;
    $display->panels['left'][2] = 'new-ca4f9d56-23c9-426c-8cb4-e0f92f2a7a69';
    $pane = new stdClass();
    $pane->pid = 'new-b89612c6-8209-4417-acd4-cb5d3290e307';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'list3',
        'links' => 1,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Alle deltagere',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b89612c6-8209-4417-acd4-cb5d3290e307';
    $display->content['new-b89612c6-8209-4417-acd4-cb5d3290e307'] = $pane;
    $display->panels['left'][3] = 'new-b89612c6-8209-4417-acd4-cb5d3290e307';
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
      'override_title' => 1,
      'override_title_text' => 'Status på høring',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action ktc-aside-no-stack-bottom',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '966ef502-6c59-4eec-9cfe-af57f3a20b1f';
    $display->content['new-966ef502-6c59-4eec-9cfe-af57f3a20b1f'] = $pane;
    $display->panels['right'][1] = 'new-966ef502-6c59-4eec-9cfe-af57f3a20b1f';
    $pane = new stdClass();
    $pane->pid = 'new-551a1204-1ee2-456e-ac21-b9d097005675';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hearing_materials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_table',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Bilag',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-table-list ktc-aside-color',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '551a1204-1ee2-456e-ac21-b9d097005675';
    $display->content['new-551a1204-1ee2-456e-ac21-b9d097005675'] = $pane;
    $display->panels['right'][2] = 'new-551a1204-1ee2-456e-ac21-b9d097005675';
    $pane = new stdClass();
    $pane->pid = 'new-cd1d437d-f9fb-4b90-ab20-e41187bdbba0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_ext_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Eksterne links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cd1d437d-f9fb-4b90-ab20-e41187bdbba0';
    $display->content['new-cd1d437d-f9fb-4b90-ab20-e41187bdbba0'] = $pane;
    $display->panels['right'][3] = 'new-cd1d437d-f9fb-4b90-ab20-e41187bdbba0';
    $pane = new stdClass();
    $pane->pid = 'new-179549f2-12d2-4336-808f-02c96d065857';
    $pane->panel = 'right';
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
      'css_class' => 'ktc-aside-list',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '179549f2-12d2-4336-808f-02c96d065857';
    $display->content['new-179549f2-12d2-4336-808f-02c96d065857'] = $pane;
    $display->panels['right'][4] = 'new-179549f2-12d2-4336-808f-02c96d065857';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
