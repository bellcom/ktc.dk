<?php if (!$page): ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes . " all"; ?> clearfix bg-white node-teaser node-teaser_comments"<?php print $attributes; ?>>
  <?php if (!$page) : ?>
  <div class="margin-bottom-20 col-md-12 col-sm-12 col-xs-12">
    <div class="">
      <?php if (isset($content['field_image'])) : ?>
        <div class="node-teaser-item-img">
          <?php print render($content['field_image']); ?>
        </div>
      <?php endif; ?>
      <div class="row">
        <div class="node-teaser-user clearfix col-md-12 col-sm-12 col-xs-12">
          <?php if (isset($user_name)): ?>
            <div class="user_link col-md-6 left"><?php print $user_name; ?></div>
          <?php endif; ?>
          <div class="col-md-6 right">
            <?php print $created_ago . ' ' . t('ago'); ?>
          </div>
        </div>
        <div class="node-teaser-hr clearfix col-md-12 col-sm-12 col-xs-12">
          <div class="node-teaser-hr-inner clearfix col-md-12 col-sm-12 col-xs-12"></div>
        </div>
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
      <div class="row node-comments clearfix">
        <?php if (isset($comments_view)): ?>
          <?php print $comments_view; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <div class="node-teaser-bottom clearfix col-md-12 col-sm-12 col-xs-12">
    <div class="col-md-6 col-sm-6 col-xs-6 left">
      <span><a href="<?php global $base_url; print $base_url . $node_url; ?>#comments"><i class="icon-comment"></i>  <?php print $num_comments; ?></a></span>
      <span class="span-right"><i class="icon-statistics"></i>  <?php print $statistics_count; ?></span>
    </div>
    <div class="col-md-6 col-sm-6 col-xs-6 right"><i class="node-type"></i><?php print node_type_get_name($type); ?></div>
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