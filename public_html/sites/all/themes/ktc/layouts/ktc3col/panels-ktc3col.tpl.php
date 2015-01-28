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
 *   - $content['center']: Content in the center column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="col-md-12 col-sm-12 col-xs-12 pane-top">
    <div class="row">
      <?php print $content['top']; ?>
    </div>
  </div>
  <div class="col-md-3 col-sm-4 col-xs-12 pane-left">
    <?php print $content['left']; ?>
  </div>
  <div class="col-md-3 col-sm-4 col-xs-12 col-md-push-6 col-sm-push-4  pane-right">
    <?php print $content['right']; ?>
  </div>
  <div class="col-md-6 col-sm-4 col-xs-12 col-md-pull-3 col-sm-pull-4 pane-center">
    <?php print $content['center']; ?>
  </div>
  <div class="col-md-12 col-sm-12 col-xs-12 pane-bottom">
    <?php print $content['bottom']; ?>
  </div>
</div>
