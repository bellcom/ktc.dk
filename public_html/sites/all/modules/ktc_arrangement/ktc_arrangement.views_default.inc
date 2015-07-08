<?php
/**
 * @file
 * ktc_arrangement.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ktc_arrangement_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'add_to_outlook';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tilføj til Outllook';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_arrangement_address']['id'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['table'] = 'field_data_field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['field'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['exclude'] = TRUE;
  /* Felt: Indhold: Afholdelsessted */
  $handler->display->display_options['fields']['field_arrangement_location']['id'] = 'field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['table'] = 'field_data_field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['field'] = 'field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['exclude'] = TRUE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date']['id'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date']['alter']['text'] = '[field_arrangement_date-value]';
  $handler->display->display_options['fields']['field_arrangement_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_arrangement_date']['settings'] = array(
    'format_type' => 'oulook',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Arrangementstype */
  $handler->display->display_options['fields']['field_arrangement_type']['id'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['table'] = 'field_data_field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['field'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Direkte link til program */
  $handler->display->display_options['fields']['field_link_to_arrangement']['id'] = 'field_link_to_arrangement';
  $handler->display->display_options['fields']['field_link_to_arrangement']['table'] = 'field_data_field_link_to_arrangement';
  $handler->display->display_options['fields']['field_link_to_arrangement']['field'] = 'field_link_to_arrangement';
  $handler->display->display_options['fields']['field_link_to_arrangement']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_arrangement']['click_sort_column'] = 'url';
  /* Felt: Indhold: Direkte link til tilmelding */
  $handler->display->display_options['fields']['field_link_to_signup']['id'] = 'field_link_to_signup';
  $handler->display->display_options['fields']['field_link_to_signup']['table'] = 'field_data_field_link_to_signup';
  $handler->display->display_options['fields']['field_link_to_signup']['field'] = 'field_link_to_signup';
  $handler->display->display_options['fields']['field_link_to_signup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_signup']['click_sort_column'] = 'url';
  /* Felt: Indhold: Eksterne links */
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['id'] = 'field_os2web_base_field_ext_link';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['table'] = 'field_data_field_os2web_base_field_ext_link';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['field'] = 'field_os2web_base_field_ext_link';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['delta_offset'] = '0';
  /* Felt: Indhold: Forfatter */
  $handler->display->display_options['fields']['field_news_author']['id'] = 'field_news_author';
  $handler->display->display_options['fields']['field_news_author']['table'] = 'field_data_field_news_author';
  $handler->display->display_options['fields']['field_news_author']['field'] = 'field_news_author';
  $handler->display->display_options['fields']['field_news_author']['label'] = '';
  $handler->display->display_options['fields']['field_news_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_author']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* Felt: Indhold: Link til arrangørs hjemmeside */
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['id'] = 'field_link_arrangement_organizer';
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['table'] = 'field_data_field_link_arrangement_organizer';
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['field'] = 'field_link_arrangement_organizer';
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['click_sort_column'] = 'url';
  /* Felt: Indhold: Mødetype */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Pris (inkl./ ekskl. moms) */
  $handler->display->display_options['fields']['field_arrangement_price']['id'] = 'field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['table'] = 'field_data_field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['field'] = 'field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['exclude'] = TRUE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date_1']['id'] = 'field_arrangement_date_1';
  $handler->display->display_options['fields']['field_arrangement_date_1']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date_1']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date_1']['alter']['text'] = '[field_arrangement_date_1-value2]';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_arrangement_date_1']['settings'] = array(
    'format_type' => 'oulook',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Signup: Notification: Email Address */
  $handler->display->display_options['fields']['forwarding_email']['id'] = 'forwarding_email';
  $handler->display->display_options['fields']['forwarding_email']['table'] = 'signup';
  $handler->display->display_options['fields']['forwarding_email']['field'] = 'forwarding_email';
  $handler->display->display_options['fields']['forwarding_email']['label'] = '';
  $handler->display->display_options['fields']['forwarding_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['forwarding_email']['element_type'] = '0';
  $handler->display->display_options['fields']['forwarding_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['forwarding_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['forwarding_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['forwarding_email']['empty'] = 'ktc@ktc.dk';
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['id'] = 'field_arrangement_opretteremail';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['table'] = 'field_data_field_arrangement_opretteremail';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['field'] = 'field_arrangement_opretteremail';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['empty'] = '[forwarding_email]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="addtocalendar atc-style-blue">
        <var class="atc_event">
            <var class="atc_date_start">[field_arrangement_date]</var>
            <var class="atc_date_end">[field_arrangement_date_1]</var>
            <var class="atc_timezone">Europe/Copenhagen</var>
            <var class="atc_title">[title]</var>
            <var class="atc_description">[body]</var>
            <var class="atc_location">[field_arrangement_location] </var>
            <var class="atc_organizer">[field_news_author]</var>
            <var class="atc_organizer_email">[forwarding_email]</var>
        </var>
    </span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'arrangement' => 'arrangement',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_arrangement_address']['id'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['table'] = 'field_data_field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['field'] = 'field_arrangement_address';
  $handler->display->display_options['fields']['field_arrangement_address']['exclude'] = TRUE;
  /* Felt: Indhold: Afholdelsessted */
  $handler->display->display_options['fields']['field_arrangement_location']['id'] = 'field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['table'] = 'field_data_field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['field'] = 'field_arrangement_location';
  $handler->display->display_options['fields']['field_arrangement_location']['exclude'] = TRUE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date']['id'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date']['alter']['text'] = '[field_arrangement_date-value]';
  $handler->display->display_options['fields']['field_arrangement_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_arrangement_date']['settings'] = array(
    'format_type' => 'oulook',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Arrangementstype */
  $handler->display->display_options['fields']['field_arrangement_type']['id'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['table'] = 'field_data_field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['field'] = 'field_arrangement_type';
  $handler->display->display_options['fields']['field_arrangement_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Direkte link til program */
  $handler->display->display_options['fields']['field_link_to_arrangement']['id'] = 'field_link_to_arrangement';
  $handler->display->display_options['fields']['field_link_to_arrangement']['table'] = 'field_data_field_link_to_arrangement';
  $handler->display->display_options['fields']['field_link_to_arrangement']['field'] = 'field_link_to_arrangement';
  $handler->display->display_options['fields']['field_link_to_arrangement']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_arrangement']['click_sort_column'] = 'url';
  /* Felt: Indhold: Direkte link til tilmelding */
  $handler->display->display_options['fields']['field_link_to_signup']['id'] = 'field_link_to_signup';
  $handler->display->display_options['fields']['field_link_to_signup']['table'] = 'field_data_field_link_to_signup';
  $handler->display->display_options['fields']['field_link_to_signup']['field'] = 'field_link_to_signup';
  $handler->display->display_options['fields']['field_link_to_signup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_signup']['click_sort_column'] = 'url';
  /* Felt: Indhold: Eksterne links */
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['id'] = 'field_os2web_base_field_ext_link';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['table'] = 'field_data_field_os2web_base_field_ext_link';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['field'] = 'field_os2web_base_field_ext_link';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_os2web_base_field_ext_link']['delta_offset'] = '0';
  /* Felt: Indhold: Forfatter */
  $handler->display->display_options['fields']['field_news_author']['id'] = 'field_news_author';
  $handler->display->display_options['fields']['field_news_author']['table'] = 'field_data_field_news_author';
  $handler->display->display_options['fields']['field_news_author']['field'] = 'field_news_author';
  $handler->display->display_options['fields']['field_news_author']['label'] = '';
  $handler->display->display_options['fields']['field_news_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_author']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* Felt: Indhold: Link til arrangørs hjemmeside */
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['id'] = 'field_link_arrangement_organizer';
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['table'] = 'field_data_field_link_arrangement_organizer';
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['field'] = 'field_link_arrangement_organizer';
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_arrangement_organizer']['click_sort_column'] = 'url';
  /* Felt: Indhold: Mødetype */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Pris (inkl./ ekskl. moms) */
  $handler->display->display_options['fields']['field_arrangement_price']['id'] = 'field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['table'] = 'field_data_field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['field'] = 'field_arrangement_price';
  $handler->display->display_options['fields']['field_arrangement_price']['exclude'] = TRUE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date_1']['id'] = 'field_arrangement_date_1';
  $handler->display->display_options['fields']['field_arrangement_date_1']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date_1']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_date_1']['alter']['text'] = '[field_arrangement_date_1-value2]';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_arrangement_date_1']['settings'] = array(
    'format_type' => 'oulook',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Signup: Notification: Email Address */
  $handler->display->display_options['fields']['forwarding_email']['id'] = 'forwarding_email';
  $handler->display->display_options['fields']['forwarding_email']['table'] = 'signup';
  $handler->display->display_options['fields']['forwarding_email']['field'] = 'forwarding_email';
  $handler->display->display_options['fields']['forwarding_email']['label'] = '';
  $handler->display->display_options['fields']['forwarding_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['forwarding_email']['element_type'] = '0';
  $handler->display->display_options['fields']['forwarding_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['forwarding_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['forwarding_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['forwarding_email']['empty'] = 'ktc@ktc.dk';
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['id'] = 'field_arrangement_opretteremail';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['table'] = 'field_data_field_arrangement_opretteremail';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['field'] = 'field_arrangement_opretteremail';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_opretteremail']['empty'] = '[forwarding_email]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="addtocalendar atc-style-blue btn btn-default">
        <var class="atc_event">
            <var class="atc_date_start">[field_arrangement_date]</var>
            <var class="atc_date_end">[field_arrangement_date_1]</var>
            <var class="atc_timezone">Europe/Copenhagen</var>
            <var class="atc_title">[title]</var>
            <var class="atc_description">[body]</var>
            <var class="atc_location">[field_arrangement_location] </var>
            <var class="atc_organizer">[field_news_author]</var>
            <var class="atc_organizer_email">[forwarding_email]</var>
        </var>
    </span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

  /* Display: Dato på full-node */
  $handler = $view->new_display('panel_pane', 'Dato på full-node', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-date-calendar';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date']['id'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_date']['alter']['text'] = '[field_arrangement_date-value]';
  $handler->display->display_options['fields']['field_arrangement_date']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_arrangement_date']['element_class'] = 'ktc-date-calendar-day';
  $handler->display->display_options['fields']['field_arrangement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['settings'] = array(
    'format_type' => 'dag',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date_2']['id'] = 'field_arrangement_date_2';
  $handler->display->display_options['fields']['field_arrangement_date_2']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date_2']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_date_2']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_arrangement_date_2']['element_class'] = 'ktc-date-calendar-month';
  $handler->display->display_options['fields']['field_arrangement_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_arrangement_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date_2']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $translatables['add_to_outlook'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Adresse'),
    t('Afholdelsessted'),
    t('[field_arrangement_date-value]'),
    t('Arrangementstype'),
    t('Direkte link til program'),
    t('Direkte link til tilmelding'),
    t('Eksterne links'),
    t('Indhold'),
    t('Link til arrangørs hjemmeside'),
    t('Mødetype'),
    t('Pris (inkl./ ekskl. moms)'),
    t('Arrangementets dato'),
    t('[field_arrangement_date_1-value2]'),
    t('ktc@ktc.dk'),
    t('[forwarding_email]'),
    t('<span class="addtocalendar atc-style-blue">
        <var class="atc_event">
            <var class="atc_date_start">[field_arrangement_date]</var>
            <var class="atc_date_end">[field_arrangement_date_1]</var>
            <var class="atc_timezone">Europe/Copenhagen</var>
            <var class="atc_title">[title]</var>
            <var class="atc_description">[body]</var>
            <var class="atc_location">[field_arrangement_location] </var>
            <var class="atc_organizer">[field_news_author]</var>
            <var class="atc_organizer_email">[forwarding_email]</var>
        </var>
    </span>'),
    t('Alle'),
    t('Content pane'),
    t('<span class="addtocalendar atc-style-blue btn btn-default">
        <var class="atc_event">
            <var class="atc_date_start">[field_arrangement_date]</var>
            <var class="atc_date_end">[field_arrangement_date_1]</var>
            <var class="atc_timezone">Europe/Copenhagen</var>
            <var class="atc_title">[title]</var>
            <var class="atc_description">[body]</var>
            <var class="atc_location">[field_arrangement_location] </var>
            <var class="atc_organizer">[field_news_author]</var>
            <var class="atc_organizer_email">[forwarding_email]</var>
        </var>
    </span>'),
    t('View panes'),
    t('Dato på full-node'),
  );
  $export['add_to_outlook'] = $view;

  $view = new view();
  $view->name = 'arrangement';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Arrangement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'section-content-ajax';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date']['id'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_arrangement_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['delta_offset'] = '0';
  /* Sorteringskriterie: Indhold: Arrangementets dato -  startdato (field_arrangement_date) */
  $handler->display->display_options['sorts']['field_arrangement_date_value']['id'] = 'field_arrangement_date_value';
  $handler->display->display_options['sorts']['field_arrangement_date_value']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['sorts']['field_arrangement_date_value']['field'] = 'field_arrangement_date_value';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-arrangement-date/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-arrangement-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-arrangement-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Arrangementets dato */
  $handler->display->display_options['fields']['field_arrangement_date']['id'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['field'] = 'field_arrangement_date';
  $handler->display->display_options['fields']['field_arrangement_date']['label'] = '';
  $handler->display->display_options['fields']['field_arrangement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_arrangement_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_arrangement_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-arrangement-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-s-6 col-xs-12 switch-elements';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Dato: Dato (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = '/ajax/aktiviteter/view/all/all/future/!1/all/all';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
    'field_data_field_arrangement_date.field_arrangement_date_value2' => 'field_data_field_arrangement_date.field_arrangement_date_value2',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Listview */
  $handler = $view->new_display('block', 'Listview', 'block_3');
  $handler->display->display_options['display_description'] = 'Liste view';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
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
  /* Kontekstuelt filter: Handler mangler eller er i stykker */
  $handler->display->display_options['arguments']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
    'field_data_field_arrangement_date.field_arrangement_date_value2' => 'field_data_field_arrangement_date.field_arrangement_date_value2',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Dato: Dato (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );

  /* Display: Listview - old */
  $handler = $view->new_display('block', 'Listview - old', 'block_4');
  $handler->display->display_options['display_description'] = 'Liste view - old ';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-s-6 col-xs-12 switch-elements';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Arrangementets dato -  startdato (field_arrangement_date) */
  $handler->display->display_options['sorts']['field_arrangement_date_value']['id'] = 'field_arrangement_date_value';
  $handler->display->display_options['sorts']['field_arrangement_date_value']['table'] = 'field_data_field_arrangement_date';
  $handler->display->display_options['sorts']['field_arrangement_date_value']['field'] = 'field_arrangement_date_value';
  $handler->display->display_options['sorts']['field_arrangement_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Handler mangler eller er i stykker */
  $handler->display->display_options['arguments']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_meeting_type_tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Dato: Dato (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
    'field_data_field_arrangement_date.field_arrangement_date_value2' => 'field_data_field_arrangement_date.field_arrangement_date_value2',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Dato: Dato (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_arrangement_date.field_arrangement_date_value' => 'field_data_field_arrangement_date.field_arrangement_date_value',
  );
  $translatables['arrangement'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Month'),
    t('Alle'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Upcoming events block'),
    t('Content pane'),
    t('View panes'),
    t('Listview'),
    t('Liste view'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Listview - old'),
    t('Liste view - old '),
  );
  $export['arrangement'] = $view;

  return $export;
}
