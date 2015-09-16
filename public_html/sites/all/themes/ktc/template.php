<?php
/**
 * @file
 * template.php
 */

/**
 * Implements template_preprocess_page().
 */
function ktc_form_comment_form_alter(&$form, &$form_state, &$form_id) {
  global $user;

  $node = node_load($form['#node']->nid);

  $account = user_load($user->uid);
  $image = theme('user_picture', array('account' => $account));

  $form['comment_body']['#after_build'][] = 'configure_comment_form';
  // Author
  unset($form['author']['_author']['#type']);
  unset($form['author']['_author']['#title']);
  $form['author']['_author']['#markup'] = $image;

  // Form class
  $form['#attributes']['class'][] = 'ktc-comments-form';

  // Textarea
  $form['comment_body']['#attributes']['class'][] = 'ktc-comments-form-textarea-wrapper';
  $form['comment_body'][LANGUAGE_NONE][0]['#attributes']['placeholder'] = t('Skriv din kommentar her...');
  $form['comment_body'][LANGUAGE_NONE][0]['#title'] = FALSE;
  $form['comment_body'][LANGUAGE_NONE][0]['#title_display'] = 'invisible';
  $form['comment_body'][LANGUAGE_NONE][0]['#rows'] = 3;

  $form['form_content']['#type'] = 'container';
  $form['form_content']['#attributes']['class'][] = 'ktc-comments-form-content';

  // Move stuff around
  $textarea = $form['comment_body'];
  unset($form['comment_body']);
  $form['form_content']['comment_body'] = $textarea;

  $author = $form['author'];
  unset($form['author']);
  $form['form_content']['author'] = $author;

  $form['actions']['submit']['#attributes']['class'][] = 'ktc-footer-button';
  $form['actions']['submit']['#attributes']['class'][] = 'pull-right';
  $form['actions']['submit']['#value'] = t('Send kommentar');
}

function configure_comment_form(&$form) {
  unset($form[LANGUAGE_NONE][0]['format']);
  return $form;
}

/*
 * Implements template_preprocess_comment().
 */
function ktc_preprocess_comment(&$variables) {

  //
  $comment_obj = $variables['comment'];
  $uid = $comment_obj->uid;
  $user_obj = user_load($uid);

  // Author
  $variables['comment_author'] = ktc_users_get_user_info($user_obj, 'personal');
}

/*
 * Implements theme_comment_post_forbidden().
 */
function ktc_comment_post_forbidden($variables) {
  $form = ktc_users_login();
  $form['#prefix'] = '<p class="ktc-comment-form-title">' . t('Log ind for at kommentere') . '</p>';

  return drupal_render($form);
}

/**
 * Implements template_preprocess_entity().
 */
