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
<div class="ktc3coldata" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="row">
    <div class="col-xs-12 pane-top">
      <?php print $content['top']; ?>
    </div>
  </div>

  <div class="row">

    <div class="col-sm-6 col-md-3 pane-left">
      <?php print $content['left']; ?>
    </div>

    <div class="col-sm-6 col-md-3 pane-right">
      <?php print $content['right']; ?>
    </div>

  </div>

  <div class="row">
    <div class="col-md-6 pane-center ktc-content">

      <?php if ($content['centertop']): ?>
        <div class="row">
          <div class="col-xs-12">
            <?php print $content['centertop']; ?>
          </div>
        </div>
      <?php endif; ?>

      <?php if (isset($content['centerleft']) || isset($content['centerright'] || isset($content['center'])): ?>
        <div class="row">

          <?php if (isset($content['centerleft'])): ?>
            <div class="col-sm-6 pane-centerleft">
              <?php print $content['centerleft']; ?>
            </div>
          <?php endif ?>

          <?php if ($content['center']): ?>
            <div class="row">
              <div class="col-xs-12 pane-center">
                <?php print $content['center']; ?>
              </div>
            </div>
          <?php endif ?>

          <?php if (isset($content['centerright'])): ?>
            <div class="col-sm-6 pane-centerright">
              <?php print $content['centerright']; ?>
            </div>
          <?php endif ?>

        </div>
      <?php endif ?>

    </div>
  </div>

  <div class="row">
    <div class="col-xs-12 pane-bottom">
      <?php print $content['bottom']; ?>
    </div>
  </div>

</div>
