<?php

/**
 * @file
 * Provide views data and handlers for user_revision.module
 */

/**
 * Implements hook_views_data().
 */
function user_revision_views_data() {

  // Add join to users.
  $data['users']['table']['join'] = array(
    'user_revision' => array(
      'left_field' => 'uid',
      'field' => 'uid',
      'type' => 'INNER',
    ),
  );

  $data['user_revision']['table']['group']  = t('User revision');
  $data['user_revision']['table']['base'] = array(
    'field' => 'vid',
    'title' => t('User revision'),
    'help' => t('User revision are a history of changes to users.'),
  );

  // For other base tables, explain how we join.
  $data['user_revision']['table']['join'] = array(
    'users' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  // Uid field for user revision.
  $data['user_revision']['authorid'] = array(
    'title' => t('Revision author'),
    'help' => t('Relate an user revision to the user who created the revision.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'label' => t('Revision author'),
    ),
  );

  $data['user_revision']['vid'] = array(
    'title' => t('Vid'),
    'help' => t('The revision ID of the user revision.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    // Information for accepting a nid as an argument.
    'argument' => array(
      'handler' => 'views_handler_argument_user_vid',
      'click sortable' => TRUE,
      'numeric' => TRUE,
    ),
    // Information for accepting a uid as a filter.
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    // Information for sorting on a uid.
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'vid',
      'title' => t('User'),
      'label' => t('Get the actual user from a user revision.'),
    ),
  );

  $data['user_revision']['uid'] = array(
    'title' => t('Uid'),
    'help' => t('The uid field of the user revisions table'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'title' => t('User'),
      'label' => t('Get all revisions from an user.'),
    ),
  );

  // Name.
  $data['user_revision']['name'] = array(
    'title' => t('Name'),
    'help' => t('The user name.'),
    'field' => array(
      'field' => 'name',
      'handler' => 'views_handler_field_user_revision',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Log field.
  $data['user_revision']['log'] = array(
    'title' => t('Log message'),
    'help' => t('The log message entered when the revision was created.'),
    'field' => array(
      'handler' => 'views_handler_field_xss',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  // Revision timestamp, changed field.
  $data['user_revision']['timestamp'] = array(
    'title' => t('Created date'),
    'help' => t('The date the user revision was created.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['user_revision']['ip'] = array(
    'title' => t('IP'),
    'help' => t('The IP address of the user that edited this user last.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    // Information for accepting a nid as an argument.
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'click sortable' => FALSE,
      'numeric' => TRUE,
    ),
    // Information for accepting a uid as a filter.
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['user_revision']['revert_revision'] = array(
    'field' => array(
      'title' => t('Revert link'),
      'help' => t('Provide a simple link to revert to the revision.'),
      'handler' => 'views_handler_field_user_revision_link_revert',
    ),
  );

  $data['user_revision']['delete_revision'] = array(
    'field' => array(
      'title' => t('Delete link'),
      'help' => t('Provide a simple link to delete the user revision.'),
      'handler' => 'views_handler_field_user_revision_link_delete',
    ),
  );

  return $data;
}
