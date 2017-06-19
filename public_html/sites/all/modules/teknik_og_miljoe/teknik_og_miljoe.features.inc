<?php
/**
 * @file
 * teknik_og_miljoe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teknik_og_miljoe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
 * Implements hook_views_api().
 */
function teknik_og_miljoe_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function teknik_og_miljoe_image_default_styles() {
  $styles = array();

  // Exported image style: artikel_lille_billede.
  $styles['artikel_lille_billede'] = array(
    'name' => 'artikel_lille_billede',
    'label' => 'artikel lille billede',
    'effects' => array(
      3 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 236,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: magazine_teaser_banner.
  $styles['magazine_teaser_banner'] = array(
    'name' => 'magazine_teaser_banner',
    'label' => 'Magazine teaser banner',
    'effects' => array(
      3 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 188,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function teknik_og_miljoe_node_info() {
  $items = array(
    'artikler' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function teknik_og_miljoe_paragraphs_info() {
  $items = array(
    'ktc_artikel_billedserie' => array(
      'name' => 'Billedserie/ galleri',
      'bundle' => 'ktc_artikel_billedserie',
      'locked' => '1',
    ),
    'ktc_artikelafsnit_citat' => array(
      'name' => 'Citat',
      'bundle' => 'ktc_artikelafsnit_citat',
      'locked' => '1',
    ),
    'ktc_artikelafsnit_faktaboks' => array(
      'name' => 'Faktaboks',
      'bundle' => 'ktc_artikelafsnit_faktaboks',
      'locked' => '1',
    ),
    'ktc_artikelafsnit_tekst' => array(
      'name' => 'Tekst m. overskrift',
      'bundle' => 'ktc_artikelafsnit_tekst',
      'locked' => '1',
    ),
    'ktc_artikelafsnit_tekst_billede' => array(
      'name' => 'Billede i fuld bredde',
      'bundle' => 'ktc_artikelafsnit_tekst_billede',
      'locked' => '1',
    ),
    'ktc_eksisterende_bruger' => array(
      'name' => 'Visning af person',
      'bundle' => 'ktc_eksisterende_bruger',
      'locked' => '1',
    ),
    'ktc_related_artikle' => array(
      'name' => 'Relateret indhold',
      'bundle' => 'ktc_related_artikle',
      'locked' => '1',
    ),
    'udgivelse_annonce' => array(
      'name' => 'Annonce',
      'bundle' => 'udgivelse_annonce',
      'locked' => '1',
    ),
    'udgivelse_artikel' => array(
      'name' => 'Artikel',
      'bundle' => 'udgivelse_artikel',
      'locked' => '1',
    ),
    'udgivelse_navne' => array(
      'name' => 'Nyhed',
      'bundle' => 'udgivelse_navne',
      'locked' => '1',
    ),
  );
  return $items;
}