function ktc_preprocess_entity(&$variables) {

  // Artikel afsnit
  if ($variables['elements']['#bundle'] == 'field_artikel_afsnit') {

    // Grab type
    if ($field = field_get_items('field_collection_item', $variables['field_collection_item'], 'field_artikelafsnit_type')) {
      $variables['classes_array'][] = 'ktc-article-section-type-' . $field[0]['value'];

      // Text w. image
      if ($field[0]['value'] == 'afsnitb') {

        // Image positioning
        if ($field = field_get_items('field_collection_item', $variables['field_collection_item'], 'field_artikelafsnit_placering')) {
          $variables['classes_array'][] = 'ktc-article-section-type-afsnitb-image-' . $field[0]['value'];
        }
      }
    }
  }
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
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
        '#markup' => '<h1>' . $term->name . '</h1>' . $view->render(),
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

  // Get all the nodes selvbetjeningslinks and give them to the template.
  if (($node && $links = field_get_items('node', $node, 'field_os2web_base_field_selfserv')) ||
    ($term && $links = field_get_items('taxonomy_term', $term, 'field_os2web_base_field_selfserv'))
  ) {
    $variables['page']['os2web_selfservicelinks'] = _ktc_get_selfservicelinks($links);
  }

  // Add out fonts from Google Fonts API.
  drupal_add_html_head(array(
    '#tag'        => 'link',
    '#attributes' => array(
      'href' => 'http://fonts.googleapis.com/css?family=Lato:400,700|Open+Sans:300italic,400italic,400,700,300,800',
      // font-family: 'Lato', sans-serif;
      // font-family: 'Open Sans', sans-serif;

      'rel'  => 'stylesheet',
      'type' => 'text/css',
    ),
  ), 'google_font_ktc');

  // Add google site verification.
  drupal_add_html_head(
    array(
      '#tag'        => 'meta',
      '#type'       => 'html_tag',
      '#attributes' => array(
        'name'    => 'google-site-verification',
        'content' => 'RERf3yjIX_1JFNkt2dpPZvqH_XeG8eum3P4PHXIpqqM',
      ),
    ),
    'meta_keywords'
  );
  // Prepare user object for region-header_top.tpl.php
  if (isset($variables['user']->uid)) {
    $user = user_load($variables['user']->uid);
    if ($name = field_get_items('user', $user, 'field_navn')) {
      if (strlen($name[0]['value']) > 13) {
        $name[0]['value'] = substr($name[0]['value'], 0, 12) . '...';
      }
      $variables['user_name'] = l($name[0]['value'], 'user/' . $user->uid, array('attributes' => array('class' => array('user-name'))));
    }
    else {
      $variables['user_name'] = l($user->name, 'user/' . $user->uid, array('attributes' => array('class' => array('user-name'))));
    }
    $variables['user_image'] = theme('user_picture', array('account' => $user));
  }

  // Prepare user node/add access.
  $menu = $menu = ktc_get_node_create_link();
  if (!empty($menu)) {
    $variables['create_link'] = TRUE;
    $variables['create_menu'] = '<ul class="create_content">';
    foreach ($menu as $type => $link) {
      $variables['create_menu'] .= '<li>' . l($link, 'node/add/' . $type) . '</li>';
    }
    $variables['create_menu'] .= '</ul>';
  }

  // Pass the theme path to js.
  drupal_add_js('jQuery.extend(Drupal.settings, { "pathToTheme": "' . path_to_theme() . '" });', 'inline');

  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['page']['content']['#content_column_class'] = array(4);
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['page']['content']['#content_column_class'] = array(8);
  }
  else {
    $variables['page']['content']['#content_column_class'] = array(12);
    if (isset($variables['page']['content']['ktc_sectionpage_ktc_page_menu_tabs'])) {
      $variables['page']['content']['system_main']['#block']->css_class = 'col-md-8 col-sm-8 col-md-pull-4 col-sm-pull-4';
      $variables['page']['content']['ktc_sectionpage_ktc_page_menu_tabs']['#block']->css_class = 'col-md-4 col-sm-4 col-md-push-8 col-sm-push-8';
    }
  }

  // Tabs
  $variables['tabs_primary'] = menu_primary_local_tasks();
  $variables['tabs_secondary'] = menu_secondary_local_tasks();
}

/**
 * Implements template_process_page().
 */
function ktc_process_page(&$variables) {
  // Primary menu.
  $variables['primary_nav'] = array();
  if ($variables['main_menu']) {
    // Build links.
    $tree = menu_tree_all_data('main-menu', $link = NULL, $max_depth = 2);
    $variables['primary_nav'] = menu_tree_output($tree);
    // Provide default theme wrapper function.
    $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
  }
}

/**
 * Implements template_preprocess_taxonomy_term().
 */
function ktc_preprocess_taxonomy_term(&$variables) {

}

/**
 * Implements THEME_preprocess_html().
 */
