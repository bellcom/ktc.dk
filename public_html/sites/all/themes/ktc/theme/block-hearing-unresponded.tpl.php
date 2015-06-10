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
  <?php if (!empty($unresponded_hearings)): ?>
    <?php foreach($unresponded_hearings as $hearing): ?>
      <?php if($i < 4): ?>

        <div class="views-row">
          <div class="ktc-date"><?php print date('d. F Y', $hearing->created); ?></div>
          <h5 class="field-content"><?php print l($hearing->title, 'node/' . $hearing->nid); ?></h5>

          <span class="field-content">Af <?php print l($hearing->user_mail, 'user/' . $hearing->uid, array('attributes' => array('class' => array('username'), 'title' => 'Vis brugerprofil'))); ?></span>
        </div>

      <?php endif; ?>
    <?php $i++; endforeach; ?>
  <?php else: ?>
  Du har ingen ubesvarede høringer.
  <?php endif; ?>
</div>
<div class="ktc-call-to-action-button">
  <a href="/hoeringer" class="btn btn-default">Se flere</a>
</div>
<!-- /block-hearing-unresponded.tpl.php -->
