<?php
/**
 * @file
 * ktc_user_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_user_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ktc_user_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ktc_user_profile_image_default_styles() {
  $styles = array();

  // Exported image style: ktc_profile_image_large.
  $styles['ktc_profile_image_large'] = array(
    'name' => 'ktc_profile_image_large',
    'label' => 'KTC profile image large',
    'effects' => array(
      4 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ktc_profile_image_small.
  $styles['ktc_profile_image_small'] = array(
    'name' => 'ktc_profile_image_small',
    'label' => 'KTC profile image small',
    'effects' => array(
      3 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 48,
          'height' => 48,
          'anchor' => 'center-center',
          'disable_scale' => 1,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      2 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 48,
          'height' => 48,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