function ktc_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE.
  drupal_add_css(path_to_theme() . '/css/ie.css', array(
    'group'      => CSS_THEME,
    'browsers'   => array('IE' => 'lte IE 8', '!IE' => FALSE),
    'preprocess' => FALSE,
    'weight'     => 115,
  ));

  // Setup IE meta tag to force IE rendering mode.
  $meta_ie_render_engine = array(
    '#type'       => 'html_tag',
    '#tag'        => 'meta',
    '#attributes' => array(
      'http-equiv' => 'X-UA-Compatible',
      'content'    => 'IE=8,IE=Edge,chrome=1',
    ),
    '#weight'     => '-99999',
  );
  // Add header meta tag for IE to head.
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
}

/**
 * Implements template_preprocess_field().
 */
function ktc_preprocess_field(&$vars, $hook) {

  // Make "field--FIELDNAME--VIEWMODE.tpl.php" templates available.
  $vars['theme_hook_suggestions'][] = 'field__' . $vars['element']['#field_name'] . '__' . $vars['element']['#view_mode'];

  // Make "field--FIELDNAME--BUNDLE--VIEWMODE.tpl.php" templates available.
  $vars['theme_hook_suggestions'][] = 'field__' . $vars['element']['#field_name'] . '__' . $vars['element']['#bundle'] . '__' . $vars['element']['#view_mode'];
}

/**
 * Implements template_preprocess_node().
 */
