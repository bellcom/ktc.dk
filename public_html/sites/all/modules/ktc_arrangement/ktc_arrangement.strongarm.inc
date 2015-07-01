<?php
/**
 * @file
 * ktc_arrangement.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ktc_arrangement_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_dag';
  $strongarm->value = 'd';
  $export['date_format_dag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_klokkeslet';
  $strongarm->value = 'H:i';
  $export['date_format_klokkeslet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month';
  $strongarm->value = 'M';
  $export['date_format_month'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_oulook';
  $strongarm->value = 'Y-m-d H:i:s';
  $export['date_format_oulook'] = $strongarm;

  return $export;
}
