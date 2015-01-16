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
    <script type="text/php">
    // This is php code, eval'd by dompdf. Generating a footer on each page,
    // with specific text and a pager.
    if ( isset($pdf) ) {
      // Open the object: all drawing commands will
      // go to the object instead of the current page
      $footer = $pdf->open_object();

      $w = $pdf->get_width();
      $h = $pdf->get_height();
      $size = 8;
      $margin = 38;
      $y = $h - $margin;

      $font = Font_Metrics::get_font("helvetica", "bold");
      $text = "Side {PAGE_NUM} / {PAGE_COUNT}";

      // Font_metricts are probarbly calculated with strlen of text
      // and {PAGE_NUM} is translated to a single digit:
      $width = Font_Metrics::get_text_width('Side x/x', $font, $size);

      $pdf->page_text($w - $width - $margin, $y, $text, $font, $size, $color);

      $text = "KTC - Kommunalteknisk Chefforening | Sekretariatet | Papirfabrikken 24 | 8600 Silkeborg";

      $pdf->page_text($margin, $y, $text, $font, $size, array(0, 0, 0));

      // Close the object (stop capture) and add to all pages.
      $pdf->close_object();
      $pdf->add_object($footer, "all");
    }

    </script>
    <img src="<?php print $logo_path; ?>">
    <h1><?php print $hearing_node->title; ?></h1>

    <table>
      <tbody>
        <tr>
          <td class="left">Myndighed</td>
          <td class="right"><?php print render(field_view_field('node', $hearing_node, 'field_hearing_authority', array('label' => 'hidden'))); ?></td>
        </tr>
        <tr>
          <td class="left">Officiel/Uofficiel</td>
          <td class="right"><?php print render(field_view_field('node', $hearing_node, 'field_hearing_official', array('label' => 'hidden'))); ?></td>
        </tr>
        <tr>
          <td class="left">Resumé</td>
          <td class="right"><?php print render(field_view_field('node', $hearing_node, 'field_abstract', array('label' => 'hidden'))); ?></td>
        </tr>
        <tr>
          <td class="left">Høringsbrev/beskrivelse</td>
          <td class="right"><?php print render(field_view_field('node', $hearing_node, 'body', array('label' => 'hidden'))); ?></td>
        </tr>
        <tr>
          <td class="left">Evt. besked til deltagere</td>
          <td class="right"><?php print render(field_view_field('node', $hearing_node, 'field_message', array('label' => 'hidden'))); ?></td>
        </tr>
        <tr>
          <td class="left">Vedhæftede fil(er)</td>
          <td class="right"><?php
            global $base_url;
            print str_replace('src="', 'src="' . $base_url, render(field_view_field('node', $hearing_node, 'field_hearing_materials', array('label' => 'hidden'))));
          ?>
          </td>
        </tr>
      </tbody>
    </table>

    <h1><?php print $summary_node->title; ?></h1>
    <b>Detaljerede bemærkninger</b><br />
    <?php print render(field_view_field('node', $summary_node, 'body', array('label' => 'hidden'))); ?><br />
    <b>Helhedsindtryk</b><br />
    <?php print render(field_view_field('node', $summary_node, 'field_impression', array('label' => 'hidden'))); ?><br />
    <b>Generelle bemærkninger</b><br />
    <?php print render(field_view_field('node', $summary_node, 'field_general_comments', array('label' => 'hidden'))); ?><br />
    <b>Videre handlinger</b><br />
    <?php print render(field_view_field('node', $summary_node, 'field_further_action', array('label' => 'hidden'))); ?><br />
    <b>Vedhæftede fil(er)</b><br />
    <?php
      global $base_url;
      print str_replace('src="', 'src="' . $base_url, render(field_view_field('node', $summary_node, 'field_hearing_materials', array('label' => 'hidden'))));
    ?>
    <br/>
  </body>
</html>