function ktc_preprocess_node(&$vars) {

  // Add css class "node--NODETYPE--VIEWMODE" to nodes.
  $vars['classes_array'][] = 'node--' . $vars['type'] . '--' . $vars['view_mode'];

  // Node--teaser.tpl.php.
  if ($vars['elements']['#view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__teaser';
  }
  // Node--teasercomments.tpl.php.
  if ($vars['elements']['#view_mode'] == 'teasercomments') {
    $vars['theme_hook_suggestions'][] = 'node__teasercomments';
  }
  // Node--listevisning.tpl.php.
  if ($vars['elements']['#view_mode'] == 'listevisning') {
    $vars['theme_hook_suggestions'][] = 'node__listevisning';
  }
  // Node--listevisning.tpl.php.
  if ($vars['elements']['#view_mode'] == 'listevisning') {
    $vars['theme_hook_suggestions'][] = 'node__listevisning';
  }
  // Node--listevisningboks.tpl.php.
  if ($vars['elements']['#view_mode'] == 'listevisningboks') {
    $vars['theme_hook_suggestions'][] = 'node__listevisningboks';
  }
  // Make "node--NODETYPE--VIEWMODE.tpl.php" templates available for nodes.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];

  // Get node group info: name and class.
  // Function ktc_netvaerk_get_node_group_info is in ktc_netvaerk.module
  $group_info = ktc_netvaerk_get_node_group_info($vars['nid']);
  $vars['group_info'] = $group_info;
  $vars['classes_array'][] = $group_info['class'];

  // Teaser and teaser comments
  if ($vars['elements']['#view_mode'] == 'teaser' || $vars['elements']['#view_mode'] == 'teasercomments') {
    if ($body_shortened = field_get_items('node', $vars['node'], 'body')) {
      $vars['body_shortened'] = _ktc_text_shortener($body_shortened[0]['value'], 150);
    }
  }

  // Teaser comments
  if ($vars['elements']['#view_mode'] == 'teasercomments') {
    // Attachments
    if ($media = field_get_items('node', $vars['node'], 'field_os2web_base_field_media')) {
      $vars['document_attachments'] = $media;
    }
  }

  // Title (shortened)
  $vars['title_shortened'] = _ktc_text_shortener($vars['title'], 60);

  // Teaser
  if ($vars['elements']['#view_mode'] == 'teaser') {

    // Title (shortened)
    $vars['title_shortened'] = _ktc_text_shortener($vars['title'], 40);
  }

  // Added user_name and user_object for node--teaser/teasercomments templates.
  if ($vars['uid'] != 0) {
    $user = user_load($vars['uid']);
    $vars['user_object'] = $user;
    if ($name = field_get_items('user', $user, 'field_navn')) {
      $lastname = field_get_items('user', $user, 'field_efternavn');
      $full_name = $name[0]['value'] . ' ' . $lastname[0]['value'];
      $vars['user_name'] = l($full_name, 'user/' . $user->uid);
    }
    else {
      $vars['user_name'] = l($user->name, 'user/' . $user->uid);
    }
  }



  // Created time.
  $created_ago = format_interval(time() - $vars['created'], 2, 'da');
  $time_ar = explode(' ', $created_ago);
  $vars['created_ago'] = ktc_date_translate($time_ar);

  $vars['statistics_count'] = 0;
  if ($stats = statistics_get($vars['node']->nid)) {
    $vars['statistics_count'] = $stats['totalcount'];
  }

  if ($vars['type'] == 'group') {
    if ($field = field_get_items('node', $vars['node'], 'field_open_group')) {
      $vars['group_is_open'] = $field[0]['value'];
    }
  }

  // Added arrangement_day and arrangement_month for node--arrangement.tpl.php.
  if ($vars['type'] == 'arrangement') {

    if ( ! empty($vars['field_arrangement_date'])) {
      if (isset($vars['field_arrangement_date']['und'])) {
        $dbDate = $vars['field_arrangement_date']['und'][0]['value'];
      }
      else {
        $dbDate = $vars['field_arrangement_date'][0]['value'];
      }
      if ($dbDate) {
        $vars['arrangement_date'] = _ktc_format_datetime($dbDate);
      }
    }

    if ($signup_date = field_get_items('node', $vars['node'], 'field_registration_deadline')) {
      $vars['arrangement_signup_date_formatted'] = _ktc_format_datetime($signup_date[0]['value']);
    }

    if ($arrangement_type = field_get_items('node', $vars['node'], 'field_arrangement_type')) {
      $arrangement_type_term = taxonomy_term_load($arrangement_type[0]['tid']);
      $vars['arrangement_type'] = $arrangement_type_term->name;
    }
  }

  // News teaser
  if ($vars['elements']['#view_mode'] == 'teaser' && $vars['type'] == 'os2web_base_news') {

    // Promote to is set
    if ($promote_to = field_get_items('node', $vars['node'], 'field_os2web_base_field_promote')) {

      // Is a TM news
      if ($promote_to[0]['tid'] == 1902) {

        // Classes contains ktc-red - remove ktc-red
        if (($key = array_search('ktc-red', $vars['classes_array'])) !== FALSE) {
          unset($vars['classes_array'][$key]);
        }

        // Add ktc-blue
        $vars['classes_array'][] = 'ktc-blue';
      }
    }
  }

  // Network / group
  if ($vars['type'] == 'group') {

    // Region
    if ($region = field_get_items('node', $vars['node'], 'field_regioner')) {
      $region_term = taxonomy_term_load($region[0]['tid']);
      $vars['group_region'] = $region_term->name;
    }
  }

  // Meeting_doodle
  if ($vars['type'] == 'meeting_doodle') {
    if ($signup_date = field_get_items('node', $vars['node'], 'field_registration_deadline')) {
      $vars['signup_date_formatted'] = _ktc_format_datetime($signup_date[0]['value']);
    }
  }

  // Document
  if ($vars['type'] == 'document' || $vars['type'] == 'os2web_base_news') {
    $vars['num_attachments'] = false;
    if ($media = field_get_items('node', $vars['node'], 'field_os2web_base_field_media')) {
      $vars['num_attachments'] = count($media);
    }
  }

  // Hearing
  if ($vars['type'] == 'hearing') {

    // Duedate (response date)
    if ($hearing_duedate = field_get_items('node', $vars['node'], 'field_official_responsedate')) {
      $vars['hearing_duedate'] = _ktc_format_datetime($hearing_duedate[0]['value']);
    }

    // Type
    if ($hearing_type = field_get_items('node', $vars['node'], 'field_hearing_type')) {
      $hearing_type_term = taxonomy_term_load($hearing_type[0]['tid']);
      $vars['hearing_type'] = $hearing_type_term->name;
    }

    if ($hearing_info = _ktc_hearing_get_info_vars($vars['node'])) {

      $vars['hearing_attendees'] = $hearing_info['attendee_count'];

      if ($hearing_info['answer_count'] == null) {
        $hearing_info['answer_count'] = 0;
      }
      $vars['hearing_info'] = $hearing_info;
      $vars['hearing_replies'] = $hearing_info['answer_count'];
    }
  }

  // Created (converted)
  if (isset($vars['created'])) {
    $vars['published_at'] = _ktc_format_timestamp($vars['created']);
  }

  // News
  if ($vars['type'] == 'os2web_base_news') {
    if ($news_type = field_get_items('node', $vars['node'], 'field_os2web_news_page_type')) {
      $news_type_term = taxonomy_term_load($news_type[0]['tid']);
      $vars['news_type'] = $news_type_term->name;
    }
  }

  // Network groups
  if (isset($vars['og_group_ref']) && isset($vars['nid'])) {
    $vars['network_groups'] = _ktc_get_network_groups($vars['nid']);
  }

  // Added comments_view and num_comments for node--teasecomments.tpl.php.
  $view = views_get_view('comments_in_teaser');
  if ($view && $view->access('block')) {
    // It has a 'block' display.       
    $view->set_display('block');
    $view->set_arguments(array($vars['nid']));
    $view->pre_execute();
    $view->execute();
    if (!empty($view->result)) {
      $vars['comments_view'] = $view->render('block');
    }
  }
  $vars['num_comments'] = db_query("SELECT COUNT(cid) AS count FROM {comment}
                                   WHERE nid = :nid", array(":nid" => $vars['nid']))->fetchField();

}

/**
 * Date to danish.
 */
function ktc_date_translate($time_ar) {
  $time = array();
  foreach ($time_ar as $item) {
    switch ($item) {
      case 'year':
        $item = 'år';
        break;

      case 'years':
        $item = 'år';
        break;

      case 'month':
        $item = 'måned';
        break;

      case 'months':
        $item = 'måneder';
        break;

      case 'week':
        $item = 'uge';
        break;

      case 'weeks':
        $item = 'uger';
        break;

      case 'day':
        $item = 'dag';
        break;

      case 'days':
        $item = 'dage';
        break;

      case 'hour':
        $item = 'time';
        break;

      case 'hours':
        $item = 'timer';
        break;
    }
    $time[] = $item;
  }
  return implode(' ', $time);
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
 * Override menu link menu user profile menu.
 */
function ktc_menu_link__menu_user_profile_menu(array $variables) {

  $element = $variables['element'];
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li class="ktc-tabs-button-container" ' . drupal_attributes($element['#attributes']) . '>' . $output . "</li>\n";

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
  $icon = theme('file_icon', array(
    'file'           => $file,
    'icon_directory' => $icon_directory
  ));
  //
  $extension = pathinfo($file->uri, PATHINFO_EXTENSION);
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
  $new_window_mimetypes = array('application/pdf', 'text/plain');
  if (in_array($file->filemime, $new_window_mimetypes)) {
    $options['attributes']['target'] = '_blank';
  }
  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '<span class="file-extension">(' . $extension . ')</span></span>';
}

function modulename_menu_alter(&$item) {
  // Hide the "Create new account" tab
  $item['user/register']['type'] = MENU_CALLBACK;
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
  return empty($rows) ? '' : theme('table', array(
    'header' => $header,
    'rows'   => $rows
  ));
}

/**
 * Override theme_menu_local_task.
 */
function ktc_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  // Hide "Følg" and "Log"
  if ($link['path'] == 'node/%/track' || $link['path'] == 'node/%/log') {
    return '';
  }
  if ($link['path'] == 'node/%/administer') {
    $link['localized_options']['attributes']['class'][] = 'og-members-show-modal';
  }

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array(
      '!local-task-title' => $link['title'],
      '!active'           => $active
    ));
  }

  return '<li' . (!empty($variables['element']['#active']) ? ' class="ktc-tabs-button-container"' : ' class="ktc-tabs-button-container"') . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

/**
 * Implements hook_menu_local_tasks_alter().
 */
function ktc_menu_local_tasks_alter(&$data, $router_item, $root_path) {
  if (isset($data['tabs'][0]['output'])) {
    foreach ($data['tabs'][0]['output'] as $key => &$item) {
      $item['#link']['localized_options']['attributes']['class'][] = 'btn btn-action';
    }
  }
}

/**
 * Theme the calendar title.
 */
function ktc_date_nav_title($params) {
  $granularity = $params['granularity'];
  $view = $params['view'];
  $date_info = $view->date_info;
  $link = !empty($params['link']) ? $params['link'] : FALSE;
  $format = !empty($params['format']) ? $params['format'] : NULL;
  $format_with_year = variable_get('date_views_' . $granularity . 'format_with_year', 'l, F j, Y');
  $format_without_year = variable_get('date_views_' . $granularity . 'format_without_year', 'l, F j');
  switch ($granularity) {
    case 'year':
      $title = $date_info->year;
      $date_arg = $date_info->year;
      break;

    case 'month':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month);
      break;

    case 'day':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'D, j. M Y' : 'l, F j');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month) . '-' . date_pad($date_info->day);
      break;

    case 'week':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'W, Y' : 'M j');
      $title = t('Week of @date',
        array(
          '@date' => date_format_date($date_info->min_date, 'custom', $format),
        ));
      $date_arg = $date_info->year . '-W' . date_pad($date_info->week);
      break;

  }
  if (!empty($date_info->mini) || $link) {
    // Month navigation titles are used as links in the mini view.
    $attributes = array('title' => t('View full page month'));
    $url = date_pager_url($view, $granularity, $date_arg, TRUE);

    return l($title, $url, array('attributes' => $attributes));
  }
  else {
    return $title;
  }
}

