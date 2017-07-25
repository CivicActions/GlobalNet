<?php
/**
 * @file
 * gn2_base_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_base_config_field_group_info() {
  $field_groups = array();

   /* group_account|user|user|form */ $field_group = new stdClass();
   /* group_account|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_account|user|user|form */ $field_group->api_version = 1;
   /* group_account|user|user|form */ $field_group->identifier = 'group_account|user|user|form';
   /* group_account|user|user|form */ $field_group->group_name = 'group_account';
   /* group_account|user|user|form */ $field_group->entity_type = 'user';
   /* group_account|user|user|form */ $field_group->bundle = 'user';
   /* group_account|user|user|form */ $field_group->mode = 'form';
   /* group_account|user|user|form */ $field_group->parent_name = '';
   /* group_account|user|user|form */ $field_group->data = array(
   /* group_account|user|user|form */   'label' => 'Account',
   /* group_account|user|user|form */   'weight' => '0',
   /* group_account|user|user|form */   'children' => array(
   /* group_account|user|user|form */     0 => 'group_basic_info',
   /* group_account|user|user|form */     1 => 'group_bigraphy',
   /* group_account|user|user|form */     2 => 'group_contact_info',
   /* group_account|user|user|form */     3 => 'group_education',
   /* group_account|user|user|form */     4 => 'group_employers',
   /* group_account|user|user|form */     5 => 'group_expertise',
   /* group_account|user|user|form */     6 => 'group_interests_tab',
   /* group_account|user|user|form */     7 => 'group_settings',
   /* group_account|user|user|form */   ),
   /* group_account|user|user|form */   'format_type' => 'htabs',
   /* group_account|user|user|form */   'format_settings' => array(
   /* group_account|user|user|form */     'label' => 'Account',
   /* group_account|user|user|form */     'instance_settings' => array(
   /* group_account|user|user|form */       'classes' => 'group-user-account field-group-htabs',
   /* group_account|user|user|form */     ),
   /* group_account|user|user|form */   ),
   /* group_account|user|user|form */ );
  $field_groups['group_account|user|user|form'] = $field_group;

   /* group_addl_media|node|announcement|form */ $field_group = new stdClass();
   /* group_addl_media|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_addl_media|node|announcement|form */ $field_group->api_version = 1;
   /* group_addl_media|node|announcement|form */ $field_group->identifier = 'group_addl_media|node|announcement|form';
   /* group_addl_media|node|announcement|form */ $field_group->group_name = 'group_addl_media';
   /* group_addl_media|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_addl_media|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_addl_media|node|announcement|form */ $field_group->mode = 'form';
   /* group_addl_media|node|announcement|form */ $field_group->parent_name = '';
   /* group_addl_media|node|announcement|form */ $field_group->data = array(
   /* group_addl_media|node|announcement|form */   'label' => 'Files',
   /* group_addl_media|node|announcement|form */   'weight' => '1',
   /* group_addl_media|node|announcement|form */   'children' => array(
   /* group_addl_media|node|announcement|form */     0 => 'field_main_image',
   /* group_addl_media|node|announcement|form */     1 => 'field_thumbnail_image',
   /* group_addl_media|node|announcement|form */   ),
   /* group_addl_media|node|announcement|form */   'format_type' => 'fieldset',
   /* group_addl_media|node|announcement|form */   'format_settings' => array(
   /* group_addl_media|node|announcement|form */     'label' => 'Files',
   /* group_addl_media|node|announcement|form */     'instance_settings' => array(
   /* group_addl_media|node|announcement|form */       'required_fields' => 0,
   /* group_addl_media|node|announcement|form */       'classes' => 'group-addl-media field-group-fieldset',
   /* group_addl_media|node|announcement|form */       'description' => 'Attach images and files associated with the announcement here',
   /* group_addl_media|node|announcement|form */     ),
   /* group_addl_media|node|announcement|form */     'formatter' => 'collapsed',
   /* group_addl_media|node|announcement|form */   ),
   /* group_addl_media|node|announcement|form */ );
  $field_groups['group_addl_media|node|announcement|form'] = $field_group;

   /* group_addl_media|node|news|form */ $field_group = new stdClass();
   /* group_addl_media|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_addl_media|node|news|form */ $field_group->api_version = 1;
   /* group_addl_media|node|news|form */ $field_group->identifier = 'group_addl_media|node|news|form';
   /* group_addl_media|node|news|form */ $field_group->group_name = 'group_addl_media';
   /* group_addl_media|node|news|form */ $field_group->entity_type = 'node';
   /* group_addl_media|node|news|form */ $field_group->bundle = 'news';
   /* group_addl_media|node|news|form */ $field_group->mode = 'form';
   /* group_addl_media|node|news|form */ $field_group->parent_name = '';
   /* group_addl_media|node|news|form */ $field_group->data = array(
   /* group_addl_media|node|news|form */   'label' => 'Files',
   /* group_addl_media|node|news|form */   'weight' => '1',
   /* group_addl_media|node|news|form */   'children' => array(
   /* group_addl_media|node|news|form */     0 => 'field_additional_images',
   /* group_addl_media|node|news|form */     1 => 'field_main_image',
   /* group_addl_media|node|news|form */     2 => 'field_thumbnail_image',
   /* group_addl_media|node|news|form */     3 => 'field_media',
   /* group_addl_media|node|news|form */   ),
   /* group_addl_media|node|news|form */   'format_type' => 'fieldset',
   /* group_addl_media|node|news|form */   'format_settings' => array(
   /* group_addl_media|node|news|form */     'label' => 'Files',
   /* group_addl_media|node|news|form */     'instance_settings' => array(
   /* group_addl_media|node|news|form */       'required_fields' => 0,
   /* group_addl_media|node|news|form */       'classes' => 'group-addl-media field-group-fieldset',
   /* group_addl_media|node|news|form */       'description' => 'Attach related images and files here',
   /* group_addl_media|node|news|form */     ),
   /* group_addl_media|node|news|form */     'formatter' => 'collapsed',
   /* group_addl_media|node|news|form */   ),
   /* group_addl_media|node|news|form */ );
  $field_groups['group_addl_media|node|news|form'] = $field_group;

   /* group_admin_settings|user|user|form */ $field_group = new stdClass();
   /* group_admin_settings|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_admin_settings|user|user|form */ $field_group->api_version = 1;
   /* group_admin_settings|user|user|form */ $field_group->identifier = 'group_admin_settings|user|user|form';
   /* group_admin_settings|user|user|form */ $field_group->group_name = 'group_admin_settings';
   /* group_admin_settings|user|user|form */ $field_group->entity_type = 'user';
   /* group_admin_settings|user|user|form */ $field_group->bundle = 'user';
   /* group_admin_settings|user|user|form */ $field_group->mode = 'form';
   /* group_admin_settings|user|user|form */ $field_group->parent_name = 'group_settings';
   /* group_admin_settings|user|user|form */ $field_group->data = array(
   /* group_admin_settings|user|user|form */   'label' => 'Admin settings',
   /* group_admin_settings|user|user|form */   'weight' => '9',
   /* group_admin_settings|user|user|form */   'children' => array(
   /* group_admin_settings|user|user|form */     0 => 'og_user_node',
   /* group_admin_settings|user|user|form */     1 => 'field_org_role',
   /* group_admin_settings|user|user|form */     2 => 'redirect',
   /* group_admin_settings|user|user|form */   ),
   /* group_admin_settings|user|user|form */   'format_type' => 'fieldset',
   /* group_admin_settings|user|user|form */   'format_settings' => array(
   /* group_admin_settings|user|user|form */     'label' => 'Admin settings',
   /* group_admin_settings|user|user|form */     'instance_settings' => array(
   /* group_admin_settings|user|user|form */       'required_fields' => 1,
   /* group_admin_settings|user|user|form */       'classes' => 'group-admin-settings field-group-fieldset',
   /* group_admin_settings|user|user|form */       'description' => '',
   /* group_admin_settings|user|user|form */     ),
   /* group_admin_settings|user|user|form */     'formatter' => 'collapsed',
   /* group_admin_settings|user|user|form */   ),
   /* group_admin_settings|user|user|form */ );
  $field_groups['group_admin_settings|user|user|form'] = $field_group;

   /* group_ass_media|node|publication|form */ $field_group = new stdClass();
   /* group_ass_media|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_ass_media|node|publication|form */ $field_group->api_version = 1;
   /* group_ass_media|node|publication|form */ $field_group->identifier = 'group_ass_media|node|publication|form';
   /* group_ass_media|node|publication|form */ $field_group->group_name = 'group_ass_media';
   /* group_ass_media|node|publication|form */ $field_group->entity_type = 'node';
   /* group_ass_media|node|publication|form */ $field_group->bundle = 'publication';
   /* group_ass_media|node|publication|form */ $field_group->mode = 'form';
   /* group_ass_media|node|publication|form */ $field_group->parent_name = '';
   /* group_ass_media|node|publication|form */ $field_group->data = array(
   /* group_ass_media|node|publication|form */   'label' => 'Files',
   /* group_ass_media|node|publication|form */   'weight' => '1',
   /* group_ass_media|node|publication|form */   'children' => array(
   /* group_ass_media|node|publication|form */     0 => 'field_main_image',
   /* group_ass_media|node|publication|form */     1 => 'field_thumbnail_image',
   /* group_ass_media|node|publication|form */     2 => 'field_media',
   /* group_ass_media|node|publication|form */   ),
   /* group_ass_media|node|publication|form */   'format_type' => 'fieldset',
   /* group_ass_media|node|publication|form */   'format_settings' => array(
   /* group_ass_media|node|publication|form */     'label' => 'Files',
   /* group_ass_media|node|publication|form */     'instance_settings' => array(
   /* group_ass_media|node|publication|form */       'required_fields' => 0,
   /* group_ass_media|node|publication|form */       'classes' => 'group-ass-media field-group-fieldset',
   /* group_ass_media|node|publication|form */       'description' => '',
   /* group_ass_media|node|publication|form */     ),
   /* group_ass_media|node|publication|form */     'formatter' => 'collapsed',
   /* group_ass_media|node|publication|form */   ),
   /* group_ass_media|node|publication|form */ );
  $field_groups['group_ass_media|node|publication|form'] = $field_group;

   /* group_attributes|node|organization|form */ $field_group = new stdClass();
   /* group_attributes|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_attributes|node|organization|form */ $field_group->api_version = 1;
   /* group_attributes|node|organization|form */ $field_group->identifier = 'group_attributes|node|organization|form';
   /* group_attributes|node|organization|form */ $field_group->group_name = 'group_attributes';
   /* group_attributes|node|organization|form */ $field_group->entity_type = 'node';
   /* group_attributes|node|organization|form */ $field_group->bundle = 'organization';
   /* group_attributes|node|organization|form */ $field_group->mode = 'form';
   /* group_attributes|node|organization|form */ $field_group->parent_name = '';
   /* group_attributes|node|organization|form */ $field_group->data = array(
   /* group_attributes|node|organization|form */   'label' => 'Attributes',
   /* group_attributes|node|organization|form */   'weight' => '6',
   /* group_attributes|node|organization|form */   'children' => array(
   /* group_attributes|node|organization|form */     0 => 'field_domain',
   /* group_attributes|node|organization|form */   ),
   /* group_attributes|node|organization|form */   'format_type' => 'tab',
   /* group_attributes|node|organization|form */   'format_settings' => array(
   /* group_attributes|node|organization|form */     'formatter' => 'closed',
   /* group_attributes|node|organization|form */     'instance_settings' => array(
   /* group_attributes|node|organization|form */       'description' => '',
   /* group_attributes|node|organization|form */       'classes' => '',
   /* group_attributes|node|organization|form */       'required_fields' => 1,
   /* group_attributes|node|organization|form */     ),
   /* group_attributes|node|organization|form */   ),
   /* group_attributes|node|organization|form */ );
  $field_groups['group_attributes|node|organization|form'] = $field_group;

   /* group_basic_information|node|announcement|form */ $field_group = new stdClass();
   /* group_basic_information|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|announcement|form */ $field_group->api_version = 1;
   /* group_basic_information|node|announcement|form */ $field_group->identifier = 'group_basic_information|node|announcement|form';
   /* group_basic_information|node|announcement|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_basic_information|node|announcement|form */ $field_group->mode = 'form';
   /* group_basic_information|node|announcement|form */ $field_group->parent_name = '';
   /* group_basic_information|node|announcement|form */ $field_group->data = array(
   /* group_basic_information|node|announcement|form */   'label' => 'Basic Information',
   /* group_basic_information|node|announcement|form */   'weight' => '0',
   /* group_basic_information|node|announcement|form */   'children' => array(
   /* group_basic_information|node|announcement|form */     0 => 'body',
   /* group_basic_information|node|announcement|form */     1 => 'language',
   /* group_basic_information|node|announcement|form */     2 => 'title',
   /* group_basic_information|node|announcement|form */   ),
   /* group_basic_information|node|announcement|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|announcement|form */   'format_settings' => array(
   /* group_basic_information|node|announcement|form */     'label' => 'Basic Information',
   /* group_basic_information|node|announcement|form */     'instance_settings' => array(
   /* group_basic_information|node|announcement|form */       'required_fields' => 1,
   /* group_basic_information|node|announcement|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|announcement|form */       'description' => '',
   /* group_basic_information|node|announcement|form */     ),
   /* group_basic_information|node|announcement|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|announcement|form */   ),
   /* group_basic_information|node|announcement|form */ );
  $field_groups['group_basic_information|node|announcement|form'] = $field_group;

   /* group_basic_information|node|course|form */ $field_group = new stdClass();
   /* group_basic_information|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|course|form */ $field_group->api_version = 1;
   /* group_basic_information|node|course|form */ $field_group->identifier = 'group_basic_information|node|course|form';
   /* group_basic_information|node|course|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|course|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|course|form */ $field_group->bundle = 'course';
   /* group_basic_information|node|course|form */ $field_group->mode = 'form';
   /* group_basic_information|node|course|form */ $field_group->parent_name = '';
   /* group_basic_information|node|course|form */ $field_group->data = array(
   /* group_basic_information|node|course|form */   'label' => 'Basic Information',
   /* group_basic_information|node|course|form */   'weight' => '0',
   /* group_basic_information|node|course|form */   'children' => array(
   /* group_basic_information|node|course|form */     0 => 'field_rec_links',
   /* group_basic_information|node|course|form */     1 => 'field_will_this_course_have_sess',
   /* group_basic_information|node|course|form */     2 => 'language',
   /* group_basic_information|node|course|form */     3 => 'group_dates_section',
   /* group_basic_information|node|course|form */     4 => 'group_image_section',
   /* group_basic_information|node|course|form */     5 => 'group_title_section',
   /* group_basic_information|node|course|form */   ),
   /* group_basic_information|node|course|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|course|form */   'format_settings' => array(
   /* group_basic_information|node|course|form */     'label' => 'Basic Information',
   /* group_basic_information|node|course|form */     'instance_settings' => array(
   /* group_basic_information|node|course|form */       'required_fields' => 1,
   /* group_basic_information|node|course|form */       'classes' => 'group-basic-information field-group-fieldset ',
   /* group_basic_information|node|course|form */       'description' => '',
   /* group_basic_information|node|course|form */     ),
   /* group_basic_information|node|course|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|course|form */   ),
   /* group_basic_information|node|course|form */ );
  $field_groups['group_basic_information|node|course|form'] = $field_group;

   /* group_basic_information|node|event|form */ $field_group = new stdClass();
   /* group_basic_information|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|event|form */ $field_group->api_version = 1;
   /* group_basic_information|node|event|form */ $field_group->identifier = 'group_basic_information|node|event|form';
   /* group_basic_information|node|event|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|event|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|event|form */ $field_group->bundle = 'event';
   /* group_basic_information|node|event|form */ $field_group->mode = 'form';
   /* group_basic_information|node|event|form */ $field_group->parent_name = '';
   /* group_basic_information|node|event|form */ $field_group->data = array(
   /* group_basic_information|node|event|form */   'label' => 'Basic Information',
   /* group_basic_information|node|event|form */   'weight' => '0',
   /* group_basic_information|node|event|form */   'children' => array(
   /* group_basic_information|node|event|form */     0 => 'language',
   /* group_basic_information|node|event|form */     1 => 'group_date_section',
   /* group_basic_information|node|event|form */     2 => 'group_event_location_addl_info',
   /* group_basic_information|node|event|form */     3 => 'group_event_type',
   /* group_basic_information|node|event|form */     4 => 'group_image_section',
   /* group_basic_information|node|event|form */     5 => 'group_title_section',
   /* group_basic_information|node|event|form */   ),
   /* group_basic_information|node|event|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|event|form */   'format_settings' => array(
   /* group_basic_information|node|event|form */     'label' => 'Basic Information',
   /* group_basic_information|node|event|form */     'instance_settings' => array(
   /* group_basic_information|node|event|form */       'required_fields' => 1,
   /* group_basic_information|node|event|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|event|form */       'description' => '',
   /* group_basic_information|node|event|form */     ),
   /* group_basic_information|node|event|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|event|form */   ),
   /* group_basic_information|node|event|form */ );
  $field_groups['group_basic_information|node|event|form'] = $field_group;

   /* group_basic_information|node|group|form */ $field_group = new stdClass();
   /* group_basic_information|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|group|form */ $field_group->api_version = 1;
   /* group_basic_information|node|group|form */ $field_group->identifier = 'group_basic_information|node|group|form';
   /* group_basic_information|node|group|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|group|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|group|form */ $field_group->bundle = 'group';
   /* group_basic_information|node|group|form */ $field_group->mode = 'form';
   /* group_basic_information|node|group|form */ $field_group->parent_name = '';
   /* group_basic_information|node|group|form */ $field_group->data = array(
   /* group_basic_information|node|group|form */   'label' => 'Basic Information',
   /* group_basic_information|node|group|form */   'weight' => '2',
   /* group_basic_information|node|group|form */   'children' => array(
   /* group_basic_information|node|group|form */     0 => 'body',
   /* group_basic_information|node|group|form */     1 => 'field_main_image',
   /* group_basic_information|node|group|form */     2 => 'field_group_short_title',
   /* group_basic_information|node|group|form */     3 => 'field_rec_links',
   /* group_basic_information|node|group|form */     4 => 'field_group_leader',
   /* group_basic_information|node|group|form */     5 => 'language',
   /* group_basic_information|node|group|form */     6 => 'title',
   /* group_basic_information|node|group|form */   ),
   /* group_basic_information|node|group|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|group|form */   'format_settings' => array(
   /* group_basic_information|node|group|form */     'label' => 'Basic Information',
   /* group_basic_information|node|group|form */     'instance_settings' => array(
   /* group_basic_information|node|group|form */       'required_fields' => 1,
   /* group_basic_information|node|group|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|group|form */       'description' => '',
   /* group_basic_information|node|group|form */     ),
   /* group_basic_information|node|group|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|group|form */   ),
   /* group_basic_information|node|group|form */ );
  $field_groups['group_basic_information|node|group|form'] = $field_group;

   /* group_basic_information|node|organization|form */ $field_group = new stdClass();
   /* group_basic_information|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|organization|form */ $field_group->api_version = 1;
   /* group_basic_information|node|organization|form */ $field_group->identifier = 'group_basic_information|node|organization|form';
   /* group_basic_information|node|organization|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|organization|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|organization|form */ $field_group->bundle = 'organization';
   /* group_basic_information|node|organization|form */ $field_group->mode = 'form';
   /* group_basic_information|node|organization|form */ $field_group->parent_name = '';
   /* group_basic_information|node|organization|form */ $field_group->data = array(
   /* group_basic_information|node|organization|form */   'label' => 'Basic Information',
   /* group_basic_information|node|organization|form */   'weight' => '0',
   /* group_basic_information|node|organization|form */   'children' => array(
   /* group_basic_information|node|organization|form */     0 => 'body',
   /* group_basic_information|node|organization|form */     1 => 'field_contact_information',
   /* group_basic_information|node|organization|form */     2 => 'field_org_short_title',
   /* group_basic_information|node|organization|form */     3 => 'group_group',
   /* group_basic_information|node|organization|form */     4 => 'language',
   /* group_basic_information|node|organization|form */     5 => 'title',
   /* group_basic_information|node|organization|form */   ),
   /* group_basic_information|node|organization|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|organization|form */   'format_settings' => array(
   /* group_basic_information|node|organization|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|organization|form */     'instance_settings' => array(
   /* group_basic_information|node|organization|form */       'description' => '',
   /* group_basic_information|node|organization|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|organization|form */       'required_fields' => 1,
   /* group_basic_information|node|organization|form */     ),
   /* group_basic_information|node|organization|form */   ),
   /* group_basic_information|node|organization|form */ );
  $field_groups['group_basic_information|node|organization|form'] = $field_group;

   /* group_basic_information|node|post|form */ $field_group = new stdClass();
   /* group_basic_information|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|post|form */ $field_group->api_version = 1;
   /* group_basic_information|node|post|form */ $field_group->identifier = 'group_basic_information|node|post|form';
   /* group_basic_information|node|post|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|post|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|post|form */ $field_group->bundle = 'post';
   /* group_basic_information|node|post|form */ $field_group->mode = 'form';
   /* group_basic_information|node|post|form */ $field_group->parent_name = '';
   /* group_basic_information|node|post|form */ $field_group->data = array(
   /* group_basic_information|node|post|form */   'label' => 'Basic Information',
   /* group_basic_information|node|post|form */   'weight' => '0',
   /* group_basic_information|node|post|form */   'children' => array(
   /* group_basic_information|node|post|form */     0 => 'body',
   /* group_basic_information|node|post|form */     1 => 'language',
   /* group_basic_information|node|post|form */     2 => 'title',
   /* group_basic_information|node|post|form */   ),
   /* group_basic_information|node|post|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|post|form */   'format_settings' => array(
   /* group_basic_information|node|post|form */     'label' => 'Basic Information',
   /* group_basic_information|node|post|form */     'instance_settings' => array(
   /* group_basic_information|node|post|form */       'required_fields' => 1,
   /* group_basic_information|node|post|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|post|form */       'description' => '',
   /* group_basic_information|node|post|form */     ),
   /* group_basic_information|node|post|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|post|form */   ),
   /* group_basic_information|node|post|form */ );
  $field_groups['group_basic_information|node|post|form'] = $field_group;

   /* group_basic_information|node|publication|form */ $field_group = new stdClass();
   /* group_basic_information|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|publication|form */ $field_group->api_version = 1;
   /* group_basic_information|node|publication|form */ $field_group->identifier = 'group_basic_information|node|publication|form';
   /* group_basic_information|node|publication|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|publication|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|publication|form */ $field_group->bundle = 'publication';
   /* group_basic_information|node|publication|form */ $field_group->mode = 'form';
   /* group_basic_information|node|publication|form */ $field_group->parent_name = '';
   /* group_basic_information|node|publication|form */ $field_group->data = array(
   /* group_basic_information|node|publication|form */   'label' => 'Basic Information',
   /* group_basic_information|node|publication|form */   'weight' => '0',
   /* group_basic_information|node|publication|form */   'children' => array(
   /* group_basic_information|node|publication|form */     0 => 'body',
   /* group_basic_information|node|publication|form */     1 => 'field_publication_author',
   /* group_basic_information|node|publication|form */     2 => 'field_publication_date',
   /* group_basic_information|node|publication|form */     3 => 'field_publisher',
   /* group_basic_information|node|publication|form */     4 => 'field_subtitle',
   /* group_basic_information|node|publication|form */     5 => 'language',
   /* group_basic_information|node|publication|form */     6 => 'title',
   /* group_basic_information|node|publication|form */   ),
   /* group_basic_information|node|publication|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|publication|form */   'format_settings' => array(
   /* group_basic_information|node|publication|form */     'label' => 'Basic Information',
   /* group_basic_information|node|publication|form */     'instance_settings' => array(
   /* group_basic_information|node|publication|form */       'required_fields' => 1,
   /* group_basic_information|node|publication|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|publication|form */       'description' => '',
   /* group_basic_information|node|publication|form */     ),
   /* group_basic_information|node|publication|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|publication|form */   ),
   /* group_basic_information|node|publication|form */ );
  $field_groups['group_basic_information|node|publication|form'] = $field_group;

   /* group_basic_info|node|help|form */ $field_group = new stdClass();
   /* group_basic_info|node|help|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_info|node|help|form */ $field_group->api_version = 1;
   /* group_basic_info|node|help|form */ $field_group->identifier = 'group_basic_info|node|help|form';
   /* group_basic_info|node|help|form */ $field_group->group_name = 'group_basic_info';
   /* group_basic_info|node|help|form */ $field_group->entity_type = 'node';
   /* group_basic_info|node|help|form */ $field_group->bundle = 'help';
   /* group_basic_info|node|help|form */ $field_group->mode = 'form';
   /* group_basic_info|node|help|form */ $field_group->parent_name = '';
   /* group_basic_info|node|help|form */ $field_group->data = array(
   /* group_basic_info|node|help|form */   'label' => 'Basic Information',
   /* group_basic_info|node|help|form */   'weight' => '0',
   /* group_basic_info|node|help|form */   'children' => array(
   /* group_basic_info|node|help|form */     0 => 'body',
   /* group_basic_info|node|help|form */     1 => 'title',
   /* group_basic_info|node|help|form */   ),
   /* group_basic_info|node|help|form */   'format_type' => 'fieldset',
   /* group_basic_info|node|help|form */   'format_settings' => array(
   /* group_basic_info|node|help|form */     'formatter' => 'collapsible',
   /* group_basic_info|node|help|form */     'instance_settings' => array(
   /* group_basic_info|node|help|form */       'description' => '',
   /* group_basic_info|node|help|form */       'classes' => 'group-basic-info field-group-fieldset',
   /* group_basic_info|node|help|form */       'required_fields' => 1,
   /* group_basic_info|node|help|form */     ),
   /* group_basic_info|node|help|form */   ),
   /* group_basic_info|node|help|form */ );
  $field_groups['group_basic_info|node|help|form'] = $field_group;

   /* group_basic_info|node|news|form */ $field_group = new stdClass();
   /* group_basic_info|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_info|node|news|form */ $field_group->api_version = 1;
   /* group_basic_info|node|news|form */ $field_group->identifier = 'group_basic_info|node|news|form';
   /* group_basic_info|node|news|form */ $field_group->group_name = 'group_basic_info';
   /* group_basic_info|node|news|form */ $field_group->entity_type = 'node';
   /* group_basic_info|node|news|form */ $field_group->bundle = 'news';
   /* group_basic_info|node|news|form */ $field_group->mode = 'form';
   /* group_basic_info|node|news|form */ $field_group->parent_name = '';
   /* group_basic_info|node|news|form */ $field_group->data = array(
   /* group_basic_info|node|news|form */   'label' => 'Basic Information',
   /* group_basic_info|node|news|form */   'weight' => '0',
   /* group_basic_info|node|news|form */   'children' => array(
   /* group_basic_info|node|news|form */     0 => 'body',
   /* group_basic_info|node|news|form */     1 => 'field_subtitle',
   /* group_basic_info|node|news|form */     2 => 'language',
   /* group_basic_info|node|news|form */     3 => 'title',
   /* group_basic_info|node|news|form */   ),
   /* group_basic_info|node|news|form */   'format_type' => 'fieldset',
   /* group_basic_info|node|news|form */   'format_settings' => array(
   /* group_basic_info|node|news|form */     'label' => 'Basic Information',
   /* group_basic_info|node|news|form */     'instance_settings' => array(
   /* group_basic_info|node|news|form */       'required_fields' => 1,
   /* group_basic_info|node|news|form */       'classes' => 'group-basic-info field-group-fieldset',
   /* group_basic_info|node|news|form */       'description' => '',
   /* group_basic_info|node|news|form */     ),
   /* group_basic_info|node|news|form */     'formatter' => 'collapsible',
   /* group_basic_info|node|news|form */   ),
   /* group_basic_info|node|news|form */ );
  $field_groups['group_basic_info|node|news|form'] = $field_group;

   /* group_basic_info|node|poll|form */ $field_group = new stdClass();
   /* group_basic_info|node|poll|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_info|node|poll|form */ $field_group->api_version = 1;
   /* group_basic_info|node|poll|form */ $field_group->identifier = 'group_basic_info|node|poll|form';
   /* group_basic_info|node|poll|form */ $field_group->group_name = 'group_basic_info';
   /* group_basic_info|node|poll|form */ $field_group->entity_type = 'node';
   /* group_basic_info|node|poll|form */ $field_group->bundle = 'poll';
   /* group_basic_info|node|poll|form */ $field_group->mode = 'form';
   /* group_basic_info|node|poll|form */ $field_group->parent_name = '';
   /* group_basic_info|node|poll|form */ $field_group->data = array(
   /* group_basic_info|node|poll|form */   'label' => 'Basic Information',
   /* group_basic_info|node|poll|form */   'weight' => '0',
   /* group_basic_info|node|poll|form */   'children' => array(
   /* group_basic_info|node|poll|form */     0 => 'language',
   /* group_basic_info|node|poll|form */     1 => 'title',
   /* group_basic_info|node|poll|form */     2 => 'choice_wrapper',
   /* group_basic_info|node|poll|form */   ),
   /* group_basic_info|node|poll|form */   'format_type' => 'fieldset',
   /* group_basic_info|node|poll|form */   'format_settings' => array(
   /* group_basic_info|node|poll|form */     'label' => 'Basic Information',
   /* group_basic_info|node|poll|form */     'instance_settings' => array(
   /* group_basic_info|node|poll|form */       'required_fields' => 1,
   /* group_basic_info|node|poll|form */       'classes' => 'group-basic-info field-group-fieldset',
   /* group_basic_info|node|poll|form */       'description' => '',
   /* group_basic_info|node|poll|form */     ),
   /* group_basic_info|node|poll|form */     'formatter' => 'collapsible',
   /* group_basic_info|node|poll|form */   ),
   /* group_basic_info|node|poll|form */ );
  $field_groups['group_basic_info|node|poll|form'] = $field_group;

   /* group_basic_info|user|user|form */ $field_group = new stdClass();
   /* group_basic_info|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_info|user|user|form */ $field_group->api_version = 1;
   /* group_basic_info|user|user|form */ $field_group->identifier = 'group_basic_info|user|user|form';
   /* group_basic_info|user|user|form */ $field_group->group_name = 'group_basic_info';
   /* group_basic_info|user|user|form */ $field_group->entity_type = 'user';
   /* group_basic_info|user|user|form */ $field_group->bundle = 'user';
   /* group_basic_info|user|user|form */ $field_group->mode = 'form';
   /* group_basic_info|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_basic_info|user|user|form */ $field_group->data = array(
   /* group_basic_info|user|user|form */   'label' => 'Basic Info',
   /* group_basic_info|user|user|form */   'weight' => '31',
   /* group_basic_info|user|user|form */   'children' => array(
   /* group_basic_info|user|user|form */     0 => 'group_birth_date',
   /* group_basic_info|user|user|form */     1 => 'group_country_section',
   /* group_basic_info|user|user|form */     2 => 'group_username_section',
   /* group_basic_info|user|user|form */   ),
   /* group_basic_info|user|user|form */   'format_type' => 'htab',
   /* group_basic_info|user|user|form */   'format_settings' => array(
   /* group_basic_info|user|user|form */     'label' => 'Basic Info',
   /* group_basic_info|user|user|form */     'instance_settings' => array(
   /* group_basic_info|user|user|form */       'required_fields' => 1,
   /* group_basic_info|user|user|form */       'id' => '',
   /* group_basic_info|user|user|form */       'classes' => '',
   /* group_basic_info|user|user|form */       'description' => '',
   /* group_basic_info|user|user|form */     ),
   /* group_basic_info|user|user|form */     'formatter' => 'open',
   /* group_basic_info|user|user|form */   ),
   /* group_basic_info|user|user|form */ );
  $field_groups['group_basic_info|user|user|form'] = $field_group;

   /* group_basic|node|alumni_group|form */ $field_group = new stdClass();
   /* group_basic|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_basic|node|alumni_group|form */ $field_group->identifier = 'group_basic|node|alumni_group|form';
   /* group_basic|node|alumni_group|form */ $field_group->group_name = 'group_basic';
   /* group_basic|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_basic|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_basic|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_basic|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_basic|node|alumni_group|form */ $field_group->data = array(
   /* group_basic|node|alumni_group|form */   'label' => 'Basic Information',
   /* group_basic|node|alumni_group|form */   'weight' => '0',
   /* group_basic|node|alumni_group|form */   'children' => array(
   /* group_basic|node|alumni_group|form */     0 => 'field_group_short_title',
   /* group_basic|node|alumni_group|form */     1 => 'body',
   /* group_basic|node|alumni_group|form */     2 => 'field_main_image',
   /* group_basic|node|alumni_group|form */     3 => 'field_rec_links',
   /* group_basic|node|alumni_group|form */     4 => 'title',
   /* group_basic|node|alumni_group|form */   ),
   /* group_basic|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_basic|node|alumni_group|form */   'format_settings' => array(
   /* group_basic|node|alumni_group|form */     'formatter' => 'collapsible',
   /* group_basic|node|alumni_group|form */     'instance_settings' => array(
   /* group_basic|node|alumni_group|form */       'description' => '',
   /* group_basic|node|alumni_group|form */       'classes' => 'group-basic field-group-fieldset',
   /* group_basic|node|alumni_group|form */       'required_fields' => 1,
   /* group_basic|node|alumni_group|form */     ),
   /* group_basic|node|alumni_group|form */   ),
   /* group_basic|node|alumni_group|form */ );
  $field_groups['group_basic|node|alumni_group|form'] = $field_group;

   /* group_basic|node|course_group|form */ $field_group = new stdClass();
   /* group_basic|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic|node|course_group|form */ $field_group->api_version = 1;
   /* group_basic|node|course_group|form */ $field_group->identifier = 'group_basic|node|course_group|form';
   /* group_basic|node|course_group|form */ $field_group->group_name = 'group_basic';
   /* group_basic|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_basic|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_basic|node|course_group|form */ $field_group->mode = 'form';
   /* group_basic|node|course_group|form */ $field_group->parent_name = '';
   /* group_basic|node|course_group|form */ $field_group->data = array(
   /* group_basic|node|course_group|form */   'label' => 'Basic Information',
   /* group_basic|node|course_group|form */   'weight' => '0',
   /* group_basic|node|course_group|form */   'children' => array(
   /* group_basic|node|course_group|form */     0 => 'body',
   /* group_basic|node|course_group|form */     1 => 'field_group_short_title',
   /* group_basic|node|course_group|form */     2 => 'field_main_image',
   /* group_basic|node|course_group|form */     3 => 'field_rec_links',
   /* group_basic|node|course_group|form */     4 => 'language',
   /* group_basic|node|course_group|form */     5 => 'title',
   /* group_basic|node|course_group|form */   ),
   /* group_basic|node|course_group|form */   'format_type' => 'fieldset',
   /* group_basic|node|course_group|form */   'format_settings' => array(
   /* group_basic|node|course_group|form */     'formatter' => 'collapsible',
   /* group_basic|node|course_group|form */     'instance_settings' => array(
   /* group_basic|node|course_group|form */       'description' => '',
   /* group_basic|node|course_group|form */       'classes' => 'group-basic field-group-fieldset',
   /* group_basic|node|course_group|form */       'required_fields' => 1,
   /* group_basic|node|course_group|form */     ),
   /* group_basic|node|course_group|form */   ),
   /* group_basic|node|course_group|form */ );
  $field_groups['group_basic|node|course_group|form'] = $field_group;

   /* group_basic|node|program|form */ $field_group = new stdClass();
   /* group_basic|node|program|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic|node|program|form */ $field_group->api_version = 1;
   /* group_basic|node|program|form */ $field_group->identifier = 'group_basic|node|program|form';
   /* group_basic|node|program|form */ $field_group->group_name = 'group_basic';
   /* group_basic|node|program|form */ $field_group->entity_type = 'node';
   /* group_basic|node|program|form */ $field_group->bundle = 'program';
   /* group_basic|node|program|form */ $field_group->mode = 'form';
   /* group_basic|node|program|form */ $field_group->parent_name = '';
   /* group_basic|node|program|form */ $field_group->data = array(
   /* group_basic|node|program|form */   'label' => 'Basic Information',
   /* group_basic|node|program|form */   'weight' => '0',
   /* group_basic|node|program|form */   'children' => array(
   /* group_basic|node|program|form */     0 => 'body',
   /* group_basic|node|program|form */     1 => 'field_main_image',
   /* group_basic|node|program|form */     2 => 'language',
   /* group_basic|node|program|form */     3 => 'title',
   /* group_basic|node|program|form */   ),
   /* group_basic|node|program|form */   'format_type' => 'fieldset',
   /* group_basic|node|program|form */   'format_settings' => array(
   /* group_basic|node|program|form */     'label' => 'Basic Information',
   /* group_basic|node|program|form */     'instance_settings' => array(
   /* group_basic|node|program|form */       'required_fields' => 1,
   /* group_basic|node|program|form */       'classes' => 'group-basic-information field-group-fieldset ',
   /* group_basic|node|program|form */       'description' => '',
   /* group_basic|node|program|form */     ),
   /* group_basic|node|program|form */     'formatter' => 'collapsible',
   /* group_basic|node|program|form */   ),
   /* group_basic|node|program|form */ );
  $field_groups['group_basic|node|program|form'] = $field_group;

   /* group_bigraphy|user|user|form */ $field_group = new stdClass();
   /* group_bigraphy|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_bigraphy|user|user|form */ $field_group->api_version = 1;
   /* group_bigraphy|user|user|form */ $field_group->identifier = 'group_bigraphy|user|user|form';
   /* group_bigraphy|user|user|form */ $field_group->group_name = 'group_bigraphy';
   /* group_bigraphy|user|user|form */ $field_group->entity_type = 'user';
   /* group_bigraphy|user|user|form */ $field_group->bundle = 'user';
   /* group_bigraphy|user|user|form */ $field_group->mode = 'form';
   /* group_bigraphy|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_bigraphy|user|user|form */ $field_group->data = array(
   /* group_bigraphy|user|user|form */   'label' => 'Biography',
   /* group_bigraphy|user|user|form */   'weight' => '33',
   /* group_bigraphy|user|user|form */   'children' => array(
   /* group_bigraphy|user|user|form */     0 => 'field_biography',
   /* group_bigraphy|user|user|form */     1 => 'field_bio_short',
   /* group_bigraphy|user|user|form */   ),
   /* group_bigraphy|user|user|form */   'format_type' => 'htab',
   /* group_bigraphy|user|user|form */   'format_settings' => array(
   /* group_bigraphy|user|user|form */     'formatter' => 'closed',
   /* group_bigraphy|user|user|form */     'instance_settings' => array(
   /* group_bigraphy|user|user|form */       'description' => '',
   /* group_bigraphy|user|user|form */       'classes' => 'group-bigraphy field-group-htab',
   /* group_bigraphy|user|user|form */       'required_fields' => 1,
   /* group_bigraphy|user|user|form */       'id' => '',
   /* group_bigraphy|user|user|form */     ),
   /* group_bigraphy|user|user|form */   ),
   /* group_bigraphy|user|user|form */ );
  $field_groups['group_bigraphy|user|user|form'] = $field_group;

   /* group_birth_date|user|user|form */ $field_group = new stdClass();
   /* group_birth_date|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_birth_date|user|user|form */ $field_group->api_version = 1;
   /* group_birth_date|user|user|form */ $field_group->identifier = 'group_birth_date|user|user|form';
   /* group_birth_date|user|user|form */ $field_group->group_name = 'group_birth_date';
   /* group_birth_date|user|user|form */ $field_group->entity_type = 'user';
   /* group_birth_date|user|user|form */ $field_group->bundle = 'user';
   /* group_birth_date|user|user|form */ $field_group->mode = 'form';
   /* group_birth_date|user|user|form */ $field_group->parent_name = 'group_basic_info';
   /* group_birth_date|user|user|form */ $field_group->data = array(
   /* group_birth_date|user|user|form */   'label' => 'Date section',
   /* group_birth_date|user|user|form */   'weight' => '54',
   /* group_birth_date|user|user|form */   'children' => array(
   /* group_birth_date|user|user|form */     0 => 'field_date_of_death',
   /* group_birth_date|user|user|form */   ),
   /* group_birth_date|user|user|form */   'format_type' => 'html5',
   /* group_birth_date|user|user|form */   'format_settings' => array(
   /* group_birth_date|user|user|form */     'label' => 'Date section',
   /* group_birth_date|user|user|form */     'instance_settings' => array(
   /* group_birth_date|user|user|form */       'id' => '',
   /* group_birth_date|user|user|form */       'classes' => 'group-section',
   /* group_birth_date|user|user|form */       'wrapper' => 'section',
   /* group_birth_date|user|user|form */     ),
   /* group_birth_date|user|user|form */   ),
   /* group_birth_date|user|user|form */ );
  $field_groups['group_birth_date|user|user|form'] = $field_group;

   /* group_call_to_action|node|organization|form */ $field_group = new stdClass();
   /* group_call_to_action|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_call_to_action|node|organization|form */ $field_group->api_version = 1;
   /* group_call_to_action|node|organization|form */ $field_group->identifier = 'group_call_to_action|node|organization|form';
   /* group_call_to_action|node|organization|form */ $field_group->group_name = 'group_call_to_action';
   /* group_call_to_action|node|organization|form */ $field_group->entity_type = 'node';
   /* group_call_to_action|node|organization|form */ $field_group->bundle = 'organization';
   /* group_call_to_action|node|organization|form */ $field_group->mode = 'form';
   /* group_call_to_action|node|organization|form */ $field_group->parent_name = '';
   /* group_call_to_action|node|organization|form */ $field_group->data = array(
   /* group_call_to_action|node|organization|form */   'label' => 'Call To Action',
   /* group_call_to_action|node|organization|form */   'weight' => '2',
   /* group_call_to_action|node|organization|form */   'children' => array(
   /* group_call_to_action|node|organization|form */     0 => 'field_call_to_action',
   /* group_call_to_action|node|organization|form */   ),
   /* group_call_to_action|node|organization|form */   'format_type' => 'fieldset',
   /* group_call_to_action|node|organization|form */   'format_settings' => array(
   /* group_call_to_action|node|organization|form */     'label' => 'Call To Action',
   /* group_call_to_action|node|organization|form */     'instance_settings' => array(
   /* group_call_to_action|node|organization|form */       'required_fields' => 0,
   /* group_call_to_action|node|organization|form */       'classes' => 'group-call-to-action field-group-fieldset',
   /* group_call_to_action|node|organization|form */       'description' => '',
   /* group_call_to_action|node|organization|form */     ),
   /* group_call_to_action|node|organization|form */     'formatter' => 'collapsed',
   /* group_call_to_action|node|organization|form */   ),
   /* group_call_to_action|node|organization|form */ );
  $field_groups['group_call_to_action|node|organization|form'] = $field_group;

   /* group_contact_info|user|user|form */ $field_group = new stdClass();
   /* group_contact_info|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_contact_info|user|user|form */ $field_group->api_version = 1;
   /* group_contact_info|user|user|form */ $field_group->identifier = 'group_contact_info|user|user|form';
   /* group_contact_info|user|user|form */ $field_group->group_name = 'group_contact_info';
   /* group_contact_info|user|user|form */ $field_group->entity_type = 'user';
   /* group_contact_info|user|user|form */ $field_group->bundle = 'user';
   /* group_contact_info|user|user|form */ $field_group->mode = 'form';
   /* group_contact_info|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_contact_info|user|user|form */ $field_group->data = array(
   /* group_contact_info|user|user|form */   'label' => 'Contact Info',
   /* group_contact_info|user|user|form */   'weight' => '32',
   /* group_contact_info|user|user|form */   'children' => array(
   /* group_contact_info|user|user|form */     0 => 'field_telephone',
   /* group_contact_info|user|user|form */     1 => 'group_social',
   /* group_contact_info|user|user|form */   ),
   /* group_contact_info|user|user|form */   'format_type' => 'htab',
   /* group_contact_info|user|user|form */   'format_settings' => array(
   /* group_contact_info|user|user|form */     'label' => 'Contact Info',
   /* group_contact_info|user|user|form */     'instance_settings' => array(
   /* group_contact_info|user|user|form */       'required_fields' => 1,
   /* group_contact_info|user|user|form */       'id' => '',
   /* group_contact_info|user|user|form */       'classes' => 'group-contact-info field-group-htab',
   /* group_contact_info|user|user|form */       'description' => '',
   /* group_contact_info|user|user|form */     ),
   /* group_contact_info|user|user|form */     'formatter' => 'closed',
   /* group_contact_info|user|user|form */   ),
   /* group_contact_info|user|user|form */ );
  $field_groups['group_contact_info|user|user|form'] = $field_group;

   /* group_content|node|post|teaserthumb */ $field_group = new stdClass();
   /* group_content|node|post|teaserthumb */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_content|node|post|teaserthumb */ $field_group->api_version = 1;
   /* group_content|node|post|teaserthumb */ $field_group->identifier = 'group_content|node|post|teaserthumb';
   /* group_content|node|post|teaserthumb */ $field_group->group_name = 'group_content';
   /* group_content|node|post|teaserthumb */ $field_group->entity_type = 'node';
   /* group_content|node|post|teaserthumb */ $field_group->bundle = 'post';
   /* group_content|node|post|teaserthumb */ $field_group->mode = 'teaserthumb';
   /* group_content|node|post|teaserthumb */ $field_group->parent_name = '';
   /* group_content|node|post|teaserthumb */ $field_group->data = array(
   /* group_content|node|post|teaserthumb */   'label' => 'Content',
   /* group_content|node|post|teaserthumb */   'weight' => '1',
   /* group_content|node|post|teaserthumb */   'children' => array(
   /* group_content|node|post|teaserthumb */     0 => 'body',
   /* group_content|node|post|teaserthumb */     1 => 'field_access_settings',
   /* group_content|node|post|teaserthumb */     2 => 'field_privacy_settings',
   /* group_content|node|post|teaserthumb */     3 => 'og_group_ref',
   /* group_content|node|post|teaserthumb */   ),
   /* group_content|node|post|teaserthumb */   'format_type' => 'fieldset',
   /* group_content|node|post|teaserthumb */   'format_settings' => array(
   /* group_content|node|post|teaserthumb */     'label' => 'Content',
   /* group_content|node|post|teaserthumb */     'instance_settings' => array(
   /* group_content|node|post|teaserthumb */       'classes' => 'group-content field-group-fieldset',
   /* group_content|node|post|teaserthumb */       'description' => '',
   /* group_content|node|post|teaserthumb */     ),
   /* group_content|node|post|teaserthumb */     'formatter' => 'open',
   /* group_content|node|post|teaserthumb */   ),
   /* group_content|node|post|teaserthumb */ );
  $field_groups['group_content|node|post|teaserthumb'] = $field_group;

   /* group_countries|node|alumni_group|form */ $field_group = new stdClass();
   /* group_countries|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_countries|node|alumni_group|form */ $field_group->identifier = 'group_countries|node|alumni_group|form';
   /* group_countries|node|alumni_group|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_countries|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_countries|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_countries|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_countries|node|alumni_group|form */ $field_group->data = array(
   /* group_countries|node|alumni_group|form */   'label' => 'Countries',
   /* group_countries|node|alumni_group|form */   'weight' => '4',
   /* group_countries|node|alumni_group|form */   'children' => array(
   /* group_countries|node|alumni_group|form */     0 => 'field_country',
   /* group_countries|node|alumni_group|form */   ),
   /* group_countries|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_countries|node|alumni_group|form */   'format_settings' => array(
   /* group_countries|node|alumni_group|form */     'label' => 'Countries',
   /* group_countries|node|alumni_group|form */     'instance_settings' => array(
   /* group_countries|node|alumni_group|form */       'required_fields' => 0,
   /* group_countries|node|alumni_group|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|alumni_group|form */       'description' => '',
   /* group_countries|node|alumni_group|form */     ),
   /* group_countries|node|alumni_group|form */     'formatter' => 'collapsed',
   /* group_countries|node|alumni_group|form */   ),
   /* group_countries|node|alumni_group|form */ );
  $field_groups['group_countries|node|alumni_group|form'] = $field_group;

   /* group_countries|node|announcement|form */ $field_group = new stdClass();
   /* group_countries|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|announcement|form */ $field_group->api_version = 1;
   /* group_countries|node|announcement|form */ $field_group->identifier = 'group_countries|node|announcement|form';
   /* group_countries|node|announcement|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_countries|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_countries|node|announcement|form */ $field_group->mode = 'form';
   /* group_countries|node|announcement|form */ $field_group->parent_name = '';
   /* group_countries|node|announcement|form */ $field_group->data = array(
   /* group_countries|node|announcement|form */   'label' => 'Countries',
   /* group_countries|node|announcement|form */   'weight' => '3',
   /* group_countries|node|announcement|form */   'children' => array(
   /* group_countries|node|announcement|form */     0 => 'field_country',
   /* group_countries|node|announcement|form */   ),
   /* group_countries|node|announcement|form */   'format_type' => 'fieldset',
   /* group_countries|node|announcement|form */   'format_settings' => array(
   /* group_countries|node|announcement|form */     'label' => 'Countries',
   /* group_countries|node|announcement|form */     'instance_settings' => array(
   /* group_countries|node|announcement|form */       'required_fields' => 0,
   /* group_countries|node|announcement|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|announcement|form */       'description' => '',
   /* group_countries|node|announcement|form */     ),
   /* group_countries|node|announcement|form */     'formatter' => 'collapsed',
   /* group_countries|node|announcement|form */   ),
   /* group_countries|node|announcement|form */ );
  $field_groups['group_countries|node|announcement|form'] = $field_group;

   /* group_countries|node|course_group|form */ $field_group = new stdClass();
   /* group_countries|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|course_group|form */ $field_group->api_version = 1;
   /* group_countries|node|course_group|form */ $field_group->identifier = 'group_countries|node|course_group|form';
   /* group_countries|node|course_group|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_countries|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_countries|node|course_group|form */ $field_group->mode = 'form';
   /* group_countries|node|course_group|form */ $field_group->parent_name = '';
   /* group_countries|node|course_group|form */ $field_group->data = array(
   /* group_countries|node|course_group|form */   'label' => 'Countries',
   /* group_countries|node|course_group|form */   'weight' => '2',
   /* group_countries|node|course_group|form */   'children' => array(
   /* group_countries|node|course_group|form */     0 => 'field_country',
   /* group_countries|node|course_group|form */   ),
   /* group_countries|node|course_group|form */   'format_type' => 'fieldset',
   /* group_countries|node|course_group|form */   'format_settings' => array(
   /* group_countries|node|course_group|form */     'label' => 'Countries',
   /* group_countries|node|course_group|form */     'instance_settings' => array(
   /* group_countries|node|course_group|form */       'required_fields' => 0,
   /* group_countries|node|course_group|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|course_group|form */       'description' => '',
   /* group_countries|node|course_group|form */     ),
   /* group_countries|node|course_group|form */     'formatter' => 'collapsed',
   /* group_countries|node|course_group|form */   ),
   /* group_countries|node|course_group|form */ );
  $field_groups['group_countries|node|course_group|form'] = $field_group;

   /* group_countries|node|course|form */ $field_group = new stdClass();
   /* group_countries|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|course|form */ $field_group->api_version = 1;
   /* group_countries|node|course|form */ $field_group->identifier = 'group_countries|node|course|form';
   /* group_countries|node|course|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|course|form */ $field_group->entity_type = 'node';
   /* group_countries|node|course|form */ $field_group->bundle = 'course';
   /* group_countries|node|course|form */ $field_group->mode = 'form';
   /* group_countries|node|course|form */ $field_group->parent_name = '';
   /* group_countries|node|course|form */ $field_group->data = array(
   /* group_countries|node|course|form */   'label' => 'Countries',
   /* group_countries|node|course|form */   'weight' => '4',
   /* group_countries|node|course|form */   'children' => array(
   /* group_countries|node|course|form */     0 => 'field_country',
   /* group_countries|node|course|form */   ),
   /* group_countries|node|course|form */   'format_type' => 'fieldset',
   /* group_countries|node|course|form */   'format_settings' => array(
   /* group_countries|node|course|form */     'label' => 'Countries',
   /* group_countries|node|course|form */     'instance_settings' => array(
   /* group_countries|node|course|form */       'required_fields' => 0,
   /* group_countries|node|course|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|course|form */       'description' => '',
   /* group_countries|node|course|form */     ),
   /* group_countries|node|course|form */     'formatter' => 'collapsed',
   /* group_countries|node|course|form */   ),
   /* group_countries|node|course|form */ );
  $field_groups['group_countries|node|course|form'] = $field_group;

   /* group_countries|node|event|form */ $field_group = new stdClass();
   /* group_countries|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|event|form */ $field_group->api_version = 1;
   /* group_countries|node|event|form */ $field_group->identifier = 'group_countries|node|event|form';
   /* group_countries|node|event|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|event|form */ $field_group->entity_type = 'node';
   /* group_countries|node|event|form */ $field_group->bundle = 'event';
   /* group_countries|node|event|form */ $field_group->mode = 'form';
   /* group_countries|node|event|form */ $field_group->parent_name = '';
   /* group_countries|node|event|form */ $field_group->data = array(
   /* group_countries|node|event|form */   'label' => 'Countries',
   /* group_countries|node|event|form */   'weight' => '5',
   /* group_countries|node|event|form */   'children' => array(
   /* group_countries|node|event|form */     0 => 'field_country',
   /* group_countries|node|event|form */   ),
   /* group_countries|node|event|form */   'format_type' => 'fieldset',
   /* group_countries|node|event|form */   'format_settings' => array(
   /* group_countries|node|event|form */     'label' => 'Countries',
   /* group_countries|node|event|form */     'instance_settings' => array(
   /* group_countries|node|event|form */       'required_fields' => 0,
   /* group_countries|node|event|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|event|form */       'description' => '',
   /* group_countries|node|event|form */     ),
   /* group_countries|node|event|form */     'formatter' => 'collapsed',
   /* group_countries|node|event|form */   ),
   /* group_countries|node|event|form */ );
  $field_groups['group_countries|node|event|form'] = $field_group;

   /* group_countries|node|group|form */ $field_group = new stdClass();
   /* group_countries|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|group|form */ $field_group->api_version = 1;
   /* group_countries|node|group|form */ $field_group->identifier = 'group_countries|node|group|form';
   /* group_countries|node|group|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|group|form */ $field_group->entity_type = 'node';
   /* group_countries|node|group|form */ $field_group->bundle = 'group';
   /* group_countries|node|group|form */ $field_group->mode = 'form';
   /* group_countries|node|group|form */ $field_group->parent_name = '';
   /* group_countries|node|group|form */ $field_group->data = array(
   /* group_countries|node|group|form */   'label' => 'Countries',
   /* group_countries|node|group|form */   'weight' => '4',
   /* group_countries|node|group|form */   'children' => array(
   /* group_countries|node|group|form */     0 => 'field_country',
   /* group_countries|node|group|form */   ),
   /* group_countries|node|group|form */   'format_type' => 'fieldset',
   /* group_countries|node|group|form */   'format_settings' => array(
   /* group_countries|node|group|form */     'label' => 'Countries',
   /* group_countries|node|group|form */     'instance_settings' => array(
   /* group_countries|node|group|form */       'required_fields' => 0,
   /* group_countries|node|group|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|group|form */       'description' => '',
   /* group_countries|node|group|form */     ),
   /* group_countries|node|group|form */     'formatter' => 'collapsed',
   /* group_countries|node|group|form */   ),
   /* group_countries|node|group|form */ );
  $field_groups['group_countries|node|group|form'] = $field_group;

   /* group_countries|node|news|form */ $field_group = new stdClass();
   /* group_countries|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|news|form */ $field_group->api_version = 1;
   /* group_countries|node|news|form */ $field_group->identifier = 'group_countries|node|news|form';
   /* group_countries|node|news|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|news|form */ $field_group->entity_type = 'node';
   /* group_countries|node|news|form */ $field_group->bundle = 'news';
   /* group_countries|node|news|form */ $field_group->mode = 'form';
   /* group_countries|node|news|form */ $field_group->parent_name = '';
   /* group_countries|node|news|form */ $field_group->data = array(
   /* group_countries|node|news|form */   'label' => 'Countries',
   /* group_countries|node|news|form */   'weight' => '3',
   /* group_countries|node|news|form */   'children' => array(
   /* group_countries|node|news|form */     0 => 'field_country',
   /* group_countries|node|news|form */   ),
   /* group_countries|node|news|form */   'format_type' => 'fieldset',
   /* group_countries|node|news|form */   'format_settings' => array(
   /* group_countries|node|news|form */     'label' => 'Countries',
   /* group_countries|node|news|form */     'instance_settings' => array(
   /* group_countries|node|news|form */       'required_fields' => 0,
   /* group_countries|node|news|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|news|form */       'description' => '',
   /* group_countries|node|news|form */     ),
   /* group_countries|node|news|form */     'formatter' => 'collapsed',
   /* group_countries|node|news|form */   ),
   /* group_countries|node|news|form */ );
  $field_groups['group_countries|node|news|form'] = $field_group;

   /* group_countries|node|post|form */ $field_group = new stdClass();
   /* group_countries|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|post|form */ $field_group->api_version = 1;
   /* group_countries|node|post|form */ $field_group->identifier = 'group_countries|node|post|form';
   /* group_countries|node|post|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|post|form */ $field_group->entity_type = 'node';
   /* group_countries|node|post|form */ $field_group->bundle = 'post';
   /* group_countries|node|post|form */ $field_group->mode = 'form';
   /* group_countries|node|post|form */ $field_group->parent_name = '';
   /* group_countries|node|post|form */ $field_group->data = array(
   /* group_countries|node|post|form */   'label' => 'Countries',
   /* group_countries|node|post|form */   'weight' => '3',
   /* group_countries|node|post|form */   'children' => array(
   /* group_countries|node|post|form */     0 => 'field_country',
   /* group_countries|node|post|form */   ),
   /* group_countries|node|post|form */   'format_type' => 'fieldset',
   /* group_countries|node|post|form */   'format_settings' => array(
   /* group_countries|node|post|form */     'label' => 'Countries',
   /* group_countries|node|post|form */     'instance_settings' => array(
   /* group_countries|node|post|form */       'required_fields' => 0,
   /* group_countries|node|post|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|post|form */       'description' => '',
   /* group_countries|node|post|form */     ),
   /* group_countries|node|post|form */     'formatter' => 'collapsed',
   /* group_countries|node|post|form */   ),
   /* group_countries|node|post|form */ );
  $field_groups['group_countries|node|post|form'] = $field_group;

   /* group_countries|node|publication|form */ $field_group = new stdClass();
   /* group_countries|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|publication|form */ $field_group->api_version = 1;
   /* group_countries|node|publication|form */ $field_group->identifier = 'group_countries|node|publication|form';
   /* group_countries|node|publication|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|publication|form */ $field_group->entity_type = 'node';
   /* group_countries|node|publication|form */ $field_group->bundle = 'publication';
   /* group_countries|node|publication|form */ $field_group->mode = 'form';
   /* group_countries|node|publication|form */ $field_group->parent_name = '';
   /* group_countries|node|publication|form */ $field_group->data = array(
   /* group_countries|node|publication|form */   'label' => 'Countries',
   /* group_countries|node|publication|form */   'weight' => '3',
   /* group_countries|node|publication|form */   'children' => array(
   /* group_countries|node|publication|form */     0 => 'field_country',
   /* group_countries|node|publication|form */   ),
   /* group_countries|node|publication|form */   'format_type' => 'fieldset',
   /* group_countries|node|publication|form */   'format_settings' => array(
   /* group_countries|node|publication|form */     'formatter' => 'collapsed',
   /* group_countries|node|publication|form */     'instance_settings' => array(
   /* group_countries|node|publication|form */       'description' => '',
   /* group_countries|node|publication|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|publication|form */       'id' => '',
   /* group_countries|node|publication|form */     ),
   /* group_countries|node|publication|form */   ),
   /* group_countries|node|publication|form */ );
  $field_groups['group_countries|node|publication|form'] = $field_group;

   /* group_country_section|user|user|form */ $field_group = new stdClass();
   /* group_country_section|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_country_section|user|user|form */ $field_group->api_version = 1;
   /* group_country_section|user|user|form */ $field_group->identifier = 'group_country_section|user|user|form';
   /* group_country_section|user|user|form */ $field_group->group_name = 'group_country_section';
   /* group_country_section|user|user|form */ $field_group->entity_type = 'user';
   /* group_country_section|user|user|form */ $field_group->bundle = 'user';
   /* group_country_section|user|user|form */ $field_group->mode = 'form';
   /* group_country_section|user|user|form */ $field_group->parent_name = 'group_basic_info';
   /* group_country_section|user|user|form */ $field_group->data = array(
   /* group_country_section|user|user|form */   'label' => 'Country section',
   /* group_country_section|user|user|form */   'weight' => '52',
   /* group_country_section|user|user|form */   'children' => array(
   /* group_country_section|user|user|form */     0 => 'field_country_of_representation',
   /* group_country_section|user|user|form */     1 => 'field_country_of_residence',
   /* group_country_section|user|user|form */     2 => 'field_nationality',
   /* group_country_section|user|user|form */     3 => 'field_cocom_region',
   /* group_country_section|user|user|form */   ),
   /* group_country_section|user|user|form */   'format_type' => 'html5',
   /* group_country_section|user|user|form */   'format_settings' => array(
   /* group_country_section|user|user|form */     'label' => 'Country section',
   /* group_country_section|user|user|form */     'instance_settings' => array(
   /* group_country_section|user|user|form */       'id' => '',
   /* group_country_section|user|user|form */       'classes' => 'group-country-section field-group-html5 group-section',
   /* group_country_section|user|user|form */       'wrapper' => 'section',
   /* group_country_section|user|user|form */     ),
   /* group_country_section|user|user|form */   ),
   /* group_country_section|user|user|form */ );
  $field_groups['group_country_section|user|user|form'] = $field_group;

   /* group_country|user|user|form */ $field_group = new stdClass();
   /* group_country|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_country|user|user|form */ $field_group->api_version = 1;
   /* group_country|user|user|form */ $field_group->identifier = 'group_country|user|user|form';
   /* group_country|user|user|form */ $field_group->group_name = 'group_country';
   /* group_country|user|user|form */ $field_group->entity_type = 'user';
   /* group_country|user|user|form */ $field_group->bundle = 'user';
   /* group_country|user|user|form */ $field_group->mode = 'form';
   /* group_country|user|user|form */ $field_group->parent_name = 'group_interests_tab';
   /* group_country|user|user|form */ $field_group->data = array(
   /* group_country|user|user|form */   'label' => 'Countries of Interest',
   /* group_country|user|user|form */   'weight' => '79',
   /* group_country|user|user|form */   'children' => array(
   /* group_country|user|user|form */     0 => 'field_countries_of_interest',
   /* group_country|user|user|form */   ),
   /* group_country|user|user|form */   'format_type' => 'fieldset',
   /* group_country|user|user|form */   'format_settings' => array(
   /* group_country|user|user|form */     'label' => 'Countries of Interest',
   /* group_country|user|user|form */     'instance_settings' => array(
   /* group_country|user|user|form */       'required_fields' => 0,
   /* group_country|user|user|form */       'classes' => '',
   /* group_country|user|user|form */       'description' => '',
   /* group_country|user|user|form */     ),
   /* group_country|user|user|form */     'formatter' => 'collapsed',
   /* group_country|user|user|form */   ),
   /* group_country|user|user|form */ );
  $field_groups['group_country|user|user|form'] = $field_group;

   /* group_course_managers|node|course|form */ $field_group = new stdClass();
   /* group_course_managers|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_course_managers|node|course|form */ $field_group->api_version = 1;
   /* group_course_managers|node|course|form */ $field_group->identifier = 'group_course_managers|node|course|form';
   /* group_course_managers|node|course|form */ $field_group->group_name = 'group_course_managers';
   /* group_course_managers|node|course|form */ $field_group->entity_type = 'node';
   /* group_course_managers|node|course|form */ $field_group->bundle = 'course';
   /* group_course_managers|node|course|form */ $field_group->mode = 'form';
   /* group_course_managers|node|course|form */ $field_group->parent_name = '';
   /* group_course_managers|node|course|form */ $field_group->data = array(
   /* group_course_managers|node|course|form */   'label' => 'Course Managers',
   /* group_course_managers|node|course|form */   'weight' => '2',
   /* group_course_managers|node|course|form */   'children' => array(
   /* group_course_managers|node|course|form */     0 => 'field_course_director',
   /* group_course_managers|node|course|form */     1 => 'field_course_event_coordinator',
   /* group_course_managers|node|course|form */     2 => 'field_course_faculty',
   /* group_course_managers|node|course|form */     3 => 'field_course_seminar_leader',
   /* group_course_managers|node|course|form */     4 => 'field_course_support_staff',
   /* group_course_managers|node|course|form */     5 => 'field_deputy_course_director',
   /* group_course_managers|node|course|form */     6 => 'field_alumni_specialist',
   /* group_course_managers|node|course|form */   ),
   /* group_course_managers|node|course|form */   'format_type' => 'fieldset',
   /* group_course_managers|node|course|form */   'format_settings' => array(
   /* group_course_managers|node|course|form */     'label' => 'Course Managers',
   /* group_course_managers|node|course|form */     'instance_settings' => array(
   /* group_course_managers|node|course|form */       'required_fields' => 0,
   /* group_course_managers|node|course|form */       'classes' => 'group-course-managers field-group-fieldset',
   /* group_course_managers|node|course|form */       'description' => '',
   /* group_course_managers|node|course|form */     ),
   /* group_course_managers|node|course|form */     'formatter' => 'collapsed',
   /* group_course_managers|node|course|form */   ),
   /* group_course_managers|node|course|form */ );
  $field_groups['group_course_managers|node|course|form'] = $field_group;

   /* group_date_section|node|event|form */ $field_group = new stdClass();
   /* group_date_section|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_date_section|node|event|form */ $field_group->api_version = 1;
   /* group_date_section|node|event|form */ $field_group->identifier = 'group_date_section|node|event|form';
   /* group_date_section|node|event|form */ $field_group->group_name = 'group_date_section';
   /* group_date_section|node|event|form */ $field_group->entity_type = 'node';
   /* group_date_section|node|event|form */ $field_group->bundle = 'event';
   /* group_date_section|node|event|form */ $field_group->mode = 'form';
   /* group_date_section|node|event|form */ $field_group->parent_name = 'group_basic_information';
   /* group_date_section|node|event|form */ $field_group->data = array(
   /* group_date_section|node|event|form */   'label' => 'Date Section',
   /* group_date_section|node|event|form */   'weight' => '36',
   /* group_date_section|node|event|form */   'children' => array(
   /* group_date_section|node|event|form */     0 => 'field_event_date',
   /* group_date_section|node|event|form */     1 => 'field_event_date_description',
   /* group_date_section|node|event|form */   ),
   /* group_date_section|node|event|form */   'format_type' => 'html-element',
   /* group_date_section|node|event|form */   'format_settings' => array(
   /* group_date_section|node|event|form */     'label' => 'Date Section',
   /* group_date_section|node|event|form */     'instance_settings' => array(
   /* group_date_section|node|event|form */       'required_fields' => 1,
   /* group_date_section|node|event|form */       'classes' => 'group-date-section field-group-html-element group-section',
   /* group_date_section|node|event|form */       'element' => 'section',
   /* group_date_section|node|event|form */       'show_label' => '0',
   /* group_date_section|node|event|form */       'label_element' => 'span',
   /* group_date_section|node|event|form */       'attributes' => '',
   /* group_date_section|node|event|form */     ),
   /* group_date_section|node|event|form */   ),
   /* group_date_section|node|event|form */ );
  $field_groups['group_date_section|node|event|form'] = $field_group;

   /* group_dates_section|node|course|form */ $field_group = new stdClass();
   /* group_dates_section|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_dates_section|node|course|form */ $field_group->api_version = 1;
   /* group_dates_section|node|course|form */ $field_group->identifier = 'group_dates_section|node|course|form';
   /* group_dates_section|node|course|form */ $field_group->group_name = 'group_dates_section';
   /* group_dates_section|node|course|form */ $field_group->entity_type = 'node';
   /* group_dates_section|node|course|form */ $field_group->bundle = 'course';
   /* group_dates_section|node|course|form */ $field_group->mode = 'form';
   /* group_dates_section|node|course|form */ $field_group->parent_name = 'group_basic_information';
   /* group_dates_section|node|course|form */ $field_group->data = array(
   /* group_dates_section|node|course|form */   'label' => 'Dates Section',
   /* group_dates_section|node|course|form */   'weight' => '17',
   /* group_dates_section|node|course|form */   'children' => array(
   /* group_dates_section|node|course|form */     0 => 'field_language',
   /* group_dates_section|node|course|form */     1 => 'field_course_dates',
   /* group_dates_section|node|course|form */   ),
   /* group_dates_section|node|course|form */   'format_type' => 'div',
   /* group_dates_section|node|course|form */   'format_settings' => array(
   /* group_dates_section|node|course|form */     'label' => 'Dates Section',
   /* group_dates_section|node|course|form */     'instance_settings' => array(
   /* group_dates_section|node|course|form */       'required_fields' => 1,
   /* group_dates_section|node|course|form */       'id' => '',
   /* group_dates_section|node|course|form */       'classes' => 'group-section course-date-section',
   /* group_dates_section|node|course|form */       'description' => '',
   /* group_dates_section|node|course|form */       'show_label' => '0',
   /* group_dates_section|node|course|form */       'label_element' => 'h3',
   /* group_dates_section|node|course|form */       'effect' => 'none',
   /* group_dates_section|node|course|form */       'speed' => 'none',
   /* group_dates_section|node|course|form */     ),
   /* group_dates_section|node|course|form */     'formatter' => 'open',
   /* group_dates_section|node|course|form */   ),
   /* group_dates_section|node|course|form */ );
  $field_groups['group_dates_section|node|course|form'] = $field_group;

   /* group_education|user|user|form */ $field_group = new stdClass();
   /* group_education|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_education|user|user|form */ $field_group->api_version = 1;
   /* group_education|user|user|form */ $field_group->identifier = 'group_education|user|user|form';
   /* group_education|user|user|form */ $field_group->group_name = 'group_education';
   /* group_education|user|user|form */ $field_group->entity_type = 'user';
   /* group_education|user|user|form */ $field_group->bundle = 'user';
   /* group_education|user|user|form */ $field_group->mode = 'form';
   /* group_education|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_education|user|user|form */ $field_group->data = array(
   /* group_education|user|user|form */   'label' => 'Education & Training',
   /* group_education|user|user|form */   'weight' => '36',
   /* group_education|user|user|form */   'children' => array(
   /* group_education|user|user|form */     0 => 'field_education',
   /* group_education|user|user|form */     1 => 'field_training',
   /* group_education|user|user|form */   ),
   /* group_education|user|user|form */   'format_type' => 'htab',
   /* group_education|user|user|form */   'format_settings' => array(
   /* group_education|user|user|form */     'formatter' => 'closed',
   /* group_education|user|user|form */     'instance_settings' => array(
   /* group_education|user|user|form */       'description' => '',
   /* group_education|user|user|form */       'classes' => 'group-education field-group-htab',
   /* group_education|user|user|form */       'required_fields' => 1,
   /* group_education|user|user|form */       'id' => '',
   /* group_education|user|user|form */     ),
   /* group_education|user|user|form */   ),
   /* group_education|user|user|form */ );
  $field_groups['group_education|user|user|form'] = $field_group;

   /* group_employers|user|user|form */ $field_group = new stdClass();
   /* group_employers|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_employers|user|user|form */ $field_group->api_version = 1;
   /* group_employers|user|user|form */ $field_group->identifier = 'group_employers|user|user|form';
   /* group_employers|user|user|form */ $field_group->group_name = 'group_employers';
   /* group_employers|user|user|form */ $field_group->entity_type = 'user';
   /* group_employers|user|user|form */ $field_group->bundle = 'user';
   /* group_employers|user|user|form */ $field_group->mode = 'form';
   /* group_employers|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_employers|user|user|form */ $field_group->data = array(
   /* group_employers|user|user|form */   'label' => 'Employers',
   /* group_employers|user|user|form */   'weight' => '35',
   /* group_employers|user|user|form */   'children' => array(
   /* group_employers|user|user|form */     0 => 'field_employers',
   /* group_employers|user|user|form */   ),
   /* group_employers|user|user|form */   'format_type' => 'htab',
   /* group_employers|user|user|form */   'format_settings' => array(
   /* group_employers|user|user|form */     'formatter' => 'closed',
   /* group_employers|user|user|form */     'instance_settings' => array(
   /* group_employers|user|user|form */       'description' => '',
   /* group_employers|user|user|form */       'classes' => 'group-employers field-group-htab',
   /* group_employers|user|user|form */       'required_fields' => 1,
   /* group_employers|user|user|form */       'id' => '',
   /* group_employers|user|user|form */     ),
   /* group_employers|user|user|form */   ),
   /* group_employers|user|user|form */ );
  $field_groups['group_employers|user|user|form'] = $field_group;

   /* group_event_attach_files|node|event|form */ $field_group = new stdClass();
   /* group_event_attach_files|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_event_attach_files|node|event|form */ $field_group->api_version = 1;
   /* group_event_attach_files|node|event|form */ $field_group->identifier = 'group_event_attach_files|node|event|form';
   /* group_event_attach_files|node|event|form */ $field_group->group_name = 'group_event_attach_files';
   /* group_event_attach_files|node|event|form */ $field_group->entity_type = 'node';
   /* group_event_attach_files|node|event|form */ $field_group->bundle = 'event';
   /* group_event_attach_files|node|event|form */ $field_group->mode = 'form';
   /* group_event_attach_files|node|event|form */ $field_group->parent_name = '';
   /* group_event_attach_files|node|event|form */ $field_group->data = array(
   /* group_event_attach_files|node|event|form */   'label' => 'Files',
   /* group_event_attach_files|node|event|form */   'weight' => '1',
   /* group_event_attach_files|node|event|form */   'children' => array(
   /* group_event_attach_files|node|event|form */     0 => 'field_media',
   /* group_event_attach_files|node|event|form */   ),
   /* group_event_attach_files|node|event|form */   'format_type' => 'fieldset',
   /* group_event_attach_files|node|event|form */   'format_settings' => array(
   /* group_event_attach_files|node|event|form */     'label' => 'Files',
   /* group_event_attach_files|node|event|form */     'instance_settings' => array(
   /* group_event_attach_files|node|event|form */       'required_fields' => 0,
   /* group_event_attach_files|node|event|form */       'id' => '',
   /* group_event_attach_files|node|event|form */       'classes' => 'group-event-attach-files field-group-fieldset',
   /* group_event_attach_files|node|event|form */       'description' => '',
   /* group_event_attach_files|node|event|form */     ),
   /* group_event_attach_files|node|event|form */     'formatter' => 'collapsed',
   /* group_event_attach_files|node|event|form */   ),
   /* group_event_attach_files|node|event|form */ );
  $field_groups['group_event_attach_files|node|event|form'] = $field_group;

   /* group_event_contact_person|node|event|form */ $field_group = new stdClass();
   /* group_event_contact_person|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_event_contact_person|node|event|form */ $field_group->api_version = 1;
   /* group_event_contact_person|node|event|form */ $field_group->identifier = 'group_event_contact_person|node|event|form';
   /* group_event_contact_person|node|event|form */ $field_group->group_name = 'group_event_contact_person';
   /* group_event_contact_person|node|event|form */ $field_group->entity_type = 'node';
   /* group_event_contact_person|node|event|form */ $field_group->bundle = 'event';
   /* group_event_contact_person|node|event|form */ $field_group->mode = 'form';
   /* group_event_contact_person|node|event|form */ $field_group->parent_name = '';
   /* group_event_contact_person|node|event|form */ $field_group->data = array(
   /* group_event_contact_person|node|event|form */   'label' => 'Event Contact person',
   /* group_event_contact_person|node|event|form */   'weight' => '2',
   /* group_event_contact_person|node|event|form */   'children' => array(
   /* group_event_contact_person|node|event|form */     0 => 'field_addl_contact_info',
   /* group_event_contact_person|node|event|form */     1 => 'field_event_contact_person',
   /* group_event_contact_person|node|event|form */   ),
   /* group_event_contact_person|node|event|form */   'format_type' => 'fieldset',
   /* group_event_contact_person|node|event|form */   'format_settings' => array(
   /* group_event_contact_person|node|event|form */     'label' => 'Event Contact person',
   /* group_event_contact_person|node|event|form */     'instance_settings' => array(
   /* group_event_contact_person|node|event|form */       'required_fields' => 0,
   /* group_event_contact_person|node|event|form */       'classes' => 'group-event-contact-person field-group-fieldset',
   /* group_event_contact_person|node|event|form */       'description' => '',
   /* group_event_contact_person|node|event|form */     ),
   /* group_event_contact_person|node|event|form */     'formatter' => 'collapsed',
   /* group_event_contact_person|node|event|form */   ),
   /* group_event_contact_person|node|event|form */ );
  $field_groups['group_event_contact_person|node|event|form'] = $field_group;

   /* group_event_location_addl_info|node|event|form */ $field_group = new stdClass();
   /* group_event_location_addl_info|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_event_location_addl_info|node|event|form */ $field_group->api_version = 1;
   /* group_event_location_addl_info|node|event|form */ $field_group->identifier = 'group_event_location_addl_info|node|event|form';
   /* group_event_location_addl_info|node|event|form */ $field_group->group_name = 'group_event_location_addl_info';
   /* group_event_location_addl_info|node|event|form */ $field_group->entity_type = 'node';
   /* group_event_location_addl_info|node|event|form */ $field_group->bundle = 'event';
   /* group_event_location_addl_info|node|event|form */ $field_group->mode = 'form';
   /* group_event_location_addl_info|node|event|form */ $field_group->parent_name = 'group_basic_information';
   /* group_event_location_addl_info|node|event|form */ $field_group->data = array(
   /* group_event_location_addl_info|node|event|form */   'label' => 'Location Additional Information',
   /* group_event_location_addl_info|node|event|form */   'weight' => '38',
   /* group_event_location_addl_info|node|event|form */   'children' => array(
   /* group_event_location_addl_info|node|event|form */     0 => 'field_building_floor_room',
   /* group_event_location_addl_info|node|event|form */     1 => 'field_event_address',
   /* group_event_location_addl_info|node|event|form */     2 => 'field_event_telephone_number',
   /* group_event_location_addl_info|node|event|form */     3 => 'field_event_telephone_pin',
   /* group_event_location_addl_info|node|event|form */     4 => 'field_location_venue_name',
   /* group_event_location_addl_info|node|event|form */     5 => 'field_other_location_details',
   /* group_event_location_addl_info|node|event|form */     6 => 'field_web_conference_detail',
   /* group_event_location_addl_info|node|event|form */   ),
   /* group_event_location_addl_info|node|event|form */   'format_type' => 'div',
   /* group_event_location_addl_info|node|event|form */   'format_settings' => array(
   /* group_event_location_addl_info|node|event|form */     'label' => 'Location Additional Information',
   /* group_event_location_addl_info|node|event|form */     'instance_settings' => array(
   /* group_event_location_addl_info|node|event|form */       'required_fields' => 1,
   /* group_event_location_addl_info|node|event|form */       'id' => '',
   /* group_event_location_addl_info|node|event|form */       'classes' => 'group_dependents',
   /* group_event_location_addl_info|node|event|form */       'description' => '',
   /* group_event_location_addl_info|node|event|form */       'show_label' => '0',
   /* group_event_location_addl_info|node|event|form */       'label_element' => 'h3',
   /* group_event_location_addl_info|node|event|form */       'effect' => 'blind',
   /* group_event_location_addl_info|node|event|form */       'speed' => 'slow',
   /* group_event_location_addl_info|node|event|form */     ),
   /* group_event_location_addl_info|node|event|form */     'formatter' => 'open',
   /* group_event_location_addl_info|node|event|form */   ),
   /* group_event_location_addl_info|node|event|form */ );
  $field_groups['group_event_location_addl_info|node|event|form'] = $field_group;

   /* group_event_type|node|event|form */ $field_group = new stdClass();
   /* group_event_type|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_event_type|node|event|form */ $field_group->api_version = 1;
   /* group_event_type|node|event|form */ $field_group->identifier = 'group_event_type|node|event|form';
   /* group_event_type|node|event|form */ $field_group->group_name = 'group_event_type';
   /* group_event_type|node|event|form */ $field_group->entity_type = 'node';
   /* group_event_type|node|event|form */ $field_group->bundle = 'event';
   /* group_event_type|node|event|form */ $field_group->mode = 'form';
   /* group_event_type|node|event|form */ $field_group->parent_name = 'group_basic_information';
   /* group_event_type|node|event|form */ $field_group->data = array(
   /* group_event_type|node|event|form */   'label' => 'Type Section',
   /* group_event_type|node|event|form */   'weight' => '37',
   /* group_event_type|node|event|form */   'children' => array(
   /* group_event_type|node|event|form */     0 => 'field_event_location',
   /* group_event_type|node|event|form */     1 => 'field_event_type',
   /* group_event_type|node|event|form */     2 => 'field_language',
   /* group_event_type|node|event|form */   ),
   /* group_event_type|node|event|form */   'format_type' => 'html-element',
   /* group_event_type|node|event|form */   'format_settings' => array(
   /* group_event_type|node|event|form */     'label' => 'Type Section',
   /* group_event_type|node|event|form */     'instance_settings' => array(
   /* group_event_type|node|event|form */       'required_fields' => 1,
   /* group_event_type|node|event|form */       'classes' => 'group-event-type field-group-html-element group-section',
   /* group_event_type|node|event|form */       'element' => 'div',
   /* group_event_type|node|event|form */       'show_label' => '0',
   /* group_event_type|node|event|form */       'label_element' => 'div',
   /* group_event_type|node|event|form */       'attributes' => '',
   /* group_event_type|node|event|form */     ),
   /* group_event_type|node|event|form */   ),
   /* group_event_type|node|event|form */ );
  $field_groups['group_event_type|node|event|form'] = $field_group;

   /* group_expertise|user|user|form */ $field_group = new stdClass();
   /* group_expertise|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_expertise|user|user|form */ $field_group->api_version = 1;
   /* group_expertise|user|user|form */ $field_group->identifier = 'group_expertise|user|user|form';
   /* group_expertise|user|user|form */ $field_group->group_name = 'group_expertise';
   /* group_expertise|user|user|form */ $field_group->entity_type = 'user';
   /* group_expertise|user|user|form */ $field_group->bundle = 'user';
   /* group_expertise|user|user|form */ $field_group->mode = 'form';
   /* group_expertise|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_expertise|user|user|form */ $field_group->data = array(
   /* group_expertise|user|user|form */   'label' => 'Expertise',
   /* group_expertise|user|user|form */   'weight' => '34',
   /* group_expertise|user|user|form */   'children' => array(
   /* group_expertise|user|user|form */     0 => 'field_expertise',
   /* group_expertise|user|user|form */   ),
   /* group_expertise|user|user|form */   'format_type' => 'div',
   /* group_expertise|user|user|form */   'format_settings' => array(
   /* group_expertise|user|user|form */     'label' => 'Expertise',
   /* group_expertise|user|user|form */     'instance_settings' => array(
   /* group_expertise|user|user|form */       'required_fields' => 1,
   /* group_expertise|user|user|form */       'id' => '',
   /* group_expertise|user|user|form */       'classes' => 'hide',
   /* group_expertise|user|user|form */       'description' => '',
   /* group_expertise|user|user|form */       'show_label' => '1',
   /* group_expertise|user|user|form */       'label_element' => 'h3',
   /* group_expertise|user|user|form */       'effect' => 'none',
   /* group_expertise|user|user|form */       'speed' => 'fast',
   /* group_expertise|user|user|form */     ),
   /* group_expertise|user|user|form */     'formatter' => 'open',
   /* group_expertise|user|user|form */   ),
   /* group_expertise|user|user|form */ );
  $field_groups['group_expertise|user|user|form'] = $field_group;

   /* group_file_attachments|node|course|form */ $field_group = new stdClass();
   /* group_file_attachments|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_file_attachments|node|course|form */ $field_group->api_version = 1;
   /* group_file_attachments|node|course|form */ $field_group->identifier = 'group_file_attachments|node|course|form';
   /* group_file_attachments|node|course|form */ $field_group->group_name = 'group_file_attachments';
   /* group_file_attachments|node|course|form */ $field_group->entity_type = 'node';
   /* group_file_attachments|node|course|form */ $field_group->bundle = 'course';
   /* group_file_attachments|node|course|form */ $field_group->mode = 'form';
   /* group_file_attachments|node|course|form */ $field_group->parent_name = '';
   /* group_file_attachments|node|course|form */ $field_group->data = array(
   /* group_file_attachments|node|course|form */   'label' => 'Files',
   /* group_file_attachments|node|course|form */   'weight' => '1',
   /* group_file_attachments|node|course|form */   'children' => array(
   /* group_file_attachments|node|course|form */     0 => 'field_course_schedule',
   /* group_file_attachments|node|course|form */     1 => 'field_course_syllabus',
   /* group_file_attachments|node|course|form */   ),
   /* group_file_attachments|node|course|form */   'format_type' => 'fieldset',
   /* group_file_attachments|node|course|form */   'format_settings' => array(
   /* group_file_attachments|node|course|form */     'label' => 'Files',
   /* group_file_attachments|node|course|form */     'instance_settings' => array(
   /* group_file_attachments|node|course|form */       'required_fields' => 0,
   /* group_file_attachments|node|course|form */       'id' => '',
   /* group_file_attachments|node|course|form */       'classes' => 'group-file-attachments field-group-fieldset',
   /* group_file_attachments|node|course|form */       'description' => '',
   /* group_file_attachments|node|course|form */     ),
   /* group_file_attachments|node|course|form */     'formatter' => 'collapsed',
   /* group_file_attachments|node|course|form */   ),
   /* group_file_attachments|node|course|form */ );
  $field_groups['group_file_attachments|node|course|form'] = $field_group;

   /* group_footer_content|node|organization|form */ $field_group = new stdClass();
   /* group_footer_content|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_footer_content|node|organization|form */ $field_group->api_version = 1;
   /* group_footer_content|node|organization|form */ $field_group->identifier = 'group_footer_content|node|organization|form';
   /* group_footer_content|node|organization|form */ $field_group->group_name = 'group_footer_content';
   /* group_footer_content|node|organization|form */ $field_group->entity_type = 'node';
   /* group_footer_content|node|organization|form */ $field_group->bundle = 'organization';
   /* group_footer_content|node|organization|form */ $field_group->mode = 'form';
   /* group_footer_content|node|organization|form */ $field_group->parent_name = '';
   /* group_footer_content|node|organization|form */ $field_group->data = array(
   /* group_footer_content|node|organization|form */   'label' => 'Footer Content',
   /* group_footer_content|node|organization|form */   'weight' => '3',
   /* group_footer_content|node|organization|form */   'children' => array(
   /* group_footer_content|node|organization|form */     0 => 'field_footer_description',
   /* group_footer_content|node|organization|form */     1 => 'field_special_links',
   /* group_footer_content|node|organization|form */   ),
   /* group_footer_content|node|organization|form */   'format_type' => 'fieldset',
   /* group_footer_content|node|organization|form */   'format_settings' => array(
   /* group_footer_content|node|organization|form */     'label' => 'Footer Content',
   /* group_footer_content|node|organization|form */     'instance_settings' => array(
   /* group_footer_content|node|organization|form */       'required_fields' => 1,
   /* group_footer_content|node|organization|form */       'classes' => 'group-footer-content field-group-fieldset',
   /* group_footer_content|node|organization|form */       'description' => '',
   /* group_footer_content|node|organization|form */     ),
   /* group_footer_content|node|organization|form */     'formatter' => 'collapsed',
   /* group_footer_content|node|organization|form */   ),
   /* group_footer_content|node|organization|form */ );
  $field_groups['group_footer_content|node|organization|form'] = $field_group;

   /* group_help|node|alumni_group|form */ $field_group = new stdClass();
   /* group_help|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_help|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_help|node|alumni_group|form */ $field_group->identifier = 'group_help|node|alumni_group|form';
   /* group_help|node|alumni_group|form */ $field_group->group_name = 'group_help';
   /* group_help|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_help|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_help|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_help|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_help|node|alumni_group|form */ $field_group->data = array(
   /* group_help|node|alumni_group|form */   'label' => 'Help',
   /* group_help|node|alumni_group|form */   'weight' => '7',
   /* group_help|node|alumni_group|form */   'children' => array(
   /* group_help|node|alumni_group|form */     0 => 'field_group_help',
   /* group_help|node|alumni_group|form */   ),
   /* group_help|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_help|node|alumni_group|form */   'format_settings' => array(
   /* group_help|node|alumni_group|form */     'formatter' => 'collapsible',
   /* group_help|node|alumni_group|form */     'instance_settings' => array(
   /* group_help|node|alumni_group|form */       'description' => '',
   /* group_help|node|alumni_group|form */       'classes' => 'group-help field-group-fieldset',
   /* group_help|node|alumni_group|form */       'required_fields' => 1,
   /* group_help|node|alumni_group|form */     ),
   /* group_help|node|alumni_group|form */   ),
   /* group_help|node|alumni_group|form */ );
  $field_groups['group_help|node|alumni_group|form'] = $field_group;

   /* group_help|node|course_group|form */ $field_group = new stdClass();
   /* group_help|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_help|node|course_group|form */ $field_group->api_version = 1;
   /* group_help|node|course_group|form */ $field_group->identifier = 'group_help|node|course_group|form';
   /* group_help|node|course_group|form */ $field_group->group_name = 'group_help';
   /* group_help|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_help|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_help|node|course_group|form */ $field_group->mode = 'form';
   /* group_help|node|course_group|form */ $field_group->parent_name = '';
   /* group_help|node|course_group|form */ $field_group->data = array(
   /* group_help|node|course_group|form */   'label' => 'Help',
   /* group_help|node|course_group|form */   'weight' => '4',
   /* group_help|node|course_group|form */   'children' => array(
   /* group_help|node|course_group|form */     0 => 'field_group_help',
   /* group_help|node|course_group|form */   ),
   /* group_help|node|course_group|form */   'format_type' => 'fieldset',
   /* group_help|node|course_group|form */   'format_settings' => array(
   /* group_help|node|course_group|form */     'label' => 'Help',
   /* group_help|node|course_group|form */     'instance_settings' => array(
   /* group_help|node|course_group|form */       'required_fields' => 0,
   /* group_help|node|course_group|form */       'id' => '',
   /* group_help|node|course_group|form */       'classes' => 'group-help field-group-fieldset',
   /* group_help|node|course_group|form */       'description' => '',
   /* group_help|node|course_group|form */     ),
   /* group_help|node|course_group|form */     'formatter' => 'collapsed',
   /* group_help|node|course_group|form */   ),
   /* group_help|node|course_group|form */ );
  $field_groups['group_help|node|course_group|form'] = $field_group;

   /* group_help|node|course|form */ $field_group = new stdClass();
   /* group_help|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_help|node|course|form */ $field_group->api_version = 1;
   /* group_help|node|course|form */ $field_group->identifier = 'group_help|node|course|form';
   /* group_help|node|course|form */ $field_group->group_name = 'group_help';
   /* group_help|node|course|form */ $field_group->entity_type = 'node';
   /* group_help|node|course|form */ $field_group->bundle = 'course';
   /* group_help|node|course|form */ $field_group->mode = 'form';
   /* group_help|node|course|form */ $field_group->parent_name = '';
   /* group_help|node|course|form */ $field_group->data = array(
   /* group_help|node|course|form */   'label' => 'Help',
   /* group_help|node|course|form */   'weight' => '7',
   /* group_help|node|course|form */   'children' => array(
   /* group_help|node|course|form */     0 => 'field_group_help',
   /* group_help|node|course|form */   ),
   /* group_help|node|course|form */   'format_type' => 'fieldset',
   /* group_help|node|course|form */   'format_settings' => array(
   /* group_help|node|course|form */     'label' => 'Help',
   /* group_help|node|course|form */     'instance_settings' => array(
   /* group_help|node|course|form */       'required_fields' => 0,
   /* group_help|node|course|form */       'id' => '',
   /* group_help|node|course|form */       'classes' => 'group-help field-group-fieldset',
   /* group_help|node|course|form */       'description' => '',
   /* group_help|node|course|form */     ),
   /* group_help|node|course|form */     'formatter' => 'collapsed',
   /* group_help|node|course|form */   ),
   /* group_help|node|course|form */ );
  $field_groups['group_help|node|course|form'] = $field_group;

   /* group_help|node|group|default */ $field_group = new stdClass();
   /* group_help|node|group|default */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_help|node|group|default */ $field_group->api_version = 1;
   /* group_help|node|group|default */ $field_group->identifier = 'group_help|node|group|default';
   /* group_help|node|group|default */ $field_group->group_name = 'group_help';
   /* group_help|node|group|default */ $field_group->entity_type = 'node';
   /* group_help|node|group|default */ $field_group->bundle = 'group';
   /* group_help|node|group|default */ $field_group->mode = 'default';
   /* group_help|node|group|default */ $field_group->parent_name = '';
   /* group_help|node|group|default */ $field_group->data = array(
   /* group_help|node|group|default */   'label' => 'Help',
   /* group_help|node|group|default */   'weight' => '1',
   /* group_help|node|group|default */   'children' => array(
   /* group_help|node|group|default */     0 => 'field_group_help',
   /* group_help|node|group|default */   ),
   /* group_help|node|group|default */   'format_type' => 'accordion',
   /* group_help|node|group|default */   'format_settings' => array(
   /* group_help|node|group|default */     'label' => 'Help',
   /* group_help|node|group|default */     'instance_settings' => array(
   /* group_help|node|group|default */       'classes' => '',
   /* group_help|node|group|default */       'description' => '',
   /* group_help|node|group|default */       'effect' => 'bounceslide',
   /* group_help|node|group|default */     ),
   /* group_help|node|group|default */     'formatter' => '',
   /* group_help|node|group|default */   ),
   /* group_help|node|group|default */ );
  $field_groups['group_help|node|group|default'] = $field_group;

   /* group_help|node|group|form */ $field_group = new stdClass();
   /* group_help|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_help|node|group|form */ $field_group->api_version = 1;
   /* group_help|node|group|form */ $field_group->identifier = 'group_help|node|group|form';
   /* group_help|node|group|form */ $field_group->group_name = 'group_help';
   /* group_help|node|group|form */ $field_group->entity_type = 'node';
   /* group_help|node|group|form */ $field_group->bundle = 'group';
   /* group_help|node|group|form */ $field_group->mode = 'form';
   /* group_help|node|group|form */ $field_group->parent_name = '';
   /* group_help|node|group|form */ $field_group->data = array(
   /* group_help|node|group|form */   'label' => 'Help',
   /* group_help|node|group|form */   'weight' => '6',
   /* group_help|node|group|form */   'children' => array(
   /* group_help|node|group|form */     0 => 'field_group_help',
   /* group_help|node|group|form */   ),
   /* group_help|node|group|form */   'format_type' => 'fieldset',
   /* group_help|node|group|form */   'format_settings' => array(
   /* group_help|node|group|form */     'label' => 'Help',
   /* group_help|node|group|form */     'instance_settings' => array(
   /* group_help|node|group|form */       'required_fields' => 0,
   /* group_help|node|group|form */       'classes' => 'group-help field-group-fieldset',
   /* group_help|node|group|form */       'description' => '',
   /* group_help|node|group|form */     ),
   /* group_help|node|group|form */     'formatter' => 'collapsed',
   /* group_help|node|group|form */   ),
   /* group_help|node|group|form */ );
  $field_groups['group_help|node|group|form'] = $field_group;

   /* group_help|node|program|form */ $field_group = new stdClass();
   /* group_help|node|program|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_help|node|program|form */ $field_group->api_version = 1;
   /* group_help|node|program|form */ $field_group->identifier = 'group_help|node|program|form';
   /* group_help|node|program|form */ $field_group->group_name = 'group_help';
   /* group_help|node|program|form */ $field_group->entity_type = 'node';
   /* group_help|node|program|form */ $field_group->bundle = 'program';
   /* group_help|node|program|form */ $field_group->mode = 'form';
   /* group_help|node|program|form */ $field_group->parent_name = '';
   /* group_help|node|program|form */ $field_group->data = array(
   /* group_help|node|program|form */   'label' => 'Help',
   /* group_help|node|program|form */   'weight' => '2',
   /* group_help|node|program|form */   'children' => array(
   /* group_help|node|program|form */     0 => 'field_group_help',
   /* group_help|node|program|form */   ),
   /* group_help|node|program|form */   'format_type' => 'fieldset',
   /* group_help|node|program|form */   'format_settings' => array(
   /* group_help|node|program|form */     'label' => 'Help',
   /* group_help|node|program|form */     'instance_settings' => array(
   /* group_help|node|program|form */       'required_fields' => 0,
   /* group_help|node|program|form */       'id' => '',
   /* group_help|node|program|form */       'classes' => 'group-help field-group-fieldset',
   /* group_help|node|program|form */       'description' => '',
   /* group_help|node|program|form */     ),
   /* group_help|node|program|form */     'formatter' => 'collapsed',
   /* group_help|node|program|form */   ),
   /* group_help|node|program|form */ );
  $field_groups['group_help|node|program|form'] = $field_group;

   /* group_hidden_section|node|event|form */ $field_group = new stdClass();
   /* group_hidden_section|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_hidden_section|node|event|form */ $field_group->api_version = 1;
   /* group_hidden_section|node|event|form */ $field_group->identifier = 'group_hidden_section|node|event|form';
   /* group_hidden_section|node|event|form */ $field_group->group_name = 'group_hidden_section';
   /* group_hidden_section|node|event|form */ $field_group->entity_type = 'node';
   /* group_hidden_section|node|event|form */ $field_group->bundle = 'event';
   /* group_hidden_section|node|event|form */ $field_group->mode = 'form';
   /* group_hidden_section|node|event|form */ $field_group->parent_name = '';
   /* group_hidden_section|node|event|form */ $field_group->data = array(
   /* group_hidden_section|node|event|form */   'label' => 'Hidden section',
   /* group_hidden_section|node|event|form */   'weight' => '12',
   /* group_hidden_section|node|event|form */   'children' => array(
   /* group_hidden_section|node|event|form */     0 => 'field_event_start_date',
   /* group_hidden_section|node|event|form */   ),
   /* group_hidden_section|node|event|form */   'format_type' => 'div',
   /* group_hidden_section|node|event|form */   'format_settings' => array(
   /* group_hidden_section|node|event|form */     'label' => 'Hidden section',
   /* group_hidden_section|node|event|form */     'instance_settings' => array(
   /* group_hidden_section|node|event|form */       'required_fields' => 1,
   /* group_hidden_section|node|event|form */       'id' => '',
   /* group_hidden_section|node|event|form */       'classes' => 'group-hidden-section field-group-div hide',
   /* group_hidden_section|node|event|form */       'description' => '',
   /* group_hidden_section|node|event|form */       'show_label' => '1',
   /* group_hidden_section|node|event|form */       'label_element' => 'h3',
   /* group_hidden_section|node|event|form */       'effect' => 'none',
   /* group_hidden_section|node|event|form */       'speed' => 'fast',
   /* group_hidden_section|node|event|form */     ),
   /* group_hidden_section|node|event|form */     'formatter' => 'open',
   /* group_hidden_section|node|event|form */   ),
   /* group_hidden_section|node|event|form */ );
  $field_groups['group_hidden_section|node|event|form'] = $field_group;

   /* group_image_section|node|course|form */ $field_group = new stdClass();
   /* group_image_section|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_image_section|node|course|form */ $field_group->api_version = 1;
   /* group_image_section|node|course|form */ $field_group->identifier = 'group_image_section|node|course|form';
   /* group_image_section|node|course|form */ $field_group->group_name = 'group_image_section';
   /* group_image_section|node|course|form */ $field_group->entity_type = 'node';
   /* group_image_section|node|course|form */ $field_group->bundle = 'course';
   /* group_image_section|node|course|form */ $field_group->mode = 'form';
   /* group_image_section|node|course|form */ $field_group->parent_name = 'group_basic_information';
   /* group_image_section|node|course|form */ $field_group->data = array(
   /* group_image_section|node|course|form */   'label' => 'Image section',
   /* group_image_section|node|course|form */   'weight' => '16',
   /* group_image_section|node|course|form */   'children' => array(
   /* group_image_section|node|course|form */     0 => 'field_main_image',
   /* group_image_section|node|course|form */   ),
   /* group_image_section|node|course|form */   'format_type' => 'html-element',
   /* group_image_section|node|course|form */   'format_settings' => array(
   /* group_image_section|node|course|form */     'label' => 'Image section',
   /* group_image_section|node|course|form */     'instance_settings' => array(
   /* group_image_section|node|course|form */       'required_fields' => 0,
   /* group_image_section|node|course|form */       'classes' => 'group-image-section field-group-html-element group-section',
   /* group_image_section|node|course|form */       'element' => 'section',
   /* group_image_section|node|course|form */       'show_label' => '0',
   /* group_image_section|node|course|form */       'label_element' => 'span',
   /* group_image_section|node|course|form */       'attributes' => '',
   /* group_image_section|node|course|form */     ),
   /* group_image_section|node|course|form */   ),
   /* group_image_section|node|course|form */ );
  $field_groups['group_image_section|node|course|form'] = $field_group;

   /* group_image_section|node|event|form */ $field_group = new stdClass();
   /* group_image_section|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_image_section|node|event|form */ $field_group->api_version = 1;
   /* group_image_section|node|event|form */ $field_group->identifier = 'group_image_section|node|event|form';
   /* group_image_section|node|event|form */ $field_group->group_name = 'group_image_section';
   /* group_image_section|node|event|form */ $field_group->entity_type = 'node';
   /* group_image_section|node|event|form */ $field_group->bundle = 'event';
   /* group_image_section|node|event|form */ $field_group->mode = 'form';
   /* group_image_section|node|event|form */ $field_group->parent_name = 'group_basic_information';
   /* group_image_section|node|event|form */ $field_group->data = array(
   /* group_image_section|node|event|form */   'label' => 'Image section',
   /* group_image_section|node|event|form */   'weight' => '35',
   /* group_image_section|node|event|form */   'children' => array(
   /* group_image_section|node|event|form */     0 => 'field_main_image',
   /* group_image_section|node|event|form */   ),
   /* group_image_section|node|event|form */   'format_type' => 'html-element',
   /* group_image_section|node|event|form */   'format_settings' => array(
   /* group_image_section|node|event|form */     'label' => 'Image section',
   /* group_image_section|node|event|form */     'instance_settings' => array(
   /* group_image_section|node|event|form */       'required_fields' => 1,
   /* group_image_section|node|event|form */       'classes' => 'group-image-section field-group-html-element group-section',
   /* group_image_section|node|event|form */       'element' => 'section',
   /* group_image_section|node|event|form */       'show_label' => '0',
   /* group_image_section|node|event|form */       'label_element' => 'span',
   /* group_image_section|node|event|form */       'attributes' => '',
   /* group_image_section|node|event|form */     ),
   /* group_image_section|node|event|form */   ),
   /* group_image_section|node|event|form */ );
  $field_groups['group_image_section|node|event|form'] = $field_group;

   /* group_images|node|publication|form */ $field_group = new stdClass();
   /* group_images|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_images|node|publication|form */ $field_group->api_version = 1;
   /* group_images|node|publication|form */ $field_group->identifier = 'group_images|node|publication|form';
   /* group_images|node|publication|form */ $field_group->group_name = 'group_images';
   /* group_images|node|publication|form */ $field_group->entity_type = 'node';
   /* group_images|node|publication|form */ $field_group->bundle = 'publication';
   /* group_images|node|publication|form */ $field_group->mode = 'form';
   /* group_images|node|publication|form */ $field_group->parent_name = '';
   /* group_images|node|publication|form */ $field_group->data = array(
   /* group_images|node|publication|form */   'label' => 'Images',
   /* group_images|node|publication|form */   'weight' => '7',
   /* group_images|node|publication|form */   'children' => array(),
   /* group_images|node|publication|form */   'format_type' => 'fieldset',
   /* group_images|node|publication|form */   'format_settings' => array(
   /* group_images|node|publication|form */     'label' => 'Images',
   /* group_images|node|publication|form */     'instance_settings' => array(
   /* group_images|node|publication|form */       'required_fields' => 1,
   /* group_images|node|publication|form */       'classes' => 'group-images field-group-fieldset',
   /* group_images|node|publication|form */       'description' => '',
   /* group_images|node|publication|form */     ),
   /* group_images|node|publication|form */     'formatter' => 'open',
   /* group_images|node|publication|form */   ),
   /* group_images|node|publication|form */ );
  $field_groups['group_images|node|publication|form'] = $field_group;

   /* group_interests_tab|user|user|form */ $field_group = new stdClass();
   /* group_interests_tab|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_interests_tab|user|user|form */ $field_group->api_version = 1;
   /* group_interests_tab|user|user|form */ $field_group->identifier = 'group_interests_tab|user|user|form';
   /* group_interests_tab|user|user|form */ $field_group->group_name = 'group_interests_tab';
   /* group_interests_tab|user|user|form */ $field_group->entity_type = 'user';
   /* group_interests_tab|user|user|form */ $field_group->bundle = 'user';
   /* group_interests_tab|user|user|form */ $field_group->mode = 'form';
   /* group_interests_tab|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_interests_tab|user|user|form */ $field_group->data = array(
   /* group_interests_tab|user|user|form */   'label' => 'Interests',
   /* group_interests_tab|user|user|form */   'weight' => '37',
   /* group_interests_tab|user|user|form */   'children' => array(
   /* group_interests_tab|user|user|form */     0 => 'group_country',
   /* group_interests_tab|user|user|form */     1 => 'group_topics',
   /* group_interests_tab|user|user|form */   ),
   /* group_interests_tab|user|user|form */   'format_type' => 'htab',
   /* group_interests_tab|user|user|form */   'format_settings' => array(
   /* group_interests_tab|user|user|form */     'label' => 'Interests',
   /* group_interests_tab|user|user|form */     'instance_settings' => array(
   /* group_interests_tab|user|user|form */       'required_fields' => 0,
   /* group_interests_tab|user|user|form */       'id' => '',
   /* group_interests_tab|user|user|form */       'classes' => 'group-interests-tab field-group-htab',
   /* group_interests_tab|user|user|form */       'description' => '',
   /* group_interests_tab|user|user|form */     ),
   /* group_interests_tab|user|user|form */     'formatter' => 'closed',
   /* group_interests_tab|user|user|form */   ),
   /* group_interests_tab|user|user|form */ );
  $field_groups['group_interests_tab|user|user|form'] = $field_group;

   /* group_language_timezone|user|user|form */ $field_group = new stdClass();
   /* group_language_timezone|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_language_timezone|user|user|form */ $field_group->api_version = 1;
   /* group_language_timezone|user|user|form */ $field_group->identifier = 'group_language_timezone|user|user|form';
   /* group_language_timezone|user|user|form */ $field_group->group_name = 'group_language_timezone';
   /* group_language_timezone|user|user|form */ $field_group->entity_type = 'user';
   /* group_language_timezone|user|user|form */ $field_group->bundle = 'user';
   /* group_language_timezone|user|user|form */ $field_group->mode = 'form';
   /* group_language_timezone|user|user|form */ $field_group->parent_name = 'group_settings';
   /* group_language_timezone|user|user|form */ $field_group->data = array(
   /* group_language_timezone|user|user|form */   'label' => 'Language & Time Zone',
   /* group_language_timezone|user|user|form */   'weight' => '11',
   /* group_language_timezone|user|user|form */   'children' => array(
   /* group_language_timezone|user|user|form */     0 => 'tmgmt_translation_skills',
   /* group_language_timezone|user|user|form */     1 => 'timezone',
   /* group_language_timezone|user|user|form */     2 => 'locale',
   /* group_language_timezone|user|user|form */   ),
   /* group_language_timezone|user|user|form */   'format_type' => 'fieldset',
   /* group_language_timezone|user|user|form */   'format_settings' => array(
   /* group_language_timezone|user|user|form */     'label' => 'Language & Time Zone',
   /* group_language_timezone|user|user|form */     'instance_settings' => array(
   /* group_language_timezone|user|user|form */       'required_fields' => 1,
   /* group_language_timezone|user|user|form */       'classes' => 'group-language-timezone field-group-fieldset',
   /* group_language_timezone|user|user|form */       'description' => '',
   /* group_language_timezone|user|user|form */     ),
   /* group_language_timezone|user|user|form */     'formatter' => 'collapsed',
   /* group_language_timezone|user|user|form */   ),
   /* group_language_timezone|user|user|form */ );
  $field_groups['group_language_timezone|user|user|form'] = $field_group;

   /* group_main_news_image|file|image|main_news_image */ $field_group = new stdClass();
   /* group_main_news_image|file|image|main_news_image */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_main_news_image|file|image|main_news_image */ $field_group->api_version = 1;
   /* group_main_news_image|file|image|main_news_image */ $field_group->identifier = 'group_main_news_image|file|image|main_news_image';
   /* group_main_news_image|file|image|main_news_image */ $field_group->group_name = 'group_main_news_image';
   /* group_main_news_image|file|image|main_news_image */ $field_group->entity_type = 'file';
   /* group_main_news_image|file|image|main_news_image */ $field_group->bundle = 'image';
   /* group_main_news_image|file|image|main_news_image */ $field_group->mode = 'main_news_image';
   /* group_main_news_image|file|image|main_news_image */ $field_group->parent_name = '';
   /* group_main_news_image|file|image|main_news_image */ $field_group->data = array(
   /* group_main_news_image|file|image|main_news_image */   'label' => 'Main News Image',
   /* group_main_news_image|file|image|main_news_image */   'weight' => '0',
   /* group_main_news_image|file|image|main_news_image */   'children' => array(
   /* group_main_news_image|file|image|main_news_image */     0 => 'file',
   /* group_main_news_image|file|image|main_news_image */   ),
   /* group_main_news_image|file|image|main_news_image */   'format_type' => 'div',
   /* group_main_news_image|file|image|main_news_image */   'format_settings' => array(
   /* group_main_news_image|file|image|main_news_image */     'label' => 'Main News Image',
   /* group_main_news_image|file|image|main_news_image */     'instance_settings' => array(
   /* group_main_news_image|file|image|main_news_image */       'id' => '',
   /* group_main_news_image|file|image|main_news_image */       'classes' => 'main-news-image-img',
   /* group_main_news_image|file|image|main_news_image */       'description' => '',
   /* group_main_news_image|file|image|main_news_image */       'show_label' => '0',
   /* group_main_news_image|file|image|main_news_image */       'label_element' => 'h3',
   /* group_main_news_image|file|image|main_news_image */       'effect' => 'none',
   /* group_main_news_image|file|image|main_news_image */       'speed' => 'none',
   /* group_main_news_image|file|image|main_news_image */     ),
   /* group_main_news_image|file|image|main_news_image */     'formatter' => 'open',
   /* group_main_news_image|file|image|main_news_image */   ),
   /* group_main_news_image|file|image|main_news_image */ );
  $field_groups['group_main_news_image|file|image|main_news_image'] = $field_group;

   /* group_media|node|help|form */ $field_group = new stdClass();
   /* group_media|node|help|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_media|node|help|form */ $field_group->api_version = 1;
   /* group_media|node|help|form */ $field_group->identifier = 'group_media|node|help|form';
   /* group_media|node|help|form */ $field_group->group_name = 'group_media';
   /* group_media|node|help|form */ $field_group->entity_type = 'node';
   /* group_media|node|help|form */ $field_group->bundle = 'help';
   /* group_media|node|help|form */ $field_group->mode = 'form';
   /* group_media|node|help|form */ $field_group->parent_name = '';
   /* group_media|node|help|form */ $field_group->data = array(
   /* group_media|node|help|form */   'label' => 'Files',
   /* group_media|node|help|form */   'weight' => '1',
   /* group_media|node|help|form */   'children' => array(
   /* group_media|node|help|form */     0 => 'field_media',
   /* group_media|node|help|form */   ),
   /* group_media|node|help|form */   'format_type' => 'fieldset',
   /* group_media|node|help|form */   'format_settings' => array(
   /* group_media|node|help|form */     'label' => 'Files',
   /* group_media|node|help|form */     'instance_settings' => array(
   /* group_media|node|help|form */       'required_fields' => 0,
   /* group_media|node|help|form */       'id' => '',
   /* group_media|node|help|form */       'classes' => 'group-media field-group-fieldset',
   /* group_media|node|help|form */       'description' => '',
   /* group_media|node|help|form */     ),
   /* group_media|node|help|form */     'formatter' => 'collapsed',
   /* group_media|node|help|form */   ),
   /* group_media|node|help|form */ );
  $field_groups['group_media|node|help|form'] = $field_group;

   /* group_media|node|post|form */ $field_group = new stdClass();
   /* group_media|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_media|node|post|form */ $field_group->api_version = 1;
   /* group_media|node|post|form */ $field_group->identifier = 'group_media|node|post|form';
   /* group_media|node|post|form */ $field_group->group_name = 'group_media';
   /* group_media|node|post|form */ $field_group->entity_type = 'node';
   /* group_media|node|post|form */ $field_group->bundle = 'post';
   /* group_media|node|post|form */ $field_group->mode = 'form';
   /* group_media|node|post|form */ $field_group->parent_name = '';
   /* group_media|node|post|form */ $field_group->data = array(
   /* group_media|node|post|form */   'label' => 'Files',
   /* group_media|node|post|form */   'weight' => '1',
   /* group_media|node|post|form */   'children' => array(
   /* group_media|node|post|form */     0 => 'field_main_image',
   /* group_media|node|post|form */     1 => 'field_thumbnail_image',
   /* group_media|node|post|form */   ),
   /* group_media|node|post|form */   'format_type' => 'fieldset',
   /* group_media|node|post|form */   'format_settings' => array(
   /* group_media|node|post|form */     'label' => 'Files',
   /* group_media|node|post|form */     'instance_settings' => array(
   /* group_media|node|post|form */       'required_fields' => 0,
   /* group_media|node|post|form */       'classes' => 'group-media field-group-fieldset',
   /* group_media|node|post|form */       'description' => '',
   /* group_media|node|post|form */     ),
   /* group_media|node|post|form */     'formatter' => 'collapsed',
   /* group_media|node|post|form */   ),
   /* group_media|node|post|form */ );
  $field_groups['group_media|node|post|form'] = $field_group;

   /* group_media|node|publication|form */ $field_group = new stdClass();
   /* group_media|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_media|node|publication|form */ $field_group->api_version = 1;
   /* group_media|node|publication|form */ $field_group->identifier = 'group_media|node|publication|form';
   /* group_media|node|publication|form */ $field_group->group_name = 'group_media';
   /* group_media|node|publication|form */ $field_group->entity_type = 'node';
   /* group_media|node|publication|form */ $field_group->bundle = 'publication';
   /* group_media|node|publication|form */ $field_group->mode = 'form';
   /* group_media|node|publication|form */ $field_group->parent_name = '';
   /* group_media|node|publication|form */ $field_group->data = array(
   /* group_media|node|publication|form */   'label' => 'Images',
   /* group_media|node|publication|form */   'weight' => '1',
   /* group_media|node|publication|form */   'children' => array(
   /* group_media|node|publication|form */     0 => 'field_main_image',
   /* group_media|node|publication|form */     1 => 'field_thumbnail_image',
   /* group_media|node|publication|form */   ),
   /* group_media|node|publication|form */   'format_type' => 'fieldset',
   /* group_media|node|publication|form */   'format_settings' => array(
   /* group_media|node|publication|form */     'label' => 'Images',
   /* group_media|node|publication|form */     'instance_settings' => array(
   /* group_media|node|publication|form */       'required_fields' => 1,
   /* group_media|node|publication|form */       'classes' => 'group-media field-group-fieldset',
   /* group_media|node|publication|form */       'description' => '',
   /* group_media|node|publication|form */     ),
   /* group_media|node|publication|form */     'formatter' => 'collapsed',
   /* group_media|node|publication|form */   ),
   /* group_media|node|publication|form */ );
  $field_groups['group_media|node|publication|form'] = $field_group;

   /* group_miscellaneous|node|organization|form */ $field_group = new stdClass();
   /* group_miscellaneous|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_miscellaneous|node|organization|form */ $field_group->api_version = 1;
   /* group_miscellaneous|node|organization|form */ $field_group->identifier = 'group_miscellaneous|node|organization|form';
   /* group_miscellaneous|node|organization|form */ $field_group->group_name = 'group_miscellaneous';
   /* group_miscellaneous|node|organization|form */ $field_group->entity_type = 'node';
   /* group_miscellaneous|node|organization|form */ $field_group->bundle = 'organization';
   /* group_miscellaneous|node|organization|form */ $field_group->mode = 'form';
   /* group_miscellaneous|node|organization|form */ $field_group->parent_name = '';
   /* group_miscellaneous|node|organization|form */ $field_group->data = array(
   /* group_miscellaneous|node|organization|form */   'label' => 'Miscellaneous',
   /* group_miscellaneous|node|organization|form */   'weight' => '5',
   /* group_miscellaneous|node|organization|form */   'children' => array(
   /* group_miscellaneous|node|organization|form */     0 => 'og_menu',
   /* group_miscellaneous|node|organization|form */     1 => 'path',
   /* group_miscellaneous|node|organization|form */     2 => 'redirect',
   /* group_miscellaneous|node|organization|form */   ),
   /* group_miscellaneous|node|organization|form */   'format_type' => 'fieldset',
   /* group_miscellaneous|node|organization|form */   'format_settings' => array(
   /* group_miscellaneous|node|organization|form */     'label' => 'Miscellaneous',
   /* group_miscellaneous|node|organization|form */     'instance_settings' => array(
   /* group_miscellaneous|node|organization|form */       'required_fields' => 0,
   /* group_miscellaneous|node|organization|form */       'classes' => 'group-miscellaneous field-group-fieldset',
   /* group_miscellaneous|node|organization|form */       'description' => '',
   /* group_miscellaneous|node|organization|form */     ),
   /* group_miscellaneous|node|organization|form */     'formatter' => 'collapsed',
   /* group_miscellaneous|node|organization|form */   ),
   /* group_miscellaneous|node|organization|form */ );
  $field_groups['group_miscellaneous|node|organization|form'] = $field_group;

   /* group_misc|node|alumni_group|form */ $field_group = new stdClass();
   /* group_misc|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_misc|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_misc|node|alumni_group|form */ $field_group->identifier = 'group_misc|node|alumni_group|form';
   /* group_misc|node|alumni_group|form */ $field_group->group_name = 'group_misc';
   /* group_misc|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_misc|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_misc|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_misc|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_misc|node|alumni_group|form */ $field_group->data = array(
   /* group_misc|node|alumni_group|form */   'label' => 'Miscellaneous',
   /* group_misc|node|alumni_group|form */   'weight' => '11',
   /* group_misc|node|alumni_group|form */   'children' => array(
   /* group_misc|node|alumni_group|form */     0 => 'group_group',
   /* group_misc|node|alumni_group|form */     1 => 'og_menu',
   /* group_misc|node|alumni_group|form */     2 => 'path',
   /* group_misc|node|alumni_group|form */     3 => 'redirect',
   /* group_misc|node|alumni_group|form */   ),
   /* group_misc|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_misc|node|alumni_group|form */   'format_settings' => array(
   /* group_misc|node|alumni_group|form */     'formatter' => 'collapsible',
   /* group_misc|node|alumni_group|form */     'instance_settings' => array(
   /* group_misc|node|alumni_group|form */       'description' => '',
   /* group_misc|node|alumni_group|form */       'classes' => 'group-misc field-group-fieldset',
   /* group_misc|node|alumni_group|form */       'required_fields' => 1,
   /* group_misc|node|alumni_group|form */     ),
   /* group_misc|node|alumni_group|form */   ),
   /* group_misc|node|alumni_group|form */ );
  $field_groups['group_misc|node|alumni_group|form'] = $field_group;

   /* group_misc|node|group|form */ $field_group = new stdClass();
   /* group_misc|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_misc|node|group|form */ $field_group->api_version = 1;
   /* group_misc|node|group|form */ $field_group->identifier = 'group_misc|node|group|form';
   /* group_misc|node|group|form */ $field_group->group_name = 'group_misc';
   /* group_misc|node|group|form */ $field_group->entity_type = 'node';
   /* group_misc|node|group|form */ $field_group->bundle = 'group';
   /* group_misc|node|group|form */ $field_group->mode = 'form';
   /* group_misc|node|group|form */ $field_group->parent_name = '';
   /* group_misc|node|group|form */ $field_group->data = array(
   /* group_misc|node|group|form */   'label' => 'Miscellaneous',
   /* group_misc|node|group|form */   'weight' => '6',
   /* group_misc|node|group|form */   'children' => array(
   /* group_misc|node|group|form */     0 => 'group_group',
   /* group_misc|node|group|form */     1 => 'field_recommended_links',
   /* group_misc|node|group|form */     2 => 'og_menu',
   /* group_misc|node|group|form */     3 => 'path',
   /* group_misc|node|group|form */     4 => 'redirect',
   /* group_misc|node|group|form */   ),
   /* group_misc|node|group|form */   'format_type' => 'fieldset',
   /* group_misc|node|group|form */   'format_settings' => array(
   /* group_misc|node|group|form */     'label' => 'Miscellaneous',
   /* group_misc|node|group|form */     'instance_settings' => array(
   /* group_misc|node|group|form */       'required_fields' => 0,
   /* group_misc|node|group|form */       'classes' => 'group-misc field-group-fieldset',
   /* group_misc|node|group|form */       'description' => '',
   /* group_misc|node|group|form */     ),
   /* group_misc|node|group|form */     'formatter' => 'collapsed',
   /* group_misc|node|group|form */   ),
   /* group_misc|node|group|form */ );
  $field_groups['group_misc|node|group|form'] = $field_group;

   /* group_misellaneous|node|course_group|form */ $field_group = new stdClass();
   /* group_misellaneous|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_misellaneous|node|course_group|form */ $field_group->api_version = 1;
   /* group_misellaneous|node|course_group|form */ $field_group->identifier = 'group_misellaneous|node|course_group|form';
   /* group_misellaneous|node|course_group|form */ $field_group->group_name = 'group_misellaneous';
   /* group_misellaneous|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_misellaneous|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_misellaneous|node|course_group|form */ $field_group->mode = 'form';
   /* group_misellaneous|node|course_group|form */ $field_group->parent_name = '';
   /* group_misellaneous|node|course_group|form */ $field_group->data = array(
   /* group_misellaneous|node|course_group|form */   'label' => 'Miscellaneous',
   /* group_misellaneous|node|course_group|form */   'weight' => '7',
   /* group_misellaneous|node|course_group|form */   'children' => array(
   /* group_misellaneous|node|course_group|form */     0 => 'group_group',
   /* group_misellaneous|node|course_group|form */     1 => 'og_menu',
   /* group_misellaneous|node|course_group|form */     2 => 'path',
   /* group_misellaneous|node|course_group|form */     3 => 'redirect',
   /* group_misellaneous|node|course_group|form */   ),
   /* group_misellaneous|node|course_group|form */   'format_type' => 'fieldset',
   /* group_misellaneous|node|course_group|form */   'format_settings' => array(
   /* group_misellaneous|node|course_group|form */     'label' => 'Miscellaneous',
   /* group_misellaneous|node|course_group|form */     'instance_settings' => array(
   /* group_misellaneous|node|course_group|form */       'required_fields' => 0,
   /* group_misellaneous|node|course_group|form */       'id' => '',
   /* group_misellaneous|node|course_group|form */       'classes' => 'group-misellaneous field-group-fieldset hide',
   /* group_misellaneous|node|course_group|form */       'description' => '',
   /* group_misellaneous|node|course_group|form */     ),
   /* group_misellaneous|node|course_group|form */     'formatter' => 'collapsed',
   /* group_misellaneous|node|course_group|form */   ),
   /* group_misellaneous|node|course_group|form */ );
  $field_groups['group_misellaneous|node|course_group|form'] = $field_group;

   /* group_notifications|user|user|form */ $field_group = new stdClass();
   /* group_notifications|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_notifications|user|user|form */ $field_group->api_version = 1;
   /* group_notifications|user|user|form */ $field_group->identifier = 'group_notifications|user|user|form';
   /* group_notifications|user|user|form */ $field_group->group_name = 'group_notifications';
   /* group_notifications|user|user|form */ $field_group->entity_type = 'user';
   /* group_notifications|user|user|form */ $field_group->bundle = 'user';
   /* group_notifications|user|user|form */ $field_group->mode = 'form';
   /* group_notifications|user|user|form */ $field_group->parent_name = 'group_settings';
   /* group_notifications|user|user|form */ $field_group->data = array(
   /* group_notifications|user|user|form */   'label' => 'Notifications',
   /* group_notifications|user|user|form */   'weight' => '12',
   /* group_notifications|user|user|form */   'children' => array(
   /* group_notifications|user|user|form */     0 => 'privatemsg',
   /* group_notifications|user|user|form */     1 => 'user_relationships_ui_settings',
   /* group_notifications|user|user|form */   ),
   /* group_notifications|user|user|form */   'format_type' => 'fieldset',
   /* group_notifications|user|user|form */   'format_settings' => array(
   /* group_notifications|user|user|form */     'label' => 'Notifications',
   /* group_notifications|user|user|form */     'instance_settings' => array(
   /* group_notifications|user|user|form */       'required_fields' => 1,
   /* group_notifications|user|user|form */       'classes' => 'group-notifications field-group-fieldset',
   /* group_notifications|user|user|form */       'description' => '',
   /* group_notifications|user|user|form */     ),
   /* group_notifications|user|user|form */     'formatter' => 'collapsed',
   /* group_notifications|user|user|form */   ),
   /* group_notifications|user|user|form */ );
  $field_groups['group_notifications|user|user|form'] = $field_group;

   /* group_org_info|node|organization|form */ $field_group = new stdClass();
   /* group_org_info|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_org_info|node|organization|form */ $field_group->api_version = 1;
   /* group_org_info|node|organization|form */ $field_group->identifier = 'group_org_info|node|organization|form';
   /* group_org_info|node|organization|form */ $field_group->group_name = 'group_org_info';
   /* group_org_info|node|organization|form */ $field_group->entity_type = 'node';
   /* group_org_info|node|organization|form */ $field_group->bundle = 'organization';
   /* group_org_info|node|organization|form */ $field_group->mode = 'form';
   /* group_org_info|node|organization|form */ $field_group->parent_name = '';
   /* group_org_info|node|organization|form */ $field_group->data = array(
   /* group_org_info|node|organization|form */   'label' => 'Organization Info',
   /* group_org_info|node|organization|form */   'weight' => '7',
   /* group_org_info|node|organization|form */   'children' => array(),
   /* group_org_info|node|organization|form */   'format_type' => 'tab',
   /* group_org_info|node|organization|form */   'format_settings' => array(
   /* group_org_info|node|organization|form */     'formatter' => 'closed',
   /* group_org_info|node|organization|form */     'instance_settings' => array(
   /* group_org_info|node|organization|form */       'description' => '',
   /* group_org_info|node|organization|form */       'classes' => '',
   /* group_org_info|node|organization|form */       'required_fields' => 1,
   /* group_org_info|node|organization|form */     ),
   /* group_org_info|node|organization|form */   ),
   /* group_org_info|node|organization|form */ );
  $field_groups['group_org_info|node|organization|form'] = $field_group;

   /* group_organization_styles|node|organization|form */ $field_group = new stdClass();
   /* group_organization_styles|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_organization_styles|node|organization|form */ $field_group->api_version = 1;
   /* group_organization_styles|node|organization|form */ $field_group->identifier = 'group_organization_styles|node|organization|form';
   /* group_organization_styles|node|organization|form */ $field_group->group_name = 'group_organization_styles';
   /* group_organization_styles|node|organization|form */ $field_group->entity_type = 'node';
   /* group_organization_styles|node|organization|form */ $field_group->bundle = 'organization';
   /* group_organization_styles|node|organization|form */ $field_group->mode = 'form';
   /* group_organization_styles|node|organization|form */ $field_group->parent_name = '';
   /* group_organization_styles|node|organization|form */ $field_group->data = array(
   /* group_organization_styles|node|organization|form */   'label' => 'Organization Styles',
   /* group_organization_styles|node|organization|form */   'weight' => '1',
   /* group_organization_styles|node|organization|form */   'children' => array(
   /* group_organization_styles|node|organization|form */     0 => 'field_logo',
   /* group_organization_styles|node|organization|form */     1 => 'field_main_image',
   /* group_organization_styles|node|organization|form */   ),
   /* group_organization_styles|node|organization|form */   'format_type' => 'fieldset',
   /* group_organization_styles|node|organization|form */   'format_settings' => array(
   /* group_organization_styles|node|organization|form */     'formatter' => 'collapsed',
   /* group_organization_styles|node|organization|form */     'instance_settings' => array(
   /* group_organization_styles|node|organization|form */       'description' => '',
   /* group_organization_styles|node|organization|form */       'classes' => 'group-organization-styles field-group-fieldset',
   /* group_organization_styles|node|organization|form */       'required_fields' => 1,
   /* group_organization_styles|node|organization|form */     ),
   /* group_organization_styles|node|organization|form */   ),
   /* group_organization_styles|node|organization|form */ );
  $field_groups['group_organization_styles|node|organization|form'] = $field_group;

   /* group_password|user|user|form */ $field_group = new stdClass();
   /* group_password|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_password|user|user|form */ $field_group->api_version = 1;
   /* group_password|user|user|form */ $field_group->identifier = 'group_password|user|user|form';
   /* group_password|user|user|form */ $field_group->group_name = 'group_password';
   /* group_password|user|user|form */ $field_group->entity_type = 'user';
   /* group_password|user|user|form */ $field_group->bundle = 'user';
   /* group_password|user|user|form */ $field_group->mode = 'form';
   /* group_password|user|user|form */ $field_group->parent_name = 'group_settings';
   /* group_password|user|user|form */ $field_group->data = array(
   /* group_password|user|user|form */   'label' => 'Password',
   /* group_password|user|user|form */   'weight' => '10',
   /* group_password|user|user|form */   'children' => array(
   /* group_password|user|user|form */     0 => 'field_crm_id',
   /* group_password|user|user|form */     1 => 'field_crm_source',
   /* group_password|user|user|form */     2 => 'password_policy',
   /* group_password|user|user|form */     3 => 'account',
   /* group_password|user|user|form */   ),
   /* group_password|user|user|form */   'format_type' => 'fieldset',
   /* group_password|user|user|form */   'format_settings' => array(
   /* group_password|user|user|form */     'label' => 'Password',
   /* group_password|user|user|form */     'instance_settings' => array(
   /* group_password|user|user|form */       'required_fields' => 1,
   /* group_password|user|user|form */       'classes' => 'group-password field-group-fieldset',
   /* group_password|user|user|form */       'description' => '',
   /* group_password|user|user|form */     ),
   /* group_password|user|user|form */     'formatter' => 'collapsible',
   /* group_password|user|user|form */   ),
   /* group_password|user|user|form */ );
  $field_groups['group_password|user|user|form'] = $field_group;

   /* group_poll_settings|node|poll|form */ $field_group = new stdClass();
   /* group_poll_settings|node|poll|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_poll_settings|node|poll|form */ $field_group->api_version = 1;
   /* group_poll_settings|node|poll|form */ $field_group->identifier = 'group_poll_settings|node|poll|form';
   /* group_poll_settings|node|poll|form */ $field_group->group_name = 'group_poll_settings';
   /* group_poll_settings|node|poll|form */ $field_group->entity_type = 'node';
   /* group_poll_settings|node|poll|form */ $field_group->bundle = 'poll';
   /* group_poll_settings|node|poll|form */ $field_group->mode = 'form';
   /* group_poll_settings|node|poll|form */ $field_group->parent_name = '';
   /* group_poll_settings|node|poll|form */ $field_group->data = array(
   /* group_poll_settings|node|poll|form */   'label' => 'Poll settings',
   /* group_poll_settings|node|poll|form */   'weight' => '2',
   /* group_poll_settings|node|poll|form */   'children' => array(
   /* group_poll_settings|node|poll|form */     0 => 'settings',
   /* group_poll_settings|node|poll|form */   ),
   /* group_poll_settings|node|poll|form */   'format_type' => 'fieldset',
   /* group_poll_settings|node|poll|form */   'format_settings' => array(
   /* group_poll_settings|node|poll|form */     'label' => 'Poll settings',
   /* group_poll_settings|node|poll|form */     'instance_settings' => array(
   /* group_poll_settings|node|poll|form */       'required_fields' => 1,
   /* group_poll_settings|node|poll|form */       'id' => '',
   /* group_poll_settings|node|poll|form */       'classes' => 'group-poll-settings field-group-fieldset',
   /* group_poll_settings|node|poll|form */       'description' => '',
   /* group_poll_settings|node|poll|form */     ),
   /* group_poll_settings|node|poll|form */     'formatter' => 'collapsed',
   /* group_poll_settings|node|poll|form */   ),
   /* group_poll_settings|node|poll|form */ );
  $field_groups['group_poll_settings|node|poll|form'] = $field_group;

   /* group_privacy_settings|node|announcement|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|announcement|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|announcement|form */ $field_group->identifier = 'group_privacy_settings|node|announcement|form';
   /* group_privacy_settings|node|announcement|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_privacy_settings|node|announcement|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|announcement|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|announcement|form */ $field_group->data = array(
   /* group_privacy_settings|node|announcement|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|announcement|form */   'weight' => '6',
   /* group_privacy_settings|node|announcement|form */   'children' => array(
   /* group_privacy_settings|node|announcement|form */     0 => 'group_content_access',
   /* group_privacy_settings|node|announcement|form */     1 => 'og_group_ref',
   /* group_privacy_settings|node|announcement|form */     2 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|announcement|form */   ),
   /* group_privacy_settings|node|announcement|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|announcement|form */   'format_settings' => array(
   /* group_privacy_settings|node|announcement|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|announcement|form */     'instance_settings' => array(
   /* group_privacy_settings|node|announcement|form */       'required_fields' => 1,
   /* group_privacy_settings|node|announcement|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|announcement|form */       'description' => '',
   /* group_privacy_settings|node|announcement|form */     ),
   /* group_privacy_settings|node|announcement|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|announcement|form */   ),
   /* group_privacy_settings|node|announcement|form */ );
  $field_groups['group_privacy_settings|node|announcement|form'] = $field_group;

   /* group_privacy_settings|node|course|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|course|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|course|form */ $field_group->identifier = 'group_privacy_settings|node|course|form';
   /* group_privacy_settings|node|course|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|course|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|course|form */ $field_group->bundle = 'course';
   /* group_privacy_settings|node|course|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|course|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|course|form */ $field_group->data = array(
   /* group_privacy_settings|node|course|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|course|form */   'weight' => '8',
   /* group_privacy_settings|node|course|form */   'children' => array(
   /* group_privacy_settings|node|course|form */     0 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|course|form */     1 => 'group_group',
   /* group_privacy_settings|node|course|form */     2 => 'og_group_ref',
   /* group_privacy_settings|node|course|form */     3 => 'group_access',
   /* group_privacy_settings|node|course|form */     4 => 'field_display_all_fields',
   /* group_privacy_settings|node|course|form */     5 => 'og_menu',
   /* group_privacy_settings|node|course|form */   ),
   /* group_privacy_settings|node|course|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|course|form */   'format_settings' => array(
   /* group_privacy_settings|node|course|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|course|form */     'instance_settings' => array(
   /* group_privacy_settings|node|course|form */       'required_fields' => 1,
   /* group_privacy_settings|node|course|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|course|form */       'description' => '',
   /* group_privacy_settings|node|course|form */     ),
   /* group_privacy_settings|node|course|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|course|form */   ),
   /* group_privacy_settings|node|course|form */ );
  $field_groups['group_privacy_settings|node|course|form'] = $field_group;

   /* group_privacy_settings|node|event|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|event|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|event|form */ $field_group->identifier = 'group_privacy_settings|node|event|form';
   /* group_privacy_settings|node|event|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|event|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|event|form */ $field_group->bundle = 'event';
   /* group_privacy_settings|node|event|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|event|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|event|form */ $field_group->data = array(
   /* group_privacy_settings|node|event|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|event|form */   'weight' => '8',
   /* group_privacy_settings|node|event|form */   'children' => array(
   /* group_privacy_settings|node|event|form */     0 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|event|form */     1 => 'group_group',
   /* group_privacy_settings|node|event|form */     2 => 'og_group_ref',
   /* group_privacy_settings|node|event|form */     3 => 'group_access',
   /* group_privacy_settings|node|event|form */     4 => 'og_menu',
   /* group_privacy_settings|node|event|form */   ),
   /* group_privacy_settings|node|event|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|event|form */   'format_settings' => array(
   /* group_privacy_settings|node|event|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|event|form */     'instance_settings' => array(
   /* group_privacy_settings|node|event|form */       'required_fields' => 1,
   /* group_privacy_settings|node|event|form */       'id' => '',
   /* group_privacy_settings|node|event|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|event|form */       'description' => '',
   /* group_privacy_settings|node|event|form */     ),
   /* group_privacy_settings|node|event|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|event|form */   ),
   /* group_privacy_settings|node|event|form */ );
  $field_groups['group_privacy_settings|node|event|form'] = $field_group;

   /* group_privacy_settings|node|group|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|group|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|group|form */ $field_group->identifier = 'group_privacy_settings|node|group|form';
   /* group_privacy_settings|node|group|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|group|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|group|form */ $field_group->bundle = 'group';
   /* group_privacy_settings|node|group|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|group|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|group|form */ $field_group->data = array(
   /* group_privacy_settings|node|group|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|group|form */   'weight' => '7',
   /* group_privacy_settings|node|group|form */   'children' => array(
   /* group_privacy_settings|node|group|form */     0 => 'group_access',
   /* group_privacy_settings|node|group|form */     1 => 'og_group_ref',
   /* group_privacy_settings|node|group|form */     2 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|group|form */     3 => 'og_roles_permissions',
   /* group_privacy_settings|node|group|form */   ),
   /* group_privacy_settings|node|group|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|group|form */   'format_settings' => array(
   /* group_privacy_settings|node|group|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|group|form */     'instance_settings' => array(
   /* group_privacy_settings|node|group|form */       'required_fields' => 1,
   /* group_privacy_settings|node|group|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|group|form */       'description' => '',
   /* group_privacy_settings|node|group|form */     ),
   /* group_privacy_settings|node|group|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|group|form */   ),
   /* group_privacy_settings|node|group|form */ );
  $field_groups['group_privacy_settings|node|group|form'] = $field_group;

   /* group_privacy_settings|node|organization|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|organization|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|organization|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|organization|form */ $field_group->identifier = 'group_privacy_settings|node|organization|form';
   /* group_privacy_settings|node|organization|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|organization|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|organization|form */ $field_group->bundle = 'organization';
   /* group_privacy_settings|node|organization|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|organization|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|organization|form */ $field_group->data = array(
   /* group_privacy_settings|node|organization|form */   'label' => 'Privacy and Account Request Settings',
   /* group_privacy_settings|node|organization|form */   'weight' => '4',
   /* group_privacy_settings|node|organization|form */   'children' => array(
   /* group_privacy_settings|node|organization|form */     0 => 'og_roles_permissions',
   /* group_privacy_settings|node|organization|form */     1 => 'field_require_nationality',
   /* group_privacy_settings|node|organization|form */     2 => 'field_allow_account_request',
   /* group_privacy_settings|node|organization|form */     3 => 'group_access',
   /* group_privacy_settings|node|organization|form */   ),
   /* group_privacy_settings|node|organization|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|organization|form */   'format_settings' => array(
   /* group_privacy_settings|node|organization|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|organization|form */     'instance_settings' => array(
   /* group_privacy_settings|node|organization|form */       'description' => '',
   /* group_privacy_settings|node|organization|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|organization|form */       'required_fields' => 1,
   /* group_privacy_settings|node|organization|form */     ),
   /* group_privacy_settings|node|organization|form */   ),
   /* group_privacy_settings|node|organization|form */ );
  $field_groups['group_privacy_settings|node|organization|form'] = $field_group;

   /* group_privacy_settings|node|post|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|post|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|post|form */ $field_group->identifier = 'group_privacy_settings|node|post|form';
   /* group_privacy_settings|node|post|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|post|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|post|form */ $field_group->bundle = 'post';
   /* group_privacy_settings|node|post|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|post|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|post|form */ $field_group->data = array(
   /* group_privacy_settings|node|post|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|post|form */   'weight' => '6',
   /* group_privacy_settings|node|post|form */   'children' => array(
   /* group_privacy_settings|node|post|form */     0 => 'group_content_access',
   /* group_privacy_settings|node|post|form */     1 => 'og_group_ref',
   /* group_privacy_settings|node|post|form */     2 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|post|form */   ),
   /* group_privacy_settings|node|post|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|post|form */   'format_settings' => array(
   /* group_privacy_settings|node|post|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|post|form */     'instance_settings' => array(
   /* group_privacy_settings|node|post|form */       'required_fields' => 1,
   /* group_privacy_settings|node|post|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|post|form */       'description' => '',
   /* group_privacy_settings|node|post|form */     ),
   /* group_privacy_settings|node|post|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|post|form */   ),
   /* group_privacy_settings|node|post|form */ );
  $field_groups['group_privacy_settings|node|post|form'] = $field_group;

   /* group_privacy_settings|node|program|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|program|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|program|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|program|form */ $field_group->identifier = 'group_privacy_settings|node|program|form';
   /* group_privacy_settings|node|program|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|program|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|program|form */ $field_group->bundle = 'program';
   /* group_privacy_settings|node|program|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|program|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|program|form */ $field_group->data = array(
   /* group_privacy_settings|node|program|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|program|form */   'weight' => '3',
   /* group_privacy_settings|node|program|form */   'children' => array(
   /* group_privacy_settings|node|program|form */     0 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|program|form */     1 => 'group_access',
   /* group_privacy_settings|node|program|form */     2 => 'group_group',
   /* group_privacy_settings|node|program|form */     3 => 'og_group_ref',
   /* group_privacy_settings|node|program|form */     4 => 'og_menu',
   /* group_privacy_settings|node|program|form */   ),
   /* group_privacy_settings|node|program|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|program|form */   'format_settings' => array(
   /* group_privacy_settings|node|program|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|program|form */     'instance_settings' => array(
   /* group_privacy_settings|node|program|form */       'required_fields' => 1,
   /* group_privacy_settings|node|program|form */       'classes' => 'group-basic-information field-group-fieldset ',
   /* group_privacy_settings|node|program|form */       'description' => '',
   /* group_privacy_settings|node|program|form */     ),
   /* group_privacy_settings|node|program|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|program|form */   ),
   /* group_privacy_settings|node|program|form */ );
  $field_groups['group_privacy_settings|node|program|form'] = $field_group;

   /* group_privacy_settings|node|publication|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|publication|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|publication|form */ $field_group->identifier = 'group_privacy_settings|node|publication|form';
   /* group_privacy_settings|node|publication|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|publication|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|publication|form */ $field_group->bundle = 'publication';
   /* group_privacy_settings|node|publication|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|publication|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|publication|form */ $field_group->data = array(
   /* group_privacy_settings|node|publication|form */   'label' => 'Privacy settings',
   /* group_privacy_settings|node|publication|form */   'weight' => '6',
   /* group_privacy_settings|node|publication|form */   'children' => array(
   /* group_privacy_settings|node|publication|form */     0 => 'og_group_ref',
   /* group_privacy_settings|node|publication|form */     1 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|publication|form */     2 => 'group_access',
   /* group_privacy_settings|node|publication|form */     3 => 'group_content_access',
   /* group_privacy_settings|node|publication|form */   ),
   /* group_privacy_settings|node|publication|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|publication|form */   'format_settings' => array(
   /* group_privacy_settings|node|publication|form */     'label' => 'Privacy settings',
   /* group_privacy_settings|node|publication|form */     'instance_settings' => array(
   /* group_privacy_settings|node|publication|form */       'required_fields' => 1,
   /* group_privacy_settings|node|publication|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|publication|form */       'description' => '',
   /* group_privacy_settings|node|publication|form */     ),
   /* group_privacy_settings|node|publication|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|publication|form */   ),
   /* group_privacy_settings|node|publication|form */ );
  $field_groups['group_privacy_settings|node|publication|form'] = $field_group;

   /* group_privacy|node|alumni_group|form */ $field_group = new stdClass();
   /* group_privacy|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_privacy|node|alumni_group|form */ $field_group->identifier = 'group_privacy|node|alumni_group|form';
   /* group_privacy|node|alumni_group|form */ $field_group->group_name = 'group_privacy';
   /* group_privacy|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_privacy|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_privacy|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_privacy|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_privacy|node|alumni_group|form */ $field_group->data = array(
   /* group_privacy|node|alumni_group|form */   'label' => 'Privacy settings',
   /* group_privacy|node|alumni_group|form */   'weight' => '9',
   /* group_privacy|node|alumni_group|form */   'children' => array(
   /* group_privacy|node|alumni_group|form */     0 => 'og_group_ref',
   /* group_privacy|node|alumni_group|form */     1 => 'field_gn2_simple_access',
   /* group_privacy|node|alumni_group|form */     2 => 'og_roles_permissions',
   /* group_privacy|node|alumni_group|form */     3 => 'group_access',
   /* group_privacy|node|alumni_group|form */   ),
   /* group_privacy|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_privacy|node|alumni_group|form */   'format_settings' => array(
   /* group_privacy|node|alumni_group|form */     'label' => 'Privacy settings',
   /* group_privacy|node|alumni_group|form */     'instance_settings' => array(
   /* group_privacy|node|alumni_group|form */       'required_fields' => 0,
   /* group_privacy|node|alumni_group|form */       'classes' => 'group-privacy field-group-fieldset',
   /* group_privacy|node|alumni_group|form */       'description' => '',
   /* group_privacy|node|alumni_group|form */     ),
   /* group_privacy|node|alumni_group|form */     'formatter' => 'collapsed',
   /* group_privacy|node|alumni_group|form */   ),
   /* group_privacy|node|alumni_group|form */ );
  $field_groups['group_privacy|node|alumni_group|form'] = $field_group;

   /* group_privacy|node|course_group|form */ $field_group = new stdClass();
   /* group_privacy|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy|node|course_group|form */ $field_group->api_version = 1;
   /* group_privacy|node|course_group|form */ $field_group->identifier = 'group_privacy|node|course_group|form';
   /* group_privacy|node|course_group|form */ $field_group->group_name = 'group_privacy';
   /* group_privacy|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_privacy|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_privacy|node|course_group|form */ $field_group->mode = 'form';
   /* group_privacy|node|course_group|form */ $field_group->parent_name = '';
   /* group_privacy|node|course_group|form */ $field_group->data = array(
   /* group_privacy|node|course_group|form */   'label' => 'Privacy Settings',
   /* group_privacy|node|course_group|form */   'weight' => '5',
   /* group_privacy|node|course_group|form */   'children' => array(
   /* group_privacy|node|course_group|form */     0 => 'field_gn2_simple_access',
   /* group_privacy|node|course_group|form */     1 => 'group_access',
   /* group_privacy|node|course_group|form */     2 => 'og_group_ref',
   /* group_privacy|node|course_group|form */     3 => 'og_roles_permissions',
   /* group_privacy|node|course_group|form */   ),
   /* group_privacy|node|course_group|form */   'format_type' => 'fieldset',
   /* group_privacy|node|course_group|form */   'format_settings' => array(
   /* group_privacy|node|course_group|form */     'label' => 'Privacy Settings',
   /* group_privacy|node|course_group|form */     'instance_settings' => array(
   /* group_privacy|node|course_group|form */       'required_fields' => 1,
   /* group_privacy|node|course_group|form */       'classes' => 'group-privacy field-group-fieldset',
   /* group_privacy|node|course_group|form */       'description' => '',
   /* group_privacy|node|course_group|form */     ),
   /* group_privacy|node|course_group|form */     'formatter' => 'collapsed',
   /* group_privacy|node|course_group|form */   ),
   /* group_privacy|node|course_group|form */ );
  $field_groups['group_privacy|node|course_group|form'] = $field_group;

   /* group_privacy|node|news|form */ $field_group = new stdClass();
   /* group_privacy|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy|node|news|form */ $field_group->api_version = 1;
   /* group_privacy|node|news|form */ $field_group->identifier = 'group_privacy|node|news|form';
   /* group_privacy|node|news|form */ $field_group->group_name = 'group_privacy';
   /* group_privacy|node|news|form */ $field_group->entity_type = 'node';
   /* group_privacy|node|news|form */ $field_group->bundle = 'news';
   /* group_privacy|node|news|form */ $field_group->mode = 'form';
   /* group_privacy|node|news|form */ $field_group->parent_name = '';
   /* group_privacy|node|news|form */ $field_group->data = array(
   /* group_privacy|node|news|form */   'label' => 'Privacy settings',
   /* group_privacy|node|news|form */   'weight' => '6',
   /* group_privacy|node|news|form */   'children' => array(
   /* group_privacy|node|news|form */     0 => 'group_content_access',
   /* group_privacy|node|news|form */     1 => 'og_group_ref',
   /* group_privacy|node|news|form */     2 => 'field_gn2_simple_access',
   /* group_privacy|node|news|form */   ),
   /* group_privacy|node|news|form */   'format_type' => 'fieldset',
   /* group_privacy|node|news|form */   'format_settings' => array(
   /* group_privacy|node|news|form */     'label' => 'Privacy settings',
   /* group_privacy|node|news|form */     'instance_settings' => array(
   /* group_privacy|node|news|form */       'required_fields' => 1,
   /* group_privacy|node|news|form */       'classes' => 'group-privacy field-group-fieldset',
   /* group_privacy|node|news|form */       'description' => '',
   /* group_privacy|node|news|form */     ),
   /* group_privacy|node|news|form */     'formatter' => 'collapsed',
   /* group_privacy|node|news|form */   ),
   /* group_privacy|node|news|form */ );
  $field_groups['group_privacy|node|news|form'] = $field_group;

   /* group_privacy|node|poll|form */ $field_group = new stdClass();
   /* group_privacy|node|poll|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy|node|poll|form */ $field_group->api_version = 1;
   /* group_privacy|node|poll|form */ $field_group->identifier = 'group_privacy|node|poll|form';
   /* group_privacy|node|poll|form */ $field_group->group_name = 'group_privacy';
   /* group_privacy|node|poll|form */ $field_group->entity_type = 'node';
   /* group_privacy|node|poll|form */ $field_group->bundle = 'poll';
   /* group_privacy|node|poll|form */ $field_group->mode = 'form';
   /* group_privacy|node|poll|form */ $field_group->parent_name = '';
   /* group_privacy|node|poll|form */ $field_group->data = array(
   /* group_privacy|node|poll|form */   'label' => 'Privacy settings',
   /* group_privacy|node|poll|form */   'weight' => '1',
   /* group_privacy|node|poll|form */   'children' => array(
   /* group_privacy|node|poll|form */     0 => 'field_gn2_simple_access',
   /* group_privacy|node|poll|form */     1 => 'group_content_access',
   /* group_privacy|node|poll|form */     2 => 'og_group_ref',
   /* group_privacy|node|poll|form */   ),
   /* group_privacy|node|poll|form */   'format_type' => 'fieldset',
   /* group_privacy|node|poll|form */   'format_settings' => array(
   /* group_privacy|node|poll|form */     'label' => 'Privacy settings',
   /* group_privacy|node|poll|form */     'instance_settings' => array(
   /* group_privacy|node|poll|form */       'required_fields' => 1,
   /* group_privacy|node|poll|form */       'classes' => 'group-privacy field-group-fieldset',
   /* group_privacy|node|poll|form */       'description' => '',
   /* group_privacy|node|poll|form */     ),
   /* group_privacy|node|poll|form */     'formatter' => 'collapsed',
   /* group_privacy|node|poll|form */   ),
   /* group_privacy|node|poll|form */ );
  $field_groups['group_privacy|node|poll|form'] = $field_group;

   /* group_pub_data|node|publication|default */ $field_group = new stdClass();
   /* group_pub_data|node|publication|default */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_pub_data|node|publication|default */ $field_group->api_version = 1;
   /* group_pub_data|node|publication|default */ $field_group->identifier = 'group_pub_data|node|publication|default';
   /* group_pub_data|node|publication|default */ $field_group->group_name = 'group_pub_data';
   /* group_pub_data|node|publication|default */ $field_group->entity_type = 'node';
   /* group_pub_data|node|publication|default */ $field_group->bundle = 'publication';
   /* group_pub_data|node|publication|default */ $field_group->mode = 'default';
   /* group_pub_data|node|publication|default */ $field_group->parent_name = '';
   /* group_pub_data|node|publication|default */ $field_group->data = array(
   /* group_pub_data|node|publication|default */   'label' => 'Publication data',
   /* group_pub_data|node|publication|default */   'weight' => '1',
   /* group_pub_data|node|publication|default */   'children' => array(
   /* group_pub_data|node|publication|default */     0 => 'field_isbn',
   /* group_pub_data|node|publication|default */     1 => 'field_publication_author',
   /* group_pub_data|node|publication|default */     2 => 'field_publication_date',
   /* group_pub_data|node|publication|default */     3 => 'field_publisher',
   /* group_pub_data|node|publication|default */   ),
   /* group_pub_data|node|publication|default */   'format_type' => 'fieldset',
   /* group_pub_data|node|publication|default */   'format_settings' => array(
   /* group_pub_data|node|publication|default */     'formatter' => 'collapsible',
   /* group_pub_data|node|publication|default */     'instance_settings' => array(
   /* group_pub_data|node|publication|default */       'description' => '',
   /* group_pub_data|node|publication|default */       'classes' => 'group-pub-data field-group-fieldset',
   /* group_pub_data|node|publication|default */     ),
   /* group_pub_data|node|publication|default */   ),
   /* group_pub_data|node|publication|default */ );
  $field_groups['group_pub_data|node|publication|default'] = $field_group;

   /* group_publishing|node|announcement|form */ $field_group = new stdClass();
   /* group_publishing|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_publishing|node|announcement|form */ $field_group->api_version = 1;
   /* group_publishing|node|announcement|form */ $field_group->identifier = 'group_publishing|node|announcement|form';
   /* group_publishing|node|announcement|form */ $field_group->group_name = 'group_publishing';
   /* group_publishing|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_publishing|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_publishing|node|announcement|form */ $field_group->mode = 'form';
   /* group_publishing|node|announcement|form */ $field_group->parent_name = '';
   /* group_publishing|node|announcement|form */ $field_group->data = array(
   /* group_publishing|node|announcement|form */   'label' => 'Publishing information',
   /* group_publishing|node|announcement|form */   'weight' => '7',
   /* group_publishing|node|announcement|form */   'children' => array(
   /* group_publishing|node|announcement|form */     0 => 'field_release_date_toggle',
   /* group_publishing|node|announcement|form */     1 => 'scheduler_settings',
   /* group_publishing|node|announcement|form */   ),
   /* group_publishing|node|announcement|form */   'format_type' => 'tab',
   /* group_publishing|node|announcement|form */   'format_settings' => array(
   /* group_publishing|node|announcement|form */     'formatter' => 'closed',
   /* group_publishing|node|announcement|form */     'instance_settings' => array(
   /* group_publishing|node|announcement|form */       'description' => '',
   /* group_publishing|node|announcement|form */       'classes' => '',
   /* group_publishing|node|announcement|form */       'required_fields' => 1,
   /* group_publishing|node|announcement|form */     ),
   /* group_publishing|node|announcement|form */   ),
   /* group_publishing|node|announcement|form */ );
  $field_groups['group_publishing|node|announcement|form'] = $field_group;

   /* group_publishing|node|news|form */ $field_group = new stdClass();
   /* group_publishing|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_publishing|node|news|form */ $field_group->api_version = 1;
   /* group_publishing|node|news|form */ $field_group->identifier = 'group_publishing|node|news|form';
   /* group_publishing|node|news|form */ $field_group->group_name = 'group_publishing';
   /* group_publishing|node|news|form */ $field_group->entity_type = 'node';
   /* group_publishing|node|news|form */ $field_group->bundle = 'news';
   /* group_publishing|node|news|form */ $field_group->mode = 'form';
   /* group_publishing|node|news|form */ $field_group->parent_name = '';
   /* group_publishing|node|news|form */ $field_group->data = array(
   /* group_publishing|node|news|form */   'label' => 'Publishing information',
   /* group_publishing|node|news|form */   'weight' => '7',
   /* group_publishing|node|news|form */   'children' => array(
   /* group_publishing|node|news|form */     0 => 'field_release_date_toggle',
   /* group_publishing|node|news|form */     1 => 'scheduler_settings',
   /* group_publishing|node|news|form */   ),
   /* group_publishing|node|news|form */   'format_type' => 'tab',
   /* group_publishing|node|news|form */   'format_settings' => array(
   /* group_publishing|node|news|form */     'formatter' => 'closed',
   /* group_publishing|node|news|form */     'instance_settings' => array(
   /* group_publishing|node|news|form */       'description' => '',
   /* group_publishing|node|news|form */       'classes' => '',
   /* group_publishing|node|news|form */       'required_fields' => 1,
   /* group_publishing|node|news|form */     ),
   /* group_publishing|node|news|form */   ),
   /* group_publishing|node|news|form */ );
  $field_groups['group_publishing|node|news|form'] = $field_group;

   /* group_publishing|node|post|form */ $field_group = new stdClass();
   /* group_publishing|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_publishing|node|post|form */ $field_group->api_version = 1;
   /* group_publishing|node|post|form */ $field_group->identifier = 'group_publishing|node|post|form';
   /* group_publishing|node|post|form */ $field_group->group_name = 'group_publishing';
   /* group_publishing|node|post|form */ $field_group->entity_type = 'node';
   /* group_publishing|node|post|form */ $field_group->bundle = 'post';
   /* group_publishing|node|post|form */ $field_group->mode = 'form';
   /* group_publishing|node|post|form */ $field_group->parent_name = '';
   /* group_publishing|node|post|form */ $field_group->data = array(
   /* group_publishing|node|post|form */   'label' => 'Publishing information',
   /* group_publishing|node|post|form */   'weight' => '7',
   /* group_publishing|node|post|form */   'children' => array(
   /* group_publishing|node|post|form */     0 => 'field_release_date_toggle',
   /* group_publishing|node|post|form */     1 => 'scheduler_settings',
   /* group_publishing|node|post|form */   ),
   /* group_publishing|node|post|form */   'format_type' => 'tab',
   /* group_publishing|node|post|form */   'format_settings' => array(
   /* group_publishing|node|post|form */     'formatter' => 'closed',
   /* group_publishing|node|post|form */     'instance_settings' => array(
   /* group_publishing|node|post|form */       'description' => '',
   /* group_publishing|node|post|form */       'classes' => '',
   /* group_publishing|node|post|form */       'required_fields' => 1,
   /* group_publishing|node|post|form */     ),
   /* group_publishing|node|post|form */   ),
   /* group_publishing|node|post|form */ );
  $field_groups['group_publishing|node|post|form'] = $field_group;

   /* group_regions|node|alumni_group|form */ $field_group = new stdClass();
   /* group_regions|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_regions|node|alumni_group|form */ $field_group->identifier = 'group_regions|node|alumni_group|form';
   /* group_regions|node|alumni_group|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_regions|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_regions|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_regions|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_regions|node|alumni_group|form */ $field_group->data = array(
   /* group_regions|node|alumni_group|form */   'label' => 'Regions',
   /* group_regions|node|alumni_group|form */   'weight' => '5',
   /* group_regions|node|alumni_group|form */   'children' => array(
   /* group_regions|node|alumni_group|form */     0 => 'field_region',
   /* group_regions|node|alumni_group|form */   ),
   /* group_regions|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_regions|node|alumni_group|form */   'format_settings' => array(
   /* group_regions|node|alumni_group|form */     'label' => 'Regions',
   /* group_regions|node|alumni_group|form */     'instance_settings' => array(
   /* group_regions|node|alumni_group|form */       'required_fields' => 0,
   /* group_regions|node|alumni_group|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|alumni_group|form */       'description' => '',
   /* group_regions|node|alumni_group|form */     ),
   /* group_regions|node|alumni_group|form */     'formatter' => 'collapsed',
   /* group_regions|node|alumni_group|form */   ),
   /* group_regions|node|alumni_group|form */ );
  $field_groups['group_regions|node|alumni_group|form'] = $field_group;

   /* group_regions|node|announcement|form */ $field_group = new stdClass();
   /* group_regions|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|announcement|form */ $field_group->api_version = 1;
   /* group_regions|node|announcement|form */ $field_group->identifier = 'group_regions|node|announcement|form';
   /* group_regions|node|announcement|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_regions|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_regions|node|announcement|form */ $field_group->mode = 'form';
   /* group_regions|node|announcement|form */ $field_group->parent_name = '';
   /* group_regions|node|announcement|form */ $field_group->data = array(
   /* group_regions|node|announcement|form */   'label' => 'Regions',
   /* group_regions|node|announcement|form */   'weight' => '4',
   /* group_regions|node|announcement|form */   'children' => array(
   /* group_regions|node|announcement|form */     0 => 'field_region',
   /* group_regions|node|announcement|form */   ),
   /* group_regions|node|announcement|form */   'format_type' => 'fieldset',
   /* group_regions|node|announcement|form */   'format_settings' => array(
   /* group_regions|node|announcement|form */     'label' => 'Regions',
   /* group_regions|node|announcement|form */     'instance_settings' => array(
   /* group_regions|node|announcement|form */       'required_fields' => 0,
   /* group_regions|node|announcement|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|announcement|form */       'description' => '',
   /* group_regions|node|announcement|form */     ),
   /* group_regions|node|announcement|form */     'formatter' => 'collapsed',
   /* group_regions|node|announcement|form */   ),
   /* group_regions|node|announcement|form */ );
  $field_groups['group_regions|node|announcement|form'] = $field_group;

   /* group_regions|node|course_group|form */ $field_group = new stdClass();
   /* group_regions|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|course_group|form */ $field_group->api_version = 1;
   /* group_regions|node|course_group|form */ $field_group->identifier = 'group_regions|node|course_group|form';
   /* group_regions|node|course_group|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_regions|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_regions|node|course_group|form */ $field_group->mode = 'form';
   /* group_regions|node|course_group|form */ $field_group->parent_name = '';
   /* group_regions|node|course_group|form */ $field_group->data = array(
   /* group_regions|node|course_group|form */   'label' => 'Regions',
   /* group_regions|node|course_group|form */   'weight' => '3',
   /* group_regions|node|course_group|form */   'children' => array(
   /* group_regions|node|course_group|form */     0 => 'field_region',
   /* group_regions|node|course_group|form */   ),
   /* group_regions|node|course_group|form */   'format_type' => 'fieldset',
   /* group_regions|node|course_group|form */   'format_settings' => array(
   /* group_regions|node|course_group|form */     'label' => 'Regions',
   /* group_regions|node|course_group|form */     'instance_settings' => array(
   /* group_regions|node|course_group|form */       'required_fields' => 0,
   /* group_regions|node|course_group|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|course_group|form */       'description' => '',
   /* group_regions|node|course_group|form */     ),
   /* group_regions|node|course_group|form */     'formatter' => 'collapsed',
   /* group_regions|node|course_group|form */   ),
   /* group_regions|node|course_group|form */ );
  $field_groups['group_regions|node|course_group|form'] = $field_group;

   /* group_regions|node|course|form */ $field_group = new stdClass();
   /* group_regions|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|course|form */ $field_group->api_version = 1;
   /* group_regions|node|course|form */ $field_group->identifier = 'group_regions|node|course|form';
   /* group_regions|node|course|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|course|form */ $field_group->entity_type = 'node';
   /* group_regions|node|course|form */ $field_group->bundle = 'course';
   /* group_regions|node|course|form */ $field_group->mode = 'form';
   /* group_regions|node|course|form */ $field_group->parent_name = '';
   /* group_regions|node|course|form */ $field_group->data = array(
   /* group_regions|node|course|form */   'label' => 'Regions',
   /* group_regions|node|course|form */   'weight' => '5',
   /* group_regions|node|course|form */   'children' => array(
   /* group_regions|node|course|form */     0 => 'field_region',
   /* group_regions|node|course|form */   ),
   /* group_regions|node|course|form */   'format_type' => 'fieldset',
   /* group_regions|node|course|form */   'format_settings' => array(
   /* group_regions|node|course|form */     'label' => 'Regions',
   /* group_regions|node|course|form */     'instance_settings' => array(
   /* group_regions|node|course|form */       'required_fields' => 0,
   /* group_regions|node|course|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|course|form */       'description' => '',
   /* group_regions|node|course|form */     ),
   /* group_regions|node|course|form */     'formatter' => 'collapsed',
   /* group_regions|node|course|form */   ),
   /* group_regions|node|course|form */ );
  $field_groups['group_regions|node|course|form'] = $field_group;

   /* group_regions|node|event|form */ $field_group = new stdClass();
   /* group_regions|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|event|form */ $field_group->api_version = 1;
   /* group_regions|node|event|form */ $field_group->identifier = 'group_regions|node|event|form';
   /* group_regions|node|event|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|event|form */ $field_group->entity_type = 'node';
   /* group_regions|node|event|form */ $field_group->bundle = 'event';
   /* group_regions|node|event|form */ $field_group->mode = 'form';
   /* group_regions|node|event|form */ $field_group->parent_name = '';
   /* group_regions|node|event|form */ $field_group->data = array(
   /* group_regions|node|event|form */   'label' => 'Regions',
   /* group_regions|node|event|form */   'weight' => '6',
   /* group_regions|node|event|form */   'children' => array(
   /* group_regions|node|event|form */     0 => 'field_region',
   /* group_regions|node|event|form */   ),
   /* group_regions|node|event|form */   'format_type' => 'fieldset',
   /* group_regions|node|event|form */   'format_settings' => array(
   /* group_regions|node|event|form */     'label' => 'Regions',
   /* group_regions|node|event|form */     'instance_settings' => array(
   /* group_regions|node|event|form */       'required_fields' => 0,
   /* group_regions|node|event|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|event|form */       'description' => '',
   /* group_regions|node|event|form */     ),
   /* group_regions|node|event|form */     'formatter' => 'collapsed',
   /* group_regions|node|event|form */   ),
   /* group_regions|node|event|form */ );
  $field_groups['group_regions|node|event|form'] = $field_group;

   /* group_regions|node|group|form */ $field_group = new stdClass();
   /* group_regions|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|group|form */ $field_group->api_version = 1;
   /* group_regions|node|group|form */ $field_group->identifier = 'group_regions|node|group|form';
   /* group_regions|node|group|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|group|form */ $field_group->entity_type = 'node';
   /* group_regions|node|group|form */ $field_group->bundle = 'group';
   /* group_regions|node|group|form */ $field_group->mode = 'form';
   /* group_regions|node|group|form */ $field_group->parent_name = '';
   /* group_regions|node|group|form */ $field_group->data = array(
   /* group_regions|node|group|form */   'label' => 'Regions',
   /* group_regions|node|group|form */   'weight' => '5',
   /* group_regions|node|group|form */   'children' => array(
   /* group_regions|node|group|form */     0 => 'field_region',
   /* group_regions|node|group|form */   ),
   /* group_regions|node|group|form */   'format_type' => 'fieldset',
   /* group_regions|node|group|form */   'format_settings' => array(
   /* group_regions|node|group|form */     'label' => 'Regions',
   /* group_regions|node|group|form */     'instance_settings' => array(
   /* group_regions|node|group|form */       'required_fields' => 0,
   /* group_regions|node|group|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|group|form */       'description' => '',
   /* group_regions|node|group|form */     ),
   /* group_regions|node|group|form */     'formatter' => 'collapsed',
   /* group_regions|node|group|form */   ),
   /* group_regions|node|group|form */ );
  $field_groups['group_regions|node|group|form'] = $field_group;

   /* group_regions|node|news|form */ $field_group = new stdClass();
   /* group_regions|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|news|form */ $field_group->api_version = 1;
   /* group_regions|node|news|form */ $field_group->identifier = 'group_regions|node|news|form';
   /* group_regions|node|news|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|news|form */ $field_group->entity_type = 'node';
   /* group_regions|node|news|form */ $field_group->bundle = 'news';
   /* group_regions|node|news|form */ $field_group->mode = 'form';
   /* group_regions|node|news|form */ $field_group->parent_name = '';
   /* group_regions|node|news|form */ $field_group->data = array(
   /* group_regions|node|news|form */   'label' => 'Regions',
   /* group_regions|node|news|form */   'weight' => '4',
   /* group_regions|node|news|form */   'children' => array(
   /* group_regions|node|news|form */     0 => 'field_region',
   /* group_regions|node|news|form */   ),
   /* group_regions|node|news|form */   'format_type' => 'fieldset',
   /* group_regions|node|news|form */   'format_settings' => array(
   /* group_regions|node|news|form */     'label' => 'Regions',
   /* group_regions|node|news|form */     'instance_settings' => array(
   /* group_regions|node|news|form */       'required_fields' => 0,
   /* group_regions|node|news|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|news|form */       'description' => '',
   /* group_regions|node|news|form */     ),
   /* group_regions|node|news|form */     'formatter' => 'collapsed',
   /* group_regions|node|news|form */   ),
   /* group_regions|node|news|form */ );
  $field_groups['group_regions|node|news|form'] = $field_group;

   /* group_regions|node|post|form */ $field_group = new stdClass();
   /* group_regions|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|post|form */ $field_group->api_version = 1;
   /* group_regions|node|post|form */ $field_group->identifier = 'group_regions|node|post|form';
   /* group_regions|node|post|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|post|form */ $field_group->entity_type = 'node';
   /* group_regions|node|post|form */ $field_group->bundle = 'post';
   /* group_regions|node|post|form */ $field_group->mode = 'form';
   /* group_regions|node|post|form */ $field_group->parent_name = '';
   /* group_regions|node|post|form */ $field_group->data = array(
   /* group_regions|node|post|form */   'label' => 'Regions',
   /* group_regions|node|post|form */   'weight' => '4',
   /* group_regions|node|post|form */   'children' => array(
   /* group_regions|node|post|form */     0 => 'field_region',
   /* group_regions|node|post|form */   ),
   /* group_regions|node|post|form */   'format_type' => 'fieldset',
   /* group_regions|node|post|form */   'format_settings' => array(
   /* group_regions|node|post|form */     'label' => 'Regions',
   /* group_regions|node|post|form */     'instance_settings' => array(
   /* group_regions|node|post|form */       'required_fields' => 0,
   /* group_regions|node|post|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|post|form */       'description' => '',
   /* group_regions|node|post|form */     ),
   /* group_regions|node|post|form */     'formatter' => 'collapsed',
   /* group_regions|node|post|form */   ),
   /* group_regions|node|post|form */ );
  $field_groups['group_regions|node|post|form'] = $field_group;

   /* group_regions|node|publication|form */ $field_group = new stdClass();
   /* group_regions|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|publication|form */ $field_group->api_version = 1;
   /* group_regions|node|publication|form */ $field_group->identifier = 'group_regions|node|publication|form';
   /* group_regions|node|publication|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|publication|form */ $field_group->entity_type = 'node';
   /* group_regions|node|publication|form */ $field_group->bundle = 'publication';
   /* group_regions|node|publication|form */ $field_group->mode = 'form';
   /* group_regions|node|publication|form */ $field_group->parent_name = '';
   /* group_regions|node|publication|form */ $field_group->data = array(
   /* group_regions|node|publication|form */   'label' => 'Regions',
   /* group_regions|node|publication|form */   'weight' => '4',
   /* group_regions|node|publication|form */   'children' => array(
   /* group_regions|node|publication|form */     0 => 'field_region',
   /* group_regions|node|publication|form */   ),
   /* group_regions|node|publication|form */   'format_type' => 'fieldset',
   /* group_regions|node|publication|form */   'format_settings' => array(
   /* group_regions|node|publication|form */     'formatter' => 'collapsed',
   /* group_regions|node|publication|form */     'instance_settings' => array(
   /* group_regions|node|publication|form */       'description' => '',
   /* group_regions|node|publication|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|publication|form */       'id' => '',
   /* group_regions|node|publication|form */     ),
   /* group_regions|node|publication|form */   ),
   /* group_regions|node|publication|form */ );
  $field_groups['group_regions|node|publication|form'] = $field_group;

   /* group_registration|node|event|form */ $field_group = new stdClass();
   /* group_registration|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_registration|node|event|form */ $field_group->api_version = 1;
   /* group_registration|node|event|form */ $field_group->identifier = 'group_registration|node|event|form';
   /* group_registration|node|event|form */ $field_group->group_name = 'group_registration';
   /* group_registration|node|event|form */ $field_group->entity_type = 'node';
   /* group_registration|node|event|form */ $field_group->bundle = 'event';
   /* group_registration|node|event|form */ $field_group->mode = 'form';
   /* group_registration|node|event|form */ $field_group->parent_name = '';
   /* group_registration|node|event|form */ $field_group->data = array(
   /* group_registration|node|event|form */   'label' => 'Registration',
   /* group_registration|node|event|form */   'weight' => '3',
   /* group_registration|node|event|form */   'children' => array(
   /* group_registration|node|event|form */     0 => 'field_notification_recipients',
   /* group_registration|node|event|form */     1 => 'field_registration',
   /* group_registration|node|event|form */     2 => 'field_registration_limit',
   /* group_registration|node|event|form */     3 => 'field_registration_limit_number',
   /* group_registration|node|event|form */     4 => 'field_registration_list_visibili',
   /* group_registration|node|event|form */   ),
   /* group_registration|node|event|form */   'format_type' => 'fieldset',
   /* group_registration|node|event|form */   'format_settings' => array(
   /* group_registration|node|event|form */     'label' => 'Registration',
   /* group_registration|node|event|form */     'instance_settings' => array(
   /* group_registration|node|event|form */       'required_fields' => 1,
   /* group_registration|node|event|form */       'id' => '',
   /* group_registration|node|event|form */       'classes' => 'group-registration field-group-fieldset',
   /* group_registration|node|event|form */       'description' => '',
   /* group_registration|node|event|form */     ),
   /* group_registration|node|event|form */     'formatter' => 'collapsed',
   /* group_registration|node|event|form */   ),
   /* group_registration|node|event|form */ );
  $field_groups['group_registration|node|event|form'] = $field_group;

   /* group_settings|user|user|form */ $field_group = new stdClass();
   /* group_settings|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_settings|user|user|form */ $field_group->api_version = 1;
   /* group_settings|user|user|form */ $field_group->identifier = 'group_settings|user|user|form';
   /* group_settings|user|user|form */ $field_group->group_name = 'group_settings';
   /* group_settings|user|user|form */ $field_group->entity_type = 'user';
   /* group_settings|user|user|form */ $field_group->bundle = 'user';
   /* group_settings|user|user|form */ $field_group->mode = 'form';
   /* group_settings|user|user|form */ $field_group->parent_name = 'group_account';
   /* group_settings|user|user|form */ $field_group->data = array(
   /* group_settings|user|user|form */   'label' => 'Settings',
   /* group_settings|user|user|form */   'weight' => '28',
   /* group_settings|user|user|form */   'children' => array(
   /* group_settings|user|user|form */     0 => 'wysiwyg',
   /* group_settings|user|user|form */     1 => 'group_legal',
   /* group_settings|user|user|form */     2 => 'group_external_accounts',
   /* group_settings|user|user|form */     3 => 'group_admin_settings',
   /* group_settings|user|user|form */     4 => 'group_language_timezone',
   /* group_settings|user|user|form */     5 => 'group_notifications',
   /* group_settings|user|user|form */     6 => 'group_password',
   /* group_settings|user|user|form */   ),
   /* group_settings|user|user|form */   'format_type' => 'htab',
   /* group_settings|user|user|form */   'format_settings' => array(
   /* group_settings|user|user|form */     'formatter' => 'closed',
   /* group_settings|user|user|form */     'instance_settings' => array(
   /* group_settings|user|user|form */       'description' => '',
   /* group_settings|user|user|form */       'classes' => 'group-settings field-group-htab',
   /* group_settings|user|user|form */       'required_fields' => 1,
   /* group_settings|user|user|form */       'id' => '',
   /* group_settings|user|user|form */     ),
   /* group_settings|user|user|form */   ),
   /* group_settings|user|user|form */ );
  $field_groups['group_settings|user|user|form'] = $field_group;

   /* group_sidebar_elements|node|program|form */ $field_group = new stdClass();
   /* group_sidebar_elements|node|program|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_sidebar_elements|node|program|form */ $field_group->api_version = 1;
   /* group_sidebar_elements|node|program|form */ $field_group->identifier = 'group_sidebar_elements|node|program|form';
   /* group_sidebar_elements|node|program|form */ $field_group->group_name = 'group_sidebar_elements';
   /* group_sidebar_elements|node|program|form */ $field_group->entity_type = 'node';
   /* group_sidebar_elements|node|program|form */ $field_group->bundle = 'program';
   /* group_sidebar_elements|node|program|form */ $field_group->mode = 'form';
   /* group_sidebar_elements|node|program|form */ $field_group->parent_name = '';
   /* group_sidebar_elements|node|program|form */ $field_group->data = array(
   /* group_sidebar_elements|node|program|form */   'label' => 'Sidebar Elements',
   /* group_sidebar_elements|node|program|form */   'weight' => '1',
   /* group_sidebar_elements|node|program|form */   'children' => array(
   /* group_sidebar_elements|node|program|form */     0 => 'field_call_to_action',
   /* group_sidebar_elements|node|program|form */     1 => 'field_description',
   /* group_sidebar_elements|node|program|form */     2 => 'field_recommended_links',
   /* group_sidebar_elements|node|program|form */   ),
   /* group_sidebar_elements|node|program|form */   'format_type' => 'fieldset',
   /* group_sidebar_elements|node|program|form */   'format_settings' => array(
   /* group_sidebar_elements|node|program|form */     'label' => 'Sidebar Elements',
   /* group_sidebar_elements|node|program|form */     'instance_settings' => array(
   /* group_sidebar_elements|node|program|form */       'required_fields' => 0,
   /* group_sidebar_elements|node|program|form */       'classes' => 'group-basic-information field-group-fieldset ',
   /* group_sidebar_elements|node|program|form */       'description' => '',
   /* group_sidebar_elements|node|program|form */     ),
   /* group_sidebar_elements|node|program|form */     'formatter' => 'collapsed',
   /* group_sidebar_elements|node|program|form */   ),
   /* group_sidebar_elements|node|program|form */ );
  $field_groups['group_sidebar_elements|node|program|form'] = $field_group;

   /* group_social|user|user|form */ $field_group = new stdClass();
   /* group_social|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_social|user|user|form */ $field_group->api_version = 1;
   /* group_social|user|user|form */ $field_group->identifier = 'group_social|user|user|form';
   /* group_social|user|user|form */ $field_group->group_name = 'group_social';
   /* group_social|user|user|form */ $field_group->entity_type = 'user';
   /* group_social|user|user|form */ $field_group->bundle = 'user';
   /* group_social|user|user|form */ $field_group->mode = 'form';
   /* group_social|user|user|form */ $field_group->parent_name = 'group_contact_info';
   /* group_social|user|user|form */ $field_group->data = array(
   /* group_social|user|user|form */   'label' => 'Social Section',
   /* group_social|user|user|form */   'weight' => '15',
   /* group_social|user|user|form */   'children' => array(
   /* group_social|user|user|form */     0 => 'field_facebook',
   /* group_social|user|user|form */     1 => 'field_linkedin',
   /* group_social|user|user|form */     2 => 'field_twitter',
   /* group_social|user|user|form */     3 => 'field_website',
   /* group_social|user|user|form */   ),
   /* group_social|user|user|form */   'format_type' => 'html5',
   /* group_social|user|user|form */   'format_settings' => array(
   /* group_social|user|user|form */     'label' => 'Social Section',
   /* group_social|user|user|form */     'instance_settings' => array(
   /* group_social|user|user|form */       'id' => '',
   /* group_social|user|user|form */       'classes' => 'group-section',
   /* group_social|user|user|form */       'wrapper' => 'section',
   /* group_social|user|user|form */     ),
   /* group_social|user|user|form */   ),
   /* group_social|user|user|form */ );
  $field_groups['group_social|user|user|form'] = $field_group;

   /* group_tags|node|announcement|form */ $field_group = new stdClass();
   /* group_tags|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|announcement|form */ $field_group->api_version = 1;
   /* group_tags|node|announcement|form */ $field_group->identifier = 'group_tags|node|announcement|form';
   /* group_tags|node|announcement|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_tags|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_tags|node|announcement|form */ $field_group->mode = 'form';
   /* group_tags|node|announcement|form */ $field_group->parent_name = '';
   /* group_tags|node|announcement|form */ $field_group->data = array(
   /* group_tags|node|announcement|form */   'label' => 'Tags',
   /* group_tags|node|announcement|form */   'weight' => '5',
   /* group_tags|node|announcement|form */   'children' => array(
   /* group_tags|node|announcement|form */     0 => 'field_tags',
   /* group_tags|node|announcement|form */   ),
   /* group_tags|node|announcement|form */   'format_type' => 'fieldset',
   /* group_tags|node|announcement|form */   'format_settings' => array(
   /* group_tags|node|announcement|form */     'label' => 'Tags',
   /* group_tags|node|announcement|form */     'instance_settings' => array(
   /* group_tags|node|announcement|form */       'required_fields' => 0,
   /* group_tags|node|announcement|form */       'id' => '',
   /* group_tags|node|announcement|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|announcement|form */       'description' => '',
   /* group_tags|node|announcement|form */     ),
   /* group_tags|node|announcement|form */     'formatter' => 'collapsed',
   /* group_tags|node|announcement|form */   ),
   /* group_tags|node|announcement|form */ );
  $field_groups['group_tags|node|announcement|form'] = $field_group;

   /* group_tags|node|course|form */ $field_group = new stdClass();
   /* group_tags|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|course|form */ $field_group->api_version = 1;
   /* group_tags|node|course|form */ $field_group->identifier = 'group_tags|node|course|form';
   /* group_tags|node|course|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|course|form */ $field_group->entity_type = 'node';
   /* group_tags|node|course|form */ $field_group->bundle = 'course';
   /* group_tags|node|course|form */ $field_group->mode = 'form';
   /* group_tags|node|course|form */ $field_group->parent_name = '';
   /* group_tags|node|course|form */ $field_group->data = array(
   /* group_tags|node|course|form */   'label' => 'Tags',
   /* group_tags|node|course|form */   'weight' => '6',
   /* group_tags|node|course|form */   'children' => array(
   /* group_tags|node|course|form */     0 => 'field_tags',
   /* group_tags|node|course|form */   ),
   /* group_tags|node|course|form */   'format_type' => 'fieldset',
   /* group_tags|node|course|form */   'format_settings' => array(
   /* group_tags|node|course|form */     'label' => 'Tags',
   /* group_tags|node|course|form */     'instance_settings' => array(
   /* group_tags|node|course|form */       'required_fields' => 0,
   /* group_tags|node|course|form */       'id' => '',
   /* group_tags|node|course|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|course|form */       'description' => '',
   /* group_tags|node|course|form */     ),
   /* group_tags|node|course|form */     'formatter' => 'collapsed',
   /* group_tags|node|course|form */   ),
   /* group_tags|node|course|form */ );
  $field_groups['group_tags|node|course|form'] = $field_group;

   /* group_tags|node|event|form */ $field_group = new stdClass();
   /* group_tags|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|event|form */ $field_group->api_version = 1;
   /* group_tags|node|event|form */ $field_group->identifier = 'group_tags|node|event|form';
   /* group_tags|node|event|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|event|form */ $field_group->entity_type = 'node';
   /* group_tags|node|event|form */ $field_group->bundle = 'event';
   /* group_tags|node|event|form */ $field_group->mode = 'form';
   /* group_tags|node|event|form */ $field_group->parent_name = '';
   /* group_tags|node|event|form */ $field_group->data = array(
   /* group_tags|node|event|form */   'label' => 'Tags',
   /* group_tags|node|event|form */   'weight' => '7',
   /* group_tags|node|event|form */   'children' => array(
   /* group_tags|node|event|form */     0 => 'field_tags',
   /* group_tags|node|event|form */   ),
   /* group_tags|node|event|form */   'format_type' => 'fieldset',
   /* group_tags|node|event|form */   'format_settings' => array(
   /* group_tags|node|event|form */     'label' => 'Tags',
   /* group_tags|node|event|form */     'instance_settings' => array(
   /* group_tags|node|event|form */       'required_fields' => 0,
   /* group_tags|node|event|form */       'id' => '',
   /* group_tags|node|event|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|event|form */       'description' => '',
   /* group_tags|node|event|form */     ),
   /* group_tags|node|event|form */     'formatter' => 'collapsed',
   /* group_tags|node|event|form */   ),
   /* group_tags|node|event|form */ );
  $field_groups['group_tags|node|event|form'] = $field_group;

   /* group_tags|node|news|form */ $field_group = new stdClass();
   /* group_tags|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|news|form */ $field_group->api_version = 1;
   /* group_tags|node|news|form */ $field_group->identifier = 'group_tags|node|news|form';
   /* group_tags|node|news|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|news|form */ $field_group->entity_type = 'node';
   /* group_tags|node|news|form */ $field_group->bundle = 'news';
   /* group_tags|node|news|form */ $field_group->mode = 'form';
   /* group_tags|node|news|form */ $field_group->parent_name = '';
   /* group_tags|node|news|form */ $field_group->data = array(
   /* group_tags|node|news|form */   'label' => 'Tags',
   /* group_tags|node|news|form */   'weight' => '5',
   /* group_tags|node|news|form */   'children' => array(
   /* group_tags|node|news|form */     0 => 'field_tags',
   /* group_tags|node|news|form */   ),
   /* group_tags|node|news|form */   'format_type' => 'fieldset',
   /* group_tags|node|news|form */   'format_settings' => array(
   /* group_tags|node|news|form */     'label' => 'Tags',
   /* group_tags|node|news|form */     'instance_settings' => array(
   /* group_tags|node|news|form */       'required_fields' => 0,
   /* group_tags|node|news|form */       'id' => '',
   /* group_tags|node|news|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|news|form */       'description' => '',
   /* group_tags|node|news|form */     ),
   /* group_tags|node|news|form */     'formatter' => 'collapsed',
   /* group_tags|node|news|form */   ),
   /* group_tags|node|news|form */ );
  $field_groups['group_tags|node|news|form'] = $field_group;

   /* group_tags|node|poll|form */ $field_group = new stdClass();
   /* group_tags|node|poll|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|poll|form */ $field_group->api_version = 1;
   /* group_tags|node|poll|form */ $field_group->identifier = 'group_tags|node|poll|form';
   /* group_tags|node|poll|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|poll|form */ $field_group->entity_type = 'node';
   /* group_tags|node|poll|form */ $field_group->bundle = 'poll';
   /* group_tags|node|poll|form */ $field_group->mode = 'form';
   /* group_tags|node|poll|form */ $field_group->parent_name = '';
   /* group_tags|node|poll|form */ $field_group->data = array(
   /* group_tags|node|poll|form */   'label' => 'Tags',
   /* group_tags|node|poll|form */   'weight' => '3',
   /* group_tags|node|poll|form */   'children' => array(
   /* group_tags|node|poll|form */     0 => 'field_tags',
   /* group_tags|node|poll|form */   ),
   /* group_tags|node|poll|form */   'format_type' => 'fieldset',
   /* group_tags|node|poll|form */   'format_settings' => array(
   /* group_tags|node|poll|form */     'label' => 'Tags',
   /* group_tags|node|poll|form */     'instance_settings' => array(
   /* group_tags|node|poll|form */       'required_fields' => 0,
   /* group_tags|node|poll|form */       'id' => '',
   /* group_tags|node|poll|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|poll|form */       'description' => '',
   /* group_tags|node|poll|form */     ),
   /* group_tags|node|poll|form */     'formatter' => 'collapsed',
   /* group_tags|node|poll|form */   ),
   /* group_tags|node|poll|form */ );
  $field_groups['group_tags|node|poll|form'] = $field_group;

   /* group_tags|node|post|form */ $field_group = new stdClass();
   /* group_tags|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|post|form */ $field_group->api_version = 1;
   /* group_tags|node|post|form */ $field_group->identifier = 'group_tags|node|post|form';
   /* group_tags|node|post|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|post|form */ $field_group->entity_type = 'node';
   /* group_tags|node|post|form */ $field_group->bundle = 'post';
   /* group_tags|node|post|form */ $field_group->mode = 'form';
   /* group_tags|node|post|form */ $field_group->parent_name = '';
   /* group_tags|node|post|form */ $field_group->data = array(
   /* group_tags|node|post|form */   'label' => 'Tags',
   /* group_tags|node|post|form */   'weight' => '5',
   /* group_tags|node|post|form */   'children' => array(
   /* group_tags|node|post|form */     0 => 'field_tags',
   /* group_tags|node|post|form */   ),
   /* group_tags|node|post|form */   'format_type' => 'fieldset',
   /* group_tags|node|post|form */   'format_settings' => array(
   /* group_tags|node|post|form */     'label' => 'Tags',
   /* group_tags|node|post|form */     'instance_settings' => array(
   /* group_tags|node|post|form */       'required_fields' => 0,
   /* group_tags|node|post|form */       'id' => '',
   /* group_tags|node|post|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|post|form */       'description' => '',
   /* group_tags|node|post|form */     ),
   /* group_tags|node|post|form */     'formatter' => 'collapsed',
   /* group_tags|node|post|form */   ),
   /* group_tags|node|post|form */ );
  $field_groups['group_tags|node|post|form'] = $field_group;

   /* group_tags|node|publication|form */ $field_group = new stdClass();
   /* group_tags|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_tags|node|publication|form */ $field_group->api_version = 1;
   /* group_tags|node|publication|form */ $field_group->identifier = 'group_tags|node|publication|form';
   /* group_tags|node|publication|form */ $field_group->group_name = 'group_tags';
   /* group_tags|node|publication|form */ $field_group->entity_type = 'node';
   /* group_tags|node|publication|form */ $field_group->bundle = 'publication';
   /* group_tags|node|publication|form */ $field_group->mode = 'form';
   /* group_tags|node|publication|form */ $field_group->parent_name = '';
   /* group_tags|node|publication|form */ $field_group->data = array(
   /* group_tags|node|publication|form */   'label' => 'Tags',
   /* group_tags|node|publication|form */   'weight' => '5',
   /* group_tags|node|publication|form */   'children' => array(
   /* group_tags|node|publication|form */     0 => 'field_tags',
   /* group_tags|node|publication|form */   ),
   /* group_tags|node|publication|form */   'format_type' => 'fieldset',
   /* group_tags|node|publication|form */   'format_settings' => array(
   /* group_tags|node|publication|form */     'label' => 'Tags',
   /* group_tags|node|publication|form */     'instance_settings' => array(
   /* group_tags|node|publication|form */       'required_fields' => 0,
   /* group_tags|node|publication|form */       'id' => '',
   /* group_tags|node|publication|form */       'classes' => 'group-tags field-group-fieldset',
   /* group_tags|node|publication|form */       'description' => '',
   /* group_tags|node|publication|form */     ),
   /* group_tags|node|publication|form */     'formatter' => 'collapsed',
   /* group_tags|node|publication|form */   ),
   /* group_tags|node|publication|form */ );
  $field_groups['group_tags|node|publication|form'] = $field_group;

   /* group_title_section|node|course|form */ $field_group = new stdClass();
   /* group_title_section|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_title_section|node|course|form */ $field_group->api_version = 1;
   /* group_title_section|node|course|form */ $field_group->identifier = 'group_title_section|node|course|form';
   /* group_title_section|node|course|form */ $field_group->group_name = 'group_title_section';
   /* group_title_section|node|course|form */ $field_group->entity_type = 'node';
   /* group_title_section|node|course|form */ $field_group->bundle = 'course';
   /* group_title_section|node|course|form */ $field_group->mode = 'form';
   /* group_title_section|node|course|form */ $field_group->parent_name = 'group_basic_information';
   /* group_title_section|node|course|form */ $field_group->data = array(
   /* group_title_section|node|course|form */   'label' => 'Title Section',
   /* group_title_section|node|course|form */   'weight' => '15',
   /* group_title_section|node|course|form */   'children' => array(
   /* group_title_section|node|course|form */     0 => 'field_group_short_title',
   /* group_title_section|node|course|form */     1 => 'body',
   /* group_title_section|node|course|form */     2 => 'title',
   /* group_title_section|node|course|form */   ),
   /* group_title_section|node|course|form */   'format_type' => 'html-element',
   /* group_title_section|node|course|form */   'format_settings' => array(
   /* group_title_section|node|course|form */     'label' => 'Title Section',
   /* group_title_section|node|course|form */     'instance_settings' => array(
   /* group_title_section|node|course|form */       'required_fields' => 0,
   /* group_title_section|node|course|form */       'classes' => 'group-title-section field-group-html-element group-section',
   /* group_title_section|node|course|form */       'element' => 'section',
   /* group_title_section|node|course|form */       'show_label' => '0',
   /* group_title_section|node|course|form */       'label_element' => 'span',
   /* group_title_section|node|course|form */       'attributes' => '',
   /* group_title_section|node|course|form */     ),
   /* group_title_section|node|course|form */   ),
   /* group_title_section|node|course|form */ );
  $field_groups['group_title_section|node|course|form'] = $field_group;

   /* group_title_section|node|event|form */ $field_group = new stdClass();
   /* group_title_section|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_title_section|node|event|form */ $field_group->api_version = 1;
   /* group_title_section|node|event|form */ $field_group->identifier = 'group_title_section|node|event|form';
   /* group_title_section|node|event|form */ $field_group->group_name = 'group_title_section';
   /* group_title_section|node|event|form */ $field_group->entity_type = 'node';
   /* group_title_section|node|event|form */ $field_group->bundle = 'event';
   /* group_title_section|node|event|form */ $field_group->mode = 'form';
   /* group_title_section|node|event|form */ $field_group->parent_name = 'group_basic_information';
   /* group_title_section|node|event|form */ $field_group->data = array(
   /* group_title_section|node|event|form */   'label' => 'Title Section',
   /* group_title_section|node|event|form */   'weight' => '34',
   /* group_title_section|node|event|form */   'children' => array(
   /* group_title_section|node|event|form */     0 => 'body',
   /* group_title_section|node|event|form */     1 => 'title',
   /* group_title_section|node|event|form */   ),
   /* group_title_section|node|event|form */   'format_type' => 'html-element',
   /* group_title_section|node|event|form */   'format_settings' => array(
   /* group_title_section|node|event|form */     'label' => 'Title Section',
   /* group_title_section|node|event|form */     'instance_settings' => array(
   /* group_title_section|node|event|form */       'required_fields' => 1,
   /* group_title_section|node|event|form */       'classes' => 'group-section',
   /* group_title_section|node|event|form */       'element' => 'section',
   /* group_title_section|node|event|form */       'show_label' => '0',
   /* group_title_section|node|event|form */       'label_element' => 'span',
   /* group_title_section|node|event|form */       'attributes' => '',
   /* group_title_section|node|event|form */     ),
   /* group_title_section|node|event|form */     'formatter' => '',
   /* group_title_section|node|event|form */   ),
   /* group_title_section|node|event|form */ );
  $field_groups['group_title_section|node|event|form'] = $field_group;

   /* group_topics|node|alumni_group|form */ $field_group = new stdClass();
   /* group_topics|node|alumni_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|alumni_group|form */ $field_group->api_version = 1;
   /* group_topics|node|alumni_group|form */ $field_group->identifier = 'group_topics|node|alumni_group|form';
   /* group_topics|node|alumni_group|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|alumni_group|form */ $field_group->entity_type = 'node';
   /* group_topics|node|alumni_group|form */ $field_group->bundle = 'alumni_group';
   /* group_topics|node|alumni_group|form */ $field_group->mode = 'form';
   /* group_topics|node|alumni_group|form */ $field_group->parent_name = '';
   /* group_topics|node|alumni_group|form */ $field_group->data = array(
   /* group_topics|node|alumni_group|form */   'label' => 'Topics',
   /* group_topics|node|alumni_group|form */   'weight' => '2',
   /* group_topics|node|alumni_group|form */   'children' => array(
   /* group_topics|node|alumni_group|form */     0 => 'field_topic',
   /* group_topics|node|alumni_group|form */   ),
   /* group_topics|node|alumni_group|form */   'format_type' => 'fieldset',
   /* group_topics|node|alumni_group|form */   'format_settings' => array(
   /* group_topics|node|alumni_group|form */     'label' => 'Topics',
   /* group_topics|node|alumni_group|form */     'instance_settings' => array(
   /* group_topics|node|alumni_group|form */       'required_fields' => 0,
   /* group_topics|node|alumni_group|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|alumni_group|form */       'description' => '',
   /* group_topics|node|alumni_group|form */     ),
   /* group_topics|node|alumni_group|form */     'formatter' => 'collapsed',
   /* group_topics|node|alumni_group|form */   ),
   /* group_topics|node|alumni_group|form */ );
  $field_groups['group_topics|node|alumni_group|form'] = $field_group;

   /* group_topics|node|announcement|form */ $field_group = new stdClass();
   /* group_topics|node|announcement|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|announcement|form */ $field_group->api_version = 1;
   /* group_topics|node|announcement|form */ $field_group->identifier = 'group_topics|node|announcement|form';
   /* group_topics|node|announcement|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|announcement|form */ $field_group->entity_type = 'node';
   /* group_topics|node|announcement|form */ $field_group->bundle = 'announcement';
   /* group_topics|node|announcement|form */ $field_group->mode = 'form';
   /* group_topics|node|announcement|form */ $field_group->parent_name = '';
   /* group_topics|node|announcement|form */ $field_group->data = array(
   /* group_topics|node|announcement|form */   'label' => 'Topics',
   /* group_topics|node|announcement|form */   'weight' => '2',
   /* group_topics|node|announcement|form */   'children' => array(
   /* group_topics|node|announcement|form */     0 => 'field_topic',
   /* group_topics|node|announcement|form */   ),
   /* group_topics|node|announcement|form */   'format_type' => 'fieldset',
   /* group_topics|node|announcement|form */   'format_settings' => array(
   /* group_topics|node|announcement|form */     'label' => 'Topics',
   /* group_topics|node|announcement|form */     'instance_settings' => array(
   /* group_topics|node|announcement|form */       'required_fields' => 0,
   /* group_topics|node|announcement|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|announcement|form */       'description' => '',
   /* group_topics|node|announcement|form */     ),
   /* group_topics|node|announcement|form */     'formatter' => 'collapsed',
   /* group_topics|node|announcement|form */   ),
   /* group_topics|node|announcement|form */ );
  $field_groups['group_topics|node|announcement|form'] = $field_group;

   /* group_topics|node|course_group|form */ $field_group = new stdClass();
   /* group_topics|node|course_group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|course_group|form */ $field_group->api_version = 1;
   /* group_topics|node|course_group|form */ $field_group->identifier = 'group_topics|node|course_group|form';
   /* group_topics|node|course_group|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|course_group|form */ $field_group->entity_type = 'node';
   /* group_topics|node|course_group|form */ $field_group->bundle = 'course_group';
   /* group_topics|node|course_group|form */ $field_group->mode = 'form';
   /* group_topics|node|course_group|form */ $field_group->parent_name = '';
   /* group_topics|node|course_group|form */ $field_group->data = array(
   /* group_topics|node|course_group|form */   'label' => 'Topics',
   /* group_topics|node|course_group|form */   'weight' => '1',
   /* group_topics|node|course_group|form */   'children' => array(
   /* group_topics|node|course_group|form */     0 => 'field_topic',
   /* group_topics|node|course_group|form */   ),
   /* group_topics|node|course_group|form */   'format_type' => 'fieldset',
   /* group_topics|node|course_group|form */   'format_settings' => array(
   /* group_topics|node|course_group|form */     'label' => 'Topics',
   /* group_topics|node|course_group|form */     'instance_settings' => array(
   /* group_topics|node|course_group|form */       'required_fields' => 1,
   /* group_topics|node|course_group|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|course_group|form */       'description' => '',
   /* group_topics|node|course_group|form */     ),
   /* group_topics|node|course_group|form */     'formatter' => 'collapsed',
   /* group_topics|node|course_group|form */   ),
   /* group_topics|node|course_group|form */ );
  $field_groups['group_topics|node|course_group|form'] = $field_group;

   /* group_topics|node|course|form */ $field_group = new stdClass();
   /* group_topics|node|course|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|course|form */ $field_group->api_version = 1;
   /* group_topics|node|course|form */ $field_group->identifier = 'group_topics|node|course|form';
   /* group_topics|node|course|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|course|form */ $field_group->entity_type = 'node';
   /* group_topics|node|course|form */ $field_group->bundle = 'course';
   /* group_topics|node|course|form */ $field_group->mode = 'form';
   /* group_topics|node|course|form */ $field_group->parent_name = '';
   /* group_topics|node|course|form */ $field_group->data = array(
   /* group_topics|node|course|form */   'label' => 'Topics',
   /* group_topics|node|course|form */   'weight' => '3',
   /* group_topics|node|course|form */   'children' => array(
   /* group_topics|node|course|form */     0 => 'field_topic',
   /* group_topics|node|course|form */   ),
   /* group_topics|node|course|form */   'format_type' => 'fieldset',
   /* group_topics|node|course|form */   'format_settings' => array(
   /* group_topics|node|course|form */     'label' => 'Topics',
   /* group_topics|node|course|form */     'instance_settings' => array(
   /* group_topics|node|course|form */       'required_fields' => 1,
   /* group_topics|node|course|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|course|form */       'description' => '',
   /* group_topics|node|course|form */     ),
   /* group_topics|node|course|form */     'formatter' => 'collapsed',
   /* group_topics|node|course|form */   ),
   /* group_topics|node|course|form */ );
  $field_groups['group_topics|node|course|form'] = $field_group;

   /* group_topics|node|event|form */ $field_group = new stdClass();
   /* group_topics|node|event|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|event|form */ $field_group->api_version = 1;
   /* group_topics|node|event|form */ $field_group->identifier = 'group_topics|node|event|form';
   /* group_topics|node|event|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|event|form */ $field_group->entity_type = 'node';
   /* group_topics|node|event|form */ $field_group->bundle = 'event';
   /* group_topics|node|event|form */ $field_group->mode = 'form';
   /* group_topics|node|event|form */ $field_group->parent_name = '';
   /* group_topics|node|event|form */ $field_group->data = array(
   /* group_topics|node|event|form */   'label' => 'Topics',
   /* group_topics|node|event|form */   'weight' => '4',
   /* group_topics|node|event|form */   'children' => array(
   /* group_topics|node|event|form */     0 => 'field_topic',
   /* group_topics|node|event|form */   ),
   /* group_topics|node|event|form */   'format_type' => 'fieldset',
   /* group_topics|node|event|form */   'format_settings' => array(
   /* group_topics|node|event|form */     'label' => 'Topics',
   /* group_topics|node|event|form */     'instance_settings' => array(
   /* group_topics|node|event|form */       'required_fields' => 1,
   /* group_topics|node|event|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|event|form */       'description' => '',
   /* group_topics|node|event|form */     ),
   /* group_topics|node|event|form */     'formatter' => 'collapsed',
   /* group_topics|node|event|form */   ),
   /* group_topics|node|event|form */ );
  $field_groups['group_topics|node|event|form'] = $field_group;

   /* group_topics|node|group|form */ $field_group = new stdClass();
   /* group_topics|node|group|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|group|form */ $field_group->api_version = 1;
   /* group_topics|node|group|form */ $field_group->identifier = 'group_topics|node|group|form';
   /* group_topics|node|group|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|group|form */ $field_group->entity_type = 'node';
   /* group_topics|node|group|form */ $field_group->bundle = 'group';
   /* group_topics|node|group|form */ $field_group->mode = 'form';
   /* group_topics|node|group|form */ $field_group->parent_name = '';
   /* group_topics|node|group|form */ $field_group->data = array(
   /* group_topics|node|group|form */   'label' => 'Topics',
   /* group_topics|node|group|form */   'weight' => '3',
   /* group_topics|node|group|form */   'children' => array(
   /* group_topics|node|group|form */     0 => 'field_topic',
   /* group_topics|node|group|form */   ),
   /* group_topics|node|group|form */   'format_type' => 'fieldset',
   /* group_topics|node|group|form */   'format_settings' => array(
   /* group_topics|node|group|form */     'label' => 'Topics',
   /* group_topics|node|group|form */     'instance_settings' => array(
   /* group_topics|node|group|form */       'required_fields' => 1,
   /* group_topics|node|group|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|group|form */       'description' => '',
   /* group_topics|node|group|form */     ),
   /* group_topics|node|group|form */     'formatter' => 'collapsed',
   /* group_topics|node|group|form */   ),
   /* group_topics|node|group|form */ );
  $field_groups['group_topics|node|group|form'] = $field_group;

   /* group_topics|node|news|form */ $field_group = new stdClass();
   /* group_topics|node|news|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|news|form */ $field_group->api_version = 1;
   /* group_topics|node|news|form */ $field_group->identifier = 'group_topics|node|news|form';
   /* group_topics|node|news|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|news|form */ $field_group->entity_type = 'node';
   /* group_topics|node|news|form */ $field_group->bundle = 'news';
   /* group_topics|node|news|form */ $field_group->mode = 'form';
   /* group_topics|node|news|form */ $field_group->parent_name = '';
   /* group_topics|node|news|form */ $field_group->data = array(
   /* group_topics|node|news|form */   'label' => 'Topics',
   /* group_topics|node|news|form */   'weight' => '2',
   /* group_topics|node|news|form */   'children' => array(
   /* group_topics|node|news|form */     0 => 'field_topic',
   /* group_topics|node|news|form */   ),
   /* group_topics|node|news|form */   'format_type' => 'fieldset',
   /* group_topics|node|news|form */   'format_settings' => array(
   /* group_topics|node|news|form */     'label' => 'Topics',
   /* group_topics|node|news|form */     'instance_settings' => array(
   /* group_topics|node|news|form */       'required_fields' => 1,
   /* group_topics|node|news|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|news|form */       'description' => '',
   /* group_topics|node|news|form */     ),
   /* group_topics|node|news|form */     'formatter' => 'collapsed',
   /* group_topics|node|news|form */   ),
   /* group_topics|node|news|form */ );
  $field_groups['group_topics|node|news|form'] = $field_group;

   /* group_topics|node|post|form */ $field_group = new stdClass();
   /* group_topics|node|post|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|post|form */ $field_group->api_version = 1;
   /* group_topics|node|post|form */ $field_group->identifier = 'group_topics|node|post|form';
   /* group_topics|node|post|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|post|form */ $field_group->entity_type = 'node';
   /* group_topics|node|post|form */ $field_group->bundle = 'post';
   /* group_topics|node|post|form */ $field_group->mode = 'form';
   /* group_topics|node|post|form */ $field_group->parent_name = '';
   /* group_topics|node|post|form */ $field_group->data = array(
   /* group_topics|node|post|form */   'label' => 'Topics',
   /* group_topics|node|post|form */   'weight' => '2',
   /* group_topics|node|post|form */   'children' => array(
   /* group_topics|node|post|form */     0 => 'field_topic',
   /* group_topics|node|post|form */   ),
   /* group_topics|node|post|form */   'format_type' => 'fieldset',
   /* group_topics|node|post|form */   'format_settings' => array(
   /* group_topics|node|post|form */     'label' => 'Topics',
   /* group_topics|node|post|form */     'instance_settings' => array(
   /* group_topics|node|post|form */       'required_fields' => 0,
   /* group_topics|node|post|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|post|form */       'description' => '',
   /* group_topics|node|post|form */     ),
   /* group_topics|node|post|form */     'formatter' => 'collapsed',
   /* group_topics|node|post|form */   ),
   /* group_topics|node|post|form */ );
  $field_groups['group_topics|node|post|form'] = $field_group;

   /* group_topics|node|publication|form */ $field_group = new stdClass();
   /* group_topics|node|publication|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|publication|form */ $field_group->api_version = 1;
   /* group_topics|node|publication|form */ $field_group->identifier = 'group_topics|node|publication|form';
   /* group_topics|node|publication|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|publication|form */ $field_group->entity_type = 'node';
   /* group_topics|node|publication|form */ $field_group->bundle = 'publication';
   /* group_topics|node|publication|form */ $field_group->mode = 'form';
   /* group_topics|node|publication|form */ $field_group->parent_name = '';
   /* group_topics|node|publication|form */ $field_group->data = array(
   /* group_topics|node|publication|form */   'label' => 'Topics',
   /* group_topics|node|publication|form */   'weight' => '2',
   /* group_topics|node|publication|form */   'children' => array(
   /* group_topics|node|publication|form */     0 => 'field_topic',
   /* group_topics|node|publication|form */   ),
   /* group_topics|node|publication|form */   'format_type' => 'fieldset',
   /* group_topics|node|publication|form */   'format_settings' => array(
   /* group_topics|node|publication|form */     'label' => 'Topics',
   /* group_topics|node|publication|form */     'instance_settings' => array(
   /* group_topics|node|publication|form */       'required_fields' => 1,
   /* group_topics|node|publication|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|publication|form */       'description' => '',
   /* group_topics|node|publication|form */     ),
   /* group_topics|node|publication|form */     'formatter' => 'collapsed',
   /* group_topics|node|publication|form */   ),
   /* group_topics|node|publication|form */ );
  $field_groups['group_topics|node|publication|form'] = $field_group;

   /* group_topics|user|user|form */ $field_group = new stdClass();
   /* group_topics|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|user|user|form */ $field_group->api_version = 1;
   /* group_topics|user|user|form */ $field_group->identifier = 'group_topics|user|user|form';
   /* group_topics|user|user|form */ $field_group->group_name = 'group_topics';
   /* group_topics|user|user|form */ $field_group->entity_type = 'user';
   /* group_topics|user|user|form */ $field_group->bundle = 'user';
   /* group_topics|user|user|form */ $field_group->mode = 'form';
   /* group_topics|user|user|form */ $field_group->parent_name = 'group_interests_tab';
   /* group_topics|user|user|form */ $field_group->data = array(
   /* group_topics|user|user|form */   'label' => 'Topics of Interest',
   /* group_topics|user|user|form */   'weight' => '80',
   /* group_topics|user|user|form */   'children' => array(
   /* group_topics|user|user|form */     0 => 'field_topics_of_interest',
   /* group_topics|user|user|form */   ),
   /* group_topics|user|user|form */   'format_type' => 'fieldset',
   /* group_topics|user|user|form */   'format_settings' => array(
   /* group_topics|user|user|form */     'label' => 'Topics of Interest',
   /* group_topics|user|user|form */     'instance_settings' => array(
   /* group_topics|user|user|form */       'required_fields' => 0,
   /* group_topics|user|user|form */       'classes' => '',
   /* group_topics|user|user|form */       'description' => '',
   /* group_topics|user|user|form */     ),
   /* group_topics|user|user|form */     'formatter' => 'collapsed',
   /* group_topics|user|user|form */   ),
   /* group_topics|user|user|form */ );
  $field_groups['group_topics|user|user|form'] = $field_group;

   /* group_username_section|user|user|form */ $field_group = new stdClass();
   /* group_username_section|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_username_section|user|user|form */ $field_group->api_version = 1;
   /* group_username_section|user|user|form */ $field_group->identifier = 'group_username_section|user|user|form';
   /* group_username_section|user|user|form */ $field_group->group_name = 'group_username_section';
   /* group_username_section|user|user|form */ $field_group->entity_type = 'user';
   /* group_username_section|user|user|form */ $field_group->bundle = 'user';
   /* group_username_section|user|user|form */ $field_group->mode = 'form';
   /* group_username_section|user|user|form */ $field_group->parent_name = 'group_basic_info';
   /* group_username_section|user|user|form */ $field_group->data = array(
   /* group_username_section|user|user|form */   'label' => 'Username section',
   /* group_username_section|user|user|form */   'weight' => '51',
   /* group_username_section|user|user|form */   'children' => array(
   /* group_username_section|user|user|form */     0 => 'field_name_first',
   /* group_username_section|user|user|form */     1 => 'field_name_last',
   /* group_username_section|user|user|form */     2 => 'field_name_middle',
   /* group_username_section|user|user|form */     3 => 'field_user_rank_prefix',
   /* group_username_section|user|user|form */     4 => 'field_user_suffix',
   /* group_username_section|user|user|form */     5 => 'field_user_organization',
   /* group_username_section|user|user|form */     6 => 'field_user_title',
   /* group_username_section|user|user|form */     7 => 'field_cv_resume',
   /* group_username_section|user|user|form */     8 => 'picture',
   /* group_username_section|user|user|form */   ),
   /* group_username_section|user|user|form */   'format_type' => 'div',
   /* group_username_section|user|user|form */   'format_settings' => array(
   /* group_username_section|user|user|form */     'label' => 'Username section',
   /* group_username_section|user|user|form */     'instance_settings' => array(
   /* group_username_section|user|user|form */       'required_fields' => 1,
   /* group_username_section|user|user|form */       'id' => '',
   /* group_username_section|user|user|form */       'classes' => '',
   /* group_username_section|user|user|form */       'description' => '',
   /* group_username_section|user|user|form */       'show_label' => '0',
   /* group_username_section|user|user|form */       'label_element' => 'h3',
   /* group_username_section|user|user|form */       'effect' => 'none',
   /* group_username_section|user|user|form */       'speed' => 'fast',
   /* group_username_section|user|user|form */     ),
   /* group_username_section|user|user|form */     'formatter' => 'open',
   /* group_username_section|user|user|form */   ),
   /* group_username_section|user|user|form */ );
  $field_groups['group_username_section|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Admin settings');
  t('Attributes');
  t('Basic Info');
  t('Basic Information');
  t('Biography');
  t('Call To Action');
  t('Contact Info');
  t('Content');
  t('Countries');
  t('Countries of Interest');
  t('Country section');
  t('Course Managers');
  t('Date Section');
  t('Date section');
  t('Dates Section');
  t('Education & Training');
  t('Employers');
  t('Event Contact person');
  t('Expertise');
  t('Files');
  t('Footer Content');
  t('Help');
  t('Hidden section');
  t('Image section');
  t('Images');
  t('Interests');
  t('Language & Time Zone');
  t('Location Additional Information');
  t('Main News Image');
  t('Miscellaneous');
  t('Notifications');
  t('Organization Info');
  t('Organization Styles');
  t('Password');
  t('Poll settings');
  t('Privacy Settings');
  t('Privacy and Account Request Settings');
  t('Privacy settings');
  t('Publication data');
  t('Publishing information');
  t('Regions');
  t('Registration');
  t('Settings');
  t('Sidebar Elements');
  t('Social Section');
  t('Tags');
  t('Title Section');
  t('Topics');
  t('Topics of Interest');
  t('Type Section');
  t('Username section');

  return $field_groups;
}
