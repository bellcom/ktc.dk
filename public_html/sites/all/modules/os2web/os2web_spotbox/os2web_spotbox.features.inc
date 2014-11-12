<?php
/**
 * @file
 * os2web_spotbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_spotbox_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_spotbox_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_spotbox_image_default_styles() {
  $styles = array();

  // Exported image style: os2web_spotbox_image_300.
  $styles['os2web_spotbox_image_300'] = array(
    'name' => 'os2web_spotbox_image_300',
    'effects' => array(
      16 => array(
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
          'height' => 261,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: os2web_spotbox_image_right.
  $styles['os2web_spotbox_image_right'] = array(
    'name' => 'os2web_spotbox_image_right',
    'effects' => array(
      7 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 230,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      9 => array(
        'label' => 'Beskær',
        'help' => 'Beskæring fjerner dele af billedet for at give det de angivne dimensioner.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 230,
          'height' => 115,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: os2web_spotbox_image_spot5.
  $styles['os2web_spotbox_image_spot5'] = array(
    'name' => 'os2web_spotbox_image_spot5',
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
          'width' => 290,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: os2web_spotbox_image_tall.
  $styles['os2web_spotbox_image_tall'] = array(
    'name' => 'os2web_spotbox_image_tall',
    'effects' => array(
      1 => array(
        'label' => 'Beskær',
        'help' => 'Beskæring fjerner dele af billedet for at give det de angivne dimensioner.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 230,
          'height' => 337,
          'anchor' => 'center-center',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: os2web_spotbox_image_video_front.
  $styles['os2web_spotbox_image_video_front'] = array(
    'name' => 'os2web_spotbox_image_video_front',
    'effects' => array(
      8 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 310,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      10 => array(
        'label' => 'Beskær',
        'help' => 'Beskæring fjerner dele af billedet for at give det de angivne dimensioner.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 310,
          'height' => 177,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_spotbox_node_info() {
  $items = array(
    'os2web_spotbox_box' => array(
      'name' => t('Spotbox'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
