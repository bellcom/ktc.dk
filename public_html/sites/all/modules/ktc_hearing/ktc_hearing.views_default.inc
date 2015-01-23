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
  /* Felt: Indhold: Besked */
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
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  /* Felt: Indhold: Officiel udsendelsesdato */
  $handler->display->display_options['fields']['field_official_date']['id'] = 'field_official_date';
  $handler->display->display_options['fields']['field_official_date']['table'] = 'field_data_field_official_date';
  $handler->display->display_options['fields']['field_official_date']['field'] = 'field_official_date';
  $handler->display->display_options['fields']['field_official_date']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_official_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_official_date']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_official_date']['element_wrapper_class'] = 'clearfix';
  $handler->display->display_options['fields']['field_official_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Indmeldelsesfrister */
  $handler->display->display_options['fields']['field_enrollment_deadlines']['id'] = 'field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['table'] = 'field_data_field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['field'] = 'field_enrollment_deadlines';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_enrollment_deadlines']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
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
  $handler->display->display_options['fields']['field_official_responsedate']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Besked */
  $handler->display->display_options['fields']['field_message']['id'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['table'] = 'field_data_field_message';
  $handler->display->display_options['fields']['field_message']['field'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['element_class'] = 'clearfix';
  $handler->display->display_options['fields']['field_message']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_message']['element_wrapper_class'] = 'clearfix';
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'wrap';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Bilag */
  $handler->display->display_options['fields']['field_hearing_materials']['id'] = 'field_hearing_materials';
  $handler->display->display_options['fields']['field_hearing_materials']['table'] = 'field_data_field_hearing_materials';
  $handler->display->display_options['fields']['field_hearing_materials']['field'] = 'field_hearing_materials';
  $handler->display->display_options['fields']['field_hearing_materials']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_materials']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_hearing_materials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_materials']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hearing_materials']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_hearing_materials']['delta_offset'] = '0';
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
  /* Felt: Indhold: Formand */
  $handler->display->display_options['fields']['field_chairman']['id'] = 'field_chairman';
  $handler->display->display_options['fields']['field_chairman']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['field_chairman']['field'] = 'field_chairman';
  $handler->display->display_options['fields']['field_chairman']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_chairman']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_chairman']['element_wrapper_class'] = 'clearfix ';
  $handler->display->display_options['fields']['field_chairman']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_chairman']['delta_offset'] = '0';
  /* Felt: Indhold: Ansvarlig formand */
  $handler->display->display_options['fields']['field_responsible_foreman']['id'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['table'] = 'field_data_field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['field'] = 'field_responsible_foreman';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_responsible_foreman']['element_wrapper_class'] = 'clearfix ';
  $handler->display->display_options['fields']['field_responsible_foreman']['settings'] = array(
    'link' => 1,
  );
  /* Felt: Indhold: Tovholder */
  $handler->display->display_options['fields']['field_coordinator']['id'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['element_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_coordinator']['element_label_class'] = 'col-md-6 col-sm-6 col-xm-12';
  $handler->display->display_options['fields']['field_coordinator']['element_wrapper_class'] = 'clearfix ';
  $handler->display->display_options['fields']['field_coordinator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_coordinator']['delta_offset'] = '0';
  /* Felt: Indhold: Ansvarlig tovholder */
  $handler->display->display_options['fields']['field_responsible_admin']['id'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['table'] = 'field_data_field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['field'] = 'field_responsible_admin';
  $handler->display->display_options['fields']['field_responsible_admin']['element_class'] = 'col-md-6 col-sm-6 col-xs-6';
  $handler->display->display_options['fields']['field_responsible_admin']['element_label_class'] = 'col-md-6 col-sm-6 col-xs-6';
  $handler->display->display_options['fields']['field_responsible_admin']['element_wrapper_class'] = 'clearfix ';
  $handler->display->display_options['fields']['field_responsible_admin']['settings'] = array(
    'link' => 1,
  );
  /* Felt: Indhold: Deltagere */
  $handler->display->display_options['fields']['field_attendees']['id'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['table'] = 'field_data_field_attendees';
  $handler->display->display_options['fields']['field_attendees']['field'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['element_wrapper_class'] = 'clearfix';
  $handler->display->display_options['fields']['field_attendees']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_attendees']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attendees']['multi_type'] = 'ul';
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
    t('Besked'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('Officiel udsendelsesdato'),
    t('Indmeldelsesfrister'),
    t('Deltagers frist'),
    t('Officiel svardato'),
    t('View panes'),
    t('Content pane 2'),
    t('Formand'),
    t('Ansvarlig formand'),
    t('Tovholder'),
    t('Ansvarlig tovholder'),
    t('Deltagere'),
    t('Høring deltagere/datoer'),
  );
  $export['hearing_node_view'] = $view;

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

  return $export;
}
