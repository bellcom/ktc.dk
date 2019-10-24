<?php
/**
 * @file
 * region--header_top.tpl.php
 *
 * Default theme implementation to display the "Header top" region.
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
global $user;
?>
<?php if ($page['logo'] || $page['site_name'] || $page['primary_nav'] || $page['secondary_nav'] || $content): ?>

  <!-- Begin - header top bar -->
  <div class="ktc-header-top-bar">
    <div class="container">
      <div class="row">

        <div class="col-xs-3 col-sm-6 col-md-4">
          <?php if ($page['logo']): ?>
            <!-- Begin - logo -->
            <div class="ktc-header-top-bar-logo">
              <a href="<?php print $page['front_page']; ?>" title="<?php print t('Home'); ?>">
                <img src="<?php print $page['logo']; ?>" alt="<?php print t('Home'); ?>" />
              </a>
            </div>
            <!-- End - logo -->
          <?php endif; ?>

          <?php if ($logged_in && isset($page['create_link']) && $page['create_link']): ?>
            <span class="ktc-header-top-bar-add-content hidden-xs">
              <i class="ktc-header-top-bar-add-content-icon"></i><span>OPRET INDHOLD</span>
              <?php print $page['create_menu']; ?>
            </span>
          <?php endif; ?>
        </div>

        <div class="col-xs-9 col-sm-6 col-md-8 text-right">
          <div class="row">

            <?php if ($logged_in): ?>
              <div class="col-xs-6 col-md-9 no-padding">
                <!-- Begin - user display -->
                <ul class="ktc-header-top-bar-list pull-right ktc-header-top-bar-user-display">
                  <li>
                    <?php print $profile = theme('user_profile', array(
                      'account'          => $user_object,
                      'theme_suggestion' => 'header'
                    )); ?>
                  </li>
                </ul>
                <!-- End - user display -->
              </div>
            <?php endif; ?>

            <?php if ($logged_in): ?>
              <div class="col-xs-6 col-md-3 no-padding">
                <!-- Begin - navigation -->
                <ul class="ktc-header-top-bar-list pull-right ktc-header-top-bar-navigation">

                  <!-- Begin - toggle -->
                  <li>
                    <a href="#" data-toggle="tooltip" data-placement="bottom" title="Dine genveje"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-toggle"></span></a>
                  </li>
                  <!-- End - toggle -->

                  <!-- Begin - settings -->
                  <li>
                    <a href="/user/<?php print $user->uid; ?>/edit" data-toggle="tooltip" data-placement="bottom" title="Indstillinger"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-settings"></span></a>
                  </li>
                  <!-- End - settings -->

                  <!-- Begin - logout -->
                  <li>
                    <a href="/user/logout" data-toggle="tooltip" data-placement="bottom" title="Log af"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-user-logout"></span></a>
                  </li>
                  <!-- End - logout -->

                  <!-- Begin - search -->
                  <li>
                    <a href="/search" data-toggle="tooltip" data-placement="bottom" title="Søg"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-search"></span></a>
                  </li>
                  <!-- End - search -->
                  <!-- Begin - help -->
                   <li>
                    <a href="/om-ktc/hjaelp" data-toggle="tooltip" data-placement="bottom" title="<?php print t('Help'); ?>"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-help"></span></a>
                  </li>
                  <!-- End - help -->
                </ul>
              </div>
              <!-- End - navigation -->
            <?php endif; ?>

            <?php if (!$logged_in): ?>
              <div class="col-xs-12">
                <!-- Begin - user login -->
                <ul class="ktc-header-top-bar-list pull-right ktc-header-top-bar-user-login">
                  <li>
                    <?php print $user_login; ?>                    
                  </li>
                </ul>
                <!-- End - user login -->
              </div>
            <?php endif; ?>

            <?php if ($logged_in && isset($page['create_link']) && $page['create_link']): ?>
              <div class="col-xs-12">
                <span class="ktc-header-top-bar-add-content visible-xs pull-right text-left hidden-xs">
                  <i class="ktc-header-top-bar-add-content-icon"></i><span>OPRET INDHOLD</span>
                  <?php print $page['create_menu']; ?>
                </span>
              </div>
            <?php endif; ?>

          </div>
        </div>
      </div>

      <div class="row hidden-xs hidden-sm hidden-md hidden-lg">
        <div class="col-xs-12 ">
          <?php if ($logged_in): ?>
            <!-- Begin - user display -->
            <ul class="ktc-header-top-bar-list ktc-header-top-bar-user-display xs-only">
              <li>
                <?php print $profile = theme('user_profile', array(
                  'account'          => $user_object,
                  'theme_suggestion' => 'header'
                )); ?>
              </li>
            </ul>
            <!-- End - user display -->
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>
  <!-- End - header top bar -->

<?php endif ?>
