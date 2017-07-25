<?php
/**
 * @file
 * gn2_base_config.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function gn2_base_config_conditional_fields_default_fields() {
  $items = array();

  /* field_building_floor_room */ $items[] = array(
  /* field_building_floor_room */   'entity' => 'node',
  /* field_building_floor_room */   'bundle' => 'event',
  /* field_building_floor_room */   'dependent' => 'field_building_floor_room',
  /* field_building_floor_room */   'dependee' => 'field_event_location',
  /* field_building_floor_room */   'options' => array(
  /* field_building_floor_room */     'state' => 'visible',
  /* field_building_floor_room */     'condition' => 'value',
  /* field_building_floor_room */     'grouping' => 'AND',
  /* field_building_floor_room */     'effect' => 'show',
  /* field_building_floor_room */     'effect_options' => array(),
  /* field_building_floor_room */     'element_view' => array(
  /* field_building_floor_room */       1 => 1,
  /* field_building_floor_room */       2 => 2,
  /* field_building_floor_room */       5 => 0,
  /* field_building_floor_room */       3 => 0,
  /* field_building_floor_room */       4 => 0,
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'element_view_per_role' => 0,
  /* field_building_floor_room */     'element_view_roles' => array(
  /* field_building_floor_room */       1 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         2 => 2,
  /* field_building_floor_room */         5 => 0,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */         4 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       2 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         2 => 2,
  /* field_building_floor_room */         5 => 0,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */         4 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       9 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         2 => 2,
  /* field_building_floor_room */         5 => 0,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */         4 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'element_edit' => array(
  /* field_building_floor_room */       1 => 1,
  /* field_building_floor_room */       3 => 3,
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'element_edit_per_role' => 0,
  /* field_building_floor_room */     'element_edit_roles' => array(
  /* field_building_floor_room */       1 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       2 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       9 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'selector' => '',
  /* field_building_floor_room */     'values_set' => 1,
  /* field_building_floor_room */     'value_form' => 'in_person',
  /* field_building_floor_room */     'value' => array(
  /* field_building_floor_room */       0 => array(
  /* field_building_floor_room */         'value' => 'in_person',
  /* field_building_floor_room */       ),
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'values' => array(),
  /* field_building_floor_room */   ),
  /* field_building_floor_room */ );

  /* field_building_floor_room */ $items[] = array(
  /* field_building_floor_room */   'entity' => 'node',
  /* field_building_floor_room */   'bundle' => 'event',
  /* field_building_floor_room */   'dependent' => 'field_building_floor_room',
  /* field_building_floor_room */   'dependee' => 'field_event_location',
  /* field_building_floor_room */   'options' => array(
  /* field_building_floor_room */     'state' => 'visible',
  /* field_building_floor_room */     'condition' => 'value',
  /* field_building_floor_room */     'grouping' => 'AND',
  /* field_building_floor_room */     'effect' => 'show',
  /* field_building_floor_room */     'effect_options' => array(),
  /* field_building_floor_room */     'element_view' => array(
  /* field_building_floor_room */       1 => 1,
  /* field_building_floor_room */       2 => 2,
  /* field_building_floor_room */       5 => 0,
  /* field_building_floor_room */       3 => 0,
  /* field_building_floor_room */       4 => 0,
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'element_view_per_role' => 0,
  /* field_building_floor_room */     'element_view_roles' => array(
  /* field_building_floor_room */       1 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         2 => 2,
  /* field_building_floor_room */         5 => 0,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */         4 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       2 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         2 => 2,
  /* field_building_floor_room */         5 => 0,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */         4 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       9 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         2 => 2,
  /* field_building_floor_room */         5 => 0,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */         4 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'element_edit' => array(
  /* field_building_floor_room */       1 => 1,
  /* field_building_floor_room */       3 => 3,
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'element_edit_per_role' => 0,
  /* field_building_floor_room */     'element_edit_roles' => array(
  /* field_building_floor_room */       1 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       2 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */       9 => array(
  /* field_building_floor_room */         1 => 1,
  /* field_building_floor_room */         3 => 0,
  /* field_building_floor_room */       ),
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'selector' => '',
  /* field_building_floor_room */     'values_set' => 1,
  /* field_building_floor_room */     'value_form' => 'in_person',
  /* field_building_floor_room */     'value' => array(
  /* field_building_floor_room */       0 => array(
  /* field_building_floor_room */         'value' => 'in_person',
  /* field_building_floor_room */       ),
  /* field_building_floor_room */     ),
  /* field_building_floor_room */     'values' => array(),
  /* field_building_floor_room */   ),
  /* field_building_floor_room */ );

  /* field_event_address */ $items[] = array(
  /* field_event_address */   'entity' => 'node',
  /* field_event_address */   'bundle' => 'event',
  /* field_event_address */   'dependent' => 'field_event_address',
  /* field_event_address */   'dependee' => 'field_event_location',
  /* field_event_address */   'options' => array(
  /* field_event_address */     'state' => 'visible',
  /* field_event_address */     'condition' => 'value',
  /* field_event_address */     'grouping' => 'AND',
  /* field_event_address */     'effect' => 'show',
  /* field_event_address */     'effect_options' => array(),
  /* field_event_address */     'element_view' => array(
  /* field_event_address */       1 => 1,
  /* field_event_address */       2 => 2,
  /* field_event_address */       5 => 0,
  /* field_event_address */       3 => 0,
  /* field_event_address */       4 => 0,
  /* field_event_address */     ),
  /* field_event_address */     'element_view_per_role' => 0,
  /* field_event_address */     'element_view_roles' => array(
  /* field_event_address */       1 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         2 => 2,
  /* field_event_address */         5 => 0,
  /* field_event_address */         3 => 0,
  /* field_event_address */         4 => 0,
  /* field_event_address */       ),
  /* field_event_address */       2 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         2 => 2,
  /* field_event_address */         5 => 0,
  /* field_event_address */         3 => 0,
  /* field_event_address */         4 => 0,
  /* field_event_address */       ),
  /* field_event_address */       9 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         2 => 2,
  /* field_event_address */         5 => 0,
  /* field_event_address */         3 => 0,
  /* field_event_address */         4 => 0,
  /* field_event_address */       ),
  /* field_event_address */     ),
  /* field_event_address */     'element_edit' => array(
  /* field_event_address */       1 => 1,
  /* field_event_address */       3 => 3,
  /* field_event_address */     ),
  /* field_event_address */     'element_edit_per_role' => 0,
  /* field_event_address */     'element_edit_roles' => array(
  /* field_event_address */       1 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         3 => 0,
  /* field_event_address */       ),
  /* field_event_address */       2 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         3 => 0,
  /* field_event_address */       ),
  /* field_event_address */       9 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         3 => 0,
  /* field_event_address */       ),
  /* field_event_address */     ),
  /* field_event_address */     'selector' => '',
  /* field_event_address */     'values_set' => 1,
  /* field_event_address */     'value_form' => 'in_person',
  /* field_event_address */     'value' => array(
  /* field_event_address */       0 => array(
  /* field_event_address */         'value' => 'in_person',
  /* field_event_address */       ),
  /* field_event_address */     ),
  /* field_event_address */     'values' => array(),
  /* field_event_address */   ),
  /* field_event_address */ );

  /* field_event_address */ $items[] = array(
  /* field_event_address */   'entity' => 'node',
  /* field_event_address */   'bundle' => 'event',
  /* field_event_address */   'dependent' => 'field_event_address',
  /* field_event_address */   'dependee' => 'field_event_location',
  /* field_event_address */   'options' => array(
  /* field_event_address */     'state' => 'visible',
  /* field_event_address */     'condition' => 'value',
  /* field_event_address */     'grouping' => 'AND',
  /* field_event_address */     'effect' => 'show',
  /* field_event_address */     'effect_options' => array(),
  /* field_event_address */     'element_view' => array(
  /* field_event_address */       1 => 1,
  /* field_event_address */       2 => 2,
  /* field_event_address */       5 => 0,
  /* field_event_address */       3 => 0,
  /* field_event_address */       4 => 0,
  /* field_event_address */     ),
  /* field_event_address */     'element_view_per_role' => 0,
  /* field_event_address */     'element_view_roles' => array(
  /* field_event_address */       1 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         2 => 2,
  /* field_event_address */         5 => 0,
  /* field_event_address */         3 => 0,
  /* field_event_address */         4 => 0,
  /* field_event_address */       ),
  /* field_event_address */       2 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         2 => 2,
  /* field_event_address */         5 => 0,
  /* field_event_address */         3 => 0,
  /* field_event_address */         4 => 0,
  /* field_event_address */       ),
  /* field_event_address */       9 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         2 => 2,
  /* field_event_address */         5 => 0,
  /* field_event_address */         3 => 0,
  /* field_event_address */         4 => 0,
  /* field_event_address */       ),
  /* field_event_address */     ),
  /* field_event_address */     'element_edit' => array(
  /* field_event_address */       1 => 1,
  /* field_event_address */       3 => 3,
  /* field_event_address */     ),
  /* field_event_address */     'element_edit_per_role' => 0,
  /* field_event_address */     'element_edit_roles' => array(
  /* field_event_address */       1 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         3 => 0,
  /* field_event_address */       ),
  /* field_event_address */       2 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         3 => 0,
  /* field_event_address */       ),
  /* field_event_address */       9 => array(
  /* field_event_address */         1 => 1,
  /* field_event_address */         3 => 0,
  /* field_event_address */       ),
  /* field_event_address */     ),
  /* field_event_address */     'selector' => '',
  /* field_event_address */     'values_set' => 1,
  /* field_event_address */     'value_form' => 'in_person',
  /* field_event_address */     'value' => array(
  /* field_event_address */       0 => array(
  /* field_event_address */         'value' => 'in_person',
  /* field_event_address */       ),
  /* field_event_address */     ),
  /* field_event_address */     'values' => array(),
  /* field_event_address */   ),
  /* field_event_address */ );

  /* field_event_telephone_number */ $items[] = array(
  /* field_event_telephone_number */   'entity' => 'node',
  /* field_event_telephone_number */   'bundle' => 'event',
  /* field_event_telephone_number */   'dependent' => 'field_event_telephone_number',
  /* field_event_telephone_number */   'dependee' => 'field_event_location',
  /* field_event_telephone_number */   'options' => array(
  /* field_event_telephone_number */     'state' => 'visible',
  /* field_event_telephone_number */     'condition' => 'value',
  /* field_event_telephone_number */     'grouping' => 'AND',
  /* field_event_telephone_number */     'effect' => 'fade',
  /* field_event_telephone_number */     'effect_options' => array(
  /* field_event_telephone_number */       'speed' => 400,
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_view' => array(
  /* field_event_telephone_number */       1 => 1,
  /* field_event_telephone_number */       2 => 2,
  /* field_event_telephone_number */       5 => 0,
  /* field_event_telephone_number */       3 => 0,
  /* field_event_telephone_number */       4 => 0,
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_view_per_role' => 0,
  /* field_event_telephone_number */     'element_view_roles' => array(
  /* field_event_telephone_number */       1 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       2 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       9 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       10 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_edit' => array(
  /* field_event_telephone_number */       1 => 1,
  /* field_event_telephone_number */       3 => 3,
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_edit_per_role' => 0,
  /* field_event_telephone_number */     'element_edit_roles' => array(
  /* field_event_telephone_number */       1 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       2 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       9 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       10 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 3,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'selector' => '',
  /* field_event_telephone_number */     'values_set' => 3,
  /* field_event_telephone_number */     'value_form' => '_none',
  /* field_event_telephone_number */     'values' => array(
  /* field_event_telephone_number */       0 => 'online',
  /* field_event_telephone_number */       1 => 'telephone',
  /* field_event_telephone_number */       2 => 'adobe_moderated',
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'value' => array(),
  /* field_event_telephone_number */   ),
  /* field_event_telephone_number */ );

  /* field_event_telephone_number */ $items[] = array(
  /* field_event_telephone_number */   'entity' => 'node',
  /* field_event_telephone_number */   'bundle' => 'event',
  /* field_event_telephone_number */   'dependent' => 'field_event_telephone_number',
  /* field_event_telephone_number */   'dependee' => 'field_event_location',
  /* field_event_telephone_number */   'options' => array(
  /* field_event_telephone_number */     'state' => 'visible',
  /* field_event_telephone_number */     'condition' => 'value',
  /* field_event_telephone_number */     'grouping' => 'AND',
  /* field_event_telephone_number */     'effect' => 'fade',
  /* field_event_telephone_number */     'effect_options' => array(
  /* field_event_telephone_number */       'speed' => 400,
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_view' => array(
  /* field_event_telephone_number */       1 => 1,
  /* field_event_telephone_number */       2 => 2,
  /* field_event_telephone_number */       5 => 0,
  /* field_event_telephone_number */       3 => 0,
  /* field_event_telephone_number */       4 => 0,
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_view_per_role' => 0,
  /* field_event_telephone_number */     'element_view_roles' => array(
  /* field_event_telephone_number */       1 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       2 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       9 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       10 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         2 => 2,
  /* field_event_telephone_number */         5 => 0,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */         4 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_edit' => array(
  /* field_event_telephone_number */       1 => 1,
  /* field_event_telephone_number */       3 => 3,
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'element_edit_per_role' => 0,
  /* field_event_telephone_number */     'element_edit_roles' => array(
  /* field_event_telephone_number */       1 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       2 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       9 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 0,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */       10 => array(
  /* field_event_telephone_number */         1 => 1,
  /* field_event_telephone_number */         3 => 3,
  /* field_event_telephone_number */       ),
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'selector' => '',
  /* field_event_telephone_number */     'values_set' => 3,
  /* field_event_telephone_number */     'value_form' => '_none',
  /* field_event_telephone_number */     'values' => array(
  /* field_event_telephone_number */       0 => 'online',
  /* field_event_telephone_number */       1 => 'telephone',
  /* field_event_telephone_number */       2 => 'adobe_moderated',
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */     'value' => array(),
  /* field_event_telephone_number */   ),
  /* field_event_telephone_number */ );

  /* field_event_telephone_pin */ $items[] = array(
  /* field_event_telephone_pin */   'entity' => 'node',
  /* field_event_telephone_pin */   'bundle' => 'event',
  /* field_event_telephone_pin */   'dependent' => 'field_event_telephone_pin',
  /* field_event_telephone_pin */   'dependee' => 'field_event_location',
  /* field_event_telephone_pin */   'options' => array(
  /* field_event_telephone_pin */     'state' => 'visible',
  /* field_event_telephone_pin */     'condition' => 'value',
  /* field_event_telephone_pin */     'grouping' => 'AND',
  /* field_event_telephone_pin */     'effect' => 'fade',
  /* field_event_telephone_pin */     'effect_options' => array(
  /* field_event_telephone_pin */       'speed' => 400,
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_view' => array(
  /* field_event_telephone_pin */       1 => 1,
  /* field_event_telephone_pin */       2 => 2,
  /* field_event_telephone_pin */       5 => 0,
  /* field_event_telephone_pin */       3 => 0,
  /* field_event_telephone_pin */       4 => 0,
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_view_per_role' => 0,
  /* field_event_telephone_pin */     'element_view_roles' => array(
  /* field_event_telephone_pin */       1 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       2 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       9 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       10 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_edit' => array(
  /* field_event_telephone_pin */       1 => 1,
  /* field_event_telephone_pin */       3 => 3,
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_edit_per_role' => 0,
  /* field_event_telephone_pin */     'element_edit_roles' => array(
  /* field_event_telephone_pin */       1 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       2 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       9 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       10 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 3,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'selector' => '',
  /* field_event_telephone_pin */     'values_set' => 3,
  /* field_event_telephone_pin */     'value_form' => '_none',
  /* field_event_telephone_pin */     'values' => array(
  /* field_event_telephone_pin */       0 => 'online',
  /* field_event_telephone_pin */       1 => 'telephone',
  /* field_event_telephone_pin */       2 => 'adobe_moderated',
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'value' => array(),
  /* field_event_telephone_pin */   ),
  /* field_event_telephone_pin */ );

  /* field_event_telephone_pin */ $items[] = array(
  /* field_event_telephone_pin */   'entity' => 'node',
  /* field_event_telephone_pin */   'bundle' => 'event',
  /* field_event_telephone_pin */   'dependent' => 'field_event_telephone_pin',
  /* field_event_telephone_pin */   'dependee' => 'field_event_location',
  /* field_event_telephone_pin */   'options' => array(
  /* field_event_telephone_pin */     'state' => 'visible',
  /* field_event_telephone_pin */     'condition' => 'value',
  /* field_event_telephone_pin */     'grouping' => 'AND',
  /* field_event_telephone_pin */     'effect' => 'fade',
  /* field_event_telephone_pin */     'effect_options' => array(
  /* field_event_telephone_pin */       'speed' => 400,
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_view' => array(
  /* field_event_telephone_pin */       1 => 1,
  /* field_event_telephone_pin */       2 => 2,
  /* field_event_telephone_pin */       5 => 0,
  /* field_event_telephone_pin */       3 => 0,
  /* field_event_telephone_pin */       4 => 0,
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_view_per_role' => 0,
  /* field_event_telephone_pin */     'element_view_roles' => array(
  /* field_event_telephone_pin */       1 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       2 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       9 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       10 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         2 => 2,
  /* field_event_telephone_pin */         5 => 0,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */         4 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_edit' => array(
  /* field_event_telephone_pin */       1 => 1,
  /* field_event_telephone_pin */       3 => 3,
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'element_edit_per_role' => 0,
  /* field_event_telephone_pin */     'element_edit_roles' => array(
  /* field_event_telephone_pin */       1 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       2 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       9 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 0,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */       10 => array(
  /* field_event_telephone_pin */         1 => 1,
  /* field_event_telephone_pin */         3 => 3,
  /* field_event_telephone_pin */       ),
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'selector' => '',
  /* field_event_telephone_pin */     'values_set' => 3,
  /* field_event_telephone_pin */     'value_form' => '_none',
  /* field_event_telephone_pin */     'values' => array(
  /* field_event_telephone_pin */       0 => 'online',
  /* field_event_telephone_pin */       1 => 'telephone',
  /* field_event_telephone_pin */       2 => 'adobe_moderated',
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */     'value' => array(),
  /* field_event_telephone_pin */   ),
  /* field_event_telephone_pin */ );

  /* field_location_venue_name */ $items[] = array(
  /* field_location_venue_name */   'entity' => 'node',
  /* field_location_venue_name */   'bundle' => 'event',
  /* field_location_venue_name */   'dependent' => 'field_location_venue_name',
  /* field_location_venue_name */   'dependee' => 'field_event_location',
  /* field_location_venue_name */   'options' => array(
  /* field_location_venue_name */     'state' => 'visible',
  /* field_location_venue_name */     'condition' => 'value',
  /* field_location_venue_name */     'grouping' => 'AND',
  /* field_location_venue_name */     'effect' => 'show',
  /* field_location_venue_name */     'effect_options' => array(),
  /* field_location_venue_name */     'element_view' => array(
  /* field_location_venue_name */       1 => 1,
  /* field_location_venue_name */       2 => 2,
  /* field_location_venue_name */       5 => 0,
  /* field_location_venue_name */       3 => 0,
  /* field_location_venue_name */       4 => 0,
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'element_view_per_role' => 0,
  /* field_location_venue_name */     'element_view_roles' => array(
  /* field_location_venue_name */       1 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         2 => 2,
  /* field_location_venue_name */         5 => 0,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */         4 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       2 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         2 => 2,
  /* field_location_venue_name */         5 => 0,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */         4 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       9 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         2 => 2,
  /* field_location_venue_name */         5 => 0,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */         4 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'element_edit' => array(
  /* field_location_venue_name */       1 => 1,
  /* field_location_venue_name */       3 => 3,
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'element_edit_per_role' => 0,
  /* field_location_venue_name */     'element_edit_roles' => array(
  /* field_location_venue_name */       1 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       2 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       9 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'selector' => '',
  /* field_location_venue_name */     'values_set' => 1,
  /* field_location_venue_name */     'value_form' => 'in_person',
  /* field_location_venue_name */     'value' => array(
  /* field_location_venue_name */       0 => array(
  /* field_location_venue_name */         'value' => 'in_person',
  /* field_location_venue_name */       ),
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'values' => array(),
  /* field_location_venue_name */   ),
  /* field_location_venue_name */ );

  /* field_location_venue_name */ $items[] = array(
  /* field_location_venue_name */   'entity' => 'node',
  /* field_location_venue_name */   'bundle' => 'event',
  /* field_location_venue_name */   'dependent' => 'field_location_venue_name',
  /* field_location_venue_name */   'dependee' => 'field_event_location',
  /* field_location_venue_name */   'options' => array(
  /* field_location_venue_name */     'state' => 'visible',
  /* field_location_venue_name */     'condition' => 'value',
  /* field_location_venue_name */     'grouping' => 'AND',
  /* field_location_venue_name */     'effect' => 'show',
  /* field_location_venue_name */     'effect_options' => array(),
  /* field_location_venue_name */     'element_view' => array(
  /* field_location_venue_name */       1 => 1,
  /* field_location_venue_name */       2 => 2,
  /* field_location_venue_name */       5 => 0,
  /* field_location_venue_name */       3 => 0,
  /* field_location_venue_name */       4 => 0,
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'element_view_per_role' => 0,
  /* field_location_venue_name */     'element_view_roles' => array(
  /* field_location_venue_name */       1 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         2 => 2,
  /* field_location_venue_name */         5 => 0,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */         4 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       2 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         2 => 2,
  /* field_location_venue_name */         5 => 0,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */         4 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       9 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         2 => 2,
  /* field_location_venue_name */         5 => 0,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */         4 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'element_edit' => array(
  /* field_location_venue_name */       1 => 1,
  /* field_location_venue_name */       3 => 3,
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'element_edit_per_role' => 0,
  /* field_location_venue_name */     'element_edit_roles' => array(
  /* field_location_venue_name */       1 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       2 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */       9 => array(
  /* field_location_venue_name */         1 => 1,
  /* field_location_venue_name */         3 => 0,
  /* field_location_venue_name */       ),
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'selector' => '',
  /* field_location_venue_name */     'values_set' => 1,
  /* field_location_venue_name */     'value_form' => 'in_person',
  /* field_location_venue_name */     'value' => array(
  /* field_location_venue_name */       0 => array(
  /* field_location_venue_name */         'value' => 'in_person',
  /* field_location_venue_name */       ),
  /* field_location_venue_name */     ),
  /* field_location_venue_name */     'values' => array(),
  /* field_location_venue_name */   ),
  /* field_location_venue_name */ );

  /* field_other_location_details */ $items[] = array(
  /* field_other_location_details */   'entity' => 'node',
  /* field_other_location_details */   'bundle' => 'event',
  /* field_other_location_details */   'dependent' => 'field_other_location_details',
  /* field_other_location_details */   'dependee' => 'field_event_location',
  /* field_other_location_details */   'options' => array(
  /* field_other_location_details */     'state' => 'visible',
  /* field_other_location_details */     'condition' => 'value',
  /* field_other_location_details */     'grouping' => 'AND',
  /* field_other_location_details */     'effect' => 'show',
  /* field_other_location_details */     'effect_options' => array(),
  /* field_other_location_details */     'element_view' => array(
  /* field_other_location_details */       1 => 1,
  /* field_other_location_details */       2 => 2,
  /* field_other_location_details */       5 => 0,
  /* field_other_location_details */       3 => 0,
  /* field_other_location_details */       4 => 0,
  /* field_other_location_details */     ),
  /* field_other_location_details */     'element_view_per_role' => 0,
  /* field_other_location_details */     'element_view_roles' => array(
  /* field_other_location_details */       1 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         2 => 2,
  /* field_other_location_details */         5 => 0,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */         4 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       2 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         2 => 2,
  /* field_other_location_details */         5 => 0,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */         4 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       9 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         2 => 2,
  /* field_other_location_details */         5 => 0,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */         4 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */     ),
  /* field_other_location_details */     'element_edit' => array(
  /* field_other_location_details */       1 => 1,
  /* field_other_location_details */       3 => 3,
  /* field_other_location_details */     ),
  /* field_other_location_details */     'element_edit_per_role' => 0,
  /* field_other_location_details */     'element_edit_roles' => array(
  /* field_other_location_details */       1 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       2 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       9 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */     ),
  /* field_other_location_details */     'selector' => '',
  /* field_other_location_details */     'values_set' => 1,
  /* field_other_location_details */     'value_form' => 'in_person',
  /* field_other_location_details */     'value' => array(
  /* field_other_location_details */       0 => array(
  /* field_other_location_details */         'value' => 'in_person',
  /* field_other_location_details */       ),
  /* field_other_location_details */     ),
  /* field_other_location_details */     'values' => array(),
  /* field_other_location_details */   ),
  /* field_other_location_details */ );

  /* field_other_location_details */ $items[] = array(
  /* field_other_location_details */   'entity' => 'node',
  /* field_other_location_details */   'bundle' => 'event',
  /* field_other_location_details */   'dependent' => 'field_other_location_details',
  /* field_other_location_details */   'dependee' => 'field_event_location',
  /* field_other_location_details */   'options' => array(
  /* field_other_location_details */     'state' => 'visible',
  /* field_other_location_details */     'condition' => 'value',
  /* field_other_location_details */     'grouping' => 'AND',
  /* field_other_location_details */     'effect' => 'show',
  /* field_other_location_details */     'effect_options' => array(),
  /* field_other_location_details */     'element_view' => array(
  /* field_other_location_details */       1 => 1,
  /* field_other_location_details */       2 => 2,
  /* field_other_location_details */       5 => 0,
  /* field_other_location_details */       3 => 0,
  /* field_other_location_details */       4 => 0,
  /* field_other_location_details */     ),
  /* field_other_location_details */     'element_view_per_role' => 0,
  /* field_other_location_details */     'element_view_roles' => array(
  /* field_other_location_details */       1 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         2 => 2,
  /* field_other_location_details */         5 => 0,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */         4 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       2 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         2 => 2,
  /* field_other_location_details */         5 => 0,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */         4 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       9 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         2 => 2,
  /* field_other_location_details */         5 => 0,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */         4 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */     ),
  /* field_other_location_details */     'element_edit' => array(
  /* field_other_location_details */       1 => 1,
  /* field_other_location_details */       3 => 3,
  /* field_other_location_details */     ),
  /* field_other_location_details */     'element_edit_per_role' => 0,
  /* field_other_location_details */     'element_edit_roles' => array(
  /* field_other_location_details */       1 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       2 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */       9 => array(
  /* field_other_location_details */         1 => 1,
  /* field_other_location_details */         3 => 0,
  /* field_other_location_details */       ),
  /* field_other_location_details */     ),
  /* field_other_location_details */     'selector' => '',
  /* field_other_location_details */     'values_set' => 1,
  /* field_other_location_details */     'value_form' => 'in_person',
  /* field_other_location_details */     'value' => array(
  /* field_other_location_details */       0 => array(
  /* field_other_location_details */         'value' => 'in_person',
  /* field_other_location_details */       ),
  /* field_other_location_details */     ),
  /* field_other_location_details */     'values' => array(),
  /* field_other_location_details */   ),
  /* field_other_location_details */ );

  /* field_web_conference_detail */ $items[] = array(
  /* field_web_conference_detail */   'entity' => 'node',
  /* field_web_conference_detail */   'bundle' => 'event',
  /* field_web_conference_detail */   'dependent' => 'field_web_conference_detail',
  /* field_web_conference_detail */   'dependee' => 'field_event_location',
  /* field_web_conference_detail */   'options' => array(
  /* field_web_conference_detail */     'state' => 'visible',
  /* field_web_conference_detail */     'condition' => 'value',
  /* field_web_conference_detail */     'grouping' => 'AND',
  /* field_web_conference_detail */     'effect' => 'show',
  /* field_web_conference_detail */     'effect_options' => array(),
  /* field_web_conference_detail */     'element_view' => array(
  /* field_web_conference_detail */       1 => 1,
  /* field_web_conference_detail */       2 => 2,
  /* field_web_conference_detail */       5 => 0,
  /* field_web_conference_detail */       3 => 0,
  /* field_web_conference_detail */       4 => 0,
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'element_view_per_role' => 0,
  /* field_web_conference_detail */     'element_view_roles' => array(
  /* field_web_conference_detail */       1 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         2 => 2,
  /* field_web_conference_detail */         5 => 0,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */         4 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       2 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         2 => 2,
  /* field_web_conference_detail */         5 => 0,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */         4 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       9 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         2 => 2,
  /* field_web_conference_detail */         5 => 0,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */         4 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'element_edit' => array(
  /* field_web_conference_detail */       1 => 1,
  /* field_web_conference_detail */       3 => 3,
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'element_edit_per_role' => 0,
  /* field_web_conference_detail */     'element_edit_roles' => array(
  /* field_web_conference_detail */       1 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       2 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       9 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'selector' => '',
  /* field_web_conference_detail */     'values_set' => 1,
  /* field_web_conference_detail */     'value_form' => 'online',
  /* field_web_conference_detail */     'value' => array(
  /* field_web_conference_detail */       0 => array(
  /* field_web_conference_detail */         'value' => 'online',
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'values' => array(),
  /* field_web_conference_detail */   ),
  /* field_web_conference_detail */ );

  /* field_web_conference_detail */ $items[] = array(
  /* field_web_conference_detail */   'entity' => 'node',
  /* field_web_conference_detail */   'bundle' => 'event',
  /* field_web_conference_detail */   'dependent' => 'field_web_conference_detail',
  /* field_web_conference_detail */   'dependee' => 'field_event_location',
  /* field_web_conference_detail */   'options' => array(
  /* field_web_conference_detail */     'state' => 'visible',
  /* field_web_conference_detail */     'condition' => 'value',
  /* field_web_conference_detail */     'grouping' => 'AND',
  /* field_web_conference_detail */     'effect' => 'show',
  /* field_web_conference_detail */     'effect_options' => array(),
  /* field_web_conference_detail */     'element_view' => array(
  /* field_web_conference_detail */       1 => 1,
  /* field_web_conference_detail */       2 => 2,
  /* field_web_conference_detail */       5 => 0,
  /* field_web_conference_detail */       3 => 0,
  /* field_web_conference_detail */       4 => 0,
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'element_view_per_role' => 0,
  /* field_web_conference_detail */     'element_view_roles' => array(
  /* field_web_conference_detail */       1 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         2 => 2,
  /* field_web_conference_detail */         5 => 0,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */         4 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       2 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         2 => 2,
  /* field_web_conference_detail */         5 => 0,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */         4 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       9 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         2 => 2,
  /* field_web_conference_detail */         5 => 0,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */         4 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'element_edit' => array(
  /* field_web_conference_detail */       1 => 1,
  /* field_web_conference_detail */       3 => 3,
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'element_edit_per_role' => 0,
  /* field_web_conference_detail */     'element_edit_roles' => array(
  /* field_web_conference_detail */       1 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       2 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */       9 => array(
  /* field_web_conference_detail */         1 => 1,
  /* field_web_conference_detail */         3 => 0,
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'selector' => '',
  /* field_web_conference_detail */     'values_set' => 1,
  /* field_web_conference_detail */     'value_form' => 'online',
  /* field_web_conference_detail */     'value' => array(
  /* field_web_conference_detail */       0 => array(
  /* field_web_conference_detail */         'value' => 'online',
  /* field_web_conference_detail */       ),
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */     'values' => array(),
  /* field_web_conference_detail */   ),
  /* field_web_conference_detail */ );

  /* field_notification_recipients */ $items[] = array(
  /* field_notification_recipients */   'entity' => 'node',
  /* field_notification_recipients */   'bundle' => 'event',
  /* field_notification_recipients */   'dependent' => 'field_notification_recipients',
  /* field_notification_recipients */   'dependee' => 'field_registration',
  /* field_notification_recipients */   'options' => array(
  /* field_notification_recipients */     'state' => 'visible',
  /* field_notification_recipients */     'condition' => 'value',
  /* field_notification_recipients */     'grouping' => 'AND',
  /* field_notification_recipients */     'effect' => 'show',
  /* field_notification_recipients */     'effect_options' => array(),
  /* field_notification_recipients */     'element_view' => array(
  /* field_notification_recipients */       1 => 1,
  /* field_notification_recipients */       2 => 2,
  /* field_notification_recipients */       5 => 0,
  /* field_notification_recipients */       3 => 0,
  /* field_notification_recipients */       4 => 0,
  /* field_notification_recipients */     ),
  /* field_notification_recipients */     'element_view_per_role' => 0,
  /* field_notification_recipients */     'element_view_roles' => array(
  /* field_notification_recipients */       1 => array(
  /* field_notification_recipients */         1 => 1,
  /* field_notification_recipients */         2 => 2,
  /* field_notification_recipients */         5 => 0,
  /* field_notification_recipients */         3 => 0,
  /* field_notification_recipients */         4 => 0,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */       2 => array(
  /* field_notification_recipients */         1 => 1,
  /* field_notification_recipients */         2 => 2,
  /* field_notification_recipients */         5 => 0,
  /* field_notification_recipients */         3 => 0,
  /* field_notification_recipients */         4 => 0,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */       9 => array(
  /* field_notification_recipients */         1 => 1,
  /* field_notification_recipients */         2 => 2,
  /* field_notification_recipients */         5 => 0,
  /* field_notification_recipients */         3 => 0,
  /* field_notification_recipients */         4 => 0,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */     ),
  /* field_notification_recipients */     'element_edit' => array(
  /* field_notification_recipients */       1 => 1,
  /* field_notification_recipients */       3 => 0,
  /* field_notification_recipients */     ),
  /* field_notification_recipients */     'element_edit_per_role' => 0,
  /* field_notification_recipients */     'element_edit_roles' => array(
  /* field_notification_recipients */       1 => array(
  /* field_notification_recipients */         1 => 1,
  /* field_notification_recipients */         3 => 0,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */       2 => array(
  /* field_notification_recipients */         1 => 1,
  /* field_notification_recipients */         3 => 0,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */       9 => array(
  /* field_notification_recipients */         1 => 1,
  /* field_notification_recipients */         3 => 0,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */     ),
  /* field_notification_recipients */     'selector' => '',
  /* field_notification_recipients */     'values_set' => 1,
  /* field_notification_recipients */     'value_form' => 1,
  /* field_notification_recipients */     'value' => array(
  /* field_notification_recipients */       0 => array(
  /* field_notification_recipients */         'value' => 1,
  /* field_notification_recipients */       ),
  /* field_notification_recipients */     ),
  /* field_notification_recipients */     'values' => array(),
  /* field_notification_recipients */   ),
  /* field_notification_recipients */ );

  /* field_registration_limit */ $items[] = array(
  /* field_registration_limit */   'entity' => 'node',
  /* field_registration_limit */   'bundle' => 'event',
  /* field_registration_limit */   'dependent' => 'field_registration_limit',
  /* field_registration_limit */   'dependee' => 'field_registration',
  /* field_registration_limit */   'options' => array(
  /* field_registration_limit */     'state' => 'visible',
  /* field_registration_limit */     'condition' => 'value',
  /* field_registration_limit */     'grouping' => 'AND',
  /* field_registration_limit */     'effect' => 'show',
  /* field_registration_limit */     'effect_options' => array(),
  /* field_registration_limit */     'element_view' => array(
  /* field_registration_limit */       1 => 1,
  /* field_registration_limit */       2 => 2,
  /* field_registration_limit */       5 => 0,
  /* field_registration_limit */       3 => 0,
  /* field_registration_limit */       4 => 0,
  /* field_registration_limit */     ),
  /* field_registration_limit */     'element_view_per_role' => 0,
  /* field_registration_limit */     'element_view_roles' => array(
  /* field_registration_limit */       1 => array(
  /* field_registration_limit */         1 => 1,
  /* field_registration_limit */         2 => 2,
  /* field_registration_limit */         5 => 0,
  /* field_registration_limit */         3 => 0,
  /* field_registration_limit */         4 => 0,
  /* field_registration_limit */       ),
  /* field_registration_limit */       2 => array(
  /* field_registration_limit */         1 => 1,
  /* field_registration_limit */         2 => 2,
  /* field_registration_limit */         5 => 0,
  /* field_registration_limit */         3 => 0,
  /* field_registration_limit */         4 => 0,
  /* field_registration_limit */       ),
  /* field_registration_limit */       9 => array(
  /* field_registration_limit */         1 => 1,
  /* field_registration_limit */         2 => 2,
  /* field_registration_limit */         5 => 0,
  /* field_registration_limit */         3 => 0,
  /* field_registration_limit */         4 => 0,
  /* field_registration_limit */       ),
  /* field_registration_limit */     ),
  /* field_registration_limit */     'element_edit' => array(
  /* field_registration_limit */       1 => 1,
  /* field_registration_limit */       3 => 0,
  /* field_registration_limit */     ),
  /* field_registration_limit */     'element_edit_per_role' => 0,
  /* field_registration_limit */     'element_edit_roles' => array(
  /* field_registration_limit */       1 => array(
  /* field_registration_limit */         1 => 1,
  /* field_registration_limit */         3 => 0,
  /* field_registration_limit */       ),
  /* field_registration_limit */       2 => array(
  /* field_registration_limit */         1 => 1,
  /* field_registration_limit */         3 => 0,
  /* field_registration_limit */       ),
  /* field_registration_limit */       9 => array(
  /* field_registration_limit */         1 => 1,
  /* field_registration_limit */         3 => 0,
  /* field_registration_limit */       ),
  /* field_registration_limit */     ),
  /* field_registration_limit */     'selector' => '',
  /* field_registration_limit */     'values_set' => 1,
  /* field_registration_limit */     'value_form' => 1,
  /* field_registration_limit */     'value' => array(
  /* field_registration_limit */       0 => array(
  /* field_registration_limit */         'value' => 1,
  /* field_registration_limit */       ),
  /* field_registration_limit */     ),
  /* field_registration_limit */     'values' => array(),
  /* field_registration_limit */   ),
  /* field_registration_limit */ );

  /* field_registration_limit_number */ $items[] = array(
  /* field_registration_limit_number */   'entity' => 'node',
  /* field_registration_limit_number */   'bundle' => 'event',
  /* field_registration_limit_number */   'dependent' => 'field_registration_limit_number',
  /* field_registration_limit_number */   'dependee' => 'field_registration',
  /* field_registration_limit_number */   'options' => array(
  /* field_registration_limit_number */     'state' => 'visible',
  /* field_registration_limit_number */     'condition' => 'value',
  /* field_registration_limit_number */     'grouping' => 'AND',
  /* field_registration_limit_number */     'effect' => 'show',
  /* field_registration_limit_number */     'effect_options' => array(),
  /* field_registration_limit_number */     'element_view' => array(
  /* field_registration_limit_number */       1 => 1,
  /* field_registration_limit_number */       2 => 2,
  /* field_registration_limit_number */       5 => 0,
  /* field_registration_limit_number */       3 => 0,
  /* field_registration_limit_number */       4 => 0,
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'element_view_per_role' => 0,
  /* field_registration_limit_number */     'element_view_roles' => array(
  /* field_registration_limit_number */       1 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         2 => 2,
  /* field_registration_limit_number */         5 => 0,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */         4 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       2 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         2 => 2,
  /* field_registration_limit_number */         5 => 0,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */         4 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       9 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         2 => 2,
  /* field_registration_limit_number */         5 => 0,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */         4 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'element_edit' => array(
  /* field_registration_limit_number */       1 => 1,
  /* field_registration_limit_number */       3 => 0,
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'element_edit_per_role' => 0,
  /* field_registration_limit_number */     'element_edit_roles' => array(
  /* field_registration_limit_number */       1 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       2 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       9 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'selector' => '',
  /* field_registration_limit_number */     'values_set' => 1,
  /* field_registration_limit_number */     'value_form' => 1,
  /* field_registration_limit_number */     'value' => array(
  /* field_registration_limit_number */       0 => array(
  /* field_registration_limit_number */         'value' => 1,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'values' => array(),
  /* field_registration_limit_number */   ),
  /* field_registration_limit_number */ );

  /* field_registration_limit_number */ $items[] = array(
  /* field_registration_limit_number */   'entity' => 'node',
  /* field_registration_limit_number */   'bundle' => 'event',
  /* field_registration_limit_number */   'dependent' => 'field_registration_limit_number',
  /* field_registration_limit_number */   'dependee' => 'field_registration_limit',
  /* field_registration_limit_number */   'options' => array(
  /* field_registration_limit_number */     'state' => 'visible',
  /* field_registration_limit_number */     'condition' => 'value',
  /* field_registration_limit_number */     'grouping' => 'AND',
  /* field_registration_limit_number */     'effect' => 'show',
  /* field_registration_limit_number */     'effect_options' => array(),
  /* field_registration_limit_number */     'element_view' => array(
  /* field_registration_limit_number */       1 => 1,
  /* field_registration_limit_number */       2 => 2,
  /* field_registration_limit_number */       5 => 0,
  /* field_registration_limit_number */       3 => 0,
  /* field_registration_limit_number */       4 => 0,
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'element_view_per_role' => 0,
  /* field_registration_limit_number */     'element_view_roles' => array(
  /* field_registration_limit_number */       1 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         2 => 2,
  /* field_registration_limit_number */         5 => 0,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */         4 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       2 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         2 => 2,
  /* field_registration_limit_number */         5 => 0,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */         4 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       9 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         2 => 2,
  /* field_registration_limit_number */         5 => 0,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */         4 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'element_edit' => array(
  /* field_registration_limit_number */       1 => 1,
  /* field_registration_limit_number */       3 => 0,
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'element_edit_per_role' => 0,
  /* field_registration_limit_number */     'element_edit_roles' => array(
  /* field_registration_limit_number */       1 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       2 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */       9 => array(
  /* field_registration_limit_number */         1 => 1,
  /* field_registration_limit_number */         3 => 0,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'selector' => '',
  /* field_registration_limit_number */     'values_set' => 1,
  /* field_registration_limit_number */     'value_form' => 1,
  /* field_registration_limit_number */     'value' => array(
  /* field_registration_limit_number */       0 => array(
  /* field_registration_limit_number */         'value' => 1,
  /* field_registration_limit_number */       ),
  /* field_registration_limit_number */     ),
  /* field_registration_limit_number */     'values' => array(),
  /* field_registration_limit_number */   ),
  /* field_registration_limit_number */ );

  /* field_registration_list_visibili */ $items[] = array(
  /* field_registration_list_visibili */   'entity' => 'node',
  /* field_registration_list_visibili */   'bundle' => 'event',
  /* field_registration_list_visibili */   'dependent' => 'field_registration_list_visibili',
  /* field_registration_list_visibili */   'dependee' => 'field_registration',
  /* field_registration_list_visibili */   'options' => array(
  /* field_registration_list_visibili */     'state' => 'visible',
  /* field_registration_list_visibili */     'condition' => 'value',
  /* field_registration_list_visibili */     'grouping' => 'AND',
  /* field_registration_list_visibili */     'effect' => 'show',
  /* field_registration_list_visibili */     'effect_options' => array(),
  /* field_registration_list_visibili */     'element_view' => array(
  /* field_registration_list_visibili */       1 => 1,
  /* field_registration_list_visibili */       2 => 2,
  /* field_registration_list_visibili */       5 => 0,
  /* field_registration_list_visibili */       3 => 0,
  /* field_registration_list_visibili */       4 => 0,
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */     'element_view_per_role' => 0,
  /* field_registration_list_visibili */     'element_view_roles' => array(
  /* field_registration_list_visibili */       1 => array(
  /* field_registration_list_visibili */         1 => 1,
  /* field_registration_list_visibili */         2 => 2,
  /* field_registration_list_visibili */         5 => 0,
  /* field_registration_list_visibili */         3 => 0,
  /* field_registration_list_visibili */         4 => 0,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */       2 => array(
  /* field_registration_list_visibili */         1 => 1,
  /* field_registration_list_visibili */         2 => 2,
  /* field_registration_list_visibili */         5 => 0,
  /* field_registration_list_visibili */         3 => 0,
  /* field_registration_list_visibili */         4 => 0,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */       9 => array(
  /* field_registration_list_visibili */         1 => 1,
  /* field_registration_list_visibili */         2 => 2,
  /* field_registration_list_visibili */         5 => 0,
  /* field_registration_list_visibili */         3 => 0,
  /* field_registration_list_visibili */         4 => 0,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */     'element_edit' => array(
  /* field_registration_list_visibili */       1 => 1,
  /* field_registration_list_visibili */       3 => 0,
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */     'element_edit_per_role' => 0,
  /* field_registration_list_visibili */     'element_edit_roles' => array(
  /* field_registration_list_visibili */       1 => array(
  /* field_registration_list_visibili */         1 => 1,
  /* field_registration_list_visibili */         3 => 0,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */       2 => array(
  /* field_registration_list_visibili */         1 => 1,
  /* field_registration_list_visibili */         3 => 0,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */       9 => array(
  /* field_registration_list_visibili */         1 => 1,
  /* field_registration_list_visibili */         3 => 0,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */     'selector' => '',
  /* field_registration_list_visibili */     'values_set' => 1,
  /* field_registration_list_visibili */     'value_form' => 1,
  /* field_registration_list_visibili */     'value' => array(
  /* field_registration_list_visibili */       0 => array(
  /* field_registration_list_visibili */         'value' => 1,
  /* field_registration_list_visibili */       ),
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */     'values' => array(),
  /* field_registration_list_visibili */   ),
  /* field_registration_list_visibili */ );

  return $items;
}
