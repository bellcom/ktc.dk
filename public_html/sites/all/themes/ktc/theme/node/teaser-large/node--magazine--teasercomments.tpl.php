<?php if (! $page): ?>
  <?php xdebug_break(); ?>
  <!-- Begin - teaser large -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?> date-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">
    <div class="row">

      <!-- Begin - left -->
      <div class="col-sm-4">

        <!-- Begin - edition -->
        <section class="ktc-box text-center">
          <h4><?php print render($content['field_udgave']); ?></h4>
        </section>
        <!-- End - edition -->

        <!-- Begin - link to paper -->
        <?php print views_embed_view('bladintro_node', $display_id = 'block', $nid); ?>
        <!-- End - link to paper -->

        <!-- Begin - subscribe -->
        <section>
          <a href="#" class="btn btn-info btn-block"><?php print t('Tegn et online abonnement'); ?></a>
        </section>
        <!-- End - subscribe -->

      </div>
      <!-- End - left -->

      <!-- Begin - right -->
      <div class="col-sm-8">



      </div>
      <!-- End - right -->

    </div>
    <div class="text-right">
      <a class="btn btn-primary" href="#"><?php print t('Se alle artikler for denne udgave'); ?></a>
    </div>
  </article>
  <!-- End - teaser large -->
<?php endif; ?>
