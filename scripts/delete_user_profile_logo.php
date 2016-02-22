<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

$allowedExts = array("gif", "jpeg", "jpg", "png");
$query = db_select('users', 'u');
$query->fields('u', array('uid'));
$result = $query->execute();
while ($record = $result->fetchAssoc()) {
  if ($record['uid'] == 0)
    continue;
  $account = user_load($record['uid']);
  if ($account->picture->filename && !in_array(pathinfo($account->picture->filename, PATHINFO_EXTENSION), $allowedExts)) {
    /* Get file id of profile photo */
    $fid = $account->picture->fid;
// Load the file object
    $file = file_load($fid);
// delete profile photo from.
    file_delete($file);
// Unset the image object 
    unset($account->picture);
// Save the user
    user_save($account);
  }
}