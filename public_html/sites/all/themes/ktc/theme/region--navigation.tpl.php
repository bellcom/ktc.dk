<?php
/**
 * @file
 * region--navigation.tpl.php
 *
 * Default theme implementation to display the "navigation" region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $attributes: String of attributes that contain things like classes and ids.
 * - $content_attributes: The attributes used to wrap the content. If empty,
 *   the content will not be wrapped.
 * - $region: The name of the region variable as defined in the theme's .info
 *   file.
 * - $page: The page variables from bootstrap_process_page().
 *
 * Helper variables:
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see bootstrap_preprocess_region().
 * @see bootstrap_process_page().
 *
 * @ingroup themeable
 */
?>
<?php if ($page['logo'] || $page['site_name'] || $page['primary_nav'] || $page['secondary_nav'] || $content): ?>

<div class="col-md-12 col-sm-12 col-xs-12">
  <div class="header_bottom">

    <header class="region region-navigation header_fixed"<?php //print $attributes; ?>>
      <?php if ($content_attributes): ?><div class="header_fixed_inner navbar-default"<?php //print $content_attributes; ?>><?php endif; ?>
      <div class="navbar-header col-md-2 hidden-sm col-xs-12">

        <?php if ($page['primary_nav'] || $page['secondary_nav'] || $content): ?>
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>

        <?php endif; ?>
      </div>

      <?php if ($page['primary_nav'] || $page['secondary_nav'] || $content): ?>
      <div class="col-md-7 col-sm-8 col-xs-12 navbar-collapse collapse navbar-default header_main_menu">
        <nav role="navigation">
          <div class="col-md-12 col-sm-12 col-xs-12 nav_main_menu">
            <?php print render($page['primary_nav']); ?>
          </div>
        </nav>
      </div>

      <?php endif; ?>

      <?php if (!$logged_in): ?>
        <div class="new_user_link">
          <i class="new_user"></i><a href="/user/signup">Opret Bruger</a>
        </div>

      <?php elseif (isset($page['user_name'])): ?>
        <div class="header-user col-md-3 col-sm-4 col-xs-12">
          <div class="row">
            <div class="header-user-name col-md-8 col-sm-8 col-xs-6">
              <?php print render($page['user_name']); ?><span class="icon-arrow-down"></span><br />
              <?php print theme('links', array('links' => menu_navigation_links('user-menu'), 'attributes' => array('class'=> array('header-user-menu')) ));?>
              <button class="btn-primary header-user-blocks">ÅBN DINE GENVEJE</button>
            </div>
            <div class="header-user-image col-md-4 col-sm-4 col-xs-6">
              <?php print $page['user_image'] ?>
            </div>
          </div>
        </div>
      <?php endif; ?>

      <?php if ($content_attributes): ?></div><?php endif; ?>

    </header>
  </div>
</div>

<?php endif; ?>
