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
  $handler->weight = 0;
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
  $page->access = array();
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
