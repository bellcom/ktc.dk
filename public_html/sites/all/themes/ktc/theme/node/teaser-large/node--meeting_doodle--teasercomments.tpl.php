<?php
global $base_url;
?>

<?php if (!$page): ?>
  <!-- Begin - teaser large -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser-large"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="ktc-teaser-large-heading">
      <span><?php print $created_ago . ' ' . t('siden'); ?></span>
      <?php print $user_name; ?>
    </div>
    <!-- End - heading -->

    <div class="ktc-teaser-large-body">

      <h4 class="ktc-teaser-large-body-title">
        <a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a>
      </h4>

      <p><?php print $body_shortened; ?></p>

      <div class="ktc-call-to-action-button">
        <a class="btn btn-default" href="<?php print $base_url . $node_url; ?>"><?php print t('Afgiv stemme'); ?></a>
      </div>

    </div>

    <div class="ktc-footer">
      <a href="<?php print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser large -->
<?php endif; ?>