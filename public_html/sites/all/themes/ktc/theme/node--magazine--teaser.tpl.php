
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes . " all"; ?> clearfix"<?php print $attributes; ?> date-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">

    <div class="margin-bottom-20">
    <div class="magazine row">
	    <div class="col-md-3 col-sm-3 col-xs-2">1. kolonne
		    <br>
		    
		    <?php print $node->title; ?><br><?php print render($content['field_udgave']); ?>
		    
		    <br>              
		      <a href="<?php  print render($content['field_linkbladreversion']); ?>">
			      <?php
                $img = field_get_items('node', $node, 'field_forside_billede_');
                $image = $img[0];
                $style = 'magazinethumb';
                $public_filename = image_style_url($style, $image["uri"]);
                print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
              ?>
		      </a>
			<br>
		      <?php
                $img = field_get_items('node', $node, 'field_bannere');
                $image = $img[0];
                $style = 'magazinethumb';
                $public_filename = image_style_url($style, $image["uri"]);
                print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
              ?>			<br>
              		      <?php
                $img = field_get_items('node', $node, 'field_banner_2');
                $image = $img[0];
                $style = 'magazinethumb';
                $public_filename = image_style_url($style, $image["uri"]);
                print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';?>

			<br>
			tegn abb
		</div>
	    <div class="col-md-9 col-sm-9 col-xs-10">2. kolonne<br>top<br>1<br>2<br>3<br><?php print render($content['field_os2web_base_field_summary']); ?></div>



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
