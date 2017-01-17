<?php

/* 
 * Script search users with empty crm_uuid and update crm_uuid field from CRM
 */

$result = db_query('select uid from {users} left outer join field_data_field_crm_uuid  '
  . 'on entity_id = uid and bundle= :bundle where field_crm_uuid_value is null', array(':bundle' => 'user'));
//var_dump(count($result));
$count = 0;
foreach ($result as $record) {
  if($account = user_load($record->uid)) {
    if (!empty($account->mail)) {  
    if($webuserdto =  ktc_crm_lookup_webuser_by_mail($account->mail)) {
      //update crm_uuid
      $account->field_crm_uuid[LANGUAGE_NONE][0]['value'] = $webuserdto->CrmId;  
      user_save($account);
      print 'user ' . $account->mail . ' is updated' . PHP_EOL;      
    }
    else 
      print 'user ' . $account->mail . ' is not found in CRM' . PHP_EOL;
    
    }
  }
}
