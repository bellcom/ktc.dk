<?php if ($teaser): ?>

    <!-- Begin - teaser -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser"<?php print $attributes; ?>>
        <div class="ktc-teaser-body">

            <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $node->title; ?></a></h4>

            <?php if (isset($signup_date_formatted)): ?>
                <p class="panel-date-simple"><?php print t('Svarfrist:') . ' ' . $signup_date_formatted; ?></p>
            <?php endif; ?>

            <div class="ktc-user-profile">
                <?php if (isset($user_object)): ?>
                    <?php print $image = theme('user_picture', array('account' => $user_object));?>
                <?php endif; ?>
                <div class="ktc-user-profile-content">
                    <h5><?php print $user_name; ?></h5>
                    <p><?php print $created_ago . ' ' . t('ago'); ?></p>
                </div>
            </div>

            <div class="ktc-call-to-action-button">
                <a class="btn btn-blacknblue" href="<?php global $base_url; print $base_url . $node_url; ?>" class="ktc-teaser-title"><?php print t('Afgiv stemme'); ?></a>
            </div>

        </div>

        <div class="panel-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" class="panel-footer-button panel-footer-button-comment"><?php print $num_comments; ?></a>
            <span class="panel-footer-button panel-footer-button-viewers"><?php print $statistics_count; ?></span>
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