<?php
/**
 * @file
 * os2web_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_contact_context_block';
  $context->description = 'Visning af bla. kontaktblok i højre sidebar på udvalgte sider';
  $context->tag = 'OS2WEB - Generelt';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'selvbetjening' => 'selvbetjening',
        'nyheder' => 'nyheder',
        'dagsorden-og-referat' => 'dagsorden-og-referat',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-os2web_contact_panel_sidebar' => array(
          'module' => 'panels_mini',
          'delta' => 'os2web_contact_panel_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'standard',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2WEB - Generelt');
  t('Visning af bla. kontaktblok i højre sidebar på udvalgte sider');
  $export['os2web_contact_context_block'] = $context;

  return $export;
}
