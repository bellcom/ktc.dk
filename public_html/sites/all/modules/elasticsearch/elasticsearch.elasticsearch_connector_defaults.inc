<?php
/**
 * @file
 * elasticsearch.elasticsearch_connector_defaults.inc
 */

/**
 * Implements hook_default_elasticsearch_connector_cluster().
 */
function elasticsearch_default_elasticsearch_connector_cluster() {
  $export = array();

  $elasticsearch_connector_cluster = new stdClass();
  $elasticsearch_connector_cluster->disabled = FALSE; /* Edit this to true to make a default elasticsearch_connector_cluster disabled initially */
  $elasticsearch_connector_cluster->api_version = 1;
  $elasticsearch_connector_cluster->cluster_id = 'ktc_elasticsearch';
  $elasticsearch_connector_cluster->name = 'KTC Elasticsearch';
  $elasticsearch_connector_cluster->url = 'http://localhost:9200';
  $elasticsearch_connector_cluster->status = 1;
  $elasticsearch_connector_cluster->options = array(
    'multiple_nodes_connection' => 0,
    'use_authentication' => 0,
    'authentication_type' => 'Digest',
    'username' => '',
    'password' => '',
    'timeout' => '150',
  );
  $export['ktc_elasticsearch'] = $elasticsearch_connector_cluster;

  return $export;
}
