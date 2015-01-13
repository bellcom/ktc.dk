<?php
/**
 * @file
 * Template for final answer page.
 */
?>
<div class="row final-answer">
  <div class="col-md-4 col-sm-4 col-xs-12">
    <div class="hearing-preface">
      <?php if (isset($preface)): ?>
        <?php print $preface; ?>
      <?php endif; ?>
    </div>
    <div class="responses-container">
      <?php if (isset($responses)): ?>
        <?php foreach ($responses as $response): ?>
          <?php print render($response); ?>
        <?php endforeach; ?>
      <?php endif; ?>
    </div>
  </div>
  <div class="col-md-5 col-sm-5 col-xs-12">
    <?php if (isset($answer_form)): ?>
      <?php print $answer_form ?>
    <?php endif; ?>
  </div>
  <div class="col-md-3 col-sm-3 col-xs-12">
    <div class="row">
      <?php $menu = menu_local_tabs(); print render($menu); ?>
    </div>

<?php
    $block = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_set_status_form');
    print render($block['content']);
?>
  </div>
</div>
