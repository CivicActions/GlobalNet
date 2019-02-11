<?php
/**
 * @file
 * gn2_staff_directory.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function gn2_staff_directory_default_ctools_custom_content() {
  $export = array();

   /* staff_directory */ $content = new stdClass();
   /* staff_directory */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* staff_directory */ $content->api_version = 1;
   /* staff_directory */ $content->name = 'staff_directory';
   /* staff_directory */ $content->admin_title = 'Staff directory';
   /* staff_directory */ $content->admin_description = 'Link to faculty and staff directory';
   /* staff_directory */ $content->category = '';
   /* staff_directory */ $content->settings = array(
   /* staff_directory */   'admin_title' => '',
   /* staff_directory */   'title' => '',
   /* staff_directory */   'body' => '<a href="%node:url/staff-directory">View the Faculty and Staff Directory</a>',
   /* staff_directory */   'format' => 'full_html',
   /* staff_directory */   'substitute' => 1,
   /* staff_directory */ );
  $export['staff_directory'] = $content;

  return $export;
}
