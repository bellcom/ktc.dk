<?php if ($teaser): ?>
    <!-- Begin - teaser -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> panel panel-block panel-block-teaser"<?php print $attributes; ?>>

        <?php if (isset($network_groups)): ?>
            <?php foreach($network_groups AS $network_group): ?>
                <div class="panel-heading">
                    <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="panel-title"><?php print $network_group->title; ?></a>
                </div>
            <?php endforeach ?>
        <?php endif ?>

        <div class="panel-body">
            <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $node->title; ?></a></h4>
            <?php if (isset($published_at)): ?>
                <p class="panel-date-simple"><?php print $published_at; ?></p>
            <?php endif; ?>
            <p>
                <?php if (isset($content['field_short'])): ?>
                    <?php print render($content['field_short']); ?>
                <?php else: ?>
                    <?php print render($content['body']); ?>
                <?php endif; ?>
            </p>
        </div>

        <div class="panel-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" class="panel-footer-button panel-footer-button-comment"><?php print $num_comments; ?></a>
            <span class="panel-footer-button panel-footer-button-display"><?php print $statistics_count; ?></span>
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