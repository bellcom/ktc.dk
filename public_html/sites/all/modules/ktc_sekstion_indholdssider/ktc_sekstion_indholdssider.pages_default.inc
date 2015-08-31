<?php
/**
 * @file
 * ktc_sekstion_indholdssider.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_sekstion_indholdssider_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Indholdssider',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Indholdselement fra Indholdselement (på Indholdselement: Vis netværk [field_vis_netvaerk])',
        'keyword' => 'netvaerk',
        'name' => 'entity_from_field:field_vis_netvaerk-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
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
  $display->layout = 'ktcpage';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'h__jre',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'col-xs-6 col-md-9',
      ),
      'h__jre' => array(
        'type' => 'region',
        'title' => 'Højre',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'col-xs-6 col-md-3',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'h__jre' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '497a77fe-4a8d-452a-a5f4-900e9bd0ed51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7241e2e6-2d58-483f-b2fd-94941b79f416';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'ktc_content_image',
        'image_link' => '',
      ),
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
      'css_class' => 'ktc-full-width-image',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7241e2e6-2d58-483f-b2fd-94941b79f416';
    $display->content['new-7241e2e6-2d58-483f-b2fd-94941b79f416'] = $pane;
    $display->panels['left'][0] = 'new-7241e2e6-2d58-483f-b2fd-94941b79f416';
    $pane = new stdClass();
    $pane->pid = 'new-f1717612-5ef4-4251-b053-15fd470122b7';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
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
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1717612-5ef4-4251-b053-15fd470122b7';
    $display->content['new-f1717612-5ef4-4251-b053-15fd470122b7'] = $pane;
    $display->panels['left'][1] = 'new-f1717612-5ef4-4251-b053-15fd470122b7';
    $pane = new stdClass();
    $pane->pid = 'new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
    $pane->panel = 'left';
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
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
    $display->content['new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad'] = $pane;
    $display->panels['left'][2] = 'new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
    $pane = new stdClass();
    $pane->pid = 'new-3c26b0dd-1566-4fcf-8c18-e65758ea319d';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
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
    $pane->uuid = '3c26b0dd-1566-4fcf-8c18-e65758ea319d';
    $display->content['new-3c26b0dd-1566-4fcf-8c18-e65758ea319d'] = $pane;
    $display->panels['left'][3] = 'new-3c26b0dd-1566-4fcf-8c18-e65758ea319d';
    $pane = new stdClass();
    $pane->pid = 'new-8df3323d-56ce-499a-baf3-cedc95033125';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8df3323d-56ce-499a-baf3-cedc95033125';
    $display->content['new-8df3323d-56ce-499a-baf3-cedc95033125'] = $pane;
    $display->panels['left'][4] = 'new-8df3323d-56ce-499a-baf3-cedc95033125';
    $pane = new stdClass();
    $pane->pid = 'new-064d4677-37c8-4f5e-b1f4-1b206f60b574';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '064d4677-37c8-4f5e-b1f4-1b206f60b574';
    $display->content['new-064d4677-37c8-4f5e-b1f4-1b206f60b574'] = $pane;
    $display->panels['left'][5] = 'new-064d4677-37c8-4f5e-b1f4-1b206f60b574';
    $pane = new stdClass();
    $pane->pid = 'new-888a5049-72c8-4c32-b78c-505b657279bc';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '888a5049-72c8-4c32-b78c-505b657279bc';
    $display->content['new-888a5049-72c8-4c32-b78c-505b657279bc'] = $pane;
    $display->panels['left'][6] = 'new-888a5049-72c8-4c32-b78c-505b657279bc';
    $pane = new stdClass();
    $pane->pid = 'new-db7671ec-09d5-4453-924b-8eb1b010ac5e';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'db7671ec-09d5-4453-924b-8eb1b010ac5e';
    $display->content['new-db7671ec-09d5-4453-924b-8eb1b010ac5e'] = $pane;
    $display->panels['left'][7] = 'new-db7671ec-09d5-4453-924b-8eb1b010ac5e';
    $pane = new stdClass();
    $pane->pid = 'new-132a114f-e568-4fef-827b-7bc2825ce099';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '132a114f-e568-4fef-827b-7bc2825ce099';
    $display->content['new-132a114f-e568-4fef-827b-7bc2825ce099'] = $pane;
    $display->panels['left'][8] = 'new-132a114f-e568-4fef-827b-7bc2825ce099';
    $pane = new stdClass();
    $pane->pid = 'new-28e12af4-18e2-4e3e-ad29-8f3514756dd7';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '28e12af4-18e2-4e3e-ad29-8f3514756dd7';
    $display->content['new-28e12af4-18e2-4e3e-ad29-8f3514756dd7'] = $pane;
    $display->panels['left'][9] = 'new-28e12af4-18e2-4e3e-ad29-8f3514756dd7';
    $pane = new stdClass();
    $pane->pid = 'new-3e056c08-3876-4095-bcc5-8765aa378201';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '3e056c08-3876-4095-bcc5-8765aa378201';
    $display->content['new-3e056c08-3876-4095-bcc5-8765aa378201'] = $pane;
    $display->panels['left'][10] = 'new-3e056c08-3876-4095-bcc5-8765aa378201';
    $pane = new stdClass();
    $pane->pid = 'new-3c399408-f124-41f4-9044-cae3fd681315';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '3c399408-f124-41f4-9044-cae3fd681315';
    $display->content['new-3c399408-f124-41f4-9044-cae3fd681315'] = $pane;
    $display->panels['left'][11] = 'new-3c399408-f124-41f4-9044-cae3fd681315';
    $pane = new stdClass();
    $pane->pid = 'new-f302a70e-fffe-4574-9a02-80347593ebc2';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'f302a70e-fffe-4574-9a02-80347593ebc2';
    $display->content['new-f302a70e-fffe-4574-9a02-80347593ebc2'] = $pane;
    $display->panels['left'][12] = 'new-f302a70e-fffe-4574-9a02-80347593ebc2';
    $pane = new stdClass();
    $pane->pid = 'new-8c81f0ac-0ad0-4e87-a1f9-e49fa48d9764';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '8c81f0ac-0ad0-4e87-a1f9-e49fa48d9764';
    $display->content['new-8c81f0ac-0ad0-4e87-a1f9-e49fa48d9764'] = $pane;
    $display->panels['left'][13] = 'new-8c81f0ac-0ad0-4e87-a1f9-e49fa48d9764';
    $pane = new stdClass();
    $pane->pid = 'new-23f643c6-f52e-4f2b-970a-219b2bd4cbf1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '23f643c6-f52e-4f2b-970a-219b2bd4cbf1';
    $display->content['new-23f643c6-f52e-4f2b-970a-219b2bd4cbf1'] = $pane;
    $display->panels['left'][14] = 'new-23f643c6-f52e-4f2b-970a-219b2bd4cbf1';
    $pane = new stdClass();
    $pane->pid = 'new-def03cf9-43de-4341-8cbc-6f02d992b2a4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_netvaerkspraesentation-panel_pane_13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%netvaerk:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'def03cf9-43de-4341-8cbc-6f02d992b2a4';
    $display->content['new-def03cf9-43de-4341-8cbc-6f02d992b2a4'] = $pane;
    $display->panels['left'][15] = 'new-def03cf9-43de-4341-8cbc-6f02d992b2a4';
    $pane = new stdClass();
    $pane->pid = 'new-186f9929-9cc9-4deb-bb02-e7f18d98a582';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'praesentation_af_netvaerk_indhold-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%netvaerk:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '186f9929-9cc9-4deb-bb02-e7f18d98a582';
    $display->content['new-186f9929-9cc9-4deb-bb02-e7f18d98a582'] = $pane;
    $display->panels['left'][16] = 'new-186f9929-9cc9-4deb-bb02-e7f18d98a582';
    $pane = new stdClass();
    $pane->pid = 'new-ee946fb4-4482-4a9c-9c63-137149ee2658';
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
    $pane->uuid = 'ee946fb4-4482-4a9c-9c63-137149ee2658';
    $display->content['new-ee946fb4-4482-4a9c-9c63-137149ee2658'] = $pane;
    $display->panels['right'][0] = 'new-ee946fb4-4482-4a9c-9c63-137149ee2658';
    $pane = new stdClass();
    $pane->pid = 'new-55f39f03-e53d-4234-9ce0-79c5cf2af126';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-7';
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
      'css_class' => 'ktc-block-green',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '55f39f03-e53d-4234-9ce0-79c5cf2af126';
    $display->content['new-55f39f03-e53d-4234-9ce0-79c5cf2af126'] = $pane;
    $display->panels['right'][1] = 'new-55f39f03-e53d-4234-9ce0-79c5cf2af126';
    $pane = new stdClass();
    $pane->pid = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_ext_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5d3cd6ae-0798-4424-adde-65658e409534';
    $display->content['new-5d3cd6ae-0798-4424-adde-65658e409534'] = $pane;
    $display->panels['right'][2] = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
    $pane = new stdClass();
    $pane->pid = 'new-a3890995-a2f4-443b-8fd1-0c6a5a8b177a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short';
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
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a3890995-a2f4-443b-8fd1-0c6a5a8b177a';
    $display->content['new-a3890995-a2f4-443b-8fd1-0c6a5a8b177a'] = $pane;
    $display->panels['right'][3] = 'new-a3890995-a2f4-443b-8fd1-0c6a5a8b177a';
    $pane = new stdClass();
    $pane->pid = 'new-2ca38209-69cc-490f-96ad-69c65fee0911';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2ca38209-69cc-490f-96ad-69c65fee0911';
    $display->content['new-2ca38209-69cc-490f-96ad-69c65fee0911'] = $pane;
    $display->panels['right'][4] = 'new-2ca38209-69cc-490f-96ad-69c65fee0911';
    $pane = new stdClass();
    $pane->pid = 'new-0566401b-a11f-4f00-b2c2-18a01be63ba3';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0566401b-a11f-4f00-b2c2-18a01be63ba3';
    $display->content['new-0566401b-a11f-4f00-b2c2-18a01be63ba3'] = $pane;
    $display->panels['right'][5] = 'new-0566401b-a11f-4f00-b2c2-18a01be63ba3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
