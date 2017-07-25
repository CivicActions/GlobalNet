<?php
/**
 * @file
 * gn2_cac.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_cac_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-pki_authentication_pki_string'.
  $field_instances['user-user-pki_authentication_pki_string'] = array(
  /* user-user-pki_authentication_pki_string */   'bundle' => 'user',
  /* user-user-pki_authentication_pki_string */   'default_value' => NULL,
  /* user-user-pki_authentication_pki_string */   'deleted' => 0,
  /* user-user-pki_authentication_pki_string */   'description' => '',
  /* user-user-pki_authentication_pki_string */   'display' => array(
  /* user-user-pki_authentication_pki_string */     'about_this_author' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'settings' => array(),
  /* user-user-pki_authentication_pki_string */       'type' => 'hidden',
  /* user-user-pki_authentication_pki_string */       'weight' => 0,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'default' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'module' => 'text',
  /* user-user-pki_authentication_pki_string */       'settings' => array(
  /* user-user-pki_authentication_pki_string */         'field_formatter_class' => '',
  /* user-user-pki_authentication_pki_string */       ),
  /* user-user-pki_authentication_pki_string */       'type' => 'text_default',
  /* user-user-pki_authentication_pki_string */       'weight' => 35,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'full_name_phone' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'settings' => array(),
  /* user-user-pki_authentication_pki_string */       'type' => 'hidden',
  /* user-user-pki_authentication_pki_string */       'weight' => 0,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'participant_teaser' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'settings' => array(),
  /* user-user-pki_authentication_pki_string */       'type' => 'hidden',
  /* user-user-pki_authentication_pki_string */       'weight' => 0,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'search_teaser_with_thumb' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'settings' => array(),
  /* user-user-pki_authentication_pki_string */       'type' => 'hidden',
  /* user-user-pki_authentication_pki_string */       'weight' => 0,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'session_presenter' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'settings' => array(),
  /* user-user-pki_authentication_pki_string */       'type' => 'hidden',
  /* user-user-pki_authentication_pki_string */       'weight' => 0,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'user_info_block' => array(
  /* user-user-pki_authentication_pki_string */       'label' => 'above',
  /* user-user-pki_authentication_pki_string */       'settings' => array(),
  /* user-user-pki_authentication_pki_string */       'type' => 'hidden',
  /* user-user-pki_authentication_pki_string */       'weight' => 0,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */   ),
  /* user-user-pki_authentication_pki_string */   'entity_type' => 'user',
  /* user-user-pki_authentication_pki_string */   'fences_wrapper' => 'div',
  /* user-user-pki_authentication_pki_string */   'field_name' => 'pki_authentication_pki_string',
  /* user-user-pki_authentication_pki_string */   'label' => 'CAC Login Settings',
  /* user-user-pki_authentication_pki_string */   'required' => 0,
  /* user-user-pki_authentication_pki_string */   'settings' => array(
  /* user-user-pki_authentication_pki_string */     'better_formats' => array(
  /* user-user-pki_authentication_pki_string */       'allowed_formats' => array(
  /* user-user-pki_authentication_pki_string */         'filtered_html' => 'filtered_html',
  /* user-user-pki_authentication_pki_string */         'full_html' => 'full_html',
  /* user-user-pki_authentication_pki_string */         'php_code' => 'php_code',
  /* user-user-pki_authentication_pki_string */         'plain_text' => 'plain_text',
  /* user-user-pki_authentication_pki_string */       ),
  /* user-user-pki_authentication_pki_string */       'allowed_formats_toggle' => 0,
  /* user-user-pki_authentication_pki_string */       'default_order_toggle' => 0,
  /* user-user-pki_authentication_pki_string */       'default_order_wrapper' => array(
  /* user-user-pki_authentication_pki_string */         'formats' => array(
  /* user-user-pki_authentication_pki_string */           'filtered_html' => array(
  /* user-user-pki_authentication_pki_string */             'weight' => -10,
  /* user-user-pki_authentication_pki_string */           ),
  /* user-user-pki_authentication_pki_string */           'full_html' => array(
  /* user-user-pki_authentication_pki_string */             'weight' => -8,
  /* user-user-pki_authentication_pki_string */           ),
  /* user-user-pki_authentication_pki_string */           'php_code' => array(
  /* user-user-pki_authentication_pki_string */             'weight' => -7,
  /* user-user-pki_authentication_pki_string */           ),
  /* user-user-pki_authentication_pki_string */           'plain_text' => array(
  /* user-user-pki_authentication_pki_string */             'weight' => -9,
  /* user-user-pki_authentication_pki_string */           ),
  /* user-user-pki_authentication_pki_string */         ),
  /* user-user-pki_authentication_pki_string */       ),
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'text_processing' => 0,
  /* user-user-pki_authentication_pki_string */     'user_register_form' => 0,
  /* user-user-pki_authentication_pki_string */   ),
  /* user-user-pki_authentication_pki_string */   'widget' => array(
  /* user-user-pki_authentication_pki_string */     'active' => 1,
  /* user-user-pki_authentication_pki_string */     'module' => 'text',
  /* user-user-pki_authentication_pki_string */     'settings' => array(
  /* user-user-pki_authentication_pki_string */       'size' => 60,
  /* user-user-pki_authentication_pki_string */     ),
  /* user-user-pki_authentication_pki_string */     'type' => 'text_textfield',
  /* user-user-pki_authentication_pki_string */     'weight' => 82,
  /* user-user-pki_authentication_pki_string */   ),
  /* user-user-pki_authentication_pki_string */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('CAC Login Settings');

  return $field_instances;
}
