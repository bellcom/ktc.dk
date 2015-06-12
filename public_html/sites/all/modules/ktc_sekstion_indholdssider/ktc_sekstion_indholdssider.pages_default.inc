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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'content',
    );
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
    $display->content['new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad'] = $pane;
    $display->panels['left'][1] = 'new-a2f025a7-ba0d-493b-8b7e-b80f969cf3ad';
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
