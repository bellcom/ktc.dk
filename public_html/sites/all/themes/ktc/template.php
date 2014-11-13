<?php
/**
 * @file
 * template.php
 */

/**
 * Implements template_preprocess_page().
 */
function ktc_preprocess_page(&$variables) {
  // Remove all Taxonomy auto listings here.
  $term = NULL;
  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    $term = taxonomy_term_load(arg(2));
    $term_name = $term->vocabulary_machine_name;
    unset($variables['page']['content']['system_main']['no_content']);
    // There will not be nodes and other normal term content on terms
    // "os2web_base_tax_site_structure" pages.
    if ($term_name == "os2web_base_tax_site_structure") {
      unset($variables['page']['content']['system_main']['nodes']);
      unset($variables['page']['content']['system_main']['pager']);
    }
    else {
      // On Other term pages, there will be a view with nodes.
      $view = views_get_view('taxonomy_term');
      $view->set_display('block_1');
      $view->set_arguments(array(arg(2)));
      $view->set_items_per_page(20);
      $view->pre_execute();
      $view->execute();
      $variables['page']['content']['system_main'] = array(
        '#markup' => '<h2>' . $term->name . '</h2>' . $view->render(),
      );
    }

    // Variable that defines that this term is the top of the hieraki.
    $term_is_top = _ktc_term_is_top($term->tid);
    // Get wether this is a top term, and provide a variable for the templates.
    $variables['page']['term_is_top'] = $term_is_top;
  }

  $node = NULL;
  if (isset($variables['node']) && !empty($variables['node']->nid)) {
    $node = $variables['node'];
  }
  $sidebar_second_hidden = FALSE;
  $sidebar_first_hidden = FALSE;

  // If node has hidden the sidebar, set content to null.
  if ($node && $hide_sidebar_field = field_get_items('node', $node, 'field_svendborg_hide_sidebar')) {
    if ($hide_sidebar_field[0]['value'] == '1') {
      $variables['page']['sidebar_second'] = array();
      $sidebar_second_hidden = TRUE;
    }
  }

  // Get all the nodes selvbetjeningslinks and give them to the template.
  if (($node && $links = field_get_items('node', $node, 'field_os2web_base_field_selfserv')) ||
      ($term && $links = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_selfserv'))) {
    $variables['page']['os2web_selfservicelinks'] = _ktc_get_selfservicelinks($links);
  }

  // Get all related links to this node.
  // 1. Get all unique related links from the node.
  $related_links = array();
  if (($node && $links = field_get_items('node', $node, 'field_os2web_base_field_related')) ||
      ($term && $links = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_related'))) {
    foreach ($links as $link) {
      $link_node = node_load($link['nid']);
      if ($link_node) {
        $related_links[$link['nid']] = array(
          'nid' => $link['nid'],
          'title' => $link_node->title,
          'class' => 'int-link',
        );
      }
    }
  }
  // 2. Get all related links related to the KLE number on the node. Only get
  // these if the checkbox "Skjul relaterede links" isn't checked.
  if (($node &&
        (!isset($node->field_os2web_base_field_hidlinks['und'][0]['value']) ||
        $node->field_os2web_base_field_hidlinks['und'][0]['value'] == '0') &&
        $kle_items = field_get_items('node', $node, 'field_os2web_base_field_kle_ref')) ||
      ($term &&
        (!isset($term->field_os2web_base_field_hidlinks['und'][0]['value']) ||
        $term->field_os2web_base_field_hidlinks['und'][0]['value'] == '0') &&
        $kle_items = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_kle_ref'))) {

    foreach ($kle_items as $kle) {
      // Get all nodes which have the same KLE number as this node.
      $query = new EntityFieldQuery();
      $result = $query->entityCondition('entity_type', 'node')
        ->propertyCondition('status', 1)
        ->fieldCondition('field_os2web_base_field_kle_ref', 'tid', $kle['tid'])
        ->propertyOrderBy('title', 'ASC')
        ->execute();
      if (isset($result['node'])) {
        foreach ($result['node'] as $link) {
          // Be sure to skip links which already is in list, or links to current
          // node.
          if (isset($related_links[$link->nid]) || ($node && $node->nid == $link->nid)) {
            continue;
          }
          $link_node = node_load($link->nid);
          if ($link_node) {
            $related_links[$link->nid] = array(
              'nid' => $link->nid,
              'title' => $link_node->title,
              'class' => 'kle-link',
            );
          }

        }
      }
    }
  }

  // External related links.
  if (($node && $ext_links = field_get_items('node', $node, 'field_os2web_base_field_ext_link')) ||
      ($term && $ext_links = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_ext_link'))) {
    foreach ($ext_links as $link) {
      $related_links[] = array(
        'url' => $link['url'],
        'title' => $link['title'],
        'class' => 'ext-link',
      );
    }
  }

  if (!empty($related_links)) {
    // Provide the related links to the templates.
    $variables['page']['related_links'] = $related_links;
  }

  // When a node's menu link is deaktivated and has no siblings, menu_block is
  // empty, and then sidebar_first are hidden. We want to force the
  // sidebar_first to still be shown.
  $active_trail = menu_get_active_trail();
  $current_trail = end($active_trail);

  if (isset($current_trail['hidden']) && $current_trail['hidden'] && empty($variables['page']['sidebar_first'])) {
    $variables['page']['sidebar_first'] = array(
      '#theme_wrappers' => array('region'),
      '#region' => 'sidebar_first',
      'dummy_content' => array(
        '#markup' => ' ',
      ),
    );
  }

  // Hack to force the sidebar_second to be rendered if we have anything to put
  // in it.
  if (!$sidebar_second_hidden && empty($variables['page']['sidebar_second']) && (!empty($variables['page']['related_links']) || !empty($variables['page']['os2web_selfservicelinks']))) {
    $variables['page']['sidebar_second'] = array(
      '#theme_wrappers' => array('region'),
      '#region' => 'sidebar_second',
      'dummy_content' => array(
        '#markup' => ' ',
      ),
    );
  }

  // On taxonomy pages, add a news list in second sidebar.
  if ($term) {
    $view = views_get_view('os2web_news_lists');
    $view->set_display('panel_pane_2');
    $view->set_arguments(array('all', 'Branding', $term->tid));
    $view->set_items_per_page(3);
    $view->pre_execute();
    $view->execute();
    if (!empty($view->result)) {
      if (empty($variables['page']['sidebar_second'])) {
        $variables['page']['sidebar_second'] = array(
          '#theme_wrappers' => array('region'),
          '#region' => 'sidebar_second',
        );
      }
      $variables['page']['sidebar_second']['os2web_news_lists'] = array('#markup' => $view->render());
    }
    if ($term_is_top && $term->vocabulary_machine_name == "os2web_base_tax_site_structure") {
      $variables['page']['sidebar_first'] = array();
    }
    if ($term && strtolower($term->name) === "nyheder") {
      $variables['page']['sidebar_second'] = array();
    }
  }

  // Spotbox handling. Find all spotboxes for this node, and add them to
  // content_bottom.
  if (($node && $spotboxes = field_get_items('node', $node, 'field_os2web_base_field_spotbox')) ||
      ($term && !$term_is_top && $spotboxes = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_spotbox'))) {

    if (empty($variables['page']['sidebar_second'])) {
      $spotbox_render = drupal_render(_ktc_get_spotboxes($spotboxes));
    }
    else {
      $spotbox_render = drupal_render(_ktc_get_spotboxes($spotboxes, 'col-xs-6 col-sm-6 col-md-6 col-lg-6'));
    }

    $variables['page']['content']['os2web_spotbox'] = array(
      'os2web_spotbox' => array(
        '#markup' => $spotbox_render,
      ),
      '#theme_wrappers' => array('container'),
      '#attributes' => array(
        'class' => array('row', 'spotboxes'),
      ),
    );
  }

  // Add out fonts from Google Fonts API.
  drupal_add_html_head(array(
    '#tag' => 'link',
    '#attributes' => array(
      'href' => 'http://fonts.googleapis.com/css?family=PT+Sans:400,700,400italic,700italic|PT+Serif:400,700,400italic,700italic|Bree',
      'rel' => 'stylesheet',
      'type' => 'text/css',
    ),
  ), 'google_font_ktc');


  // Add google site verification
  drupal_add_html_head(array(
    '#tag' => 'meta',
    '#type' => 'html_tag',
    '#attributes' => array(
        'name' => 'google-site-verification',
        'content' => 'RERf3yjIX_1JFNkt2dpPZvqH_XeG8eum3P4PHXIpqqM'
      )
    ),
    'meta_keywords'
  );


  // Pass the theme path to js.
  drupal_add_js('jQuery.extend(Drupal.settings, { "pathToTheme": "' . path_to_theme() . '" });', 'inline');

  if (drupal_is_front_page()) {
    // Frontpage big menu.
    $variables['page']['front_big_menu'] = _ktc_get_front_big_menu_buttons();

    // Frontpage large carousel.
    $variables['page']['front_large_carousel'] = _ktc_get_front_large_carousel();

    // Frontpage small carousel.
    $variables['page']['front_small_carousel'] = _ktc_get_front_small_carousel();
  }
}

/**
 * Implements template_preprocess_taxonomy_term().
 */
function ktc_preprocess_taxonomy_term(&$variables) {

  $term = taxonomy_term_load($variables['tid']);
  $variables['term_display_alternative'] = FALSE;
  // Get wether this is a top term, and provide a variable for the templates.
  $term_is_top = _ktc_term_is_top($term->tid);
  $variables['term_is_top'] = $term_is_top;

  // Provide the spotboxes to Nyheder page or top terms. These pages does not
  // use the right sidebar so we need them in taxonomy-term.tpl
  if (isset($term->tid) && (strtolower($term->name) === 'nyheder' || $term_is_top)) {
    $spotboxes = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_spotbox');
    if (strtolower($term->name) === 'nyheder') {
      $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $term->tid;
      $variables['os2web_spotboxes'] = _ktc_get_spotboxes($spotboxes, 'col-xs-6 col-sm-4 col-md-4 col-lg-4');
    }
    else {
      $variables['os2web_spotboxes'] = _ktc_get_spotboxes($spotboxes, 'col-xs-6 col-sm-4 col-md-4 col-lg-4');
    }
  }
  if (isset($term->field_alternative_display['und'][0]['value']) &&
        $term->field_alternative_display['und'][0]['value'] == 1) {
    $variables['term_display_alternative'] = TRUE;
  }
}

/**
 * Implements THEME_preprocess_html().
 */
function ktc_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE.
  drupal_add_css(path_to_theme() . '/css/ie.css', array(
    'group' => CSS_THEME,
    'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE),
    'preprocess' => FALSE,
    'weight' => 115,
  ));

  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    // Add wether the term is top to the classes array.
    $term_is_top = _ktc_term_is_top(arg(2));

    if ($term_is_top) {
      $variables['classes_array'][] = 'term-is-top';
    }
    else {
      $variables['classes_array'][] = 'term-is-not-top';
    }
  }

  // Setup IE meta tag to force IE rendering mode.
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'X-UA-Compatible',
      'content' => 'IE=8,IE=Edge,chrome=1',
    ),
    '#weight' => '-99999',
  );
  // Add header meta tag for IE to head.
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
}
/**
 * Implements hook_preprocess_node().
 */
