<?php
/**
 * @file panels-pane--aside.tpl.php
 * Main panel pane template
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */
?>
<?php if ($pane_prefix): ?>
    <?php print $pane_prefix; ?>
<?php endif; ?>

<div class="ktc-aside <?php print $classes; ?> <?php if(isset($panel_is_filter) && $panel_is_filter) { print 'ktc-aside-toggle'; } ?>" <?php print $id; ?> <?php print $attributes; ?>>
    <?php if ($admin_links): ?>
        <?php print $admin_links; ?>
    <?php endif; ?>

    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
        <div class="ktc-aside-heading">
            <h3 class="ktc-aside-title" <?php print $title_attributes; ?>><?php print $title; ?></h3>
        </div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

   
</div>
<?php if ($pane_suffix): ?>
    <?php print $pane_suffix; ?>
<?php endif; ?>
