<?php
/**
 * @file
 * Template for arrangement invite page.
 */
?>
<div class="row arrangement-invite">
  <div class="col-md-8 col-sm-8 col-xs-12">
    <div>
      <h2>Send arrangement tilmeldnings invitation</h2>
      <?php if (isset($preface)): ?>
        <?php print $preface; ?>
      <?php endif; ?>
    </div>
  </div>
  <div class="col-md-4 col-sm-4 col-xs-12">
    <?php $menu = menu_local_tabs(); print render($menu); ?>
  </div>
</div>