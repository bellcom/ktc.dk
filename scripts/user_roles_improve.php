<?php
/*
 * Script for changing user role depending usertype field value
*/
   
$query = db_select('users', 'u');
    $query->fields('u', array('uid'));
    $result = $query->execute();  
 while($record = $result->fetchAssoc()) {
   if ($record['uid']==0)     continue;
   $account=user_load($record['uid']);
   $user_type = FALSE;
   $user_type = $account->field_usertype[LANGUAGE_NONE][0]['tid'];
   $usertype_map = variable_get('ktc_users_roles_usertype_map', array());
 
//var_dump($account);
$role_id = $usertype_map[$user_type];
$role = user_role_load($role_id);   
if($role_id && !isset($account->roles[$role_id])){
  $account->roles = $account->roles + array($role->rid => $role->name);

 user_save($account);
 echo 'user ' .$account->uid .'updated ' . PHP_EOL;
}
else 
  echo 'user ' .$account->uid .'skipped '. PHP_EOL;
 
 }