/**
 * Implements hook_preprocess_summary_hearing_answer().
 */
function ktc_preprocess_summary_hearing_answer(&$vars) {
  global $base_url;
  $vars['style_sheet_url'] = $base_url . '/' . drupal_get_path('theme', 'ktc') . '/css/summary-hearing-answer.css';
  $vars['logo_path'] = $base_url . '/' . drupal_get_path('theme', 'ktc') . '/logo.png';
}

/**
 * Override template_preprocess_panels_pane.
 */
function ktc_preprocess_panels_pane(&$vars) {
  if ($vars['id'] === ' id="regioner"' || $vars['id'] === ' id="groups"'
    || $vars['id'] === ' id="content_type"' || $vars['id'] === ' id="term_type"'
    || $vars['id'] === ' id="emner"' || $vars['id'] === ' id="tags"'
    || $vars['id'] === ' id="edit-tabs"'
  ) {
    $vars['panel_is_filter'] = TRUE;
    $vars['title_attributes_array']['class'][] = 'filter-pane-title';
  }
}

/**
 * Implements hook_preprocess_block().
 */
function ktc_preprocess_block(&$vars) {
  $block_id = $vars['block']->delta;
  $classes = &$vars['classes_array'];
  // Add classes based on the block delta.
  switch ($block_id) {
    /* Add .badge class to block #14 */
    case 'menu-nyttige-links':
      $classes[] = 'col-md-3 col-sm-4 col-xs-12';
      break;

    case 'footer_contact_persons-block':
      $classes[] = 'col-md-4 col-sm-4 col-xs-12';
      break;

  }
  if ($vars['block']->region == 'footer_4') {
    $classes[] = 'col-md-5 col-sm-4 col-xs-12';
  }
  if ($vars['block']->region == 'footer') {
    $classes[] = 'col-md-3 col-sm-3 col-xs-12';
  }
}

