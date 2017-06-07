<?php

/**
 * Script for change field_topics values
 * */
define("OLD_TID", 87892);
define("NEW_TID", 339);

//update nodes
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node');
$query->fieldCondition('field_topics', 'tid', OLD_TID);
$result = $query->execute();

if (isset($result['node'])) {
  foreach ($result['node'] as $key => $node) {
    $node_obj = node_load($key);
    $field_language = field_language('node', $node_obj, 'field_topics');

    foreach ($node_obj->field_topics[$field_language] as $key => $value) {

      if ($value['tid'] == OLD_TID) {
        $node_obj->field_topics[$field_language][$key]['tid'] = NEW_TID;
        // break;
      }
    }

    node_save($node_obj);
  }
}

//update account
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'user');
$query->fieldCondition('field_topics', 'tid', OLD_TID);
$result = $query->execute();

if (isset($result['user'])) {
  foreach ($result['user'] as $key => $node) {
    $account = user_load($key);
    $field_language = field_language('user', $account, 'field_topics');

    foreach ($account->field_topics[$field_language] as $key => $value) {
      if ($value['tid'] == OLD_TID) {
        $account->field_topics[$field_language][$key]['tid'] = NEW_TID;
        // break;
      }
    }

    user_save($account);
  }
}