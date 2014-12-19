<?php
/**
 * @file
 * Template for arrangement invite page.
 */
?>
<div class="row arrangement-invite">
  <div class="col-md-9 col-sm-9 col-xs-12">
    <div>
      <h2>Send arrangement tilmeldnings invitation</h2>
      <?php if (isset($preface)): ?>
        <?php print $preface; ?>
      <?php endif; ?>
    </div>
  </div>
  <div class="col-md-3 col-sm-3 col-xs-12">
    <?php $menu = menu_local_tabs(); print render($menu); ?>
  </div>
</div>