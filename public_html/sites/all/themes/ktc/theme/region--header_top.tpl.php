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
<div class="col-md-12 col-sm-12 col-xs-12">
<div class="header_top" id="header_top">
  <div class="row">
  <div class="col-md-2 col-sm-3 col-xs-12">
    <?php if ($page['logo']): ?>
      <a class="logo pull-left" href="<?php print $page['front_page']; ?>" title="<?php print t('Home'); ?>">
        <img src="<?php print $page['logo']; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>
  </div>
  <div class="col-md-10 col-sm-9 col-xs-12 header_top_content">
    <?php if ($logged_in && isset($page['create_link']) && $page['create_link']): ?>
    <div class="header-add-content"><i class="icon-add-content"></i><span>OPRET INDHOLD</span>
      <?php print $page['create_menu']; ?>
    </div>

    <?php endif; ?>
    <?php print $content; ?>
  </div>
  </div>
</div>
</div>
<?php endif; ?>
