<?php
/**
 * @file
 * os2web_ad_integration.ldap_authorization.inc
 */

/**
 * Implements hook_default_ldap_authorization().
 */
function os2web_ad_integration_default_ldap_authorization() {
  $export = array();

  $consumer_type = new stdClass();
  $consumer_type->disabled = FALSE; /* Edit this to true to make a default consumer_type disabled initially */
  $consumer_type->api_version = 1;
  $consumer_type->sid = 'ldap_example';
  $consumer_type->consumer_type = 'drupal_role';
  $consumer_type->consumer_module = 'ldap_authorization_drupal_role';
  $consumer_type->status = TRUE;
  $consumer_type->only_ldap_authenticated = TRUE;
  $consumer_type->use_first_attr_as_groupid = FALSE;
  $consumer_type->mappings = 'example_student|Student
example_editor|Editor
example_webmaster|Webmaster
example_administrator|Administrator
example_kommunikation|Kommunikation
example|godkendt bruger
';
  $consumer_type->use_filter = TRUE;
  $consumer_type->synch_to_ldap = FALSE;
  $consumer_type->synch_on_logon = TRUE;
  $consumer_type->revoke_ldap_provisioned = TRUE;
  $consumer_type->create_consumers = TRUE;
  $consumer_type->regrant_ldap_provisioned = TRUE;
  $export['drupal_role'] = $consumer_type;

  return $export;
}
