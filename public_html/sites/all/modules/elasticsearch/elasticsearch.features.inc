<?php
/**
 * @file
 * elasticsearch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elasticsearch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elasticsearch_connector" && $api == "elasticsearch_connector_defaults") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elasticsearch_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_server().
 */
function elasticsearch_default_search_api_server() {
  $items = array();
  $items['ktc_elasticsearch_server'] = entity_import('search_api_server', '{
    "name" : "KTC Elasticsearch Server",
    "machine_name" : "ktc_elasticsearch_server",
    "description" : "",
    "class" : "search_api_elasticsearch_connector",
    "options" : { "cluster" : "ktc_elasticsearch", "facet_limit" : 10 },
    "enabled" : "1"
  }');
  return $items;
}
