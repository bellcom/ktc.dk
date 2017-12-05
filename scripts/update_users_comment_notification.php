<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//var_dump(ktc_crm_lookup_webuser_by_mail('asdas@bellcom.ee'));

$uids = array();
$query = db_select('users', 'u');
    $query->fields('u', array('uid'));
    $result = $query->execute();  
 while($record = $result->fetchAssoc()) {
   if ($record['uid']==0)     continue;
   $account=user_load($record['uid']);
    $user_groups = og_get_groups_by_user($account);
    if ($user_groups) {
    unset($account->field_netvaerk_comment_notify['und']);
    foreach ($user_groups['node'] as $nid){
      if (in_array($account->uid, _ktc_netvaerk_notifications_get_users($nid)))
       $account->field_netvaerk_comment_notify['und'][]['target_id']=$nid;       
    }    
    user_save($account);
    print_r('Updated user '. $account->name . PHP_EOL);
    }
 }

    
      
