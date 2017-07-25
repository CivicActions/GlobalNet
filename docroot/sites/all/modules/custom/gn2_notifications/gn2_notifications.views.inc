<?php
/**
 * @file
 * Include file for gn2_notifications views table.
 */

/**
 * Implements hook_views_data().
 */
function gn2_notifications_views_data() {

  $data = array();
  $data['subscriptions_notifications_messages']['table']['group'] = t('GN2 Notifications');
  $data['subscriptions_notifications_messages']['table']['base'] = array(
    'title' => t('GN2 Notifications'),
    'help' => t('Contains GN2 Notifications data'),
  );

  $data['subscriptions_notifications_messages']['table']['join'] = array(
    'users' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
  );

  $data['subscriptions_notifications_messages']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  $data['subscriptions_notifications_messages']['table']['join'] = array(
    'subscriptions' => array(
      'left_field' => 'recipient_uid',
      'field' => 'uid',
    ),
  );

  $data['subscriptions_notifications_messages']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  $data['subscriptions_notifications_messages']['delta'] = array(
    'title' => t('GN2 Notifications Delta'),
    'help' => t('GN2 Notifications Delta number'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['subscriptions_notifications_messages']['uid'] = array(
    'title' => t('GN2 Notifications UID'),
    'help' => t('GN2 Notifications UID'),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('GN2 Notifications User Relationship'),
    ),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['subscriptions_notifications_messages']['initiator'] = array(
    'title' => t('GN2 Notifications Initiator'),
    'help' => t('GN2 Notifications Initiator'),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('GN2 Notifications User Relationship for Initiator'),
    ),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['subscriptions_notifications_messages']['timestamp'] = array(
    'title' => t('GN2 Notifications Time created'),
    'help' => t('GN2 Notifications Time created'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['subscriptions_notifications_messages']['nid'] = array(
    'title' => t('GN2 Notifications NID'),
    'help' => t('GN2 Notifications NID'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['subscriptions_notifications_messages']['type'] = array(
    'title' => t('GN2 Notifications Type'),
    'help' => t('GN2 Notifications Type'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['subscriptions_notifications_messages']['text'] = array(
    'title' => t('GN2 Notifications Text'),
    'help' => t('GN2 Notifications Text'),
    'field' => array(
      'handler' => 'gn2_notifications_handler_notification',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  return $data;
}
