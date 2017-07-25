<?php
/**
 * @file
 * gn2_cac.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_cac_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'pki_authentication_pki_string'.
  $field_bases['pki_authentication_pki_string'] = array(
  /* pki_authentication_pki_string */   'active' => 1,
  /* pki_authentication_pki_string */   'cardinality' => 1,
  /* pki_authentication_pki_string */   'default_formatter' => 'hidden',
  /* pki_authentication_pki_string */   'default_widget' => 'text_fextfield',
  /* pki_authentication_pki_string */   'deleted' => 0,
  /* pki_authentication_pki_string */   'entity_types' => array(),
  /* pki_authentication_pki_string */   'field_name' => 'pki_authentication_pki_string',
  /* pki_authentication_pki_string */   'indexes' => array(
  /* pki_authentication_pki_string */     'format' => array(
  /* pki_authentication_pki_string */       0 => 'format',
  /* pki_authentication_pki_string */     ),
  /* pki_authentication_pki_string */   ),
  /* pki_authentication_pki_string */   'locked' => 0,
  /* pki_authentication_pki_string */   'module' => 'text',
  /* pki_authentication_pki_string */   'settings' => array(
  /* pki_authentication_pki_string */     'max_length' => 255,
  /* pki_authentication_pki_string */     'required' => FALSE,
  /* pki_authentication_pki_string */   ),
  /* pki_authentication_pki_string */   'translatable' => 0,
  /* pki_authentication_pki_string */   'type' => 'text',
  /* pki_authentication_pki_string */ );

  return $field_bases;
}
