<?php if ($teaser): ?>

    <!-- Begin - teaser -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser"<?php print $attributes; ?>>

        <!-- Begin - full width image -->
        <?php if (isset($content['field_image'])) : ?>
            <div class="ktc-full-width-image">
                <?php print render($content['field_image']); ?>
            </div>
        <?php endif; ?>
        <!-- End - full width image -->

        <!-- Begin - heading -->
        <?php if (isset($network_groups)): ?>
            <?php foreach($network_groups AS $network_group): ?>
                <div class="ktc-teaser-heading">
                    <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="ktc-teaser-title"><?php print $network_group->title; ?></a>
                </div>
            <?php endforeach ?>
        <?php endif ?>
        <!-- End - heading -->

        <div class="ktc-teaser-body">

            <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a></h4>

            <?php if (isset($arrangement_date)): ?>
                <p class="ktc-date"><?php print $published_at; ?></p>
            <?php endif; ?>

            <?php if (isset($arrangement_signup_date_formatted)): ?>
                <p><?php print t('Tilmelding inden: ') . ' ' . $arrangement_signup_date_formatted; ?></p>
            <?php endif ?>

            <?php if (isset($arrangement_type)): ?>
                <p class="mute"><?php print $arrangement_type; ?></p>
            <?php endif ?>

            <p><?php print $body_shortened; ?></p>

            <div class="ktc-call-to-action-button">
                <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="btn btn-default ktc-call-to-action-button"><?php print t('Tilmeld'); ?></a>
            </div>

            <div class="ktc-user-profile">
                <?php if (isset($user_object)): ?>
                    <?php print $image = theme('user_picture', array('account' => $user_object));?>
                <?php endif; ?>
                <div class="ktc-user-profile-content">
                    <h5><?php print $user_name; ?></h5>
                    <p><?php print $created_ago . ' ' . t('ago'); ?></p>
                </div>
            </div>

        </div>

        <div class="ktc-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
            <span class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
            <span class="ktc-footer-button ktc-footer-button-viewers"><?php print $signup_total; ?></span>
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