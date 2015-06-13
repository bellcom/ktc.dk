<?php if (!$page): ?>

    <!-- Begin - teaser large -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser-large"<?php print $attributes; ?>>

        <!-- Begin - full width image -->
        <?php if (isset($content['field_arrangement_billede'])) : ?>
            <div class="ktc-full-width-image">
                <?php print render($content['field_arrangement_billede']); ?>
            </div>
        <?php endif; ?>
        <!-- End - full width image -->

        <!-- Begin - heading -->
        <div class="ktc-teaser-large-heading">
            <span><?php print $created_ago . ' ' . t('siden'); ?></span>
            <?php print $user_name; ?>
        </div>
        <!-- End - heading -->

        <div class="ktc-teaser-large-body">

            <?php if (isset($arrangement_type)): ?>
                <p class="mute"><?php print $arrangement_type; ?></p>
            <?php endif ?>

            <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a></h4>

            <?php if (isset($arrangement_date)): ?>
                <p class="ktc-date"><?php print $arrangement_date; ?></p>
            <?php endif; ?>

            <?php if (isset($arrangement_signup_date_formatted)): ?>
                <p><strong><?php print t('Tilmeldingsfrist: '); ?></strong><?php print $arrangement_signup_date_formatted; ?></p>
            <?php endif ?>

            <p><?php print $body_shortened; ?></p>

          <div class="ktc-comments-list">
            <div class="ktc-comments-list-body">
              <?php if (isset($comments_view)): ?>
                <?php print $comments_view; ?>
              <?php endif ?>
            </div>
          </div>

        </div>

        <div class="ktc-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
            <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
            <span data-toggle="tooltip" data-placement="bottom" title="Tilmeldte" class="ktc-footer-button ktc-footer-button-arrangement"><?php print $signup_total; ?></span>
            <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
        </div>

    </article>
    <!-- End - teaser large -->

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