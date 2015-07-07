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
<div class="row ktc-4-col" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="col-md-3 pane-col-1">
    <?php print $content['col1']; ?>
  </div>
  <div class="col-md-3 pane-col-2">
    <?php print $content['col2']; ?>
  </div>
  <div class="col-md-3 pane-col-3">
    <?php print $content['col3']; ?>
  </div>
  <div class="col-md-3 pane-col-4">
    <?php print $content['col4']; ?>
  </div>
</div>
