<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix bg-white"<?php print $attributes; ?>>

  <div class="wrap">
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
    ?>
    <div class="col-md-5 col-sm-5 col-xs-12">
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <div class="contact-info">
        <div class="contact-info-content">
          <div>
            <?php print render($content['field_adresse']); ?>
          </div>
          <div>
            <?php print render($content['field_city']); ?>
          </div>
        </div>
      </div>
    </div>
    <div class="col-md-5 col-sm-5 col-xs-12">
      <div>
        <?php print render($content['field_directe_telefon']); ?>
      </div>
      <div>
        <?php print render($content['field_fax_no']); ?>
      </div>
      <div class="field field-e-mail field-label-inline">
        <?php if ($mail = field_get_items('node', $node, 'field_e_mail')): ?>
          <div class="field-label">Email:&nbsp;</div>
          <?php print l($mail[0]['value'], 'mailto:' . $mail[0]['value']); ?>
        <?php endif; ?>
      </div>
      <div class="field field-link field-label-inline">
        <?php if ($link = field_get_items('node', $node, 'field_link')): ?>
          <div class="field-label">Hjemmeside:&nbsp;</div>
          <?php print l($link[0]['value'], $link[0]['value']); ?>
        <?php endif; ?>
      </div>
    </div>
    <div class="col-md-2 col-sm-2 col-xs-12">
      <div class="supplier-logo">
        <?php if (field_get_items('node', $node, 'field_image')): ?>
          <?php print render($content['field_image']); ?>
        <?php endif; ?>
      </div>
    </div>
    </div>
  </div>
</article>
