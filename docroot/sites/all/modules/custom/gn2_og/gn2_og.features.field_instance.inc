<?php
/**
 * @file
 * gn2_og.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_og_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-about_page-field_parent_organization'.
  $field_instances['node-about_page-field_parent_organization'] = array(
  /* node-about_page-field_parent_organization */   'bundle' => 'about_page',
  /* node-about_page-field_parent_organization */   'default_value' => NULL,
  /* node-about_page-field_parent_organization */   'default_value_function' => '',
  /* node-about_page-field_parent_organization */   'deleted' => 0,
  /* node-about_page-field_parent_organization */   'description' => '',
  /* node-about_page-field_parent_organization */   'display' => array(
  /* node-about_page-field_parent_organization */     'default' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'module' => 'entityreference',
  /* node-about_page-field_parent_organization */       'settings' => array(
  /* node-about_page-field_parent_organization */         'field_formatter_class' => '',
  /* node-about_page-field_parent_organization */         'link' => FALSE,
  /* node-about_page-field_parent_organization */       ),
  /* node-about_page-field_parent_organization */       'type' => 'entityreference_label',
  /* node-about_page-field_parent_organization */       'weight' => 16,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'events_list' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'one_column_teaser' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'search_teaser' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'sidebar_' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'teaser' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'teaserthumb' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'time_and_location' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'title_and_time' => array(
  /* node-about_page-field_parent_organization */       'label' => 'above',
  /* node-about_page-field_parent_organization */       'settings' => array(),
  /* node-about_page-field_parent_organization */       'type' => 'hidden',
  /* node-about_page-field_parent_organization */       'weight' => 0,
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */   ),
  /* node-about_page-field_parent_organization */   'entity_type' => 'node',
  /* node-about_page-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-about_page-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-about_page-field_parent_organization */   'label' => 'Parent Organization',
  /* node-about_page-field_parent_organization */   'required' => 0,
  /* node-about_page-field_parent_organization */   'settings' => array(
  /* node-about_page-field_parent_organization */     'behaviors' => array(
  /* node-about_page-field_parent_organization */       'prepopulate' => array(
  /* node-about_page-field_parent_organization */         'status' => 0,
  /* node-about_page-field_parent_organization */       ),
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'user_register_form' => FALSE,
  /* node-about_page-field_parent_organization */   ),
  /* node-about_page-field_parent_organization */   'widget' => array(
  /* node-about_page-field_parent_organization */     'active' => 1,
  /* node-about_page-field_parent_organization */     'module' => 'options',
  /* node-about_page-field_parent_organization */     'settings' => array(
  /* node-about_page-field_parent_organization */       'apply_chosen' => '',
  /* node-about_page-field_parent_organization */     ),
  /* node-about_page-field_parent_organization */     'type' => 'options_select',
  /* node-about_page-field_parent_organization */     'weight' => 6,
  /* node-about_page-field_parent_organization */   ),
  /* node-about_page-field_parent_organization */ );

  // Exported field_instance: 'node-alumni_group-field_children_groups'.
  $field_instances['node-alumni_group-field_children_groups'] = array(
  /* node-alumni_group-field_children_groups */   'bundle' => 'alumni_group',
  /* node-alumni_group-field_children_groups */   'default_value' => NULL,
  /* node-alumni_group-field_children_groups */   'default_value_function' => '',
  /* node-alumni_group-field_children_groups */   'deleted' => 0,
  /* node-alumni_group-field_children_groups */   'description' => '',
  /* node-alumni_group-field_children_groups */   'display' => array(
  /* node-alumni_group-field_children_groups */     'default' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'module' => 'entityreference',
  /* node-alumni_group-field_children_groups */       'settings' => array(
  /* node-alumni_group-field_children_groups */         'field_formatter_class' => '',
  /* node-alumni_group-field_children_groups */         'link' => FALSE,
  /* node-alumni_group-field_children_groups */       ),
  /* node-alumni_group-field_children_groups */       'type' => 'entityreference_label',
  /* node-alumni_group-field_children_groups */       'weight' => 17,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'group_teaser' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'settings' => array(),
  /* node-alumni_group-field_children_groups */       'type' => 'hidden',
  /* node-alumni_group-field_children_groups */       'weight' => 0,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'search_teaser' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'settings' => array(),
  /* node-alumni_group-field_children_groups */       'type' => 'hidden',
  /* node-alumni_group-field_children_groups */       'weight' => 0,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'sidebar_' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'settings' => array(),
  /* node-alumni_group-field_children_groups */       'type' => 'hidden',
  /* node-alumni_group-field_children_groups */       'weight' => 0,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'settings' => array(),
  /* node-alumni_group-field_children_groups */       'type' => 'hidden',
  /* node-alumni_group-field_children_groups */       'weight' => 0,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'teaser' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'settings' => array(),
  /* node-alumni_group-field_children_groups */       'type' => 'hidden',
  /* node-alumni_group-field_children_groups */       'weight' => 0,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'teaserthumb' => array(
  /* node-alumni_group-field_children_groups */       'label' => 'above',
  /* node-alumni_group-field_children_groups */       'settings' => array(),
  /* node-alumni_group-field_children_groups */       'type' => 'hidden',
  /* node-alumni_group-field_children_groups */       'weight' => 0,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */   ),
  /* node-alumni_group-field_children_groups */   'entity_type' => 'node',
  /* node-alumni_group-field_children_groups */   'fences_wrapper' => 'div',
  /* node-alumni_group-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-alumni_group-field_children_groups */   'label' => 'Children Groups',
  /* node-alumni_group-field_children_groups */   'required' => 0,
  /* node-alumni_group-field_children_groups */   'settings' => array(
  /* node-alumni_group-field_children_groups */     'behaviors' => array(
  /* node-alumni_group-field_children_groups */       'prepopulate' => array(
  /* node-alumni_group-field_children_groups */         'status' => 0,
  /* node-alumni_group-field_children_groups */       ),
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'user_register_form' => FALSE,
  /* node-alumni_group-field_children_groups */   ),
  /* node-alumni_group-field_children_groups */   'widget' => array(
  /* node-alumni_group-field_children_groups */     'active' => 1,
  /* node-alumni_group-field_children_groups */     'module' => 'entityreference',
  /* node-alumni_group-field_children_groups */     'settings' => array(
  /* node-alumni_group-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-alumni_group-field_children_groups */       'path' => '',
  /* node-alumni_group-field_children_groups */       'size' => 60,
  /* node-alumni_group-field_children_groups */     ),
  /* node-alumni_group-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-alumni_group-field_children_groups */     'weight' => 14,
  /* node-alumni_group-field_children_groups */   ),
  /* node-alumni_group-field_children_groups */ );

  // Exported field_instance: 'node-alumni_group-field_parent_organization'.
  $field_instances['node-alumni_group-field_parent_organization'] = array(
  /* node-alumni_group-field_parent_organization */   'bundle' => 'alumni_group',
  /* node-alumni_group-field_parent_organization */   'default_value' => NULL,
  /* node-alumni_group-field_parent_organization */   'default_value_function' => '',
  /* node-alumni_group-field_parent_organization */   'deleted' => 0,
  /* node-alumni_group-field_parent_organization */   'description' => '',
  /* node-alumni_group-field_parent_organization */   'display' => array(
  /* node-alumni_group-field_parent_organization */     'default' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'module' => 'entityreference',
  /* node-alumni_group-field_parent_organization */       'settings' => array(
  /* node-alumni_group-field_parent_organization */         'field_formatter_class' => '',
  /* node-alumni_group-field_parent_organization */         'link' => FALSE,
  /* node-alumni_group-field_parent_organization */       ),
  /* node-alumni_group-field_parent_organization */       'type' => 'entityreference_label',
  /* node-alumni_group-field_parent_organization */       'weight' => 16,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'group_teaser' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'module' => 'entityreference',
  /* node-alumni_group-field_parent_organization */       'settings' => array(
  /* node-alumni_group-field_parent_organization */         'field_formatter_class' => '',
  /* node-alumni_group-field_parent_organization */         'link' => FALSE,
  /* node-alumni_group-field_parent_organization */       ),
  /* node-alumni_group-field_parent_organization */       'type' => 'entityreference_label',
  /* node-alumni_group-field_parent_organization */       'weight' => 16,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'search_teaser' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'settings' => array(),
  /* node-alumni_group-field_parent_organization */       'type' => 'hidden',
  /* node-alumni_group-field_parent_organization */       'weight' => 0,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'sidebar_' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'settings' => array(),
  /* node-alumni_group-field_parent_organization */       'type' => 'hidden',
  /* node-alumni_group-field_parent_organization */       'weight' => 0,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'settings' => array(),
  /* node-alumni_group-field_parent_organization */       'type' => 'hidden',
  /* node-alumni_group-field_parent_organization */       'weight' => 0,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'teaser' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'settings' => array(),
  /* node-alumni_group-field_parent_organization */       'type' => 'hidden',
  /* node-alumni_group-field_parent_organization */       'weight' => 0,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'teaserthumb' => array(
  /* node-alumni_group-field_parent_organization */       'label' => 'above',
  /* node-alumni_group-field_parent_organization */       'settings' => array(),
  /* node-alumni_group-field_parent_organization */       'type' => 'hidden',
  /* node-alumni_group-field_parent_organization */       'weight' => 0,
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */   ),
  /* node-alumni_group-field_parent_organization */   'entity_type' => 'node',
  /* node-alumni_group-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-alumni_group-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-alumni_group-field_parent_organization */   'label' => 'Parent Organization',
  /* node-alumni_group-field_parent_organization */   'required' => 0,
  /* node-alumni_group-field_parent_organization */   'settings' => array(
  /* node-alumni_group-field_parent_organization */     'behaviors' => array(
  /* node-alumni_group-field_parent_organization */       'prepopulate' => array(
  /* node-alumni_group-field_parent_organization */         'status' => 0,
  /* node-alumni_group-field_parent_organization */       ),
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'user_register_form' => FALSE,
  /* node-alumni_group-field_parent_organization */   ),
  /* node-alumni_group-field_parent_organization */   'widget' => array(
  /* node-alumni_group-field_parent_organization */     'active' => 1,
  /* node-alumni_group-field_parent_organization */     'module' => 'options',
  /* node-alumni_group-field_parent_organization */     'settings' => array(
  /* node-alumni_group-field_parent_organization */       'apply_chosen' => '',
  /* node-alumni_group-field_parent_organization */     ),
  /* node-alumni_group-field_parent_organization */     'type' => 'options_select',
  /* node-alumni_group-field_parent_organization */     'weight' => 12,
  /* node-alumni_group-field_parent_organization */   ),
  /* node-alumni_group-field_parent_organization */ );

  // Exported field_instance: 'node-announcement-field_parent_organization'.
  $field_instances['node-announcement-field_parent_organization'] = array(
  /* node-announcement-field_parent_organization */   'bundle' => 'announcement',
  /* node-announcement-field_parent_organization */   'default_value' => NULL,
  /* node-announcement-field_parent_organization */   'default_value_function' => '',
  /* node-announcement-field_parent_organization */   'deleted' => 0,
  /* node-announcement-field_parent_organization */   'description' => '',
  /* node-announcement-field_parent_organization */   'display' => array(
  /* node-announcement-field_parent_organization */     'default' => array(
  /* node-announcement-field_parent_organization */       'label' => 'above',
  /* node-announcement-field_parent_organization */       'module' => 'entityreference',
  /* node-announcement-field_parent_organization */       'settings' => array(
  /* node-announcement-field_parent_organization */         'field_formatter_class' => '',
  /* node-announcement-field_parent_organization */         'link' => FALSE,
  /* node-announcement-field_parent_organization */       ),
  /* node-announcement-field_parent_organization */       'type' => 'entityreference_label',
  /* node-announcement-field_parent_organization */       'weight' => 26,
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'search_teaser' => array(
  /* node-announcement-field_parent_organization */       'label' => 'above',
  /* node-announcement-field_parent_organization */       'settings' => array(),
  /* node-announcement-field_parent_organization */       'type' => 'hidden',
  /* node-announcement-field_parent_organization */       'weight' => 0,
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'sidebar_' => array(
  /* node-announcement-field_parent_organization */       'label' => 'above',
  /* node-announcement-field_parent_organization */       'settings' => array(),
  /* node-announcement-field_parent_organization */       'type' => 'hidden',
  /* node-announcement-field_parent_organization */       'weight' => 0,
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-announcement-field_parent_organization */       'label' => 'above',
  /* node-announcement-field_parent_organization */       'settings' => array(),
  /* node-announcement-field_parent_organization */       'type' => 'hidden',
  /* node-announcement-field_parent_organization */       'weight' => 0,
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'teaser' => array(
  /* node-announcement-field_parent_organization */       'label' => 'above',
  /* node-announcement-field_parent_organization */       'settings' => array(),
  /* node-announcement-field_parent_organization */       'type' => 'hidden',
  /* node-announcement-field_parent_organization */       'weight' => 0,
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'teaserthumb' => array(
  /* node-announcement-field_parent_organization */       'label' => 'above',
  /* node-announcement-field_parent_organization */       'settings' => array(),
  /* node-announcement-field_parent_organization */       'type' => 'hidden',
  /* node-announcement-field_parent_organization */       'weight' => 0,
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */   ),
  /* node-announcement-field_parent_organization */   'entity_type' => 'node',
  /* node-announcement-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-announcement-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-announcement-field_parent_organization */   'label' => 'Parent Organization',
  /* node-announcement-field_parent_organization */   'required' => 0,
  /* node-announcement-field_parent_organization */   'settings' => array(
  /* node-announcement-field_parent_organization */     'behaviors' => array(
  /* node-announcement-field_parent_organization */       'prepopulate' => array(
  /* node-announcement-field_parent_organization */         'status' => 0,
  /* node-announcement-field_parent_organization */       ),
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'user_register_form' => FALSE,
  /* node-announcement-field_parent_organization */   ),
  /* node-announcement-field_parent_organization */   'widget' => array(
  /* node-announcement-field_parent_organization */     'active' => 1,
  /* node-announcement-field_parent_organization */     'module' => 'options',
  /* node-announcement-field_parent_organization */     'settings' => array(
  /* node-announcement-field_parent_organization */       'apply_chosen' => '',
  /* node-announcement-field_parent_organization */     ),
  /* node-announcement-field_parent_organization */     'type' => 'options_select',
  /* node-announcement-field_parent_organization */     'weight' => 9,
  /* node-announcement-field_parent_organization */   ),
  /* node-announcement-field_parent_organization */ );

  // Exported field_instance: 'node-coi-field_children_groups'.
  $field_instances['node-coi-field_children_groups'] = array(
  /* node-coi-field_children_groups */   'bundle' => 'coi',
  /* node-coi-field_children_groups */   'default_value' => NULL,
  /* node-coi-field_children_groups */   'default_value_function' => '',
  /* node-coi-field_children_groups */   'deleted' => 0,
  /* node-coi-field_children_groups */   'description' => '',
  /* node-coi-field_children_groups */   'display' => array(
  /* node-coi-field_children_groups */     'default' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'module' => 'entityreference',
  /* node-coi-field_children_groups */       'settings' => array(
  /* node-coi-field_children_groups */         'field_formatter_class' => '',
  /* node-coi-field_children_groups */         'link' => FALSE,
  /* node-coi-field_children_groups */       ),
  /* node-coi-field_children_groups */       'type' => 'entityreference_label',
  /* node-coi-field_children_groups */       'weight' => 16,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'events_list' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'one_column_teaser' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'sidebar_' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'teaser' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'teaserthumb' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'time_and_location' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'title_and_time' => array(
  /* node-coi-field_children_groups */       'label' => 'above',
  /* node-coi-field_children_groups */       'settings' => array(),
  /* node-coi-field_children_groups */       'type' => 'hidden',
  /* node-coi-field_children_groups */       'weight' => 0,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */   ),
  /* node-coi-field_children_groups */   'entity_type' => 'node',
  /* node-coi-field_children_groups */   'fences_wrapper' => 'div',
  /* node-coi-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-coi-field_children_groups */   'label' => 'Children Groups',
  /* node-coi-field_children_groups */   'required' => 0,
  /* node-coi-field_children_groups */   'settings' => array(
  /* node-coi-field_children_groups */     'behaviors' => array(
  /* node-coi-field_children_groups */       'prepopulate' => array(
  /* node-coi-field_children_groups */         'status' => 0,
  /* node-coi-field_children_groups */       ),
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'user_register_form' => FALSE,
  /* node-coi-field_children_groups */   ),
  /* node-coi-field_children_groups */   'widget' => array(
  /* node-coi-field_children_groups */     'active' => 1,
  /* node-coi-field_children_groups */     'module' => 'entityreference',
  /* node-coi-field_children_groups */     'settings' => array(
  /* node-coi-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-coi-field_children_groups */       'path' => '',
  /* node-coi-field_children_groups */       'size' => 60,
  /* node-coi-field_children_groups */     ),
  /* node-coi-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-coi-field_children_groups */     'weight' => 37,
  /* node-coi-field_children_groups */   ),
  /* node-coi-field_children_groups */ );

  // Exported field_instance: 'node-coi-field_parent_organization'.
  $field_instances['node-coi-field_parent_organization'] = array(
  /* node-coi-field_parent_organization */   'bundle' => 'coi',
  /* node-coi-field_parent_organization */   'default_value' => NULL,
  /* node-coi-field_parent_organization */   'default_value_function' => '',
  /* node-coi-field_parent_organization */   'deleted' => 0,
  /* node-coi-field_parent_organization */   'description' => '',
  /* node-coi-field_parent_organization */   'display' => array(
  /* node-coi-field_parent_organization */     'default' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'module' => 'entityreference',
  /* node-coi-field_parent_organization */       'settings' => array(
  /* node-coi-field_parent_organization */         'field_formatter_class' => '',
  /* node-coi-field_parent_organization */         'link' => FALSE,
  /* node-coi-field_parent_organization */       ),
  /* node-coi-field_parent_organization */       'type' => 'entityreference_label',
  /* node-coi-field_parent_organization */       'weight' => 15,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'events_list' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'one_column_teaser' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'sidebar_' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'teaser' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'teaserthumb' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'time_and_location' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'title_and_time' => array(
  /* node-coi-field_parent_organization */       'label' => 'above',
  /* node-coi-field_parent_organization */       'settings' => array(),
  /* node-coi-field_parent_organization */       'type' => 'hidden',
  /* node-coi-field_parent_organization */       'weight' => 0,
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */   ),
  /* node-coi-field_parent_organization */   'entity_type' => 'node',
  /* node-coi-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-coi-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-coi-field_parent_organization */   'label' => 'Parent Organization',
  /* node-coi-field_parent_organization */   'required' => 0,
  /* node-coi-field_parent_organization */   'settings' => array(
  /* node-coi-field_parent_organization */     'behaviors' => array(
  /* node-coi-field_parent_organization */       'prepopulate' => array(
  /* node-coi-field_parent_organization */         'status' => 0,
  /* node-coi-field_parent_organization */       ),
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'user_register_form' => FALSE,
  /* node-coi-field_parent_organization */   ),
  /* node-coi-field_parent_organization */   'widget' => array(
  /* node-coi-field_parent_organization */     'active' => 1,
  /* node-coi-field_parent_organization */     'module' => 'options',
  /* node-coi-field_parent_organization */     'settings' => array(
  /* node-coi-field_parent_organization */       'apply_chosen' => '',
  /* node-coi-field_parent_organization */     ),
  /* node-coi-field_parent_organization */     'type' => 'options_select',
  /* node-coi-field_parent_organization */     'weight' => 35,
  /* node-coi-field_parent_organization */   ),
  /* node-coi-field_parent_organization */ );

  // Exported field_instance: 'node-course-field_children_groups'.
  $field_instances['node-course-field_children_groups'] = array(
  /* node-course-field_children_groups */   'bundle' => 'course',
  /* node-course-field_children_groups */   'default_value' => NULL,
  /* node-course-field_children_groups */   'default_value_function' => '',
  /* node-course-field_children_groups */   'deleted' => 0,
  /* node-course-field_children_groups */   'description' => '',
  /* node-course-field_children_groups */   'display' => array(
  /* node-course-field_children_groups */     'default' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'module' => 'entityreference',
  /* node-course-field_children_groups */       'settings' => array(
  /* node-course-field_children_groups */         'field_formatter_class' => '',
  /* node-course-field_children_groups */         'link' => FALSE,
  /* node-course-field_children_groups */       ),
  /* node-course-field_children_groups */       'type' => 'entityreference_label',
  /* node-course-field_children_groups */       'weight' => 30,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'group_teaser' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'settings' => array(),
  /* node-course-field_children_groups */       'type' => 'hidden',
  /* node-course-field_children_groups */       'weight' => 0,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'search_teaser' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'settings' => array(),
  /* node-course-field_children_groups */       'type' => 'hidden',
  /* node-course-field_children_groups */       'weight' => 0,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'sidebar_' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'settings' => array(),
  /* node-course-field_children_groups */       'type' => 'hidden',
  /* node-course-field_children_groups */       'weight' => 0,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'settings' => array(),
  /* node-course-field_children_groups */       'type' => 'hidden',
  /* node-course-field_children_groups */       'weight' => 0,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'teaser' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'settings' => array(),
  /* node-course-field_children_groups */       'type' => 'hidden',
  /* node-course-field_children_groups */       'weight' => 0,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'teaserthumb' => array(
  /* node-course-field_children_groups */       'label' => 'above',
  /* node-course-field_children_groups */       'settings' => array(),
  /* node-course-field_children_groups */       'type' => 'hidden',
  /* node-course-field_children_groups */       'weight' => 0,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */   ),
  /* node-course-field_children_groups */   'entity_type' => 'node',
  /* node-course-field_children_groups */   'fences_wrapper' => 'div',
  /* node-course-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-course-field_children_groups */   'label' => 'Children Groups',
  /* node-course-field_children_groups */   'required' => 0,
  /* node-course-field_children_groups */   'settings' => array(
  /* node-course-field_children_groups */     'behaviors' => array(
  /* node-course-field_children_groups */       'prepopulate' => array(
  /* node-course-field_children_groups */         'status' => 0,
  /* node-course-field_children_groups */       ),
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'user_register_form' => FALSE,
  /* node-course-field_children_groups */   ),
  /* node-course-field_children_groups */   'widget' => array(
  /* node-course-field_children_groups */     'active' => 1,
  /* node-course-field_children_groups */     'module' => 'entityreference',
  /* node-course-field_children_groups */     'settings' => array(
  /* node-course-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-course-field_children_groups */       'path' => '',
  /* node-course-field_children_groups */       'size' => 60,
  /* node-course-field_children_groups */     ),
  /* node-course-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-course-field_children_groups */     'weight' => 39,
  /* node-course-field_children_groups */   ),
  /* node-course-field_children_groups */ );

  // Exported field_instance: 'node-course-field_parent_organization'.
  $field_instances['node-course-field_parent_organization'] = array(
  /* node-course-field_parent_organization */   'bundle' => 'course',
  /* node-course-field_parent_organization */   'default_value' => NULL,
  /* node-course-field_parent_organization */   'default_value_function' => '',
  /* node-course-field_parent_organization */   'deleted' => 0,
  /* node-course-field_parent_organization */   'description' => '',
  /* node-course-field_parent_organization */   'display' => array(
  /* node-course-field_parent_organization */     'default' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'module' => 'entityreference',
  /* node-course-field_parent_organization */       'settings' => array(
  /* node-course-field_parent_organization */         'field_formatter_class' => '',
  /* node-course-field_parent_organization */         'link' => FALSE,
  /* node-course-field_parent_organization */       ),
  /* node-course-field_parent_organization */       'type' => 'entityreference_label',
  /* node-course-field_parent_organization */       'weight' => 28,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'group_teaser' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'settings' => array(),
  /* node-course-field_parent_organization */       'type' => 'hidden',
  /* node-course-field_parent_organization */       'weight' => 0,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'search_teaser' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'settings' => array(),
  /* node-course-field_parent_organization */       'type' => 'hidden',
  /* node-course-field_parent_organization */       'weight' => 0,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'sidebar_' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'settings' => array(),
  /* node-course-field_parent_organization */       'type' => 'hidden',
  /* node-course-field_parent_organization */       'weight' => 0,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'settings' => array(),
  /* node-course-field_parent_organization */       'type' => 'hidden',
  /* node-course-field_parent_organization */       'weight' => 0,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'teaser' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'settings' => array(),
  /* node-course-field_parent_organization */       'type' => 'hidden',
  /* node-course-field_parent_organization */       'weight' => 0,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'teaserthumb' => array(
  /* node-course-field_parent_organization */       'label' => 'above',
  /* node-course-field_parent_organization */       'settings' => array(),
  /* node-course-field_parent_organization */       'type' => 'hidden',
  /* node-course-field_parent_organization */       'weight' => 0,
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */   ),
  /* node-course-field_parent_organization */   'entity_type' => 'node',
  /* node-course-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-course-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-course-field_parent_organization */   'label' => 'Parent Organization',
  /* node-course-field_parent_organization */   'required' => 0,
  /* node-course-field_parent_organization */   'settings' => array(
  /* node-course-field_parent_organization */     'behaviors' => array(
  /* node-course-field_parent_organization */       'prepopulate' => array(
  /* node-course-field_parent_organization */         'status' => 0,
  /* node-course-field_parent_organization */       ),
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'user_register_form' => FALSE,
  /* node-course-field_parent_organization */   ),
  /* node-course-field_parent_organization */   'widget' => array(
  /* node-course-field_parent_organization */     'active' => 1,
  /* node-course-field_parent_organization */     'module' => 'options',
  /* node-course-field_parent_organization */     'settings' => array(
  /* node-course-field_parent_organization */       'apply_chosen' => '',
  /* node-course-field_parent_organization */     ),
  /* node-course-field_parent_organization */     'type' => 'options_select',
  /* node-course-field_parent_organization */     'weight' => 10,
  /* node-course-field_parent_organization */   ),
  /* node-course-field_parent_organization */ );

  // Exported field_instance: 'node-course_group-field_children_groups'.
  $field_instances['node-course_group-field_children_groups'] = array(
  /* node-course_group-field_children_groups */   'bundle' => 'course_group',
  /* node-course_group-field_children_groups */   'default_value' => NULL,
  /* node-course_group-field_children_groups */   'default_value_function' => '',
  /* node-course_group-field_children_groups */   'deleted' => 0,
  /* node-course_group-field_children_groups */   'description' => '',
  /* node-course_group-field_children_groups */   'display' => array(
  /* node-course_group-field_children_groups */     'default' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'module' => 'entityreference',
  /* node-course_group-field_children_groups */       'settings' => array(
  /* node-course_group-field_children_groups */         'field_formatter_class' => '',
  /* node-course_group-field_children_groups */         'link' => FALSE,
  /* node-course_group-field_children_groups */       ),
  /* node-course_group-field_children_groups */       'type' => 'entityreference_label',
  /* node-course_group-field_children_groups */       'weight' => 14,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'events_list' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'group_teaser' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'one_column_teaser' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'search_teaser' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'sidebar_' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'teaser' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'teaserthumb' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'time_and_location' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'title_and_time' => array(
  /* node-course_group-field_children_groups */       'label' => 'above',
  /* node-course_group-field_children_groups */       'settings' => array(),
  /* node-course_group-field_children_groups */       'type' => 'hidden',
  /* node-course_group-field_children_groups */       'weight' => 0,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */   ),
  /* node-course_group-field_children_groups */   'entity_type' => 'node',
  /* node-course_group-field_children_groups */   'fences_wrapper' => 'div',
  /* node-course_group-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-course_group-field_children_groups */   'label' => 'Children Groups',
  /* node-course_group-field_children_groups */   'required' => 0,
  /* node-course_group-field_children_groups */   'settings' => array(
  /* node-course_group-field_children_groups */     'behaviors' => array(
  /* node-course_group-field_children_groups */       'prepopulate' => array(
  /* node-course_group-field_children_groups */         'status' => 0,
  /* node-course_group-field_children_groups */       ),
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'user_register_form' => FALSE,
  /* node-course_group-field_children_groups */   ),
  /* node-course_group-field_children_groups */   'widget' => array(
  /* node-course_group-field_children_groups */     'active' => 1,
  /* node-course_group-field_children_groups */     'module' => 'entityreference',
  /* node-course_group-field_children_groups */     'settings' => array(
  /* node-course_group-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_children_groups */       'path' => '',
  /* node-course_group-field_children_groups */       'size' => 60,
  /* node-course_group-field_children_groups */     ),
  /* node-course_group-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_children_groups */     'weight' => 18,
  /* node-course_group-field_children_groups */   ),
  /* node-course_group-field_children_groups */ );

  // Exported field_instance: 'node-course_group-field_parent_organization'.
  $field_instances['node-course_group-field_parent_organization'] = array(
  /* node-course_group-field_parent_organization */   'bundle' => 'course_group',
  /* node-course_group-field_parent_organization */   'default_value' => NULL,
  /* node-course_group-field_parent_organization */   'default_value_function' => '',
  /* node-course_group-field_parent_organization */   'deleted' => 0,
  /* node-course_group-field_parent_organization */   'description' => '',
  /* node-course_group-field_parent_organization */   'display' => array(
  /* node-course_group-field_parent_organization */     'default' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'module' => 'entityreference',
  /* node-course_group-field_parent_organization */       'settings' => array(
  /* node-course_group-field_parent_organization */         'field_formatter_class' => '',
  /* node-course_group-field_parent_organization */         'link' => FALSE,
  /* node-course_group-field_parent_organization */       ),
  /* node-course_group-field_parent_organization */       'type' => 'entityreference_label',
  /* node-course_group-field_parent_organization */       'weight' => 12,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'events_list' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'group_teaser' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'one_column_teaser' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'search_teaser' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'sidebar_' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'teaser' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'teaserthumb' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'time_and_location' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'title_and_time' => array(
  /* node-course_group-field_parent_organization */       'label' => 'above',
  /* node-course_group-field_parent_organization */       'settings' => array(),
  /* node-course_group-field_parent_organization */       'type' => 'hidden',
  /* node-course_group-field_parent_organization */       'weight' => 0,
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */   ),
  /* node-course_group-field_parent_organization */   'entity_type' => 'node',
  /* node-course_group-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-course_group-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-course_group-field_parent_organization */   'label' => 'Parent Organization',
  /* node-course_group-field_parent_organization */   'required' => 0,
  /* node-course_group-field_parent_organization */   'settings' => array(
  /* node-course_group-field_parent_organization */     'behaviors' => array(
  /* node-course_group-field_parent_organization */       'prepopulate' => array(
  /* node-course_group-field_parent_organization */         'status' => 0,
  /* node-course_group-field_parent_organization */       ),
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'user_register_form' => FALSE,
  /* node-course_group-field_parent_organization */   ),
  /* node-course_group-field_parent_organization */   'widget' => array(
  /* node-course_group-field_parent_organization */     'active' => 1,
  /* node-course_group-field_parent_organization */     'module' => 'options',
  /* node-course_group-field_parent_organization */     'settings' => array(
  /* node-course_group-field_parent_organization */       'apply_chosen' => '',
  /* node-course_group-field_parent_organization */     ),
  /* node-course_group-field_parent_organization */     'type' => 'options_select',
  /* node-course_group-field_parent_organization */     'weight' => 6,
  /* node-course_group-field_parent_organization */   ),
  /* node-course_group-field_parent_organization */ );

  // Exported field_instance: 'node-event-field_children_groups'.
  $field_instances['node-event-field_children_groups'] = array(
  /* node-event-field_children_groups */   'bundle' => 'event',
  /* node-event-field_children_groups */   'default_value' => NULL,
  /* node-event-field_children_groups */   'default_value_function' => '',
  /* node-event-field_children_groups */   'deleted' => 0,
  /* node-event-field_children_groups */   'description' => '',
  /* node-event-field_children_groups */   'display' => array(
  /* node-event-field_children_groups */     'default' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'module' => 'entityreference',
  /* node-event-field_children_groups */       'settings' => array(
  /* node-event-field_children_groups */         'field_formatter_class' => '',
  /* node-event-field_children_groups */         'link' => FALSE,
  /* node-event-field_children_groups */       ),
  /* node-event-field_children_groups */       'type' => 'entityreference_label',
  /* node-event-field_children_groups */       'weight' => 47,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'events_list' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'one_column_teaser' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'search_teaser' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'sidebar_' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'teaser' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'teaserthumb' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'time_and_location' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'title_and_time' => array(
  /* node-event-field_children_groups */       'label' => 'above',
  /* node-event-field_children_groups */       'settings' => array(),
  /* node-event-field_children_groups */       'type' => 'hidden',
  /* node-event-field_children_groups */       'weight' => 0,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */   ),
  /* node-event-field_children_groups */   'entity_type' => 'node',
  /* node-event-field_children_groups */   'fences_wrapper' => 'div',
  /* node-event-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-event-field_children_groups */   'label' => 'Children Groups',
  /* node-event-field_children_groups */   'required' => 0,
  /* node-event-field_children_groups */   'settings' => array(
  /* node-event-field_children_groups */     'behaviors' => array(
  /* node-event-field_children_groups */       'prepopulate' => array(
  /* node-event-field_children_groups */         'status' => 0,
  /* node-event-field_children_groups */       ),
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'user_register_form' => FALSE,
  /* node-event-field_children_groups */   ),
  /* node-event-field_children_groups */   'widget' => array(
  /* node-event-field_children_groups */     'active' => 1,
  /* node-event-field_children_groups */     'module' => 'entityreference',
  /* node-event-field_children_groups */     'settings' => array(
  /* node-event-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-event-field_children_groups */       'path' => '',
  /* node-event-field_children_groups */       'size' => 60,
  /* node-event-field_children_groups */     ),
  /* node-event-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-event-field_children_groups */     'weight' => 49,
  /* node-event-field_children_groups */   ),
  /* node-event-field_children_groups */ );

  // Exported field_instance: 'node-event-field_parent_organization'.
  $field_instances['node-event-field_parent_organization'] = array(
  /* node-event-field_parent_organization */   'bundle' => 'event',
  /* node-event-field_parent_organization */   'default_value' => NULL,
  /* node-event-field_parent_organization */   'default_value_function' => '',
  /* node-event-field_parent_organization */   'deleted' => 0,
  /* node-event-field_parent_organization */   'description' => '',
  /* node-event-field_parent_organization */   'display' => array(
  /* node-event-field_parent_organization */     'default' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'module' => 'entityreference',
  /* node-event-field_parent_organization */       'settings' => array(
  /* node-event-field_parent_organization */         'field_formatter_class' => '',
  /* node-event-field_parent_organization */         'link' => FALSE,
  /* node-event-field_parent_organization */       ),
  /* node-event-field_parent_organization */       'type' => 'entityreference_label',
  /* node-event-field_parent_organization */       'weight' => 46,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'events_list' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'one_column_teaser' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'search_teaser' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'sidebar_' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'teaser' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'teaserthumb' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'time_and_location' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'title_and_time' => array(
  /* node-event-field_parent_organization */       'label' => 'above',
  /* node-event-field_parent_organization */       'settings' => array(),
  /* node-event-field_parent_organization */       'type' => 'hidden',
  /* node-event-field_parent_organization */       'weight' => 0,
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */   ),
  /* node-event-field_parent_organization */   'entity_type' => 'node',
  /* node-event-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-event-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-event-field_parent_organization */   'label' => 'Parent Organization',
  /* node-event-field_parent_organization */   'required' => 0,
  /* node-event-field_parent_organization */   'settings' => array(
  /* node-event-field_parent_organization */     'behaviors' => array(
  /* node-event-field_parent_organization */       'prepopulate' => array(
  /* node-event-field_parent_organization */         'status' => 0,
  /* node-event-field_parent_organization */       ),
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'user_register_form' => FALSE,
  /* node-event-field_parent_organization */   ),
  /* node-event-field_parent_organization */   'widget' => array(
  /* node-event-field_parent_organization */     'active' => 1,
  /* node-event-field_parent_organization */     'module' => 'options',
  /* node-event-field_parent_organization */     'settings' => array(
  /* node-event-field_parent_organization */       'apply_chosen' => '',
  /* node-event-field_parent_organization */     ),
  /* node-event-field_parent_organization */     'type' => 'options_select',
  /* node-event-field_parent_organization */     'weight' => 10,
  /* node-event-field_parent_organization */   ),
  /* node-event-field_parent_organization */ );

  // Exported field_instance: 'node-group-field_children_groups'.
  $field_instances['node-group-field_children_groups'] = array(
  /* node-group-field_children_groups */   'bundle' => 'group',
  /* node-group-field_children_groups */   'default_value' => NULL,
  /* node-group-field_children_groups */   'default_value_function' => '',
  /* node-group-field_children_groups */   'deleted' => 0,
  /* node-group-field_children_groups */   'description' => '',
  /* node-group-field_children_groups */   'display' => array(
  /* node-group-field_children_groups */     'default' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'module' => 'entityreference',
  /* node-group-field_children_groups */       'settings' => array(
  /* node-group-field_children_groups */         'field_formatter_class' => '',
  /* node-group-field_children_groups */         'link' => FALSE,
  /* node-group-field_children_groups */       ),
  /* node-group-field_children_groups */       'type' => 'entityreference_label',
  /* node-group-field_children_groups */       'weight' => 20,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'group_teaser' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'one_column_teaser' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'search_teaser' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'sidebar_' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'teaser' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'teaserthumb' => array(
  /* node-group-field_children_groups */       'label' => 'above',
  /* node-group-field_children_groups */       'settings' => array(),
  /* node-group-field_children_groups */       'type' => 'hidden',
  /* node-group-field_children_groups */       'weight' => 0,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */   ),
  /* node-group-field_children_groups */   'entity_type' => 'node',
  /* node-group-field_children_groups */   'fences_wrapper' => 'div',
  /* node-group-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-group-field_children_groups */   'label' => 'Children Groups',
  /* node-group-field_children_groups */   'required' => 0,
  /* node-group-field_children_groups */   'settings' => array(
  /* node-group-field_children_groups */     'behaviors' => array(
  /* node-group-field_children_groups */       'prepopulate' => array(
  /* node-group-field_children_groups */         'status' => 0,
  /* node-group-field_children_groups */       ),
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'user_register_form' => FALSE,
  /* node-group-field_children_groups */   ),
  /* node-group-field_children_groups */   'widget' => array(
  /* node-group-field_children_groups */     'active' => 1,
  /* node-group-field_children_groups */     'module' => 'entityreference',
  /* node-group-field_children_groups */     'settings' => array(
  /* node-group-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-group-field_children_groups */       'path' => '',
  /* node-group-field_children_groups */       'size' => 60,
  /* node-group-field_children_groups */     ),
  /* node-group-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-group-field_children_groups */     'weight' => 33,
  /* node-group-field_children_groups */   ),
  /* node-group-field_children_groups */ );

  // Exported field_instance: 'node-group-field_parent_organization'.
  $field_instances['node-group-field_parent_organization'] = array(
  /* node-group-field_parent_organization */   'bundle' => 'group',
  /* node-group-field_parent_organization */   'default_value' => NULL,
  /* node-group-field_parent_organization */   'default_value_function' => '',
  /* node-group-field_parent_organization */   'deleted' => 0,
  /* node-group-field_parent_organization */   'description' => '',
  /* node-group-field_parent_organization */   'display' => array(
  /* node-group-field_parent_organization */     'default' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'module' => 'entityreference',
  /* node-group-field_parent_organization */       'settings' => array(
  /* node-group-field_parent_organization */         'field_formatter_class' => '',
  /* node-group-field_parent_organization */         'link' => FALSE,
  /* node-group-field_parent_organization */       ),
  /* node-group-field_parent_organization */       'type' => 'entityreference_label',
  /* node-group-field_parent_organization */       'weight' => 19,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'group_teaser' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 0,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'one_column_teaser' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 0,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'search_teaser' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 0,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'sidebar_' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 0,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 0,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'teaser' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 0,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'teaserthumb' => array(
  /* node-group-field_parent_organization */       'label' => 'above',
  /* node-group-field_parent_organization */       'settings' => array(),
  /* node-group-field_parent_organization */       'type' => 'hidden',
  /* node-group-field_parent_organization */       'weight' => 19,
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */   ),
  /* node-group-field_parent_organization */   'entity_type' => 'node',
  /* node-group-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-group-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-group-field_parent_organization */   'label' => 'Parent Organization',
  /* node-group-field_parent_organization */   'required' => 0,
  /* node-group-field_parent_organization */   'settings' => array(
  /* node-group-field_parent_organization */     'behaviors' => array(
  /* node-group-field_parent_organization */       'prepopulate' => array(
  /* node-group-field_parent_organization */         'status' => 0,
  /* node-group-field_parent_organization */       ),
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'user_register_form' => FALSE,
  /* node-group-field_parent_organization */   ),
  /* node-group-field_parent_organization */   'widget' => array(
  /* node-group-field_parent_organization */     'active' => 1,
  /* node-group-field_parent_organization */     'module' => 'options',
  /* node-group-field_parent_organization */     'settings' => array(
  /* node-group-field_parent_organization */       'apply_chosen' => '',
  /* node-group-field_parent_organization */     ),
  /* node-group-field_parent_organization */     'type' => 'options_select',
  /* node-group-field_parent_organization */     'weight' => 32,
  /* node-group-field_parent_organization */   ),
  /* node-group-field_parent_organization */ );

  // Exported field_instance: 'node-media_gallery-field_parent_organization'.
  $field_instances['node-media_gallery-field_parent_organization'] = array(
  /* node-media_gallery-field_parent_organization */   'bundle' => 'media_gallery',
  /* node-media_gallery-field_parent_organization */   'default_value' => NULL,
  /* node-media_gallery-field_parent_organization */   'default_value_function' => '',
  /* node-media_gallery-field_parent_organization */   'deleted' => 0,
  /* node-media_gallery-field_parent_organization */   'description' => '',
  /* node-media_gallery-field_parent_organization */   'display' => array(
  /* node-media_gallery-field_parent_organization */     'default' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'module' => 'entityreference',
  /* node-media_gallery-field_parent_organization */       'settings' => array(
  /* node-media_gallery-field_parent_organization */         'field_formatter_class' => '',
  /* node-media_gallery-field_parent_organization */         'link' => FALSE,
  /* node-media_gallery-field_parent_organization */       ),
  /* node-media_gallery-field_parent_organization */       'type' => 'entityreference_label',
  /* node-media_gallery-field_parent_organization */       'weight' => 20,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'events_list' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'full' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'media_gallery_block' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'one_column_teaser' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'sidebar_' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'teaser' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'teaserthumb' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'time_and_location' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'title_and_time' => array(
  /* node-media_gallery-field_parent_organization */       'label' => 'above',
  /* node-media_gallery-field_parent_organization */       'settings' => array(),
  /* node-media_gallery-field_parent_organization */       'type' => 'hidden',
  /* node-media_gallery-field_parent_organization */       'weight' => 0,
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */   ),
  /* node-media_gallery-field_parent_organization */   'entity_type' => 'node',
  /* node-media_gallery-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-media_gallery-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-media_gallery-field_parent_organization */   'label' => 'Parent Organization',
  /* node-media_gallery-field_parent_organization */   'required' => 0,
  /* node-media_gallery-field_parent_organization */   'settings' => array(
  /* node-media_gallery-field_parent_organization */     'behaviors' => array(
  /* node-media_gallery-field_parent_organization */       'prepopulate' => array(
  /* node-media_gallery-field_parent_organization */         'status' => 0,
  /* node-media_gallery-field_parent_organization */       ),
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'user_register_form' => FALSE,
  /* node-media_gallery-field_parent_organization */   ),
  /* node-media_gallery-field_parent_organization */   'widget' => array(
  /* node-media_gallery-field_parent_organization */     'active' => 1,
  /* node-media_gallery-field_parent_organization */     'module' => 'options',
  /* node-media_gallery-field_parent_organization */     'settings' => array(
  /* node-media_gallery-field_parent_organization */       'apply_chosen' => '',
  /* node-media_gallery-field_parent_organization */     ),
  /* node-media_gallery-field_parent_organization */     'type' => 'options_select',
  /* node-media_gallery-field_parent_organization */     'weight' => 23,
  /* node-media_gallery-field_parent_organization */   ),
  /* node-media_gallery-field_parent_organization */ );

  // Exported field_instance: 'node-news-field_parent_organization'.
  $field_instances['node-news-field_parent_organization'] = array(
  /* node-news-field_parent_organization */   'bundle' => 'news',
  /* node-news-field_parent_organization */   'default_value' => NULL,
  /* node-news-field_parent_organization */   'default_value_function' => '',
  /* node-news-field_parent_organization */   'deleted' => 0,
  /* node-news-field_parent_organization */   'description' => '',
  /* node-news-field_parent_organization */   'display' => array(
  /* node-news-field_parent_organization */     'default' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'module' => 'entityreference',
  /* node-news-field_parent_organization */       'settings' => array(
  /* node-news-field_parent_organization */         'field_formatter_class' => '',
  /* node-news-field_parent_organization */         'link' => FALSE,
  /* node-news-field_parent_organization */       ),
  /* node-news-field_parent_organization */       'type' => 'entityreference_label',
  /* node-news-field_parent_organization */       'weight' => 19,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'full' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'one_column_teaser' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'search_teaser' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'sidebar_' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'teaser' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'teaserthumb' => array(
  /* node-news-field_parent_organization */       'label' => 'above',
  /* node-news-field_parent_organization */       'settings' => array(),
  /* node-news-field_parent_organization */       'type' => 'hidden',
  /* node-news-field_parent_organization */       'weight' => 0,
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */   ),
  /* node-news-field_parent_organization */   'entity_type' => 'node',
  /* node-news-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-news-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-news-field_parent_organization */   'label' => 'Parent Organization',
  /* node-news-field_parent_organization */   'required' => 0,
  /* node-news-field_parent_organization */   'settings' => array(
  /* node-news-field_parent_organization */     'behaviors' => array(
  /* node-news-field_parent_organization */       'prepopulate' => array(
  /* node-news-field_parent_organization */         'status' => 0,
  /* node-news-field_parent_organization */       ),
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'user_register_form' => FALSE,
  /* node-news-field_parent_organization */   ),
  /* node-news-field_parent_organization */   'widget' => array(
  /* node-news-field_parent_organization */     'active' => 1,
  /* node-news-field_parent_organization */     'module' => 'options',
  /* node-news-field_parent_organization */     'settings' => array(
  /* node-news-field_parent_organization */       'apply_chosen' => '',
  /* node-news-field_parent_organization */     ),
  /* node-news-field_parent_organization */     'type' => 'options_select',
  /* node-news-field_parent_organization */     'weight' => 15,
  /* node-news-field_parent_organization */   ),
  /* node-news-field_parent_organization */ );

  // Exported field_instance: 'node-poll-field_parent_organization'.
  $field_instances['node-poll-field_parent_organization'] = array(
  /* node-poll-field_parent_organization */   'bundle' => 'poll',
  /* node-poll-field_parent_organization */   'default_value' => NULL,
  /* node-poll-field_parent_organization */   'default_value_function' => '',
  /* node-poll-field_parent_organization */   'deleted' => 0,
  /* node-poll-field_parent_organization */   'description' => '',
  /* node-poll-field_parent_organization */   'display' => array(
  /* node-poll-field_parent_organization */     'default' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'module' => 'entityreference',
  /* node-poll-field_parent_organization */       'settings' => array(
  /* node-poll-field_parent_organization */         'field_formatter_class' => '',
  /* node-poll-field_parent_organization */         'link' => FALSE,
  /* node-poll-field_parent_organization */       ),
  /* node-poll-field_parent_organization */       'type' => 'entityreference_label',
  /* node-poll-field_parent_organization */       'weight' => 6,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'events_list' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'featured_publication' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'group_teaser' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'one_column_teaser' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'search_teaser' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'sidebar_' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'teaser' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'teaserthumb' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'time_and_location' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'title_and_time' => array(
  /* node-poll-field_parent_organization */       'label' => 'above',
  /* node-poll-field_parent_organization */       'settings' => array(),
  /* node-poll-field_parent_organization */       'type' => 'hidden',
  /* node-poll-field_parent_organization */       'weight' => 0,
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */   ),
  /* node-poll-field_parent_organization */   'entity_type' => 'node',
  /* node-poll-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-poll-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-poll-field_parent_organization */   'label' => 'Parent Organization',
  /* node-poll-field_parent_organization */   'required' => 0,
  /* node-poll-field_parent_organization */   'settings' => array(
  /* node-poll-field_parent_organization */     'behaviors' => array(
  /* node-poll-field_parent_organization */       'prepopulate' => array(
  /* node-poll-field_parent_organization */         'status' => 0,
  /* node-poll-field_parent_organization */       ),
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'user_register_form' => FALSE,
  /* node-poll-field_parent_organization */   ),
  /* node-poll-field_parent_organization */   'widget' => array(
  /* node-poll-field_parent_organization */     'active' => 1,
  /* node-poll-field_parent_organization */     'module' => 'options',
  /* node-poll-field_parent_organization */     'settings' => array(
  /* node-poll-field_parent_organization */       'apply_chosen' => '',
  /* node-poll-field_parent_organization */     ),
  /* node-poll-field_parent_organization */     'type' => 'options_select',
  /* node-poll-field_parent_organization */     'weight' => 3,
  /* node-poll-field_parent_organization */   ),
  /* node-poll-field_parent_organization */ );

  // Exported field_instance: 'node-post-field_parent_organization'.
  $field_instances['node-post-field_parent_organization'] = array(
  /* node-post-field_parent_organization */   'bundle' => 'post',
  /* node-post-field_parent_organization */   'default_value' => NULL,
  /* node-post-field_parent_organization */   'default_value_function' => '',
  /* node-post-field_parent_organization */   'deleted' => 0,
  /* node-post-field_parent_organization */   'description' => '',
  /* node-post-field_parent_organization */   'display' => array(
  /* node-post-field_parent_organization */     'default' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'module' => 'entityreference',
  /* node-post-field_parent_organization */       'settings' => array(
  /* node-post-field_parent_organization */         'field_formatter_class' => '',
  /* node-post-field_parent_organization */         'link' => FALSE,
  /* node-post-field_parent_organization */       ),
  /* node-post-field_parent_organization */       'type' => 'entityreference_label',
  /* node-post-field_parent_organization */       'weight' => 23,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'full' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'search_teaser' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'sidebar_' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'teaser' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'teaserthumb' => array(
  /* node-post-field_parent_organization */       'label' => 'above',
  /* node-post-field_parent_organization */       'settings' => array(),
  /* node-post-field_parent_organization */       'type' => 'hidden',
  /* node-post-field_parent_organization */       'weight' => 0,
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */   ),
  /* node-post-field_parent_organization */   'entity_type' => 'node',
  /* node-post-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-post-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-post-field_parent_organization */   'label' => 'Parent Organization',
  /* node-post-field_parent_organization */   'required' => 0,
  /* node-post-field_parent_organization */   'settings' => array(
  /* node-post-field_parent_organization */     'behaviors' => array(
  /* node-post-field_parent_organization */       'prepopulate' => array(
  /* node-post-field_parent_organization */         'status' => 0,
  /* node-post-field_parent_organization */       ),
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'user_register_form' => FALSE,
  /* node-post-field_parent_organization */   ),
  /* node-post-field_parent_organization */   'widget' => array(
  /* node-post-field_parent_organization */     'active' => 1,
  /* node-post-field_parent_organization */     'module' => 'options',
  /* node-post-field_parent_organization */     'settings' => array(
  /* node-post-field_parent_organization */       'apply_chosen' => '',
  /* node-post-field_parent_organization */     ),
  /* node-post-field_parent_organization */     'type' => 'options_select',
  /* node-post-field_parent_organization */     'weight' => 9,
  /* node-post-field_parent_organization */   ),
  /* node-post-field_parent_organization */ );

  // Exported field_instance: 'node-program-field_children_groups'.
  $field_instances['node-program-field_children_groups'] = array(
  /* node-program-field_children_groups */   'bundle' => 'program',
  /* node-program-field_children_groups */   'default_value' => NULL,
  /* node-program-field_children_groups */   'default_value_function' => '',
  /* node-program-field_children_groups */   'deleted' => 0,
  /* node-program-field_children_groups */   'description' => '',
  /* node-program-field_children_groups */   'display' => array(
  /* node-program-field_children_groups */     'default' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'module' => 'entityreference',
  /* node-program-field_children_groups */       'settings' => array(
  /* node-program-field_children_groups */         'field_formatter_class' => '',
  /* node-program-field_children_groups */         'link' => FALSE,
  /* node-program-field_children_groups */       ),
  /* node-program-field_children_groups */       'type' => 'entityreference_label',
  /* node-program-field_children_groups */       'weight' => 13,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'events_list' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'one_column_teaser' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'post_teaser_group_landing_page' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'search_teaser' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'sidebar_' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'sidebar_teaser_v2' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'teaser' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'teaserthumb' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'time_and_location' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'title_and_time' => array(
  /* node-program-field_children_groups */       'label' => 'above',
  /* node-program-field_children_groups */       'settings' => array(),
  /* node-program-field_children_groups */       'type' => 'hidden',
  /* node-program-field_children_groups */       'weight' => 0,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */   ),
  /* node-program-field_children_groups */   'entity_type' => 'node',
  /* node-program-field_children_groups */   'fences_wrapper' => 'div',
  /* node-program-field_children_groups */   'field_name' => 'field_children_groups',
  /* node-program-field_children_groups */   'label' => 'Children Groups',
  /* node-program-field_children_groups */   'required' => 0,
  /* node-program-field_children_groups */   'settings' => array(
  /* node-program-field_children_groups */     'behaviors' => array(
  /* node-program-field_children_groups */       'prepopulate' => array(
  /* node-program-field_children_groups */         'status' => 0,
  /* node-program-field_children_groups */       ),
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'user_register_form' => FALSE,
  /* node-program-field_children_groups */   ),
  /* node-program-field_children_groups */   'widget' => array(
  /* node-program-field_children_groups */     'active' => 1,
  /* node-program-field_children_groups */     'module' => 'entityreference',
  /* node-program-field_children_groups */     'settings' => array(
  /* node-program-field_children_groups */       'match_operator' => 'CONTAINS',
  /* node-program-field_children_groups */       'path' => '',
  /* node-program-field_children_groups */       'size' => 60,
  /* node-program-field_children_groups */     ),
  /* node-program-field_children_groups */     'type' => 'entityreference_autocomplete',
  /* node-program-field_children_groups */     'weight' => 11,
  /* node-program-field_children_groups */   ),
  /* node-program-field_children_groups */ );

  // Exported field_instance: 'node-program-field_parent_organization'.
  $field_instances['node-program-field_parent_organization'] = array(
  /* node-program-field_parent_organization */   'bundle' => 'program',
  /* node-program-field_parent_organization */   'default_value' => NULL,
  /* node-program-field_parent_organization */   'default_value_function' => '',
  /* node-program-field_parent_organization */   'deleted' => 0,
  /* node-program-field_parent_organization */   'description' => '',
  /* node-program-field_parent_organization */   'display' => array(
  /* node-program-field_parent_organization */     'default' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'module' => 'entityreference',
  /* node-program-field_parent_organization */       'settings' => array(
  /* node-program-field_parent_organization */         'field_formatter_class' => '',
  /* node-program-field_parent_organization */         'link' => FALSE,
  /* node-program-field_parent_organization */       ),
  /* node-program-field_parent_organization */       'type' => 'entityreference_label',
  /* node-program-field_parent_organization */       'weight' => 12,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'events_list' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'one_column_teaser' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'search_teaser' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'sidebar_' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'teaser' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'teaserthumb' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'time_and_location' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'title_and_time' => array(
  /* node-program-field_parent_organization */       'label' => 'above',
  /* node-program-field_parent_organization */       'settings' => array(),
  /* node-program-field_parent_organization */       'type' => 'hidden',
  /* node-program-field_parent_organization */       'weight' => 0,
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */   ),
  /* node-program-field_parent_organization */   'entity_type' => 'node',
  /* node-program-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-program-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-program-field_parent_organization */   'label' => 'Parent Organization',
  /* node-program-field_parent_organization */   'required' => 0,
  /* node-program-field_parent_organization */   'settings' => array(
  /* node-program-field_parent_organization */     'behaviors' => array(
  /* node-program-field_parent_organization */       'prepopulate' => array(
  /* node-program-field_parent_organization */         'status' => 0,
  /* node-program-field_parent_organization */       ),
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'user_register_form' => FALSE,
  /* node-program-field_parent_organization */   ),
  /* node-program-field_parent_organization */   'widget' => array(
  /* node-program-field_parent_organization */     'active' => 1,
  /* node-program-field_parent_organization */     'module' => 'options',
  /* node-program-field_parent_organization */     'settings' => array(
  /* node-program-field_parent_organization */       'apply_chosen' => '',
  /* node-program-field_parent_organization */     ),
  /* node-program-field_parent_organization */     'type' => 'options_select',
  /* node-program-field_parent_organization */     'weight' => 7,
  /* node-program-field_parent_organization */   ),
  /* node-program-field_parent_organization */ );

  // Exported field_instance: 'node-publication-field_parent_organization'.
  $field_instances['node-publication-field_parent_organization'] = array(
  /* node-publication-field_parent_organization */   'bundle' => 'publication',
  /* node-publication-field_parent_organization */   'default_value' => NULL,
  /* node-publication-field_parent_organization */   'default_value_function' => '',
  /* node-publication-field_parent_organization */   'deleted' => 0,
  /* node-publication-field_parent_organization */   'description' => '',
  /* node-publication-field_parent_organization */   'display' => array(
  /* node-publication-field_parent_organization */     'default' => array(
  /* node-publication-field_parent_organization */       'label' => 'above',
  /* node-publication-field_parent_organization */       'module' => 'entityreference',
  /* node-publication-field_parent_organization */       'settings' => array(
  /* node-publication-field_parent_organization */         'field_formatter_class' => '',
  /* node-publication-field_parent_organization */         'link' => FALSE,
  /* node-publication-field_parent_organization */       ),
  /* node-publication-field_parent_organization */       'type' => 'entityreference_label',
  /* node-publication-field_parent_organization */       'weight' => 19,
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'featured_publication' => array(
  /* node-publication-field_parent_organization */       'label' => 'above',
  /* node-publication-field_parent_organization */       'settings' => array(),
  /* node-publication-field_parent_organization */       'type' => 'hidden',
  /* node-publication-field_parent_organization */       'weight' => 0,
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'search_teaser' => array(
  /* node-publication-field_parent_organization */       'label' => 'above',
  /* node-publication-field_parent_organization */       'settings' => array(),
  /* node-publication-field_parent_organization */       'type' => 'hidden',
  /* node-publication-field_parent_organization */       'weight' => 0,
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'sidebar_' => array(
  /* node-publication-field_parent_organization */       'label' => 'above',
  /* node-publication-field_parent_organization */       'settings' => array(),
  /* node-publication-field_parent_organization */       'type' => 'hidden',
  /* node-publication-field_parent_organization */       'weight' => 0,
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-publication-field_parent_organization */       'label' => 'above',
  /* node-publication-field_parent_organization */       'settings' => array(),
  /* node-publication-field_parent_organization */       'type' => 'hidden',
  /* node-publication-field_parent_organization */       'weight' => 0,
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'teaserthumb' => array(
  /* node-publication-field_parent_organization */       'label' => 'above',
  /* node-publication-field_parent_organization */       'settings' => array(),
  /* node-publication-field_parent_organization */       'type' => 'hidden',
  /* node-publication-field_parent_organization */       'weight' => 0,
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */   ),
  /* node-publication-field_parent_organization */   'entity_type' => 'node',
  /* node-publication-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-publication-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-publication-field_parent_organization */   'label' => 'Parent Organization',
  /* node-publication-field_parent_organization */   'required' => 0,
  /* node-publication-field_parent_organization */   'settings' => array(
  /* node-publication-field_parent_organization */     'behaviors' => array(
  /* node-publication-field_parent_organization */       'prepopulate' => array(
  /* node-publication-field_parent_organization */         'status' => 0,
  /* node-publication-field_parent_organization */       ),
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'user_register_form' => FALSE,
  /* node-publication-field_parent_organization */   ),
  /* node-publication-field_parent_organization */   'widget' => array(
  /* node-publication-field_parent_organization */     'active' => 1,
  /* node-publication-field_parent_organization */     'module' => 'options',
  /* node-publication-field_parent_organization */     'settings' => array(
  /* node-publication-field_parent_organization */       'apply_chosen' => '',
  /* node-publication-field_parent_organization */     ),
  /* node-publication-field_parent_organization */     'type' => 'options_select',
  /* node-publication-field_parent_organization */     'weight' => 9,
  /* node-publication-field_parent_organization */   ),
  /* node-publication-field_parent_organization */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Children Groups');
  t('Parent Organization');

  return $field_instances;
}
