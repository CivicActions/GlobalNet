<?php
/**
 * @file
 * gn2_courses.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_courses_field_group_info() {
  $field_groups = array();

   /* group_course_managers|node|course_group|form */ $field_group = new stdClass();
   /* group_course_managers|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_course_managers|node|course_group|form */ $field_group->api_version = 1;
   /* group_course_managers|node|course_group|form */ $field_group->identifier = 'group_course_managers|node|course_group|form';
   /* group_course_managers|node|course_group|form */ $field_group->group_name = 'group_course_managers';
   /* group_course_managers|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_course_managers|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_course_managers|node|course_group|form */ $field_group->mode = 'form';
   /* group_course_managers|node|course_group|form */ $field_group->parent_name = '';
   /* group_course_managers|node|course_group|form */ $field_group->data = array(
   /* group_course_managers|node|course_group|form */   'label' => 'Course Managers',
   /* group_course_managers|node|course_group|form */   'weight' => '1',
   /* group_course_managers|node|course_group|form */   'children' => array(
   /* group_course_managers|node|course_group|form */     0 => 'field_alumni_specialist',
   /* group_course_managers|node|course_group|form */     1 => 'field_course_director',
   /* group_course_managers|node|course_group|form */     2 => 'field_course_event_coordinator',
   /* group_course_managers|node|course_group|form */     3 => 'field_course_faculty',
   /* group_course_managers|node|course_group|form */     4 => 'field_course_seminar_leader',
   /* group_course_managers|node|course_group|form */     5 => 'field_course_support_staff',
   /* group_course_managers|node|course_group|form */     6 => 'field_deputy_course_director',
   /* group_course_managers|node|course_group|form */   ),
   /* group_course_managers|node|course_group|form */   'format_type' => 'fieldset',
   /* group_course_managers|node|course_group|form */   'format_settings' => array(
   /* group_course_managers|node|course_group|form */     'label' => 'Course Managers',
   /* group_course_managers|node|course_group|form */     'instance_settings' => array(
   /* group_course_managers|node|course_group|form */       'required_fields' => 1,
   /* group_course_managers|node|course_group|form */       'id' => '',
   /* group_course_managers|node|course_group|form */       'classes' => 'group-course-managers field-group-fieldset',
   /* group_course_managers|node|course_group|form */       'description' => '',
   /* group_course_managers|node|course_group|form */     ),
   /* group_course_managers|node|course_group|form */     'formatter' => 'collapsed',
   /* group_course_managers|node|course_group|form */   ),
   /* group_course_managers|node|course_group|form */ );
  $field_groups['group_course_managers|node|course_group|form'] = $field_group;

   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group = new stdClass();
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->api_version = 1;
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->identifier = 'group_ind_items_level2|field_collection_item|field_session_day|default';
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->group_name = 'group_ind_items_level2';
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->entity_type = 'field_collection_item';
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->bundle = 'field_session_day';
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->mode = 'default';
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->parent_name = '';
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ $field_group->data = array(
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   'label' => 'Ind Items level2',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   'weight' => '0',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   'children' => array(
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     0 => 'field_description',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     1 => 'field_media',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     2 => 'field_session_presenter',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     3 => 'field_title',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     4 => 'field_unit',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   ),
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   'format_type' => 'fieldset',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   'format_settings' => array(
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     'label' => 'Ind Items level2',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     'instance_settings' => array(
   /* group_ind_items_level2|field_collection_item|field_session_day|default */       'id' => '',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */       'classes' => 'group-ind-items-level2 field-group-fieldset',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */       'description' => '',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     ),
   /* group_ind_items_level2|field_collection_item|field_session_day|default */     'formatter' => 'collapsed',
   /* group_ind_items_level2|field_collection_item|field_session_day|default */   ),
   /* group_ind_items_level2|field_collection_item|field_session_day|default */ );
  $field_groups['group_ind_items_level2|field_collection_item|field_session_day|default'] = $field_group;

   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group = new stdClass();
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->api_version = 1;
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->identifier = 'group_ind_items_level3|field_collection_item|field_unit|default';
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->group_name = 'group_ind_items_level3';
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->entity_type = 'field_collection_item';
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->bundle = 'field_unit';
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->mode = 'default';
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->parent_name = '';
   /* group_ind_items_level3|field_collection_item|field_unit|default */ $field_group->data = array(
   /* group_ind_items_level3|field_collection_item|field_unit|default */   'label' => 'Ind Items level3',
   /* group_ind_items_level3|field_collection_item|field_unit|default */   'weight' => '0',
   /* group_ind_items_level3|field_collection_item|field_unit|default */   'children' => array(
   /* group_ind_items_level3|field_collection_item|field_unit|default */     0 => 'field_description',
   /* group_ind_items_level3|field_collection_item|field_unit|default */     1 => 'field_media',
   /* group_ind_items_level3|field_collection_item|field_unit|default */     2 => 'field_session_presenter',
   /* group_ind_items_level3|field_collection_item|field_unit|default */     3 => 'field_title',
   /* group_ind_items_level3|field_collection_item|field_unit|default */   ),
   /* group_ind_items_level3|field_collection_item|field_unit|default */   'format_type' => 'fieldset',
   /* group_ind_items_level3|field_collection_item|field_unit|default */   'format_settings' => array(
   /* group_ind_items_level3|field_collection_item|field_unit|default */     'label' => 'Ind Items level3',
   /* group_ind_items_level3|field_collection_item|field_unit|default */     'instance_settings' => array(
   /* group_ind_items_level3|field_collection_item|field_unit|default */       'id' => '',
   /* group_ind_items_level3|field_collection_item|field_unit|default */       'classes' => 'group-ind-items-level3 field-group-fieldset',
   /* group_ind_items_level3|field_collection_item|field_unit|default */       'description' => '',
   /* group_ind_items_level3|field_collection_item|field_unit|default */     ),
   /* group_ind_items_level3|field_collection_item|field_unit|default */     'formatter' => 'collapsed',
   /* group_ind_items_level3|field_collection_item|field_unit|default */   ),
   /* group_ind_items_level3|field_collection_item|field_unit|default */ );
  $field_groups['group_ind_items_level3|field_collection_item|field_unit|default'] = $field_group;

   /* group_level1|field_collection_item|field_session|default */ $field_group = new stdClass();
   /* group_level1|field_collection_item|field_session|default */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_level1|field_collection_item|field_session|default */ $field_group->api_version = 1;
   /* group_level1|field_collection_item|field_session|default */ $field_group->identifier = 'group_level1|field_collection_item|field_session|default';
   /* group_level1|field_collection_item|field_session|default */ $field_group->group_name = 'group_level1';
   /* group_level1|field_collection_item|field_session|default */ $field_group->entity_type = 'field_collection_item';
   /* group_level1|field_collection_item|field_session|default */ $field_group->bundle = 'field_session';
   /* group_level1|field_collection_item|field_session|default */ $field_group->mode = 'default';
   /* group_level1|field_collection_item|field_session|default */ $field_group->parent_name = '';
   /* group_level1|field_collection_item|field_session|default */ $field_group->data = array(
   /* group_level1|field_collection_item|field_session|default */   'label' => 'Level1',
   /* group_level1|field_collection_item|field_session|default */   'weight' => '0',
   /* group_level1|field_collection_item|field_session|default */   'children' => array(
   /* group_level1|field_collection_item|field_session|default */     0 => 'field_description',
   /* group_level1|field_collection_item|field_session|default */     1 => 'field_session_day',
   /* group_level1|field_collection_item|field_session|default */     2 => 'field_title',
   /* group_level1|field_collection_item|field_session|default */   ),
   /* group_level1|field_collection_item|field_session|default */   'format_type' => 'fieldset',
   /* group_level1|field_collection_item|field_session|default */   'format_settings' => array(
   /* group_level1|field_collection_item|field_session|default */     'label' => 'Level1',
   /* group_level1|field_collection_item|field_session|default */     'instance_settings' => array(
   /* group_level1|field_collection_item|field_session|default */       'id' => '',
   /* group_level1|field_collection_item|field_session|default */       'classes' => 'group-level1 field-group-fieldset',
   /* group_level1|field_collection_item|field_session|default */       'description' => '',
   /* group_level1|field_collection_item|field_session|default */     ),
   /* group_level1|field_collection_item|field_session|default */     'formatter' => 'collapsed',
   /* group_level1|field_collection_item|field_session|default */   ),
   /* group_level1|field_collection_item|field_session|default */ );
  $field_groups['group_level1|field_collection_item|field_session|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Course Managers');
  t('Ind Items level2');
  t('Ind Items level3');
  t('Level1');

  return $field_groups;
}
