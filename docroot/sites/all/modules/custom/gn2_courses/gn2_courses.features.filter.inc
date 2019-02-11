<?php
/**
 * @file
 * gn2_courses.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gn2_courses_filter_default_formats() {
  $formats = array();

  // Exported format: Sessions wysiwyg.
  $formats['sessions_wysiwyg'] = array(
  /* sessions_wysiwyg */   'format' => 'sessions_wysiwyg',
  /* sessions_wysiwyg */   'name' => 'Sessions wysiwyg',
  /* sessions_wysiwyg */   'cache' => 1,
  /* sessions_wysiwyg */   'status' => 1,
  /* sessions_wysiwyg */   'weight' => 0,
  /* sessions_wysiwyg */   'filters' => array(
  /* sessions_wysiwyg */     'filter_autop' => array(
  /* sessions_wysiwyg */       'weight' => 0,
  /* sessions_wysiwyg */       'status' => 1,
  /* sessions_wysiwyg */       'settings' => array(),
  /* sessions_wysiwyg */     ),
  /* sessions_wysiwyg */     'filter_url' => array(
  /* sessions_wysiwyg */       'weight' => 0,
  /* sessions_wysiwyg */       'status' => 1,
  /* sessions_wysiwyg */       'settings' => array(
  /* sessions_wysiwyg */         'filter_url_length' => 72,
  /* sessions_wysiwyg */       ),
  /* sessions_wysiwyg */     ),
  /* sessions_wysiwyg */     'image_resize_filter' => array(
  /* sessions_wysiwyg */       'weight' => 0,
  /* sessions_wysiwyg */       'status' => 1,
  /* sessions_wysiwyg */       'settings' => array(
  /* sessions_wysiwyg */         'link' => 0,
  /* sessions_wysiwyg */         'link_class' => '',
  /* sessions_wysiwyg */         'link_rel' => '',
  /* sessions_wysiwyg */         'image_locations' => array(
  /* sessions_wysiwyg */           'local' => 'local',
  /* sessions_wysiwyg */           'remote' => 0,
  /* sessions_wysiwyg */         ),
  /* sessions_wysiwyg */       ),
  /* sessions_wysiwyg */     ),
  /* sessions_wysiwyg */     'media_filter' => array(
  /* sessions_wysiwyg */       'weight' => 2,
  /* sessions_wysiwyg */       'status' => 1,
  /* sessions_wysiwyg */       'settings' => array(),
  /* sessions_wysiwyg */     ),
  /* sessions_wysiwyg */     'filter_htmlcorrector' => array(
  /* sessions_wysiwyg */       'weight' => 10,
  /* sessions_wysiwyg */       'status' => 1,
  /* sessions_wysiwyg */       'settings' => array(),
  /* sessions_wysiwyg */     ),
  /* sessions_wysiwyg */   ),
  /* sessions_wysiwyg */ );

  return $formats;
}
