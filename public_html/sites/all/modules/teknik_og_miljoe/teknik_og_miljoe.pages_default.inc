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
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f00a5495-ce81-4cb7-810e-99247f8ff71c';
    $display->content['new-f00a5495-ce81-4cb7-810e-99247f8ff71c'] = $pane;
    $display->panels['left'][2] = 'new-f00a5495-ce81-4cb7-810e-99247f8ff71c';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8b48384f-8adc-45df-a98a-41673e5701fa';
    $display->content['new-8b48384f-8adc-45df-a98a-41673e5701fa'] = $pane;
    $display->panels['left'][3] = 'new-8b48384f-8adc-45df-a98a-41673e5701fa';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '88889270-5f54-41a0-965b-c7222bfa9da1';
    $display->content['new-88889270-5f54-41a0-965b-c7222bfa9da1'] = $pane;
    $display->panels['left'][4] = 'new-88889270-5f54-41a0-965b-c7222bfa9da1';
    $pane = new stdClass();
    $pane->pid = 'new-724a8346-03d9-4915-864c-617076ece4ac';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_artikel_afsnit';
    $pane->shown = TRUE;
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '724a8346-03d9-4915-864c-617076ece4ac';
    $display->content['new-724a8346-03d9-4915-864c-617076ece4ac'] = $pane;
    $display->panels['left'][5] = 'new-724a8346-03d9-4915-864c-617076ece4ac';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => ' pane-page-tabs ktc-aside-tabs ktc-aside-tabs-2-col ktc-aside-action',
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
      'override_title_text' => 'Forfattere',
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
    $pane->access = array();
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
    $pane->pid = 'new-bc4e7c5c-73b1-4e91-a1ef-71aa6e046d36';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_1';
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
      'css_class' => ' ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bc4e7c5c-73b1-4e91-a1ef-71aa6e046d36';
    $display->content['new-bc4e7c5c-73b1-4e91-a1ef-71aa6e046d36'] = $pane;
    $display->panels['right'][3] = 'new-bc4e7c5c-73b1-4e91-a1ef-71aa6e046d36';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function teknik_og_miljoe_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'teksnik_miljoe';
  $page->task = 'page';
  $page->admin_title = 'Teknik og Miljø';
  $page->admin_description = '';
  $page->path = 'teksnik-miljoe';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Teknik og Miljø',
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
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_teksnik_miljoe_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'teksnik_miljoe';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Teknik og Miljø';
  $display->uuid = 'fc8db645-71bb-4842-97da-cf780c863813';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['teksnik_miljoe'] = $page;

  return $pages;

}