function ktc_preprocess_node(&$vars) {

  // Add css class "node--NODETYPE--VIEWMODE" to nodes.
  $vars['classes_array'][] = 'node--' . $vars['type'] . '--' . $vars['view_mode'];

  // Make "node--NODETYPE--VIEWMODE.tpl.php" templates available for nodes.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
}

/**
 * Implements theme_breadcrumb().
 *
 * Output breadcrumb as an unorderd list with unique and first/last classes.
 */
function ktc_breadcrumb($variables) {
  $breadcrumbs = $variables['breadcrumb'];

  if (!empty($breadcrumbs)) {
    // The facets integrate with the breadcrumbs, we don't want this.
    if (arg(0) == 'search' && isset($_GET['f'])) {
      // And since every facet adds a level to the breadcrumb, we do this.
      for ($i = 0; $i < count($_GET['f']); $i++) {
        array_pop($breadcrumbs);
      }
    }

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $crumbs = '<ul class="breadcrumb">';

    foreach ($breadcrumbs as $breadcrumb) {
      $classes = array();
      if ($breadcrumb == reset($breadcrumbs)) {
        $classes[] = 'first';
      }
      if ($breadcrumb == end($breadcrumbs)) {
        $classes[] = 'last';
      }
      if (is_array($breadcrumb)) {
        if (isset($breadcrumb['class'])) {
          $classes = array_merge($classes, $breadcrumb['class']);
        }
        if (isset($breadcrumb['data'])) {
          $breadcrumb = $breadcrumb['data'];
        }
      }
      $crumbs .= '<li class="' . implode(' ', $classes) . '"><i></i>'  . $breadcrumb . '</li>';
    }
    $crumbs .= '</ul>';
    return $crumbs;
  }
}

