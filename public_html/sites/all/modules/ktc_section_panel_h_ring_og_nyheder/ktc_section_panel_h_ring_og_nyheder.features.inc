<?php
/**
 * @file
 * ktc_section_panel_h_ring_og_nyheder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_section_panel_h_ring_og_nyheder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
