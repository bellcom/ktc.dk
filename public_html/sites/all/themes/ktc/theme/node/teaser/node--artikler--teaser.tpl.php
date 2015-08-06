<?php
global $base_url;
?>

<!-- node--artikler--teaser.tpl.php -->
<!-- Begin - teaser -->
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser"<?php print $attributes; ?>>
  <div class="ktc-teaser-body">

    <h4 class="ktc-teaser-body-title">
      <a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a>
    </h4>

    <p class="ktc-date"><?php print $published_at; ?></p>

    <?php if (isset($content['field_os2web_base_field_lead_img'])): ?>
      <!-- Begin - image -->
      <div class="ktc-teaser-artikler-image">
        <?php print render($content['field_os2web_base_field_lead_img']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <?php if (isset($content['field_short'])): ?>
      <!-- Begin - manchet -->
      <?php print render($content['field_short']); ?>
      <!-- End - manchet -->
    <?php endif; ?>

  </div>
</article>
<!-- End - teaser -->
