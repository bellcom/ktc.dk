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
?>
<?php if ($page['logo'] || $page['site_name'] || $page['primary_nav'] || $page['secondary_nav'] || $content): ?>

    <!-- Begin - header top bar -->
    <div class="ktc-header-top-bar">
        <div class="container">

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
            <span class="ktc-header-top-bar-add-content">
              <i class="ktc-header-top-bar-add-content-icon"></i><span>OPRET INDHOLD</span>
              <?php /* print $page['create_menu']; */ ?>
            </span>
          <?php endif; ?>

          <!-- Begin - navigation -->
          <ul class="ktc-header-top-bar-user-menu">

            <?php if ($logged_in): ?>

              <!-- Begin - toggle -->
              <li>
                <a href="#"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-toggle"></span></a>
              </li>
              <!-- End - toggle -->

              <!-- Begin - settings -->
              <li>
                <a href="/user"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-settings"></span></a>
              </li>
              <!-- End - settings -->

              <!-- Begin - logout -->
              <li>
                <a href="/user/logout"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-user-logout"></span></a>
              </li>
              <!-- End - logout -->

            <?php else: ?>

              <!-- Begin - login form -->
              <li>
                <?php print $content; ?>
              </li>
              <!-- End - login form -->

              <!-- Begin - login -->
              <li>
                <a href="/user/create"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-user-login"></span></a>
              </li>
              <!-- End - login -->

              <!-- Begin - create user -->
              <li>
                <a href="/user/register"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-user-create"></span></a>
              </li>
              <!-- End - create user -->

            <?php endif ?>

            <!-- Begin - search -->
            <li>
              <a href="/search"><span class="ktc-header-top-bar-user-menu-icon ktc-header-top-bar-user-menu-icon-search"></span></a>
            </li>
            <!-- End - search -->

          </ul>
          <!-- End - navigation -->

        </div>
    </div>
    <!-- End - header top bar -->

<?php endif ?>
