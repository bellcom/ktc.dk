<?php
/**
 * @file
 * indholdsliste_m_filter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function indholdsliste_m_filter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'indhold_m_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indhold m filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'section-content-ajax';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_factbox_type']['id'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['table'] = 'field_data_field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['field'] = 'field_factbox_type';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['path'] = 'indholdsliste';

  /* Display: KTC sectionpage default */
  $handler = $view->new_display('panel_pane', 'KTC sectionpage default', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-s-6 col-xs-12 switch-elements';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Term types */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'Term types';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'dokument' => 'dokument',
    'hearing_type' => 'hearing_type',
    'meeting_type' => 'meeting_type',
    'netv_rkstype' => 'netv_rkstype',
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['vocabularies'] = array(
    'emner' => 'emner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: regioner */
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['id'] = 'term_node_tid_depth_3';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['ui_name'] = 'regioner';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['vocabularies'] = array(
    'regioner' => 'regioner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Gruppe/Netværk (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)- Emner (frie)',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth) Emner (fast)',
    ),
  );

  /* Display: Footer lister m filter */
  $handler = $view->new_display('panel_pane', 'Footer lister m filter', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisning';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
  );

  /* Display: one col */
  $handler = $view->new_display('panel_pane', 'one col', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'section-content-ajax row';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-12 col-s-12 col-xs-12 switch-elements';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'teasercomments';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Term types */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'Term types';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'dokument' => 'dokument',
    'hearing_type' => 'hearing_type',
    'meeting_type' => 'meeting_type',
    'netv_rkstype' => 'netv_rkstype',
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['vocabularies'] = array(
    'emner' => 'emner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: regioner */
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['id'] = 'term_node_tid_depth_3';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['ui_name'] = 'regioner';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['vocabularies'] = array(
    'regioner' => 'regioner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Gruppe/Netværk (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_doodle' => 'meeting_doodle',
    'arrangement' => 'arrangement',
    'forum_post' => 'forum_post',
    'document' => 'document',
    'hearing' => 'hearing',
    'os2web_base_news' => 'os2web_base_news',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)- Emner (frie)',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth) Emner (fast)',
    ),
    'term_node_tid_depth_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'regioner',
    ),
    'og_group_ref_target_id' => array(
      'type' => 'user',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Gruppe/Netværk (og_group_ref)',
    ),
  );

  /* Display: two cols */
  $handler = $view->new_display('panel_pane', 'two cols', 'panel_pane_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'section-content-ajax row';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'switch-elements masonry-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Term types */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'Term types';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'dokument' => 'dokument',
    'hearing_type' => 'hearing_type',
    'meeting_type' => 'meeting_type',
    'netv_rkstype' => 'netv_rkstype',
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['vocabularies'] = array(
    'emner' => 'emner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: regioner */
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['id'] = 'term_node_tid_depth_3';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['ui_name'] = 'regioner';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['vocabularies'] = array(
    'regioner' => 'regioner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_doodle' => 'meeting_doodle',
    'arrangement' => 'arrangement',
    'forum_post' => 'forum_post',
    'document' => 'document',
    'hearing' => 'hearing',
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filterkriterie: Indhold: Gruppe/Netværk (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['operator'] = 'not empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)- Emner (frie)',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth) Emner (fast)',
    ),
    'term_node_tid_depth_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'regioner',
    ),
    'og_group_ref_target_id' => array(
      'type' => 'user',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Gruppe/Netværk (og_group_ref)',
    ),
  );

  /* Display: hearing */
  $handler = $view->new_display('panel_pane', 'hearing', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'section-content-ajax row';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'switch-elements masonry-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Forfatter uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Status (field_status) */
  $handler->display->display_options['arguments']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['arguments']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['arguments']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['arguments']['field_status_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_status_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_status_tid']['validate_options']['vocabularies'] = array(
    'hearing_status' => 'hearing_status',
  );
  $handler->display->display_options['arguments']['field_status_tid']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Term types */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'Term types';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
    'hearing_type' => 'hearing_type',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hearing' => 'hearing',
  );
  $handler->display->display_options['pane_title'] = 'Hearing section view';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)- Emner (frie)',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth) Emner (fast)',
    ),
    'term_node_tid_depth_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'regioner',
    ),
    'og_group_ref_target_id' => array(
      'type' => 'user',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Gruppe/Netværk (og_group_ref)',
    ),
  );

  /* Display: two cols - artikler */
  $handler = $view->new_display('panel_pane', 'two cols - artikler', 'panel_pane_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'section-content-ajax row';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'switch-elements masonry-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Term types */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'Term types';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'dokument' => 'dokument',
    'hearing_type' => 'hearing_type',
    'meeting_type' => 'meeting_type',
    'netv_rkstype' => 'netv_rkstype',
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['vocabularies'] = array(
    'emner' => 'emner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: regioner */
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['id'] = 'term_node_tid_depth_3';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['ui_name'] = 'regioner';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['vocabularies'] = array(
    'regioner' => 'regioner',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Gruppe/Netværk (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikler' => 'artikler',
    'os2web_base_news' => 'os2web_base_news',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)- Emner (frie)',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth) Emner (fast)',
    ),
    'term_node_tid_depth_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'regioner',
    ),
    'og_group_ref_target_id' => array(
      'type' => 'user',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Gruppe/Netværk (og_group_ref)',
    ),
  );

  /* Display: two cols magazine */
  $handler = $view->new_display('panel_pane', 'two cols magazine', 'panel_pane_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'section-content-ajax row';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'switch-elements masonry-item masonry-item-width-[type]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_factbox_type']['id'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['table'] = 'field_data_field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['field'] = 'field_factbox_type';
  $handler->display->display_options['fields']['field_factbox_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_factbox_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Felt: Indhold: Rendered Indholdselement */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_label_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Term types */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'Term types';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'artikeltyper' => 'artikeltyper',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikler' => 'artikler',
    'os2web_base_news' => 'os2web_base_news',
    'magazine' => 'magazine',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Type',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)- Emner (frie)',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth) Emner (fast)',
    ),
    'term_node_tid_depth_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'regioner',
    ),
    'og_group_ref_target_id' => array(
      'type' => 'user',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Gruppe/Netværk (og_group_ref)',
    ),
  );
  $translatables['indhold_m_filter'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Type'),
    t('Alle'),
    t('Side'),
    t('KTC sectionpage default'),
    t('View panes'),
    t('Footer lister m filter'),
    t('one col'),
    t('two cols'),
    t('hearing'),
    t('Hearing section view'),
    t('two cols - artikler'),
    t('two cols magazine'),
  );
  $export['indhold_m_filter'] = $view;

  return $export;
}
