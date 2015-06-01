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
  
  <div class="row">
    <div class="col-xs-12 pane-top">
      <?php print $content['top_full']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-xs-12 col-sm-4 col-md-3"><?php print $content['banner_left']; ?></div>
    <div class="col-xs-12 col-sm-4 col-md-3"><?php print $content['banner_center_left']; ?></div>
    <div class="col-xs-12 col-sm-4 col-md-3"><?php print $content['banner_center_right']; ?></div>
    <div class="col-xs-12 col-sm-4 col-md-3"><?php print $content['banner_right']; ?></div>
  </div>

  <div class="row">
    <div class="col-xs-12 col-sm-4"><?php print $content['content_left']; ?></div>
    <div class="col-xs-12 col-sm-4"><?php print $content['content_center']; ?></div>
    <div class="col-xs-12 col-sm-4"><?php print $content['content_right']; ?></div>
  </div>

</div>
