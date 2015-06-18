<?php
/**
 * @file
 * block-hearing-info.tpl.php
 *
 * Following variables are available.
 * Titel                      => $title
 * Kort titel                 => $short_title
 * Myndighed                  => $authority
 * Høringstype                => $type
 * Status                     => $status
 * Gruppe/Netværk             => $group
 * Ansvarlig formand          => $responsible_foreman
 * Ansvarlig tovholder        => $responsible_chairman
 * Din svarfrist              => $answer_by (datetime)
 * Løbenummer / id            => $nid
 * Oprettet af                => $author
 * Oprettet dato              => $created (unix timestamp)
 * Antal deltagere            => $attendee_count
 * Antal deltagere har svaret => $answer_count
 * Din status i høringen      => $role
 */
// Green = open
if ($status == 'Åben') {
  $head_class = 'ktc-aside-green';
}
if ($status == 'Under sammenskrivning' || $status == 'Under godkendelse') {
  $head_class = 'ktc-aside-gold';
}

// Test which title to usevar_dump($short_title);
if ($short_title != '') {
  // Short title exists. Use that as header title
  $header_title = $short_title;
}
else {
  // Short title does not exist. Truncate node title if necessary
  if (strlen($title) > 70) {
    $str = explode("\n", wordwrap($title, 70));
    $header_title = $str[0] . '...';
  }
}

?>
<div class="ktc-aside ktc-section-full-width <?php print $head_class; ?>">
  <div class="ktc-aside-body pane-content">
    <div class="row">
      <div class="col-lg-12">
        <?php?>

        <h4><?php print $header_title; ?> (<?php print $nid; ?>) - <?php print $type; ?></h4>
        <p class="ktc-date">
          <?php print ($answer_by == '' ? '' : 'Svarfrist: ' .  $answer_by); ?>
        </p>
        <strong><?php print $authority; ?></strong>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-4">
        Indmelder:
      </div>
      <div class="col-sm-8">
        <?php print $author; ?>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-4">
        Ansvarlig tovholder:
      </div>
      <div class="col-sm-8">
        <?php print $responsible_chairman; ?>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-4">
        Ansvarlig formand:
      </div>
      <div class="col-sm-8">
        <?php print $responsible_foreman; ?>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-4">
        Status:
      </div>
      <div class="col-sm-8">
        <?php print $status; ?>
      </div>
    </div>
  </div>

  <div class="ktc-footer">
    <div class="row">
      <div class="col-md-12">
        <span class="ktc-footer-button">
          Deltagere: <?php print (!isset($attendee_count) ? '0' : $attendee_count); ?>
        </span>
        <span class="ktc-footer-button">
          Svar: <?php print (!isset($answer_count) ? '0' : $answer_count); ?>
        </span>
        <span class="ktc-footer-button">Type: <?php print $type; ?></span>
        <span class="ktc-footer-button pull-right">ID: <?php print $nid; ?></span>
        <span class="ktc-footer-button ktc-footer-button-hearing pull-right">Høring</span>

      <!--    <tr>
            <td>
              Autoritet:
            </td>
            <td>
              <?php print $authority; ?>
            </td>
          </tr>
          <tr>
            <td>
              Din rolle:
            </td>
            <td>
              <?php print $role; ?>
            </td>
          </tr>
          <tr>
            <td>
              Faggruppe(r):
            </td>
            <td>
              <?php print $group; ?>
            </td>
          </tr>
          <tr>
            <td>
              Svarfrist:
            </td>
            <td>
              <?php print $answer_by; ?>
            </td>
          </tr> -->
          </tbody>
        </table>
      </div>
    </div>

  </div>

</div>