/**
 * Overrides theme_menu_link().
 *
 * Overrides Bootstrap version. Enables to show active trails childrens.
 */
function ktc_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ($element['#original_link']['in_active_trail']) {
      $sub_menu = drupal_render($element['#below']);
    }
    else {
      $element['#attributes']['class'][] = 'has-children';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Theme function to output tablinks for classic Quicktabs style tabs.
 *
 * @ingroup themeable
 */
function ktc_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'],
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];

      $class = "";
      if ($key == (count($vars['tabset']['tablinks']) - 1)) {
        $class = "last";
      }
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active','tab-' . $key, $class);
      }
      else {
        $item['class'] = array('tab-' . $key, $class);
      }
      $item['data'] = "<div><span>" . drupal_render($tab) . "</span></div>";
      $variables['items'][] = $item;
    }
  }
  return theme('item_list', $variables);
}

/**
 * Implements theme_form_element().
 */
function ktc_form_element(&$variables) {
  // Because the feeds module, puts the upload filechooser in the form
  // element[#description] it is not shown. As bootstrap tries to put all
  // '#description's in tooltips.
  // This workaround puts the the description from file fields in the field
  // suffix.
  // This should probarbly be fixed in the feeds module, but, until then..
  // @see https://www.drupal.org/node/2308343
  if ($variables['element']['#type'] == 'file' && isset($variables['element']['#description'])) {
    $variables['element']['#field_suffix'] = $variables['element']['#description'];
  }
  return bootstrap_form_element($variables);
}

