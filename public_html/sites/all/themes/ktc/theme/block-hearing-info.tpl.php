<?php
/**
 * @file
 * block-hearing-info.tpl.php
 *
 * Following variables are available.
 * Titel                      => $title
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
?>
<?php print $title; ?><br />
<?php print $type; ?><br />
<?php print $nid; ?><br />
<?php print $created; ?><br />
<?php print $author; ?><br />
<?php print $status; ?><br />
<?php print $attendee_count; ?><br />
<?php print $authority; ?><br />
<?php print $role; ?><br />
<?php print $group; ?><br />
<?php print $answer_count; ?><br />
<?php print $answer_by; ?><br />
<?php print $responsible_foreman; ?><br />
<?php print $responsible_chairman; ?><br />
