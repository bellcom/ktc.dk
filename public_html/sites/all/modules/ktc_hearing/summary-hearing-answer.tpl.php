<?php
/**
 * @file
 * Page template for hearing summary answer.
 *
 * This is used when generating notifications to the hearing creator after
 * the hearing summary answer has been approved.
 */
?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <link href="<?php print $style_sheet_url; ?>" rel="stylesheet" type="text/css">
  </head>
  <body>
    <h1><?php print $hearing_node->title; ?></h1>
    <?php print render(field_view_field('node', $hearing_node, 'field_hearing_authority')); ?>
    <?php print render(field_view_field('node', $hearing_node, 'field_hearing_official')); ?>
    <?php print render(field_view_field('node', $hearing_node, 'field_abstract')); ?>
    <?php print render(field_view_field('node', $hearing_node, 'body')); ?>
    <?php print render(field_view_field('node', $hearing_node, 'field_message')); ?>
    <?php
      global $base_url;
      print str_replace('src="', 'src="' . $base_url, render(field_view_field('node', $hearing_node, 'field_hearing_materials')));
    ?>
    <br/>

    <h1><?php print $summary_node->title; ?></h1>
    <?php print render(field_view_field('node', $summary_node, 'body')); ?>
    <?php print render(field_view_field('node', $summary_node, 'field_impression')); ?>
    <?php print render(field_view_field('node', $summary_node, 'field_general_comments')); ?>
    <?php print render(field_view_field('node', $summary_node, 'field_further_action')); ?>
    <?php
      global $base_url;
      print str_replace('src="', 'src="' . $base_url, render(field_view_field('node', $summary_node, 'field_hearing_materials')));
    ?>
    <br/>
  </body>
</html>
