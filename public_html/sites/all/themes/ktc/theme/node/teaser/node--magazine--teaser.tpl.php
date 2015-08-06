<?php if (!$page): ?>
  <!-- node--magazine--teaser.tpl.php -->
  <!-- Begin - teaser magazine -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> ktc-aside ktc-aside-blue ktc-teaser-magazine"<?php print $attributes; ?> date-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">

    <?php if (isset($content['field_udgave'])): ?>
      <!-- Begin - heading -->
      <div class="ktc-aside-heading">
        <a href="node/<?php print $nid; ?>" class="ktc-aside-title">
          <?php print render($content['field_udgave']); ?>
        </a>
      </div>
      <!-- End - heading -->
    <?php endif; ?>

    <!-- Begin - body -->
    <div class="ktc-aside-body">
      <div class="row">

        <!-- Begin - left -->
        <div class="col-sm-4">

          <?php if (isset($content['field_forside_billede_'])): ?>
            <!-- Begin - link to paper edition -->
            <section class="ktc-teaser-magazine-banner">

              <?php if (empty($field_linkbladreversion)): ?>
                <h4><?php print render($content['field_forside_billede_']); ?></h4>
              <?php else: ?>
                <a href="<?php print $field_linkbladreversion[0]['url']; ?>"><?php print render($content['field_forside_billede_']); ?></a>
              <?php endif; ?>
            </section>
            <!-- End - link to paper edition -->
          <?php endif; ?>

          <?php if (isset($content['field_bannere']) && isset($content['field_banner_1_tekst_og_link'])): ?>
            <!-- Begin - banner 1 -->
            <div class="ktc-teaser-magazine-banner">
              <a href="<?php print $field_banner_1_tekst_og_link[0]['url']; ?>" title="<?php print $field_banner_1_tekst_og_link[0]['title']; ?>" target="_blank">
                <?php print render($content['field_bannere']); ?>
              </a>
            </div>
            <!-- End - banner 1 -->
          <?php endif; ?>

          <?php if (isset($content['field_banner_2']) && isset($content['field_banner_2_tekst_og_link'])): ?>
            <!-- Begin - banner 2 -->
            <div class="ktc-teaser-magazine-banner">
              <a href="<?php print $field_banner_2_tekst_og_link[0]['url']; ?>" title="<?php print $field_banner_2_tekst_og_link[0]['title']; ?>" target="_blank">
                <?php print render($content['field_banner_2']); ?>
              </a>
            </div>
            <!-- End - banner 2 -->
          <?php endif; ?>

          <a href="user/<?php print $user->uid; ?>/abonnementer" class="btn btn-info btn-block"><?php print t('Tegn et online abonnement'); ?></a>

        </div>
        <!-- End - left -->

        <!-- Begin - right -->
        <div class="col-sm-8">

          <?php if (isset($content['field_top_artikel'])): ?>
            <!-- Begin - top artikel -->
            <div class="ktc-teaser-magazine-top-artikel">
              <?php print render($content['field_top_artikel']); ?>
            </div>
            <!-- End - top artikel -->
          <?php endif; ?>

          <?php if (isset($content['field_ekstra_artikler'])): ?>
            <!-- Begin - ekstra artikler -->
            <?php print render($content['field_ekstra_artikler']); ?>
            <!-- End - ekstra artikler -->
          <?php endif; ?>

          <?php if (isset($content['field_magasinleder'])): ?>
            <!-- Begin - magasin leder -->
            <div class="ktc-teaser-magazine-leder">
              <?php print render($content['field_magasinleder']); ?>
            </div>
            <!-- End - magasin leder -->
          <?php endif; ?>

        </div>
        <!-- End - right -->

      </div>
      <!-- End - body -->

      <div class="ktc-teaser-magazine-buttons text-right">
        <a class="btn btn-primary" href="node/<?php print $nid; ?>"><?php print t('Se alle artikler for denne udgave'); ?></a>
      </div>

  </article>
  <!-- End - teaser magazine -->
<?php endif; ?>