/**
 * Get node create links.
 */
function ktc_get_node_create_link() {
  $menu = array();
  foreach (node_type_get_types() as $type) {

    // Replace underscores with -
    $type->type = str_replace("_", "-", $type->type);

    $item = menu_get_item('node/add/' . $type->type);
    if ($item['access']) {
      $menu[$type->type] = t('Opret') . ' ' . $type->name;
    }
  }
  return $menu;
}

/**
 * Implements HOOK_preprocess_user_profile()
 * Adds theme suggestions for the user view mode teaser
 */
function ktc_preprocess_user_profile(&$vars) {
  global $user;

  if ($vars['account']) {
    $user_obj = $vars['account'];
  }
  else {
    $user_obj = $vars['elements']['#account'];
  }
  $vars['account'] = $user_obj;



  // When a user has the role "KTC VIP" there must be a green ring around the
  // user picture
  if (isset($vars['account']->roles)) {
    if (is_array($vars['account']->roles)) {
      // VIP
      if (in_array('KTC VIP', $vars['account']->roles)) {
        $vars['classes_array'][] = 'ktc-user-green';
      }
      // Blue
      if (in_array('KTC BLUE', $vars['account']->roles)) {
        $vars['classes_array'][] = 'ktc-user-blue';
      }
    }
  }
  if ($user->uid == $user_obj->uid) {
    $vars['classes_array'][] = 'ktc-user-red';
  }

  // Allow for: print theme('user_profile', array('account' => $user_object, 'theme_suggestion' => 'list2'));
  if ($vars['theme_suggestion']) {
    $vars['theme_hook_suggestions'][] = 'user_profile__' . $vars['theme_suggestion'];
  }

  if (isset($vars['elements']['#view_mode'])) {
    if ($vars['elements']['#view_mode'] == 'teaser') {
      $vars['theme_hook_suggestions'][] = 'user_profile__teaser';
    }
    if ($vars['elements']['#view_mode'] == 'teaser2') {
      $vars['theme_hook_suggestions'][] = 'user_profile__teaser2';
    }
    if ($vars['elements']['#view_mode'] == 'list1') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list1';
    }
    if ($vars['elements']['#view_mode'] == 'list2') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list2';
    }
    if ($vars['elements']['#view_mode'] == 'list3') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list3';
    }
    if ($vars['elements']['#view_mode'] == 'list4') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list4';
    }
    if ($vars['elements']['#view_mode'] == 'list5') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list5';
    }
    if ($vars['elements']['#view_mode'] == 'list6') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list6';
    }
    if ($vars['elements']['#view_mode'] == 'list7') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list7';
    }
    if ($vars['elements']['#view_mode'] == 'list8') {
      $vars['theme_hook_suggestions'][] = 'user_profile__list8';
    }
  }

  // User real name in field_navn.
  if ($name = field_get_items('user', $user_obj, 'field_navn')) {
    if (strlen($name[0]['value']) > 16) {
      $name[0]['value'] = substr($name[0]['value'], 0, 15) . '...';
    }
    $vars['user_name'] = l($name[0]['value'], 'user/' . $user_obj->uid);
  }
  else {
    $vars['user_name'] = l($user_obj->name, 'user/' . $user_obj->uid);
  }
  // User employer.
  if ($employer = field_get_items('user', $user_obj, 'field_employer_name')) {
    if (strlen($employer[0]['value']) > 16) {
      $employer[0]['value'] = substr($employer[0]['value'], 0, 15) . '...';
    }
    $vars['employer'] = $employer[0]['value'];
  }
  else {
    $vars['employer'] = '';
  }
  // User job title.
  if ($job_title = field_get_items('user', $user_obj, 'field_jobposition')) {
    if (strlen($job_title[0]['value']) > 16) {
      $job_title[0]['value'] = substr($job_title[0]['value'], 0, 15) . '...';
    }
    $vars['job_title'] = $job_title[0]['value'];
  }
  else {
    $vars['job_title'] = '';
  }

  // Fetch grouprole. If it's relevant.
  $vars['network_role'] = ktc_users_get_user_network_role($user_obj);

  // Work
  $vars['work'] = ktc_users_get_user_info($user_obj, 'work');

  // Personal
  $vars['personal'] = ktc_users_get_user_info($user_obj, 'personal');

}

