<?php

include dirname(__FILE__) . '/transform.php';
include dirname(__FILE__) . '/handler.php';
$roles = array(
  '1128' => array('23224'),
  '1129' =>	array ('23224'),
  '1130' => array('23224'),		
  "1131" => array ('23224'),		
  '1132' =>	array('23224'),
  '1133' =>	array('23217','23218','23219','23220','23227','23224','23226'),
  '1134' => array('23217','23222',	'23224'),		
  '1155' => array ('23217','23218',	'23219','23220','23227','23233','23224', '23225','23226'),
  '1159' => array('23217','23233','23224','23226'),
  '25758' => array ('23217','23218','23219','23220','23227','23224','23226'));

//$file_contents = file_get_contents(__DIR__ . '/var/' . 'admins.csv');
if (($handle = fopen(__DIR__ . '/var/' . 'prod_admins.csv', 'r')) !== FALSE)
    {
        while (($row = fgetcsv($handle, 1000, ';')) !== FALSE)
        {
            if(!$header)
                $header = $row;
            else
                $data[] = array_combine($header, $row);
        }
        //var_dump($data);
        fclose($handle);
    }
     foreach ($data as $csv_str){
       $csv_str = array_values($csv_str );
       //var_dump($csv_str[0]);
       $query = new EntityFieldQuery();
         $entities = $query->entityCondition('entity_type', 'node')
           ->propertyCondition('type', 'group')
           ->propertyCondition('title', $csv_str[0])
           ->propertyCondition('status', 1)
           ->range(0,1)
           ->execute();

  if (!empty($entities['node'])) {   
    $node = node_load(array_shift(array_keys($entities['node'])));    
   
    $user = user_load_by_mail($csv_str['7']);
    if ($user && $node)
      if (og_is_member('node', $node->nid, 'user', $user)){
         var_dump('admin');
        $membership = og_get_membership('node', $node->nid, 'user', $user->uid);        
        //if ($membership->field_grouprole[LANGUAGE_NONE][0]['target_id']==KTC_NETVAERK_ADMIN_TID){
        if (isset($node->field_netvaerkstype[LANGUAGE_NONE][0]['tid'])){
          if (in_array($csv_str['2'], $roles[$node->field_netvaerkstype[LANGUAGE_NONE][0]['tid']])){          
          $membership->field_grouprole[LANGUAGE_NONE][0]['target_id']=KTC_NETVAERK_ADMIN_TID;          
          og_membership_save($membership);
          //}
          
        }
        else { 
          var_dump('non admin');
          $membership->field_grouprole[LANGUAGE_NONE][0]['target_id']=KTC_NETVAERK_MEMBER_TID;
          og_membership_save($membership);
        }  
      }
      }
      
  }
}
 

