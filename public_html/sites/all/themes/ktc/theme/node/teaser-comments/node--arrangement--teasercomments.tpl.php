<?php if (!$page): ?>

    <!-- Begin - teaser -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  panel-block-teaser-large"<?php print $attributes; ?>>

        <?php if (isset($content['field_image'])) : ?>
            <div class="ktc-full-width-image">
                <?php print render($content['field_image']); ?>
            </div>
        <?php endif ?>

        <div class="panel-heading">
            <span><?php print $created_ago . ' ' . t('siden'); ?></span>
            <?php print $user_name; ?>
        </div>

        <div class="panel-body">
            <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $node->title; ?></a></h4>

            <?php if (isset($arrangement_date)): ?>
                <h5 class="panel-date-simple"><?php print $arrangement_date; ?></h5>
            <?php endif; ?>

            <?php if (isset($arrangement_signup_date_formatted)): ?>
                <p><?php print t('Tilmelding inden: ') . ' ' . $arrangement_signup_date_formatted; ?></p>
            <?php endif ?>

            <?php if (isset($arrangement_type)): ?>
                <p class="mute"><?php print $arrangement_type; ?></p>
            <?php endif ?>

            <p><?php print $body_shortened; ?></p>

            <div class="ktc-call-to-action-button">
                <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="btn btn-blacknblue ktc-call-to-action-button"><?php print t('Tilmeld'); ?></a>
            </div>

            <div class="ktc-comments">
                <?php if (isset($comments_view)): ?>
                    <?php print $comments_view; ?>
                <?php endif ?>
            </div>

        </div>

        <div class="panel-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" class="panel-footer-button panel-footer-button-comment"><?php print $num_comments; ?></a>
            <span class="panel-footer-button panel-footer-button-viewers"><?php print $statistics_count; ?></span>
            <span class="panel-footer-button panel-footer-button-viewers"><?php print $signup_total; ?></span>
            <span class="panel-footer-button panel-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
        </div>

    </article>
    <!-- End - teaser -->

    <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_os2web_base_field_image']);
    hide($content['field_os2web_base_field_lead_img']);

    if (!empty($content['field_tags']) || !empty($content['links'])) {
        hide($content['field_tags']);
        hide($content['links']);
    }
    ?>

<?php endif; ?>