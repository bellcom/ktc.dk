<?php
/**
 * @file
 * Template for ktc signup admin form page.
 */
?>
<div class="row ktc-signup-admin-form">
  <div class="col-md-9 col-sm-9 col-xs-12">
    <?php if (isset($variables)): ?>
      <?php $form = $variables['form'];
      print drupal_render_children($form);?>
    <?php endif; ?>
  </div>
  <div class="col-md-3 col-sm-3 col-xs-12">
    <?php $menu = menu_local_tabs(); print render($menu); ?>
  </div>
</div>
