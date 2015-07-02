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
  <?php if ($content['field_is_no_answer']['#items'][0]['value']) : ?>
    <div class="ktc-aside ktc-aside-color">
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title"><?php print $node->name; ?> - Svarer ikke</h3>
      </div>
    </div>

  <?php else: ?>
    <div class="ktc-aside ktc-aside-toggle ktc-aside-green closed">
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title"><?php print $node->name; ?></h3>
      </div>
      <div class="ktc-aside-body pane-content">
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
      </div>
    </div>
  <?php endif; ?>
<?php endif; ?>
