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
<div class="ktc-aside ktc-aside-dark">
	<div class="ktc-aside-heading"><h1 class="ktc-aside-title"><?php print $title; ?> (<?php print $nid; ?>)</h1></div>
	<div class="ktc-aside-body">
	<table class="" border="0">
		<tr>
			<td>
				Type:
			</td>
			<td>
				<?php print $type; ?>
			</td>
		</tr>
		<tr>
			<td>
				Type:
			</td>
			<td>
				<?php print $created; ?>
			</td>
		</tr>
		<tr>
			<td>
				Indmelder:
			</td>
			<td>
				<?php print $author; ?>
			</td>
		</tr>
		<tr>
			<td>
				Status:
			</td>
			<td>
				<?php print $status; ?>
			</td>
		</tr>
		<tr>
			<td>
				Antal deltagere / Svar:
			</td>
			<td>
				<?php print $attendee_count; ?> / <?php print $answer_count; ?>
			</td>
		</tr>
		<tr>
			<td>
				Autoritet:
			</td>
			<td>
				<?php print $authority; ?>
			</td>
		</tr>
		<tr>
			<td>
				Din role:
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
		</tr>
		<tr>
			<td>
				Ansvarlig tovholder:
			</td>
			<td>
				<?php print $responsible_foreman; ?>
			</td>
		</tr>
		<tr>
			<td>
				Ansvarlig formand:
			</td>
			<td>
				<?php print $responsible_chairman; ?>
			</td>
		</tr>
	</table>
	</div>
</div>