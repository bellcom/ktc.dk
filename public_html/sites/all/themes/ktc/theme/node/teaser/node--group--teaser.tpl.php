<?php if ($teaser): ?>
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser"<?php print $attributes; ?>>

    <!-- Begin - full width image -->
    <?php if (isset($content['field_arrangement_billede'])) : ?>
      <div class="ktc-full-width-image">
        <?php print render($content['field_arrangement_billede']); ?>
      </div>
    <?php endif; ?>
    <!-- End - full width image -->

    <div class="ktc-teaser-body">

      <?php if (isset($group_type)): ?>
        <p class="mute"><?php print $group_type; ?></p>
      <?php endif ?>

      <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a></h4>

      <?php if (isset($arrangement_date)): ?>
        <p class="ktc-date"><?php print $arrangement_date; ?></p>
      <?php endif; ?>

      <?php if (isset($arrangement_signup_date_formatted)): ?>
        <p><strong><?php print t('Tilmeldingsfrist: '); ?></strong><?php print $arrangement_signup_date_formatted; ?></p>
      <?php endif ?>

      <?php if (isset($content['field_target_group'])): ?>
        <p><?php print render($content['field_target_group']); ?></p>
      <?php endif ?>

      <?php if (isset($content['field_regioner'])): ?>
        <p><?php print render($content['field_regioner']); ?></p>
      <?php endif ?>

      <?php if (isset($body_shortened)): ?>
        <p><?php print $body_shortened; ?></p>
      <?php endif; ?>

      <div class="ktc-call-to-action-button">
        <a href="<?php global $base_url; print $base_url . $node_url; ?>" class="btn btn-default ktc-call-to-action-button"><?php print t('Meld dig ind/ud'); ?></a>
      </div>

    </div>

    <div class="ktc-footer">
      <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom"title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
      <span data-toggle="tooltip" data-placement="bottom" title="Antal medlemmer" class="ktc-footer-button ktc-footer-button-arrangement"><?php print $member_total; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser -->

  <?php
  // Hide comments, tags, and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  hide($content['field_tags']);

  if (!empty($content['field_tags']) || !empty($content['links'])) {
    hide($content['field_tags']);
    hide($content['links']);
  }
  ?>

<?php endif; ?>