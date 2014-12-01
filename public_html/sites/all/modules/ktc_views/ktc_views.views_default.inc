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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
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
    'name' => 'name',
    'field_navn' => 'field_navn',
  );
  $handler->display->display_options['style_options']['default'] = 'field_navn';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
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
  );
  /* Felt: Bruger: Aktiv */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Bruger: Navn */
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
  /* Filterkriterie: Bruger: Navn (field_navn) */
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['image_style'] = 'mini_thumb';
  /* Felt: Bruger: Aktiv */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Bruger: Navn */
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
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
  /* Filterkriterie: Bruger: Navn (field_navn) */
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
  $handler->display->display_options['path'] = 'admin/user_search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Personsøgning';
  $handler->display->display_options['menu']['name'] = 'management';

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
    t('Aktiv'),
    t('Navn'),
    t('Kommune'),
    t('E-mail'),
    t('Roller'),
    t('Handlinger'),
    t('<a href="/user/[uid]/edit">rediger</a>'),
    t('Skjult i lister'),
    t('Kombinér felter filter'),
    t('Page'),
    t('Billede'),
    t('FE'),
    t('Søg'),
  );
  $export['user_search'] = $view;

  return $export;
}
