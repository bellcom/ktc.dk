<?php
/**
 * @file
 * ktc_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ktc_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Banner';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
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
    'field_banner' => 'field_banner',
    'field_bannerlink' => 'field_bannerlink',
    'field_bredt_banner' => 'field_bredt_banner',
    'nid' => 'nid',
    'field_banner_periode' => 'field_banner_periode',
    'field_banner_periode_1' => 'field_banner_periode_1',
    'field_annoncoer' => 'field_annoncoer',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_banner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bannerlink' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bredt_banner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_banner_periode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_banner_periode_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_annoncoer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'well well-sm';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Banner */
  $handler->display->display_options['fields']['field_banner']['id'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner']['table'] = 'field_data_field_banner';
  $handler->display->display_options['fields']['field_banner']['field'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Felt: Indhold: Bannerlink */
  $handler->display->display_options['fields']['field_bannerlink']['id'] = 'field_bannerlink';
  $handler->display->display_options['fields']['field_bannerlink']['table'] = 'field_data_field_bannerlink';
  $handler->display->display_options['fields']['field_bannerlink']['field'] = 'field_bannerlink';
  $handler->display->display_options['fields']['field_bannerlink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_bannerlink']['type'] = 'link_absolute';
  /* Felt: Indhold: Bredt banner */
  $handler->display->display_options['fields']['field_bredt_banner']['id'] = 'field_bredt_banner';
  $handler->display->display_options['fields']['field_bredt_banner']['table'] = 'field_data_field_bredt_banner';
  $handler->display->display_options['fields']['field_bredt_banner']['field'] = 'field_bredt_banner';
  $handler->display->display_options['fields']['field_bredt_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bredt_banner']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Banner ID';
  /* Felt: Indhold: Periode */
  $handler->display->display_options['fields']['field_banner_periode']['id'] = 'field_banner_periode';
  $handler->display->display_options['fields']['field_banner_periode']['table'] = 'field_data_field_banner_periode';
  $handler->display->display_options['fields']['field_banner_periode']['field'] = 'field_banner_periode';
  $handler->display->display_options['fields']['field_banner_periode']['label'] = 'Start';
  $handler->display->display_options['fields']['field_banner_periode']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Periode */
  $handler->display->display_options['fields']['field_banner_periode_1']['id'] = 'field_banner_periode_1';
  $handler->display->display_options['fields']['field_banner_periode_1']['table'] = 'field_data_field_banner_periode';
  $handler->display->display_options['fields']['field_banner_periode_1']['field'] = 'field_banner_periode';
  $handler->display->display_options['fields']['field_banner_periode_1']['label'] = 'Slut';
  $handler->display->display_options['fields']['field_banner_periode_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Annoncør */
  $handler->display->display_options['fields']['field_annoncoer']['id'] = 'field_annoncoer';
  $handler->display->display_options['fields']['field_annoncoer']['table'] = 'field_data_field_annoncoer';
  $handler->display->display_options['fields']['field_annoncoer']['field'] = 'field_annoncoer';
  $handler->display->display_options['fields']['field_annoncoer']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Aktiv';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/bannere';

  /* Display: Banner - alm */
  $handler = $view->new_display('panel_pane', 'Banner - alm', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: Indhold: Banner (field_banner:fid) */
  $handler->display->display_options['filters']['field_banner_fid']['id'] = 'field_banner_fid';
  $handler->display->display_options['filters']['field_banner_fid']['table'] = 'field_data_field_banner';
  $handler->display->display_options['filters']['field_banner_fid']['field'] = 'field_banner_fid';
  $handler->display->display_options['filters']['field_banner_fid']['operator'] = 'not empty';
  $translatables['banner'] = array(
    t('Master'),
    t('Banner'),
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
    t('Titel'),
    t('Page'),
    t('Bannerlink'),
    t('Bredt banner'),
    t('Banner ID'),
    t('Start'),
    t('Slut'),
    t('Annoncør'),
    t('Aktiv'),
    t('Banner - alm'),
    t('Alle'),
    t('View panes'),
  );
  $export['banner'] = $view;

  $view = new view();
  $view->name = 'comments_in_teaser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Comments  in teaser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comments  in teaser';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'comment';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Forbindelse: Kommentar: Indhold */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Forbindelse: Kommentar: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Kommentar: Titel */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Felt: Kommentar: Forfatter */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Felt: Kommentar: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* Felt: Kommentar: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-user-comments">
                [picture]
                <div class="panel-user-comments-content">
                    <h5>[name] <span>[created]</span></h5>
                    <p>[comment_body]</p>
                </div>
            </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Kommentar: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Kommentar: Godkendt */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Kommentar: Titel */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Felt: Kommentar: Forfatter */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Felt: Kommentar: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* Felt: Kommentar: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ktc-comments-list-item">

  <div class="ktc-comments-list-item-wrapper">

    [picture]

    <div class="ktc-comments-list-content">

      <p class="ktc-date"><strong>[name]</strong> [created]</p>

      [comment_body]

    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['comments_in_teaser'] = array(
    t('Master'),
    t('Comments  in teaser'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Indhold'),
    t('forfatter'),
    t('<div class="panel-user-comments">
                [picture]
                <div class="panel-user-comments-content">
                    <h5>[name] <span>[created]</span></h5>
                    <p>[comment_body]</p>
                </div>
            </div>'),
    t('Alle'),
    t('Block'),
    t('<div class="ktc-comments-list-item">

  <div class="ktc-comments-list-item-wrapper">

    [picture]

    <div class="ktc-comments-list-content">

      <p class="ktc-date"><strong>[name]</strong> [created]</p>

      [comment_body]

    </div>
  </div>
</div>'),
  );
  $export['comments_in_teaser'] = $view;

  $view = new view();
  $view->name = 'footer_contact_persons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Footer kontaktpersoner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kontaktpersoner';
  $handler->display->display_options['css_class'] = 'row';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-12 col-sm-12 col-xs-12';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list2';
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Felt: Fornavn + mellemnavn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['label'] = '';
  $handler->display->display_options['fields']['field_navn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_navn']['alter']['link_class'] = 'username';
  $handler->display->display_options['fields']['field_navn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_navn']['empty'] = '[name]';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = 'Send en mail';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-3 col-sm-3 col-xs-3 no-padding">
[picture]
</div>
<div class="col-md-9 col-sm-9 col-xs-9">
[field_navn] <br/>
[mail]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Bruger: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Roller */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['footer_contact_persons'] = array(
    t('Master'),
    t('Kontaktpersoner'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('[name]'),
    t('Send en mail'),
    t('<div class="col-md-3 col-sm-3 col-xs-3 no-padding">
[picture]
</div>
<div class="col-md-9 col-sm-9 col-xs-9">
[field_navn] <br/>
[mail]
</div>'),
    t('Block'),
  );
  $export['footer_contact_persons'] = $view;

  $view = new view();
  $view->name = 'ktc_netvaerkspraesentation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'KTC Netværkspræsentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Felt: OG membership: grouprole */
  $handler->display->display_options['fields']['field_grouprole']['id'] = 'field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['field'] = 'field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['field_grouprole']['label'] = 'Gruppe rolle';
  $handler->display->display_options['fields']['field_grouprole']['settings'] = array(
    'link' => 0,
  );
  /* Sorteringskriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['sorts']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['order'] = 'DESC';
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Formand */
  $handler = $view->new_display('panel_pane', 'Formand', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Formand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-aside-green ktc-user-profile-xl';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23217';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Medlemmer */
  $handler = $view->new_display('panel_pane', 'Medlemmer', 'bs3_masonry');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medlemmer';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ktc-aside-body-row';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-6 col-lg-6 bs3-masonry-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list4';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Felt: Efternavn (field_efternavn) */
  $handler->display->display_options['sorts']['field_efternavn_value']['id'] = 'field_efternavn_value';
  $handler->display->display_options['sorts']['field_efternavn_value']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['sorts']['field_efternavn_value']['field'] = 'field_efternavn_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23216';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['id'] = 'field_grouprole_target_id_1';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['value']['value'] = '23222';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_2']['id'] = 'field_grouprole_target_id_2';
  $handler->display->display_options['filters']['field_grouprole_target_id_2']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_2']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_2']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_2']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_2']['value']['value'] = '23220';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['id'] = 'field_grouprole_target_id_3';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['value']['value'] = '23217';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_4']['id'] = 'field_grouprole_target_id_4';
  $handler->display->display_options['filters']['field_grouprole_target_id_4']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_4']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_4']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_4']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_4']['value']['value'] = '23218';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['id'] = 'field_grouprole_target_id_5';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['value']['value'] = '23219';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_6']['id'] = 'field_grouprole_target_id_6';
  $handler->display->display_options['filters']['field_grouprole_target_id_6']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_6']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_6']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_6']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_6']['value']['value'] = '23223';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_7']['id'] = 'field_grouprole_target_id_7';
  $handler->display->display_options['filters']['field_grouprole_target_id_7']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_7']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_7']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_7']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_7']['value']['value'] = '23224';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_8']['id'] = 'field_grouprole_target_id_8';
  $handler->display->display_options['filters']['field_grouprole_target_id_8']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_8']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_8']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_8']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_8']['value']['value'] = '23227';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['id'] = 'field_grouprole_target_id_9';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['value']['value'] = '23225';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_10']['id'] = 'field_grouprole_target_id_10';
  $handler->display->display_options['filters']['field_grouprole_target_id_10']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_10']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_10']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_10']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_10']['value']['value'] = '50494';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['id'] = 'field_grouprole_target_id_11';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['value']['value'] = '50495';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: KTC Ref.best.medlem */
  $handler = $view->new_display('panel_pane', 'KTC Ref.best.medlem', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KTC referencebestyrelsesmedlem';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-aside-green ktc-user-profile-l ';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list3';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23225';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Høringstovholder */
  $handler = $view->new_display('panel_pane', 'Høringstovholder', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Høringstovholder';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-aside-green ktc-user-profile-l';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list3';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23222';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Sekretær */
  $handler = $view->new_display('panel_pane', 'Sekretær', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sekretær';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23219';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Kasserer */
  $handler = $view->new_display('panel_pane', 'Kasserer', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kasserer';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23220';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Best.medlem */
  $handler = $view->new_display('panel_pane', 'Best.medlem', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bestyrelsesmedlem';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23227';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Best.supleant */
  $handler = $view->new_display('panel_pane', 'Best.supleant', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suppleant til bestyrelsen';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '50494';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Udpeget */
  $handler = $view->new_display('panel_pane', 'Udpeget', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Særligt udpeget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23226';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Netv.admin */
  $handler = $view->new_display('panel_pane', 'Netv.admin', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Netværksadministrator';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23224';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: KTC Ansvarlig */
  $handler = $view->new_display('panel_pane', 'KTC Ansvarlig', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KTC ansvarlig';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23223';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Næstformand */
  $handler = $view->new_display('panel_pane', 'Næstformand', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Næstformand';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bs3-masonry-item col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23218';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Underfaggruppe-formand */
  $handler = $view->new_display('panel_pane', 'Underfaggruppe-formand', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Underfaggruppe-formand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list6';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '50495';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Faggruppe medlemmer */
  $handler = $view->new_display('panel_pane', 'Faggruppe medlemmer', 'bs3_masonry_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medlemmer';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ktc-aside-body-row';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-6 col-lg-6 bs3-masonry-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list4';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['sorts']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['field_grouprole_target_id']['order'] = 'DESC';
  /* Sorteringskriterie: Felt: Efternavn (field_efternavn) */
  $handler->display->display_options['sorts']['field_efternavn_value']['id'] = 'field_efternavn_value';
  $handler->display->display_options['sorts']['field_efternavn_value']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['sorts']['field_efternavn_value']['field'] = 'field_efternavn_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['id'] = 'field_grouprole_target_id_1';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_1']['value']['value'] = '23222';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['id'] = 'field_grouprole_target_id_3';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_3']['value']['value'] = '23217';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['id'] = 'field_grouprole_target_id_5';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_5']['value']['value'] = '23219';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['id'] = 'field_grouprole_target_id_9';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_9']['value']['value'] = '23225';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['id'] = 'field_grouprole_target_id_11';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['operator'] = '!=';
  $handler->display->display_options['filters']['field_grouprole_target_id_11']['value']['value'] = '50495';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Faggruppesekretær */
  $handler = $view->new_display('panel_pane', 'Faggruppesekretær', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sekretær';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-aside-green ktc-user-profile-l';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list3';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG membership: grouprole (field_grouprole) */
  $handler->display->display_options['filters']['field_grouprole_target_id']['id'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['filters']['field_grouprole_target_id']['field'] = 'field_grouprole_target_id';
  $handler->display->display_options['filters']['field_grouprole_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['field_grouprole_target_id']['value']['value'] = '23219';
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
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $translatables['ktc_netvaerkspraesentation'] = array(
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
    t('OG membership from user'),
    t('Gruppe rolle'),
    t('Alle'),
    t('Formand'),
    t('View panes'),
    t('Medlemmer'),
    t('KTC Ref.best.medlem'),
    t('KTC referencebestyrelsesmedlem'),
    t('Høringstovholder'),
    t('Sekretær'),
    t('Kasserer'),
    t('Best.medlem'),
    t('Bestyrelsesmedlem'),
    t('Best.supleant'),
    t('Suppleant til bestyrelsen'),
    t('Udpeget'),
    t('Særligt udpeget'),
    t('Netv.admin'),
    t('Netværksadministrator'),
    t('KTC Ansvarlig'),
    t('KTC ansvarlig'),
    t('Næstformand'),
    t('Underfaggruppe-formand'),
    t('Faggruppe medlemmer'),
    t('Faggruppesekretær'),
  );
  $export['ktc_netvaerkspraesentation'] = $view;

  $view = new view();
  $view->name = 'ktc_og_members';
  $view->description = 'Newest group members.';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'KTC OG members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
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
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list4';
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  /* Sorteringskriterie: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = 'Medlemmer af %1';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list4';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="og-members-all ktc-call-to-action-button"><a href="#" class="btn btn-default">Se alle medlemmer</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Forbindelse: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['operator'] = 'not';
  $handler->display->display_options['filters']['name']['value'] = array(
    'Netværksadministrator' => 'Netværksadministrator',
  );
  $handler->display->display_options['pane_title'] = 'KTC OG members';
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Medlemsliste gruppe venstre */
  $handler = $view->new_display('panel_pane', 'Medlemsliste gruppe venstre', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Forbindelse: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'administrator member' => 'administrator member',
  );
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  $handler->display->display_options['pane_title'] = 'KTC OG members admin';
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Medlemsliste til modal */
  $handler = $view->new_display('block', 'Medlemsliste til modal', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_navn' => 'field_navn',
    'field_efternavn' => 'field_efternavn',
    'mail' => 'mail',
    'field_directe_telefon' => 'field_directe_telefon',
    'field_cell' => 'field_directe_telefon',
    'nothing' => 'nothing',
    'field_department' => 'field_department',
    'field_account' => 'field_account',
    'field_toplevelaccountname_1' => 'field_toplevelaccountname_1',
    'field_grouprole' => 'field_grouprole',
    'edit_membership' => 'edit_membership',
    'delete_membership' => 'edit_membership',
  );
  $handler->display->display_options['style_options']['default'] = 'field_navn';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_navn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_efternavn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_directe_telefon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'field_cell' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_toplevelaccountname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grouprole' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Forbindelse: Bruger: Firma (field_account) */
  $handler->display->display_options['relationships']['field_account_tid']['id'] = 'field_account_tid';
  $handler->display->display_options['relationships']['field_account_tid']['table'] = 'field_data_field_account';
  $handler->display->display_options['relationships']['field_account_tid']['field'] = 'field_account_tid';
  /* Forbindelse: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_account_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'ktc-user-profile-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Felt: Felt: Fornavn + mellemnavn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['exclude'] = TRUE;
  /* Felt: Felt: Efternavn */
  $handler->display->display_options['fields']['field_efternavn']['id'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['field'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['label'] = 'Navn';
  $handler->display->display_options['fields']['field_efternavn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_efternavn']['alter']['text'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_efternavn']['empty'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_efternavn']['hide_alter_empty'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* Felt: Felt: Direkte telefon */
  $handler->display->display_options['fields']['field_directe_telefon']['id'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['table'] = 'field_data_field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['field'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['label'] = 'Telefon/Mobil';
  $handler->display->display_options['fields']['field_directe_telefon']['exclude'] = TRUE;
  /* Felt: Bruger: Mobil */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['exclude'] = TRUE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Navn, e-mail og telefon nr.';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_navn] [field_efternavn]<br/>
[mail]<br/>
[field_directe_telefon] [field_cell] ';
  /* Felt: Bruger: Afdeling */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  /* Felt: Bruger: Firma */
  $handler->display->display_options['fields']['field_account']['id'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['table'] = 'field_data_field_account';
  $handler->display->display_options['fields']['field_account']['field'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['field_account']['empty'] = '[field_department]';
  $handler->display->display_options['fields']['field_account']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Ord i ordforråd: TopLevelAccountName */
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['id'] = 'field_toplevelaccountname_1';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['table'] = 'field_data_field_toplevelaccountname';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['field'] = 'field_toplevelaccountname';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['relationship'] = 'field_account_tid';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['label'] = 'Kommune';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['empty'] = '[field_account]';
  /* Felt: OG membership: grouprole */
  $handler->display->display_options['fields']['field_grouprole']['id'] = 'field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['field'] = 'field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['field_grouprole']['label'] = 'Rolle';
  $handler->display->display_options['fields']['field_grouprole']['settings'] = array(
    'link' => 0,
  );
  /* Felt: OG membership: Redigér-link */
  $handler->display->display_options['fields']['edit_membership']['id'] = 'edit_membership';
  $handler->display->display_options['fields']['edit_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['edit_membership']['field'] = 'edit_membership';
  $handler->display->display_options['fields']['edit_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['edit_membership']['label'] = '';
  $handler->display->display_options['fields']['edit_membership']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_membership']['alter']['text'] = '<span class="btn btn-default btn-xs"><span class="glyphicon glyphicon-edit"></span></span>';
  $handler->display->display_options['fields']['edit_membership']['element_label_colon'] = FALSE;
  /* Felt: OG membership: Slet-link */
  $handler->display->display_options['fields']['delete_membership']['id'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['delete_membership']['field'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['delete_membership']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['delete_membership']['alter']['text'] = '<span class="btn btn-danger btn-xs"><span class="glyphicon glyphicon-remove"></span></span>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 medlemmer';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';

  /* Display: Medlemsliste gruppe center */
  $handler = $view->new_display('panel_pane', 'Medlemsliste gruppe center', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pane-ktc-og-members';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list7';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['pane_title'] = 'KTC OG members';
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Medlemsliste til modal - ansøgere */
  $handler = $view->new_display('block', 'Medlemsliste til modal - ansøgere', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_navn' => 'field_navn',
    'field_efternavn' => 'field_efternavn',
    'mail' => 'mail',
    'field_directe_telefon' => 'field_directe_telefon',
    'field_cell' => 'field_directe_telefon',
    'field_department' => 'field_department',
    'field_account' => 'field_account',
    'field_toplevelaccountname_1' => 'field_toplevelaccountname_1',
    'field_grouprole' => 'field_grouprole',
    'edit_membership' => 'edit_membership',
    'delete_membership' => 'edit_membership',
    'gid' => 'gid',
    'id' => 'edit_membership',
  );
  $handler->display->display_options['style_options']['default'] = 'field_navn';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_navn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_efternavn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_directe_telefon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'field_cell' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_toplevelaccountname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grouprole' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Forbindelse: Bruger: Firma (field_account) */
  $handler->display->display_options['relationships']['field_account_tid']['id'] = 'field_account_tid';
  $handler->display->display_options['relationships']['field_account_tid']['table'] = 'field_data_field_account';
  $handler->display->display_options['relationships']['field_account_tid']['field'] = 'field_account_tid';
  /* Forbindelse: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_account_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'ktc-user-profile-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Felt: Felt: Fornavn + mellemnavn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['exclude'] = TRUE;
  /* Felt: Felt: Efternavn */
  $handler->display->display_options['fields']['field_efternavn']['id'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['field'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['label'] = 'Navn';
  $handler->display->display_options['fields']['field_efternavn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_efternavn']['alter']['text'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_efternavn']['empty'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_efternavn']['hide_alter_empty'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Felt: Felt: Direkte telefon */
  $handler->display->display_options['fields']['field_directe_telefon']['id'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['table'] = 'field_data_field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['field'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['label'] = 'Telefon/Mobil';
  /* Felt: Bruger: Mobil */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  /* Felt: Bruger: Afdeling */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  /* Felt: Bruger: Firma */
  $handler->display->display_options['fields']['field_account']['id'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['table'] = 'field_data_field_account';
  $handler->display->display_options['fields']['field_account']['field'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['field_account']['empty'] = '[field_department]';
  $handler->display->display_options['fields']['field_account']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Ord i ordforråd: TopLevelAccountName */
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['id'] = 'field_toplevelaccountname_1';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['table'] = 'field_data_field_toplevelaccountname';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['field'] = 'field_toplevelaccountname';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['relationship'] = 'field_account_tid';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['label'] = 'Kommune';
  $handler->display->display_options['fields']['field_toplevelaccountname_1']['empty'] = '[field_account]';
  /* Felt: OG membership: grouprole */
  $handler->display->display_options['fields']['field_grouprole']['id'] = 'field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['table'] = 'field_data_field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['field'] = 'field_grouprole';
  $handler->display->display_options['fields']['field_grouprole']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['field_grouprole']['label'] = 'Rolle';
  $handler->display->display_options['fields']['field_grouprole']['settings'] = array(
    'link' => 0,
  );
  /* Felt: OG membership: Redigér-link */
  $handler->display->display_options['fields']['edit_membership']['id'] = 'edit_membership';
  $handler->display->display_options['fields']['edit_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['edit_membership']['field'] = 'edit_membership';
  $handler->display->display_options['fields']['edit_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['edit_membership']['label'] = '';
  $handler->display->display_options['fields']['edit_membership']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_membership']['alter']['text'] = '<span class="btn btn-default btn-xs"><span class="glyphicon glyphicon-edit"></span></span>';
  $handler->display->display_options['fields']['edit_membership']['element_label_colon'] = FALSE;
  /* Felt: OG membership: Slet-link */
  $handler->display->display_options['fields']['delete_membership']['id'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['delete_membership']['field'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['delete_membership']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['delete_membership']['alter']['text'] = '<span class="btn btn-danger btn-xs"><span class="glyphicon glyphicon-remove"></span></span>';
  /* Felt: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid']['label'] = '';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['gid']['alter']['text'] = '[gid]';
  $handler->display->display_options['fields']['gid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gid']['separator'] = '';
  /* Felt: OG membership: Og membership ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'og_membership';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = '<span class="btn btn-success btn-xs"><span class="glyphicon glyphicon-ok"></span></span>';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'group/node/[gid]/admin/people/approve-membership/[id]';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 medlemmer';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    2 => '2',
    3 => '3',
  );
  $translatables['ktc_og_members'] = array(
    t('Defaults'),
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
    t('OG membership from user'),
    t('Alle'),
    t('Medlemmer af %1'),
    t('Block'),
    t('Content pane'),
    t('<div class="og-members-all ktc-call-to-action-button"><a href="#" class="btn btn-default">Se alle medlemmer</a></div>'),
    t('OG Roles from OG membership'),
    t('KTC OG members'),
    t('View panes'),
    t('Medlemsliste gruppe venstre'),
    t('KTC OG members admin'),
    t('Medlemsliste til modal'),
    t('term fra field_account'),
    t('Overordnet element'),
    t('Billede'),
    t('Fornavn + mellemnavn'),
    t('Navn'),
    t('[field_navn] [field_efternavn]'),
    t('E-mail'),
    t('Telefon/Mobil'),
    t('Mobil'),
    t('Navn, e-mail og telefon nr.'),
    t('[field_navn] [field_efternavn]<br/>
[mail]<br/>
[field_directe_telefon] [field_cell] '),
    t('Afdeling'),
    t('[field_department]'),
    t('Kommune'),
    t('[field_account]'),
    t('Rolle'),
    t('<span class="btn btn-default btn-xs"><span class="glyphicon glyphicon-edit"></span></span>'),
    t('Slet-link'),
    t('<span class="btn btn-danger btn-xs"><span class="glyphicon glyphicon-remove"></span></span>'),
    t('%1 medlemmer'),
    t('Medlemsliste gruppe center'),
    t('Medlemsliste til modal - ansøgere'),
    t('[gid]'),
    t('.'),
    t('<span class="btn btn-success btn-xs"><span class="glyphicon glyphicon-ok"></span></span>'),
  );
  $export['ktc_og_members'] = $view;

  $view = new view();
  $view->name = 'ktc_og_members_admin';
  $view->description = '';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'KTC OG members admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OG members admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
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
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'state' => 'state',
    'og_roles' => 'og_roles',
    'created' => 'created',
    'og_membership_request' => 'og_membership_request',
    'edit_membership' => 'edit_membership',
    'delete_membership' => 'edit_membership',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_roles' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_membership_request' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_membership' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: OG membership: Group membership overview */
  $handler->display->display_options['header']['og_membership_overview']['id'] = 'og_membership_overview';
  $handler->display->display_options['header']['og_membership_overview']['table'] = 'og_membership';
  $handler->display->display_options['header']['og_membership_overview']['field'] = 'og_membership_overview';
  $handler->display->display_options['header']['og_membership_overview']['manager'] = 1;
  $handler->display->display_options['header']['og_membership_overview']['total_members_1'] = 0;
  $handler->display->display_options['header']['og_membership_overview']['total_members_2'] = 0;
  $handler->display->display_options['header']['og_membership_overview']['total_members_3'] = 0;
  $handler->display->display_options['header']['og_membership_overview']['total_members'] = 1;
  $handler->display->display_options['header']['og_membership_overview']['total_content'] = 1;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No people found matching the search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Felt: Masse-handlinger: OG membership */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::og_user_roles_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
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
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::og_membership_delete_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::og_set_state_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Felt: OG membership: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'og_membership';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['state']['label'] = 'Status';
  /* Felt: OG membership: OG user roles in group */
  $handler->display->display_options['fields']['og_roles']['id'] = 'og_roles';
  $handler->display->display_options['fields']['og_roles']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_roles']['field'] = 'og_roles';
  $handler->display->display_options['fields']['og_roles']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['og_roles']['label'] = 'Roller';
  $handler->display->display_options['fields']['og_roles']['type'] = 'ul';
  /* Felt: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Felt: OG membership: Besked */
  $handler->display->display_options['fields']['og_membership_request']['id'] = 'og_membership_request';
  $handler->display->display_options['fields']['og_membership_request']['table'] = 'field_data_og_membership_request';
  $handler->display->display_options['fields']['og_membership_request']['field'] = 'og_membership_request';
  $handler->display->display_options['fields']['og_membership_request']['relationship'] = 'og_membership_rel';
  /* Felt: OG membership: Redigér-link */
  $handler->display->display_options['fields']['edit_membership']['id'] = 'edit_membership';
  $handler->display->display_options['fields']['edit_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['edit_membership']['field'] = 'edit_membership';
  $handler->display->display_options['fields']['edit_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['edit_membership']['label'] = '';
  $handler->display->display_options['fields']['edit_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_membership']['destination'] = TRUE;
  /* Felt: OG membership: Slet-link */
  $handler->display->display_options['fields']['delete_membership']['id'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['delete_membership']['field'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['delete_membership']['label'] = '';
  $handler->display->display_options['fields']['delete_membership']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Bruger: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Kontekstuelt filter: OG membership: Group_type */
  $handler->display->display_options['arguments']['group_type']['id'] = 'group_type';
  $handler->display->display_options['arguments']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group_type']['field'] = 'group_type';
  $handler->display->display_options['arguments']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group_type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['group_type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group_type']['limit'] = '0';
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filterkriterie: Bruger: Navn */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['ktc_og_members_admin'] = array(
    t('Master'),
    t('OG members admin'),
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
    t('No people found matching the search criteria.'),
    t('OG membership from user'),
    t('OG membership'),
    t('- Vælg en handling -'),
    t('Navn'),
    t('Status'),
    t('Roller'),
    t('Member since'),
    t('Besked'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ktc_og_members_admin'] = $view;

  $view = new view();
  $view->name = 'ktc_og_user_groups';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'KTC OG User groups and filters';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
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
  $handler->display->display_options['empty']['area']['content'] = 'Ingen netværk';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: OG membership: Group Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Kontekstuelt filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['etid']['title'] = '%1\'s groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: KTC OG user group */
  $handler = $view->new_display('panel_pane', 'KTC OG user group', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'KTC OG user\'s groups';
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );

  /* Display: KTC users groups */
  $handler = $view->new_display('panel_pane', 'KTC users groups', 'panel_pane_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'field-items [field_netvaerkstype]';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Indhold: Netværkstype */
  $handler->display->display_options['fields']['field_netvaerkstype']['id'] = 'field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['table'] = 'field_data_field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['field'] = 'field_netvaerkstype';
  $handler->display->display_options['fields']['field_netvaerkstype']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_netvaerkstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_netvaerkstype']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Kontekstuelt filter: term_type */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'term_type';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'netv_rkstype' => 'netv_rkstype',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
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
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['term_node_tid_depth_3']['ui_name'] = 'regioner';
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
  $handler->display->display_options['pane_title'] = 'Mine netværk';
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
    'etid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass the user ID as the Entity ID.',
    ),
    'term_node_tid_depth' => array(
      'type' => 'none',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'term_type',
    ),
    'term_node_tid_depth_1' => array(
      'type' => 'none',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'emner',
    ),
    'term_node_tid_depth_2' => array(
      'type' => 'none',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'tags',
    ),
    'term_node_tid_depth_3' => array(
      'type' => 'none',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'regioner',
    ),
  );

  /* Display: KTC users filter groups */
  $handler = $view->new_display('panel_pane', 'KTC users filter groups', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'filter-box';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="filter-box">
<div class="ktc-filter-button-container">
  <div class="btn btn-default filter-link" id="filter-all" data-filter="all">ALLE</div>
</div>
<div class="ktc-filter-button-container">
  <div class="btn btn-default filter-link" id="filter-my" data-filter="my">MINE</div>
</div>
<div class="ktc-filter-button-container">
  <div class="btn btn-default filter-link" id="filter-my" data-filter="newest">NYESTE</div>
</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Nyt indhold filtrer grupper */
  $handler = $view->new_display('panel_pane', 'Nyt indhold filtrer grupper', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'filter-box';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="col-md-12 col-sm-12 col-xs-12">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alt</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-12 col-sm-12 col-xs-12">
<div class="btn btn-default filter-link" id="gid-[nid]" data-filter="[nid]" name="filter-gid">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="ktc-call-to-action-button">
  <a href="/netvaerk" class="btn btn-default">Se flere</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['block_description'] = 'Dine netværk';
  $translatables['ktc_og_user_groups'] = array(
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
    t('Ingen netværk'),
    t('Group node from OG membership'),
    t('Alle'),
    t('%1\'s groups'),
    t('KTC OG user group'),
    t('KTC OG user\'s groups'),
    t('View panes'),
    t('KTC users groups'),
    t('forrige'),
    t('næste'),
    t('Netværkstype'),
    t('Mine netværk'),
    t('KTC users filter groups'),
    t('<div class="filter-box">
<div class="ktc-filter-button-container">
  <div class="btn btn-default filter-link" id="filter-all" data-filter="all">ALLE</div>
</div>
<div class="ktc-filter-button-container">
  <div class="btn btn-default filter-link" id="filter-my" data-filter="my">MINE</div>
</div>
<div class="ktc-filter-button-container">
  <div class="btn btn-default filter-link" id="filter-my" data-filter="newest">NYESTE</div>
</div>
</div>'),
    t('Nyt indhold filtrer grupper'),
    t('<div class="col-md-12 col-sm-12 col-xs-12">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alt</div>
</div>'),
    t('<div class="col-md-12 col-sm-12 col-xs-12">
<div class="btn btn-default filter-link" id="gid-[nid]" data-filter="[nid]" name="filter-gid">[title]</div>
</div>'),
    t('Blok'),
    t('<div class="ktc-call-to-action-button">
  <a href="/netvaerk" class="btn btn-default">Se flere</a>
</div>'),
    t('Dine netværk'),
  );
  $export['ktc_og_user_groups'] = $view;

  $view = new view();
  $view->name = 'leverandoerer_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Leverandører list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leverandører list';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/om-ktc/leverandoerer" class="btn btn-primary">Tilbage til kategori-listen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'ktc_supplier' => 'ktc_supplier',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KTC Leverandører';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Ufiltreret tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1>Leverandørliste</h1>';
  $handler->display->display_options['path'] = 'leverandoerlist';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>%1</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Leverandører kategori (field_supplier_type) */
  $handler->display->display_options['arguments']['field_supplier_type_tid']['id'] = 'field_supplier_type_tid';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['table'] = 'field_data_field_supplier_type';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['field'] = 'field_supplier_type_tid';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_supplier_type_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_supplier_type_tid']['breadcrumb'] = 'Leverandører - %1';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_supplier_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_supplier_type_tid']['validate_options']['vocabularies'] = array(
    'suppelier_type' => 'suppelier_type',
  );
  $handler->display->display_options['path'] = 'om-ktc/leverandoerer/%';

  /* Display: Leverandørkategori */
  $handler = $view->new_display('panel_pane', 'Leverandørkategori', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Leverandør kategori(er)';
  $handler->display->display_options['display_description'] = 'På leverandør node side';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br/><a href="/om-ktc/leverandoerer" class="btn btn-primary">Se alle kategorier</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Leverandører kategori */
  $handler->display->display_options['fields']['field_supplier_type']['id'] = 'field_supplier_type';
  $handler->display->display_options['fields']['field_supplier_type']['table'] = 'field_data_field_supplier_type';
  $handler->display->display_options['fields']['field_supplier_type']['field'] = 'field_supplier_type';
  $handler->display->display_options['fields']['field_supplier_type']['label'] = '';
  $handler->display->display_options['fields']['field_supplier_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_supplier_type']['alter']['text'] = '[field_supplier_type]';
  $handler->display->display_options['fields']['field_supplier_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_supplier_type']['alter']['path'] = '/om-ktc/leverandoerer/[field_supplier_type-tid]';
  $handler->display->display_options['fields']['field_supplier_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supplier_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_supplier_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $translatables['leverandoerer_list'] = array(
    t('Master'),
    t('Leverandører list'),
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
    t('<a href="/om-ktc/leverandoerer" class="btn btn-primary">Tilbage til kategori-listen</a>'),
    t('Page'),
    t('KTC Leverandører'),
    t('<h1>Leverandørliste</h1>'),
    t('Side'),
    t('<h1>%1</h1>'),
    t('Alle'),
    t('%1'),
    t('Leverandører - %1'),
    t('Leverandørkategori'),
    t('Leverandør kategori(er)'),
    t('På leverandør node side'),
    t('<br/><a href="/om-ktc/leverandoerer" class="btn btn-primary">Se alle kategorier</a>'),
    t('[field_supplier_type]'),
    t('View panes'),
  );
  $export['leverandoerer_list'] = $view;

  $view = new view();
  $view->name = 'magazine_banners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Udgivelser banners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Udgivelser banners';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Felt: Indhold: Banner 1 */
  $handler->display->display_options['fields']['field_bannere']['id'] = 'field_bannere';
  $handler->display->display_options['fields']['field_bannere']['table'] = 'field_data_field_bannere';
  $handler->display->display_options['fields']['field_bannere']['field'] = 'field_bannere';
  $handler->display->display_options['fields']['field_bannere']['label'] = '';
  $handler->display->display_options['fields']['field_bannere']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bannere']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bannere']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_bannere']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bannere']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bannere']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bannere']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bannere']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bannere']['settings'] = array(
    'image_style' => 'magazine_teaser_banner',
    'image_link' => '',
  );
  /* Felt: Indhold: Banner 1 tekst og link */
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['id'] = 'field_banner_1_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['table'] = 'field_data_field_banner_1_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['field'] = 'field_banner_1_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['alter']['text'] = '<a href="[field_banner_1_tekst_og_link-url]" title="[field_banner_1_tekst_og_link-title]">
  [field_bannere]
</a>';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['empty'] = '[field_bannere]';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_1_tekst_og_link']['type'] = 'link_plain';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'magazine' => 'magazine',
  );
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

  /* Display: Banner 1 */
  $handler = $view->new_display('panel_pane', 'Banner 1', 'panel_pane_1');
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

  /* Display: Banner 2 */
  $handler = $view->new_display('panel_pane', 'Banner 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Banner 2 */
  $handler->display->display_options['fields']['field_banner_2']['id'] = 'field_banner_2';
  $handler->display->display_options['fields']['field_banner_2']['table'] = 'field_data_field_banner_2';
  $handler->display->display_options['fields']['field_banner_2']['field'] = 'field_banner_2';
  $handler->display->display_options['fields']['field_banner_2']['label'] = '';
  $handler->display->display_options['fields']['field_banner_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_banner_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_banner_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_banner_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_banner_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_2']['settings'] = array(
    'image_style' => 'magazine_teaser_banner',
    'image_link' => '',
  );
  /* Felt: Indhold: Banner 2 tekst og link */
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['id'] = 'field_banner_2_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['table'] = 'field_data_field_banner_2_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['field'] = 'field_banner_2_tekst_og_link';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['alter']['text'] = '<a href="[field_banner_2_tekst_og_link-url]" title="[field_banner_2_tekst_og_link-title]">
  [field_banner_2]
</a>';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['empty'] = '[field_banner_2]';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_2_tekst_og_link']['type'] = 'link_plain';
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

  /* Display: Forside */
  $handler = $view->new_display('panel_pane', 'Forside', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Forside (billede) */
  $handler->display->display_options['fields']['field_forside_billede_']['id'] = 'field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['table'] = 'field_data_field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['field'] = 'field_forside_billede_';
  $handler->display->display_options['fields']['field_forside_billede_']['label'] = '';
  $handler->display->display_options['fields']['field_forside_billede_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_forside_billede_']['element_type'] = '0';
  $handler->display->display_options['fields']['field_forside_billede_']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_forside_billede_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_forside_billede_']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_forside_billede_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_forside_billede_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_forside_billede_']['settings'] = array(
    'image_style' => 'magazine_teaser_banner',
    'image_link' => '',
  );
  /* Felt: Indhold: Link til bladreversion */
  $handler->display->display_options['fields']['field_linkbladreversion']['id'] = 'field_linkbladreversion';
  $handler->display->display_options['fields']['field_linkbladreversion']['table'] = 'field_data_field_linkbladreversion';
  $handler->display->display_options['fields']['field_linkbladreversion']['field'] = 'field_linkbladreversion';
  $handler->display->display_options['fields']['field_linkbladreversion']['label'] = '';
  $handler->display->display_options['fields']['field_linkbladreversion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkbladreversion']['alter']['text'] = '<a href="[field_linkbladreversion-url]" title="[field_linkbladreversion-title]">
  [field_forside_billede_]
</a>';
  $handler->display->display_options['fields']['field_linkbladreversion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkbladreversion']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_linkbladreversion']['empty'] = '[field_forside_billede_]';
  $handler->display->display_options['fields']['field_linkbladreversion']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_linkbladreversion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkbladreversion']['type'] = 'link_plain';
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
  $translatables['magazine_banners'] = array(
    t('Master'),
    t('Udgivelser banners'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="[field_banner_1_tekst_og_link-url]" title="[field_banner_1_tekst_og_link-title]">
  [field_bannere]
</a>'),
    t('[field_bannere]'),
    t('Alle'),
    t('Banner 1'),
    t('View panes'),
    t('Banner 2'),
    t('<a href="[field_banner_2_tekst_og_link-url]" title="[field_banner_2_tekst_og_link-title]">
  [field_banner_2]
</a>'),
    t('[field_banner_2]'),
    t('Forside'),
    t('<a href="[field_linkbladreversion-url]" title="[field_linkbladreversion-title]">
  [field_forside_billede_]
</a>'),
    t('[field_forside_billede_]'),
  );
  $export['magazine_banners'] = $view;

  $view = new view();
  $view->name = 'news_skift_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News - Skift term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-warning well well-sm';
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
    'og_group_ref' => 'og_group_ref',
    'views_bulk_operations' => 'views_bulk_operations',
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
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Masse-handlinger: Indhold */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_unpublish_action' => array(
      'selected' => 0,
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
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'os2web_base_news::field_os2web_news_page_type' => 'os2web_base_news::field_os2web_news_page_type',
        ),
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
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
  /* Felt: Indhold: Gruppe/Netværk */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Felt: Indhold: Gruppe/Netværk */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref_1']['delta_offset'] = '0';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filterkriterie: Indhold: Gruppe/Netværk (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Gruppe/Netværk';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news---skift-term';
  $translatables['news_skift_term'] = array(
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
    t('Indhold'),
    t('- Vælg en handling -'),
    t('Gruppe/Netværk'),
    t('Page'),
  );
  $export['news_skift_term'] = $view;

  $view = new view();
  $view->name = 'opret_arrangement';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Opret arrangement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Opret arrangement';
  $handler->display->display_options['css_class'] = 'darkgray-box';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create arrangement content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'node/add/arrangement?field_arrangement_type=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'ktc-link-with-icon ktc-link-with-icon-large ktc-link-icon-arrangement';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'ktc-link-container';
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'arrangementstyper' => 'arrangementstyper',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['opret_arrangement'] = array(
    t('Master'),
    t('Opret arrangement'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('.'),
    t('Block'),
  );
  $export['opret_arrangement'] = $view;

  $view = new view();
  $view->name = 'praesentation_af_netvaerk_indhold';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Præsentation af netværk - indhold';
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
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
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
    'group' => 'group',
  );

  /* Display: Mission */
  $handler = $view->new_display('panel_pane', 'Mission', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Netværks ID',
    ),
  );

  /* Display: Titel */
  $handler = $view->new_display('panel_pane', 'Titel', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Netværks ID',
    ),
  );

  /* Display: Undernetværk */
  $handler = $view->new_display('panel_pane', 'Undernetværk', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisning';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'KTC';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Netværk',
    ),
  );

  /* Display: Medlemmer af (overskrift) */
  $handler = $view->new_display('panel_pane', 'Medlemmer af (overskrift)', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Medlemmer af [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'KTC';
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
      'type' => 'user',
      'context' => 'entity:user.field-adresse',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Netværks ID',
    ),
  );
  $translatables['praesentation_af_netvaerk_indhold'] = array(
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
    t('Mission'),
    t('KTC'),
    t('Titel'),
    t('Undernetværk'),
    t('Indhold entity refereret fra og_group_ref'),
    t('Medlemmer af (overskrift)'),
    t('Medlemmer af [title]'),
  );
  $export['praesentation_af_netvaerk_indhold'] = $view;

  $view = new view();
  $view->name = 'redaktoerinfo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Redaktørinfo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Redaktørinfo';
  $handler->display->display_options['css_class'] = 'well';
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
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Slet';
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Felt: Indhold: Forfatter uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'os2web_base_date_only';
  /* Felt: Indholdsversion: Logbesked */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'os2web_base_date_only';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['redaktoerinfo'] = array(
    t('Master'),
    t('Redaktørinfo'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('forfatter'),
    t('Slet-link'),
    t('Slet'),
    t('Udgivet'),
    t('Type'),
    t('Forfatter uid'),
    t('Navn'),
    t('Opdateringsdato'),
    t('Logbesked'),
    t('Oprettelsesdato'),
    t('Alle'),
    t('Block'),
  );
  $export['redaktoerinfo'] = $view;

  $view = new view();
  $view->name = 'section_page_filter';
  $view->description = 'section_page_filter';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Section page filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtre i kategorier';
  $handler->display->display_options['css_class'] = 'filter-box';
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alle</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kontekstuelt filter: Ordforråd: Ordforråd ID */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filterkriterie: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['relationship'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = 'empty';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Term first level */
  $handler = $view->new_display('panel_pane', 'Term first level', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'filter-box';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alle</div>
</div>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy vocabulary: Vocabulary ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Term first level with chosen ids */
  $handler = $view->new_display('panel_pane', 'Term first level with chosen ids', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link all" id="filter-all" data-filter="all">
Alle
</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['relationship'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = 'empty';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $handler->display->display_options['filters']['parent']['group'] = 1;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw_4']['id'] = 'tid_raw_4';
  $handler->display->display_options['filters']['tid_raw_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_4']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_4']['value']['value'] = '1674';
  $handler->display->display_options['filters']['tid_raw_4']['group'] = 2;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '1717';
  $handler->display->display_options['filters']['tid_raw']['group'] = 2;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw_2']['id'] = 'tid_raw_2';
  $handler->display->display_options['filters']['tid_raw_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_2']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_2']['value']['value'] = '1204';
  $handler->display->display_options['filters']['tid_raw_2']['group'] = 2;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw_1']['id'] = 'tid_raw_1';
  $handler->display->display_options['filters']['tid_raw_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_1']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_1']['value']['value'] = '1714';
  $handler->display->display_options['filters']['tid_raw_1']['group'] = 2;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw_3']['id'] = 'tid_raw_3';
  $handler->display->display_options['filters']['tid_raw_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_3']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_3']['value']['value'] = '1666';
  $handler->display->display_options['filters']['tid_raw_3']['group'] = 2;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw_6']['id'] = 'tid_raw_6';
  $handler->display->display_options['filters']['tid_raw_6']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_6']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_6']['value']['value'] = '1677';
  $handler->display->display_options['filters']['tid_raw_6']['group'] = 2;
  /* Filterkriterie: Ord i ordforråd: Term ID */
  $handler->display->display_options['filters']['tid_raw_5']['id'] = 'tid_raw_5';
  $handler->display->display_options['filters']['tid_raw_5']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_5']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_5']['value']['value'] = '1665';
  $handler->display->display_options['filters']['tid_raw_5']['group'] = 2;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy vocabulary: Vocabulary ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Term 1. level width */
  $handler = $view->new_display('panel_pane', 'Term 1. level width', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link all" id="filter-all" data-filter="all">Alle</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy vocabulary: Vocabulary ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Term 2. level width */
  $handler = $view->new_display('panel_pane', 'Term 2. level width', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link all" id="filter-all" data-filter="all">Alle</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Ordforråd: Ordforråd ID */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy vocabulary: Vocabulary ID',
    ),
    'parent' => array(
      'type' => 'user',
      'context' => 'entity:comment.og-membership--1',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Parent term',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['section_page_filter'] = array(
    t('Master'),
    t('Filtre i kategorier'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alle</div>
</div>'),
    t('Overordnet element'),
    t('.'),
    t('<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>
'),
    t('Alle'),
    t('Block'),
    t('<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-[tid]" data-filter="[tid]">[name]</div>
</div>'),
    t('Term first level'),
    t('<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alle</div>
</div>
'),
    t('View panes'),
    t('Term first level with chosen ids'),
    t('<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link all" id="filter-all" data-filter="all">
Alle
</div>
</div>'),
    t('Term 1. level width'),
    t('<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link all" id="filter-all" data-filter="all">Alle</div>
</div>'),
    t('Term 2. level width'),
  );
  $export['section_page_filter'] = $view;

  $view = new view();
  $view->name = 'section_page_filter_extra';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Section page filter extra';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section page filter extra';
  $handler->display->display_options['css_class'] = 'filter-box';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="filter-foldin"> - </div>
<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alle</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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

  /* Display: Group list */
  $handler = $view->new_display('panel_pane', 'Group list', 'panel_pane_3');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-link-container';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisningboks';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="all-group-block">
  <ul>
    <li><i class="red-dot"></i>Netværk du følger</li>
    <li><i class="yellow-dot"></i>Netværk generelt</li>
    <li><i class="green-dot"></i>Foreningen</li>
  </ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Resumé af resultat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '- I alt @total stk.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: term_type */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'term_type';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'netv_rkstype' => 'netv_rkstype',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
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
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
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
    'group' => 'group',
  );
  $handler->display->display_options['pane_title'] = 'All Group list';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Group list newest */
  $handler = $view->new_display('panel_pane', 'Group list newest', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ktc-link-container';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'listevisningboks';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="all-group-block">
  <ul>
    <li><i class="red-dot"></i>Netværk du følger</li>
    <li><i class="yellow-dot"></i>Netværk generelt</li>
    <li><i class="green-dot"></i>Foreningen</li>
  </ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Resumé af resultat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'I AlT @total STK';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: term_type */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'term_type';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'netv_rkstype' => 'netv_rkstype',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: emner */
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['ui_name'] = 'emner';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['vocabularies'] = array(
    'emner_faste_' => 'emner_faste_',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '6';
  $handler->display->display_options['arguments']['term_node_tid_depth_1']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: tags */
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth_2']['ui_name'] = 'tags';
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
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
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
    'group' => 'group',
  );
  $handler->display->display_options['pane_title'] = 'All Group list';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['section_page_filter_extra'] = array(
    t('Master'),
    t('Section page filter extra'),
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
    t('<div class="filter-foldin"> - </div>
<div class="ktc-filter-button-container">
<div class="btn btn-default filter-link" id="filter-all" data-filter="all">Alle</div>
</div>'),
    t('Group list'),
    t('<div class="all-group-block">
  <ul>
    <li><i class="red-dot"></i>Netværk du følger</li>
    <li><i class="yellow-dot"></i>Netværk generelt</li>
    <li><i class="green-dot"></i>Foreningen</li>
  </ul>
</div>'),
    t('- I alt @total stk.'),
    t('Alle'),
    t('All Group list'),
    t('View panes'),
    t('Group list newest'),
    t('I AlT @total STK'),
  );
  $export['section_page_filter_extra'] = $view;

  $view = new view();
  $view->name = 'user_content_with_comment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User content with comment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User content with comment';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['row_options']['comments'] = TRUE;
  /* Forbindelse: Kommentar: Nodens kommentarer */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Kommentar: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = 'Kommentar';
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
  /* Filterkriterie: Kommentar: Godkendt */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'comment';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'cid';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;

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
  $translatables['user_content_with_comment'] = array(
    t('Master'),
    t('User content with comment'),
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
    t('Kommentarer'),
    t('Kommentar'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
  );
  $export['user_content_with_comment'] = $view;

  $view = new view();
  $view->name = 'user_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Personsøgning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personsøgning';
  $handler->display->display_options['css_class'] = 'personsoegning';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    23 => '23',
    25 => '25',
    21 => '21',
    7 => '7',
    22 => '22',
    8 => '8',
    4 => '4',
    26 => '26',
    5 => '5',
  );
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid_1' => 'uid_1',
    'name' => 'name',
    'field_navn' => 'field_navn',
    'field_jobposition' => 'field_jobposition',
    'field_kommune' => 'field_kommune',
    'mail' => 'mail',
    'field_cell' => 'field_cell',
    'field_directe_telefon' => 'field_directe_telefon',
    'uid' => 'uid',
    'og_user_node' => 'og_user_node',
    'field_topics' => 'field_topics',
  );
  $handler->display->display_options['style_options']['default'] = 'field_navn';
  $handler->display->display_options['style_options']['info'] = array(
    'uid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_navn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jobposition' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kommune' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cell' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_directe_telefon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'og_user_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<nav>
  <ul class="pagination">
    <li><a href="/search/brugersoegning/">Alle</a></li>
    <li><a href="/search/brugersoegning/a">A</a></li>
    <li><a href="/search/brugersoegning/b">B</a></li>
    <li><a href="/search/brugersoegning/c">C</a></li>
    <li><a href="/search/brugersoegning/d">D</a></li>
    <li><a href="/search/brugersoegning/e">E</a></li>
    <li><a href="/search/brugersoegning/f">F</a></li>
    <li><a href="/search/brugersoegning/g">G</a></li>
    <li><a href="/search/brugersoegning/h">H</a></li>
    <li><a href="/search/brugersoegning/i">I</a></li>
    <li><a href="/search/brugersoegning/j">J</a></li>
    <li><a href="/search/brugersoegning/k">K</a></li>
    <li><a href="/search/brugersoegning/l">L</a></li>
    <li><a href="/search/brugersoegning/m">M</a></li>
    <li><a href="/search/brugersoegning/n">N</a></li>
    <li><a href="/search/brugersoegning/o">O</a></li>
    <li><a href="/search/brugersoegning/p">P</a></li>
    <li><a href="/search/brugersoegning/q">Q</a></li>
    <li><a href="/search/brugersoegning/r">R</a></li>
    <li><a href="/search/brugersoegning/s">S</a></li>
    <li><a href="/search/brugersoegning/t">T</a></li>
    <li><a href="/search/brugersoegning/u">U</a></li>
    <li><a href="/search/brugersoegning/v">V</a></li>
    <li><a href="/search/brugersoegning/w">W</a></li>
    <li><a href="/search/brugersoegning/x">X</a></li>
    <li><a href="/search/brugersoegning/y">Y</a></li>
    <li><a href="/search/brugersoegning/z">Z</a></li>
    <li><a href="/search/brugersoegning/æ">Æ</a></li>
    <li><a href="/search/brugersoegning/ø">Ø</a></li>
    <li><a href="/search/brugersoegning/å">Å</a></li>
  </ul>
</nav>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: OG membership: Group Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Forbindelse: OG membership: Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* Forbindelse: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* Forbindelse: Bruger: Firma (field_account) */
  $handler->display->display_options['relationships']['field_account_tid']['id'] = 'field_account_tid';
  $handler->display->display_options['relationships']['field_account_tid']['table'] = 'field_data_field_account';
  $handler->display->display_options['relationships']['field_account_tid']['field'] = 'field_account_tid';
  /* Felt: Bruger: Aktiv */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Felt: Fornavn + mellemnavn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  /* Felt: Bruger: Kommune */
  $handler->display->display_options['fields']['field_kommune']['id'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['fields']['field_kommune']['field'] = 'field_kommune';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Felt: Bruger: Roller */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Handlinger';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<a href="/user/[uid]/edit">rediger</a>';
  /* Felt: Bruger: Skjult i lister */
  $handler->display->display_options['fields']['field_hidden']['id'] = 'field_hidden';
  $handler->display->display_options['fields']['field_hidden']['table'] = 'field_data_field_hidden';
  $handler->display->display_options['fields']['field_hidden']['field'] = 'field_hidden';
  /* Kontekstuelt filter: Bruger: Navn */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['arguments']['name']['case'] = 'upper';
  $handler->display->display_options['arguments']['name']['break_phrase'] = TRUE;
  /* Filterkriterie: Felt: Fornavn + mellemnavn (field_navn) */
  $handler->display->display_options['filters']['field_navn_value']['id'] = 'field_navn_value';
  $handler->display->display_options['filters']['field_navn_value']['table'] = 'field_data_field_navn';
  $handler->display->display_options['filters']['field_navn_value']['field'] = 'field_navn_value';
  $handler->display->display_options['filters']['field_navn_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_navn_value']['group'] = 1;
  $handler->display->display_options['filters']['field_navn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_navn_value']['expose']['operator_id'] = 'field_navn_value_op';
  $handler->display->display_options['filters']['field_navn_value']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['field_navn_value']['expose']['operator'] = 'field_navn_value_op';
  $handler->display->display_options['filters']['field_navn_value']['expose']['identifier'] = 'field_navn_value';
  /* Filterkriterie: Bruger: Kommune (field_kommune) */
  $handler->display->display_options['filters']['field_kommune_tid']['id'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['filters']['field_kommune_tid']['field'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['value'] = '';
  $handler->display->display_options['filters']['field_kommune_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kommune_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['operator_id'] = 'field_kommune_tid_op';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['label'] = 'Kommune';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['operator'] = 'field_kommune_tid_op';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['identifier'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_kommune_tid']['vocabulary'] = 'kommuner';
  /* Filterkriterie: Bruger: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* Filterkriterie: Bruger: Roller */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roller';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Kombinér felter filter';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Bruger: Firma (field_account) */
  $handler->display->display_options['relationships']['field_account_tid']['id'] = 'field_account_tid';
  $handler->display->display_options['relationships']['field_account_tid']['table'] = 'field_data_field_account';
  $handler->display->display_options['relationships']['field_account_tid']['field'] = 'field_account_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_navn']['label'] = 'Navn';
  $handler->display->display_options['fields']['field_navn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['text'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_navn']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['path'] = 'user/[uid_1]';
  $handler->display->display_options['fields']['field_navn']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['hide_alter_empty'] = FALSE;
  /* Felt: Felt: Stilling/titel */
  $handler->display->display_options['fields']['field_jobposition']['id'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['table'] = 'field_data_field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['field'] = 'field_jobposition';
  /* Felt: Bruger: Kommune */
  $handler->display->display_options['fields']['field_kommune']['id'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['fields']['field_kommune']['field'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kommune']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Bruger: Firma */
  $handler->display->display_options['fields']['field_account']['id'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['table'] = 'field_data_field_account';
  $handler->display->display_options['fields']['field_account']['field'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['empty'] = '[field_kommune]';
  $handler->display->display_options['fields']['field_account']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Felt: Bruger: Mobil */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['exclude'] = TRUE;
  /* Felt: Felt: Direkte telefon */
  $handler->display->display_options['fields']['field_directe_telefon']['id'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['table'] = 'field_data_field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['field'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['label'] = 'Telefon / mobil';
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['text'] = '<a href="tel:[field_directe_telefon]" title="Ring til direkte telefon">[field_directe_telefon]</a><a href="tel:[field_cell]" class="andcell" title="Ring til mobil"> [field_cell]</a>';
  $handler->display->display_options['fields']['field_directe_telefon']['empty'] = '<a href="tel:[field_cell]" class="onlycell" title="Ring til mobil"> [field_cell]</a>';
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Handlinger';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<a href="/user/[uid]/edit">rediger</a>';
  /* Felt: Bruger: Group membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['label'] = 'Netværk';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_limit'] = '0';
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_user_node']['multi_type'] = 'ul';
  /* Felt: Felt: Faglige emner */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'hs_taxonomy_term_reference_last_text_only';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topics']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Felt: Fornavn + mellemnavn (field_navn) */
  $handler->display->display_options['sorts']['field_navn_value']['id'] = 'field_navn_value';
  $handler->display->display_options['sorts']['field_navn_value']['table'] = 'field_data_field_navn';
  $handler->display->display_options['sorts']['field_navn_value']['field'] = 'field_navn_value';
  /* Sorteringskriterie: Bruger: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Aktiv';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Navn (rå data) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
  );
  /* Filterkriterie: Bruger: Kommune (field_kommune) */
  $handler->display->display_options['filters']['field_kommune_tid']['id'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['filters']['field_kommune_tid']['field'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['value'] = '';
  $handler->display->display_options['filters']['field_kommune_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kommune_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['operator_id'] = 'field_kommune_tid_op';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['label'] = 'Kommune';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['operator'] = 'field_kommune_tid_op';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['identifier'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_kommune_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kommune_tid']['vocabulary'] = 'kommuner';
  /* Filterkriterie: Bruger: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* Filterkriterie: Bruger: Roller */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roller';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterie: Bruger: Skjult i lister (field_hidden) */
  $handler->display->display_options['filters']['field_hidden_value']['id'] = 'field_hidden_value';
  $handler->display->display_options['filters']['field_hidden_value']['table'] = 'field_data_field_hidden';
  $handler->display->display_options['filters']['field_hidden_value']['field'] = 'field_hidden_value';
  $handler->display->display_options['filters']['field_hidden_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hidden_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_hidden_value']['group'] = 1;
  /* Filterkriterie: Felt: Fornavn + mellemnavn (field_navn) */
  $handler->display->display_options['filters']['field_navn_value_1']['id'] = 'field_navn_value_1';
  $handler->display->display_options['filters']['field_navn_value_1']['table'] = 'field_data_field_navn';
  $handler->display->display_options['filters']['field_navn_value_1']['field'] = 'field_navn_value';
  $handler->display->display_options['filters']['field_navn_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_navn_value_1']['group'] = 1;
  $handler->display->display_options['path'] = 'search/brugersoegning';
  $handler->display->display_options['menu']['title'] = 'Personsøgning';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FE */
  $handler = $view->new_display('page', 'FE', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
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
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_navn' => 'field_navn',
    'field_kommune' => 'field_kommune',
    'mail' => 'mail',
  );
  $handler->display->display_options['path'] = 'user-search';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Personsøgning';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_navn']['label'] = 'Navn';
  $handler->display->display_options['fields']['field_navn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['text'] = '[field_navn] [field_efternavn]';
  $handler->display->display_options['fields']['field_navn']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['alter']['path'] = 'user/[uid_1]';
  $handler->display->display_options['fields']['field_navn']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_navn']['hide_alter_empty'] = FALSE;
  /* Felt: Felt: Stilling/titel */
  $handler->display->display_options['fields']['field_jobposition']['id'] = 'field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['table'] = 'field_data_field_jobposition';
  $handler->display->display_options['fields']['field_jobposition']['field'] = 'field_jobposition';
  /* Felt: Bruger: Kommune */
  $handler->display->display_options['fields']['field_kommune']['id'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['fields']['field_kommune']['field'] = 'field_kommune';
  $handler->display->display_options['fields']['field_kommune']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kommune']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Bruger: Firma */
  $handler->display->display_options['fields']['field_account']['id'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['table'] = 'field_data_field_account';
  $handler->display->display_options['fields']['field_account']['field'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['empty'] = '[field_kommune]';
  $handler->display->display_options['fields']['field_account']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Felt: Bruger: Mobil */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['exclude'] = TRUE;
  /* Felt: Felt: Direkte telefon */
  $handler->display->display_options['fields']['field_directe_telefon']['id'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['table'] = 'field_data_field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['field'] = 'field_directe_telefon';
  $handler->display->display_options['fields']['field_directe_telefon']['label'] = 'Telefon / mobil';
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directe_telefon']['alter']['text'] = '<a href="tel:[field_directe_telefon]" title="Ring til direkte telefon">[field_directe_telefon]</a><a href="tel:[field_cell]" class="andcell" title="Ring til mobil"> [field_cell]</a>';
  $handler->display->display_options['fields']['field_directe_telefon']['empty'] = '<a href="tel:[field_cell]" class="onlycell" title="Ring til mobil"> [field_cell]</a>';
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Handlinger';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<a href="/user/[uid]/edit">rediger</a>';
  /* Felt: Bruger: Group membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['label'] = 'Netværk';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_limit'] = '0';
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_user_node']['multi_type'] = 'ul';
  /* Felt: Felt: Faglige emner */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'hs_taxonomy_term_reference_last_text_only';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topics']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Felt: Fornavn + mellemnavn (field_navn) */
  $handler->display->display_options['sorts']['field_navn_value']['id'] = 'field_navn_value';
  $handler->display->display_options['sorts']['field_navn_value']['table'] = 'field_data_field_navn';
  $handler->display->display_options['sorts']['field_navn_value']['field'] = 'field_navn_value';
  /* Sorteringskriterie: Bruger: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Aktiv';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
    26 => 0,
  );
  /* Filterkriterie: Bruger: Navn (rå data) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
  );
  /* Filterkriterie: Bruger: Kommune (field_kommune) */
  $handler->display->display_options['filters']['field_kommune_tid']['id'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['table'] = 'field_data_field_kommune';
  $handler->display->display_options['filters']['field_kommune_tid']['field'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['value'] = '';
  $handler->display->display_options['filters']['field_kommune_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kommune_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['operator_id'] = 'field_kommune_tid_op';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['label'] = 'Kommune';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['operator'] = 'field_kommune_tid_op';
  $handler->display->display_options['filters']['field_kommune_tid']['expose']['identifier'] = 'field_kommune_tid';
  $handler->display->display_options['filters']['field_kommune_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_kommune_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kommune_tid']['vocabulary'] = 'kommuner';
  /* Filterkriterie: Bruger: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* Filterkriterie: Bruger: Roller */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roller';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterie: Bruger: Skjult i lister (field_hidden) */
  $handler->display->display_options['filters']['field_hidden_value']['id'] = 'field_hidden_value';
  $handler->display->display_options['filters']['field_hidden_value']['table'] = 'field_data_field_hidden';
  $handler->display->display_options['filters']['field_hidden_value']['field'] = 'field_hidden_value';
  $handler->display->display_options['filters']['field_hidden_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hidden_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_hidden_value']['group'] = 1;
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Netværk';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filterkriterie: Felt: Fornavn + mellemnavn (field_navn) */
  $handler->display->display_options['filters']['field_navn_value_1']['id'] = 'field_navn_value_1';
  $handler->display->display_options['filters']['field_navn_value_1']['table'] = 'field_data_field_navn';
  $handler->display->display_options['filters']['field_navn_value_1']['field'] = 'field_navn_value';
  $handler->display->display_options['filters']['field_navn_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_navn_value_1']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/brugersoegning';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Personsøgning';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['user_search'] = array(
    t('Master'),
    t('Personsøgning'),
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
    t('<nav>
  <ul class="pagination">
    <li><a href="/search/brugersoegning/">Alle</a></li>
    <li><a href="/search/brugersoegning/a">A</a></li>
    <li><a href="/search/brugersoegning/b">B</a></li>
    <li><a href="/search/brugersoegning/c">C</a></li>
    <li><a href="/search/brugersoegning/d">D</a></li>
    <li><a href="/search/brugersoegning/e">E</a></li>
    <li><a href="/search/brugersoegning/f">F</a></li>
    <li><a href="/search/brugersoegning/g">G</a></li>
    <li><a href="/search/brugersoegning/h">H</a></li>
    <li><a href="/search/brugersoegning/i">I</a></li>
    <li><a href="/search/brugersoegning/j">J</a></li>
    <li><a href="/search/brugersoegning/k">K</a></li>
    <li><a href="/search/brugersoegning/l">L</a></li>
    <li><a href="/search/brugersoegning/m">M</a></li>
    <li><a href="/search/brugersoegning/n">N</a></li>
    <li><a href="/search/brugersoegning/o">O</a></li>
    <li><a href="/search/brugersoegning/p">P</a></li>
    <li><a href="/search/brugersoegning/q">Q</a></li>
    <li><a href="/search/brugersoegning/r">R</a></li>
    <li><a href="/search/brugersoegning/s">S</a></li>
    <li><a href="/search/brugersoegning/t">T</a></li>
    <li><a href="/search/brugersoegning/u">U</a></li>
    <li><a href="/search/brugersoegning/v">V</a></li>
    <li><a href="/search/brugersoegning/w">W</a></li>
    <li><a href="/search/brugersoegning/x">X</a></li>
    <li><a href="/search/brugersoegning/y">Y</a></li>
    <li><a href="/search/brugersoegning/z">Z</a></li>
    <li><a href="/search/brugersoegning/æ">Æ</a></li>
    <li><a href="/search/brugersoegning/ø">Ø</a></li>
    <li><a href="/search/brugersoegning/å">Å</a></li>
  </ul>
</nav>'),
    t('Group node from OG membership'),
    t('node from OG membership'),
    t('OG Roles from OG membership'),
    t('term fra field_account'),
    t('Aktiv'),
    t('Fornavn + mellemnavn'),
    t('Kommune'),
    t('E-mail'),
    t('Roller'),
    t('Handlinger'),
    t('<a href="/user/[uid]/edit">rediger</a>'),
    t('Skjult i lister'),
    t('Alle'),
    t('Navn'),
    t('Kombinér felter filter'),
    t('Page'),
    t('Uid'),
    t('[field_navn] [field_efternavn]'),
    t('Stilling/titel'),
    t('Firma'),
    t('[field_kommune]'),
    t('Mobil'),
    t('Telefon / mobil'),
    t('<a href="tel:[field_directe_telefon]" title="Ring til direkte telefon">[field_directe_telefon]</a><a href="tel:[field_cell]" class="andcell" title="Ring til mobil"> [field_cell]</a>'),
    t('<a href="tel:[field_cell]" class="onlycell" title="Ring til mobil"> [field_cell]</a>'),
    t('Netværk'),
    t('Faglige emner'),
    t('FE'),
    t('Søg'),
    t('Admin Personsøgning'),
  );
  $export['user_search'] = $view;

  return $export;
}
