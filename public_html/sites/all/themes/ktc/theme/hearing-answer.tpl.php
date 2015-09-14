<?php
/**
 * @file
 * Template for final answer page.
 */
$block_info = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_info_block');
$block_status_form = module_invoke('ktc_hearing', 'block_view', 'ktc_hearing_set_status_form');

$response_no_responses = array();
$response_responses = array();
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

    <?php if($block_status_form['content']): ?>
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
    <?php endif ?>
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
            <?php
            // Has responded
            if ($response['field_is_no_answer']['#items'][0]['value'] == 1) {
              $response_no_responses[] = $response;
            }
            else {
              $response_responses[] = $response;
            }
            ?>
          <?php endforeach; ?>
        <?php endif ?>

        <?php if (count($response_responses)): ?>
          <div class="ktc-aside ktc-aside-green">
            <div class="ktc-aside-heading">
              <h3 class="ktc-aside-title"><?php print t('Har afgivet svar'); ?></h3>
            </div>
            <div class="ktc-aside-body">
              <?php foreach ($response_responses as $response_response): ?>
                <?php print render($response_response); ?>
              <?php endforeach ?>
            </div>
          </div>
        <?php endif ?>

        <?php if (count($response_no_responses)): ?>
          <div class="ktc-aside ktc-aside-green">
            <div class="ktc-aside-heading">
              <h3 class="ktc-aside-title"><?php print t('Svarer ikke'); ?></h3>
            </div>
            <div class="ktc-aside-body">
              <?php foreach ($response_no_responses as $response_no_response): ?>
                <?php print render($response_no_response); ?>
              <?php endforeach ?>
            </div>
          </div>
        <?php endif ?>

        <?php if (isset($no_response)): ?>
          <div class="ktc-aside">
            <div class="ktc-aside-heading">
              <h3 class="ktc-aside-title"><?php print t('Mangler at afgive svar'); ?></h3>
            </div>
            <div class="ktc-aside-body">
              <?php foreach ($no_response as $key => $value): ?>
                <?php if ($key && $user_object = user_load($key)): ?>
                  <div class="ktc-aside ktc-aside-faceless">
                    <div class="ktc-aside-user-wrapper">
                      <?php if ($user_object): ?>
                        <?php print $profile = theme('user_profile', array('account' => $user_object, 'theme_suggestion' => 'list3')); ?>
                      <?php endif; ?>
                    </div>
                  </div>
                <?php endif ?>
              <?php endforeach; ?>
            </div>
          </div>
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
