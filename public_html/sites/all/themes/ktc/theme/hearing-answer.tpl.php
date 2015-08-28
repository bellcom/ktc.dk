<?php
/**
 * @file
 * Template for final answer page.
 */
$block_info = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_info_block');
$block_status_form = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_set_status_form');
?>

<div class="row">

  <div class="col-md-7">
    <?php print render($block_info['content']); ?>
  </div>

  <div class="col-md-5">

    <div class="ktc-aside ktc-aside-tabs ktc-aside-tabs-1-col ktc-aside-action">
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title">
          Høring
        </h3>
      </div>
      <div class="ktc-aside-body">
        <?php $menu = menu_local_tabs(); print render($menu); ?>
      </div>
    </div>

    <div class="ktc-aside ktc-aside-action">
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title">
          Status på høring
        </h3>
      </div>
      <div class="ktc-aside-body">
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
          <div class="pull-right"><a href="#" class="btn btn-default btn-sm toggle-all">Alle <span class="glyphicon glyphicon-chevron-right"></span></a></div><br /><br />
          <?php foreach ($responses as $response): ?>
            <?php print render($response); ?>
          <?php endforeach; ?>
        <?php endif; ?>

        <?php if (isset($no_response)): ?>
          <hr>
          <?php foreach ($no_response as $name): ?>

            <div class="ktc-aside">
              <div class="ktc-aside-heading">
                <h3 class="ktc-aside-title"><?php print $name; ?> - Mangler svar</h3>
              </div>
            </div>
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
