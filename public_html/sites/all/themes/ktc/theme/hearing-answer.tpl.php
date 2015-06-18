<?php
/**
 * @file
 * Template for final answer page.
 */
$block_info = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_info_block');
$block_status_form = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_set_status_form');
?>

<div class="row">

  <div class="col-md-8">
    <?php print render($block_info['content']); ?>
  </div>

  <div class="col-md-4">

    <div class="ktc-aside ktc-aside-tabs ktc-aside-tabs-2-col ktc-aside-action">
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title">
          Høring
        </h3>
      </div>
      <div class="ktc-aside-body">
        <?php $menu = menu_local_tabs(); print render($menu); ?>
        <?php print render($block_status_form['content']); ?>
      </div>
    </div>


  </div>

</div>

<div class="row">
  <div class="col-md-6">
    <div class="ktc-content">

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
  </div>
  <div class="col-md-6">
    <?php if (isset($answer_form)): ?>
      <?php print $answer_form ?>
    <?php endif; ?>
  </div>
</div>