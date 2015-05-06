<?php
/**
 * @file
 * ktc_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ktc_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ktc_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: billede_preview.
  $styles['billede_preview'] = array(
    'name' => 'billede_preview',
    'label' => 'Billede preview',
    'effects' => array(
      2 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: netvaerks_logo.
  $styles['netvaerks_logo'] = array(
    'name' => 'netvaerks_logo',
    'label' => 'Logo / Profil',
    'effects' => array(
      6 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 256,
          'height' => 256,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
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
function ktc_content_types_node_info() {
  $items = array(
    'arrangement' => array(
      'name' => t('Arrangement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'document' => array(
      'name' => t('Dokument'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => t('Du kan uploade én eller flere dokumenter og filer til denne indholdstype.'),
    ),
    'factbox' => array(
      'name' => t('Faktaboks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'forum_post' => array(
      'name' => t('Diskussion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => t('Du kan her starte en diskussion i dine netværk. De andre medlemmer af dit netværk kan kommentere på dine og de andres deltageres svar. '),
    ),
    'magazine' => array(
      'name' => t('Udgivelse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'meeting_doodle' => array(
      'name' => t('Afstemning'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => t('Du kan bruge afstemninger til f.eks. at foreslå mødetidspunkter i dine netværk.'),
    ),
    'os2web_base_news' => array(
      'name' => t('Nyhed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => t('Brug <em>simple sider</em> til dit statiske indhold, som f.eks. en "om os"-side.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webformular'),
      'base' => 'node_content',
      'description' => t('Opret en ny formular eller et nyt spørgeskema. Resultater og statistik gemmes og er tilgængelige for priviligerede brugere.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
