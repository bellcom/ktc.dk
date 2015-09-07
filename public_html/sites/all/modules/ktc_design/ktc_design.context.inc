<?php
/**
 * @file
 * ktc_design.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ktc_design_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'er_fra_netvaerk';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'network',
    ),
  );
  $context->condition_mode = 0;
  $export['er_fra_netvaerk'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ikke_i_netvaerk';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'no-network',
    ),
  );
  $context->condition_mode = 0;
  $export['ikke_i_netvaerk'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teknik_miljoe';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        1898 => 1898,
        1902 => 1902,
        20549 => 20549,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'tech-env',
    ),
  );
  $context->condition_mode = 0;
  $export['teknik_miljoe'] = $context;

  return $export;
}
