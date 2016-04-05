<?php

/* 
 * 
 * Script for deleting extra spaces from usernmae
 * 
 */

$query = db_select('users', 'u');
$query->fields('u', array('uid'));
$result = $query->execute();
while ($record = $result->fetchAssoc()) {
  if ($record['uid'] == 0)
    continue;
 $account = user_load($record['uid']);
  if (strpos($account->name, '  ') !== FALSE){  
  $account->field_navn['und'][0]['value'] = ucwords(trim(preg_replace('/\s+/',' ', $account->field_navn['und'][0]['value'])));
  $account->field_efternavn['und'][0]['value'] = ucwords(trim(preg_replace('/\s+/',' ', $account->field_efternavn['und'][0]['value'])));
 
 $account->name = ucwords(trim(preg_replace('/\s+/',' ', $account->name)));
 user_save($account);
 print 'User ' . $account->name . ' updated' . PHP_EOL;
}
}