/**
 * Helper function to get a rendeable array of spotboxes.
 *
 * @param array $spotboxes
 *   Array of spotboxe nodes with nids.
 *
 * @return array
 *   The renderable array.
 */
function _ktc_get_spotboxes($spotboxes, $classes = 'col-xs-6 col-sm-6 col-md-4 col-lg-4') {
  $spotbox_nids = array();
  foreach ($spotboxes as $spotbox) {
    $spotbox_nids[$spotbox['nid']] = $spotbox['nid'];
  }
  $spotbox_array = os2web_spotbox_render_spotboxes($spotbox_nids, NULL, NULL, NULL, 'svendborg_spotbox');

  foreach ($spotbox_array['node'] as &$spotbox) {
    if (is_array($spotbox)) {
      $spotbox['#prefix'] = '<div class="' . $classes . '">';
      $spotbox['#suffix'] = '</div>';
    }
  }
  return $spotbox_array;
}

/**
 * Helper function to retrive the correct array to display selfservicelinks.
 *
 * @param array $links
 *   Associated array of links with indexes 'nid'.
 *
 * @return array
 *   Array of links with URL and Title.
 */
function _ktc_get_selfservicelinks($links) {
  $selfservicelinks = array();
  foreach ($links as $link) {
    $selfservicelink = node_load($link['nid']);
    if ($selfservicelink) {
      $link_fields = field_get_items('node', $selfservicelink, 'field_spot_link');
      if (!empty($link_fields)) {
        $link_field = array_shift($link_fields);
        $selfservicelinks[$link['nid']] = array(
          'url' => $link_field['url'],
          'title' => $link_field['title'],
        );
      }
    }
  }
  return $selfservicelinks;
}

