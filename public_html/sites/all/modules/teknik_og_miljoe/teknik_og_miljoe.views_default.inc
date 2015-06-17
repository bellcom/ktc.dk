<?php
/**
 * @file
 * teknik_og_miljoe.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function teknik_og_miljoe_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'artikel_forfattere';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Artikel forfattere';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['style_options']['row_class'] = 'ktc-user-profile';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Field collection item: Entity with the Forfatter(e) (field_coforfattere) */
  $handler->display->display_options['relationships']['field_coforfattere_node']['id'] = 'field_coforfattere_node';
  $handler->display->display_options['relationships']['field_coforfattere_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_coforfattere_node']['field'] = 'field_coforfattere_node';
  /* Felt: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Eksisterende bruger */
  $handler->display->display_options['fields']['field_eksisterende_bruger']['id'] = 'field_eksisterende_bruger';
  $handler->display->display_options['fields']['field_eksisterende_bruger']['table'] = 'field_data_field_eksisterende_bruger';
  $handler->display->display_options['fields']['field_eksisterende_bruger']['field'] = 'field_eksisterende_bruger';
  $handler->display->display_options['fields']['field_eksisterende_bruger']['label'] = '';
  $handler->display->display_options['fields']['field_eksisterende_bruger']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eksisterende_bruger']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_eksisterende_bruger']['settings'] = array(
    'view_mode' => 'list3',
    'links' => 0,
  );
  /* Felt: Field collection item: Foto af forfatter */
  $handler->display->display_options['fields']['field_foto_af_forfatter']['id'] = 'field_foto_af_forfatter';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['table'] = 'field_data_field_foto_af_forfatter';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['field'] = 'field_foto_af_forfatter';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['label'] = '';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto_af_forfatter']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['element_wrapper_class'] = 'ktc-user-profile-photo-container';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_foto_af_forfatter']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto_af_forfatter']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Felt: Felt: Stilling/titel */
  $handler->display->display_options['fields']['field_jobposition']['id'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['table'] = 'field_data_field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['field'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['label'] = '';
  $handler->display->display_options['fields']['field_jobposition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobposition']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_jobposition']['element_wrapper_class'] = 'ktc-user-profile-content-job-title';
  $handler->display->display_options['fields']['field_jobposition']['element_default_classes'] = FALSE;
  /* Felt: Felt: Efternavn */
  $handler->display->display_options['fields']['field_efternavn']['id'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['field'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['label'] = '';
  $handler->display->display_options['fields']['field_efternavn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_efternavn']['element_label_colon'] = FALSE;
  /* Felt: Felt: Fornavn + mellemnavn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['label'] = '';
  $handler->display->display_options['fields']['field_navn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['text'] = '<div class="ktc-user-profile-content-name">[field_navn] [field_efternavn]</div>';
  $handler->display->display_options['fields']['field_navn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_navn']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_navn']['element_wrapper_class'] = 'ktc-user-profile-content';
  $handler->display->display_options['fields']['field_navn']['element_default_classes'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_coforfattere_node';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Artikel forfattere */
  $handler = $view->new_display('panel_pane', 'Artikel forfattere', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['artikel_forfattere'] = array(
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
    t('field_coforfattere'),
    t('.'),
    t(','),
    t('<div class="ktc-user-profile-content-name">[field_navn] [field_efternavn]</div>'),
    t('Alle'),
    t('Artikel forfattere'),
    t('KTC'),
  );
  $export['artikel_forfattere'] = $view;

  $view = new view();
  $view->name = 'artikler';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Artikler';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'artikler' => 'artikler',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['exclude'] = TRUE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_artikel_type] [field_os2web_news_page_type] - [type]
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['path'] = 'artikler';

  /* Display: Entity Reference - Leder */
  $handler = $view->new_display('entityreference', 'Entity Reference - Leder', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_artikler_og_nyheder_node']['id'] = 'reverse_field_artikler_og_nyheder_node';
  $handler->display->display_options['relationships']['reverse_field_artikler_og_nyheder_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_artikler_og_nyheder_node']['field'] = 'reverse_field_artikler_og_nyheder_node';
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
  );

  /* Display: Artikler og Nyheder - m type */
  $handler = $view->new_display('entityreference', 'Artikler og Nyheder - m type', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Artikeltype */
  $handler->display->display_options['fields']['field_artikeltype']['id'] = 'field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['table'] = 'field_data_field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['field'] = 'field_artikeltype';
  $handler->display->display_options['fields']['field_artikeltype']['label'] = '';
  $handler->display->display_options['fields']['field_artikeltype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_artikeltype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikeltype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['exclude'] = TRUE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_artikeltype] [field_os2web_news_page_type] - [type]
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $translatables['artikler'] = array(
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
    t('Alle'),
    t('Entity Reference'),
    t('Nyhedstype'),
    t('Type'),
    t('[title] [field_artikel_type] [field_os2web_news_page_type] - [type]
'),
    t('Side'),
    t('Entity Reference - Leder'),
    t('Indhold refererer til Indhold fra field_artikler_og_nyheder'),
    t('Artikler og Nyheder - m type'),
    t('[title] [field_artikeltype] [field_os2web_news_page_type] - [type]
'),
  );
  $export['artikler'] = $view;

  $view = new view();
  $view->name = 'bladintro_artikler';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bladintro artikler';
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
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Her er intet';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikler' => 'artikler',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['bladintro_artikler'] = array(
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
    t('Her er intet'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['bladintro_artikler'] = $view;

  $view = new view();
  $view->name = 'bladintro_artikler_liste';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Bladintro artikler liste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_magasin_side_nr',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Field collection item: Entity with the Magasin indhold (field_magasin_indhold) */
  $handler->display->display_options['relationships']['field_magasin_indhold_node']['id'] = 'field_magasin_indhold_node';
  $handler->display->display_options['relationships']['field_magasin_indhold_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_magasin_indhold_node']['field'] = 'field_magasin_indhold_node';
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item']['id'] = 'reverse_field_magasin_side_artikel_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item']['field'] = 'reverse_field_magasin_side_artikel_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item']['relationship'] = 'field_magasin_indhold_node';
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item_1']['id'] = 'reverse_field_magasin_side_artikel_field_collection_item_1';
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item_1']['field'] = 'reverse_field_magasin_side_artikel_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_magasin_side_artikel_field_collection_item_1']['relationship'] = 'field_magasin_indhold_node';
  /* Felt: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Artikel */
  $handler->display->display_options['fields']['field_magasin_side_artikel']['id'] = 'field_magasin_side_artikel';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['table'] = 'field_data_field_magasin_side_artikel';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['field'] = 'field_magasin_side_artikel';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_side_artikel']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['settings'] = array(
    'view_mode' => 'listevisning',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_magasin_side_artikel']['delta_offset'] = '0';
  /* Felt: Field collection item: Side nr */
  $handler->display->display_options['fields']['field_magasin_side_nr']['id'] = 'field_magasin_side_nr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['table'] = 'field_data_field_magasin_side_nr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['field'] = 'field_magasin_side_nr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['label'] = 'Side';
  $handler->display->display_options['fields']['field_magasin_side_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_side_nr']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sorteringskriterie: Field collection item: Side nr (field_magasin_side_nr) */
  $handler->display->display_options['sorts']['field_magasin_side_nr_value']['id'] = 'field_magasin_side_nr_value';
  $handler->display->display_options['sorts']['field_magasin_side_nr_value']['table'] = 'field_data_field_magasin_side_nr';
  $handler->display->display_options['sorts']['field_magasin_side_nr_value']['field'] = 'field_magasin_side_nr_value';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_magasin_indhold_node';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Titel */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'field_magasin_indhold_node';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filterkriterie: Field collection item: Artikel (field_magasin_side_artikel) */
  $handler->display->display_options['filters']['field_magasin_side_artikel_target_id']['id'] = 'field_magasin_side_artikel_target_id';
  $handler->display->display_options['filters']['field_magasin_side_artikel_target_id']['table'] = 'field_data_field_magasin_side_artikel';
  $handler->display->display_options['filters']['field_magasin_side_artikel_target_id']['field'] = 'field_magasin_side_artikel_target_id';
  $handler->display->display_options['filters']['field_magasin_side_artikel_target_id']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['bladintro_artikler_liste'] = array(
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
    t('field_magasin_indhold'),
    t('Field collection item refererer til Indhold fra field_magasin_side_artikel'),
    t('.'),
    t(','),
    t('Side'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['bladintro_artikler_liste'] = $view;

  $view = new view();
  $view->name = 'bladintro_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bladintro link';
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
  /* Felt: Indhold: Udgave */
  $handler->display->display_options['fields']['field_udgave']['id'] = 'field_udgave';
  $handler->display->display_options['fields']['field_udgave']['table'] = 'field_data_field_udgave';
  $handler->display->display_options['fields']['field_udgave']['field'] = 'field_udgave';
  /* Felt: Indhold: Udgivelsesdato */
  $handler->display->display_options['fields']['field_udgivelsesdato']['id'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['field'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['settings'] = array(
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
    'magazine' => 'magazine',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['bladintro_link'] = array(
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
    t('Udgave'),
    t('Udgivelsesdato'),
    t('Entity Reference'),
  );
  $export['bladintro_link'] = $view;

  $view = new view();
  $view->name = 'bladintro_nyheder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bladintro nyheder';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
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
  $handler->display->display_options['row_options']['relationship'] = 'field_ekstra_artikler_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisningstor';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ekstra_artikler_target_id']['id'] = 'field_ekstra_artikler_target_id';
  $handler->display->display_options['relationships']['field_ekstra_artikler_target_id']['table'] = 'field_data_field_ekstra_artikler';
  $handler->display->display_options['relationships']['field_ekstra_artikler_target_id']['field'] = 'field_ekstra_artikler_target_id';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ekstra_artikler_target_id';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Top artikel */
  $handler = $view->new_display('block', 'Top artikel', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_top_artikel_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisningstor';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ekstra_artikler_target_id']['id'] = 'field_ekstra_artikler_target_id';
  $handler->display->display_options['relationships']['field_ekstra_artikler_target_id']['table'] = 'field_data_field_ekstra_artikler';
  $handler->display->display_options['relationships']['field_ekstra_artikler_target_id']['field'] = 'field_ekstra_artikler_target_id';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_top_artikel_target_id']['id'] = 'field_top_artikel_target_id';
  $handler->display->display_options['relationships']['field_top_artikel_target_id']['table'] = 'field_data_field_top_artikel';
  $handler->display->display_options['relationships']['field_top_artikel_target_id']['field'] = 'field_top_artikel_target_id';

  /* Display: Ekstra artikler */
  $handler = $view->new_display('block', 'Ekstra artikler', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_ekstra_artikler_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisning';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['bladintro_nyheder'] = array(
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
    t('Indhold entity refereret fra field_ekstra_artikler'),
    t('Titel'),
    t('Alle'),
    t('Top artikel'),
    t('Indhold entity refereret fra field_top_artikel'),
    t('Ekstra artikler'),
  );
  $export['bladintro_nyheder'] = $view;

  $view = new view();
  $view->name = 'magasin_sider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'magasin-sider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row magasinflow magasinsider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
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
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 [field_magasin_side_status_1]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="col-md-12">[nothing_2]</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Felt: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Felt: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Felt: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Felt: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Felt: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Redigér';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=udgivelser/[host_entity_id]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'btn btn-warning btn-xs pull-right';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Slet';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=udgivelser/[host_entity_id]';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'btn btn-danger btn-xs pull-right';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Tilføj';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=udgivelser/[host_entity_id]';
  $handler->display->display_options['fields']['nothing_2']['alter']['link_class'] = 'btn btn-info btn-xs';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Felt: Field collection item: Sektion / Tema */
  $handler->display->display_options['fields']['field_magasin_tema']['id'] = 'field_magasin_tema';
  $handler->display->display_options['fields']['field_magasin_tema']['table'] = 'field_data_field_magasin_tema';
  $handler->display->display_options['fields']['field_magasin_tema']['field'] = 'field_magasin_tema';
  $handler->display->display_options['fields']['field_magasin_tema']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_tema']['alter']['text'] = 'Tema: [field_magasin_tema]';
  $handler->display->display_options['fields']['field_magasin_tema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_tema']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_magasin_tema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_tema']['hide_empty'] = TRUE;
  /* Felt: Field collection item: Status */
  $handler->display->display_options['fields']['field_magasin_side_status']['id'] = 'field_magasin_side_status';
  $handler->display->display_options['fields']['field_magasin_side_status']['table'] = 'field_data_field_magasin_side_status';
  $handler->display->display_options['fields']['field_magasin_side_status']['field'] = 'field_magasin_side_status';
  $handler->display->display_options['fields']['field_magasin_side_status']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_side_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_side_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_side_status']['alter']['text'] = 'Status: [field_magasin_side_status]';
  $handler->display->display_options['fields']['field_magasin_side_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_side_status']['hide_empty'] = TRUE;
  /* Felt: Field collection item: Side nr */
  $handler->display->display_options['fields']['field_magasin_side_nr']['id'] = 'field_magasin_side_nr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['table'] = 'field_data_field_magasin_side_nr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['field'] = 'field_magasin_side_nr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_side_nr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_side_nr']['alter']['text'] = '<div class="sidenummer">[field_magasin_side_nr]</div>([counter]) [field_magasin_side_status]';
  $handler->display->display_options['fields']['field_magasin_side_nr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_side_nr']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_magasin_side_nr']['element_wrapper_class'] = 'sidenr';
  $handler->display->display_options['fields']['field_magasin_side_nr']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_side_nr']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Field collection item: Filer */
  $handler->display->display_options['fields']['field_magasin_filer']['id'] = 'field_magasin_filer';
  $handler->display->display_options['fields']['field_magasin_filer']['table'] = 'field_data_field_magasin_filer';
  $handler->display->display_options['fields']['field_magasin_filer']['field'] = 'field_magasin_filer';
  $handler->display->display_options['fields']['field_magasin_filer']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_filer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_filer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_filer']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_magasin_filer']['delta_offset'] = '0';
  /* Felt: Field collection item: Artikel */
  $handler->display->display_options['fields']['field_magasin_side_artikel']['id'] = 'field_magasin_side_artikel';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['table'] = 'field_data_field_magasin_side_artikel';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['field'] = 'field_magasin_side_artikel';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['label'] = 'Artikler';
  $handler->display->display_options['fields']['field_magasin_side_artikel']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_side_artikel']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_magasin_side_artikel']['delta_offset'] = '0';
  /* Felt: Field collection item: Status */
  $handler->display->display_options['fields']['field_magasin_side_status_1']['id'] = 'field_magasin_side_status_1';
  $handler->display->display_options['fields']['field_magasin_side_status_1']['table'] = 'field_data_field_magasin_side_status';
  $handler->display->display_options['fields']['field_magasin_side_status_1']['field'] = 'field_magasin_side_status';
  $handler->display->display_options['fields']['field_magasin_side_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_side_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_magasin_side_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_side_status_1']['type'] = 'list_key';
  /* Sorteringskriterie: Field collection item: Side nr (field_magasin_side_nr) */
  $handler->display->display_options['sorts']['field_magasin_side_nr_value']['id'] = 'field_magasin_side_nr_value';
  $handler->display->display_options['sorts']['field_magasin_side_nr_value']['table'] = 'field_data_field_magasin_side_nr';
  $handler->display->display_options['sorts']['field_magasin_side_nr_value']['field'] = 'field_magasin_side_nr_value';
  /* Kontekstuelt filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $translatables['magasin_sider'] = array(
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
    t('<div class="col-md-12">[nothing_2]</div>'),
    t('Field collection item ID'),
    t('.'),
    t('Redigér'),
    t('Slet'),
    t('Tilføj'),
    t('Tema: [field_magasin_tema]'),
    t('Status: [field_magasin_side_status]'),
    t('<div class="sidenummer">[field_magasin_side_nr]</div>([counter]) [field_magasin_side_status]'),
    t('Artikler'),
    t('Alle'),
  );
  $export['magasin_sider'] = $view;

  $view = new view();
  $view->name = 'magasinstatus';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'magasinstatus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Udgivelser';
  $handler->display->display_options['css_class'] = 'magasinflow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any magazine content';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'magazine' => 'magazine',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['layout'] = 'ktcstd';
  $handler->display->display_options['row_options']['regions'] = array(
    'title' => 'right',
    'field_udgivelsesdato' => 'right',
    'field_udgave' => 'right',
    'field_forside_billede_' => 'right',
    'field_top_artikel' => 'right',
    'field_ekstra_artikler' => 'right',
    'field_bannere' => 'right',
    'field_banner_1_tekst_og_link' => 'right',
    'field_banner_2' => 'right',
    'field_banner_2_tekst_og_link' => 'right',
    'field_linkbladreversion' => 'right',
    'delta' => 'left',
    'field_magasin_indhold' => 'left',
    'edit_node' => 'right',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: View-område */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'magasinstatus:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Udgivelsesdato */
  $handler->display->display_options['fields']['field_udgivelsesdato']['id'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['field'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_wrapper_class'] = 'h5';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udgivelsesdato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Udgave */
  $handler->display->display_options['fields']['field_udgave']['id'] = 'field_udgave';
  $handler->display->display_options['fields']['field_udgave']['table'] = 'field_data_field_udgave';
  $handler->display->display_options['fields']['field_udgave']['field'] = 'field_udgave';
  $handler->display->display_options['fields']['field_udgave']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udgave']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udgave']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_udgave']['element_wrapper_class'] = 'h5';
  $handler->display->display_options['fields']['field_udgave']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Forside (billede) */
  $handler->display->display_options['fields']['field_forside_billede_']['id'] = 'field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['table'] = 'field_data_field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['field'] = 'field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['label'] = '';
  $handler->display->display_options['fields']['field_forside_billede_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_forside_billede_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_forside_billede_']['settings'] = array(
    'image_style' => 'netvaerks_logo',
    'image_link' => '',
  );
  /* Felt: Indhold: Top artikel */
  $handler->display->display_options['fields']['field_top_artikel']['id'] = 'field_top_artikel';
  $handler->display->display_options['fields']['field_top_artikel']['table'] = 'field_data_field_top_artikel';
  $handler->display->display_options['fields']['field_top_artikel']['field'] = 'field_top_artikel';
  $handler->display->display_options['fields']['field_top_artikel']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_top_artikel']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_top_artikel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_top_artikel']['settings'] = array(
    'link' => 1,
  );
  /* Felt: Indhold: Ekstra artikler */
  $handler->display->display_options['fields']['field_ekstra_artikler']['id'] = 'field_ekstra_artikler';
  $handler->display->display_options['fields']['field_ekstra_artikler']['table'] = 'field_data_field_ekstra_artikler';
  $handler->display->display_options['fields']['field_ekstra_artikler']['field'] = 'field_ekstra_artikler';
  $handler->display->display_options['fields']['field_ekstra_artikler']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_ekstra_artikler']['delta_offset'] = '0';
  /* Felt: Indhold: Banner 1 */
  $handler->display->display_options['fields']['field_bannere']['id'] = 'field_bannere';
  $handler->display->display_options['fields']['field_bannere']['table'] = 'field_data_field_bannere';
  $handler->display->display_options['fields']['field_bannere']['field'] = 'field_bannere';
  $handler->display->display_options['fields']['field_bannere']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bannere']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Indhold: Banner 1 tekst og link */
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['id'] = 'field_banner_1_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['table'] = 'field_data_field_banner_1_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['field'] = 'field_banner_1_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['click_sort_column'] = 'url';
  /* Felt: Indhold: Banner 2 */
  $handler->display->display_options['fields']['field_banner_2']['id'] = 'field_banner_2';
  $handler->display->display_options['fields']['field_banner_2']['table'] = 'field_data_field_banner_2';
  $handler->display->display_options['fields']['field_banner_2']['field'] = 'field_banner_2';
  $handler->display->display_options['fields']['field_banner_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Indhold: Banner 2 tekst og link */
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['id'] = 'field_banner_2_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['table'] = 'field_data_field_banner_2_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['field'] = 'field_banner_2_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['click_sort_column'] = 'url';
  /* Felt: Indhold: Link til bladreversion */
  $handler->display->display_options['fields']['field_linkbladreversion']['id'] = 'field_linkbladreversion';
  $handler->display->display_options['fields']['field_linkbladreversion']['table'] = 'field_data_field_linkbladreversion';
  $handler->display->display_options['fields']['field_linkbladreversion']['field'] = 'field_linkbladreversion';
  $handler->display->display_options['fields']['field_linkbladreversion']['click_sort_column'] = 'url';
  /* Felt: Indhold: Magasin indhold (field_magasin_indhold:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_magasin_indhold';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Magasin indhold */
  $handler->display->display_options['fields']['field_magasin_indhold']['id'] = 'field_magasin_indhold';
  $handler->display->display_options['fields']['field_magasin_indhold']['table'] = 'field_data_field_magasin_indhold';
  $handler->display->display_options['fields']['field_magasin_indhold']['field'] = 'field_magasin_indhold';
  $handler->display->display_options['fields']['field_magasin_indhold']['label'] = '';
  $handler->display->display_options['fields']['field_magasin_indhold']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_indhold']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_magasin_indhold']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_magasin_indhold']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_magasin_indhold']['settings'] = array(
    'name' => 'magasin_sider',
    'display_id' => 'default',
    'add' => 'Tilføj',
  );
  $handler->display->display_options['fields']['field_magasin_indhold']['delta_offset'] = '0';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-warning';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'magazine' => 'magazine',
  );
  /* Filterkriterie: Indhold: Udgivelsesdato (field_udgivelsesdato) */
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['id'] = 'field_udgivelsesdato_value';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['field'] = 'field_udgivelsesdato_value';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['expose']['operator_id'] = 'field_udgivelsesdato_value_op';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['expose']['label'] = 'Udgivet før';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['expose']['operator'] = 'field_udgivelsesdato_value_op';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['expose']['identifier'] = 'field_udgivelsesdato_value';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_udgivelsesdato_value']['year_range'] = '-10:+10';
  /* Filterkriterie: Indhold: Udgivelsesdato (field_udgivelsesdato) */
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['id'] = 'field_udgivelsesdato_value_1';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['field'] = 'field_udgivelsesdato_value';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['expose']['operator_id'] = 'field_udgivelsesdato_value_1_op';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['expose']['label'] = 'Udgivet efter';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['expose']['operator'] = 'field_udgivelsesdato_value_1_op';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['expose']['identifier'] = 'field_udgivelsesdato_value_1';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_udgivelsesdato_value_1']['year_range'] = '-10:+10';
  /* Filterkriterie: Indhold: Udgave (field_udgave) */
  $handler->display->display_options['filters']['field_udgave_value']['id'] = 'field_udgave_value';
  $handler->display->display_options['filters']['field_udgave_value']['table'] = 'field_data_field_udgave';
  $handler->display->display_options['filters']['field_udgave_value']['field'] = 'field_udgave_value';
  $handler->display->display_options['filters']['field_udgave_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_udgave_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udgave_value']['expose']['operator_id'] = 'field_udgave_value_op';
  $handler->display->display_options['filters']['field_udgave_value']['expose']['label'] = 'Udgave';
  $handler->display->display_options['filters']['field_udgave_value']['expose']['operator'] = 'field_udgave_value_op';
  $handler->display->display_options['filters']['field_udgave_value']['expose']['identifier'] = 'field_udgave_value';
  $handler->display->display_options['filters']['field_udgave_value']['expose']['remember_roles'] = array(
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
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'udgivelser';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Udgivelser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_antal_sider' => 'field_antal_sider',
    'field_forside_billede_' => 'field_forside_billede_',
    'field_udgave' => 'field_udgave',
    'field_udgivelsesdato' => 'field_udgivelsesdato',
  );
  $handler->display->display_options['style_options']['default'] = 'field_udgivelsesdato';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antal_sider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_forside_billede_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_udgave' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_udgivelsesdato' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'udgivelser/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Antal sider */
  $handler->display->display_options['fields']['field_antal_sider']['id'] = 'field_antal_sider';
  $handler->display->display_options['fields']['field_antal_sider']['table'] = 'field_data_field_antal_sider';
  $handler->display->display_options['fields']['field_antal_sider']['field'] = 'field_antal_sider';
  $handler->display->display_options['fields']['field_antal_sider']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Forside (billede) */
  $handler->display->display_options['fields']['field_forside_billede_']['id'] = 'field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['table'] = 'field_data_field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['field'] = 'field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['label'] = '';
  $handler->display->display_options['fields']['field_forside_billede_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_forside_billede_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_forside_billede_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_forside_billede_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Felt: Indhold: Udgave */
  $handler->display->display_options['fields']['field_udgave']['id'] = 'field_udgave';
  $handler->display->display_options['fields']['field_udgave']['table'] = 'field_data_field_udgave';
  $handler->display->display_options['fields']['field_udgave']['field'] = 'field_udgave';
  /* Felt: Indhold: Udgivelsesdato */
  $handler->display->display_options['fields']['field_udgivelsesdato']['id'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['field'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Udgivelsesdato (field_udgivelsesdato) */
  $handler->display->display_options['sorts']['field_udgivelsesdato_value']['id'] = 'field_udgivelsesdato_value';
  $handler->display->display_options['sorts']['field_udgivelsesdato_value']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['sorts']['field_udgivelsesdato_value']['field'] = 'field_udgivelsesdato_value';
  $handler->display->display_options['sorts']['field_udgivelsesdato_value']['order'] = 'DESC';
  $translatables['magasinstatus'] = array(
    t('Master'),
    t('Udgivelser'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Page'),
    t('Titel'),
    t('Udgivelsesdato'),
    t('Udgave'),
    t('Top artikel'),
    t('Ekstra artikler'),
    t('Banner 1'),
    t('Banner 1 tekst og link'),
    t('Banner 2'),
    t('Banner 2 tekst og link'),
    t('Link til bladreversion'),
    t('.'),
    t(','),
    t('Rediger'),
    t('Alle'),
    t('Udgivet før'),
    t('Udgivet efter'),
    t('Blok'),
    t('Antal sider'),
  );
  $export['magasinstatus'] = $view;

  return $export;
}