function ktc_field($variables) {
  $output = '';
  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }
  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  if ($variables['element']['#field_name'] == 'body' && $variables['element']['#bundle'] == 'group') {
    $node = $variables['element']['#object'];
    if ($parent_group = field_get_items('node', $node, 'og_group_ref')) {
      $node_2 = node_load($parent_group[0]['target_id']);
      $link = l($node_2->title, 'node/' . $node_2->nid);
      $output .= '<p></p><p></p><div class="parent-group"><span>Er en del of overstående netværk</span><h5>' . $link . '</h5></div>';
    }
  }
  $output .= '</div>';
  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements hook_preprocess_region().
 */
function ktc_preprocess_region(&$variables, $hook) {
  if ($variables['region'] == "header_top") {
    global $user;
    $user_object = user_load($user->uid);
    $variables['user_object'] = $user_object;
    $variables['user_login'] = drupal_render(ktc_users_login());
  }

  if ($variables['region'] == "sidebar_second") {
    $variables['classes_array'][] = 'col-md-4 col-xs-12 col-md-push-8 col-sm-push-8';
  }
  if ($variables['region'] == "content") {
    $class = '';
    if (!panels_get_current_page_display()) {
      $class = 'no-panels';
    }

    switch ($variables['elements']['#content_column_class'][0]) {
      case 8:
        $class = 'col-md-pull-4 col-sm-pull-4';
        break;

      case 4:
        $class = 'col-md-pull-4 col-sm-pull-4';
        break;

    }
    $variables['classes_array'][] = $class;
  }
}

