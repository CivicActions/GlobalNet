<?php
/**
 * @file
 * gn2_library.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function gn2_library_conditional_fields_default_fields() {
  $items = array();

  /* field_link */ $items[] = array(
  /* field_link */   'entity' => 'node',
  /* field_link */   'bundle' => 'resource_item',
  /* field_link */   'dependent' => 'field_link',
  /* field_link */   'dependee' => 'field_resource_type',
  /* field_link */   'options' => array(
  /* field_link */     'state' => 'visible',
  /* field_link */     'condition' => 'value',
  /* field_link */     'grouping' => 'AND',
  /* field_link */     'effect' => 'show',
  /* field_link */     'effect_options' => array(),
  /* field_link */     'element_view' => array(
  /* field_link */       1 => 1,
  /* field_link */       2 => 2,
  /* field_link */       5 => 0,
  /* field_link */       3 => 0,
  /* field_link */       4 => 0,
  /* field_link */     ),
  /* field_link */     'element_view_per_role' => 0,
  /* field_link */     'element_view_roles' => array(
  /* field_link */       1 => array(
  /* field_link */         1 => 1,
  /* field_link */         2 => 2,
  /* field_link */         5 => 0,
  /* field_link */         3 => 0,
  /* field_link */         4 => 0,
  /* field_link */       ),
  /* field_link */       2 => array(
  /* field_link */         1 => 1,
  /* field_link */         2 => 2,
  /* field_link */         5 => 0,
  /* field_link */         3 => 0,
  /* field_link */         4 => 0,
  /* field_link */       ),
  /* field_link */       9 => array(
  /* field_link */         1 => 1,
  /* field_link */         2 => 2,
  /* field_link */         5 => 0,
  /* field_link */         3 => 0,
  /* field_link */         4 => 0,
  /* field_link */       ),
  /* field_link */       10 => array(
  /* field_link */         1 => 1,
  /* field_link */         2 => 2,
  /* field_link */         5 => 0,
  /* field_link */         3 => 0,
  /* field_link */         4 => 0,
  /* field_link */       ),
  /* field_link */       11 => array(
  /* field_link */         1 => 1,
  /* field_link */         2 => 2,
  /* field_link */         5 => 0,
  /* field_link */         3 => 0,
  /* field_link */         4 => 0,
  /* field_link */       ),
  /* field_link */     ),
  /* field_link */     'element_edit' => array(
  /* field_link */       1 => 1,
  /* field_link */       3 => 0,
  /* field_link */     ),
  /* field_link */     'element_edit_per_role' => 0,
  /* field_link */     'element_edit_roles' => array(
  /* field_link */       1 => array(
  /* field_link */         1 => 1,
  /* field_link */         3 => 0,
  /* field_link */       ),
  /* field_link */       2 => array(
  /* field_link */         1 => 1,
  /* field_link */         3 => 0,
  /* field_link */       ),
  /* field_link */       9 => array(
  /* field_link */         1 => 1,
  /* field_link */         3 => 0,
  /* field_link */       ),
  /* field_link */       10 => array(
  /* field_link */         1 => 1,
  /* field_link */         3 => 0,
  /* field_link */       ),
  /* field_link */       11 => array(
  /* field_link */         1 => 1,
  /* field_link */         3 => 0,
  /* field_link */       ),
  /* field_link */     ),
  /* field_link */     'selector' => '',
  /* field_link */     'values_set' => 1,
  /* field_link */     'value_form' => 'Link',
  /* field_link */     'value' => array(
  /* field_link */       0 => array(
  /* field_link */         'value' => 'Link',
  /* field_link */       ),
  /* field_link */     ),
  /* field_link */     'values' => array(),
  /* field_link */   ),
  /* field_link */ );

  return $items;
}
