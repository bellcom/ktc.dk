<?php
/**
 * @file
 * teknik_og_miljoe.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function teknik_og_miljoe_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'magasinstatus';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'magasinstatus' => 'magasinstatus',
        'magasinstatus:page' => 'magasinstatus:page',
      ),
    ),
  );
  $context->reactions = array(
    'template_suggestions' => 'page_fluid
page__fluid',
    'theme_html' => array(
      'class' => 'kontekst-magasinstatus',
    ),
  );
  $context->condition_mode = 0;
  $export['magasinstatus'] = $context;

  return $export;
}
