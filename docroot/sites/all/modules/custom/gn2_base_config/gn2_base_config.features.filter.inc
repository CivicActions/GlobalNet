<?php
/**
 * @file
 * gn2_base_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gn2_base_config_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered_html.
  $formats['filtered_html'] = array(
  /* filtered_html */   'format' => 'filtered_html',
  /* filtered_html */   'name' => 'Filtered_html',
  /* filtered_html */   'cache' => 1,
  /* filtered_html */   'status' => 1,
  /* filtered_html */   'weight' => -10,
  /* filtered_html */   'filters' => array(
  /* filtered_html */     'filter_url' => array(
  /* filtered_html */       'weight' => 0,
  /* filtered_html */       'status' => 1,
  /* filtered_html */       'settings' => array(
  /* filtered_html */         'filter_url_length' => 72,
  /* filtered_html */       ),
  /* filtered_html */     ),
  /* filtered_html */     'media_filter' => array(
  /* filtered_html */       'weight' => 2,
  /* filtered_html */       'status' => 1,
  /* filtered_html */       'settings' => array(),
  /* filtered_html */     ),
  /* filtered_html */   ),
  /* filtered_html */ );

  // Exported format: Full_HTML.
  $formats['full_html'] = array(
  /* full_html */   'format' => 'full_html',
  /* full_html */   'name' => 'Full_HTML',
  /* full_html */   'cache' => 1,
  /* full_html */   'status' => 1,
  /* full_html */   'weight' => -8,
  /* full_html */   'filters' => array(
  /* full_html */     'filter_url' => array(
  /* full_html */       'weight' => -46,
  /* full_html */       'status' => 1,
  /* full_html */       'settings' => array(
  /* full_html */         'filter_url_length' => 72,
  /* full_html */       ),
  /* full_html */     ),
  /* full_html */     'media_filter' => array(
  /* full_html */       'weight' => -44,
  /* full_html */       'status' => 1,
  /* full_html */       'settings' => array(),
  /* full_html */     ),
  /* full_html */     'filter_htmlcorrector' => array(
  /* full_html */       'weight' => -40,
  /* full_html */       'status' => 1,
  /* full_html */       'settings' => array(),
  /* full_html */     ),
  /* full_html */     'accordion' => array(
  /* full_html */       'weight' => 0,
  /* full_html */       'status' => 1,
  /* full_html */       'settings' => array(),
  /* full_html */     ),
  /* full_html */     'tabs' => array(
  /* full_html */       'weight' => 0,
  /* full_html */       'status' => 1,
  /* full_html */       'settings' => array(),
  /* full_html */     ),
  /* full_html */   ),
  /* full_html */ );

  // Exported format: PHP code.
  $formats['php_code'] = array(
  /* php_code */   'format' => 'php_code',
  /* php_code */   'name' => 'PHP code',
  /* php_code */   'cache' => 0,
  /* php_code */   'status' => 1,
  /* php_code */   'weight' => -7,
  /* php_code */   'filters' => array(
  /* php_code */     'php_code' => array(
  /* php_code */       'weight' => 0,
  /* php_code */       'status' => 1,
  /* php_code */       'settings' => array(),
  /* php_code */     ),
  /* php_code */   ),
  /* php_code */ );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
  /* plain_text */   'format' => 'plain_text',
  /* plain_text */   'name' => 'Plain text',
  /* plain_text */   'cache' => 1,
  /* plain_text */   'status' => 1,
  /* plain_text */   'weight' => -9,
  /* plain_text */   'filters' => array(
  /* plain_text */     'media_filter' => array(
  /* plain_text */       'weight' => -43,
  /* plain_text */       'status' => 1,
  /* plain_text */       'settings' => array(),
  /* plain_text */     ),
  /* plain_text */     'filter_autop' => array(
  /* plain_text */       'weight' => -42,
  /* plain_text */       'status' => 1,
  /* plain_text */       'settings' => array(),
  /* plain_text */     ),
  /* plain_text */     'filter_url' => array(
  /* plain_text */       'weight' => -41,
  /* plain_text */       'status' => 1,
  /* plain_text */       'settings' => array(
  /* plain_text */         'filter_url_length' => 72,
  /* plain_text */       ),
  /* plain_text */     ),
  /* plain_text */   ),
  /* plain_text */ );

  return $formats;
}
