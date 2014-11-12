<?php
/**
 * @file
 * os2web_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function os2web_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'os2web_search_enviroment';
  $environment->name = 'OS2web_search_enviroment';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'comment' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'feedback' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'fieldable_panels_pane' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'rules_config' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1367496384,
    'apachesolr_last_optimize' => 1367496384,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'menu_page',
      1 => 'os2web_cp_service_cp_document',
      2 => 'os2web_hearings_hearing',
      3 => 'os2web_kulturnaut_knactivity',
      4 => 'os2web_ofir_job',
    ),
  );
  $export['os2web_search_enviroment'] = $environment;

  return $export;
}
