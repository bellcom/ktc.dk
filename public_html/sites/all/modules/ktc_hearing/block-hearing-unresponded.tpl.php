<?php
/**
 * @file
 * Template for unresponded hearings block.
 *
 * Basic views markup is used, for theming reasons.
 */
?>
<!-- block-hearing-unresponded.tpl.php -->
<div class="view-content">
  <? if (!empty($unresponded_hearings)): ?>
    <? foreach($unresponded_hearings as $hearing): ?>

    <div class="views-row">
      <div class="created"><?php print date('d. F Y', $hearing->created); ?></div>
      <h5 class="field-content"><? print l($hearing->title, 'node/' . $hearing->nid); ?></h5>

      <span class="field-content">Af <? print l($hearing->user_mail, 'user/' . $hearing->uid, array('attributes' => array('class' => array('username'), 'title' => 'Vis brugerprofil'))); ?></span> 
    </div>
    <? endforeach; ?>
  <? else: ?>
  Du har ingen ubesvarede høringer.
  <? endif; ?>
</div>
<!-- /block-hearing-unresponded.tpl.php -->
