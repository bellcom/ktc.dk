<?php
/**
 * @file
 * Teaser view for a hearing.
 */
?>

<!-- Begin - list -->
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-list"<?php print $attributes; ?>>

  <!-- Begin - icon -->
  <span class="ktc-list-icon ktc-list-icon-<?php print $type; ?>"></span>
  <!-- End - icon -->

  <!-- Begin - body -->
  <div class="ktc-list-body">

    <?php if (isset($network_groups)): ?>
      <?php foreach($network_groups AS $network_group): ?>
        <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="ktc-list-title"><?php print $network_group->title; ?></a>
      <?php endforeach ?>
    <?php endif ?>

    <h3 class="ktc-list-headline"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>

    <?php if (isset($hearing_duedate)): ?>
      <p class="ktc-date"><?php print t('Svarfrist:'); ?> <?php print $hearing_duedate; ?></p>
    <?php endif ?>

    <?php if (isset($hearing_status)): ?>
      <p><strong><?php print t('Status:'); ?></strong> <?php print strtolower($hearing_status); ?></p>
    <?php endif ?>

  </div>
  <!-- End - body -->

</article>
<!-- End - list -->
