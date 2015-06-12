<?php if ($teaser): ?>

    <!-- Begin - teaser -->
    <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser"<?php print $attributes; ?>>

        <!-- Begin - heading -->
        <?php if (isset($network_groups)): ?>
          <?php foreach($network_groups AS $network_group): ?>
            <div class="ktc-teaser-heading">
              <?php print l($network_group->title, 'node/' . $network_group->nid, array('attributes' => array('class' => 'ktc-teaser-title'))); ?>
            </div>
          <?php endforeach ?>
        <?php endif ?>
        <!-- End - heading -->

      <!-- Begin - body -->
      <div class="ktc-teaser-body">

        <h4><a href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a></h4>

        <?php if (isset($signup_date_formatted)): ?>
          <p class="ktc-date"><strong><?php print t('Svarfrist:'); ?></strong><?php print $signup_date_formatted; ?></p>
        <?php endif; ?>

          <div class="ktc-call-to-action-button">
              <a class="btn btn-default" href="<?php global $base_url; print $base_url . $node_url; ?>" class="ktc-teaser-title"><?php print t('Afgiv stemme'); ?></a>
          </div>

          <?php if ($user_object): ?>
              <?php print $profile = theme('user_profile', array('account' => $user_object, 'theme_suggestion' => 'list2')); ?>
          <?php endif; ?>

      </div>
      <!-- End - body -->

        <div class="ktc-footer">
            <a href="<?php global $base_url; print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
            <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
            <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
        </div>

    </article>
    <!-- End - teaser -->

    <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_os2web_base_field_image']);
    hide($content['field_os2web_base_field_lead_img']);

    if (!empty($content['field_tags']) || !empty($content['links'])) {
        hide($content['field_tags']);
        hide($content['links']);
    }
    ?>

<?php endif; ?>