<?php

/**
 * @file
 * Bulk delete form and functions.
 */

/**
 * Form constructor for the bulk image delete form.
 *
 * @param object $node
 *   The Folder node.
 *
 * @see gn2_bulk_delete_form_validate()
 * @see gn2_bulk_delete_form_submit()
 */
function gn2_bulk_delete_form($form, &$form_state, $node) {
  drupal_add_js(drupal_get_path('module', 'gn2_bulk_delete' ) . '/gn2_bulk_delete.js');
  if (empty($node)) {
    return array();
  }

  global $user;

  // Add all file to the array.
  if (!empty($node->media_gallery_file_original)) {
    $files = $node->media_gallery_file_original[LANGUAGE_NONE];
  }
  // Get the Group ID.
  $group = field_get_items('node', $node, 'og_group_ref');
  $gid = $group[0]['target_id'];
  // Get the parent Org ID.
  $parent = field_get_items('node', $node, 'field_parent_organization');
  $oid = $parent[0]['target_id'];
  $form['select-all'] = array(
    '#type' => 'checkbox',
    '#title' => t('Select all'),
    '#attributes' => array(
      'class' => array('select-all'),
    ),
  );

  $rows = ($files) ? gn2_bulk_delete_sort_files($files) : array();
  $form['folder_files'] = array(
    '#theme' => 'gn2_bulk_delete_table_form',
    '#header' => array(t('Mark for deletion'), '', t('File')),
    'rows' => $rows,
  );

  // The Folder node ID.
  $form['nid'] = array(
    '#type' => 'hidden',
    '#value' => $node->nid,
  );

  // The requesting User ID.
  $form['uid'] = array(
    '#type' => 'hidden',
    '#value' => $user->uid,
  );

  // The Folder Group ID.
  $form['gid'] = array(
    '#type' => 'hidden',
    '#value' => $gid,
  );

  // The Folder Parent Org ID.
  $form['oid'] = array(
    '#type' => 'hidden',
    '#value' => $oid,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Prepare array for tabling.
 *
 * @param array $files
 *   The array of the Folder files.
 *
 * @return
 *   Returns an array of checkboxes, images and file paths.
 */
function gn2_bulk_delete_sort_files($files) {
  $rows = array();
  $rows['#tree'] = TRUE;
  // Image file types.
  $image_types = array(
    'image/jpeg',
    'image/png',
    'image/gif',
  );
  // Add the images to table cells.
  foreach ($files as $file) {
    // If the file is an image, theme it.
    $image = (in_array($file['filemime'], $image_types)) ?
      theme_image_style(array(
        'style_name' => 'thumbnail',
        'path' => $file['uri'],
        'alt' => $file['filename'],
        'title' => $file['filename'],
        'height' => $file['height'],
        'width' => $file['width'],
      )) : NULL;
    // Table cells.
    $rows[$file['fid']] = array(
      'fid' => array(
        '#type' => 'checkbox',
      ),
      'thumb' => array(
        '#markup' => $image,
      ),
      'filepath' => array(
        '#markup' => $file['uri'],
      ),
    );
  };
  return $rows;
}

/**
 * Form validation handler for gn2_bulk_delete_form().
 *
 * @see gn2_bulk_delete_form_submit()
 */
function gn2_bulk_delete_form_validate($form, &$form_state) {
  global $user;
  // Make sure that the current user ID matches the value from the form.
  if ($user->uid !== $form_state['values']['uid']) {
    form_set_error('uid', t('An error occurred. Please try again or contact an Administrator'));
  }
  // Check that the current user is a Group Manager or an Org manager.
  $org_roles = og_get_user_roles('node', $form_state['values']['oid']);
  $group_roles = og_get_user_roles('node', $form_state['values']['gid']);
  $is_admin = in_array('administrator', $user->roles);
  if (!$is_admin && !in_array('org_manager', $org_roles) && !in_array('group_manager', $group_roles)) {
    form_set_error('oid', t('An error occurred. Please try again or contact an Administrator'));
  }
}

/**
 * Form submission handler for gn2_bulk_delete_form().
 *
 * @see gn2_bulk_delete_form_validate()
 */
function gn2_bulk_delete_form_submit($form, &$form_state) {
  $fids = array();
  foreach ($form_state['values']['rows'] as $key => $value) {
    if ($value['fid'] === 1) {
      $fids[] = $key;
    }
  }

  if ($fids) {
    $did = gn2_bulk_delete_insert_request($form_state['values'], $fids);
    _gn2_bulk_delete_notify_admins($did);
    drupal_goto('node/' . $form_state['values']['nid'] . '/bulk-delete/confirm/' . $did);
  }
}

/**
 * Insert delete request values into the DB.
 *
 * @param array $form_values
 *   The form values.
 * @param array $fids
 *   The file IDs to be deleted.
 */
function gn2_bulk_delete_insert_request($form_values, $fids) {
  $did = db_insert('bulk_delete')
    ->fields(array('uid' => $form_values['uid'], 'nid' => $form_values['nid'], 'date' => REQUEST_TIME))
    ->execute();
  $query = db_insert('bulk_delete_files')
    ->fields(array('did', 'fid'));
  foreach ($fids as $fid) {
    $query->values(array('did' => $did, 'fid' => $fid));
  }
  $query->execute();
  return $did;
}

/**
 * Generate and send email.
 *
 * @param int $did
 *   The bulk delete ID.
 * @todo Incorporate Gn2NotificationsMailHandler.
 */
function _gn2_bulk_delete_notify_admins($did) {
  global $base_url;

  $params = array();

  // Add subject.
  $params['subject'] = t('Bulk file delete request');
  $module = 'gn2_bulk_delete';
  $key = 'gn2_bulk_delete_request';
  $language = language_default();
  $from = 'admin@globalnetplatform.org';

  // Get the admin email address.
  $admins = (variable_get('gn2_bulk_delete_mailto', NULL)) ? variable_get('gn2_bulk_delete_mailto', NULL) :
    _gn2_bulk_delete_get_admins();
  $to = implode(', ', $admins);

  // Get the request data.
  $request_data = _gn2_bulk_delete_get_files($did);
  // Load the requesting user data.
  $requesting_user = user_load($request_data['info']['uid']);
  // Load the Folder.
  $folder_node = node_load($request_data['info']['nid']);
  // Add message body.
  $file_count = count($request_data['files']);
  $files = format_plural($file_count, 'file', 'files');
  $querystring = array('did' => $request_data['info']['did']);
  $params['body'] = array();
  $params['body'][] = t('!user has requested that !count !files be removed from the !title folder. Click the link below to view the files.',
    array('!user' => $requesting_user->name, '!count' => $file_count, '!files' => $files, '!title' => $folder_node->title));
  $params['body'][] = l(t('View bulk file delete request'), $base_url . '/node/' . $folder_node->nid . '/bulk-image-delete',
    array('query' => $querystring, 'absolute' => TRUE));
  // Send message.
  $sent = drupal_mail($module, $key, $to, $language, $params, $from);

  // Log successful sent mail.
  if ($sent) {
    $message = 'Bulk file delete request for !title by !user';
    $variables = array('!title' => $folder_node->title, '!user' => $requesting_user->name);
    $link = l('View folder', 'node/' . $folder_node->nid);
    watchdog('GN2 Bulk Delete request', $message, $variables, WATCHDOG_NOTICE, $link);
  }
}

/**
 * Implements hook_mail().
 */
function gn2_bulk_delete_mail($key, &$message, $params) {
  // Add header.
  $headers = array(
    'MIME-Version' => '1.0',
    'Content-Type' => 'text/html; charset=UTF-8;',
    'Content-Transfer-Encoding' => '8Bit',
    'X-Mailer' => 'Drupal'
  );
  foreach ($headers as $key => $value) {
    $message['headers'][$key] = $value;
  }
  // Add subject.
  $message['subject'] = $params['subject'];
  // Add body.
  foreach ($params['body'] as $text) {
    $message['body'][] = $text;
  }
}
