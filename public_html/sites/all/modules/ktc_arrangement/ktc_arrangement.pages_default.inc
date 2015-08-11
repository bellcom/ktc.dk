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
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Arrangementer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Indholdselement fra Indholdselement (på Indholdselement: Gruppe/Netværk [og_group_ref])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:og_group_ref-node-node',
        'delta' => '0',
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
      'centertop_secondary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1d91e47a-78bf-436c-8952-b76c786a3521';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ecf2c8a-1234-4286-bf4b-024c97851dd5';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-well ktc-well-large',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ecf2c8a-1234-4286-bf4b-024c97851dd5';
    $display->content['new-2ecf2c8a-1234-4286-bf4b-024c97851dd5'] = $pane;
    $display->panels['center'][0] = 'new-2ecf2c8a-1234-4286-bf4b-024c97851dd5';
    $pane = new stdClass();
    $pane->pid = 'new-65ec2747-4699-4f6f-b11f-3207462fd82f';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-well ktc-well-large',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '65ec2747-4699-4f6f-b11f-3207462fd82f';
    $display->content['new-65ec2747-4699-4f6f-b11f-3207462fd82f'] = $pane;
    $display->panels['center'][1] = 'new-65ec2747-4699-4f6f-b11f-3207462fd82f';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-padding-top ktc-padding-bottom',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $display->content['new-b377e18c-88fd-405d-ae35-dbb5592b67a9'] = $pane;
    $display->panels['center'][2] = 'new-b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $pane = new stdClass();
    $pane->pid = 'new-8df18fef-c5a1-48dd-85e1-682dfe9c444e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8df18fef-c5a1-48dd-85e1-682dfe9c444e';
    $display->content['new-8df18fef-c5a1-48dd-85e1-682dfe9c444e'] = $pane;
    $display->panels['center'][3] = 'new-8df18fef-c5a1-48dd-85e1-682dfe9c444e';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'comments-list',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '023a351b-d90c-4e05-b3e9-7ebf28738193';
    $display->content['new-023a351b-d90c-4e05-b3e9-7ebf28738193'] = $pane;
    $display->panels['center'][4] = 'new-023a351b-d90c-4e05-b3e9-7ebf28738193';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '20f14952-1f76-419e-ab06-4bada6cf8447';
    $display->content['new-20f14952-1f76-419e-ab06-4bada6cf8447'] = $pane;
    $display->panels['center'][5] = 'new-20f14952-1f76-419e-ab06-4bada6cf8447';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-full-width-image',
      'template_suggestion' => 'content',
    );
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $display->content['new-8353dbf5-8c49-4350-a2a0-f576015ff8b9'] = $pane;
    $display->panels['centertop'][1] = 'new-8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $pane = new stdClass();
    $pane->pid = 'new-5f3a2726-d8b2-4221-8304-2514169da424';
    $pane->panel = 'centertop';
    $pane->type = 'views_panes';
    $pane->subtype = 'add_to_outlook-panel_pane_2';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pull-left ktc-padding-right-sm ktc-padding-bottom',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5f3a2726-d8b2-4221-8304-2514169da424';
    $display->content['new-5f3a2726-d8b2-4221-8304-2514169da424'] = $pane;
    $display->panels['centertop'][2] = 'new-5f3a2726-d8b2-4221-8304-2514169da424';
    $pane = new stdClass();
    $pane->pid = 'new-fd453120-d80e-45c4-866c-4636d1110262';
    $pane->panel = 'centertop';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'ktc-node-title',
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
      'css_class' => 'pull-left',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fd453120-d80e-45c4-866c-4636d1110262';
    $display->content['new-fd453120-d80e-45c4-866c-4636d1110262'] = $pane;
    $display->panels['centertop'][3] = 'new-fd453120-d80e-45c4-866c-4636d1110262';
    $pane = new stdClass();
    $pane->pid = 'new-b21e672d-8ae6-4858-9e7c-620fc4927886';
    $pane->panel = 'centertop_secondary';
    $pane->type = 'block';
    $pane->subtype = 'ktc_signup_block-ktc_signup_link_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:arrangement:field_link_to_signup',
          'settings' => array(
            'field_link_to_signup' => array(
              'und' => array(
                0 => array(
                  'title' => '',
                  'url' => '',
                ),
              ),
            ),
            'field_link_to_signup_url' => array(
              0 => array(
                'title' => '',
                'url' => '',
              ),
            ),
            'field_link_to_signup_title' => array(
              0 => array(
                'title' => '',
                'url' => '',
              ),
            ),
            'field_link_to_signup_attributes' => array(
              0 => array(
                'title' => '',
                'url' => '',
              ),
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
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
      'css_class' => 'pull-left ktc-margin-right-xs ktc-margin-bottom',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b21e672d-8ae6-4858-9e7c-620fc4927886';
    $display->content['new-b21e672d-8ae6-4858-9e7c-620fc4927886'] = $pane;
    $display->panels['centertop_secondary'][0] = 'new-b21e672d-8ae6-4858-9e7c-620fc4927886';
    $pane = new stdClass();
    $pane->pid = 'new-4298fd9b-61a6-4889-928c-48c92bf8ddc4';
    $pane->panel = 'centertop_secondary';
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
      'css_class' => 'pull-left btn btn-default ktc-margin-right-xs ktc-margin-bottom',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4298fd9b-61a6-4889-928c-48c92bf8ddc4';
    $display->content['new-4298fd9b-61a6-4889-928c-48c92bf8ddc4'] = $pane;
    $display->panels['centertop_secondary'][1] = 'new-4298fd9b-61a6-4889-928c-48c92bf8ddc4';
    $pane = new stdClass();
    $pane->pid = 'new-35d83e36-854e-430b-9a07-31e582819644';
    $pane->panel = 'centertop_secondary';
    $pane->type = 'views_panes';
    $pane->subtype = 'add_to_outlook-panel_pane_1';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pull-left ktc-margin-right-xs ktc-margin-bottom',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '35d83e36-854e-430b-9a07-31e582819644';
    $display->content['new-35d83e36-854e-430b-9a07-31e582819644'] = $pane;
    $display->panels['centertop_secondary'][2] = 'new-35d83e36-854e-430b-9a07-31e582819644';
    $pane = new stdClass();
    $pane->pid = 'new-51c37052-ebc8-4e4b-b384-819083e03ed6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '%node_2:title',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51c37052-ebc8-4e4b-b384-819083e03ed6';
    $display->content['new-51c37052-ebc8-4e4b-b384-819083e03ed6'] = $pane;
    $display->panels['left'][0] = 'new-51c37052-ebc8-4e4b-b384-819083e03ed6';
    $pane = new stdClass();
    $pane->pid = 'new-57759ef6-ecfd-4a3f-8e32-440474f3e5de';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '57759ef6-ecfd-4a3f-8e32-440474f3e5de';
    $display->content['new-57759ef6-ecfd-4a3f-8e32-440474f3e5de'] = $pane;
    $display->panels['left'][1] = 'new-57759ef6-ecfd-4a3f-8e32-440474f3e5de';
    $pane = new stdClass();
    $pane->pid = 'new-7e564741-699d-4148-8d70-718bf5dfb549';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'signup_user_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Tilmeldte',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7e564741-699d-4148-8d70-718bf5dfb549';
    $display->content['new-7e564741-699d-4148-8d70-718bf5dfb549'] = $pane;
    $display->panels['left'][2] = 'new-7e564741-699d-4148-8d70-718bf5dfb549';
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
      'formatter' => 'file_table',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'teaser',
      ),
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
      'css_class' => ' ktc-aside-color ktc-aside-table-list',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $display->content['new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8'] = $pane;
    $display->panels['right'][1] = 'new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $pane = new stdClass();
    $pane->pid = 'new-9260ee90-f12d-43e6-bc54-8a499c17d495';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9260ee90-f12d-43e6-bc54-8a499c17d495';
    $display->content['new-9260ee90-f12d-43e6-bc54-8a499c17d495'] = $pane;
    $display->panels['right'][2] = 'new-9260ee90-f12d-43e6-bc54-8a499c17d495';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '88333bc9-de5f-4ac5-b007-b23e84771a23';
    $display->content['new-88333bc9-de5f-4ac5-b007-b23e84771a23'] = $pane;
    $display->panels['right'][3] = 'new-88333bc9-de5f-4ac5-b007-b23e84771a23';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-list',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0a384cad-d9f1-48e6-ab62-13ed4382ad4b';
    $display->content['new-0a384cad-d9f1-48e6-ab62-13ed4382ad4b'] = $pane;
    $display->panels['right'][4] = 'new-0a384cad-d9f1-48e6-ab62-13ed4382ad4b';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c7e2b4da-35ee-47c5-9bb4-5707c4a52b62';
    $display->content['new-c7e2b4da-35ee-47c5-9bb4-5707c4a52b62'] = $pane;
    $display->panels['right'][5] = 'new-c7e2b4da-35ee-47c5-9bb4-5707c4a52b62';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_arrangement_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'aktiviteter';
  $page->task = 'page';
  $page->admin_title = 'Aktiviteter';
  $page->admin_description = '';
  $page->path = 'kalender';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Kalender',
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
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_aktiviteter_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'aktiviteter';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f794f9e1-6f8c-4f40-ace7-703c81a0cae6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cce39a44-010c-43cd-93eb-348d7c10cb78';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'opret_arrangement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-dark ktc-aside-link-list-2-col',
      'template_suggestion' => 'views',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cce39a44-010c-43cd-93eb-348d7c10cb78';
    $display->content['new-cce39a44-010c-43cd-93eb-348d7c10cb78'] = $pane;
    $display->panels['left'][0] = 'new-cce39a44-010c-43cd-93eb-348d7c10cb78';
    $pane = new stdClass();
    $pane->pid = 'new-f2a164e6-e4d2-4896-83e8-36d479eda349';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-arrangement_page_block';
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
      'css_id' => 'section-page-with-filter',
      'css_class' => 'row',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f2a164e6-e4d2-4896-83e8-36d479eda349';
    $display->content['new-f2a164e6-e4d2-4896-83e8-36d479eda349'] = $pane;
    $display->panels['left'][1] = 'new-f2a164e6-e4d2-4896-83e8-36d479eda349';
    $pane = new stdClass();
    $pane->pid = 'new-fbc410b6-6f73-4ad0-89f2-0ec941000bd7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '5',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på aktiviteter',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbc410b6-6f73-4ad0-89f2-0ec941000bd7';
    $display->content['new-fbc410b6-6f73-4ad0-89f2-0ec941000bd7'] = $pane;
    $display->panels['right'][0] = 'new-fbc410b6-6f73-4ad0-89f2-0ec941000bd7';
    $pane = new stdClass();
    $pane->pid = 'new-820aa0ab-0867-411c-9cd3-a62f1bd5bd1f';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Status',
      'body' => '<div class="filter-box">
<div class="ktc-filter-button-container">
<div class="btn btn-primary filter-link" data-filter="future" id="filter-all">Kommende</div>
</div>

<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" data-filter="old" id="filter-old">Afholdte</div>
</div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'period',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
      'template_suggestion' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '820aa0ab-0867-411c-9cd3-a62f1bd5bd1f';
    $display->content['new-820aa0ab-0867-411c-9cd3-a62f1bd5bd1f'] = $pane;
    $display->panels['right'][1] = 'new-820aa0ab-0867-411c-9cd3-a62f1bd5bd1f';
    $pane = new stdClass();
    $pane->pid = 'new-dc251f72-95b3-4ac0-82a0-8c8ff4dd7273';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'arrangement-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'override_title' => 1,
      'override_title_text' => 'Kalender',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dc251f72-95b3-4ac0-82a0-8c8ff4dd7273';
    $display->content['new-dc251f72-95b3-4ac0-82a0-8c8ff4dd7273'] = $pane;
    $display->panels['right'][2] = 'new-dc251f72-95b3-4ac0-82a0-8c8ff4dd7273';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['aktiviteter'] = $page;

  return $pages;

}
