<?php
/**
 * @file
 * teknik_og_miljoe.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function teknik_og_miljoe_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Bladintro',
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
              'magazine' => 'magazine',
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
  $display->uuid = 'ad562ca6-f12c-4e72-8212-989dd6f614d6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c624ddf-7d8d-487b-b366-cfa8d78c4cb7';
    $pane->panel = 'left';
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
    $pane->uuid = '2c624ddf-7d8d-487b-b366-cfa8d78c4cb7';
    $display->content['new-2c624ddf-7d8d-487b-b366-cfa8d78c4cb7'] = $pane;
    $display->panels['left'][0] = 'new-2c624ddf-7d8d-487b-b366-cfa8d78c4cb7';
    $pane = new stdClass();
    $pane->pid = 'new-a02e2530-2bc0-475f-afb5-f95b01f8dd01';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_udgivelsesdato';
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
    $pane->uuid = 'a02e2530-2bc0-475f-afb5-f95b01f8dd01';
    $display->content['new-a02e2530-2bc0-475f-afb5-f95b01f8dd01'] = $pane;
    $display->panels['left'][1] = 'new-a02e2530-2bc0-475f-afb5-f95b01f8dd01';
    $pane = new stdClass();
    $pane->pid = 'new-4715f01e-eb26-47d5-9b29-eb466cf91b0d';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_forside_billede_';
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
    $pane->uuid = '4715f01e-eb26-47d5-9b29-eb466cf91b0d';
    $display->content['new-4715f01e-eb26-47d5-9b29-eb466cf91b0d'] = $pane;
    $display->panels['left'][2] = 'new-4715f01e-eb26-47d5-9b29-eb466cf91b0d';
    $pane = new stdClass();
    $pane->pid = 'new-004cdaa6-ae3d-4da1-9f65-1d85dc1c9624';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:body';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '004cdaa6-ae3d-4da1-9f65-1d85dc1c9624';
    $display->content['new-004cdaa6-ae3d-4da1-9f65-1d85dc1c9624'] = $pane;
    $display->panels['left'][3] = 'new-004cdaa6-ae3d-4da1-9f65-1d85dc1c9624';
    $pane = new stdClass();
    $pane->pid = 'new-bd6411a0-3663-4747-b2b3-d31e4b9ac07a';
    $pane->panel = 'left';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'bd6411a0-3663-4747-b2b3-d31e4b9ac07a';
    $display->content['new-bd6411a0-3663-4747-b2b3-d31e4b9ac07a'] = $pane;
    $display->panels['left'][4] = 'new-bd6411a0-3663-4747-b2b3-d31e4b9ac07a';
    $pane = new stdClass();
    $pane->pid = 'new-a51d2798-11b4-4986-9d49-84c5138cbf14';
    $pane->panel = 'left';
    $pane->type = 'node_form_log';
    $pane->subtype = 'node_form_log';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a51d2798-11b4-4986-9d49-84c5138cbf14';
    $display->content['new-a51d2798-11b4-4986-9d49-84c5138cbf14'] = $pane;
    $display->panels['left'][5] = 'new-a51d2798-11b4-4986-9d49-84c5138cbf14';
    $pane = new stdClass();
    $pane->pid = 'new-618d8280-47e0-492f-af3f-4098545b83f7';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_magasin_indhold';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '618d8280-47e0-492f-af3f-4098545b83f7';
    $display->content['new-618d8280-47e0-492f-af3f-4098545b83f7'] = $pane;
    $display->panels['left'][6] = 'new-618d8280-47e0-492f-af3f-4098545b83f7';
    $pane = new stdClass();
    $pane->pid = 'new-6873f290-8908-4999-8b48-152bb967be8f';
    $pane->panel = 'right';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
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
    $pane->uuid = '6873f290-8908-4999-8b48-152bb967be8f';
    $display->content['new-6873f290-8908-4999-8b48-152bb967be8f'] = $pane;
    $display->panels['right'][0] = 'new-6873f290-8908-4999-8b48-152bb967be8f';
    $pane = new stdClass();
    $pane->pid = 'new-1dfcefcc-fa35-44f6-a3c0-d19808e32f18';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_udgave';
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
    $pane->uuid = '1dfcefcc-fa35-44f6-a3c0-d19808e32f18';
    $display->content['new-1dfcefcc-fa35-44f6-a3c0-d19808e32f18'] = $pane;
    $display->panels['right'][1] = 'new-1dfcefcc-fa35-44f6-a3c0-d19808e32f18';
    $pane = new stdClass();
    $pane->pid = 'new-5177f01a-8ad6-48c4-b4d4-eebcc7afae50';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_top_artikel';
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
    $pane->uuid = '5177f01a-8ad6-48c4-b4d4-eebcc7afae50';
    $display->content['new-5177f01a-8ad6-48c4-b4d4-eebcc7afae50'] = $pane;
    $display->panels['right'][2] = 'new-5177f01a-8ad6-48c4-b4d4-eebcc7afae50';
    $pane = new stdClass();
    $pane->pid = 'new-21315a3c-0d64-4f1a-9567-c943e674ff59';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_ekstra_artikler';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '21315a3c-0d64-4f1a-9567-c943e674ff59';
    $display->content['new-21315a3c-0d64-4f1a-9567-c943e674ff59'] = $pane;
    $display->panels['right'][3] = 'new-21315a3c-0d64-4f1a-9567-c943e674ff59';
    $pane = new stdClass();
    $pane->pid = 'new-289253da-0615-4ff5-8143-24c5f0bac61d';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_bannere';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '289253da-0615-4ff5-8143-24c5f0bac61d';
    $display->content['new-289253da-0615-4ff5-8143-24c5f0bac61d'] = $pane;
    $display->panels['right'][4] = 'new-289253da-0615-4ff5-8143-24c5f0bac61d';
    $pane = new stdClass();
    $pane->pid = 'new-16b63072-5585-494a-b06c-9f6f30d9005d';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_banner_1_tekst_og_link';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '16b63072-5585-494a-b06c-9f6f30d9005d';
    $display->content['new-16b63072-5585-494a-b06c-9f6f30d9005d'] = $pane;
    $display->panels['right'][5] = 'new-16b63072-5585-494a-b06c-9f6f30d9005d';
    $pane = new stdClass();
    $pane->pid = 'new-c3098b0f-b35b-4a63-900d-eed274baf9f3';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_banner_2';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c3098b0f-b35b-4a63-900d-eed274baf9f3';
    $display->content['new-c3098b0f-b35b-4a63-900d-eed274baf9f3'] = $pane;
    $display->panels['right'][6] = 'new-c3098b0f-b35b-4a63-900d-eed274baf9f3';
    $pane = new stdClass();
    $pane->pid = 'new-5aa7b4ab-8146-413f-98e6-ac5848731d8b';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_banner_2_tekst_og_link';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '5aa7b4ab-8146-413f-98e6-ac5848731d8b';
    $display->content['new-5aa7b4ab-8146-413f-98e6-ac5848731d8b'] = $pane;
    $display->panels['right'][7] = 'new-5aa7b4ab-8146-413f-98e6-ac5848731d8b';
    $pane = new stdClass();
    $pane->pid = 'new-9c2f6b64-9523-4cb6-86be-75193c511a63';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_linkbladreversion';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '9c2f6b64-9523-4cb6-86be-75193c511a63';
    $display->content['new-9c2f6b64-9523-4cb6-86be-75193c511a63'] = $pane;
    $display->panels['right'][8] = 'new-9c2f6b64-9523-4cb6-86be-75193c511a63';
    $pane = new stdClass();
    $pane->pid = 'new-f8aedd82-2d46-46c5-8b90-1369f75bb645';
    $pane->panel = 'right';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'f8aedd82-2d46-46c5-8b90-1369f75bb645';
    $display->content['new-f8aedd82-2d46-46c5-8b90-1369f75bb645'] = $pane;
    $display->panels['right'][9] = 'new-f8aedd82-2d46-46c5-8b90-1369f75bb645';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2c624ddf-7d8d-487b-b366-cfa8d78c4cb7';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_7';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Artikel redigering (begrænset)',
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
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'artikler' => 'artikler',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 13,
              2 => 14,
              3 => 18,
              4 => 10,
              5 => 9,
              6 => 5,
              7 => 3,
              8 => 20,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
          0 => 'venstre',
          1 => 'center',
          2 => 'h__jre',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => '18.670549219190576',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'venstre' => array(
        'type' => 'region',
        'title' => 'Venstre',
        'width' => '40.455779188531714',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ktc-content-wide',
      ),
      'h__jre' => array(
        'type' => 'region',
        'title' => 'Højre',
        'width' => '40.87367159227771',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ktc-content-wide',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'venstre' => NULL,
      'h__jre' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d635042-b4e9-407d-80ec-3a854e8d9fff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane->panel = 'center';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $pane->uuid = 'd02a76f0-82a9-4168-b28b-674e5d8e1441';
    $display->content['new-d02a76f0-82a9-4168-b28b-674e5d8e1441'] = $pane;
    $display->panels['center'][0] = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane = new stdClass();
    $pane->pid = 'new-cc22f372-749a-4461-b332-c2ce3a944e1c';
    $pane->panel = 'center';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-tabs ktc-aside-tabs-1-col ktc-aside-action',
      'template_suggestion' => 'node_form_buttons',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc22f372-749a-4461-b332-c2ce3a944e1c';
    $display->content['new-cc22f372-749a-4461-b332-c2ce3a944e1c'] = $pane;
    $display->panels['center'][1] = 'new-cc22f372-749a-4461-b332-c2ce3a944e1c';
    $pane = new stdClass();
    $pane->pid = 'new-6ff5b8f6-14c8-4ed2-9667-a6837e369003';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
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
    $pane->uuid = '6ff5b8f6-14c8-4ed2-9667-a6837e369003';
    $display->content['new-6ff5b8f6-14c8-4ed2-9667-a6837e369003'] = $pane;
    $display->panels['center'][2] = 'new-6ff5b8f6-14c8-4ed2-9667-a6837e369003';
    $pane = new stdClass();
    $pane->pid = 'new-50d43080-b5e0-4408-80bb-90685f2bc1a8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_antal_anslag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '50d43080-b5e0-4408-80bb-90685f2bc1a8';
    $display->content['new-50d43080-b5e0-4408-80bb-90685f2bc1a8'] = $pane;
    $display->panels['center'][3] = 'new-50d43080-b5e0-4408-80bb-90685f2bc1a8';
    $pane = new stdClass();
    $pane->pid = 'new-a3ed7e48-b2df-4744-8149-6db589073258';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Gemt artikel',
      'title' => 'Gemt artikel',
      'body' => '<p>Til højre vises den gemte artikel. Dvs. den artikel der er gemt i systemet. For at opdatere visningen skal artiklen gemmes.</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a3ed7e48-b2df-4744-8149-6db589073258';
    $display->content['new-a3ed7e48-b2df-4744-8149-6db589073258'] = $pane;
    $display->panels['center'][4] = 'new-a3ed7e48-b2df-4744-8149-6db589073258';
    $pane = new stdClass();
    $pane->pid = 'new-70dd17ef-6bd0-45b5-ac00-f50de38c8d22';
    $pane->panel = 'h__jre';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_lead_img';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'indholdsside',
        'image_link' => '',
      ),
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
    $pane->uuid = '70dd17ef-6bd0-45b5-ac00-f50de38c8d22';
    $display->content['new-70dd17ef-6bd0-45b5-ac00-f50de38c8d22'] = $pane;
    $display->panels['h__jre'][0] = 'new-70dd17ef-6bd0-45b5-ac00-f50de38c8d22';
    $pane = new stdClass();
    $pane->pid = 'new-abcd524e-fd04-4280-83a4-52ca5452d1cc';
    $pane->panel = 'h__jre';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_8';
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
    $pane->uuid = 'abcd524e-fd04-4280-83a4-52ca5452d1cc';
    $display->content['new-abcd524e-fd04-4280-83a4-52ca5452d1cc'] = $pane;
    $display->panels['h__jre'][1] = 'new-abcd524e-fd04-4280-83a4-52ca5452d1cc';
    $pane = new stdClass();
    $pane->pid = 'new-45baa1f2-cd63-467d-9517-08d4bb5b578c';
    $pane->panel = 'h__jre';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tema_trompet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-node-trompet',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '45baa1f2-cd63-467d-9517-08d4bb5b578c';
    $display->content['new-45baa1f2-cd63-467d-9517-08d4bb5b578c'] = $pane;
    $display->panels['h__jre'][2] = 'new-45baa1f2-cd63-467d-9517-08d4bb5b578c';
    $pane = new stdClass();
    $pane->pid = 'new-bf36341a-0475-454c-8394-9c0aba831f53';
    $pane->panel = 'h__jre';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-node-title',
      'template_suggestion' => 'node_title',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bf36341a-0475-454c-8394-9c0aba831f53';
    $display->content['new-bf36341a-0475-454c-8394-9c0aba831f53'] = $pane;
    $display->panels['h__jre'][3] = 'new-bf36341a-0475-454c-8394-9c0aba831f53';
    $pane = new stdClass();
    $pane->pid = 'new-3e26c492-c2ef-48a0-87a6-c40826dc7c5c';
    $pane->panel = 'h__jre';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-node-lead',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3e26c492-c2ef-48a0-87a6-c40826dc7c5c';
    $display->content['new-3e26c492-c2ef-48a0-87a6-c40826dc7c5c'] = $pane;
    $display->panels['h__jre'][4] = 'new-3e26c492-c2ef-48a0-87a6-c40826dc7c5c';
    $pane = new stdClass();
    $pane->pid = 'new-f8aeb0fd-d2f9-4ac4-8190-6c74cf1133f1';
    $pane->panel = 'h__jre';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-content-wide',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f8aeb0fd-d2f9-4ac4-8190-6c74cf1133f1';
    $display->content['new-f8aeb0fd-d2f9-4ac4-8190-6c74cf1133f1'] = $pane;
    $display->panels['h__jre'][5] = 'new-f8aeb0fd-d2f9-4ac4-8190-6c74cf1133f1';
    $pane = new stdClass();
    $pane->pid = 'new-3c3045fb-581e-4515-af4a-59cea9f80339';
    $pane->panel = 'h__jre';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_artikel_afsnit';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Redigér',
        'delete' => 'Slet',
        'add' => 'Tilføj',
        'description' => 1,
        'view_mode' => 'full',
      ),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3c3045fb-581e-4515-af4a-59cea9f80339';
    $display->content['new-3c3045fb-581e-4515-af4a-59cea9f80339'] = $pane;
    $display->panels['h__jre'][6] = 'new-3c3045fb-581e-4515-af4a-59cea9f80339';
    $pane = new stdClass();
    $pane->pid = 'new-fa8209d7-e77f-48cd-861a-35f9d7f07381';
    $pane->panel = 'venstre';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_tema_trompet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->uuid = 'fa8209d7-e77f-48cd-861a-35f9d7f07381';
    $display->content['new-fa8209d7-e77f-48cd-861a-35f9d7f07381'] = $pane;
    $display->panels['venstre'][0] = 'new-fa8209d7-e77f-48cd-861a-35f9d7f07381';
    $pane = new stdClass();
    $pane->pid = 'new-a1493143-8a95-483b-9369-e2f57444296d';
    $pane->panel = 'venstre';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a1493143-8a95-483b-9369-e2f57444296d';
    $display->content['new-a1493143-8a95-483b-9369-e2f57444296d'] = $pane;
    $display->panels['venstre'][1] = 'new-a1493143-8a95-483b-9369-e2f57444296d';
    $pane = new stdClass();
    $pane->pid = 'new-c28f538c-0496-4927-8153-2edad41e82ed';
    $pane->panel = 'venstre';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_short';
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
    $pane->uuid = 'c28f538c-0496-4927-8153-2edad41e82ed';
    $display->content['new-c28f538c-0496-4927-8153-2edad41e82ed'] = $pane;
    $display->panels['venstre'][2] = 'new-c28f538c-0496-4927-8153-2edad41e82ed';
    $pane = new stdClass();
    $pane->pid = 'new-6cb7105d-1078-4f44-aef0-ad0d4b6da5ec';
    $pane->panel = 'venstre';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_paragraphs';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6cb7105d-1078-4f44-aef0-ad0d4b6da5ec';
    $display->content['new-6cb7105d-1078-4f44-aef0-ad0d4b6da5ec'] = $pane;
    $display->panels['venstre'][3] = 'new-6cb7105d-1078-4f44-aef0-ad0d4b6da5ec';
    $pane = new stdClass();
    $pane->pid = 'new-d0202a79-d99f-4742-9e20-d4230a3fb8d1';
    $pane->panel = 'venstre';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_os2web_base_field_media';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd0202a79-d99f-4742-9e20-d4230a3fb8d1';
    $display->content['new-d0202a79-d99f-4742-9e20-d4230a3fb8d1'] = $pane;
    $display->panels['venstre'][4] = 'new-d0202a79-d99f-4742-9e20-d4230a3fb8d1';
    $pane = new stdClass();
    $pane->pid = 'new-8fcab31f-27d1-45d4-a2ce-56cc9791841c';
    $pane->panel = 'venstre';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_os2web_base_field_ext_link';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8fcab31f-27d1-45d4-a2ce-56cc9791841c';
    $display->content['new-8fcab31f-27d1-45d4-a2ce-56cc9791841c'] = $pane;
    $display->panels['venstre'][5] = 'new-8fcab31f-27d1-45d4-a2ce-56cc9791841c';
    $pane = new stdClass();
    $pane->pid = 'new-e4301864-6362-44ca-9d4f-5b1e8805abc7';
    $pane->panel = 'venstre';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e4301864-6362-44ca-9d4f-5b1e8805abc7';
    $display->content['new-e4301864-6362-44ca-9d4f-5b1e8805abc7'] = $pane;
    $display->panels['venstre'][6] = 'new-e4301864-6362-44ca-9d4f-5b1e8805abc7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_8';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Artikel redigering (limited)',
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
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'artikler' => 'artikler',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 13,
              2 => 14,
              3 => 18,
              4 => 10,
              5 => 9,
              6 => 5,
              7 => 3,
              8 => 20,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '66.65514256412129',
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 'main-row',
          2 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'venstre',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => '29.95319124230906',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'venstre' => array(
        'type' => 'region',
        'title' => 'Venstre',
        'width' => '70.04680875769066',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ktc-content-wide',
      ),
      1 => array(
        'type' => 'column',
        'width' => '33.344857435878716',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'Rightside',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'h__jre_side',
        ),
        'parent' => '1',
        'class' => 'rightsidesidebar',
      ),
      'h__jre_side' => array(
        'type' => 'region',
        'title' => 'Højre side',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'top',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bund',
        ),
        'parent' => 'main',
        'class' => 'Bund',
      ),
      'bund' => array(
        'type' => 'region',
        'title' => 'Bund',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'venstre' => NULL,
      'h__jre' => NULL,
      'h__jre_side' => NULL,
      'bund' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d635042-b4e9-407d-80ec-3a854e8d9fff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane->panel = 'h__jre_side';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $pane->uuid = 'd02a76f0-82a9-4168-b28b-674e5d8e1441';
    $display->content['new-d02a76f0-82a9-4168-b28b-674e5d8e1441'] = $pane;
    $display->panels['h__jre_side'][0] = 'new-d02a76f0-82a9-4168-b28b-674e5d8e1441';
    $pane = new stdClass();
    $pane->pid = 'new-cc22f372-749a-4461-b332-c2ce3a944e1c';
    $pane->panel = 'h__jre_side';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-tabs ktc-aside-tabs-1-col ktc-aside-action',
      'template_suggestion' => 'node_form_buttons',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc22f372-749a-4461-b332-c2ce3a944e1c';
    $display->content['new-cc22f372-749a-4461-b332-c2ce3a944e1c'] = $pane;
    $display->panels['h__jre_side'][1] = 'new-cc22f372-749a-4461-b332-c2ce3a944e1c';
    $pane = new stdClass();
    $pane->pid = 'new-6ff5b8f6-14c8-4ed2-9667-a6837e369003';
    $pane->panel = 'h__jre_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
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
    $pane->uuid = '6ff5b8f6-14c8-4ed2-9667-a6837e369003';
    $display->content['new-6ff5b8f6-14c8-4ed2-9667-a6837e369003'] = $pane;
    $display->panels['h__jre_side'][2] = 'new-6ff5b8f6-14c8-4ed2-9667-a6837e369003';
    $pane = new stdClass();
    $pane->pid = 'new-50d43080-b5e0-4408-80bb-90685f2bc1a8';
    $pane->panel = 'h__jre_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_antal_anslag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '50d43080-b5e0-4408-80bb-90685f2bc1a8';
    $display->content['new-50d43080-b5e0-4408-80bb-90685f2bc1a8'] = $pane;
    $display->panels['h__jre_side'][3] = 'new-50d43080-b5e0-4408-80bb-90685f2bc1a8';
    $pane = new stdClass();
    $pane->pid = 'new-d0202a79-d99f-4742-9e20-d4230a3fb8d1';
    $pane->panel = 'h__jre_side';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_os2web_base_field_media';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd0202a79-d99f-4742-9e20-d4230a3fb8d1';
    $display->content['new-d0202a79-d99f-4742-9e20-d4230a3fb8d1'] = $pane;
    $display->panels['h__jre_side'][4] = 'new-d0202a79-d99f-4742-9e20-d4230a3fb8d1';
    $pane = new stdClass();
    $pane->pid = 'new-8fcab31f-27d1-45d4-a2ce-56cc9791841c';
    $pane->panel = 'h__jre_side';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_os2web_base_field_ext_link';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8fcab31f-27d1-45d4-a2ce-56cc9791841c';
    $display->content['new-8fcab31f-27d1-45d4-a2ce-56cc9791841c'] = $pane;
    $display->panels['h__jre_side'][5] = 'new-8fcab31f-27d1-45d4-a2ce-56cc9791841c';
    $pane = new stdClass();
    $pane->pid = 'new-e4301864-6362-44ca-9d4f-5b1e8805abc7';
    $pane->panel = 'h__jre_side';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e4301864-6362-44ca-9d4f-5b1e8805abc7';
    $display->content['new-e4301864-6362-44ca-9d4f-5b1e8805abc7'] = $pane;
    $display->panels['h__jre_side'][6] = 'new-e4301864-6362-44ca-9d4f-5b1e8805abc7';
    $pane = new stdClass();
    $pane->pid = 'new-349a25bb-0668-430c-a7db-3df5fd36b043';
    $pane->panel = 'top';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_os2web_base_field_lead_img';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '349a25bb-0668-430c-a7db-3df5fd36b043';
    $display->content['new-349a25bb-0668-430c-a7db-3df5fd36b043'] = $pane;
    $display->panels['top'][0] = 'new-349a25bb-0668-430c-a7db-3df5fd36b043';
    $pane = new stdClass();
    $pane->pid = 'new-fa8209d7-e77f-48cd-861a-35f9d7f07381';
    $pane->panel = 'top';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_tema_trompet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa8209d7-e77f-48cd-861a-35f9d7f07381';
    $display->content['new-fa8209d7-e77f-48cd-861a-35f9d7f07381'] = $pane;
    $display->panels['top'][1] = 'new-fa8209d7-e77f-48cd-861a-35f9d7f07381';
    $pane = new stdClass();
    $pane->pid = 'new-a1493143-8a95-483b-9369-e2f57444296d';
    $pane->panel = 'top';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a1493143-8a95-483b-9369-e2f57444296d';
    $display->content['new-a1493143-8a95-483b-9369-e2f57444296d'] = $pane;
    $display->panels['top'][2] = 'new-a1493143-8a95-483b-9369-e2f57444296d';
    $pane = new stdClass();
    $pane->pid = 'new-c28f538c-0496-4927-8153-2edad41e82ed';
    $pane->panel = 'top';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_short';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c28f538c-0496-4927-8153-2edad41e82ed';
    $display->content['new-c28f538c-0496-4927-8153-2edad41e82ed'] = $pane;
    $display->panels['top'][3] = 'new-c28f538c-0496-4927-8153-2edad41e82ed';
    $pane = new stdClass();
    $pane->pid = 'new-6cb7105d-1078-4f44-aef0-ad0d4b6da5ec';
    $pane->panel = 'top';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_paragraphs';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6cb7105d-1078-4f44-aef0-ad0d4b6da5ec';
    $display->content['new-6cb7105d-1078-4f44-aef0-ad0d4b6da5ec'] = $pane;
    $display->panels['top'][4] = 'new-6cb7105d-1078-4f44-aef0-ad0d4b6da5ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Arikler',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
              'artikler' => 'artikler',
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
      'main-content' => NULL,
      'content-1' => NULL,
      'content-1-masonry' => NULL,
      'content-2' => NULL,
      'content-2-masonry' => NULL,
      'content-3' => NULL,
      'content-3-masonry' => NULL,
      'content-4' => NULL,
      'content-4-masonry' => NULL,
      'sidebar-right' => NULL,
      'left1' => NULL,
      'left2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '497a77fe-4a8d-452a-a5f4-900e9bd0ed51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_lead_img';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'indholdsside',
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
    $pane->uuid = 'a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $display->content['new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf'] = $pane;
    $display->panels['left'][0] = 'new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $pane = new stdClass();
    $pane->pid = 'new-bc007318-5800-49a2-a632-12e7c1290336';
    $pane->panel = 'left';
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
    $pane->uuid = 'bc007318-5800-49a2-a632-12e7c1290336';
    $display->content['new-bc007318-5800-49a2-a632-12e7c1290336'] = $pane;
    $display->panels['left'][1] = 'new-bc007318-5800-49a2-a632-12e7c1290336';
    $pane = new stdClass();
    $pane->pid = 'new-006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $pane->panel = 'left';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
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
      'css_class' => 'ktc-date',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $display->content['new-006747a4-987d-4c9f-b4d7-a773487a6ae6'] = $pane;
    $display->panels['left'][2] = 'new-006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $pane = new stdClass();
    $pane->pid = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tema_trompet';
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
      'css_class' => 'ktc-node-trompet',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $display->content['new-f00a5495-ce81-4cb7-810e-99247f8ff71c'] = $pane;
    $display->panels['left'][3] = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $pane = new stdClass();
    $pane->pid = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-node-title',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8b48384f-8adc-45df-a98a-41673e5701fa';
    $display->content['new-8b48384f-8adc-45df-a98a-41673e5701fa'] = $pane;
    $display->panels['left'][4] = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
    $pane = new stdClass();
    $pane->pid = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane->panel = 'left';
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
      'css_class' => 'ktc-node-lead',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '88889270-5f54-41a0-965b-c7222bfa9da1';
    $display->content['new-88889270-5f54-41a0-965b-c7222bfa9da1'] = $pane;
    $display->panels['left'][5] = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane = new stdClass();
    $pane->pid = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_artikel_afsnit';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Redigér',
        'delete' => 'Slet',
        'add' => 'Tilføj',
        'description' => 1,
        'view_mode' => 'full',
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '724a8346-03d9-4915-864c-617076ece4ac';
    $display->content['new-724a8346-03d9-4915-864c-617076ece4ac'] = $pane;
    $display->panels['left'][6] = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane = new stdClass();
    $pane->pid = 'new-d99b79f4-0113-4333-b024-d348f8ccd796';
    $pane->panel = 'left';
    $pane->type = 'token';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd99b79f4-0113-4333-b024-d348f8ccd796';
    $display->content['new-d99b79f4-0113-4333-b024-d348f8ccd796'] = $pane;
    $display->panels['left'][7] = 'new-d99b79f4-0113-4333-b024-d348f8ccd796';
    $pane = new stdClass();
    $pane->pid = 'new-fa16f072-d23d-4814-a272-405a75cebf33';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'fa16f072-d23d-4814-a272-405a75cebf33';
    $display->content['new-fa16f072-d23d-4814-a272-405a75cebf33'] = $pane;
    $display->panels['left'][8] = 'new-fa16f072-d23d-4814-a272-405a75cebf33';
    $pane = new stdClass();
    $pane->pid = 'new-2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '150',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $display->content['new-2edbc3bb-c757-4817-9f75-b2f59fc565e7'] = $pane;
    $display->panels['left'][9] = 'new-2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $pane = new stdClass();
    $pane->pid = 'new-78294957-9ca2-43c4-85c0-8465feef0bad';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_annonce';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
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
      'template_suggestion' => 'entity-field',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '78294957-9ca2-43c4-85c0-8465feef0bad';
    $display->content['new-78294957-9ca2-43c4-85c0-8465feef0bad'] = $pane;
    $display->panels['left'][10] = 'new-78294957-9ca2-43c4-85c0-8465feef0bad';
    $pane = new stdClass();
    $pane->pid = 'new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $pane->panel = 'left';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $display->content['new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7'] = $pane;
    $display->panels['left'][11] = 'new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
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
    $pane->pid = 'new-276db23d-d292-4463-8b1e-1872e5d75b04';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'artikler-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'update',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '276db23d-d292-4463-8b1e-1872e5d75b04';
    $display->content['new-276db23d-d292-4463-8b1e-1872e5d75b04'] = $pane;
    $display->panels['right'][1] = 'new-276db23d-d292-4463-8b1e-1872e5d75b04';
    $pane = new stdClass();
    $pane->pid = 'new-bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'artikel_forfattere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Forfatter(e)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'views',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $display->content['new-bcb2c032-4fd8-478a-8dcf-6ef6781097af'] = $pane;
    $display->panels['right'][2] = 'new-bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $pane = new stdClass();
    $pane->pid = 'new-e18770f7-4d50-4896-b227-3707ad11ee23';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_medtaget_i_udgivelse';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'listevisningstor',
        'links' => 0,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Bragt i',
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
    $pane->uuid = 'e18770f7-4d50-4896-b227-3707ad11ee23';
    $display->content['new-e18770f7-4d50-4896-b227-3707ad11ee23'] = $pane;
    $display->panels['right'][3] = 'new-e18770f7-4d50-4896-b227-3707ad11ee23';
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
      'css_class' => ' ktc-aside-color ktc-aside-table-list',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2ca38209-69cc-490f-96ad-69c65fee0911';
    $display->content['new-2ca38209-69cc-490f-96ad-69c65fee0911'] = $pane;
    $display->panels['right'][4] = 'new-2ca38209-69cc-490f-96ad-69c65fee0911';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5d3cd6ae-0798-4424-adde-65658e409534';
    $display->content['new-5d3cd6ae-0798-4424-adde-65658e409534'] = $pane;
    $display->panels['right'][5] = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0566401b-a11f-4f00-b2c2-18a01be63ba3';
    $display->content['new-0566401b-a11f-4f00-b2c2-18a01be63ba3'] = $pane;
    $display->panels['right'][6] = 'new-0566401b-a11f-4f00-b2c2-18a01be63ba3';
    $pane = new stdClass();
    $pane->pid = 'new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_links',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
    $display->content['new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94'] = $pane;
    $display->panels['right'][7] = 'new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Udgivelse',
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
              'magazine' => 'magazine',
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
      'top' => NULL,
      'left' => NULL,
      'centertop' => NULL,
      'centertop_secondary' => NULL,
      'centerleft' => NULL,
      'centerright' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f63bcae-e1f6-4216-aed5-c151ea861bc0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d5612c39-9422-41e3-b88d-9c90fda97685';
    $pane->panel = 'bottom';
    $pane->type = 'token';
    $pane->subtype = 'node:field-artikler-og-nyheder';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
    $pane->uuid = 'd5612c39-9422-41e3-b88d-9c90fda97685';
    $display->content['new-d5612c39-9422-41e3-b88d-9c90fda97685'] = $pane;
    $display->panels['bottom'][0] = 'new-d5612c39-9422-41e3-b88d-9c90fda97685';
    $pane = new stdClass();
    $pane->pid = 'new-2b62cef7-a6ee-4b34-b9a5-3e6b5eb0a282';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_artikler_og_nyheder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 1,
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
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2b62cef7-a6ee-4b34-b9a5-3e6b5eb0a282';
    $display->content['new-2b62cef7-a6ee-4b34-b9a5-3e6b5eb0a282'] = $pane;
    $display->panels['center'][0] = 'new-2b62cef7-a6ee-4b34-b9a5-3e6b5eb0a282';
    $pane = new stdClass();
    $pane->pid = 'new-747962ca-3854-4678-85aa-80e98bf2d439';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_banners-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-no-stack ktc-aside-blue ktc-full-width-image',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '747962ca-3854-4678-85aa-80e98bf2d439';
    $display->content['new-747962ca-3854-4678-85aa-80e98bf2d439'] = $pane;
    $display->panels['left'][0] = 'new-747962ca-3854-4678-85aa-80e98bf2d439';
    $pane = new stdClass();
    $pane->pid = 'new-362f11f5-24a8-4430-a619-ee3dc9af8f6f';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_udgivelsesdato';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-date ktc-content ktc-blue',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '362f11f5-24a8-4430-a619-ee3dc9af8f6f';
    $display->content['new-362f11f5-24a8-4430-a619-ee3dc9af8f6f'] = $pane;
    $display->panels['left'][1] = 'new-362f11f5-24a8-4430-a619-ee3dc9af8f6f';
    $pane = new stdClass();
    $pane->pid = 'new-9e1c3bd9-8f9c-487b-aa59-4a1bd8c0676a';
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
    $pane->uuid = '9e1c3bd9-8f9c-487b-aa59-4a1bd8c0676a';
    $display->content['new-9e1c3bd9-8f9c-487b-aa59-4a1bd8c0676a'] = $pane;
    $display->panels['left'][2] = 'new-9e1c3bd9-8f9c-487b-aa59-4a1bd8c0676a';
    $pane = new stdClass();
    $pane->pid = 'new-04e5c085-dd37-4840-b46d-39d2424270cf';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-full-width-image ktc-margin-bottom',
      'template_suggestion' => 'nohtml',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '04e5c085-dd37-4840-b46d-39d2424270cf';
    $display->content['new-04e5c085-dd37-4840-b46d-39d2424270cf'] = $pane;
    $display->panels['left'][3] = 'new-04e5c085-dd37-4840-b46d-39d2424270cf';
    $pane = new stdClass();
    $pane->pid = 'new-59929938-45ce-48bb-8a1d-533362fd960b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_banners-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
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
      'template_suggestion' => 'nohtml',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '59929938-45ce-48bb-8a1d-533362fd960b';
    $display->content['new-59929938-45ce-48bb-8a1d-533362fd960b'] = $pane;
    $display->panels['left'][4] = 'new-59929938-45ce-48bb-8a1d-533362fd960b';
    $pane = new stdClass();
    $pane->pid = 'new-27f6d959-0030-4236-863b-6b9d7376baad';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
      'template_suggestion' => 'aside',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '27f6d959-0030-4236-863b-6b9d7376baad';
    $display->content['new-27f6d959-0030-4236-863b-6b9d7376baad'] = $pane;
    $display->panels['right'][0] = 'new-27f6d959-0030-4236-863b-6b9d7376baad';
    $pane = new stdClass();
    $pane->pid = 'new-76a55b9a-212a-44e7-8cad-2519111754ab';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_top_artikel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teasercomments',
        'links' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Fremhævet',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-blue',
      'template_suggestion' => 'aside',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '76a55b9a-212a-44e7-8cad-2519111754ab';
    $display->content['new-76a55b9a-212a-44e7-8cad-2519111754ab'] = $pane;
    $display->panels['right'][1] = 'new-76a55b9a-212a-44e7-8cad-2519111754ab';
    $pane = new stdClass();
    $pane->pid = 'new-41268f7f-b46e-4f95-bb96-334dd4ad7e18';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_magasinleder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teasercomments',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Leder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-blue',
      'template_suggestion' => 'aside',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '41268f7f-b46e-4f95-bb96-334dd4ad7e18';
    $display->content['new-41268f7f-b46e-4f95-bb96-334dd4ad7e18'] = $pane;
    $display->panels['right'][2] = 'new-41268f7f-b46e-4f95-bb96-334dd4ad7e18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '23f643c6-f52e-4f2b-970a-219b2bd4cbf1';
    $display->content['new-23f643c6-f52e-4f2b-970a-219b2bd4cbf1'] = $pane;
    $display->panels['left'][4] = 'new-23f643c6-f52e-4f2b-970a-219b2bd4cbf1';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '186f9929-9cc9-4deb-bb02-e7f18d98a582';
    $display->content['new-186f9929-9cc9-4deb-bb02-e7f18d98a582'] = $pane;
    $display->panels['left'][5] = 'new-186f9929-9cc9-4deb-bb02-e7f18d98a582';
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
  $export['node_view_panel_context_13'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_14';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Artikel endnu ikke online',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
              'artikler' => 'artikler',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:artikler:field_fri_for_alle',
          'settings' => array(
            'field_fri_for_alle' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_fri_for_alle_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 11,
              2 => 12,
              3 => 13,
              4 => 17,
              5 => 15,
              6 => 16,
              7 => 14,
              8 => 18,
              9 => 10,
              10 => 9,
              11 => 5,
              12 => 3,
              13 => 19,
              14 => 20,
              15 => 27,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
        3 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'update',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => TRUE,
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
      'main-content' => NULL,
      'content-1' => NULL,
      'content-1-masonry' => NULL,
      'content-2' => NULL,
      'content-2-masonry' => NULL,
      'content-3' => NULL,
      'content-3-masonry' => NULL,
      'content-4' => NULL,
      'content-4-masonry' => NULL,
      'sidebar-right' => NULL,
      'left1' => NULL,
      'left2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '497a77fe-4a8d-452a-a5f4-900e9bd0ed51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_lead_img';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'indholdsside',
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
    $pane->uuid = 'a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $display->content['new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf'] = $pane;
    $display->panels['left'][0] = 'new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $pane = new stdClass();
    $pane->pid = 'new-bc007318-5800-49a2-a632-12e7c1290336';
    $pane->panel = 'left';
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
    $pane->uuid = 'bc007318-5800-49a2-a632-12e7c1290336';
    $display->content['new-bc007318-5800-49a2-a632-12e7c1290336'] = $pane;
    $display->panels['left'][1] = 'new-bc007318-5800-49a2-a632-12e7c1290336';
    $pane = new stdClass();
    $pane->pid = 'new-006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $pane->panel = 'left';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
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
      'css_class' => 'ktc-date',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $display->content['new-006747a4-987d-4c9f-b4d7-a773487a6ae6'] = $pane;
    $display->panels['left'][2] = 'new-006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $pane = new stdClass();
    $pane->pid = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tema_trompet';
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
      'css_class' => 'ktc-node-trompet',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $display->content['new-f00a5495-ce81-4cb7-810e-99247f8ff71c'] = $pane;
    $display->panels['left'][3] = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $pane = new stdClass();
    $pane->pid = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-node-title',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8b48384f-8adc-45df-a98a-41673e5701fa';
    $display->content['new-8b48384f-8adc-45df-a98a-41673e5701fa'] = $pane;
    $display->panels['left'][4] = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
    $pane = new stdClass();
    $pane->pid = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane->panel = 'left';
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
      'css_class' => 'ktc-node-lead with-padding',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '88889270-5f54-41a0-965b-c7222bfa9da1';
    $display->content['new-88889270-5f54-41a0-965b-c7222bfa9da1'] = $pane;
    $display->panels['left'][5] = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane = new stdClass();
    $pane->pid = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_artikel_afsnit';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Redigér',
        'delete' => 'Slet',
        'add' => 'Tilføj',
        'description' => 1,
        'view_mode' => 'full',
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '724a8346-03d9-4915-864c-617076ece4ac';
    $display->content['new-724a8346-03d9-4915-864c-617076ece4ac'] = $pane;
    $display->panels['left'][6] = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane = new stdClass();
    $pane->pid = 'new-d99b79f4-0113-4333-b024-d348f8ccd796';
    $pane->panel = 'left';
    $pane->type = 'token';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd99b79f4-0113-4333-b024-d348f8ccd796';
    $display->content['new-d99b79f4-0113-4333-b024-d348f8ccd796'] = $pane;
    $display->panels['left'][7] = 'new-d99b79f4-0113-4333-b024-d348f8ccd796';
    $pane = new stdClass();
    $pane->pid = 'new-2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '150',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $display->content['new-2edbc3bb-c757-4817-9f75-b2f59fc565e7'] = $pane;
    $display->panels['left'][8] = 'new-2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $pane = new stdClass();
    $pane->pid = 'new-78294957-9ca2-43c4-85c0-8465feef0bad';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_annonce';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
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
      'template_suggestion' => 'entity-field',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '78294957-9ca2-43c4-85c0-8465feef0bad';
    $display->content['new-78294957-9ca2-43c4-85c0-8465feef0bad'] = $pane;
    $display->panels['left'][9] = 'new-78294957-9ca2-43c4-85c0-8465feef0bad';
    $pane = new stdClass();
    $pane->pid = 'new-35a1f065-527d-4578-aff6-5a5314cc5aad';
    $pane->panel = 'left1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Paywall til medlemmer',
      'title' => 'Du har ikke adgang til denne artikel',
      'body' => '<p><span class="ktc-article-locked">&nbsp;</span> Denne artikel kan kun læses af vores online abonnenter.</p>

<p>Hvis du ønsker adgang til denne artikel, skal du først tegne et online abonnement. Få adgang med det samme ved at klikke på knappen herunder.</p>

<p><a class="btn btn-info" href="/abonnementer">Bestil online abonnement</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35a1f065-527d-4578-aff6-5a5314cc5aad';
    $display->content['new-35a1f065-527d-4578-aff6-5a5314cc5aad'] = $pane;
    $display->panels['left1'][0] = 'new-35a1f065-527d-4578-aff6-5a5314cc5aad';
    $pane = new stdClass();
    $pane->pid = 'new-b9396ba0-beea-4c45-a35a-e448e92847ae';
    $pane->panel = 'left1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
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
    );
    $pane->configuration = array(
      'admin_title' => 'Paywall til besøgende',
      'title' => 'Du har ikke adgang til denne artikel',
      'body' => '<p><span class="ktc-article-locked">&nbsp;</span> Denne artikel kan kun læses af vores online abonnenter.</p>

<p>Hvis du har tegnet online abonnement, skal du logge ind herunder. Har du endnu ikke et digitalt abonnement, kan du på din brugerprofil redigere dine abonnementer og tilføje et digitalt abonnement. Har du ikke en brugerprofil, skal du<a href="/user/signup"> oprette en </a>og tilføje digitalt abonnement. Bruge evt ikonerne herunder til at oprette en brugerprofil.</p>

<p>Visse artikler frigives til alle.</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'stacked',
      'template_suggestion' => 'custom',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b9396ba0-beea-4c45-a35a-e448e92847ae';
    $display->content['new-b9396ba0-beea-4c45-a35a-e448e92847ae'] = $pane;
    $display->panels['left1'][1] = 'new-b9396ba0-beea-4c45-a35a-e448e92847ae';
    $pane = new stdClass();
    $pane->pid = 'new-33b132ae-9596-4198-a1d9-98a1b9088813';
    $pane->panel = 'left1';
    $pane->type = 'views_panes';
    $pane->subtype = 'artikelinfo-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '33b132ae-9596-4198-a1d9-98a1b9088813';
    $display->content['new-33b132ae-9596-4198-a1d9-98a1b9088813'] = $pane;
    $display->panels['left1'][2] = 'new-33b132ae-9596-4198-a1d9-98a1b9088813';
    $pane = new stdClass();
    $pane->pid = 'new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $pane->panel = 'left1';
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
      'css_class' => 'ktc-comments-form hide-label show-login',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $display->content['new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7'] = $pane;
    $display->panels['left1'][3] = 'new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $pane = new stdClass();
    $pane->pid = 'new-0df367d5-77b2-4bde-a188-cad380e4b2d9';
    $pane->panel = 'left2';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = FALSE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0df367d5-77b2-4bde-a188-cad380e4b2d9';
    $display->content['new-0df367d5-77b2-4bde-a188-cad380e4b2d9'] = $pane;
    $display->panels['left2'][0] = 'new-0df367d5-77b2-4bde-a188-cad380e4b2d9';
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
    $pane->pid = 'new-bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'artikel_forfattere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Forfatter(e)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'views',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $display->content['new-bcb2c032-4fd8-478a-8dcf-6ef6781097af'] = $pane;
    $display->panels['right'][1] = 'new-bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $pane = new stdClass();
    $pane->pid = 'new-e18770f7-4d50-4896-b227-3707ad11ee23';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_medtaget_i_udgivelse';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'listevisningstor',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Bragt i',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e18770f7-4d50-4896-b227-3707ad11ee23';
    $display->content['new-e18770f7-4d50-4896-b227-3707ad11ee23'] = $pane;
    $display->panels['right'][2] = 'new-e18770f7-4d50-4896-b227-3707ad11ee23';
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
      'css_class' => ' ktc-aside-color ktc-aside-table-list',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2ca38209-69cc-490f-96ad-69c65fee0911';
    $display->content['new-2ca38209-69cc-490f-96ad-69c65fee0911'] = $pane;
    $display->panels['right'][3] = 'new-2ca38209-69cc-490f-96ad-69c65fee0911';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5d3cd6ae-0798-4424-adde-65658e409534';
    $display->content['new-5d3cd6ae-0798-4424-adde-65658e409534'] = $pane;
    $display->panels['right'][4] = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
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
    $pane = new stdClass();
    $pane->pid = 'new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_links',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
    $display->content['new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94'] = $pane;
    $display->panels['right'][6] = 'new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_14'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_15';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Artikel - Må redigere',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
              'artikler' => 'artikler',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'update',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
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
      'main-content' => NULL,
      'content-1' => NULL,
      'content-1-masonry' => NULL,
      'content-2' => NULL,
      'content-2-masonry' => NULL,
      'content-3' => NULL,
      'content-3-masonry' => NULL,
      'content-4' => NULL,
      'content-4-masonry' => NULL,
      'sidebar-right' => NULL,
      'left1' => NULL,
      'left2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '497a77fe-4a8d-452a-a5f4-900e9bd0ed51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_lead_img';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'indholdsside',
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
    $pane->uuid = 'a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $display->content['new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf'] = $pane;
    $display->panels['left'][0] = 'new-a2984cad-b9ef-48b9-abd4-5bd35f2faebf';
    $pane = new stdClass();
    $pane->pid = 'new-bc007318-5800-49a2-a632-12e7c1290336';
    $pane->panel = 'left';
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
    $pane->uuid = 'bc007318-5800-49a2-a632-12e7c1290336';
    $display->content['new-bc007318-5800-49a2-a632-12e7c1290336'] = $pane;
    $display->panels['left'][1] = 'new-bc007318-5800-49a2-a632-12e7c1290336';
    $pane = new stdClass();
    $pane->pid = 'new-006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $pane->panel = 'left';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
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
      'css_class' => 'ktc-date',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $display->content['new-006747a4-987d-4c9f-b4d7-a773487a6ae6'] = $pane;
    $display->panels['left'][2] = 'new-006747a4-987d-4c9f-b4d7-a773487a6ae6';
    $pane = new stdClass();
    $pane->pid = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tema_trompet';
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
      'css_class' => 'ktc-node-trompet',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $display->content['new-f00a5495-ce81-4cb7-810e-99247f8ff71c'] = $pane;
    $display->panels['left'][3] = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $pane = new stdClass();
    $pane->pid = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-node-title',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8b48384f-8adc-45df-a98a-41673e5701fa';
    $display->content['new-8b48384f-8adc-45df-a98a-41673e5701fa'] = $pane;
    $display->panels['left'][4] = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
    $pane = new stdClass();
    $pane->pid = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane->panel = 'left';
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
      'css_class' => 'ktc-node-lead',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '88889270-5f54-41a0-965b-c7222bfa9da1';
    $display->content['new-88889270-5f54-41a0-965b-c7222bfa9da1'] = $pane;
    $display->panels['left'][5] = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane = new stdClass();
    $pane->pid = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_artikel_afsnit';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Redigér',
        'delete' => 'Slet',
        'add' => '',
        'description' => 0,
        'view_mode' => 'full',
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '724a8346-03d9-4915-864c-617076ece4ac';
    $display->content['new-724a8346-03d9-4915-864c-617076ece4ac'] = $pane;
    $display->panels['left'][6] = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane = new stdClass();
    $pane->pid = 'new-d99b79f4-0113-4333-b024-d348f8ccd796';
    $pane->panel = 'left';
    $pane->type = 'token';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd99b79f4-0113-4333-b024-d348f8ccd796';
    $display->content['new-d99b79f4-0113-4333-b024-d348f8ccd796'] = $pane;
    $display->panels['left'][7] = 'new-d99b79f4-0113-4333-b024-d348f8ccd796';
    $pane = new stdClass();
    $pane->pid = 'new-fa16f072-d23d-4814-a272-405a75cebf33';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
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
      'css_class' => 'ktc-article-section-wrapper',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'fa16f072-d23d-4814-a272-405a75cebf33';
    $display->content['new-fa16f072-d23d-4814-a272-405a75cebf33'] = $pane;
    $display->panels['left'][8] = 'new-fa16f072-d23d-4814-a272-405a75cebf33';
    $pane = new stdClass();
    $pane->pid = 'new-2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '150',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $display->content['new-2edbc3bb-c757-4817-9f75-b2f59fc565e7'] = $pane;
    $display->panels['left'][9] = 'new-2edbc3bb-c757-4817-9f75-b2f59fc565e7';
    $pane = new stdClass();
    $pane->pid = 'new-78294957-9ca2-43c4-85c0-8465feef0bad';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_annonce';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
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
      'template_suggestion' => 'entity-field',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '78294957-9ca2-43c4-85c0-8465feef0bad';
    $display->content['new-78294957-9ca2-43c4-85c0-8465feef0bad'] = $pane;
    $display->panels['left'][10] = 'new-78294957-9ca2-43c4-85c0-8465feef0bad';
    $pane = new stdClass();
    $pane->pid = 'new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $pane->panel = 'left';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
    $display->content['new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7'] = $pane;
    $display->panels['left'][11] = 'new-249434b2-4c43-4ec7-964d-6f9e3dc2ffc7';
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
    $pane->pid = 'new-276db23d-d292-4463-8b1e-1872e5d75b04';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'artikler-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'update',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '276db23d-d292-4463-8b1e-1872e5d75b04';
    $display->content['new-276db23d-d292-4463-8b1e-1872e5d75b04'] = $pane;
    $display->panels['right'][1] = 'new-276db23d-d292-4463-8b1e-1872e5d75b04';
    $pane = new stdClass();
    $pane->pid = 'new-bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'artikel_forfattere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Forfatter(e)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
      'template_suggestion' => 'views',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $display->content['new-bcb2c032-4fd8-478a-8dcf-6ef6781097af'] = $pane;
    $display->panels['right'][2] = 'new-bcb2c032-4fd8-478a-8dcf-6ef6781097af';
    $pane = new stdClass();
    $pane->pid = 'new-e18770f7-4d50-4896-b227-3707ad11ee23';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_medtaget_i_udgivelse';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'listevisningstor',
        'links' => 0,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Bragt i',
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
    $pane->uuid = 'e18770f7-4d50-4896-b227-3707ad11ee23';
    $display->content['new-e18770f7-4d50-4896-b227-3707ad11ee23'] = $pane;
    $display->panels['right'][3] = 'new-e18770f7-4d50-4896-b227-3707ad11ee23';
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
      'css_class' => ' ktc-aside-color ktc-aside-table-list',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2ca38209-69cc-490f-96ad-69c65fee0911';
    $display->content['new-2ca38209-69cc-490f-96ad-69c65fee0911'] = $pane;
    $display->panels['right'][4] = 'new-2ca38209-69cc-490f-96ad-69c65fee0911';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5d3cd6ae-0798-4424-adde-65658e409534';
    $display->content['new-5d3cd6ae-0798-4424-adde-65658e409534'] = $pane;
    $display->panels['right'][5] = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0566401b-a11f-4f00-b2c2-18a01be63ba3';
    $display->content['new-0566401b-a11f-4f00-b2c2-18a01be63ba3'] = $pane;
    $display->panels['right'][6] = 'new-0566401b-a11f-4f00-b2c2-18a01be63ba3';
    $pane = new stdClass();
    $pane->pid = 'new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'hs_taxonomy_term_reference_hierarchical_links',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
    $display->content['new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94'] = $pane;
    $display->panels['right'][7] = 'new-9f96e8c8-2ee1-4ac9-b5a4-edb87aa29f94';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_15'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'den her side',
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
    $pane->pid = 'new-31346af8-5739-4878-825d-d67c2511b06d';
    $pane->panel = 'bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sektionsside_footer';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '31346af8-5739-4878-825d-d67c2511b06d';
    $display->content['new-31346af8-5739-4878-825d-d67c2511b06d'] = $pane;
    $display->panels['bottom'][0] = 'new-31346af8-5739-4878-825d-d67c2511b06d';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7241e2e6-2d58-483f-b2fd-94941b79f416';
    $display->content['new-7241e2e6-2d58-483f-b2fd-94941b79f416'] = $pane;
    $display->panels['left'][0] = 'new-7241e2e6-2d58-483f-b2fd-94941b79f416';
    $pane = new stdClass();
    $pane->pid = 'new-55f39f03-e53d-4234-9ce0-79c5cf2af126';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-7';
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
      'css_class' => 'indholdsmenu',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '55f39f03-e53d-4234-9ce0-79c5cf2af126';
    $display->content['new-55f39f03-e53d-4234-9ce0-79c5cf2af126'] = $pane;
    $display->panels['left'][1] = 'new-55f39f03-e53d-4234-9ce0-79c5cf2af126';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
    $display->content['new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad'] = $pane;
    $display->panels['left'][2] = 'new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
    $pane = new stdClass();
    $pane->pid = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
    $pane->panel = 'left';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5d3cd6ae-0798-4424-adde-65658e409534';
    $display->content['new-5d3cd6ae-0798-4424-adde-65658e409534'] = $pane;
    $display->panels['left'][3] = 'new-5d3cd6ae-0798-4424-adde-65658e409534';
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
    $pane->uuid = 'ee946fb4-4482-4a9c-9c63-137149ee2658';
    $display->content['new-ee946fb4-4482-4a9c-9c63-137149ee2658'] = $pane;
    $display->panels['right'][0] = 'new-ee946fb4-4482-4a9c-9c63-137149ee2658';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0566401b-a11f-4f00-b2c2-18a01be63ba3';
    $display->content['new-0566401b-a11f-4f00-b2c2-18a01be63ba3'] = $pane;
    $display->panels['right'][1] = 'new-0566401b-a11f-4f00-b2c2-18a01be63ba3';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a3890995-a2f4-443b-8fd1-0c6a5a8b177a';
    $display->content['new-a3890995-a2f4-443b-8fd1-0c6a5a8b177a'] = $pane;
    $display->panels['right'][2] = 'new-a3890995-a2f4-443b-8fd1-0c6a5a8b177a';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2ca38209-69cc-490f-96ad-69c65fee0911';
    $display->content['new-2ca38209-69cc-490f-96ad-69c65fee0911'] = $pane;
    $display->panels['right'][3] = 'new-2ca38209-69cc-490f-96ad-69c65fee0911';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function teknik_og_miljoe_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'teknikmiljoe';
  $page->task = 'page';
  $page->admin_title = 'Teknik & Miljø';
  $page->admin_description = '';
  $page->path = 'teknikmiljoe';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Teknik & Miljø',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_teknikmiljoe_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'teknikmiljoe';
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
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = '36c741fb-5efa-45bc-b260-2289e2dffe59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8ec37730-e3c3-43ef-81f3-4bf29b5be743';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-magazine_page_block';
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
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ec37730-e3c3-43ef-81f3-4bf29b5be743';
    $display->content['new-8ec37730-e3c3-43ef-81f3-4bf29b5be743'] = $pane;
    $display->panels['left'][0] = 'new-8ec37730-e3c3-43ef-81f3-4bf29b5be743';
    $pane = new stdClass();
    $pane->pid = 'new-922b5576-1edd-468a-8dbb-14871afbabf3';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-netvaerk_content_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer på indholdstype',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'content_type',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '922b5576-1edd-468a-8dbb-14871afbabf3';
    $display->content['new-922b5576-1edd-468a-8dbb-14871afbabf3'] = $pane;
    $display->panels['right'][0] = 'new-922b5576-1edd-468a-8dbb-14871afbabf3';
    $pane = new stdClass();
    $pane->pid = 'new-33e08013-8f61-4ba6-b550-f6a1fd0b868c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-date_filter_on_magazine';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer på årgang/udgave',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'magazine-date-filter',
      'css_class' => 'filter-box ktc-aside-filter ktc-aside-filter-2-col ktc-aside-toggle',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '33e08013-8f61-4ba6-b550-f6a1fd0b868c';
    $display->content['new-33e08013-8f61-4ba6-b550-f6a1fd0b868c'] = $pane;
    $display->panels['right'][1] = 'new-33e08013-8f61-4ba6-b550-f6a1fd0b868c';
    $pane = new stdClass();
    $pane->pid = 'new-0b73e999-b21a-4246-b8f2-d77b69622962';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'TM medieinfobanner - 307x360',
      'title' => '',
      'body' => '<!--/*
  *
  * Revive Adserver Javascript Tag
  * - Generated with Revive Adserver v3.2.2
  *
  */--><!--/*
  * The backup image section of this tag has been generated for use on a
  * non-SSL page. If this tag is to be placed on an SSL page, change the
  *   \'http://revive.ktc.dk/www/delivery/...\'
  * to
  *   \'https://revive.ktc.dk/www/delivery/...\'
  *
  * This noscript section of this tag only shows image banners. There
  * is no width or height in these banners, so if you want these tags to
  * allocate space for the ad before it shows, you will need to add this
  * information to the <img> tag.
  *
  * If you do not want to deal with the intricities of the noscript
  * section, delete the tag (from <noscript>... to </noscript>). On
  * average, the noscript tag is called from less than 1% of internet
  * users.
  */--><script type=\'text/javascript\'><!--//<![CDATA[
   var m3_u = (location.protocol==\'https:\'?\'https://revive.ktc.dk/www/delivery/ajs.php\':\'http://revive.ktc.dk/www/delivery/ajs.php\');
   var m3_r = Math.floor(Math.random()*99999999999);
   if (!document.MAX_used) document.MAX_used = \',\';
   document.write ("<scr"+"ipt type=\'text/javascript\' src=\'"+m3_u);
   document.write ("?zoneid=18");
   document.write (\'&amp;cb=\' + m3_r);
   if (document.MAX_used != \',\') document.write ("&amp;exclude=" + document.MAX_used);
   document.write (document.charset ? \'&amp;charset=\'+document.charset : (document.characterSet ? \'&amp;charset=\'+document.characterSet : \'\'));
   document.write ("&amp;loc=" + escape(window.location));
   if (document.referrer) document.write ("&amp;referer=" + escape(document.referrer));
   if (document.context) document.write ("&context=" + escape(document.context));
   if (document.mmm_fo) document.write ("&amp;mmm_fo=1");
   document.write ("\'><\\/scr"+"ipt>");
//]]>--></script><noscript><a href=\'http://revive.ktc.dk/www/delivery/ck.php?n=a724c1ce&amp;cb=INSERT_RANDOM_NUMBER_HERE\' target=\'_blank\'><img src=\'http://revive.ktc.dk/www/delivery/avw.php?zoneid=18&amp;cb=INSERT_RANDOM_NUMBER_HERE&amp;n=a724c1ce\' border=\'0\' alt=\'\' /></a></noscript>
<p>&nbsp;</p>
<BR>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'nohtml',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0b73e999-b21a-4246-b8f2-d77b69622962';
    $display->content['new-0b73e999-b21a-4246-b8f2-d77b69622962'] = $pane;
    $display->panels['right'][2] = 'new-0b73e999-b21a-4246-b8f2-d77b69622962';
    $pane = new stdClass();
    $pane->pid = 'new-62bce034-9bf7-4c7c-8c8c-39dbb08eef8c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-10';
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
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '62bce034-9bf7-4c7c-8c8c-39dbb08eef8c';
    $display->content['new-62bce034-9bf7-4c7c-8c8c-39dbb08eef8c'] = $pane;
    $display->panels['right'][3] = 'new-62bce034-9bf7-4c7c-8c8c-39dbb08eef8c';
    $pane = new stdClass();
    $pane->pid = 'new-965c96a3-3ea6-434b-af9f-402dd6f705ff';
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
        'vid' => '34,19',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på artikeltype',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => 'ktc-aside-checkbox-filter',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $display->content['new-965c96a3-3ea6-434b-af9f-402dd6f705ff'] = $pane;
    $display->panels['right'][4] = 'new-965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $pane = new stdClass();
    $pane->pid = 'new-35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'tags',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $display->content['new-35218de2-66ce-4bd1-acbd-e9103ef9d846'] = $pane;
    $display->panels['right'][5] = 'new-35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $pane = new stdClass();
    $pane->pid = 'new-8235599d-8033-42a7-aeb7-42c724f3fc10';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'arguments' => array(
        'vid' => '4',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på faglige emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'emner',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8235599d-8033-42a7-aeb7-42c724f3fc10';
    $display->content['new-8235599d-8033-42a7-aeb7-42c724f3fc10'] = $pane;
    $display->panels['right'][6] = 'new-8235599d-8033-42a7-aeb7-42c724f3fc10';
    $pane = new stdClass();
    $pane->pid = 'new-3421213a-42d9-4959-a1c0-641fca8f8c89';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Forfattervejledning',
      'body' => '<p><a href="/user/2792">Hvordan gør man?</a></p>
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '3421213a-42d9-4959-a1c0-641fca8f8c89';
    $display->content['new-3421213a-42d9-4959-a1c0-641fca8f8c89'] = $pane;
    $display->panels['right'][7] = 'new-3421213a-42d9-4959-a1c0-641fca8f8c89';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['teknikmiljoe'] = $page;

  return $pages;

}
