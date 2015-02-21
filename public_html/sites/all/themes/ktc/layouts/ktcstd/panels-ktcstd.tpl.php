<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

<?php if ($content['right']) { ?>
  <div class="col-md-4 col-sm-4 col-xs-12 col-md-push-8 col-sm-push-8 pane-sidebar">
    <?php print $content['right']; ?>
  </div>
  <div class="col-md-8 col-sm-8 col-xs-12 col-md-pull-4 col-sm-pull-4 pane-content">
    <?php print $content['left']; ?>
  </div>
<?php } else { ?>
  <div class="col-md-12 col-sm-12 col-xs-12 pane-content">
    <?php print $content['left']; ?>
  </div>
<?php }?>
</div>