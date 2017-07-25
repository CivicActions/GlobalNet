<?php
/**
 * @file
 * gn2_base_config.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function gn2_base_config_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
  /* filtered_html */   'format' => 'filtered_html',
  /* filtered_html */   'editor' => 'ckeditor',
  /* filtered_html */   'settings' => array(
  /* filtered_html */     'default' => 1,
  /* filtered_html */     'user_choose' => 0,
  /* filtered_html */     'show_toggle' => 1,
  /* filtered_html */     'add_to_summaries' => 1,
  /* filtered_html */     'theme' => '',
  /* filtered_html */     'language' => 'en',
  /* filtered_html */     'buttons' => array(
  /* filtered_html */       'default' => array(
  /* filtered_html */         'Bold' => 1,
  /* filtered_html */         'Italic' => 1,
  /* filtered_html */         'JustifyLeft' => 1,
  /* filtered_html */         'JustifyCenter' => 1,
  /* filtered_html */         'JustifyRight' => 1,
  /* filtered_html */         'JustifyBlock' => 1,
  /* filtered_html */         'BulletedList' => 1,
  /* filtered_html */         'NumberedList' => 1,
  /* filtered_html */         'Outdent' => 1,
  /* filtered_html */         'Indent' => 1,
  /* filtered_html */         'Link' => 1,
  /* filtered_html */         'Unlink' => 1,
  /* filtered_html */         'Superscript' => 1,
  /* filtered_html */         'Subscript' => 1,
  /* filtered_html */         'HorizontalRule' => 1,
  /* filtered_html */         'RemoveFormat' => 1,
  /* filtered_html */       ),
  /* filtered_html */       'drupal' => array(
  /* filtered_html */         'media' => 1,
  /* filtered_html */       ),
  /* filtered_html */     ),
  /* filtered_html */     'toolbarLocation' => 'top',
  /* filtered_html */     'resize_enabled' => 1,
  /* filtered_html */     'default_toolbar_grouping' => 0,
  /* filtered_html */     'simple_source_formatting' => 1,
  /* filtered_html */     'acf_mode' => 0,
  /* filtered_html */     'acf_allowed_content' => '',
  /* filtered_html */     'css_setting' => 'theme',
  /* filtered_html */     'css_path' => '',
  /* filtered_html */     'stylesSet' => '',
  /* filtered_html */     'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
  /* filtered_html */     'advanced__active_tab' => 'edit-basic',
  /* filtered_html */     'forcePasteAsPlainText' => 1,
  /* filtered_html */   ),
  /* filtered_html */ );

  return $profiles;
}
