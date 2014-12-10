<?php
/**
 * @file
 * Template for final answer page.
 */
?>
<div class="row final-answer">
  <div class="col-md-6">
    <div class="responses-container">
      <?php foreach ($responses as $response): ?>
        <?php print render($response); ?>
      <?php endforeach; ?>
    </div>
  </div>
  <div class="col-md-6">
    <?php print $answer_form ?>
  </div>
</div>
