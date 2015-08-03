<?php if (!$page): ?>
  <!-- node--artikler--teaserlarge.tpl.php -->
  <!-- Begin - teaser large -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser ktc-teaser-artikler"<?php print $attributes; ?>>

    <h3 class="ktc-list-display-headline"><a href="<?php print $node_url; ?>"><?php print $title_shortened; ?></a></h3>

    <p class="ktc-date"><?php print $published_at; ?></p>

    <?php if (isset($content['field_short'])): ?>
      <!-- Begin - manchet -->
      <div class="ktc-teaser-body-content">

        <?php if (isset($content['field_os2web_base_field_lead_img'])): ?>
          <!-- Begin - image -->
          <div class="ktc-teaser-artikler-image">
            <?php print render($content['field_os2web_base_field_lead_img']); ?>
          </div>
          <!-- End - image -->
        <?php endif; ?>

        <?php print render($content['field_short']); ?>
      </div>
      <!-- End - manchet -->
    <?php endif; ?>

  </article>
  <!-- End - teaser large -->
<?php endif; ?>