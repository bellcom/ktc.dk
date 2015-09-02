<!-- node--artikler--teasercomments.tpl.php -->
<!-- Begin - teaser -->
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser"<?php print $attributes; ?>>

  <!-- Begin - full width image -->
  <?php if (isset($content['field_os2web_base_field_lead_img'])) : ?>
    <div class="ktc-full-width-image">
      <?php print render($content['field_os2web_base_field_lead_img']); ?>
    </div>
  <?php endif; ?>
  <!-- End - full width image -->

  <div class="ktc-teaser-body">

    <h4 class="ktc-teaser-body-title">
      <a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a>
    </h4>

    <p class="ktc-date"><?php print $published_at; ?></p>

    <?php if (isset($content['field_short'])): ?>
      <!-- Begin - manchet -->
      <?php print render($content['field_short']); ?>
      <!-- End - manchet -->
    <?php endif; ?>

    <?php if (isset($content['field_coforfattere'])): ?>
      <!-- Begin - authors -->
      <div class="ktc-user-blue">
        <?php print render($content['field_coforfattere']); ?>
      </div>
      <!-- End - authors -->
    <?php endif; ?>

  </div>
</article>
<!-- End - teaser -->
