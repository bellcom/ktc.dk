<?php
/**
 * @file panels-pane--aside-masonry.tpl.php
 */
?>
<?php if ($pane_prefix): ?>
  <?php print $pane_prefix; ?>
<?php endif; ?>

<!-- panels-pane--aside-masonry.tpl.php -->
<!-- Begin - aside -->
<div class="bs3-masonry-item <?php print $classes; ?>" <?php print $id; ?> <?php print $attributes; ?>>
  <div class="ktc-aside">
    <?php if ($admin_links): ?>
      <?php print $admin_links; ?>
    <?php endif; ?>

    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title" <?php print $title_attributes; ?>><?php print $title; ?></h3>
      </div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if($content): ?>
      <div class="ktc-aside-body pane-content">
        <?php print render($content); ?>
      </div>
    <?php endif ?>

    <?php if ($links): ?>
      <div class="links">
        <?php print $links; ?>
      </div>
    <?php endif; ?>

    <?php if ($more): ?>
      <div class="more-link">
        <?php print $more; ?>
      </div>
    <?php endif; ?>

    <?php if ($feeds): ?>
      <div class="feed">
        <?php print $feeds; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
<?php if ($pane_suffix): ?>
  <?php print $pane_suffix; ?>
<?php endif; ?>
<!-- End - aside -->
