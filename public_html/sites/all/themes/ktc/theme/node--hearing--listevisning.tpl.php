<?php
/**
 * @file
 * Teaser view for a hearing.
 */
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix node-group node-teaser"<?php print $attributes; ?>>
  <h5>
    <a href="<?php print $node_url; ?>"><i class="icon-hearing-sm"></i><span><?php print views_trim_text(array('max_length' => 50, 'ellipsis' => TRUE, 'word_boundary' => TRUE), $title); ?></span></a></h5>
</article>
