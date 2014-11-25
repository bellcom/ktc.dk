
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes . " all"; ?> clearfix"<?php print $attributes; ?> date-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">

    <div class="margin-bottom-20">
    <div class="magazine row">
	    <div class="col-md-3 col-sm-3 col-xs-2">
		    <h2><?php print $node->title; ?></h2>
		    <h3><?php print render($content['field_udgave']); ?></h3>
		    
		    <p class="margin-bottom-20">
		          <?php echo views_embed_view('bladintro_node', $display_id = 'block', $nid) ?>
              </p>
			<a href="#" class="btn btn-info btn-std">Tegn online abonnement</a>
		</div>
	    <div class="col-md-9 col-sm-9 col-xs-10 margin-bottom-20">
		          <?php echo views_embed_view('bladintro_nyheder', $display_id = 'block_1', $nid) ?>
		          <?php echo views_embed_view('bladintro_nyheder', $display_id = 'block_2', $nid) ?>
		    <div class="leder well well-sm"><?php print render($content['body']); ?></div>
		    </div>



            </div>
    </div>


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
  <?php hide($content['comments']); ?>
</article>
<hr />