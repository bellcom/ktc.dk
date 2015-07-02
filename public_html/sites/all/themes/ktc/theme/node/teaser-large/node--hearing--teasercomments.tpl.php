<?php
global $base_url;
?>

<?php if (!$page): ?>
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser-large"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="ktc-teaser-large-heading">
      <span><?php print $created_ago . ' ' . t('siden'); ?></span>
      <?php print $user_name; ?>
    </div>
    <!-- End - heading -->

    <div class="ktc-teaser-large-body">

      <h4 class="ktc-teaser-large-body-title">
        <a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a>
      </h4>

      <?php if (isset($body_shortened)): ?>
        <p><?php print $body_shortened; ?></p>
      <?php endif; ?>

      <?php if (isset($hearing_duedate)): ?>
        <p>
          <strong><?php print t('Svarfrist:'); ?></strong> <?php print $hearing_duedate; ?>
        </p>
      <?php endif ?>

      <?php if (isset($hearing_status)): ?>
        <p>
          <strong><?php print t('Status:'); ?></strong> <?php print strtolower($hearing_status); ?>
        </p>
      <?php endif ?>

      <div class="ktc-call-to-action-button">
        <a class="btn btn-default" href="<?php print $base_url . $node_url; ?>"><?php print t('Afgiv/rediger svar'); ?></a>
      </div>

      <?php if ($user_object): ?>
        <?php print $profile = theme('user_profile', array('account'          => $user_object,
                                                           'theme_suggestion' => 'list3'
        )); ?>
      <?php endif; ?>

    </div>

    <div class="ktc-footer">
      <span data-toggle="tooltip" data-placement="bottom" title="Antal deltagere" class="ktc-footer-button"><?php print t('Deltagere:') . ' ' . $hearing_attendees; ?></span>
      <span data-toggle="tooltip" data-placement="bottom" title="Antal svar" class="ktc-footer-button"><?php print t('Svar:') . ' ' .  $hearing_replies; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
      <?php if (isset($hearing_type)): ?>
        <span data-toggle="tooltip" data-placement="bottom" title="Høringstype" class="ktc-footer-button pull-right"><?php print $hearing_type; ?></span>
      <?php endif ?>
    </div>

  </article>
  <!-- End - teaser -->
<?php endif; ?>