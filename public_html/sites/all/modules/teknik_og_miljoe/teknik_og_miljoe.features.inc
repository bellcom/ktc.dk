<?php
/**
 * @file
 * teknik_og_miljoe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teknik_og_miljoe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
