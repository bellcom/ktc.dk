<?php if ($teaser): ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes . " all"; ?> clearfix bg-white node-teaser"<?php print $attributes; ?>>
  <?php if (!$page) : ?>
  <div class="margin-bottom-20 col-md-12 col-sm-12 col-xs-12">
    <div class="">
      <?php if (isset($group_info)) : ?>
        <h6 class="<?php print $group_info['class']; ?>"><i class="icon-group-<?php print $group_info['class']; ?>"></i><?php print l($group_info['name'], 'node/' . $group_info['gid']); ?></h6>
        <i class="icon-locker"></i>
      <?php endif;?>
      <?php if (isset($content['field_image'])) : ?>
        <div class="node-teaser-item-img">
          <?php print render($content['field_image']); ?>
        </div>
      <?php endif; ?>
      <div class="row">
        <div class="node-teaser-text clearfix col-md-12 col-sm-12 col-xs-12">
          <h2>
            <a class="news-title" href="<?php global $base_url; print $base_url . $node_url; ?>"><?php print $node->title; ?></a>
          </h2>
          <div>
              <p>
              <?php if (isset($content['field_short'])): ?>
                <?php print render($content['field_short']); ?>
              <?php else: ?>
                <?php print render($content['body']); ?>
              <?php endif; ?>
              </p>
          </div>
        </div>
      </div>
      <div class="row">
        <div class="node-teaser-user-profile clearfix col-md-12 col-sm-12 col-xs-12">

          <div class="col-md-3 col-sm-4 col-xs-4 left">
            <?php if (isset($user_object)): ?>
              <?php print $image = theme('user_picture', array('account' => $user_object));?>
            <?php endif; ?>
          </div>
          <div class="col-md-9 col-sm-8 col-xs-8">
            <?php if (isset($user_name)): ?>
              <span class="user_link"><?php print $user_name; ?></span><br />
            <?php endif; ?>
            <div>
              <?php print $created_ago . ' ' . t('ago'); ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="node-teaser-bottom clearfix col-md-12 col-sm-12 col-xs-12">
    <div class="col-md-6 col-sm-6 col-xs-6 left">
      <span><a href="<?php global $base_url; print $base_url . $node_url; ?>#comments"><i class="icon-comment"></i>  <?php print $num_comments; ?></a></span>
      <span class="span-right"><i class="icon-statistics"></i>  <?php print $statistics_count; ?></span>
    </div>
    <div class="col-md-6 col-sm-6 col-xs-6 right"><i class="node-type-<?php print $type; ?>"></i><?php print node_type_get_name($type); ?></div>
  </div>
  <?php endif; ?>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_os2web_base_field_image']);
    hide($content['field_os2web_base_field_lead_img']);
  ?>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <?php hide($content['field_tags']); ?>
    <?php hide($content['links']); ?>
  <?php endif; ?>
</article>

<?php endif; ?>