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
  $handler->weight = 2;
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
  $handler->weight = 3;
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

  return $export;
}
