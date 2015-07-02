<?php
  global $base_url;
?>

<?php if (!$page): ?>
  <!-- Begin - teaser large -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser-large"<?php print $attributes; ?>>

    <!-- Begin - full width image -->
    <?php if (isset($content['field_os2web_base_field_lead_img'])) : ?>
      <div class="ktc-full-width-image">
        <?php print render($content['field_os2web_base_field_lead_img']); ?>
      </div>
    <?php endif; ?>
    <!-- End - full width image -->

    <!-- Begin - heading -->
    <div class="ktc-teaser-large-heading">
      <span><?php print $created_ago . ' ' . t('siden'); ?></span>
      <?php print $user_name; ?>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="ktc-teaser-large-body">

      <h4 class="ktc-teaser-large-body-title"><a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a></h4>

      <?php if (isset($news_type)): ?>
        <p><strong>Type:</strong> <?php print $news_type; ?></p>
      <?php endif; ?>

      <p><?php print $body_shortened; ?></p>

      <?php if ($user_object): ?>
        <?php print $profile = theme('user_profile', array('account' => $user_object, 'theme_suggestion' => 'list3')); ?>
      <?php endif; ?>

      <div class="ktc-comments-list">
        <div class="ktc-comments-list-body">
          <?php if (isset($comments_view)): ?>
            <?php print $comments_view; ?>
          <?php endif ?>
        </div>
      </div>

    </div>
    <!-- End - body -->

    <div class="ktc-footer">
      <a href="<?php print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser large -->
<?php endif; ?>
