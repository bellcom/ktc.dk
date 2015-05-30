<?php if (!$page): ?>

    <!-- Begin - teaser -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser-large"<?php print $attributes; ?>>

        <div class="panel-heading">
            <span><?php print $created_ago . ' ' . t('siden'); ?></span>
            <?php print $user_name; ?>
        </div>

        <div class="panel-body">

            <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $node->title; ?></a></h4>

            <?php if (isset($signup_date_formatted)): ?>
                <p class="ktc-date"><?php print t('Svarfrist:') . ' ' . $signup_date_formatted; ?></p>
            <?php endif; ?>

            <p><?php print $body_shortened; ?></p>

            <div class="ktc-call-to-action-button">
                <a class="btn btn-default" href="<?php global $base_url; print $base_url . $node_url; ?>" class="panel-title"><?php print t('Afgiv stemme'); ?></a>
            </div>

            <div class="ktc-comments">
                <?php if (isset($comments_view)): ?>
                    <?php print $comments_view; ?>
                <?php endif ?>
            </div>

        </div>

        <div class="ktc-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
            <span class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
            <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
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