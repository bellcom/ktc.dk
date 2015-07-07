<?php
/**
 * @file
 * ktc_netvaerk.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ktc_netvaerk_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Netvaerk',
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
              'group' => 'group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
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
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8b19db21-bf99-47f2-82bd-fc5c89829235';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e1f48d19-844d-44be-9bad-1e75b747d0da';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'ktc_netvaerk-group-members';
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
    $pane->uuid = 'e1f48d19-844d-44be-9bad-1e75b747d0da';
    $display->content['new-e1f48d19-844d-44be-9bad-1e75b747d0da'] = $pane;
    $display->panels['bottom'][0] = 'new-e1f48d19-844d-44be-9bad-1e75b747d0da';
    $pane = new stdClass();
    $pane->pid = 'new-fc474105-d78f-4daa-ab05-18bcde73525b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'ktc_netvaerk-group-not-member-message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-dark',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc474105-d78f-4daa-ab05-18bcde73525b';
    $display->content['new-fc474105-d78f-4daa-ab05-18bcde73525b'] = $pane;
    $display->panels['center'][0] = 'new-fc474105-d78f-4daa-ab05-18bcde73525b';
    $pane = new stdClass();
    $pane->pid = 'new-8a58d50b-6dd4-440f-a1db-076cec0566b2';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'ktc_netvaerk-create-content';
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
      'css_class' => 'ktc-aside-action ktc-aside-link-list-3-col',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a58d50b-6dd4-440f-a1db-076cec0566b2';
    $display->content['new-8a58d50b-6dd4-440f-a1db-076cec0566b2'] = $pane;
    $display->panels['center'][1] = 'new-8a58d50b-6dd4-440f-a1db-076cec0566b2';
    $pane = new stdClass();
    $pane->pid = 'new-c2075e66-4122-4e9d-9d23-b7cc17d69f09';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'indhold_m_filter-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '20',
      'arguments' => array(
        'type' => 'os2web_base_news+document+hearing+forum_post+arrangement+meeting_doodle',
        'term_node_tid_depth_1' => 'all',
        'term_node_tid_depth' => 'all',
        'term_node_tid_depth_2' => 'all',
        'term_node_tid_depth_3' => 'all',
        'og_group_ref_target_id' => '%node:nid',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c2075e66-4122-4e9d-9d23-b7cc17d69f09';
    $display->content['new-c2075e66-4122-4e9d-9d23-b7cc17d69f09'] = $pane;
    $display->panels['center'][2] = 'new-c2075e66-4122-4e9d-9d23-b7cc17d69f09';
    $pane = new stdClass();
    $pane->pid = 'new-194ee512-8fdb-45b8-b9ca-001d01f96f82';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_members-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hide ktc-group-members',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '194ee512-8fdb-45b8-b9ca-001d01f96f82';
    $display->content['new-194ee512-8fdb-45b8-b9ca-001d01f96f82'] = $pane;
    $display->panels['center'][3] = 'new-194ee512-8fdb-45b8-b9ca-001d01f96f82';
    $pane = new stdClass();
    $pane->pid = 'new-b1af0b60-5713-4b11-8fec-9eb5b3eac946';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_full_node_field_displays-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color ktc-aside-no-stack',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1af0b60-5713-4b11-8fec-9eb5b3eac946';
    $display->content['new-b1af0b60-5713-4b11-8fec-9eb5b3eac946'] = $pane;
    $display->panels['left'][0] = 'new-b1af0b60-5713-4b11-8fec-9eb5b3eac946';
    $pane = new stdClass();
    $pane->pid = 'new-69eedfb2-c333-4fb7-9822-0c0f95673afb';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_groupimage';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'slideshow_image_style' => '',
        'slideshow_link' => '',
        'slideshow_caption' => '',
        'slideshow_caption_link' => '',
        'slideshow_fx' => 'fade',
        'slideshow_speed' => '1000',
        'slideshow_timeout' => '4000',
        'slideshow_order' => '',
        'slideshow_controls' => 0,
        'slideshow_controls_pause' => 0,
        'slideshow_controls_position' => 'after',
        'slideshow_pause' => 0,
        'slideshow_start_on_hover' => 0,
        'slideshow_pager' => '',
        'slideshow_pager_position' => 'after',
        'slideshow_pager_image_style' => '',
        'slideshow_carousel_image_style' => '',
        'slideshow_carousel_visible' => '3',
        'slideshow_carousel_scroll' => '1',
        'slideshow_carousel_speed' => '500',
        'slideshow_carousel_vertical' => 0,
        'slideshow_carousel_circular' => 0,
        'slideshow_carousel_follow' => 0,
        'slideshow_carousel_skin' => '',
        'image_style' => 'netvaerks_logo',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Netværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-full-width-image ktc-aside-color ktc-aside-no-stack',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69eedfb2-c333-4fb7-9822-0c0f95673afb';
    $display->content['new-69eedfb2-c333-4fb7-9822-0c0f95673afb'] = $pane;
    $display->panels['left'][1] = 'new-69eedfb2-c333-4fb7-9822-0c0f95673afb';
    $pane = new stdClass();
    $pane->pid = 'new-84c9f392-3e5f-4384-831f-49ea35b8c69f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-netvaerk_invite_links';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Logo',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col  ktc-aside-no-stack ktc-aside-no-inner-spacing',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '84c9f392-3e5f-4384-831f-49ea35b8c69f';
    $display->content['new-84c9f392-3e5f-4384-831f-49ea35b8c69f'] = $pane;
    $display->panels['left'][2] = 'new-84c9f392-3e5f-4384-831f-49ea35b8c69f';
    $pane = new stdClass();
    $pane->pid = 'new-52d66f60-15fb-424e-98c8-ffee6f933fd3';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
      'css_class' => ' ktc-aside-no-stack ktc-node-title-small ktc-node-title-light ktc-aside-half-inner-spacing ktc-padding-top-sm',
      'template_suggestion' => 'node_title',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '52d66f60-15fb-424e-98c8-ffee6f933fd3';
    $display->content['new-52d66f60-15fb-424e-98c8-ffee6f933fd3'] = $pane;
    $display->panels['left'][3] = 'new-52d66f60-15fb-424e-98c8-ffee6f933fd3';
    $pane = new stdClass();
    $pane->pid = 'new-4772cfee-5c44-4a17-ade4-2409b8379417';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
      'css_class' => 'toggle-pane-content',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4772cfee-5c44-4a17-ade4-2409b8379417';
    $display->content['new-4772cfee-5c44-4a17-ade4-2409b8379417'] = $pane;
    $display->panels['left'][4] = 'new-4772cfee-5c44-4a17-ade4-2409b8379417';
    $pane = new stdClass();
    $pane->pid = 'new-46b3adc9-8170-480a-a374-d98dfb09edff';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'subgroups-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'UnderNetværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-color',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '46b3adc9-8170-480a-a374-d98dfb09edff';
    $display->content['new-46b3adc9-8170-480a-a374-d98dfb09edff'] = $pane;
    $display->panels['left'][5] = 'new-46b3adc9-8170-480a-a374-d98dfb09edff';
    $pane = new stdClass();
    $pane->pid = 'new-08efd50f-eaa4-490e-ae91-0476a4194199';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_netvaerk-sidebar-group-admins';
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
      'css_class' => 'ktc-aside',
      'template_suggestion' => 'block',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '08efd50f-eaa4-490e-ae91-0476a4194199';
    $display->content['new-08efd50f-eaa4-490e-ae91-0476a4194199'] = $pane;
    $display->panels['left'][6] = 'new-08efd50f-eaa4-490e-ae91-0476a4194199';
    $pane = new stdClass();
    $pane->pid = 'new-e7bcd3e5-0fa0-4a4d-ad18-6ba946e7c6a1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ktc_netvaerk-sidebar-group-members';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e7bcd3e5-0fa0-4a4d-ad18-6ba946e7c6a1';
    $display->content['new-e7bcd3e5-0fa0-4a4d-ad18-6ba946e7c6a1'] = $pane;
    $display->panels['left'][7] = 'new-e7bcd3e5-0fa0-4a4d-ad18-6ba946e7c6a1';
    $pane = new stdClass();
    $pane->pid = 'new-b6f26677-5782-4ef8-800c-9ebfb7fb8497';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'edit-tabs',
      'override_title' => 1,
      'override_title_text' => 'Rediger',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ktc-aside-action ktc-aside-tabs ktc-aside-tabs-2-col',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6f26677-5782-4ef8-800c-9ebfb7fb8497';
    $display->content['new-b6f26677-5782-4ef8-800c-9ebfb7fb8497'] = $pane;
    $display->panels['right'][0] = 'new-b6f26677-5782-4ef8-800c-9ebfb7fb8497';
    $pane = new stdClass();
    $pane->pid = 'new-7d657bce-e67d-45d8-a446-c63432531bc6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-netvaerk_content_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer på indhold',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'content_type',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d657bce-e67d-45d8-a446-c63432531bc6';
    $display->content['new-7d657bce-e67d-45d8-a446-c63432531bc6'] = $pane;
    $display->panels['right'][1] = 'new-7d657bce-e67d-45d8-a446-c63432531bc6';
    $pane = new stdClass();
    $pane->pid = 'new-6d7c5aa8-a32f-4342-acf5-16ff47e29f49';
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
        'vid' => '10',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dokumenttype',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'term_type',
      'css_class' => 'ktc-aside-checkbox-filter ktc-aside-toggle',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6d7c5aa8-a32f-4342-acf5-16ff47e29f49';
    $display->content['new-6d7c5aa8-a32f-4342-acf5-16ff47e29f49'] = $pane;
    $display->panels['right'][2] = 'new-6d7c5aa8-a32f-4342-acf5-16ff47e29f49';
    $pane = new stdClass();
    $pane->pid = 'new-48c40320-de83-4c7a-94d1-ebdb120fe697';
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
      'css_class' => 'ktc-aside-checkbox-filter ktc-aside-toggle',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '48c40320-de83-4c7a-94d1-ebdb120fe697';
    $display->content['new-48c40320-de83-4c7a-94d1-ebdb120fe697'] = $pane;
    $display->panels['right'][3] = 'new-48c40320-de83-4c7a-94d1-ebdb120fe697';
    $pane = new stdClass();
    $pane->pid = 'new-432c93cb-91e2-4f95-a1e1-827cf78be611';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '%node:nid',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'content_id',
      'css_class' => 'hidden',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '432c93cb-91e2-4f95-a1e1-827cf78be611';
    $display->content['new-432c93cb-91e2-4f95-a1e1-827cf78be611'] = $pane;
    $display->panels['right'][4] = 'new-432c93cb-91e2-4f95-a1e1-827cf78be611';
    $pane = new stdClass();
    $pane->pid = 'new-63dd3165-b724-4f8e-b8b0-2b339fd5d462';
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
    $pane->uuid = '63dd3165-b724-4f8e-b8b0-2b339fd5d462';
    $display->content['new-63dd3165-b724-4f8e-b8b0-2b339fd5d462'] = $pane;
    $display->panels['right'][5] = 'new-63dd3165-b724-4f8e-b8b0-2b339fd5d462';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ktc_netvaerk_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'netvaerk';
  $page->task = 'page';
  $page->admin_title = 'Netværk';
  $page->admin_description = '';
  $page->path = 'netvaerk';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Netværk',
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
  $handler->name = 'page_netvaerk_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'netvaerk';
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
  $display->title = 'Netværk';
  $display->uuid = 'a4843727-2a83-4e66-af34-80abdd646f84';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa007e67-f170-4084-a1f9-6341dc668521';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter_extra-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Alle Netværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'section-page-with-filter-all-groups',
      'css_class' => 'ktc-aside-dark ktc-aside-link-list-2-col',
      'template_suggestion' => 'ikkesat',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa007e67-f170-4084-a1f9-6341dc668521';
    $display->content['new-fa007e67-f170-4084-a1f9-6341dc668521'] = $pane;
    $display->panels['left'][0] = 'new-fa007e67-f170-4084-a1f9-6341dc668521';
    $pane = new stdClass();
    $pane->pid = 'new-d74d4c00-3b60-4ef8-afce-e543d8bd0f3a';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd74d4c00-3b60-4ef8-afce-e543d8bd0f3a';
    $display->content['new-d74d4c00-3b60-4ef8-afce-e543d8bd0f3a'] = $pane;
    $display->panels['left'][1] = 'new-d74d4c00-3b60-4ef8-afce-e543d8bd0f3a';
    $pane = new stdClass();
    $pane->pid = 'new-71d180bd-301f-436e-a2e5-ad4589321508';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ktc_og_user_groups-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
      'override_title' => 1,
      'override_title_text' => 'Netværk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'groups',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-3-col',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71d180bd-301f-436e-a2e5-ad4589321508';
    $display->content['new-71d180bd-301f-436e-a2e5-ad4589321508'] = $pane;
    $display->panels['right'][0] = 'new-71d180bd-301f-436e-a2e5-ad4589321508';
    $pane = new stdClass();
    $pane->pid = 'new-7d2759b3-3594-4b62-bdce-ce25829d0e76';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ktc_sectionpage-netvaerk_content_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer på type',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d2759b3-3594-4b62-bdce-ce25829d0e76';
    $display->content['new-7d2759b3-3594-4b62-bdce-ce25829d0e76'] = $pane;
    $display->panels['right'][1] = 'new-7d2759b3-3594-4b62-bdce-ce25829d0e76';
    $pane = new stdClass();
    $pane->pid = 'new-7a795114-b3b8-469b-b134-d29e5edb9f3f';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'offset' => '0',
      'arguments' => array(
        'vid' => '4',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'emner',
      'css_class' => 'ktc-aside-checkbox-filter',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7a795114-b3b8-469b-b134-d29e5edb9f3f';
    $display->content['new-7a795114-b3b8-469b-b134-d29e5edb9f3f'] = $pane;
    $display->panels['right'][2] = 'new-7a795114-b3b8-469b-b134-d29e5edb9f3f';
    $pane = new stdClass();
    $pane->pid = 'new-bde1ec35-344e-4376-8dd8-fc5bcb421a1e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'offset' => '0',
      'arguments' => array(
        'vid' => '11',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på netværkstyper',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bde1ec35-344e-4376-8dd8-fc5bcb421a1e';
    $display->content['new-bde1ec35-344e-4376-8dd8-fc5bcb421a1e'] = $pane;
    $display->panels['right'][3] = 'new-bde1ec35-344e-4376-8dd8-fc5bcb421a1e';
    $pane = new stdClass();
    $pane->pid = 'new-4a5bbdb0-e94c-4d85-b903-10cdff053bcc';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_filter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'offset' => '0',
      'arguments' => array(
        'vid' => '2',
      ),
      'override_title' => 1,
      'override_title_text' => 'Filtrer på regioner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'regioner',
      'css_class' => 'ktc-aside-filter ktc-aside-filter-2-col',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4a5bbdb0-e94c-4d85-b903-10cdff053bcc';
    $display->content['new-4a5bbdb0-e94c-4d85-b903-10cdff053bcc'] = $pane;
    $display->panels['right'][4] = 'new-4a5bbdb0-e94c-4d85-b903-10cdff053bcc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['netvaerk'] = $page;

  return $pages;

}
