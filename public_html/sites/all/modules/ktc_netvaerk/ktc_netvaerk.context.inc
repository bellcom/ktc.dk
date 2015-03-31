<?php
/**
 * @file
 * ktc_netvaerk.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ktc_netvaerk_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_views';
  $context->description = '';
  $context->tag = 'Netværk';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'og_extras_members:page_1' => 'og_extras_members:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-netvaerks_kontekst' => array(
          'module' => 'panels_mini',
          'delta' => 'netvaerks_kontekst',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'template_suggestions' => 'page__normal',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Netværk');
  $export['group_views'] = $context;

  return $export;
}
