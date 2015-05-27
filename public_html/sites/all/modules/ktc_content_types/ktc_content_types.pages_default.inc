<?php
/**
 * @file
 * ktc_content_types.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_content_types_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'arrangement - ikke logget ind',
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
              'arrangement' => 'arrangement',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->uuid = '5a397b7d-efa5-4b41-b3f1-b4ee2ebe5d67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-247ae515-6e57-467d-878e-f8532b7be150';
    $pane->panel = 'center';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
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
    $pane->uuid = '247ae515-6e57-467d-878e-f8532b7be150';
    $display->content['new-247ae515-6e57-467d-878e-f8532b7be150'] = $pane;
    $display->panels['center'][0] = 'new-247ae515-6e57-467d-878e-f8532b7be150';
    $pane = new stdClass();
    $pane->pid = 'new-528ae269-873b-49d2-80ea-82fa59c7c86e';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_registration_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '528ae269-873b-49d2-80ea-82fa59c7c86e';
    $display->content['new-528ae269-873b-49d2-80ea-82fa59c7c86e'] = $pane;
    $display->panels['center'][1] = 'new-528ae269-873b-49d2-80ea-82fa59c7c86e';
    $pane = new stdClass();
    $pane->pid = 'new-d51c9775-ba95-4c65-b7a7-2a370d385a86';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_arrangement_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd51c9775-ba95-4c65-b7a7-2a370d385a86';
    $display->content['new-d51c9775-ba95-4c65-b7a7-2a370d385a86'] = $pane;
    $display->panels['center'][2] = 'new-d51c9775-ba95-4c65-b7a7-2a370d385a86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-247ae515-6e57-467d-878e-f8532b7be150';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_4';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
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
  $display->layout = 'ktcpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d635042-b4e9-407d-80ec-3a854e8d9fff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
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
    $pane->uuid = '3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $display->content['new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1'] = $pane;
    $display->panels['left'][0] = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $pane = new stdClass();
    $pane->pid = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $pane->uuid = 'd02a76f0-82a9-4168-b28b-674e5d8e1441';
    $display->content['new-d02a76f0-82a9-4168-b28b-674e5d8e1441'] = $pane;
    $display->panels['right'][0] = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_5';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'node add',
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
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/add/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ktc1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d635042-b4e9-407d-80ec-3a854e8d9fff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $pane->panel = 'top';
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
    $pane->uuid = '3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $display->content['new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1'] = $pane;
    $display->panels['top'][0] = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $pane = new stdClass();
    $pane->pid = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane->panel = 'top';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $pane->uuid = 'd02a76f0-82a9-4168-b28b-674e5d8e1441';
    $display->content['new-d02a76f0-82a9-4168-b28b-674e5d8e1441'] = $pane;
    $display->panels['top'][1] = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_6';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'node edit',
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
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ktcpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d635042-b4e9-407d-80ec-3a854e8d9fff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $pane->panel = 'left';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $display->content['new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1'] = $pane;
    $display->panels['left'][0] = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
    $pane = new stdClass();
    $pane->pid = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $pane->uuid = 'd02a76f0-82a9-4168-b28b-674e5d8e1441';
    $display->content['new-d02a76f0-82a9-4168-b28b-674e5d8e1441'] = $pane;
    $display->panels['right'][0] = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3b089f24-e1e3-456a-b6b5-cf2133fd8ca1';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Netværksindhold',
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
          'name' => 'og_is_node_group_content',
          'settings' => NULL,
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
  $display->uuid = '4718bb5a-9da0-46ef-b06a-a05f4ee557bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d9c9545-a293-4bb3-84b2-6d4cdccafd6f';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
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
    $pane->uuid = '9d9c9545-a293-4bb3-84b2-6d4cdccafd6f';
    $display->content['new-9d9c9545-a293-4bb3-84b2-6d4cdccafd6f'] = $pane;
    $display->panels['left'][0] = 'new-9d9c9545-a293-4bb3-84b2-6d4cdccafd6f';
    $pane = new stdClass();
    $pane->pid = 'new-730c528f-700a-4794-ad28-d1bb9c598a30';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '730c528f-700a-4794-ad28-d1bb9c598a30';
    $display->content['new-730c528f-700a-4794-ad28-d1bb9c598a30'] = $pane;
    $display->panels['right'][0] = 'new-730c528f-700a-4794-ad28-d1bb9c598a30';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-730c528f-700a-4794-ad28-d1bb9c598a30';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Dokument og diskussion',
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
              'document' => 'document',
              'forum_post' => 'forum_post',
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
  $display->layout = 'ktc3coldata';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'centertop' => NULL,
      'centerleft' => NULL,
      'centerright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1d91e47a-78bf-436c-8952-b76c786a3521';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b377e18c-88fd-405d-ae35-dbb5592b67a9';
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
    $pane->uuid = 'b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $display->content['new-b377e18c-88fd-405d-ae35-dbb5592b67a9'] = $pane;
    $display->panels['center'][0] = 'new-b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $pane = new stdClass();
    $pane->pid = 'new-20f14952-1f76-419e-ab06-4bada6cf8447';
    $pane->panel = 'center';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '20f14952-1f76-419e-ab06-4bada6cf8447';
    $display->content['new-20f14952-1f76-419e-ab06-4bada6cf8447'] = $pane;
    $display->panels['center'][1] = 'new-20f14952-1f76-419e-ab06-4bada6cf8447';
    $pane = new stdClass();
    $pane->pid = 'new-023a351b-d90c-4e05-b3e9-7ebf28738193';
    $pane->panel = 'center';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->uuid = '023a351b-d90c-4e05-b3e9-7ebf28738193';
    $display->content['new-023a351b-d90c-4e05-b3e9-7ebf28738193'] = $pane;
    $display->panels['center'][2] = 'new-023a351b-d90c-4e05-b3e9-7ebf28738193';
    $pane = new stdClass();
    $pane->pid = 'new-4054cac8-3c6a-4800-a96c-dfed661a1895';
    $pane->panel = 'centertop';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_arrangement_billede';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4054cac8-3c6a-4800-a96c-dfed661a1895';
    $display->content['new-4054cac8-3c6a-4800-a96c-dfed661a1895'] = $pane;
    $display->panels['centertop'][0] = 'new-4054cac8-3c6a-4800-a96c-dfed661a1895';
    $pane = new stdClass();
    $pane->pid = 'new-8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $pane->panel = 'centertop';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $display->content['new-8353dbf5-8c49-4350-a2a0-f576015ff8b9'] = $pane;
    $display->panels['centertop'][1] = 'new-8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $pane = new stdClass();
    $pane->pid = 'new-a1f17682-bf4e-4916-bf1e-e2866499eb2a';
    $pane->panel = 'centertop';
    $pane->type = 'views';
    $pane->subtype = 'addthis_kode';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = 'a1f17682-bf4e-4916-bf1e-e2866499eb2a';
    $display->content['new-a1f17682-bf4e-4916-bf1e-e2866499eb2a'] = $pane;
    $display->panels['centertop'][2] = 'new-a1f17682-bf4e-4916-bf1e-e2866499eb2a';
    $pane = new stdClass();
    $pane->pid = 'new-0e40a650-7ace-490c-9878-89a818107e67';
    $pane->panel = 'centertop';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_registration_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'medium',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0e40a650-7ace-490c-9878-89a818107e67';
    $display->content['new-0e40a650-7ace-490c-9878-89a818107e67'] = $pane;
    $display->panels['centertop'][3] = 'new-0e40a650-7ace-490c-9878-89a818107e67';
    $pane = new stdClass();
    $pane->pid = 'new-41f71c3f-7841-4673-b295-4ffcd08ef6fe';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41f71c3f-7841-4673-b295-4ffcd08ef6fe';
    $display->content['new-41f71c3f-7841-4673-b295-4ffcd08ef6fe'] = $pane;
    $display->panels['left'][0] = 'new-41f71c3f-7841-4673-b295-4ffcd08ef6fe';
    $pane = new stdClass();
    $pane->pid = 'new-e939b038-3cb8-4c74-91e8-e371a195e62f';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e939b038-3cb8-4c74-91e8-e371a195e62f';
    $display->content['new-e939b038-3cb8-4c74-91e8-e371a195e62f'] = $pane;
    $display->panels['right'][0] = 'new-e939b038-3cb8-4c74-91e8-e371a195e62f';
    $pane = new stdClass();
    $pane->pid = 'new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'teaser',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $display->content['new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8'] = $pane;
    $display->panels['right'][1] = 'new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $pane = new stdClass();
    $pane->pid = 'new-88333bc9-de5f-4ac5-b007-b23e84771a23';
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
    $pane->uuid = '88333bc9-de5f-4ac5-b007-b23e84771a23';
    $display->content['new-88333bc9-de5f-4ac5-b007-b23e84771a23'] = $pane;
    $display->panels['right'][2] = 'new-88333bc9-de5f-4ac5-b007-b23e84771a23';
    $pane = new stdClass();
    $pane->pid = 'new-0a384cad-d9f1-48e6-ab62-13ed4382ad4b';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a384cad-d9f1-48e6-ab62-13ed4382ad4b';
    $display->content['new-0a384cad-d9f1-48e6-ab62-13ed4382ad4b'] = $pane;
    $display->panels['right'][3] = 'new-0a384cad-d9f1-48e6-ab62-13ed4382ad4b';
    $pane = new stdClass();
    $pane->pid = 'new-c7e2b4da-35ee-47c5-9bb4-5707c4a52b62';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c7e2b4da-35ee-47c5-9bb4-5707c4a52b62';
    $display->content['new-c7e2b4da-35ee-47c5-9bb4-5707c4a52b62'] = $pane;
    $display->panels['right'][4] = 'new-c7e2b4da-35ee-47c5-9bb4-5707c4a52b62';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}
