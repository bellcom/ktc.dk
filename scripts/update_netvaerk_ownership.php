<?php

/* 
 * Script changes group author to KTC webmaster
 * Created node user get group admin rights
 */

$nids = db_select('node', 'n')
      ->fields('n', array('nid'))    
      ->condition('n.type', 'group')
      ->execute()
      ->fetchCol();

$mail= variable_get('group_owner', 'netvaerk@ktc.dk');
$ktc_webmaster = user_load_by_mail($mail);
foreach($nids as $nid){
$node = node_load($nid);
$account = user_load($node->uid );
if ($membership = og_get_membership('node', $nid, 'user', $node->uid)) {
  if ($membership->field_grouprole[LANGUAGE_NONE][0]['target_id'] != KTC_NETVAERK_ADMIN_TID){
          og_role_grant('node', $nid, $node->uid, 3);
          $membership->field_grouprole[LANGUAGE_NONE][0]['target_id'] = KTC_NETVAERK_ADMIN_TID;
          og_membership_save($membership);
        }
}
if ($ktc_webmaster_membership = og_get_membership('node', $nid, 'user', $ktc_webmaster->uid)) {
    og_membership_delete($ktc_webmaster_membership->id);
}
 ktc_netvaerk_change_own($node);

}