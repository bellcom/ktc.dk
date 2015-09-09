<?php
/**
 * @file
 * ktc_hearing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ktc_hearing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'haering_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Høringssvar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Endeligt høringssvar';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Høring (field_hearing_node) */
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['id'] = 'field_hearing_node_target_id';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['table'] = 'field_data_field_hearing_node';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['field'] = 'field_hearing_node_target_id';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hearing_responses' => 'hearing_responses',
  );
  /* Filterkriterie: Indhold: Endeligt svar (field_is_final) */
  $handler->display->display_options['filters']['field_is_final_value']['id'] = 'field_is_final_value';
  $handler->display->display_options['filters']['field_is_final_value']['table'] = 'field_data_field_is_final';
  $handler->display->display_options['filters']['field_is_final_value']['field'] = 'field_is_final_value';
  $handler->display->display_options['filters']['field_is_final_value']['value'] = array(
    1 => '1',
  );

  /* Display: Endeligt svar */
  $handler = $view->new_display('panel_pane', 'Endeligt svar', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_hearing_node_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Høring (field_hearing_node)',
    ),
  );

  /* Display: Svar */
  $handler = $view->new_display('panel_pane', 'Svar', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Indsendte høringssvar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hearing_responses' => 'hearing_responses',
  );
  /* Filterkriterie: Indhold: Endeligt svar (field_is_final) */
  $handler->display->display_options['filters']['field_is_final_value']['id'] = 'field_is_final_value';
  $handler->display->display_options['filters']['field_is_final_value']['table'] = 'field_data_field_is_final';
  $handler->display->display_options['filters']['field_is_final_value']['field'] = 'field_is_final_value';
  $handler->display->display_options['filters']['field_is_final_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_final_value']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: Indhold: Har ikke svaret (field_is_no_answer) */
  $handler->display->display_options['filters']['field_is_no_answer_value']['id'] = 'field_is_no_answer_value';
  $handler->display->display_options['filters']['field_is_no_answer_value']['table'] = 'field_data_field_is_no_answer';
  $handler->display->display_options['filters']['field_is_no_answer_value']['field'] = 'field_is_no_answer_value';
  $handler->display->display_options['filters']['field_is_no_answer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_no_answer_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_hearing_node_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Høring (field_hearing_node)',
    ),
  );
  $translatables['haering_answers'] = array(
    t('Master'),
    t('Endeligt høringssvar'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Endeligt svar'),
    t('View panes'),
    t('Svar'),
    t('Indsendte høringssvar'),
  );
  $export['haering_answers'] = $view;

  $view = new view();
  $view->name = 'hearing_node_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Høring node view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Høring node view';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Høringstype */
  $handler->display->display_options['fields']['field_hearing_type']['id'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['table'] = 'field_data_field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['field'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_type']['alter']['text'] = 'Høringstype: [field_hearing_type]';
  $handler->display->display_options['fields']['field_hearing_type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel lang */
  $handler->display->display_options['fields']['field_titel_lang']['id'] = 'field_titel_lang';
  $handler->display->display_options['fields']['field_titel_lang']['table'] = 'field_data_field_titel_lang';
  $handler->display->display_options['fields']['field_titel_lang']['field'] = 'field_titel_lang';
  $handler->display->display_options['fields']['field_titel_lang']['label'] = '';
  $handler->display->display_options['fields']['field_titel_lang']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_titel_lang']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = 'Status: [field_status]';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Myndighed */
  $handler->display->display_options['fields']['field_hearing_authority']['id'] = 'field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['table'] = 'field_data_field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['field'] = 'field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_authority']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_authority']['alter']['text'] = 'Myndighed: [field_hearing_authority]';
  $handler->display->display_options['fields']['field_hearing_authority']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Besked til faggruppen */
  $handler->display->display_options['fields']['field_message']['id'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['table'] = 'field_data_field_message';
  $handler->display->display_options['fields']['field_message']['field'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hearing' => 'hearing',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_class'] = 'ktc-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Indhold: Høringstype */
  $handler->display->display_options['fields']['field_hearing_type']['id'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['table'] = 'field_data_field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['field'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_type']['alter']['text'] = 'Høringstype: [field_hearing_type]';
  $handler->display->display_options['fields']['field_hearing_type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel lang */
  $handler->display->display_options['fields']['field_titel_lang']['id'] = 'field_titel_lang';
  $handler->display->display_options['fields']['field_titel_lang']['table'] = 'field_data_field_titel_lang';
  $handler->display->display_options['fields']['field_titel_lang']['field'] = 'field_titel_lang';
  $handler->display->display_options['fields']['field_titel_lang']['label'] = '';
  $handler->display->display_options['fields']['field_titel_lang']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_titel_lang']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['alter']['text'] = 'Status: [field_status]';
  $handler->display->display_options['fields']['field_status']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_status']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_status']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Link til KL høringssvar */
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['id'] = 'field_link_kl_hoeringssvar';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['table'] = 'field_data_field_link_kl_hoeringssvar';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['field'] = 'field_link_kl_hoeringssvar';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_kl_hoeringssvar']['click_sort_column'] = 'url';
  /* Felt: Indhold: Myndighed */
  $handler->display->display_options['fields']['field_hearing_authority']['id'] = 'field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['table'] = 'field_data_field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['field'] = 'field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_authority']['alter']['text'] = '[field_hearing_authority]';
  $handler->display->display_options['fields']['field_hearing_authority']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_hearing_authority']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_hearing_authority']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_hearing_authority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_authority']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_hearing_authority']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Officiel udsendelsesdato */
  $handler->display->display_options['fields']['field_official_date']['id'] = 'field_official_date';
  $handler->display->display_options['fields']['field_official_date']['table'] = 'field_data_field_official_date';
  $handler->display->display_options['fields']['field_official_date']['field'] = 'field_official_date';
  $handler->display->display_options['fields']['field_official_date']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_official_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_official_date']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_official_date']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_official_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_official_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: KTC høringsfrist */
  $handler->display->display_options['fields']['field_enrollment_deadlines']['id'] = 'field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['table'] = 'field_data_field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['field'] = 'field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Deltagers frist */
  $handler->display->display_options['fields']['field_attendee_deadlines']['id'] = 'field_attendee_deadlines';
  $handler->display->display_options['fields']['field_attendee_deadlines']['table'] = 'field_data_field_attendee_deadlines';
  $handler->display->display_options['fields']['field_attendee_deadlines']['field'] = 'field_attendee_deadlines';
  $handler->display->display_options['fields']['field_attendee_deadlines']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_attendee_deadlines']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_attendee_deadlines']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_attendee_deadlines']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_attendee_deadlines']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attendee_deadlines']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Officiel svardato */
  $handler->display->display_options['fields']['field_official_responsedate']['id'] = 'field_official_responsedate';
  $handler->display->display_options['fields']['field_official_responsedate']['table'] = 'field_data_field_official_responsedate';
  $handler->display->display_options['fields']['field_official_responsedate']['field'] = 'field_official_responsedate';
  $handler->display->display_options['fields']['field_official_responsedate']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_official_responsedate']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_official_responsedate']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_official_responsedate']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_official_responsedate']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_official_responsedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Besked til faggruppen */
  $handler->display->display_options['fields']['field_message']['id'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['table'] = 'field_data_field_message';
  $handler->display->display_options['fields']['field_message']['field'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_message']['element_class'] = 'clearfix';
  $handler->display->display_options['fields']['field_message']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_message']['element_wrapper_class'] = 'clearfix';
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'wrap';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Er sammenfatning */
  $handler->display->display_options['fields']['field_is_summary']['id'] = 'field_is_summary';
  $handler->display->display_options['fields']['field_is_summary']['table'] = 'field_data_field_is_summary';
  $handler->display->display_options['fields']['field_is_summary']['field'] = 'field_is_summary';
  $handler->display->display_options['fields']['field_is_summary']['exclude'] = TRUE;
  /* Felt: Indhold: Ansvarlig formand */
  $handler->display->display_options['fields']['field_responsible_foreman']['id'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['table'] = 'field_data_field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['field'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_responsible_foreman']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Ansvarlig tovholder */
  $handler->display->display_options['fields']['field_responsible_admin']['id'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['table'] = 'field_data_field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['field'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_responsible_admin']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_responsible_admin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_responsible_admin']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Hørings ID';
  $handler->display->display_options['fields']['nid']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['nid']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nid']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Ansvarlig formand */
  $handler->display->display_options['fields']['field_responsible_foreman']['id'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['table'] = 'field_data_field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['field'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_responsible_foreman']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_responsible_foreman']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  /* Felt: Indhold: Ansvarlig tovholder */
  $handler->display->display_options['fields']['field_responsible_admin']['id'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['table'] = 'field_data_field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['field'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_responsible_admin']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_responsible_admin']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  $handler->display->display_options['pane_title'] = 'Høring deltagere/datoer';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Vis deltagerne */
  $handler = $view->new_display('panel_pane', 'Vis deltagerne', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Formand */
  $handler->display->display_options['fields']['field_chairman']['id'] = 'field_chairman';
  $handler->display->display_options['fields']['field_chairman']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['field_chairman']['field'] = 'field_chairman';
  $handler->display->display_options['fields']['field_chairman']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_chairman']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_chairman']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_chairman']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_chairman']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_chairman']['separator'] = '';
  /* Felt: Indhold: Ansvarlig formand */
  $handler->display->display_options['fields']['field_responsible_foreman']['id'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['table'] = 'field_data_field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['field'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_responsible_foreman']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_responsible_foreman']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  /* Felt: Indhold: Tovholder */
  $handler->display->display_options['fields']['field_coordinator']['id'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_coordinator']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_coordinator']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_coordinator']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_coordinator']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_coordinator']['separator'] = '';
  /* Felt: Indhold: Ansvarlig tovholder */
  $handler->display->display_options['fields']['field_responsible_admin']['id'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['table'] = 'field_data_field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['field'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_responsible_admin']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_responsible_admin']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  /* Felt: Indhold: Deltagere */
  $handler->display->display_options['fields']['field_attendees']['id'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['table'] = 'field_data_field_attendees';
  $handler->display->display_options['fields']['field_attendees']['field'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_attendees']['element_label_class'] = 'ktc-node-title-xs';
  $handler->display->display_options['fields']['field_attendees']['element_wrapper_class'] = 'clearfix';
  $handler->display->display_options['fields']['field_attendees']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_attendees']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_attendees']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attendees']['separator'] = '';
  $handler->display->display_options['pane_title'] = 'Høring deltagere/datoer';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['hearing_node_view'] = array(
    t('Master'),
    t('Høring node view'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Høringstype: [field_hearing_type]'),
    t('Status: [field_status]'),
    t('Myndighed: [field_hearing_authority]'),
    t('Besked til faggruppen'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('Status'),
    t('Link til KL høringssvar'),
    t('Myndighed'),
    t('[field_hearing_authority]'),
    t('Officiel udsendelsesdato'),
    t('KTC høringsfrist'),
    t('Deltagers frist'),
    t('Officiel svardato'),
    t('Er sammenfatning'),
    t('Ansvarlig formand'),
    t('Ansvarlig tovholder'),
    t('Hørings ID'),
    t('View panes'),
    t('Content pane 2'),
    t('Høring deltagere/datoer'),
    t('Vis deltagerne'),
    t('Formand'),
    t('Tovholder'),
    t('Deltagere'),
  );
  $export['hearing_node_view'] = $view;

  $view = new view();
  $view->name = 'hearing_responses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hearing responses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Besvarelser';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/[field_hearing_node]/hearing_response class="btn btn-default"">Se alle besvarelser</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Endeligt svar */
  $handler->display->display_options['fields']['field_is_final']['id'] = 'field_is_final';
  $handler->display->display_options['fields']['field_is_final']['table'] = 'field_data_field_is_final';
  $handler->display->display_options['fields']['field_is_final']['field'] = 'field_is_final';
  $handler->display->display_options['fields']['field_is_final']['label'] = '';
  $handler->display->display_options['fields']['field_is_final']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_is_final']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Har ikke svaret */
  $handler->display->display_options['fields']['field_is_no_answer']['id'] = 'field_is_no_answer';
  $handler->display->display_options['fields']['field_is_no_answer']['table'] = 'field_data_field_is_no_answer';
  $handler->display->display_options['fields']['field_is_no_answer']['field'] = 'field_is_no_answer';
  $handler->display->display_options['fields']['field_is_no_answer']['label'] = '';
  $handler->display->display_options['fields']['field_is_no_answer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_is_no_answer']['element_label_colon'] = FALSE;
  /* Felt: Felt: Efternavn */
  $handler->display->display_options['fields']['field_efternavn']['id'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['field'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_efternavn']['exclude'] = TRUE;
  /* Felt: Felt: Fornavn + mellemnavn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_navn']['label'] = '';
  $handler->display->display_options['fields']['field_navn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['text'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_navn']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Rendered Indholdselement */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Felt: Indhold: Høring */
  $handler->display->display_options['fields']['field_hearing_node']['id'] = 'field_hearing_node';
  $handler->display->display_options['fields']['field_hearing_node']['table'] = 'field_data_field_hearing_node';
  $handler->display->display_options['fields']['field_hearing_node']['field'] = 'field_hearing_node';
  $handler->display->display_options['fields']['field_hearing_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_node']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_hearing_node']['settings'] = array(
    'link' => 0,
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Høring (field_hearing_node) */
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['id'] = 'field_hearing_node_target_id';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['table'] = 'field_data_field_hearing_node';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['field'] = 'field_hearing_node_target_id';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hearing_node_target_id']['summary_options']['items_per_page'] = '25';
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
    'hearing_responses' => 'hearing_responses',
  );
  /* Filterkriterie: Indhold: Endeligt svar (field_is_final) */
  $handler->display->display_options['filters']['field_is_final_value']['id'] = 'field_is_final_value';
  $handler->display->display_options['filters']['field_is_final_value']['table'] = 'field_data_field_is_final';
  $handler->display->display_options['filters']['field_is_final_value']['field'] = 'field_is_final_value';
  $handler->display->display_options['filters']['field_is_final_value']['value'] = array(
    0 => '0',
  );
  /* Filterkriterie: Indhold: Har ikke svaret (field_is_no_answer) */
  $handler->display->display_options['filters']['field_is_no_answer_value']['id'] = 'field_is_no_answer_value';
  $handler->display->display_options['filters']['field_is_no_answer_value']['table'] = 'field_data_field_is_no_answer';
  $handler->display->display_options['filters']['field_is_no_answer_value']['field'] = 'field_is_no_answer_value';
  $handler->display->display_options['filters']['field_is_no_answer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_no_answer_value']['value'] = array(
    1 => '1',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_hearing_node_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Høring (field_hearing_node)',
    ),
  );
  $translatables['hearing_responses'] = array(
    t('Master'),
    t('Besvarelser'),
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
    t('<a href="/node/[field_hearing_node]/hearing_response class="btn btn-default"">Se alle besvarelser</a>'),
    t('forfatter'),
    t('Efternavn'),
    t('[field_navn] [field_efternavn]'),
    t('Høring'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['hearing_responses'] = $view;

  $view = new view();
  $view->name = 'hearings_missing_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Høring mangler filer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Høring mangler filer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_missing_files' => 'field_missing_files',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_missing_files' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Forbindelse: Filbrug: Fil */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Mangler Fil(er) */
  $handler->display->display_options['fields']['field_missing_files']['id'] = 'field_missing_files';
  $handler->display->display_options['fields']['field_missing_files']['table'] = 'field_data_field_missing_files';
  $handler->display->display_options['fields']['field_missing_files']['field'] = 'field_missing_files';
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Felt: Fil: Navn */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filterkriterie: Indhold: Mangler Fil(er) (field_missing_files) */
  $handler->display->display_options['filters']['field_missing_files_value']['id'] = 'field_missing_files_value';
  $handler->display->display_options['filters']['field_missing_files_value']['table'] = 'field_data_field_missing_files';
  $handler->display->display_options['filters']['field_missing_files_value']['field'] = 'field_missing_files_value';
  $handler->display->display_options['filters']['field_missing_files_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_missing_files_value']['value'] = '0';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Søg';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'filename' => 'filename',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'hoering-mangler-filer';
  $translatables['hearings_missing_files'] = array(
    t('Master'),
    t('Høring mangler filer'),
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
    t('Fil'),
    t('Mangler Fil(er)'),
    t('View resultattæller'),
    t('Redigér-link'),
    t('Søg'),
    t('Page'),
  );
  $export['hearings_missing_files'] = $view;

  $view = new view();
  $view->name = 'hearings_ubehandlede_hoeringer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hearings - Ubehandlede høringer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hearings - Ubehandlede høringer';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    21 => '21',
    9 => '9',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hearing_type' => 'field_hearing_type',
    'field_hearing_authority' => 'field_hearing_authority',
    'field_hearing_official' => 'field_hearing_official',
    'title' => 'title',
    'field_responsible_foreman' => 'field_responsible_foreman',
    'field_enrollment_deadlines' => 'field_enrollment_deadlines',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hearing_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hearing_authority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hearing_official' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsible_foreman' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enrollment_deadlines' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Indhold: Høringstype */
  $handler->display->display_options['fields']['field_hearing_type']['id'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['table'] = 'field_data_field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['field'] = 'field_hearing_type';
  $handler->display->display_options['fields']['field_hearing_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_hearing_type']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Myndighed */
  $handler->display->display_options['fields']['field_hearing_authority']['id'] = 'field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['table'] = 'field_data_field_hearing_authority';
  $handler->display->display_options['fields']['field_hearing_authority']['field'] = 'field_hearing_authority';
  /* Felt: Indhold: Officiel eller intern høring */
  $handler->display->display_options['fields']['field_hearing_official']['id'] = 'field_hearing_official';
  $handler->display->display_options['fields']['field_hearing_official']['table'] = 'field_data_field_hearing_official';
  $handler->display->display_options['fields']['field_hearing_official']['field'] = 'field_hearing_official';
  $handler->display->display_options['fields']['field_hearing_official']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_official']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_official']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_hearing_official])
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Ansvarlig formand */
  $handler->display->display_options['fields']['field_responsible_foreman']['id'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['table'] = 'field_data_field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['field'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['label'] = 'Formand';
  $handler->display->display_options['fields']['field_responsible_foreman']['settings'] = array(
    'link' => 1,
  );
  /* Felt: Indhold: KTC høringsfrist */
  $handler->display->display_options['fields']['field_enrollment_deadlines']['id'] = 'field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['table'] = 'field_data_field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['field'] = 'field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['label'] = 'Frist';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid_1']['id'] = 'field_status_tid_1';
  $handler->display->display_options['filters']['field_status_tid_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid_1']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_tid_1']['value'] = array(
    1840 => '1840',
    1892 => '1892',
  );
  $handler->display->display_options['filters']['field_status_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid_1']['vocabulary'] = 'hearing_status';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    1836 => '1836',
    1837 => '1837',
    1838 => '1838',
    1839 => '1839',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    17 => 0,
    15 => 0,
    16 => 0,
    14 => 0,
    18 => 0,
    10 => 0,
    9 => 0,
    5 => 0,
    3 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'hearing_status';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['hearings_ubehandlede_hoeringer'] = array(
    t('Master'),
    t('Hearings - Ubehandlede høringer'),
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
    t('Myndighed'),
    t('Titel'),
    t('[title] ([field_hearing_official])
'),
    t('Formand'),
    t('Frist'),
    t('Status'),
    t('Block'),
  );
  $export['hearings_ubehandlede_hoeringer'] = $view;

  $view = new view();
  $view->name = 'ktc_hearing_group_select';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KTC Hearing Group select';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'group' => 'group',
  );
  /* Filterkriterie: Indhold: Netværkstype (field_netvaerkstype) */
  $handler->display->display_options['filters']['field_netvaerkstype_tid']['id'] = 'field_netvaerkstype_tid';
  $handler->display->display_options['filters']['field_netvaerkstype_tid']['table'] = 'field_data_field_netvaerkstype';
  $handler->display->display_options['filters']['field_netvaerkstype_tid']['field'] = 'field_netvaerkstype_tid';
  $handler->display->display_options['filters']['field_netvaerkstype_tid']['value'] = array(
    1134 => '1134',
  );
  $handler->display->display_options['filters']['field_netvaerkstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_netvaerkstype_tid']['vocabulary'] = 'netv_rkstype';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['ktc_hearing_group_select'] = array(
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
    t('Entity Reference'),
  );
  $export['ktc_hearing_group_select'] = $view;

  $view = new view();
  $view->name = 'ktc_hearings_sectionpage_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Høringer sektionside blok';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dine høringer der mangler svar';
  $handler->display->display_options['css_class'] = 'filter-box';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Du har ingen ubesvarede høringer.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([nid])
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Deltagers frist (field_attendee_deadlines) */
  $handler->display->display_options['sorts']['field_attendee_deadlines_value']['id'] = 'field_attendee_deadlines_value';
  $handler->display->display_options['sorts']['field_attendee_deadlines_value']['table'] = 'field_data_field_attendee_deadlines';
  $handler->display->display_options['sorts']['field_attendee_deadlines_value']['field'] = 'field_attendee_deadlines_value';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-link-container ktc-link-icon-hearing-simple ktc-link-with-icon';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([nid])
';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] ([nid])';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['ktc_hearings_sectionpage_block'] = array(
    t('Master'),
    t('Dine høringer der mangler svar'),
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
    t('sidste »'),
    t('Du har ingen ubesvarede høringer.'),
    t('[title] ([nid])
'),
    t('Alle'),
    t('Content pane'),
    t('[title] ([nid])'),
    t('View panes'),
  );
  $export['ktc_hearings_sectionpage_block'] = $view;

  return $export;
}