/**
 * Helper function to return wether a term is a top term.
 *
 * @param int $term_tid
 *   The term tid.
 *
 * @return bool
 *   If this term is top.
 */
function _ktc_term_is_top($term_tid) {
  $parent = &drupal_static(__FUNCTION__ . $term_tid);
  if (empty($parent)) {
    $parent = db_query("SELECT parent FROM {taxonomy_term_hierarchy} WHERE tid = :tid", array(':tid' => $term_tid))->fetchField();
  }

  return $parent == 0;
}

/**
 * Overrides file_link, add target= '_blank', file open in a new window.
 */
function ktc_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];
  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));
  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );
  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }
  // Open files of particular mime types in new window.
  $new_window_mimetypes = array('application/pdf','text/plain');
  if (in_array($file->filemime, $new_window_mimetypes)) {
    $options['attributes']['target'] = '_blank';
  }
  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}

/**
 * Implements theme_file_formatter_table().
 */
function ktc_file_formatter_table($variables) {
  $header = array(t('Attachment'));
  $rows = array();
  foreach ($variables['items'] as $delta => $item) {
    $rows[] = array(
      theme('file_link', array('file' => (object) $item)),
    );
  }
  return empty($rows) ? '' : theme('table', array('header' => $header, 'rows' => $rows));
}
/**
 * Retrieve front page big menu buttons.
 */
function _ktc_get_front_big_menu_buttons() {
  $front_big_menu = '';
  $tree = menu_tree_all_data('menu-indholdsmenu', $link = NULL, $max_depth = 3);

  foreach ($tree as $key => $menu_item) {
    $title = $menu_item['link']['link_title'];
    $path = drupal_get_path_alias($menu_item['link']['link_path']);
    switch($title) {
      case 'Kommunen':
        $menu_links[0] = array('mlid' => array('title' => $title,'path' => $path));
        break;
      case 'Borger':
        $menu_links[1] = array('mlid' => array('title' => $title,'path' => $path));
        break;
      case 'Erhverv':
        $menu_links[2] = array('mlid' => array('title' => $title,'path' => $path));
        break;
      case 'Politik':
        $menu_links[3] = array('mlid' => array('title' => $title,'path' => $path));
        break;
    }
  }
  ksort($menu_links);
  foreach ($menu_links as $menus) {
    foreach($menus as $key =>$menu_item) {
      $front_big_menu .= '<div class="menu-' . $key . ' front-indholsdmenu col-md-3 col-sm-3 col-xs-12">';
      $front_big_menu .= '<h2 class="menu-front ' . $menu_item['title'] . '">';
      $front_big_menu .= '<a title="' . $menu_item['title'] . '" href="' . $menu_item['path'] . '" class="' . $menu_item['title'] . '">' . $menu_item['title'] . '</a>';
      $front_big_menu .= '</h2></div>';
    }
  }
  return $front_big_menu;
}

function _ktc_get_front_large_carousel() {
  $front_large_carousel = '';
  // Branding news view
  $view = views_get_view('svendborg_news_view');
  $view->set_arguments(array('branding'));
  $view->set_display('front');
  $view->set_items_per_page(3);
  $view->execute();

  $results = $view->result;

  $front_large_carousel .= '<ol class="carousel-indicators col-md-12 col-sm-12 col-xs-12">';
  foreach ($results as $key => $item) {
    $front_large_carousel .= '<li data-target="#front-news-branding" data-slide-to="' . $key . '"';
    if ($key == 0) {
      $front_large_carousel .= 'class="active"></li>';
    }
    else {
      $front_large_carousel .= '></li>';
    }
  }
  $front_large_carousel .= '</ol>';
  $front_large_carousel .= '<div class="carousel-inner" id="front-carousel-large" >';

  foreach ($results as $key => $item) {
    if ($key == 0) {
      $front_large_carousel .= '<div class="item active">';
    }
    else {
      $front_large_carousel .= '<div class="item">';
    }
    $node = node_load($item->nid);
    $img = field_get_items('node', $node, 'field_os2web_base_field_lead_img');
    $image = $img[0];
    image_get_info($image["filename"]);

    $style = 'svendborg_content_image';
    $public_filename = image_style_url($style, $image["uri"]);
    $path = drupal_get_path_alias('node/' . $node->nid);
    $front_large_carousel .= '<a href="' . $path . '" title="' . $node->title . '">';
    $front_large_carousel .= '<div class="row-no-padding col-md-7 col-sm-8 col-xs-12 front-branding-img">';

    $front_large_carousel .= '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
    $front_large_carousel .= '</div>';
    $front_large_carousel .= '<div class="carousel-title col-md-5 col-sm-4 col-xs-12">';

    $front_large_carousel .= '<div class="title col-md-12">';
    $front_large_carousel .= $node->title;
    $front_large_carousel .= '</div>';

    $front_large_carousel .= '<div class="col-md-12">';
    $front_large_carousel .= '<a href="' . $path . '" title="' . $node->title . '" class="btn btn-primary">L&aelig;s mere</a>';
    $front_large_carousel .= '</div></div>';
    $front_large_carousel .= '</a>';
    $front_large_carousel .= '</div>';
  }
  $front_large_carousel .= '</div>';
  return $front_large_carousel;
}

