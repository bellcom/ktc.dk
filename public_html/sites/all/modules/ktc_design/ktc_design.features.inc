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
      4 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 460,
          'height' => 277,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      3 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 277,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'name' => 'square_thumbnail',
    'label' => 'Square thumbnail',
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
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaservisning.
  $styles['teaservisning'] = array(
    'name' => 'teaservisning',
    'label' => 'teaservisning',
    'effects' => array(
      2 => array(
        'label' => 'Reuse EPSA Image Crop',
        'help' => 'Use the image crop selection from another image style',
        'effect callback' => 'epsacrop_crop_image_reuse',
        'form callback' => 'epsacrop_crop_image_reuse_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop_reuse',
        'data' => array(),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
