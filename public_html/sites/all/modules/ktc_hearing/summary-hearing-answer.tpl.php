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
    <?php print render(field_view_field('node', $hearing_node, 'field_hearing_authority', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $hearing_node, 'field_hearing_official', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $hearing_node, 'field_abstract', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $hearing_node, 'body', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $hearing_node, 'field_message', array('label' => 'hidden'))); ?>
    <?php
      global $base_url;
      print str_replace('src="', 'src="' . $base_url, render(field_view_field('node', $hearing_node, 'field_hearing_materials', array('label' => 'hidden'))));
    ?>
    <br/>

    <h1><?php print $summary_node->title; ?></h1>
    <?php print render(field_view_field('node', $summary_node, 'body', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $summary_node, 'field_impression', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $summary_node, 'field_general_comments', array('label' => 'hidden'))); ?>
    <?php print render(field_view_field('node', $summary_node, 'field_further_action', array('label' => 'hidden'))); ?>
    <?php
      global $base_url;
      print str_replace('src="', 'src="' . $base_url, render(field_view_field('node', $summary_node, 'field_hearing_materials', array('label' => 'hidden'))));
    ?>
    <br/>
  </body>
</html>
