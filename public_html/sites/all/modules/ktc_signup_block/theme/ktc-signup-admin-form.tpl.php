<?php
/**
 * @file
 * Template for ktc signup admin form page.
 */
?>

<div class="row">

  <div class="col-sm-8">
    <?php if (isset($variables)): ?>
      <?php $form = $variables['form'];
      print drupal_render_children($form);?>
    <?php endif; ?>
  </div>

</div>
