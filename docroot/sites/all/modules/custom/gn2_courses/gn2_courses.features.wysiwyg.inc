<?php
/**
 * @file
 * gn2_courses.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function gn2_courses_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: sessions_wysiwyg
  $profiles['sessions_wysiwyg'] = array(
  /* sessions_wysiwyg */   'format' => 'sessions_wysiwyg',
  /* sessions_wysiwyg */   'editor' => 'ckeditor',
  /* sessions_wysiwyg */   'settings' => array(
  /* sessions_wysiwyg */     'default' => 1,
  /* sessions_wysiwyg */     'user_choose' => 0,
  /* sessions_wysiwyg */     'show_toggle' => 1,
  /* sessions_wysiwyg */     'add_to_summaries' => 1,
  /* sessions_wysiwyg */     'theme' => '',
  /* sessions_wysiwyg */     'language' => 'en',
  /* sessions_wysiwyg */     'buttons' => array(
  /* sessions_wysiwyg */       'default' => array(
  /* sessions_wysiwyg */         'Bold' => 1,
  /* sessions_wysiwyg */         'Italic' => 1,
  /* sessions_wysiwyg */         'Underline' => 1,
  /* sessions_wysiwyg */         'JustifyLeft' => 1,
  /* sessions_wysiwyg */         'JustifyCenter' => 1,
  /* sessions_wysiwyg */         'JustifyRight' => 1,
  /* sessions_wysiwyg */         'JustifyBlock' => 1,
  /* sessions_wysiwyg */         'BulletedList' => 1,
  /* sessions_wysiwyg */         'NumberedList' => 1,
  /* sessions_wysiwyg */         'BidiLtr' => 1,
  /* sessions_wysiwyg */         'BidiRtl' => 1,
  /* sessions_wysiwyg */         'Outdent' => 1,
  /* sessions_wysiwyg */         'Indent' => 1,
  /* sessions_wysiwyg */         'Undo' => 1,
  /* sessions_wysiwyg */         'Redo' => 1,
  /* sessions_wysiwyg */         'Link' => 1,
  /* sessions_wysiwyg */         'Unlink' => 1,
  /* sessions_wysiwyg */       ),
  /* sessions_wysiwyg */       'drupal' => array(
  /* sessions_wysiwyg */         'media' => 1,
  /* sessions_wysiwyg */       ),
  /* sessions_wysiwyg */     ),
  /* sessions_wysiwyg */     'toolbarLocation' => 'top',
  /* sessions_wysiwyg */     'resize_enabled' => 1,
  /* sessions_wysiwyg */     'default_toolbar_grouping' => 0,
  /* sessions_wysiwyg */     'simple_source_formatting' => 0,
  /* sessions_wysiwyg */     'acf_mode' => 0,
  /* sessions_wysiwyg */     'acf_allowed_content' => '',
  /* sessions_wysiwyg */     'css_setting' => 'theme',
  /* sessions_wysiwyg */     'css_path' => '',
  /* sessions_wysiwyg */     'stylesSet' => '',
  /* sessions_wysiwyg */     'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
  /* sessions_wysiwyg */     'advanced__active_tab' => 'edit-basic',
  /* sessions_wysiwyg */     'forcePasteAsPlainText' => 0,
  /* sessions_wysiwyg */   ),
  /* sessions_wysiwyg */ );

  return $profiles;
}
