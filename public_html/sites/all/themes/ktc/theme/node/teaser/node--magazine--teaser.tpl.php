<?php if (! $page): ?>
<!--  --><?php //xdebug_break(); ?>
  <!-- Begin - teaser large -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-teaser-magazine"<?php print $attributes; ?> date-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">
    <div class="row">

      <!-- Begin - left -->
      <div class="col-sm-4">

        <?php if (isset($content['field_udgave'])): ?>
          <!-- Begin - edition -->
        <section class="ktc-box text-center">
          <h4><?php print render($content['field_udgave']); ?></h4>
        </section>
        <!-- End - edition -->
        <?php endif; ?>

        <?php if (isset($content['field_forside_billede_'])): ?>
          <!-- Begin - link to paper -->
          <section class="ktc-teaser-magazine-banner">
            <h4><?php print render($content['field_forside_billede_']); ?></h4>
          </section>
          <!-- End - link to paper -->
        <?php endif; ?>

        <?php if (isset($content['field_bannere'])): ?>
          <!-- BEGIN - banner 1 -->
          <div class="ktc-teaser-magazine-banner">
            <?php print render($content['field_bannere']); ?>
          </div>
          <!-- END - banner 1 -->
        <?php endif; ?>

        <?php if (isset($content['field_banner_2'])): ?>
          <!-- BEGIN - banner 2 -->
          <div class="ktc-teaser-magazine-banner">
            <?php print render($content['field_banner_2']); ?>
          </div>
          <!-- END - banner 2 -->
        <?php endif; ?>

        <!-- Begin - subscribe -->
        <section>
          <a href="#" class="btn btn-info btn-block"><?php print t('Tegn et online abonnement'); ?></a>
        </section>
        <!-- End - subscribe -->

      </div>
      <!-- End - left -->

      <!-- Begin - right -->
      <div class="col-sm-8">

        <?php if (isset($content['field_top_artikel'])): ?>
          <!-- BEGIN - top artikel -->
          <?php print render($content['field_top_artikel']); ?>
          <!-- END - top artikel -->
        <?php endif; ?>

        <?php if (isset($content['field_ekstra_artikler'])): ?>
          <!-- BEGIN - ekstra artikler -->
          <div class="ktc-box">
            <?php print render($content['field_ekstra_artikler']); ?>
          </div>
          <!-- END - ekstra artikler -->
        <?php endif; ?>

        <?php if (isset($content['field_magasinleder'])): ?>
          <!-- BEGIN - magasin leder -->
          <div class="ktc-box">
            <?php print render($content['field_magasinleder']); ?>
          </div>
          <!-- END - magasin leder -->
        <?php endif; ?>

        <div class="text-right">
          <a class="btn btn-primary" href="#"><?php print t('Se alle artikler for denne udgave'); ?></a>
        </div>

      </div>
      <!-- End - right -->

    </div>
  </article>
  <!-- End - teaser large -->
<?php endif; ?>
