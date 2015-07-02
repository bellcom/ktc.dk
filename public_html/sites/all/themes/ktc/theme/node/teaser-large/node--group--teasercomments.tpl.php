<?php
global $base_url;
?>

<?php if (!$page): ?>
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser-large"<?php print $attributes; ?>>

    <!-- Begin - full width image -->
    <?php if (isset($content['field_groupimage'])) : ?>
      <div class="ktc-full-width-image">
        <?php print render($content['field_groupimage']); ?>
      </div>
    <?php endif; ?>
    <!-- End - full width image -->

    <div class="ktc-teaser-large-body">

      <?php if (isset($group_type)): ?>
        <p class="mute"><?php print $group_type; ?></p>
      <?php endif ?>

      <h4 class="ktc-teaser-large-body-title"><a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a></h4>

      <?php if (isset($content['field_target_group'])): ?>
        <p><?php print render($content['field_target_group']); ?></p>
      <?php endif ?>

      <?php if (isset($content['field_regioner'])): ?>
        <p><?php print render($content['field_regioner']); ?></p>
      <?php endif ?>

      <?php if (isset($body_shortened)): ?>
        <p><strong><?php print t('Beskrivelse og formål:'); ?></strong></p>
        <p><?php print $body_shortened; ?></p>
      <?php endif; ?>

      <div class="ktc-call-to-action-button">
        <a href="<?php print $base_url . $node_url; ?>" class="btn btn-default ktc-call-to-action-button"><?php print t('Meld dig ind/ud'); ?></a>
      </div>

      <?php if ($user_object): ?>
        <?php print $profile = theme('user_profile', array('account' => $user_object, 'theme_suggestion' => 'list3')); ?>
      <?php endif; ?>

    </div>

    <div class="ktc-footer">
      <a href="<?php print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom"title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
      <span data-toggle="tooltip" data-placement="bottom" title="Antal medlemmer" class="ktc-footer-button ktc-footer-button-arrangement"><?php print $member_total; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser -->
<?php endif; ?>