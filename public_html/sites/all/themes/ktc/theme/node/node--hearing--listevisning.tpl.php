<?php
/**
 * @file
 * Teaser view for a hearing.
 */
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> listevisning"<?php print $attributes; ?>>
    <span class="listevisning-icon listevisning-icon-<?php print $type; ?>"></span>
    <div class="listevisning-content">

        <?php if (isset($network_groups)): ?>
            <?php foreach($network_groups AS $network_group): ?>
                <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="listevisning-title"><?php print $network_group->title; ?></a>
            <?php endforeach ?>
        <?php endif ?>

        <h3 class="listevisning-headline"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>

        <?php if (isset($hearing_duedate)): ?>
            <p class="listevisning-date-simple"><?php print $hearing_duedate; ?></p>
        <?php endif ?>

        <?php if (isset($hearing_status)): ?>
            <p><strong><?php print t('Status'); ?></strong> <?php print $hearing_status; ?></p>
        <?php endif ?>

    </div>
</article>
