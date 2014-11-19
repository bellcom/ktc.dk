<?php
/**
 * @file
 * ktc_arrangement.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_arrangement_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Arrangementer',
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
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1d91e47a-78bf-436c-8952-b76c786a3521';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-444650ee-88e1-4129-930c-341cdd106e83';
    $pane->panel = 'left';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '444650ee-88e1-4129-930c-341cdd106e83';
    $display->content['new-444650ee-88e1-4129-930c-341cdd106e83'] = $pane;
    $display->panels['left'][0] = 'new-444650ee-88e1-4129-930c-341cdd106e83';
    $pane = new stdClass();
    $pane->pid = 'new-087e20a3-b79b-4428-8d04-f2069bab7229';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_arrangement_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'h4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '087e20a3-b79b-4428-8d04-f2069bab7229';
    $display->content['new-087e20a3-b79b-4428-8d04-f2069bab7229'] = $pane;
    $display->panels['left'][1] = 'new-087e20a3-b79b-4428-8d04-f2069bab7229';
    $pane = new stdClass();
    $pane->pid = 'new-b377e18c-88fd-405d-ae35-dbb5592b67a9';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $display->content['new-b377e18c-88fd-405d-ae35-dbb5592b67a9'] = $pane;
    $display->panels['left'][2] = 'new-b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $pane = new stdClass();
    $pane->pid = 'new-8058484a-0e6a-429e-8ee2-48f3d5f18ea9';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_target_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8058484a-0e6a-429e-8ee2-48f3d5f18ea9';
    $display->content['new-8058484a-0e6a-429e-8ee2-48f3d5f18ea9'] = $pane;
    $display->panels['left'][3] = 'new-8058484a-0e6a-429e-8ee2-48f3d5f18ea9';
    $pane = new stdClass();
    $pane->pid = 'new-2c6ca223-e67c-460a-8653-57425c6bf382';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_arrangement_location';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c6ca223-e67c-460a-8653-57425c6bf382';
    $display->content['new-2c6ca223-e67c-460a-8653-57425c6bf382'] = $pane;
    $display->panels['right'][0] = 'new-2c6ca223-e67c-460a-8653-57425c6bf382';
    $pane = new stdClass();
    $pane->pid = 'new-13ea8677-dca9-4ba1-9ba6-7db05176cbf8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_arrangement_address';
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
    $pane->uuid = '13ea8677-dca9-4ba1-9ba6-7db05176cbf8';
    $display->content['new-13ea8677-dca9-4ba1-9ba6-7db05176cbf8'] = $pane;
    $display->panels['right'][1] = 'new-13ea8677-dca9-4ba1-9ba6-7db05176cbf8';
    $pane = new stdClass();
    $pane->pid = 'new-82da4e0b-db6b-4a07-a335-b5b5e9f9251a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_arrangement_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82da4e0b-db6b-4a07-a335-b5b5e9f9251a';
    $display->content['new-82da4e0b-db6b-4a07-a335-b5b5e9f9251a'] = $pane;
    $display->panels['right'][2] = 'new-82da4e0b-db6b-4a07-a335-b5b5e9f9251a';
    $pane = new stdClass();
    $pane->pid = 'new-4298fd9b-61a6-4889-928c-48c92bf8ddc4';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link_to_arrangement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
      'css_class' => 'btn btn-info',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4298fd9b-61a6-4889-928c-48c92bf8ddc4';
    $display->content['new-4298fd9b-61a6-4889-928c-48c92bf8ddc4'] = $pane;
    $display->panels['right'][3] = 'new-4298fd9b-61a6-4889-928c-48c92bf8ddc4';
    $pane = new stdClass();
    $pane->pid = 'new-0e40a650-7ace-490c-9878-89a818107e67';
    $pane->panel = 'right';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0e40a650-7ace-490c-9878-89a818107e67';
    $display->content['new-0e40a650-7ace-490c-9878-89a818107e67'] = $pane;
    $display->panels['right'][4] = 'new-0e40a650-7ace-490c-9878-89a818107e67';
    $pane = new stdClass();
    $pane->pid = 'new-4f14c8b1-66ff-4f75-ad55-aae40ac6e08c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link_to_signup';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
      'css_class' => 'btn btn-success',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4f14c8b1-66ff-4f75-ad55-aae40ac6e08c';
    $display->content['new-4f14c8b1-66ff-4f75-ad55-aae40ac6e08c'] = $pane;
    $display->panels['right'][5] = 'new-4f14c8b1-66ff-4f75-ad55-aae40ac6e08c';
    $pane = new stdClass();
    $pane->pid = 'new-0377618c-874c-4e93-ad2d-7c2cbd38d6e4';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_arrangement_categories';
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
      'override_title_text' => 'Nøgleord',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0377618c-874c-4e93-ad2d-7c2cbd38d6e4';
    $display->content['new-0377618c-874c-4e93-ad2d-7c2cbd38d6e4'] = $pane;
    $display->panels['right'][6] = 'new-0377618c-874c-4e93-ad2d-7c2cbd38d6e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
