<?php
/**
 * @file
 * ktc_netvaerk.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ktc_netvaerk_taxonomy_default_vocabularies() {
  return array(
    'ktc_netvaerk_grouproles' => array(
      'name' => 'ktc netværk grupperoller',
      'machine_name' => 'ktc_netvaerk_grouproles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'netv_rkstype' => array(
      'name' => 'Netværkstype',
      'machine_name' => 'netv_rkstype',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
