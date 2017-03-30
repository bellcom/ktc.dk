<?php
global $base_url;
?>

<?php if (!$page): ?>
  <!-- node--artikler--teaserfront.tpl.php -->
  <!-- Begin - teaser front -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  ktc-teaser"<?php print $attributes; ?>>

    <!-- Begin - full width image -->
    <?php if (isset($content['field_os2web_base_field_lead_img'])) : ?>
      <div class="ktc-full-width-image">
        <?php print render($content['field_os2web_base_field_lead_img']); ?>
      </div>
    <?php endif; ?>
    <!-- End - full width image -->

    <!-- Begin - heading -->
    <?php if (isset($network_groups)): ?>
      <?php foreach ($network_groups as $network_group): ?>
        <div class="ktc-teaser-heading">
          <?php print l($network_group->title, 'node/' . $network_group->nid, array('attributes' => array('class' => array('ktc-teaser-title')))); ?>
        </div>
      <?php endforeach ?>
    <?php endif ?>
    <!-- End - heading -->

    <div class="ktc-teaser-body">

      <h4 class="ktc-teaser-body-title">
        <?php if (isset($article_access)) :?>
         <span class="<?php print $article_access ?>">&nbsp;</span>
        <?php endif;?>
        <a
          href="<?php print $base_url . $node_url; ?>"><?php print $title_shortened; ?></a>
      </h4>

      <?php if (isset($content['field_artikeltype'])): ?>
        <!-- Begin - article type -->
        <div class="ktc-teaser-article-type">
          <?php print render($content['field_artikeltype']); ?>
        </div>
        <!-- End - article type -->
      <?php endif; ?>

      <?php if (isset($published_at)): ?>
        <p class="ktc-date"><?php print $published_at; ?></p>
      <?php endif; ?>

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

    <div class="ktc-footer">
      <a href="<?php print $base_url . $node_url; ?>#comments" data-toggle="tooltip" data-placement="bottom" title="Kommentarer" class="ktc-footer-button ktc-footer-button-comment"><?php print $num_comments; ?></a>
      <span data-toggle="tooltip" data-placement="bottom" title="Visninger" class="ktc-footer-button ktc-footer-button-viewers"><?php print $statistics_count; ?></span>
      <span class="ktc-footer-button ktc-footer-button-<?php print $type; ?> pull-right"><?php print node_type_get_name($type); ?></span>
    </div>

  </article>
  <!-- End - teaser front -->
<?php endif; ?>
