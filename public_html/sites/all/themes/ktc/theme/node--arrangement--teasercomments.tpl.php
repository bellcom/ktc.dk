<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes . " all"; ?> clearfix bg-white node-teaser node-teaser_comments"<?php print $attributes; ?>>
  <?php if (!$page) : ?>
  <div class="margin-bottom-20 col-md-12 col-sm-12 col-xs-12">
    <div class="">
      <?php if (isset($content['field_image'])) : ?>
        <div class="node-teaser-item-img">
          <?php print render($content['field_image']); ?>
        </div>
      <?php endif; ?>
      <div class="row">
        <div class="node-teaser-user clearfix col-md-12 col-sm-12 col-xs-12">
          <?php if (isset($user_name)): ?>
            <div class="user_link col-md-6 left"><?php print $user_name; ?></div>
          <?php endif; ?>
          <div class="col-md-6 right">
            <?php print $created_ago . ' ' . t('ago'); ?>
          </div>
        </div>
        <div class="node-teaser-hr clearfix col-md-12 col-sm-12 col-xs-12">
          <div class="node-teaser-hr-inner clearfix col-md-12 col-sm-12 col-xs-12"></div>
        </div>
        <div class="node-teaser-text clearfix col-md-12 col-sm-12 col-xs-12">
          <div class="col-md-3 col-sm-3 col-xs-12 left">
          <?php if (isset($arrangement_day) && isset($arrangement_month)): ?>
          <span class="icon-calendar">
            <span class="calendar-day">
              <?php print $arrangement_day; ?>
            </span>
            <span class="calendar-month">
              <?php print $arrangement_month; ?>
            </span>
          </span>
          <?php endif; ?>
          </div>
          <div class="col-md-9 col-sm-9 col-xs-12">
            <h2>
              <a class="news-title" href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $node->title; ?></a>
            </h2>
            <div>
                <p>
                <?php if (isset($content['field_short'])): ?>
                  <?php print render($content['field_short']); ?>
                <?php else: ?>
                  <?php print render($content['body']); ?>
                <?php endif; ?>
                </p>
            </div>
          </div>
        </div>
      </div>
      <div class="row node-comments clearfix">
        <?php if (isset($comments_view)): ?>
          <?php print $comments_view; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <div class="node-teaser-bottom clearfix col-md-12 col-sm-12 col-xs-12">
    <div class="col-md-6 col-sm-6 col-xs-6 left">
      <span><a href="<?php global $base_url; print $base_url . $node_url; ?>#comments"><i class="icon-comment"></i>  <?php print $num_comments; ?></a></span>
      <span class="span-right"><i class="icon-statistics"></i>  <?php print $statistics_count; ?></span>
    </div>
    <div class="col-md-6 col-sm-6 col-xs-6 right"><i class="node-type"></i><?php print node_type_get_name($type); ?></div>
  </div>
  <?php endif; ?>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_os2web_base_field_image']);
    hide($content['field_os2web_base_field_lead_img']);
  ?>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <?php hide($content['field_tags']); ?>
    <?php hide($content['links']); ?>
  <?php endif; ?>
</article>
