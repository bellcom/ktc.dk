<?php
global $base_url;
?>

<?php if ($teaser): ?>
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2web_base_field_lead_img'])): ?>
      <!-- Begin - full width image -->
      <div class="ktc-full-width-image">
        <?php print render($content['field_os2web_base_field_lead_img']); ?>
      </div>
      <!-- End - full width image -->
    <?php endif; ?>

    <!-- Begin - heading -->
    <?php if (isset($network_groups)): ?>
      <?php foreach ($network_groups AS $network_group): ?>
        <div class="ktc-teaser-heading">
          <?php print l($network_group->title, 'node/' . $network_group->nid, array('attributes' => array('class' => array('ktc-teaser-title')))); ?>
        </div>
      <?php endforeach ?>
    <?php endif ?>
    <!-- End - heading -->

    <div class="ktc-teaser-body">

      <h4 class="ktc-teaser-body-title">
        <a href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a>
      </h4>

      <?php if (isset($content['field_short'])): ?>
        <!-- Begin - manchet -->
        <p><?php print render($content['field_short']); ?></p>
        <!-- End - manchet -->
      <?php endif; ?>

      <div class="clearfix"></div>

      <?php if (isset($content['field_artikel_forfattere'])): ?>
        <!-- Begin - authors -->
        <?php print render($content['field_artikel_forfattere']); ?>
        <!-- End - authors -->
      <?php endif; ?>

    </div>

    <div class="ktc-footer">
      <a href="<?php print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>

      <?php if (isset($content['field_antal_sider'])): ?>
        <!-- Begin - antal sider -->
        <span data-toggle="tooltip" data-placement="bottom" title="Antal sider" class="ktc-footer-button"><?php print t('Sider:'); ?><?php print render($content['field_antal_sider']); ?></span>
        <!-- End - antal sider -->
      <?php endif; ?>

      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser -->
<?php endif; ?>