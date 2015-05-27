<?php
/**
 * @file
 * ktc_design.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_design_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ktc_design_image_default_styles() {
  $styles = array();

  // Exported image style: ktc_content_image.
  $styles['ktc_content_image'] = array(
    'name' => 'ktc_content_image',
    'label' => 'ktc_content_image',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
