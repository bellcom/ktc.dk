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

    <?php if($content['top']): ?>
        <div class="row">
            <div class="col-md-12">
                <?php print $content['top']; ?>
            </div>
        </div>
    <?php endif ?>

    <div class="row">
        <div class="col-sm-9">

            <?php if($content['main-content']): ?>
                <div class="ktc-content-wide ktc-margin-bottom">
                    <?php print $content['main-content']; ?>
                </div>
            <?php endif ?>

            <?php if($content['content-1']): ?>
                <div class="row">
                    <div class="col-xs-12">
                        <?php print $content['content-1']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-1-masonry']): ?>
                <div class="row">
                    <div class="bs3-masonry-wrapper">
                        <?php print $content['content-1-masonry']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-2']): ?>
                <div class="row">
                    <div class="col-xs-12">
                        <?php print $content['content-2']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-2-masonry']): ?>
                <div class="row">
                    <div class="bs3-masonry-wrapper">
                        <?php print $content['content-2-masonry']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-3']): ?>
                <div class="row">
                    <div class="col-xs-12">
                        <?php print $content['content-3']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-3-masonry']): ?>
                <div class="row">
                    <div class="bs3-masonry-wrapper">
                        <?php print $content['content-3-masonry']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-4']): ?>
                <div class="row">
                    <div class="col-xs-12">
                        <?php print $content['content-4']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['content-4-masonry']): ?>
                <div class="row">
                    <div class="bs3-masonry-wrapper">
                        <?php print $content['content-4-masonry']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['left']): ?>
                <div class="ktc-content-wide ktc-margin-bottom">
                    <?php print $content['left']; ?>
                </div>
            <?php endif ?>

            <?php if($content['left1']): ?>
                <div class="row">
                    <div class="col-xs-12">
                        <?php print $content['left1']; ?>
                    </div>
                </div>
            <?php endif ?>

            <?php if($content['left2']): ?>
                <div class="row">
                    <div class="col-xs-12">
                        <?php print $content['left2']; ?>
                    </div>
                </div>
            <?php endif ?>

        </div>

        <?php if($content['sidebar-right']): ?>
            <div class="col-sm-3">
                <?php print $content['sidebar-right']; ?>
            </div>
        <?php endif ?>

        <?php if($content['right']): ?>
            <div class="col-sm-3">
                <?php print $content['right']; ?>
            </div>
        <?php endif ?>

    </div>

    <?php if($content['bottom']): ?>
        <div class="row">
            <div class="col-xs-12">
                <?php print $content['bottom']; ?>
            </div>
        </div>
    <?php endif ?>

</div>