function _ktc_get_front_small_carousel() {
  $front_small_carousel = '';
  $view = views_get_view('svendborg_news_view');
  $view->set_arguments(array('all'));
  $view->set_display('block_3');
  $view->set_items_per_page(9);
  $view->pre_execute();
  $view->execute();

  $results = $view->result;

  $front_small_carousel .= '<div id="front-carousel-small" class="carousel slide" data-ride="carousel">
                           <ol class="carousel-indicators col-md-12 col-sm-12 col-xs-12">';
  if (count($results) > 0) {
    $front_small_carousel .= '<li data-target="#front-carousel-small" data-slide-to="0" class="active"></li>';
  }
  if (count($results) > 3) {
    $front_small_carousel .= '<li data-target="#front-carousel-small" data-slide-to="1"></li>';
  }
  if (count($results) > 6) {
    $front_small_carousel .= '<li data-target="#front-carousel-small" data-slide-to="2"></li>';
  }

  $front_small_carousel .= '</ol>';

  $front_small_carousel .= '<div class="carousel-inner">';

  $small_news_carousel = array();
  foreach ($results as $key => $item) {
    if ($key < 3) {
      $small_news_carousel[0][] = $item;
    }
    elseif ($key >= 3 && $key <= 5) {
      $small_news_carousel[1][] = $item;
    }
    elseif ($key >= 6) {
      $small_news_carousel[2][] = $item;
    }
  }
  foreach ($small_news_carousel as $key => $items) {
    if ($key == 0) {
      $front_small_carousel .= '<div class="item active">';
    }
    else {
      $front_small_carousel .= '<div class="item">';
    }
    foreach ($items as $i=> $item) {
      $node = node_load($item->nid);
      $img = field_get_items('node', $node, 'field_os2web_base_field_lead_img');
      $image = $img[0];
      image_get_info($image["filename"]);

      $style = 'svendborg_content_image';
      $public_filename = image_style_url($style, $image["uri"]);

      $path = drupal_get_path_alias('node/' . $node->nid);
      $front_small_carousel .= '<a href="' . $path . '">';
      $front_small_carousel .= '<div class="col-md-4 col-sm-4 col-xs-12">';
      $front_small_carousel .= '<div class="front-s-news-item front-s-news-item-' . $i . '">';

      $front_small_carousel .= '<div class="front-s-news-item-img">';
      $front_small_carousel .= '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
      $front_small_carousel .= '</div>';

      $front_small_carousel .= '<div class="front-s-news-item-text">';
      $front_small_carousel .= '<div class="bubble"><span>' . $node->title . '</span></div>';
      $front_small_carousel .= '</div>';

      $front_small_carousel .= '</div>';
      $front_small_carousel .= '</div>';
      $front_small_carousel .= '</a>';
    }
    $front_small_carousel .= '</div>';
  }

  $front_small_carousel .= '</div></div>';

  $front_small_carousel .= '<div class="front-seperator"></div>';
  return $front_small_carousel;
}
