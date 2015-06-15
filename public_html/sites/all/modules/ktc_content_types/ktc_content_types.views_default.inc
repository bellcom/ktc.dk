<?php
/**
 * @file
 * ktc_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ktc_content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ktc_full_node_field_displays';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KTC Full Node field displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Logo */
  $handler->display->display_options['fields']['field_arrangement_logo']['id'] = 'field_arrangement_logo';
  $handler->display->display_options['fields']['field_arrangement_logo']['table'] = 'field_data_field_arrangement_logo';
  $handler->display->display_options['fields']['field_arrangement_logo']['field'] = 'field_arrangement_logo';
  $handler->display->display_options['fields']['field_arrangement_logo']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_logo']['empty'] = '<span class="content-type-logo"></span>';
  $handler->display->display_options['fields']['field_arrangement_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_arrangement_logo']['settings'] = array(
    'image_style' => 'netvaerks_logo',
    'image_link' => '',
  );
  /* Felt: Indhold: Gruppe/Netværk */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'h4';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Felt: Bruger: Rendered Bruger */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'list3';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Forfatter */
  $handler = $view->new_display('panel_pane', 'Forfatter', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forfatter';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_og_group_ref_node']['id'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['relationships']['reverse_og_group_ref_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_og_group_ref_node']['field'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Rendered Bruger */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'list4';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'KTC Nodevisninger';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Titel, type og type */
  $handler = $view->new_display('panel_pane', 'Titel, type og type', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ktc-node-header';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'ktc-node-header-button ktc-node-header-button-[type_1]';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Arrangementstype */
  $handler->display->display_options['fields']['field_arrangement_type']['id'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['table'] = 'field_data_field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['field'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_type']['alter']['text'] = '- [field_arrangement_type]';
  $handler->display->display_options['fields']['field_arrangement_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_arrangement_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_arrangement_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Artikeltype */
  $handler->display->display_options['fields']['field_artikeltype']['id'] = 'field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['table'] = 'field_data_field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['field'] = 'field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['label'] = '';
  $handler->display->display_options['fields']['field_artikeltype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_artikeltype']['alter']['text'] = '- [field_artikeltype]';
  $handler->display->display_options['fields']['field_artikeltype']['element_type'] = '0';
  $handler->display->display_options['fields']['field_artikeltype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikeltype']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_artikeltype']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_artikeltype']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_artikeltype']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_artikeltype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Dokumenttype */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_document_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['delta_offset'] = '0';
  /* Felt: Indhold: Høringssvar type */
  $handler->display->display_options['fields']['field_hearing_response_type']['id'] = 'field_hearing_response_type';
  $handler->display->display_options['fields']['field_hearing_response_type']['table'] = 'field_data_field_hearing_response_type';
  $handler->display->display_options['fields']['field_hearing_response_type']['field'] = 'field_hearing_response_type';
  $handler->display->display_options['fields']['field_hearing_response_type']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_response_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Høringstype */
  $handler->display->display_options['fields']['field_hearing_type']['id'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['table'] = 'field_data_field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['field'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Mødetype */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['text'] = '- [field_meeting_type]';
  $handler->display->display_options['fields']['field_meeting_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_meeting_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_meeting_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Netværkstype */
  $handler->display->display_options['fields']['field_netvaerkstype']['id'] = 'field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['table'] = 'field_data_field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['field'] = 'field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['label'] = '';
  $handler->display->display_options['fields']['field_netvaerkstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_netvaerkstype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['text'] = '- [field_os2web_news_page_type]';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Produkt type */
  $handler->display->display_options['fields']['field_product_type']['id'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['fields']['field_product_type']['field'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['label'] = '';
  $handler->display->display_options['fields']['field_product_type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_factbox_type']['id'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['table'] = 'field_data_field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['field'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['label'] = '';
  $handler->display->display_options['fields']['field_factbox_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_factbox_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Kommentarantal */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_type'] = '0';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'ktc-node-header-button ktc-node-header-button-comment pull-right';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = ' ';
  /* Felt: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['element_type'] = '0';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_wrapper_class'] = 'ktc-node-header-button ktc-node-header-button-viewers pull-right';
  $handler->display->display_options['fields']['totalcount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['separator'] = ' ';
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Pladser, tid og pris */
  $handler = $view->new_display('panel_pane', 'Pladser, tid og pris', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Signup: Indholdselement */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Signup: Signup Limit */
  $handler->display->display_options['fields']['close_signup_limit']['id'] = 'close_signup_limit';
  $handler->display->display_options['fields']['close_signup_limit']['table'] = 'signup';
  $handler->display->display_options['fields']['close_signup_limit']['field'] = 'close_signup_limit';
  $handler->display->display_options['fields']['close_signup_limit']['relationship'] = 'nid';
  $handler->display->display_options['fields']['close_signup_limit']['label'] = '';
  $handler->display->display_options['fields']['close_signup_limit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['close_signup_limit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['close_signup_limit']['alter']['text'] = '/[close_signup_limit]';
  $handler->display->display_options['fields']['close_signup_limit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['close_signup_limit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['close_signup_limit']['empty_zero'] = TRUE;
  /* Felt: Indhold: Antal pladser */
  $handler->display->display_options['fields']['field_event_seats']['id'] = 'field_event_seats';
  $handler->display->display_options['fields']['field_event_seats']['table'] = 'field_data_field_event_seats';
  $handler->display->display_options['fields']['field_event_seats']['field'] = 'field_event_seats';
  $handler->display->display_options['fields']['field_event_seats']['label'] = 'Pladser';
  $handler->display->display_options['fields']['field_event_seats']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_event_seats']['element_class'] = 'ktc-node-title-light';
  $handler->display->display_options['fields']['field_event_seats']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_event_seats']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_seats']['element_wrapper_class'] = 'col-md-4 col-sm-6 col-xs-6';
  $handler->display->display_options['fields']['field_event_seats']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_seats']['empty'] = 'Ingen grænse';
  $handler->display->display_options['fields']['field_event_seats']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date']['id'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['label'] = 'Tid';
  $handler->display->display_options['fields']['field_arrangement_date']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_arrangement_date']['element_class'] = 'ktc-node-title-light';
  $handler->display->display_options['fields']['field_arrangement_date']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_arrangement_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_arrangement_date']['element_wrapper_class'] = 'col-md-4 col-sm-6 col-xs-6';
  $handler->display->display_options['fields']['field_arrangement_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['settings'] = array(
    'format_type' => 'klokkeslet',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Pris (inkl./ ekskl. moms) */
  $handler->display->display_options['fields']['field_arrangement_price']['id'] = 'field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['table'] = 'field_data_field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['field'] = 'field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['label'] = 'Pris';
  $handler->display->display_options['fields']['field_arrangement_price']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_arrangement_price']['element_class'] = 'ktc-node-title-light';
  $handler->display->display_options['fields']['field_arrangement_price']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_arrangement_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_arrangement_price']['element_wrapper_class'] = 'col-md-4 col-xs-6';
  $handler->display->display_options['fields']['field_arrangement_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Målgruppe */
  $handler = $view->new_display('panel_pane', 'Målgruppe', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Signup: Indholdselement */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Målgruppe */
  $handler->display->display_options['fields']['field_target_group']['id'] = 'field_target_group';
  $handler->display->display_options['fields']['field_target_group']['table'] = 'field_data_field_target_group';
  $handler->display->display_options['fields']['field_target_group']['field'] = 'field_target_group';
  $handler->display->display_options['fields']['field_target_group']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_target_group']['element_class'] = 'large-text';
  $handler->display->display_options['fields']['field_target_group']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_target_group']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_target_group']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Kort og adresse */
  $handler = $view->new_display('panel_pane', 'Kort og adresse', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adresse';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_arrangement_address_1']['id'] = 'field_arrangement_address_1';
  $handler->display->display_options['fields']['field_arrangement_address_1']['table'] = 'field_data_field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address_1']['field'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_address_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_arrangement_address_1']['element_wrapper_class'] = 'ktc-full-width-image';
  $handler->display->display_options['fields']['field_arrangement_address_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_address_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_address_1']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_arrangement_address_1']['settings'] = array(
    'include_map' => 0,
    'include_static_map' => 1,
    'iframe_width' => '220',
    'iframe_height' => '120',
    'include_link' => 0,
    'link_text' => 'Kørselsvejledning',
    'zoom_level' => '14',
    'information_bubble' => 0,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'da',
  );
  /* Felt: Indhold: Afholdelsessted */
  $handler->display->display_options['fields']['field_arrangement_location']['id'] = 'field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['table'] = 'field_data_field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['field'] = 'field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_location']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_arrangement_address']['id'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['table'] = 'field_data_field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['field'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_address']['alter']['text'] = '<p>[field_arrangement_location]</p>
<p>[field_arrangement_address]</p>';
  $handler->display->display_options['fields']['field_arrangement_address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_arrangement_address']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_arrangement_address_2']['id'] = 'field_arrangement_address_2';
  $handler->display->display_options['fields']['field_arrangement_address_2']['table'] = 'field_data_field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address_2']['field'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_address_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_arrangement_address_2']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['field_arrangement_address_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_address_2']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_arrangement_address_2']['settings'] = array(
    'include_map' => 0,
    'include_static_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'Kørselsvejledning',
    'zoom_level' => '14',
    'information_bubble' => 0,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'da',
  );
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Logo og netværksnavn */
  $handler = $view->new_display('panel_pane', 'Logo og netværksnavn', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Logo og netværksnavn';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Forbindelse: OG membership: Group Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Logo */
  $handler->display->display_options['fields']['field_groupimage']['id'] = 'field_groupimage';
  $handler->display->display_options['fields']['field_groupimage']['table'] = 'field_data_field_groupimage';
  $handler->display->display_options['fields']['field_groupimage']['field'] = 'field_groupimage';
  $handler->display->display_options['fields']['field_groupimage']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_groupimage']['label'] = '';
  $handler->display->display_options['fields']['field_groupimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_groupimage']['empty'] = '<div class="ktc-logo"><div class="ktc-logo-image"><span class="content-type-logo"></span></div>  </div>';
  $handler->display->display_options['fields']['field_groupimage']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_groupimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_groupimage']['settings'] = array(
    'image_style' => 'netvaerks_logo',
    'image_link' => '',
  );
  /* Felt: Indhold: Gruppe/Netværk */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'h3';
  $handler->display->display_options['fields']['og_group_ref']['element_class'] = 'ktc-node-title-small ktc-node-title-light';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Felt: Bruger: Rendered Bruger */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Oprettet af';
  $handler->display->display_options['fields']['rendered_entity']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['rendered_entity']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'list3';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'KTC Nodevisninger';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Logo på Netværk */
  $handler = $view->new_display('panel_pane', 'Logo på Netværk', 'panel_pane_7');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Logo */
  $handler->display->display_options['fields']['field_arrangement_logo']['id'] = 'field_arrangement_logo';
  $handler->display->display_options['fields']['field_arrangement_logo']['table'] = 'field_data_field_arrangement_logo';
  $handler->display->display_options['fields']['field_arrangement_logo']['field'] = 'field_arrangement_logo';
  $handler->display->display_options['fields']['field_arrangement_logo']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_logo']['empty'] = '<div class="ktc-logo"><div class="ktc-logo-image"><span class="content-type-logo"></span></div>  </div>';
  $handler->display->display_options['fields']['field_arrangement_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_arrangement_logo']['settings'] = array(
    'image_style' => 'netvaerks_logo',
    'image_link' => '',
  );
  $handler->display->display_options['pane_category']['name'] = 'KTC Nodevisninger';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Titel, type og type - uden Addthis */
  $handler = $view->new_display('panel_pane', 'Titel, type og type - uden Addthis', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ktc-node-header';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'ktc-node-header-button ktc-node-header-button-[type_1]';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Arrangementstype */
  $handler->display->display_options['fields']['field_arrangement_type']['id'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['table'] = 'field_data_field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['field'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_type']['alter']['text'] = '- [field_arrangement_type]';
  $handler->display->display_options['fields']['field_arrangement_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_arrangement_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_arrangement_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Artikeltype */
  $handler->display->display_options['fields']['field_artikeltype']['id'] = 'field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['table'] = 'field_data_field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['field'] = 'field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['label'] = '';
  $handler->display->display_options['fields']['field_artikeltype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_artikeltype']['alter']['text'] = '- [field_artikeltype]';
  $handler->display->display_options['fields']['field_artikeltype']['element_type'] = '0';
  $handler->display->display_options['fields']['field_artikeltype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikeltype']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_artikeltype']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_artikeltype']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_artikeltype']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_artikeltype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Dokumenttype */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_document_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['delta_offset'] = '0';
  /* Felt: Indhold: Høringssvar type */
  $handler->display->display_options['fields']['field_hearing_response_type']['id'] = 'field_hearing_response_type';
  $handler->display->display_options['fields']['field_hearing_response_type']['table'] = 'field_data_field_hearing_response_type';
  $handler->display->display_options['fields']['field_hearing_response_type']['field'] = 'field_hearing_response_type';
  $handler->display->display_options['fields']['field_hearing_response_type']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_response_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_hearing_response_type']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Høringstype */
  $handler->display->display_options['fields']['field_hearing_type']['id'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['table'] = 'field_data_field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['field'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Mødetype */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['text'] = '- [field_meeting_type]';
  $handler->display->display_options['fields']['field_meeting_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_meeting_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_meeting_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Netværkstype */
  $handler->display->display_options['fields']['field_netvaerkstype']['id'] = 'field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['table'] = 'field_data_field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['field'] = 'field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['label'] = '';
  $handler->display->display_options['fields']['field_netvaerkstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_netvaerkstype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['text'] = '- [field_os2web_news_page_type]';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_wrapper_class'] = 'ktc-node-header-button';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Produkt type */
  $handler->display->display_options['fields']['field_product_type']['id'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['fields']['field_product_type']['field'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['label'] = '';
  $handler->display->display_options['fields']['field_product_type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_factbox_type']['id'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['table'] = 'field_data_field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['field'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['label'] = '';
  $handler->display->display_options['fields']['field_factbox_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_factbox_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Kommentarantal */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_type'] = '0';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'ktc-node-header-button ktc-node-header-button-comment pull-right';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = ' ';
  /* Felt: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['element_type'] = '0';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['totalcount']['element_wrapper_class'] = 'ktc-node-header-button ktc-node-header-button-viewers pull-right';
  $handler->display->display_options['fields']['totalcount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['separator'] = ' ';
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Flere billeder - galleri */
  $handler = $view->new_display('panel_pane', 'Flere billeder - galleri', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Flere billeder */
  $handler->display->display_options['fields']['field_flere_billeder']['id'] = 'field_flere_billeder';
  $handler->display->display_options['fields']['field_flere_billeder']['table'] = 'field_data_field_flere_billeder';
  $handler->display->display_options['fields']['field_flere_billeder']['field'] = 'field_flere_billeder';
  $handler->display->display_options['fields']['field_flere_billeder']['label'] = '';
  $handler->display->display_options['fields']['field_flere_billeder']['element_type'] = '0';
  $handler->display->display_options['fields']['field_flere_billeder']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_flere_billeder']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flere_billeder']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_flere_billeder']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_flere_billeder']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flere_billeder']['type'] = 'photoswipe';
  $handler->display->display_options['fields']['field_flere_billeder']['settings'] = array(
    'photoswipe_node_style' => 'ktc_galleri_miniature',
    'photoswipe_image_style' => '',
  );
  $handler->display->display_options['fields']['field_flere_billeder']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_flere_billeder']['separator'] = '';
  $translatables['ktc_full_node_field_displays'] = array(
    t('Master'),
    t('Logo'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('forfatter'),
    t('<span class="content-type-logo"></span>'),
    t('Alle'),
    t('Forfatter'),
    t('Indhold refererer til Indhold fra og_group_ref'),
    t('KTC Nodevisninger'),
    t('Titel, type og type'),
    t('- [field_arrangement_type]'),
    t('- [field_artikeltype]'),
    t('- [field_meeting_type]'),
    t('- [field_os2web_news_page_type]'),
    t('.'),
    t(' '),
    t('KTC'),
    t('Pladser, tid og pris'),
    t('Signup node'),
    t('/[close_signup_limit]'),
    t('Pladser'),
    t('Ingen grænse'),
    t('Tid'),
    t('Pris'),
    t('Målgruppe'),
    t('Kort og adresse'),
    t('Adresse'),
    t('<p>[field_arrangement_location]</p>
<p>[field_arrangement_address]</p>'),
    t('Logo og netværksnavn'),
    t('Group node from OG membership'),
    t('<div class="ktc-logo"><div class="ktc-logo-image"><span class="content-type-logo"></span></div>  </div>'),
    t('Oprettet af'),
    t('Logo på Netværk'),
    t('Titel, type og type - uden Addthis'),
    t('Flere billeder - galleri'),
    t('View panes'),
  );
  $export['ktc_full_node_field_displays'] = $view;

  return $export;
}
