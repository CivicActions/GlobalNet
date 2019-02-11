<?php

/**
 * @file
 * Views file for gn2_adobe_connect.
 */



/**
 * Implements hook_views_data().
 */
function gn2_adobe_connect_views_data() {

  $data = array();

  $data['gn2_adobe_connect_meetings']['table']['group'] = t('GN2 Adobe Connect');

  $data['gn2_adobe_connect_meetings']['table']['base'] = array(
    'title' => t('Gn2 Adobe Connect'),
    'help' => t('Contains Adobe Connect Meeting records'),
  );

  // The Name field.
  $data['gn2_adobe_connect_meetings']['name'] = array(
    'title' => t('Meeting Name'),
    'help' => t('The meeting name.'),
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

  // The Type field.
  $data['gn2_adobe_connect_meetings']['type'] = array(
    'title' => t('Meeting type'),
    'help' => t('The meeting type.'),
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

  // The Start time.
  $data['gn2_adobe_connect_meetings']['start'] = array(
    'title' => t('Meeting start'),
    'help' => t('Meeting start time'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'gn2_adobe_connect_handler_filter_datetime',
    ),
  );

  // The End time.
  $data['gn2_adobe_connect_meetings']['end'] = array(
    'title' => t('Meeting end'),
    'help' => t('Meeting end time'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'gn2_adobe_connect_handler_filter_datetime',
    ),
  );

  // The Link field.
  $data['gn2_adobe_connect_meetings']['link'] = array(
    'title' => t('Meeting link'),
    'help' => t('The meeting link path.'),
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

  // Join with node table.
  $data['gn2_adobe_connect_meetings']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // The NID field.
  $data['gn2_adobe_connect_meetings']['nid'] = array(
    'title' => t('ID'),
    'help' => t('The node where meeting was created.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'gn2_adobe_connect_handler_filter_datetime',
    ),
    'relationship' => array(
      'base' => 'node',
      'field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Node'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_node_nid',
      'numeric' => TRUE,
      'validate type' => 'nid',
    ),
  );

  // Join with users table.
  $data['gn2_adobe_connect_meetings']['table']['join'] = array(
    'users' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
  );

  // The UID field.
  $data['gn2_adobe_connect_meetings']['uid'] = array(
    'title' => t('ID'),
    'help' => t('The user who created the meeting'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('User'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_node_nid',
      'numeric' => TRUE,
      'validate type' => 'uid',
    ),
  );

  return $data;

}

