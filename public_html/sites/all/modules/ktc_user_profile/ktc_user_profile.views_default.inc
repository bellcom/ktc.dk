<?php
/**
 * @file
 * ktc_user_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ktc_user_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'forfatters_indhold';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forfatters indhold';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brugerens indhold';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
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
  );
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Forfatter uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'forfatters-indhold';
  $handler->display->display_options['menu']['title'] = 'Indhold';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'changed' => 'changed',
    'created' => 'created',
    'name' => 'name',
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Masse-handlinger: Indhold */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Vælg';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::balk_custom_node_assign_term_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::balk_custom_node_empty_lead_image_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $translatables['forfatters_indhold'] = array(
    t('Master'),
    t('Brugerens indhold'),
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
    t('forfatter'),
    t('Type'),
    t('Opdateringsdato'),
    t('Oprettet'),
    t('Navn'),
    t('Alle'),
    t('Page'),
    t('Blok'),
    t('Vælg'),
    t('- Vælg en handling -'),
    t('Content pane'),
    t('View panes'),
  );
  $export['forfatters_indhold'] = $view;

  $view = new view();
  $view->name = 'new_content_from_group';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New content from group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New content from group';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-6 col-xs-12 switch-elements';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
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
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
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
    'hearing_responses' => 'hearing_responses',
    'os2web_base_news' => 'os2web_base_news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['new_content_from_group'] = array(
    t('Master'),
    t('New content from group'),
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
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
  );
  $export['new_content_from_group'] = $view;

  $view = new view();
  $view->name = 'user_profile_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'user profile info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'user profile info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
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
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['label'] = '';
  $handler->display->display_options['fields']['field_navn']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Brugernavn';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Felt: Bruger: Brugertype */
  $handler->display->display_options['fields']['field_usertype']['id'] = 'field_usertype';
  $handler->display->display_options['fields']['field_usertype']['table'] = 'field_data_field_usertype';
  $handler->display->display_options['fields']['field_usertype']['field'] = 'field_usertype';
  $handler->display->display_options['fields']['field_usertype']['label'] = '';
  $handler->display->display_options['fields']['field_usertype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usertype']['alter']['text'] = 'Brugertype: [field_usertype]';
  $handler->display->display_options['fields']['field_usertype']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Direkte telefon */
  $handler->display->display_options['fields']['field_directe_telefon']['id'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['table'] = 'field_data_field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['field'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['label'] = '';
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['text'] = 'Direkte telefon: [field_directe_telefon]';
  $handler->display->display_options['fields']['field_directe_telefon']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Mobil */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['label'] = '';
  $handler->display->display_options['fields']['field_cell']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cell']['alter']['text'] = 'Mobil: [field_cell]';
  $handler->display->display_options['fields']['field_cell']['element_label_colon'] = FALSE;
  /* Felt: Felt: Regioner */
  $handler->display->display_options['fields']['field_regioner']['id'] = 'field_regioner';
  $handler->display->display_options['fields']['field_regioner']['table'] = 'field_data_field_regioner';
  $handler->display->display_options['fields']['field_regioner']['field'] = 'field_regioner';
  $handler->display->display_options['fields']['field_regioner']['label'] = '';
  $handler->display->display_options['fields']['field_regioner']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_regioner']['alter']['text'] = 'Region: [field_regioner]';
  $handler->display->display_options['fields']['field_regioner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regioner']['delta_offset'] = '0';
  /* Felt: Bruger: Kommune */
  $handler->display->display_options['fields']['field_kommune']['id'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['fields']['field_kommune']['field'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['label'] = '';
  $handler->display->display_options['fields']['field_kommune']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kommune']['alter']['text'] = 'Kommune: [field_kommune]';
  $handler->display->display_options['fields']['field_kommune']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Arbejdsgiver */
  $handler->display->display_options['fields']['field_employer_name']['id'] = 'field_employer_name';
  $handler->display->display_options['fields']['field_employer_name']['table'] = 'field_data_field_employer_name';
  $handler->display->display_options['fields']['field_employer_name']['field'] = 'field_employer_name';
  $handler->display->display_options['fields']['field_employer_name']['label'] = '';
  $handler->display->display_options['fields']['field_employer_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_employer_name']['alter']['text'] = 'Arbejdsgiver: [field_employer_name]';
  $handler->display->display_options['fields']['field_employer_name']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Afdeling */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['text'] = 'Afdeling: [field_department]';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Stilling/titel */
  $handler->display->display_options['fields']['field_jobposition']['id'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['table'] = 'field_data_field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['field'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['label'] = '';
  $handler->display->display_options['fields']['field_jobposition']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jobposition']['alter']['text'] = 'Stilling/titel: [field_jobposition]';
  $handler->display->display_options['fields']['field_jobposition']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Postnr */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['label'] = '';
  $handler->display->display_options['fields']['field_zipcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zipcode']['element_label_colon'] = FALSE;
  /* Felt: Bruger: By */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['alter']['text'] = 'Adresse: <br/>
[field_adresse] <br/>
[field_zipcode] [field_city]';
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Felt: Bruger: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  /* Felt: Bruger: Ekspertise */
  $handler->display->display_options['fields']['field_ekspertise']['id'] = 'field_ekspertise';
  $handler->display->display_options['fields']['field_ekspertise']['table'] = 'field_data_field_ekspertise';
  $handler->display->display_options['fields']['field_ekspertise']['field'] = 'field_ekspertise';
  /* Felt: Bruger: Særlige kompetencer */
  $handler->display->display_options['fields']['field_special_skills']['id'] = 'field_special_skills';
  $handler->display->display_options['fields']['field_special_skills']['table'] = 'field_data_field_special_skills';
  $handler->display->display_options['fields']['field_special_skills']['field'] = 'field_special_skills';
  /* Felt: Bruger: Fødselsdato */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Bruger: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Bruger: Send besked når andre brugere kommenterer mine indlæg (inkl. mine egne kommentarer) */
  $handler->display->display_options['fields']['field_my_comment_notify']['id'] = 'field_my_comment_notify';
  $handler->display->display_options['fields']['field_my_comment_notify']['table'] = 'field_data_field_my_comment_notify';
  $handler->display->display_options['fields']['field_my_comment_notify']['field'] = 'field_my_comment_notify';
  /* Felt: Bruger: Send besked om alle nye kommentarer fra alle "Mine Netværk". */
  $handler->display->display_options['fields']['field_all_comment_notify']['id'] = 'field_all_comment_notify';
  $handler->display->display_options['fields']['field_all_comment_notify']['table'] = 'field_data_field_all_comment_notify';
  $handler->display->display_options['fields']['field_all_comment_notify']['field'] = 'field_all_comment_notify';
  /* Felt: Bruger: Send nyt fra "Mine netværk" (når der er nye indlæg, arrangementer, dokumenter, diskussioner mm.) */
  $handler->display->display_options['fields']['field_content_type_notify']['id'] = 'field_content_type_notify';
  $handler->display->display_options['fields']['field_content_type_notify']['table'] = 'field_data_field_content_type_notify';
  $handler->display->display_options['fields']['field_content_type_notify']['field'] = 'field_content_type_notify';
  /* Felt: Felt: Emner */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Felt: Felt: Flere emner */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Sorteringskriterie: Bruger: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Bruger: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: user profile left */
  $handler = $view->new_display('panel_pane', 'user profile left', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['label'] = '';
  $handler->display->display_options['fields']['field_navn']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Brugernavn';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Felt: Bruger: Brugertype */
  $handler->display->display_options['fields']['field_usertype']['id'] = 'field_usertype';
  $handler->display->display_options['fields']['field_usertype']['table'] = 'field_data_field_usertype';
  $handler->display->display_options['fields']['field_usertype']['field'] = 'field_usertype';
  $handler->display->display_options['fields']['field_usertype']['label'] = '';
  $handler->display->display_options['fields']['field_usertype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_usertype']['alter']['text'] = 'Brugertype: [field_usertype]';
  $handler->display->display_options['fields']['field_usertype']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Direkte telefon */
  $handler->display->display_options['fields']['field_directe_telefon']['id'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['table'] = 'field_data_field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['field'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['label'] = '';
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['text'] = 'Direkte telefon: [field_directe_telefon]';
  $handler->display->display_options['fields']['field_directe_telefon']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Mobil */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['label'] = '';
  $handler->display->display_options['fields']['field_cell']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cell']['alter']['text'] = 'Mobil: [field_cell]';
  $handler->display->display_options['fields']['field_cell']['element_label_colon'] = FALSE;
  /* Felt: Felt: Regioner */
  $handler->display->display_options['fields']['field_regioner']['id'] = 'field_regioner';
  $handler->display->display_options['fields']['field_regioner']['table'] = 'field_data_field_regioner';
  $handler->display->display_options['fields']['field_regioner']['field'] = 'field_regioner';
  $handler->display->display_options['fields']['field_regioner']['label'] = '';
  $handler->display->display_options['fields']['field_regioner']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_regioner']['alter']['text'] = 'Region: [field_regioner]';
  $handler->display->display_options['fields']['field_regioner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regioner']['delta_offset'] = '0';
  /* Felt: Bruger: Kommune */
  $handler->display->display_options['fields']['field_kommune']['id'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['fields']['field_kommune']['field'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['label'] = '';
  $handler->display->display_options['fields']['field_kommune']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kommune']['alter']['text'] = 'Kommune: [field_kommune]';
  $handler->display->display_options['fields']['field_kommune']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Arbejdsgiver */
  $handler->display->display_options['fields']['field_employer_name']['id'] = 'field_employer_name';
  $handler->display->display_options['fields']['field_employer_name']['table'] = 'field_data_field_employer_name';
  $handler->display->display_options['fields']['field_employer_name']['field'] = 'field_employer_name';
  $handler->display->display_options['fields']['field_employer_name']['label'] = '';
  $handler->display->display_options['fields']['field_employer_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_employer_name']['alter']['text'] = 'Arbejdsgiver: [field_employer_name]';
  $handler->display->display_options['fields']['field_employer_name']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Afdeling */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['text'] = 'Afdeling: [field_department]';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Stilling/titel */
  $handler->display->display_options['fields']['field_jobposition']['id'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['table'] = 'field_data_field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['field'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['label'] = '';
  $handler->display->display_options['fields']['field_jobposition']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jobposition']['alter']['text'] = 'Stilling/titel: [field_jobposition]';
  $handler->display->display_options['fields']['field_jobposition']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Postnr */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['label'] = '';
  $handler->display->display_options['fields']['field_zipcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zipcode']['element_label_colon'] = FALSE;
  /* Felt: Bruger: By */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['alter']['text'] = 'Adresse: <br/>
[field_adresse] <br/>
[field_zipcode] [field_city]';
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Fødselsdato */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['label'] = '';
  $handler->display->display_options['fields']['field_dob']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dob']['alter']['text'] = 'Fødselsdato: [field_dob]';
  $handler->display->display_options['fields']['field_dob']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Bruger: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Oprettelsesdato: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['pane_title'] = 'user profile left';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: user profile right */
  $handler = $view->new_display('panel_pane', 'user profile right', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Emner */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['alter']['text'] = '[field_topics]';
  $handler->display->display_options['fields']['field_topics']['delta_limit'] = '30';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Felt: Felt: Flere emner */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['alter']['text'] = '[field_tags]';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Felt: Bruger: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = 'LinkedIn:  [field_linkedin]';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Ekspertise */
  $handler->display->display_options['fields']['field_ekspertise']['id'] = 'field_ekspertise';
  $handler->display->display_options['fields']['field_ekspertise']['table'] = 'field_data_field_ekspertise';
  $handler->display->display_options['fields']['field_ekspertise']['field'] = 'field_ekspertise';
  $handler->display->display_options['fields']['field_ekspertise']['label'] = '';
  $handler->display->display_options['fields']['field_ekspertise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ekspertise']['alter']['text'] = 'Ekspertise: <br />
[field_ekspertise]';
  $handler->display->display_options['fields']['field_ekspertise']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Særlige kompetencer */
  $handler->display->display_options['fields']['field_special_skills']['id'] = 'field_special_skills';
  $handler->display->display_options['fields']['field_special_skills']['table'] = 'field_data_field_special_skills';
  $handler->display->display_options['fields']['field_special_skills']['field'] = 'field_special_skills';
  $handler->display->display_options['fields']['field_special_skills']['label'] = '';
  $handler->display->display_options['fields']['field_special_skills']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_special_skills']['alter']['text'] = 'Særlige kompetencer: <br />
[field_special_skills]';
  $handler->display->display_options['fields']['field_special_skills']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Send besked når andre brugere kommenterer mine indlæg (inkl. mine egne kommentarer) */
  $handler->display->display_options['fields']['field_my_comment_notify']['id'] = 'field_my_comment_notify';
  $handler->display->display_options['fields']['field_my_comment_notify']['table'] = 'field_data_field_my_comment_notify';
  $handler->display->display_options['fields']['field_my_comment_notify']['field'] = 'field_my_comment_notify';
  /* Felt: Bruger: Send besked om alle nye kommentarer fra alle "Mine Netværk". */
  $handler->display->display_options['fields']['field_all_comment_notify']['id'] = 'field_all_comment_notify';
  $handler->display->display_options['fields']['field_all_comment_notify']['table'] = 'field_data_field_all_comment_notify';
  $handler->display->display_options['fields']['field_all_comment_notify']['field'] = 'field_all_comment_notify';
  /* Felt: Bruger: Send nyt fra "Mine netværk" (når der er nye indlæg, arrangementer, dokumenter, diskussioner mm.) */
  $handler->display->display_options['fields']['field_content_type_notify']['id'] = 'field_content_type_notify';
  $handler->display->display_options['fields']['field_content_type_notify']['table'] = 'field_data_field_content_type_notify';
  $handler->display->display_options['fields']['field_content_type_notify']['field'] = 'field_content_type_notify';
  $handler->display->display_options['pane_title'] = 'user profile right';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['user_profile_info'] = array(
    t('Master'),
    t('user profile info'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Brugernavn'),
    t('E-mail'),
    t('Brugertype: [field_usertype]'),
    t('Direkte telefon: [field_directe_telefon]'),
    t('Mobil: [field_cell]'),
    t('Region: [field_regioner]'),
    t('Kommune: [field_kommune]'),
    t('Arbejdsgiver: [field_employer_name]'),
    t('Afdeling: [field_department]'),
    t('Stilling/titel: [field_jobposition]'),
    t('Adresse: <br/>
[field_adresse] <br/>
[field_zipcode] [field_city]'),
    t('LinkedIn'),
    t('Ekspertise'),
    t('Særlige kompetencer'),
    t('Fødselsdato'),
    t('Oprettelsesdato'),
    t('Send besked når andre brugere kommenterer mine indlæg (inkl. mine egne kommentarer)'),
    t('Send besked om alle nye kommentarer fra alle "Mine Netværk".'),
    t('Send nyt fra "Mine netværk" (når der er nye indlæg, arrangementer, dokumenter, diskussioner mm.)'),
    t('Emner'),
    t('Flere emner'),
    t('Alle'),
    t('Block'),
    t('user profile left'),
    t('Fødselsdato: [field_dob]'),
    t('Oprettelsesdato: [created]'),
    t('View panes'),
    t('user profile right'),
    t('[field_topics]'),
    t('[field_tags]'),
    t('LinkedIn:  [field_linkedin]'),
    t('Ekspertise: <br />
[field_ekspertise]'),
    t('Særlige kompetencer: <br />
[field_special_skills]'),
  );
  $export['user_profile_info'] = $view;

  return $export;
}
