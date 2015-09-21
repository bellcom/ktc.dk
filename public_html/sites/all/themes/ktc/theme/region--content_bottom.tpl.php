<?php
/**
 * @file
 * region--content_bottom.tpl.php
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

<?php if ($content): ?>
<footer class="region region_footer footer_1 hidden-print" <?php print $attributes; ?>>
  <div class="footer_1">
    <div class="container">
      <?php print $content; ?>
    </div>
  </div>
</footer>
<?php endif; ?>
