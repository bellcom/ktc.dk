<?php

/*
 * Script delete duplicates memberships from CRM
 */
$query = db_select('users', 'u');
$query->fields('u', array('mail'));
$result = $query->execute();

while ($record = $result->fetchAssoc()) {
  if ($record['mail'] == "")    continue;
  $webuserdto = ktc_crm_lookup_webuser_by_mail($record['mail']);
  if ($webuserdto) {
    $memberships = array();
    $duplicates = array();
    if (is_array($webuserdto->UdvalgsMedlemskaber->GroupMemberDto)) {
      foreach ($webuserdto->UdvalgsMedlemskaber->GroupMemberDto as $groupmember) {
        if ($groupmember->IsActiveMember) {
          if ($membership_exists = array_search($groupmember->Group->CrmId, $memberships)) {
            if (!in_array(($membership_exists), $duplicates))
              $duplicates[] = $membership_exists;
            $duplicates[] = $groupmember->CrmId;
          } else
            $memberships[$groupmember->CrmId] = $groupmember->Group->CrmId;
        }
      }
    }

    foreach ($duplicates as $crmuid) {
      if (!db_query('SELECT field_crm_uuid_value  FROM {field_data_field_crm_uuid} INNER JOIN og_membership ON entity_id=id WHERE field_crm_uuid_value = :id', array(':id' => $crmuid))->fetchField()) {
        ktc_crm_group_membership_delete($crmuid);
        print $record['mail'] . ' Deleted membership: ' . $crmuid . PHP_EOL;
      }
    }
  }
}