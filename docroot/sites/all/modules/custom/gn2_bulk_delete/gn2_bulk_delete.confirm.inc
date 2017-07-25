<?php

/**
 * @file
 * This file creates the bulk delete follow up page.
 */

/**
 * Creates the follow up page.
 */
function gn2_bulk_delete_confirm_page($node, $did) {
  global $user;
  drupal_set_message(t('GlobalNET managers have been notified of your request and will review and complete your transaction. No further action is required on your part.'), 'status');
  $text = t('The following files will be removed from this Folder.');
  // Image file types.
  $image_types = array(
    'image/jpeg',
    'image/png',
    'image/gif',
  );
  $rows = array();
  $header = array();
  $request_data = _gn2_bulk_delete_get_files($did);
  if (!empty($request_data['files'])) {
    foreach ($request_data['files'] as $fid) {
      $file = file_load($fid);
      $image = (in_array($file->filemime, $image_types)) ?
        theme_image_style(array(
          'style_name' => 'thumbnail',
          'path' => $file->uri,
          'alt' => $file->filename,
          'title' => $file->filename,
          'height' => $file->height,
          'width' => $file->width,
        )) : NULL;
      $rows[] = array($image, $file->filename);
    }
  }
  $file_table = theme_table(array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array(),
    'caption' => NULL,
    'colgroups' => array(),
    'sticky' => FALSE,
    'empty' => t('No files'),
  ));
  return $text . $file_table;
}

/**
 * Creates the page title.
 *
 * @param object $node
 *   The Folder node object.
 */
function gn2_bulk_delete_confirm_title($node) {
  return t('Bulk file deletion requested for !title', array('!title' => $node->title));
}