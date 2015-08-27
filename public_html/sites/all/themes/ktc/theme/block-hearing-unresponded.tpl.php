<?php
/**
 * @file
 * Template for unresponded hearings block.
 *
 * Basic views markup is used, for theming reasons.
 */
$i=0;
?>
<!-- block-hearing-unresponded.tpl.php -->
<div class="view-content">
  <?php if ( ! empty($unresponded_hearings)): ?>
    <?php foreach($unresponded_hearings as $hearing): ?>
      <?php if($i < 4): ?>
        <?php

        $node = node_view($hearing, 'listevisningstor');
        print render($node);
        ?>
      <?php endif; ?>
    <?php $i++; endforeach; ?>
  <?php else: ?>
    <?php print t('Du har ingen ubesvarede høringer.'); ?>
  <?php endif; ?>
</div>
<div class="ktc-call-to-action-button">
  <a href="/hoeringer" class="btn btn-default"><?php print t('Se flere'); ?></a>
</div>
<!-- /block-hearing-unresponded.tpl.php -->
