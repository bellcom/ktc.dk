<?php
/**
 * @file
 * Template for final answer page.
 */
?>
<div class="row final-answer">
  <div class="col-md-6">
    <div class="responses-container">
      <?php if (isset($responses)): ?>
        <?php foreach ($responses as $response): ?>
          <?php print render($response); ?>
        <?php endforeach; ?>
      <?php endif; ?>
    </div>
  </div>
  <div class="col-md-6">
    <?php if (isset($answer_form)): ?>
      <?php print $answer_form ?>
    <?php endif; ?>
  </div>
</div>
