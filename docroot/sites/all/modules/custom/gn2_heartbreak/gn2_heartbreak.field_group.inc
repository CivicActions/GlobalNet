<?php
/**
 * @file
 * gn2_heartbreak.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_heartbreak_field_group_info() {
  $field_groups = array();

   /* group_add_a_session|entityform|session|form */ $field_group = new stdClass();
   /* group_add_a_session|entityform|session|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_add_a_session|entityform|session|form */ $field_group->api_version = 1;
   /* group_add_a_session|entityform|session|form */ $field_group->identifier = 'group_add_a_session|entityform|session|form';
   /* group_add_a_session|entityform|session|form */ $field_group->group_name = 'group_add_a_session';
   /* group_add_a_session|entityform|session|form */ $field_group->entity_type = 'entityform';
   /* group_add_a_session|entityform|session|form */ $field_group->bundle = 'session';
   /* group_add_a_session|entityform|session|form */ $field_group->mode = 'form';
   /* group_add_a_session|entityform|session|form */ $field_group->parent_name = '';
   /* group_add_a_session|entityform|session|form */ $field_group->data = array(
   /* group_add_a_session|entityform|session|form */   'label' => 'Add a Session',
   /* group_add_a_session|entityform|session|form */   'weight' => '0',
   /* group_add_a_session|entityform|session|form */   'children' => array(
   /* group_add_a_session|entityform|session|form */     0 => 'field_day_association',
   /* group_add_a_session|entityform|session|form */     1 => 'field_description',
   /* group_add_a_session|entityform|session|form */     2 => 'field_media',
   /* group_add_a_session|entityform|session|form */     3 => 'field_node_association',
   /* group_add_a_session|entityform|session|form */     4 => 'field_session_association',
   /* group_add_a_session|entityform|session|form */     5 => 'field_session_presenter',
   /* group_add_a_session|entityform|session|form */     6 => 'field_shared_entity_ref',
   /* group_add_a_session|entityform|session|form */     7 => 'field_title',
   /* group_add_a_session|entityform|session|form */     8 => 'field_type',
   /* group_add_a_session|entityform|session|form */     9 => 'field_mdy_for_filterering',
   /* group_add_a_session|entityform|session|form */     10 => 'field_weight',
   /* group_add_a_session|entityform|session|form */     11 => 'field_date2',
   /* group_add_a_session|entityform|session|form */     12 => 'field_day_number',
   /* group_add_a_session|entityform|session|form */     13 => 'redirect',
   /* group_add_a_session|entityform|session|form */   ),
   /* group_add_a_session|entityform|session|form */   'format_type' => 'fieldset',
   /* group_add_a_session|entityform|session|form */   'format_settings' => array(
   /* group_add_a_session|entityform|session|form */     'label' => 'Add a Session',
   /* group_add_a_session|entityform|session|form */     'instance_settings' => array(
   /* group_add_a_session|entityform|session|form */       'required_fields' => 1,
   /* group_add_a_session|entityform|session|form */       'classes' => 'group-add-a-session field-group-fieldset',
   /* group_add_a_session|entityform|session|form */       'description' => '',
   /* group_add_a_session|entityform|session|form */     ),
   /* group_add_a_session|entityform|session|form */     'formatter' => 'collapsed',
   /* group_add_a_session|entityform|session|form */   ),
   /* group_add_a_session|entityform|session|form */ );
  $field_groups['group_add_a_session|entityform|session|form'] = $field_group;

   /* group_basic_information|node|media_gallery|form */ $field_group = new stdClass();
   /* group_basic_information|node|media_gallery|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic_information|node|media_gallery|form */ $field_group->api_version = 1;
   /* group_basic_information|node|media_gallery|form */ $field_group->identifier = 'group_basic_information|node|media_gallery|form';
   /* group_basic_information|node|media_gallery|form */ $field_group->group_name = 'group_basic_information';
   /* group_basic_information|node|media_gallery|form */ $field_group->entity_type = 'node';
   /* group_basic_information|node|media_gallery|form */ $field_group->bundle = 'media_gallery';
   /* group_basic_information|node|media_gallery|form */ $field_group->mode = 'form';
   /* group_basic_information|node|media_gallery|form */ $field_group->parent_name = '';
   /* group_basic_information|node|media_gallery|form */ $field_group->data = array(
   /* group_basic_information|node|media_gallery|form */   'label' => 'Basic Information',
   /* group_basic_information|node|media_gallery|form */   'weight' => '0',
   /* group_basic_information|node|media_gallery|form */   'children' => array(
   /* group_basic_information|node|media_gallery|form */     0 => 'media_gallery_description',
   /* group_basic_information|node|media_gallery|form */     1 => 'field_folder_layout',
   /* group_basic_information|node|media_gallery|form */     2 => 'language',
   /* group_basic_information|node|media_gallery|form */     3 => 'title',
   /* group_basic_information|node|media_gallery|form */   ),
   /* group_basic_information|node|media_gallery|form */   'format_type' => 'fieldset',
   /* group_basic_information|node|media_gallery|form */   'format_settings' => array(
   /* group_basic_information|node|media_gallery|form */     'formatter' => 'collapsible',
   /* group_basic_information|node|media_gallery|form */     'instance_settings' => array(
   /* group_basic_information|node|media_gallery|form */       'description' => '',
   /* group_basic_information|node|media_gallery|form */       'classes' => 'group-basic-information field-group-fieldset',
   /* group_basic_information|node|media_gallery|form */       'required_fields' => 1,
   /* group_basic_information|node|media_gallery|form */     ),
   /* group_basic_information|node|media_gallery|form */   ),
   /* group_basic_information|node|media_gallery|form */ );
  $field_groups['group_basic_information|node|media_gallery|form'] = $field_group;

   /* group_country_section|node|media_gallery|form */ $field_group = new stdClass();
   /* group_country_section|node|media_gallery|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_country_section|node|media_gallery|form */ $field_group->api_version = 1;
   /* group_country_section|node|media_gallery|form */ $field_group->identifier = 'group_country_section|node|media_gallery|form';
   /* group_country_section|node|media_gallery|form */ $field_group->group_name = 'group_country_section';
   /* group_country_section|node|media_gallery|form */ $field_group->entity_type = 'node';
   /* group_country_section|node|media_gallery|form */ $field_group->bundle = 'media_gallery';
   /* group_country_section|node|media_gallery|form */ $field_group->mode = 'form';
   /* group_country_section|node|media_gallery|form */ $field_group->parent_name = '';
   /* group_country_section|node|media_gallery|form */ $field_group->data = array(
   /* group_country_section|node|media_gallery|form */   'label' => 'Countries',
   /* group_country_section|node|media_gallery|form */   'weight' => '3',
   /* group_country_section|node|media_gallery|form */   'children' => array(
   /* group_country_section|node|media_gallery|form */     0 => 'field_country',
   /* group_country_section|node|media_gallery|form */   ),
   /* group_country_section|node|media_gallery|form */   'format_type' => 'fieldset',
   /* group_country_section|node|media_gallery|form */   'format_settings' => array(
   /* group_country_section|node|media_gallery|form */     'label' => 'Countries',
   /* group_country_section|node|media_gallery|form */     'instance_settings' => array(
   /* group_country_section|node|media_gallery|form */       'required_fields' => 0,
   /* group_country_section|node|media_gallery|form */       'classes' => 'group-country-section field-group-fieldset',
   /* group_country_section|node|media_gallery|form */       'description' => '',
   /* group_country_section|node|media_gallery|form */     ),
   /* group_country_section|node|media_gallery|form */     'formatter' => 'collapsed',
   /* group_country_section|node|media_gallery|form */   ),
   /* group_country_section|node|media_gallery|form */ );
  $field_groups['group_country_section|node|media_gallery|form'] = $field_group;

   /* group_privacy|node|media_gallery|form */ $field_group = new stdClass();
   /* group_privacy|node|media_gallery|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy|node|media_gallery|form */ $field_group->api_version = 1;
   /* group_privacy|node|media_gallery|form */ $field_group->identifier = 'group_privacy|node|media_gallery|form';
   /* group_privacy|node|media_gallery|form */ $field_group->group_name = 'group_privacy';
   /* group_privacy|node|media_gallery|form */ $field_group->entity_type = 'node';
   /* group_privacy|node|media_gallery|form */ $field_group->bundle = 'media_gallery';
   /* group_privacy|node|media_gallery|form */ $field_group->mode = 'form';
   /* group_privacy|node|media_gallery|form */ $field_group->parent_name = '';
   /* group_privacy|node|media_gallery|form */ $field_group->data = array(
   /* group_privacy|node|media_gallery|form */   'label' => 'Privacy Settings',
   /* group_privacy|node|media_gallery|form */   'weight' => '5',
   /* group_privacy|node|media_gallery|form */   'children' => array(
   /* group_privacy|node|media_gallery|form */     0 => 'field_gn2_simple_access',
   /* group_privacy|node|media_gallery|form */     1 => 'group_content_access',
   /* group_privacy|node|media_gallery|form */     2 => 'og_group_ref',
   /* group_privacy|node|media_gallery|form */   ),
   /* group_privacy|node|media_gallery|form */   'format_type' => 'fieldset',
   /* group_privacy|node|media_gallery|form */   'format_settings' => array(
   /* group_privacy|node|media_gallery|form */     'label' => 'Privacy Settings',
   /* group_privacy|node|media_gallery|form */     'instance_settings' => array(
   /* group_privacy|node|media_gallery|form */       'required_fields' => 1,
   /* group_privacy|node|media_gallery|form */       'classes' => 'group-privacy field-group-fieldset',
   /* group_privacy|node|media_gallery|form */       'description' => '',
   /* group_privacy|node|media_gallery|form */     ),
   /* group_privacy|node|media_gallery|form */     'formatter' => 'collapsed',
   /* group_privacy|node|media_gallery|form */   ),
   /* group_privacy|node|media_gallery|form */ );
  $field_groups['group_privacy|node|media_gallery|form'] = $field_group;

   /* group_regions|node|media_gallery|form */ $field_group = new stdClass();
   /* group_regions|node|media_gallery|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|media_gallery|form */ $field_group->api_version = 1;
   /* group_regions|node|media_gallery|form */ $field_group->identifier = 'group_regions|node|media_gallery|form';
   /* group_regions|node|media_gallery|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|media_gallery|form */ $field_group->entity_type = 'node';
   /* group_regions|node|media_gallery|form */ $field_group->bundle = 'media_gallery';
   /* group_regions|node|media_gallery|form */ $field_group->mode = 'form';
   /* group_regions|node|media_gallery|form */ $field_group->parent_name = '';
   /* group_regions|node|media_gallery|form */ $field_group->data = array(
   /* group_regions|node|media_gallery|form */   'label' => 'Regions',
   /* group_regions|node|media_gallery|form */   'weight' => '4',
   /* group_regions|node|media_gallery|form */   'children' => array(
   /* group_regions|node|media_gallery|form */     0 => 'field_region',
   /* group_regions|node|media_gallery|form */   ),
   /* group_regions|node|media_gallery|form */   'format_type' => 'fieldset',
   /* group_regions|node|media_gallery|form */   'format_settings' => array(
   /* group_regions|node|media_gallery|form */     'label' => 'Regions',
   /* group_regions|node|media_gallery|form */     'instance_settings' => array(
   /* group_regions|node|media_gallery|form */       'required_fields' => 0,
   /* group_regions|node|media_gallery|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|media_gallery|form */       'description' => '',
   /* group_regions|node|media_gallery|form */     ),
   /* group_regions|node|media_gallery|form */     'formatter' => 'collapsed',
   /* group_regions|node|media_gallery|form */   ),
   /* group_regions|node|media_gallery|form */ );
  $field_groups['group_regions|node|media_gallery|form'] = $field_group;

   /* group_title_type_wrap|entityform|session|full */ $field_group = new stdClass();
   /* group_title_type_wrap|entityform|session|full */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_title_type_wrap|entityform|session|full */ $field_group->api_version = 1;
   /* group_title_type_wrap|entityform|session|full */ $field_group->identifier = 'group_title_type_wrap|entityform|session|full';
   /* group_title_type_wrap|entityform|session|full */ $field_group->group_name = 'group_title_type_wrap';
   /* group_title_type_wrap|entityform|session|full */ $field_group->entity_type = 'entityform';
   /* group_title_type_wrap|entityform|session|full */ $field_group->bundle = 'session';
   /* group_title_type_wrap|entityform|session|full */ $field_group->mode = 'full';
   /* group_title_type_wrap|entityform|session|full */ $field_group->parent_name = '';
   /* group_title_type_wrap|entityform|session|full */ $field_group->data = array(
   /* group_title_type_wrap|entityform|session|full */   'label' => 'Title Type Wrap',
   /* group_title_type_wrap|entityform|session|full */   'weight' => '0',
   /* group_title_type_wrap|entityform|session|full */   'children' => array(
   /* group_title_type_wrap|entityform|session|full */     0 => 'field_title',
   /* group_title_type_wrap|entityform|session|full */     1 => 'field_type',
   /* group_title_type_wrap|entityform|session|full */   ),
   /* group_title_type_wrap|entityform|session|full */   'format_type' => 'fieldset',
   /* group_title_type_wrap|entityform|session|full */   'format_settings' => array(
   /* group_title_type_wrap|entityform|session|full */     'label' => 'Title Type Wrap',
   /* group_title_type_wrap|entityform|session|full */     'instance_settings' => array(
   /* group_title_type_wrap|entityform|session|full */       'classes' => 'group-title-type-wrap field-group-fieldset',
   /* group_title_type_wrap|entityform|session|full */       'description' => '',
   /* group_title_type_wrap|entityform|session|full */     ),
   /* group_title_type_wrap|entityform|session|full */     'formatter' => 'open',
   /* group_title_type_wrap|entityform|session|full */   ),
   /* group_title_type_wrap|entityform|session|full */ );
  $field_groups['group_title_type_wrap|entityform|session|full'] = $field_group;

   /* group_topics|node|media_gallery|form */ $field_group = new stdClass();
   /* group_topics|node|media_gallery|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|media_gallery|form */ $field_group->api_version = 1;
   /* group_topics|node|media_gallery|form */ $field_group->identifier = 'group_topics|node|media_gallery|form';
   /* group_topics|node|media_gallery|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|media_gallery|form */ $field_group->entity_type = 'node';
   /* group_topics|node|media_gallery|form */ $field_group->bundle = 'media_gallery';
   /* group_topics|node|media_gallery|form */ $field_group->mode = 'form';
   /* group_topics|node|media_gallery|form */ $field_group->parent_name = '';
   /* group_topics|node|media_gallery|form */ $field_group->data = array(
   /* group_topics|node|media_gallery|form */   'label' => 'Topics',
   /* group_topics|node|media_gallery|form */   'weight' => '2',
   /* group_topics|node|media_gallery|form */   'children' => array(
   /* group_topics|node|media_gallery|form */     0 => 'field_topic',
   /* group_topics|node|media_gallery|form */   ),
   /* group_topics|node|media_gallery|form */   'format_type' => 'fieldset',
   /* group_topics|node|media_gallery|form */   'format_settings' => array(
   /* group_topics|node|media_gallery|form */     'label' => 'Topics',
   /* group_topics|node|media_gallery|form */     'instance_settings' => array(
   /* group_topics|node|media_gallery|form */       'required_fields' => 0,
   /* group_topics|node|media_gallery|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|media_gallery|form */       'description' => '',
   /* group_topics|node|media_gallery|form */     ),
   /* group_topics|node|media_gallery|form */     'formatter' => 'collapsed',
   /* group_topics|node|media_gallery|form */   ),
   /* group_topics|node|media_gallery|form */ );
  $field_groups['group_topics|node|media_gallery|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a Session');
  t('Basic Information');
  t('Countries');
  t('Privacy Settings');
  t('Regions');
  t('Title Type Wrap');
  t('Topics');

  return $field_groups;
}
