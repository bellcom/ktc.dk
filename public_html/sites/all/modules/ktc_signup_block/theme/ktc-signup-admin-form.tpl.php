<?php
/**
 * @file
 * Template for ktc signup admin form page.
 */
?>
<div class="row ktc-signup-admin-form">
  <div class="col-md-8 col-sm-8 col-xs-12">
    <?php if (isset($variables)): ?>
      <?php $form = $variables['form'];
      print drupal_render_children($form);?>
    <?php endif; ?>
  </div>
  <div class="col-md-4 col-sm-4 col-xs-12">
    <?php $menu = menu_local_tabs(); print render($menu); ?>
  </div>
</div>
