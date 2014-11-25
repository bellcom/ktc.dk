
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes . " all"; ?> clearfix"<?php print $attributes; ?> date-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">

    <div class="margin-bottom-20">
    <div class="magazine row">
	    <div class="col-md-3 col-sm-3 col-xs-2">
		    <h2><?php print $node->title; ?></h2>
		    <h3><?php print render($content['field_udgave']); ?></h3>
		    
		    <p class="margin-bottom-20">
		      <a class="margin-bottom-20" href="<?php  print render($content['field_linkbladreversion']); ?>">
			      <?php
                $img = field_get_items('node', $node, 'field_forside_billede_');
                $image = $img[0];
                $style = 'magazinethumb';
                $public_filename = image_style_url($style, $image["uri"]);
                print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
              ?>
		      </a>
			</p>
		    <p>
		      <?php
                $img = field_get_items('node', $node, 'field_bannere');
                $image = $img[0];
                $style = 'magazinethumb';
                $public_filename = image_style_url($style, $image["uri"]);
                print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
              ?>
              </p>
              <p class="margin-bottom-20">
              		      <?php
                $img = field_get_items('node', $node, 'field_banner_2');
                $image = $img[0];
                $style = 'magazinethumb';
                $public_filename = image_style_url($style, $image["uri"]);
                print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';?>
              </p>
			<a href="#" class="btn btn-info btn-std">Tegn online abonnement</a>
		</div>
	    <div class="col-md-9 col-sm-9 col-xs-10 margin-bottom-20">
		    <div class="thumbnail">
			    <h3><a href="#">Top artikel</a></h3>
			    <img height="120px" width="120px" align="right">
			    <p>Artikel tekst</p>		    
			</div>
		    <div class="thumbnail">
				    <h4><a href="#">Ekstraartikel 2</a></h4>
				    <img height="80px" width="80px" align="right">
				    <p>Artikel tekst</p>
			</div>
				<div class="thumbnail">
				    <h4><a href="#">Ekstraartikel 2</a></h4>
				    <img height="80px" width="80px" align="right">
				    <p>Artikel tekst</p>		    
			</div>
				<div class="thumbnail">
				    <h4><a href="#">Ekstraartikel 2</a></h4>
				    <img height="80px" width="80px" align="right">
				    <p>Artikel tekst</p>		    
			</div>
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