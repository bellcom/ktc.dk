<?php
/**
 * @file
 * indholdsliste_m_filter.features.inc
 */

/**
 * Implements hook_views_api().
 */
function indholdsliste_m_filter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function indholdsliste_m_filter_image_default_styles() {
  $styles = array();

  // Exported image style: listevisning.
  $styles['listevisning'] = array(
    'name' => 'listevisning',
    'label' => 'listevisning',
    'effects' => array(
      8 => array(
        'label' => 'Reuse EPSA Image Crop',
        'help' => 'Use the image crop selection from another image style',
        'effect callback' => 'epsacrop_crop_image_reuse',
        'form callback' => 'epsacrop_crop_image_reuse_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop_reuse',
        'data' => array(
          'jcrop_reuse' => 'listevisning_stor',
        ),
        'weight' => -10,
      ),
      7 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 112,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: listevisning_stor.
  $styles['listevisning_stor'] = array(
    'name' => 'listevisning_stor',
    'label' => 'listevisning stor',
    'effects' => array(
      6 => array(
        'label' => 'Reuse EPSA Image Crop',
        'help' => 'Use the image crop selection from another image style',
        'effect callback' => 'epsacrop_crop_image_reuse',
        'form callback' => 'epsacrop_crop_image_reuse_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop_reuse',
        'data' => array(
          'jcrop_reuse' => 'ktc_content_image',
        ),
        'weight' => -10,
      ),
      5 => array(
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
          'height' => 172,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: magazinethumb.
  $styles['magazinethumb'] = array(
    'name' => 'magazinethumb',
    'label' => 'magazinethumb',
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
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
