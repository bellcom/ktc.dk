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
<div <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    <div class="row">
        <div class="col-md-12">
            <?php print $content['top']; ?>
        </div>
    </div>

    <div class="row">
        <div class="col-md-9">
            <div class="ktc-content-wide">
                <?php print $content['left']; ?>
            </div>
        </div>

        <div class="col-md-3">
            <?php print $content['right']; ?>
        </div>
    </div>

    <div class="row">
        <div class="col-md-12">
            <?php print $content['bottom']; ?>
        </div>
    </div>
</div>
