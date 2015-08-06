<?php if (!$page): ?>
  <!-- node--artikler--teaserlarge.tpl.php -->
  <!-- Begin - teaser large -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser ktc-teaser-artikler"<?php print $attributes; ?>>

    <h3 class="ktc-list-display-headline">
      <a href="<?php print $node_url; ?>"><?php print $title_shortened; ?></a>
    </h3>

    <div class="ktc-teaser-body-content">

      <p class="ktc-date"><?php print $published_at; ?></p>

      <?php if (isset($content['field_artikeltype'])): ?>
        <!-- Begin - article type -->
        <div class="ktc-teaser-large-article-type">
          <?php print render($content['field_artikeltype']); ?>
        </div>
        <!-- End - article type -->
      <?php endif; ?>

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

      <?php if (isset($content['field_coforfattere'])): ?>
        <!-- Begin - authors -->
        <?php print render($content['field_coforfattere']); ?>
        <!-- End - authors -->
      <?php endif; ?>
    </div>

    <div class="ktc-footer">
      <a href="<?php print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser large -->
<?php endif; ?>