<?php
/**
 * @file
 * ktc_section_panel_h_ring_og_nyheder.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_section_panel_h_ring_og_nyheder_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Nyheder',
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
              'os2web_base_news' => 'os2web_base_news',
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
    $pane->pid = 'new-8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $pane->panel = 'center';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $display->content['new-8353dbf5-8c49-4350-a2a0-f576015ff8b9'] = $pane;
    $display->panels['center'][0] = 'new-8353dbf5-8c49-4350-a2a0-f576015ff8b9';
    $pane = new stdClass();
    $pane->pid = 'new-90993fbc-57de-4987-b813-13d271a568cc';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_summary';
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
      'css_class' => 'lead',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '90993fbc-57de-4987-b813-13d271a568cc';
    $display->content['new-90993fbc-57de-4987-b813-13d271a568cc'] = $pane;
    $display->panels['center'][1] = 'new-90993fbc-57de-4987-b813-13d271a568cc';
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
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b377e18c-88fd-405d-ae35-dbb5592b67a9';
    $display->content['new-b377e18c-88fd-405d-ae35-dbb5592b67a9'] = $pane;
    $display->panels['center'][2] = 'new-b377e18c-88fd-405d-ae35-dbb5592b67a9';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '20f14952-1f76-419e-ab06-4bada6cf8447';
    $display->content['new-20f14952-1f76-419e-ab06-4bada6cf8447'] = $pane;
    $display->panels['center'][3] = 'new-20f14952-1f76-419e-ab06-4bada6cf8447';
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
      'template_suggestion' => 'content',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '023a351b-d90c-4e05-b3e9-7ebf28738193';
    $display->content['new-023a351b-d90c-4e05-b3e9-7ebf28738193'] = $pane;
    $display->panels['center'][4] = 'new-023a351b-d90c-4e05-b3e9-7ebf28738193';
    $pane = new stdClass();
    $pane->pid = 'new-8ae0c5ba-db5e-45d6-9560-7948908f7f75';
    $pane->panel = 'centertop';
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
    $pane->uuid = '8ae0c5ba-db5e-45d6-9560-7948908f7f75';
    $display->content['new-8ae0c5ba-db5e-45d6-9560-7948908f7f75'] = $pane;
    $display->panels['centertop'][0] = 'new-8ae0c5ba-db5e-45d6-9560-7948908f7f75';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'aside',
    );
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-block-aside pane-page-tabs',
      'template_suggestion' => 'aside',
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
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-block-aside panel-block-aside-color',
      'template_suggestion' => 'aside',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $display->content['new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8'] = $pane;
    $display->panels['right'][1] = 'new-eb2fb250-6b59-4e4e-a1d4-fb483a616fe8';
    $pane = new stdClass();
    $pane->pid = 'new-9cd75efb-1782-42c2-ab26-0e748ae89fba';
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
      'override_title' => 1,
      'override_title_text' => 'Eksterne links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-block-aside panel-block-aside-color',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9cd75efb-1782-42c2-ab26-0e748ae89fba';
    $display->content['new-9cd75efb-1782-42c2-ab26-0e748ae89fba'] = $pane;
    $display->panels['right'][2] = 'new-9cd75efb-1782-42c2-ab26-0e748ae89fba';
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
      'css_class' => 'panel-block-aside',
      'template_suggestion' => 'aside',
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
      'css_class' => 'panel-block-aside',
      'template_suggestion' => 'aside',
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
      'css_class' => 'panel-block-aside',
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
  $export['node_view_panel_context_10'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_section_panel_h_ring_og_nyheder_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hoeringer';
  $page->task = 'page';
  $page->admin_title = 'Høringer';
  $page->admin_description = '';
  $page->path = 'hoeringer';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Høringer',
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
  $handler->name = 'page_hoeringer_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hoeringer';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
  $display->uuid = 'da0043b1-428d-4faf-b96e-823d7b3eebbb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d68ba3d2-555b-4b93-bcb2-1b9d4697742f';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_hearings_sectionpage_block-panel_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action',
      'template_suggestion' => 'ikkesat',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd68ba3d2-555b-4b93-bcb2-1b9d4697742f';
    $display->content['new-d68ba3d2-555b-4b93-bcb2-1b9d4697742f'] = $pane;
    $display->panels['left'][0] = 'new-d68ba3d2-555b-4b93-bcb2-1b9d4697742f';
    $pane = new stdClass();
    $pane->pid = 'new-bacda143-d7ce-4d30-94ea-1f15399d0332';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-hearing_page_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bacda143-d7ce-4d30-94ea-1f15399d0332';
    $display->content['new-bacda143-d7ce-4d30-94ea-1f15399d0332'] = $pane;
    $display->panels['left'][1] = 'new-bacda143-d7ce-4d30-94ea-1f15399d0332';
    $pane = new stdClass();
    $pane->pid = 'new-901298b7-c235-44ad-b566-c6e66d3f0aa1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-custom_filter_on_hearing';
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
      'css_class' => 'filter-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '901298b7-c235-44ad-b566-c6e66d3f0aa1';
    $display->content['new-901298b7-c235-44ad-b566-c6e66d3f0aa1'] = $pane;
    $display->panels['right'][0] = 'new-901298b7-c235-44ad-b566-c6e66d3f0aa1';
    $pane = new stdClass();
    $pane->pid = 'new-2eab7d37-2f31-4a2a-bbc6-e106f003ed85';
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
        'vid' => '30',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2eab7d37-2f31-4a2a-bbc6-e106f003ed85';
    $display->content['new-2eab7d37-2f31-4a2a-bbc6-e106f003ed85'] = $pane;
    $display->panels['right'][1] = 'new-2eab7d37-2f31-4a2a-bbc6-e106f003ed85';
    $pane = new stdClass();
    $pane->pid = 'new-6d63a8fc-f80d-4c9e-bd4a-9d57fc117274';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = TRUE;
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
      'override_title_text' => 'Filtrer på emne',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'emner',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6d63a8fc-f80d-4c9e-bd4a-9d57fc117274';
    $display->content['new-6d63a8fc-f80d-4c9e-bd4a-9d57fc117274'] = $pane;
    $display->panels['right'][2] = 'new-6d63a8fc-f80d-4c9e-bd4a-9d57fc117274';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hoeringer'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nyheder';
  $page->task = 'page';
  $page->admin_title = 'Nyheder';
  $page->admin_description = '';
  $page->path = 'nyheder';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Nyheder',
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
  $handler->name = 'page_nyheder_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'nyheder';
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
    $pane->pid = 'new-5a393436-27fd-46b5-a545-de3571939ccf';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-section_default_content';
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
    $pane->uuid = '5a393436-27fd-46b5-a545-de3571939ccf';
    $display->content['new-5a393436-27fd-46b5-a545-de3571939ccf'] = $pane;
    $display->panels['left'][0] = 'new-5a393436-27fd-46b5-a545-de3571939ccf';
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
        'vid' => '19',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => '',
      'template_suggestion' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $display->content['new-965c96a3-3ea6-434b-af9f-402dd6f705ff'] = $pane;
    $display->panels['right'][0] = 'new-965c96a3-3ea6-434b-af9f-402dd6f705ff';
    $pane = new stdClass();
    $pane->pid = 'new-35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_2';
    $pane->shown = TRUE;
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
      'css_class' => '',
      'template_suggestion' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $display->content['new-35218de2-66ce-4bd1-acbd-e9103ef9d846'] = $pane;
    $display->panels['right'][1] = 'new-35218de2-66ce-4bd1-acbd-e9103ef9d846';
    $pane = new stdClass();
    $pane->pid = 'new-8235599d-8033-42a7-aeb7-42c724f3fc10';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = TRUE;
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
      'css_class' => '',
      'template_suggestion' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8235599d-8033-42a7-aeb7-42c724f3fc10';
    $display->content['new-8235599d-8033-42a7-aeb7-42c724f3fc10'] = $pane;
    $display->panels['right'][2] = 'new-8235599d-8033-42a7-aeb7-42c724f3fc10';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nyheder'] = $page;

  return $pages;

}
