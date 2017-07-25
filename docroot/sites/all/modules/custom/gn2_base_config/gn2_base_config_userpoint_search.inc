<?php
/**
 * @file
 * gn2_base_config_userpoint_search.inc
 */

/**
 * Custom function to save userpoint when search.
 */
function _gn2_base_config_save_search_userpoint($form, &$form_state){
  
  global $user;
  
  if ($user->uid) {
    db_insert('userpoints_txn')
    ->fields(array(
      'uid' => $user->uid,
      'approver_uid' => 0,
      'points' => 1,
      'time_stamp' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
      'status' => 0,
      'expired' => 0,
      'parent_txn_id' => 0,
      'tid' => 0,
      'entity_id' => 0,
      'operation' => 'User search'
    ))
    ->execute();
    
    $result = db_select('userpoints_total', 'u')
    ->fields('u')
    ->condition('uid', $user->uid, '=')
    ->execute()
    ->fetchAssoc();
    
    $values = array(
        'uid' => $user->uid,
        'points' => 1,
        'max_points' => 1,
        'last_update' => REQUEST_TIME,
    );
    
    if (isset($result['uid'])) {
      
      $result['points'] = $result['points'] + 1;
      $result['max_points'] = $result['max_points'] + 1;
      $result['last_update'] = REQUEST_TIME;
      db_update('userpoints_total')->fields($result)
      ->condition('uid', $user->uid, '=')->execute();
      
    } else {
      db_insert('userpoints_total')->fields($values)->execute();
    }
  }
  
}
