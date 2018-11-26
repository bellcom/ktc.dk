<?php
/**
 * @file
 * ktc_publicer_eksternt.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ktc_publicer_eksternt_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publicering_sociale_medier';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'publicering sociale medier';
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
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1899',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'os2web_base_tax_promoteto';

  /* Display: LinkedIn */
  $handler = $view->new_display('feed', 'LinkedIn', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KTC';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'KTC.dk LinkedIn Feed';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1899',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'os2web_base_tax_promoteto';
  /* Filterkriterie: Indhold: Primært billede (field_os2web_base_field_lead_img:fid) */
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['id'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['field'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'rss/sociale/linkedin.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Twitter */
  $handler = $view->new_display('feed', 'Twitter', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1900',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'os2web_base_tax_promoteto';
  /* Filterkriterie: Indhold: Primært billede (field_os2web_base_field_lead_img:fid) */
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['id'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['field'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'rss/sociale/twitter.xml';

  /* Display: Twitter RSS */
  $handler = $view->new_display('feed', 'Twitter RSS', 'twitter_rss');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Twitterfeed fra KTC.dk',
        'language' => 'da',
        'category' => '',
        'image' => 'https://www.ktc.dk/sites/all/themes/ktc/logo.png',
        'copyright' => 'https://www.ktc.dk',
        'managingEditor' => 'ktc@ktc.dk',
        'webMaster' => 'ktc@ktc.dk',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '5',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'nid',
        'description' => 'field_short',
        'author' => 'name',
        'category' => 'field_tema_trompet',
        'comments' => 'nid',
        'enclosure' => 'field_os2web_base_field_lead_img',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
        'title' => '',
        'description' => 'field_os2web_base_field_summary',
        'keywords' => 'field_topics',
        'thumbnail' => '',
        'category' => 'field_tema_trompet',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Faglige emner */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'https://www.ktc.dk/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primært billede */
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['id'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['field'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['type'] = 'enclosure';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['settings'] = array(
    'image_style' => 'indholdsside',
  );
  /* Felt: Indhold: Tema / trompet */
  $handler->display->display_options['fields']['field_tema_trompet']['id'] = 'field_tema_trompet';
  $handler->display->display_options['fields']['field_tema_trompet']['table'] = 'field_data_field_tema_trompet';
  $handler->display->display_options['fields']['field_tema_trompet']['field'] = 'field_tema_trompet';
  /* Felt: Indhold: Forfatter(e) */
  $handler->display->display_options['fields']['field_coforfattere']['id'] = 'field_coforfattere';
  $handler->display->display_options['fields']['field_coforfattere']['table'] = 'field_data_field_coforfattere';
  $handler->display->display_options['fields']['field_coforfattere']['field'] = 'field_coforfattere';
  $handler->display->display_options['fields']['field_coforfattere']['label'] = '';
  $handler->display->display_options['fields']['field_coforfattere']['element_type'] = '0';
  $handler->display->display_options['fields']['field_coforfattere']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coforfattere']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_coforfattere']['settings'] = array(
    'edit' => 'Redigér',
    'delete' => 'Slet',
    'add' => 'Tilføj',
    'description' => 0,
    'view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_coforfattere']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_coforfattere']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_coforfattere']['separator'] = '';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_short']['id'] = 'field_short';
  $handler->display->display_options['fields']['field_short']['table'] = 'field_data_field_short';
  $handler->display->display_options['fields']['field_short']['field'] = 'field_short';
  $handler->display->display_options['fields']['field_short']['label'] = '';
  $handler->display->display_options['fields']['field_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short']['type'] = 'text_plain';
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['id'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['table'] = 'field_data_field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['field'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1900',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'os2web_base_tax_promoteto';
  /* Filterkriterie: Indhold: Primært billede (field_os2web_base_field_lead_img:fid) */
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['id'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['field'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'rss/sociale/twitter-zapier.rss';

  /* Display: LinkedIn RSS - m billede */
  $handler = $view->new_display('feed', 'LinkedIn RSS - m billede', 'linkedin_image');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Twitterfeed fra KTC.dk',
        'language' => 'da',
        'category' => '',
        'image' => 'https://www.ktc.dk/sites/all/themes/ktc/logo.png',
        'copyright' => 'https://www.ktc.dk',
        'managingEditor' => 'ktc@ktc.dk',
        'webMaster' => 'ktc@ktc.dk',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '5',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'nid',
        'description' => 'field_short',
        'author' => 'name',
        'category' => 'field_tema_trompet',
        'comments' => 'nid',
        'enclosure' => 'field_os2web_base_field_lead_img',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
        'title' => '',
        'description' => 'field_os2web_base_field_summary',
        'keywords' => 'field_topics',
        'thumbnail' => '',
        'category' => 'field_tema_trompet',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Faglige emner */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'https://www.ktc.dk/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primært billede */
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['id'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['field'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['type'] = 'enclosure';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['settings'] = array(
    'image_style' => 'indholdsside',
  );
  /* Felt: Indhold: Tema / trompet */
  $handler->display->display_options['fields']['field_tema_trompet']['id'] = 'field_tema_trompet';
  $handler->display->display_options['fields']['field_tema_trompet']['table'] = 'field_data_field_tema_trompet';
  $handler->display->display_options['fields']['field_tema_trompet']['field'] = 'field_tema_trompet';
  /* Felt: Indhold: Forfatter(e) */
  $handler->display->display_options['fields']['field_coforfattere']['id'] = 'field_coforfattere';
  $handler->display->display_options['fields']['field_coforfattere']['table'] = 'field_data_field_coforfattere';
  $handler->display->display_options['fields']['field_coforfattere']['field'] = 'field_coforfattere';
  $handler->display->display_options['fields']['field_coforfattere']['label'] = '';
  $handler->display->display_options['fields']['field_coforfattere']['element_type'] = '0';
  $handler->display->display_options['fields']['field_coforfattere']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coforfattere']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_coforfattere']['settings'] = array(
    'edit' => 'Redigér',
    'delete' => 'Slet',
    'add' => 'Tilføj',
    'description' => 0,
    'view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_coforfattere']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_coforfattere']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_coforfattere']['separator'] = '';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_short']['id'] = 'field_short';
  $handler->display->display_options['fields']['field_short']['table'] = 'field_data_field_short';
  $handler->display->display_options['fields']['field_short']['field'] = 'field_short';
  $handler->display->display_options['fields']['field_short']['label'] = '';
  $handler->display->display_options['fields']['field_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short']['type'] = 'text_plain';
  /* Felt: Indhold: Manchet */
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['id'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['table'] = 'field_data_field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['field'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1899',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'os2web_base_tax_promoteto';
  /* Filterkriterie: Indhold: Primært billede (field_os2web_base_field_lead_img:fid) */
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['id'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['field'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'rss/sociale/linkedin-zapier.rss';
  $translatables['publicering_sociale_medier'] = array(
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
    t('LinkedIn'),
    t('KTC'),
    t('Twitter'),
    t('Twitter RSS'),
    t('forfatter'),
    t('https://www.ktc.dk/node/[nid]'),
    t('Tema / trompet'),
    t('Oprettelsesdato'),
    t('Link'),
    t('LinkedIn RSS - m billede'),
  );
  $export['publicering_sociale_medier'] = $view;

  return $export;
}
