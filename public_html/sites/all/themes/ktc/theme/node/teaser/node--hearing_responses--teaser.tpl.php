<?php if ($content['field_is_summary']['#items'][0]['value']) : ?>
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="wrap">
      <?php
        // Hide comments, tags, and links now so that we can render them
        // later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_tags']);
        hide($content['field_gammel_gid']);
        hide($content['field_gammel_nid']);
        hide($content['field_gammel_typo3_id']);
        hide($content['field_news_author']);
        print render($content);
      ?>

    </div>
  </article>
<?php else: ?>
  <div class="ktc-aside ktc-aside-faceless ktc-aside-toggle closed">

    <div class="ktc-aside-user-wrapper">
      <?php if ($user_object): ?>
        <?php print $profile = theme('user_profile', array('account' => $user_object, 'theme_suggestion' => 'list3')); ?>
      <?php endif; ?>
    </div>

    <div class="ktc-aside-body pane-content">
      <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
        <?php
          // Hide comments, tags, and links now so that we can render them
          // later.
          hide($content['comments']);
          hide($content['links']);
          hide($content['field_tags']);
          hide($content['field_gammel_gid']);
          hide($content['field_gammel_nid']);
          hide($content['field_gammel_typo3_id']);
          hide($content['field_news_author']);
          hide($content['field_is_no_answer']);
          print render($content);
        ?>

      </article>
    </div>
  </div>
<?php endif; ?>