/**
 * Implements ktc_preprocess_user_picture().
 */
function ktc_preprocess_user_picture(&$variables) {
  if (!$variables['user_picture']) {
    // If no user_picture is set. Generate a default one.
    $img_src = '/' . drupal_get_path('theme', 'ktc') . '/images/user-icon.png';
    $title = $variables['account']->name . 's billede';
    $user_url = drupal_get_path_alias('user/' . $variables['account']->uid);
    $variables['user_picture'] = '<a href="' . $user_url . '" title="Vis brugerprofil."><img class="img-responsive" src="' . $img_src . '" alt="' . $title . '" title="' . $title . '"></a>';
  }
}

/*
 * Format timestamp
 */
function _ktc_format_timestamp($timestamp) {
  return format_date($timestamp);
}

/*
 * Format datetime
 */
function _ktc_format_datetime($datetime) {
  $date = new DateTime($datetime);

  return format_date($date->getTimestamp());
}

// Get network group of node
function _ktc_get_network_groups($nid) {
  $groups = array();
  $ktc_node = node_load($nid);

  if ($network_groups = field_get_items('node', $ktc_node, 'og_group_ref')) {

    foreach ($network_groups AS $network_group) {
      $groups[] = node_load($network_group['target_id']);
    }
  }

  return $groups;
}

/*
 * Text shortener
 */
function _ktc_text_shortener($text_string, $max_length) {
  $alter = array(
    'max_length'    => $max_length,
    'ellipsis'      => TRUE,
    'word_boundary' => TRUE,
    'html'          => TRUE,
  );
  $shortened_string = views_trim_text($alter, $text_string);

  return $shortened_string;
}

/**
 * Implements hook_form_alter().
 */
function ktc_form_alter(&$form, &$form_state, $form_id) {
  $form['revision_information']['#access'] = false;
}
