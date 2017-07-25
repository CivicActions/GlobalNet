<?php
/**
 * @file
 * gn2_content_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_content_event_views_default_views() {
  $export = array();

  /* events */ $view = new view();
  /* events */ $view->name = 'events';
  /* events */ $view->description = 'Views and displays pertaining to "event" node type';
  /* events */ $view->tag = 'default';
  /* events */ $view->base_table = 'node';
  /* events */ $view->human_name = 'Events';
  /* events */ $view->core = 7;
  /* events */ $view->api_version = '3.0';
  /* events */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* events */ /* Display: Master */
  /* events */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* events */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* events */  /* Master */ $handler->display->display_options['use_more_text'] = 'See all events »';
  /* events */  /* Master */ $handler->display->display_options['link_display'] = 'upcoming_events_page';
  /* events */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* events */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* events */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* events */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* events */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* events */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* events */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* events */  /* Master */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* events */  /* Master */ /* Relationship: OG membership: Group Node from OG membership */
  /* events */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* events */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* events */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* events */  /* Master */ /* Field: Content: Body */
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['label'] = '';
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* events */  /* Master */   'field_formatter_class' => '',
  /* events */  /* Master */ );
  /* events */  /* Master */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* events */  /* Master */ /* Field: Content: Title */
  /* events */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Master */ /* Contextual filter: Content: Nid */
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* events */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Master */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Master */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* events */  /* Master */   1 => 'AND',
  /* events */  /* Master */   2 => 'AND',
  /* events */  /* Master */ );
  /* events */  /* Master */ /* Filter criterion: Content: Type */
  /* events */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Master */   'event' => 'event',
  /* events */  /* Master */ );
  /* events */  /* Master */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Master */ /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* events */  /* Master */ /* Filter criterion: Content: Type */
  /* events */  /* Master */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* events */  /* Master */ $handler->display->display_options['filters']['type_1']['table'] = 'node';
  /* events */  /* Master */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* events */  /* Master */ $handler->display->display_options['filters']['type_1']['value'] = array(
  /* events */  /* Master */   'event' => 'event',
  /* events */  /* Master */ );
  /* events */  /* Master */ $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* events */  /* Master */ /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* events */  /* Master */ $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';

  /* events */ /* Display: Event node title */
  /* events */  /* Event node title */ $handler = $view->new_display('panel_pane', 'Event node title', 'panel_pane_1');
  /* events */  /* Event node title */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Event node title */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* events */  /* Event node title */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* events */  /* Event node title */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Event node title */ /* Field: Content: Event Type */
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['label'] = '';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '[field_event_type]: ';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_event_type']['settings'] = array(
  /* events */  /* Event node title */   'field_formatter_class' => '',
  /* events */  /* Event node title */ );
  /* events */  /* Event node title */ /* Field: Content: Title */
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['label'] = '';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* events */  /* Event node title */ /* Field: Host Group */
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['table'] = 'node';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['ui_name'] = 'Host Group';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['label'] = '';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* events */  /* Event node title */ /* Field: Event type + title */
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['ui_name'] = 'Event type + title';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h1>[field_event_type]: [title]</h1>
<h5>Hosted by [title_1]</h5>';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['element_type'] = 'h1';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* events */  /* Event node title */ /* Field: Content: Main Image */
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['alter']['alter_text'] = TRUE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['alter']['text'] = '<div class="title-image-block">
<div class="title-image-block--image">[field_main_image_1]</div>
<div class="title-image-block--title"><div class="inner">[nothing]</div></div>
</div>';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['empty'] = '<div class="title-no-image-block">
<div class="title-no-image-block--title"><h1>[nothing]</h1></div>
</div>';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'fid';
  /* events */  /* Event node title */ $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
  /* events */  /* Event node title */   'image_style' => 'event_main_image',
  /* events */  /* Event node title */   'image_link' => '',
  /* events */  /* Event node title */   'field_formatter_class' => '',
  /* events */  /* Event node title */ );
  /* events */  /* Event node title */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Event node title */ /* Contextual filter: Content: Nid */
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Event node title */ $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* events */  /* Event node title */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Event node title */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Event node title */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Event node title */ /* Filter criterion: Content: Type */
  /* events */  /* Event node title */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Event node title */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Event node title */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Event node title */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Event node title */   'event' => 'event',
  /* events */  /* Event node title */ );
  /* events */  /* Event node title */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Event node title */ $handler->display->display_options['argument_input'] = array(
  /* events */  /* Event node title */   'nid' => array(
  /* events */  /* Event node title */     'type' => 'none',
  /* events */  /* Event node title */     'context' => 'entity:node.nid',
  /* events */  /* Event node title */     'context_optional' => 0,
  /* events */  /* Event node title */     'panel' => '0',
  /* events */  /* Event node title */     'fixed' => '',
  /* events */  /* Event node title */     'label' => 'Content: Nid',
  /* events */  /* Event node title */   ),
  /* events */  /* Event node title */ );

  /* events */ /* Display: Event location */
  /* events */  /* Event location */ $handler = $view->new_display('panel_pane', 'Event location', 'panel_pane_3');
  /* events */  /* Event location */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Event location */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* events */  /* Event location */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* events */  /* Event location */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['style_plugin'] = 'default';
  /* events */  /* Event location */ $handler->display->display_options['style_options']['row_class'] = 'event-location';
  /* events */  /* Event location */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['row_plugin'] = 'fields';
  /* events */  /* Event location */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Event location */ /* Field: Content: Location / Venue Name */
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['id'] = 'field_location_venue_name';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['table'] = 'field_data_field_location_venue_name';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['field'] = 'field_location_venue_name';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['label'] = '';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['element_type'] = 'div';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['element_class'] = 'location-name';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['element_label_colon'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['element_default_classes'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_location_venue_name']['settings'] = array(
  /* events */  /* Event location */   'field_formatter_class' => '',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ /* Field: Content: PIN */
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['id'] = 'field_event_telephone_pin';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['table'] = 'field_data_field_event_telephone_pin';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['field'] = 'field_event_telephone_pin';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['label'] = '';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['exclude'] = TRUE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['alter']['alter_text'] = TRUE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['alter']['text'] = '(PIN: [field_event_telephone_pin])';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['element_label_colon'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['element_default_classes'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_pin']['settings'] = array(
  /* events */  /* Event location */   'field_formatter_class' => '',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ /* Field: Content: Telephone number */
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['id'] = 'field_event_telephone_number';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['table'] = 'field_data_field_event_telephone_number';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['field'] = 'field_event_telephone_number';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['label'] = '';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['alter']['alter_text'] = TRUE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['alter']['text'] = 'Phone: [field_event_telephone_number] [field_event_telephone_pin]';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['element_type'] = 'div';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['element_label_colon'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['element_default_classes'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['hide_empty'] = TRUE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_telephone_number']['settings'] = array(
  /* events */  /* Event location */   'field_formatter_class' => '',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ /* Field: Content: Web Conference Details */
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['id'] = 'field_web_conference_detail';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['table'] = 'field_data_field_web_conference_detail';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['field'] = 'field_web_conference_detail';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['label'] = '';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['element_type'] = 'div';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['element_label_colon'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['element_wrapper_type'] = '0';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['element_default_classes'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['settings'] = array(
  /* events */  /* Event location */   'field_formatter_class' => '',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_web_conference_detail']['field_api_classes'] = TRUE;
  /* events */  /* Event location */ /* Field: Content: Address */
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['id'] = 'field_event_address';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['table'] = 'field_data_field_event_address';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['field'] = 'field_event_address';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['label'] = '';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['element_type'] = 'div';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['element_label_colon'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['element_default_classes'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['click_sort_column'] = 'country';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_event_address']['settings'] = array(
  /* events */  /* Event location */   'use_widget_handlers' => 0,
  /* events */  /* Event location */   'format_handlers' => array(
  /* events */  /* Event location */     'address' => 'address',
  /* events */  /* Event location */   ),
  /* events */  /* Event location */   'field_formatter_class' => '',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ /* Field: Content: Other Location Details */
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['id'] = 'field_other_location_details';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['table'] = 'field_data_field_other_location_details';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['field'] = 'field_other_location_details';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['label'] = '';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['element_type'] = 'div';
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['element_label_colon'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['element_default_classes'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['fields']['field_other_location_details']['settings'] = array(
  /* events */  /* Event location */   'field_formatter_class' => '',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Event location */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Event location */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Event location */ /* Filter criterion: Content: Type */
  /* events */  /* Event location */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Event location */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Event location */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Event location */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Event location */   'event' => 'event',
  /* events */  /* Event location */ );
  /* events */  /* Event location */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Event location */ $handler->display->display_options['argument_input'] = array(
  /* events */  /* Event location */   'nid' => array(
  /* events */  /* Event location */     'type' => 'context',
  /* events */  /* Event location */     'context' => 'entity:node.nid',
  /* events */  /* Event location */     'context_optional' => 0,
  /* events */  /* Event location */     'panel' => '0',
  /* events */  /* Event location */     'fixed' => '',
  /* events */  /* Event location */     'label' => 'Content: Nid',
  /* events */  /* Event location */   ),
  /* events */  /* Event location */ );

  /* events */ /* Display: Event date and time */
  /* events */  /* Event date and time */ $handler = $view->new_display('panel_pane', 'Event date and time', 'panel_pane_2');
  /* events */  /* Event date and time */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Event date and time */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* events */  /* Event date and time */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* events */  /* Event date and time */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Event date and time */ /* Field: Date and time */
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Date and time';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['label'] = '';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['element_type'] = '0';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* events */  /* Event date and time */   'format_type' => 'date_format_military_with_time',
  /* events */  /* Event date and time */   'fromto' => 'both',
  /* events */  /* Event date and time */   'multiple_number' => '',
  /* events */  /* Event date and time */   'multiple_from' => '',
  /* events */  /* Event date and time */   'multiple_to' => '',
  /* events */  /* Event date and time */   'show_repeat_rule' => 'show',
  /* events */  /* Event date and time */   'field_formatter_class' => '',
  /* events */  /* Event date and time */ );
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* events */  /* Event date and time */ /* Field: Time zone indicator */
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time zone indicator';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '(All times [field_event_date_1])';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
  /* events */  /* Event date and time */   'format_type' => 'time_zone_only',
  /* events */  /* Event date and time */   'fromto' => 'both',
  /* events */  /* Event date and time */   'multiple_number' => '1',
  /* events */  /* Event date and time */   'multiple_from' => '',
  /* events */  /* Event date and time */   'multiple_to' => '',
  /* events */  /* Event date and time */   'show_repeat_rule' => 'show',
  /* events */  /* Event date and time */   'field_formatter_class' => '',
  /* events */  /* Event date and time */ );
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* events */  /* Event date and time */ /* Field: Content: Date description */
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['id'] = 'field_event_date_description';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['table'] = 'field_data_field_event_date_description';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['field'] = 'field_event_date_description';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['label'] = '';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['element_type'] = 'div';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['element_label_colon'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['element_default_classes'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['empty'] = '[field_event_date]
[field_event_date_1] ';
  /* events */  /* Event date and time */ $handler->display->display_options['fields']['field_event_date_description']['settings'] = array(
  /* events */  /* Event date and time */   'field_formatter_class' => '',
  /* events */  /* Event date and time */ );
  /* events */  /* Event date and time */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Event date and time */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Event date and time */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Event date and time */ /* Filter criterion: Content: Type */
  /* events */  /* Event date and time */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Event date and time */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Event date and time */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Event date and time */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Event date and time */   'event' => 'event',
  /* events */  /* Event date and time */ );
  /* events */  /* Event date and time */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Event date and time */ $handler->display->display_options['argument_input'] = array(
  /* events */  /* Event date and time */   'nid' => array(
  /* events */  /* Event date and time */     'type' => 'context',
  /* events */  /* Event date and time */     'context' => 'entity:node.nid',
  /* events */  /* Event date and time */     'context_optional' => 0,
  /* events */  /* Event date and time */     'panel' => '0',
  /* events */  /* Event date and time */     'fixed' => '',
  /* events */  /* Event date and time */     'label' => 'Content: Nid',
  /* events */  /* Event date and time */   ),
  /* events */  /* Event date and time */ );

  /* events */ /* Display: Event Contacts */
  /* events */  /* Event Contacts */ $handler = $view->new_display('panel_pane', 'Event Contacts', 'panel_pane_4');
  /* events */  /* Event Contacts */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* events */  /* Event Contacts */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* events */  /* Event Contacts */ $handler->display->display_options['query']['type'] = 'views_query';
  /* events */  /* Event Contacts */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* events */  /* Event Contacts */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Event Contacts */ /* Field: Content: Event Contact Person */
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['id'] = 'field_event_contact_person';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['table'] = 'field_data_field_event_contact_person';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['field'] = 'field_event_contact_person';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['label'] = '';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['element_type'] = '0';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['element_label_colon'] = FALSE;
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['element_wrapper_type'] = '0';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['element_default_classes'] = FALSE;
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['type'] = 'entityreference_entity_view';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['settings'] = array(
  /* events */  /* Event Contacts */   'view_mode' => 'full_name_phone',
  /* events */  /* Event Contacts */   'links' => 0,
  /* events */  /* Event Contacts */   'field_formatter_class' => '',
  /* events */  /* Event Contacts */ );
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['delta_offset'] = '0';
  /* events */  /* Event Contacts */ $handler->display->display_options['fields']['field_event_contact_person']['field_api_classes'] = TRUE;
  /* events */  /* Event Contacts */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* events */  /* Event Contacts */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Event Contacts */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Event Contacts */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Event Contacts */ /* Filter criterion: Content: Type */
  /* events */  /* Event Contacts */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Event Contacts */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Event Contacts */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Event Contacts */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Event Contacts */   'event' => 'event',
  /* events */  /* Event Contacts */ );
  /* events */  /* Event Contacts */ $handler->display->display_options['filters']['type']['group'] = 1;

  /* events */ /* Display: Additional Contact Information */
  /* events */  /* Additional Contact Information */ $handler = $view->new_display('panel_pane', 'Additional Contact Information', 'panel_pane_5');
  /* events */  /* Additional Contact Information */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Additional Contact Information */ /* Field: Content: Additional Contact Information */
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['id'] = 'field_addl_contact_info';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['table'] = 'field_data_field_addl_contact_info';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['field'] = 'field_addl_contact_info';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['label'] = '';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['element_label_colon'] = FALSE;
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['element_default_classes'] = FALSE;
  /* events */  /* Additional Contact Information */ $handler->display->display_options['fields']['field_addl_contact_info']['settings'] = array(
  /* events */  /* Additional Contact Information */   'field_formatter_class' => '',
  /* events */  /* Additional Contact Information */ );
  /* events */  /* Additional Contact Information */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Additional Contact Information */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Additional Contact Information */ /* Filter criterion: Content: Type */
  /* events */  /* Additional Contact Information */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Additional Contact Information */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Additional Contact Information */   'event' => 'event',
  /* events */  /* Additional Contact Information */ );
  /* events */  /* Additional Contact Information */ $handler->display->display_options['filters']['type']['group'] = 1;

  /* events */ /* Display: Upcoming events for sidebar */
  /* events */  /* Upcoming events for sidebar */ $handler = $view->new_display('panel_pane', 'Upcoming events for sidebar', 'panel_pane_7');
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['title'] = 'Upcoming Events';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['css_class'] = 'pane-content';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['use_more'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['use_more_always'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['use_more_text'] = 'See all events »';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['link_url'] = '%1/upcoming-events';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['query']['type'] = 'views_query';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['style_plugin'] = 'default';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['style_options']['row_class'] = 'sidebar-node-list--item';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['row_plugin'] = 'fields';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Footer: Global: Text area */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['footer']['area']['id'] = 'area';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['footer']['area']['table'] = 'views';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['footer']['area']['field'] = 'area';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['footer']['area']['content'] = '<a href="[path]/upcoming-events">See all events »</a>';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Relationship: OG membership: Group Node from OG membership */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Field: Content: Org Short Title */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['id'] = 'field_org_short_title';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['table'] = 'field_data_field_org_short_title';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['field'] = 'field_org_short_title';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['relationship'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['label'] = '';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['exclude'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['element_default_classes'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_org_short_title']['settings'] = array(
  /* events */  /* Upcoming events for sidebar */   'field_formatter_class' => '',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ /* Field: Content: Title */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['label'] = '';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['element_type'] = 'div';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['element_class'] = 'sidebar-node-list--item--title';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Field: Content: Date And Time */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['label'] = '';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['element_class'] = 'sidebar-node-list--item--text';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* events */  /* Upcoming events for sidebar */   'format_type' => 'military_with_time',
  /* events */  /* Upcoming events for sidebar */   'fromto' => 'value',
  /* events */  /* Upcoming events for sidebar */   'multiple_number' => '',
  /* events */  /* Upcoming events for sidebar */   'multiple_from' => '',
  /* events */  /* Upcoming events for sidebar */   'multiple_to' => '',
  /* events */  /* Upcoming events for sidebar */   'show_repeat_rule' => 'hide',
  /* events */  /* Upcoming events for sidebar */   'field_formatter_class' => '',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* events */  /* Upcoming events for sidebar */ /* Field: Content: Path */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['id'] = 'path';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['table'] = 'node';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['field'] = 'path';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['relationship'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['label'] = '';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Contextual filter: OG membership: Group ID */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* events */  /* Upcoming events for sidebar */   1 => 'AND',
  /* events */  /* Upcoming events for sidebar */   2 => 'AND',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Upcoming events for sidebar */ /* Filter criterion: Content: Type */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Upcoming events for sidebar */   'event' => 'event',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Upcoming events for sidebar */ /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* events */  /* Upcoming events for sidebar */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value']['id'] = 'field_event_location_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value']['table'] = 'field_data_field_event_location';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value']['field'] = 'field_event_location_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value']['operator'] = 'not';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value']['value'] = array(
  /* events */  /* Upcoming events for sidebar */   'adobe_open' => 'adobe_open',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value']['group'] = 1;
  /* events */  /* Upcoming events for sidebar */ /* Filter criterion: Content: Type */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type_1']['table'] = 'node';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type_1']['value'] = array(
  /* events */  /* Upcoming events for sidebar */   'event' => 'event',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* events */  /* Upcoming events for sidebar */ /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';
  /* events */  /* Upcoming events for sidebar */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value_1']['id'] = 'field_event_location_value_1';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value_1']['table'] = 'field_data_field_event_location';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value_1']['field'] = 'field_event_location_value';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value_1']['operator'] = 'not';
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value_1']['value'] = array(
  /* events */  /* Upcoming events for sidebar */   'adobe_open' => 'adobe_open',
  /* events */  /* Upcoming events for sidebar */ );
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['filters']['field_event_location_value_1']['group'] = 2;
  /* events */  /* Upcoming events for sidebar */ $handler->display->display_options['argument_input'] = array(
  /* events */  /* Upcoming events for sidebar */   'gid' => array(
  /* events */  /* Upcoming events for sidebar */     'type' => 'none',
  /* events */  /* Upcoming events for sidebar */     'context' => 'entity:comment.author',
  /* events */  /* Upcoming events for sidebar */     'context_optional' => 0,
  /* events */  /* Upcoming events for sidebar */     'panel' => '1',
  /* events */  /* Upcoming events for sidebar */     'fixed' => '12',
  /* events */  /* Upcoming events for sidebar */     'label' => 'OG membership: Group ID',
  /* events */  /* Upcoming events for sidebar */   ),
  /* events */  /* Upcoming events for sidebar */ );

  /* events */ /* Display: Upcoming Events Page */
  /* events */  /* Upcoming Events Page */ $handler = $view->new_display('page', 'Upcoming Events Page', 'upcoming_events_page');
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['title'] = 'Upcoming Events';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['css_class'] = 'upcoming-events--page';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['use_ajax'] = TRUE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['style_plugin'] = 'default';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['row_plugin'] = 'node';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* events */  /* Upcoming Events Page */ /* Footer: Global: View area */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['footer']['view']['id'] = 'view';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['footer']['view']['table'] = 'views';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['footer']['view']['field'] = 'view';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['footer']['view']['view_to_insert'] = 'events:block_events_calendar';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* events */  /* Upcoming Events Page */ /* No results behavior: Global: Text area */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['label'] = 'No events found';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['content'] = 'There are no upcoming events.';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* events */  /* Upcoming Events Page */ /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value']['expose']['label'] = 'Start Date';
  /* events */  /* Upcoming Events Page */ /* Sort criterion: Content: Date And Time - end date (field_event_date:value2) */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['sorts']['field_event_date_value2']['expose']['label'] = 'End Date';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Upcoming Events Page */ /* Contextual filter: OG membership: Group ID */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* events */  /* Upcoming Events Page */   1 => 'AND',
  /* events */  /* Upcoming Events Page */   2 => 'AND',
  /* events */  /* Upcoming Events Page */ );
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Upcoming Events Page */ /* Filter criterion: Content: Type */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Upcoming Events Page */   'event' => 'event',
  /* events */  /* Upcoming Events Page */ );
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Upcoming Events Page */ /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* events */  /* Upcoming Events Page */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value']['id'] = 'field_event_location_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value']['table'] = 'field_data_field_event_location';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value']['field'] = 'field_event_location_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value']['operator'] = 'not';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value']['value'] = array(
  /* events */  /* Upcoming Events Page */   'adobe_open' => 'adobe_open',
  /* events */  /* Upcoming Events Page */ );
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value']['group'] = 1;
  /* events */  /* Upcoming Events Page */ /* Filter criterion: Content: Type */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type_1']['table'] = 'node';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type_1']['value'] = array(
  /* events */  /* Upcoming Events Page */   'event' => 'event',
  /* events */  /* Upcoming Events Page */ );
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* events */  /* Upcoming Events Page */ /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';
  /* events */  /* Upcoming Events Page */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value_1']['id'] = 'field_event_location_value_1';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value_1']['table'] = 'field_data_field_event_location';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value_1']['field'] = 'field_event_location_value';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value_1']['operator'] = 'not';
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value_1']['value'] = array(
  /* events */  /* Upcoming Events Page */   'adobe_open' => 'adobe_open',
  /* events */  /* Upcoming Events Page */ );
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['filters']['field_event_location_value_1']['group'] = 2;
  /* events */  /* Upcoming Events Page */ $handler->display->display_options['path'] = 'node/%/upcoming-events';

  /* events */ /* Display: Event teaser title */
  /* events */  /* Event teaser title */ $handler = $view->new_display('panel_pane', 'Event teaser title', 'panel_pane__event_teaser_title');
  /* events */  /* Event teaser title */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Event teaser title */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* events */  /* Event teaser title */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* events */  /* Event teaser title */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Event teaser title */ /* Field: Content: Event Type */
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['label'] = '';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '[field_event_type]: ';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['field_event_type']['settings'] = array(
  /* events */  /* Event teaser title */   'field_formatter_class' => '',
  /* events */  /* Event teaser title */ );
  /* events */  /* Event teaser title */ /* Field: Content: Title */
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['label'] = '';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['alter']['text'] = '[field_event_type]: [title]';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* events */  /* Event teaser title */ /* Field: Host Group */
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['table'] = 'node';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['ui_name'] = 'Host Group';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['label'] = '';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* events */  /* Event teaser title */ /* Field: Event type + title */
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['ui_name'] = 'Event type + title';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="teaser-title">[title]</h2>
<h5>Hosted by [title_1]</h5>';
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Event teaser title */ /* Contextual filter: Content: Nid */
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Event teaser title */ $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* events */  /* Event teaser title */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Event teaser title */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Event teaser title */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Event teaser title */ /* Filter criterion: Content: Type */
  /* events */  /* Event teaser title */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Event teaser title */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Event teaser title */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Event teaser title */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Event teaser title */   'event' => 'event',
  /* events */  /* Event teaser title */ );
  /* events */  /* Event teaser title */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Event teaser title */ $handler->display->display_options['argument_input'] = array(
  /* events */  /* Event teaser title */   'nid' => array(
  /* events */  /* Event teaser title */     'type' => 'context',
  /* events */  /* Event teaser title */     'context' => 'entity:node.nid',
  /* events */  /* Event teaser title */     'context_optional' => 0,
  /* events */  /* Event teaser title */     'panel' => '0',
  /* events */  /* Event teaser title */     'fixed' => '',
  /* events */  /* Event teaser title */     'label' => 'Content: Nid',
  /* events */  /* Event teaser title */   ),
  /* events */  /* Event teaser title */ );

  /* events */ /* Display: Events Calendar */
  /* events */  /* Events Calendar */ $handler = $view->new_display('block', 'Events Calendar', 'block_events_calendar');
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['use_ajax'] = TRUE;
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['pager']['type'] = 'date_views_pager';
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['style_plugin'] = 'calendar_style';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['name_size'] = '3';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['mini'] = '0';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['with_weekno'] = '0';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['multiday_theme'] = '1';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['theme_style'] = '1';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['max_items'] = '0';
  /* events */  /* Events Calendar */ $handler->display->display_options['style_options']['multiday_hidden'] = array(
  /* events */  /* Events Calendar */   'body' => 'body',
  /* events */  /* Events Calendar */ );
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* events */  /* Events Calendar */ $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  /* events */  /* Events Calendar */ $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
  /* events */  /* Events Calendar */   'alumni_group' => '#ffffff',
  /* events */  /* Events Calendar */   'announcement' => '#ffffff',
  /* events */  /* Events Calendar */   'coi' => '#ffffff',
  /* events */  /* Events Calendar */   'course' => '#ffffff',
  /* events */  /* Events Calendar */   'program' => '#ffffff',
  /* events */  /* Events Calendar */   'event' => '#ffffff',
  /* events */  /* Events Calendar */   'media_gallery' => '#ffffff',
  /* events */  /* Events Calendar */   'group' => '#ffffff',
  /* events */  /* Events Calendar */   'help' => '#ffffff',
  /* events */  /* Events Calendar */   'news' => '#ffffff',
  /* events */  /* Events Calendar */   'organization' => '#ffffff',
  /* events */  /* Events Calendar */   'page' => '#ffffff',
  /* events */  /* Events Calendar */   'panel' => '#ffffff',
  /* events */  /* Events Calendar */   'poll' => '#ffffff',
  /* events */  /* Events Calendar */   'post' => '#ffffff',
  /* events */  /* Events Calendar */   'publication' => '#ffffff',
  /* events */  /* Events Calendar */ );
  /* events */  /* Events Calendar */ $handler->display->display_options['row_options']['colors']['calendar_colors_group'] = array(
  /* events */  /* Events Calendar */   11 => '#ffffff',
  /* events */  /* Events Calendar */   12 => '#ffffff',
  /* events */  /* Events Calendar */   16 => '#ffffff',
  /* events */  /* Events Calendar */   17 => '#ffffff',
  /* events */  /* Events Calendar */   18 => '#ffffff',
  /* events */  /* Events Calendar */   20 => '#ffffff',
  /* events */  /* Events Calendar */   21 => '#ffffff',
  /* events */  /* Events Calendar */   22 => '#ffffff',
  /* events */  /* Events Calendar */   25 => '#ffffff',
  /* events */  /* Events Calendar */   27 => '#ffffff',
  /* events */  /* Events Calendar */   28 => '#ffffff',
  /* events */  /* Events Calendar */   29 => '#ffffff',
  /* events */  /* Events Calendar */   30 => '#ffffff',
  /* events */  /* Events Calendar */   31 => '#ffffff',
  /* events */  /* Events Calendar */   32 => '#ffffff',
  /* events */  /* Events Calendar */   33 => '#ffffff',
  /* events */  /* Events Calendar */   34 => '#ffffff',
  /* events */  /* Events Calendar */   35 => '#ffffff',
  /* events */  /* Events Calendar */   36 => '#ffffff',
  /* events */  /* Events Calendar */   37 => '#ffffff',
  /* events */  /* Events Calendar */   38 => '#ffffff',
  /* events */  /* Events Calendar */   39 => '#ffffff',
  /* events */  /* Events Calendar */   40 => '#ffffff',
  /* events */  /* Events Calendar */   41 => '#ffffff',
  /* events */  /* Events Calendar */   42 => '#ffffff',
  /* events */  /* Events Calendar */   43 => '#ffffff',
  /* events */  /* Events Calendar */   44 => '#ffffff',
  /* events */  /* Events Calendar */   45 => '#ffffff',
  /* events */  /* Events Calendar */   46 => '#ffffff',
  /* events */  /* Events Calendar */   47 => '#ffffff',
  /* events */  /* Events Calendar */   48 => '#ffffff',
  /* events */  /* Events Calendar */   49 => '#ffffff',
  /* events */  /* Events Calendar */   50 => '#ffffff',
  /* events */  /* Events Calendar */   51 => '#ffffff',
  /* events */  /* Events Calendar */   52 => '#ffffff',
  /* events */  /* Events Calendar */   53 => '#ffffff',
  /* events */  /* Events Calendar */   54 => '#ffffff',
  /* events */  /* Events Calendar */   55 => '#ffffff',
  /* events */  /* Events Calendar */   56 => '#ffffff',
  /* events */  /* Events Calendar */   57 => '#ffffff',
  /* events */  /* Events Calendar */   58 => '#ffffff',
  /* events */  /* Events Calendar */   59 => '#ffffff',
  /* events */  /* Events Calendar */   60 => '#ffffff',
  /* events */  /* Events Calendar */   61 => '#ffffff',
  /* events */  /* Events Calendar */   62 => '#ffffff',
  /* events */  /* Events Calendar */   63 => '#ffffff',
  /* events */  /* Events Calendar */   64 => '#ffffff',
  /* events */  /* Events Calendar */   65 => '#ffffff',
  /* events */  /* Events Calendar */   66 => '#ffffff',
  /* events */  /* Events Calendar */   67 => '#ffffff',
  /* events */  /* Events Calendar */   68 => '#ffffff',
  /* events */  /* Events Calendar */   69 => '#ffffff',
  /* events */  /* Events Calendar */   70 => '#ffffff',
  /* events */  /* Events Calendar */   71 => '#ffffff',
  /* events */  /* Events Calendar */   72 => '#ffffff',
  /* events */  /* Events Calendar */   73 => '#ffffff',
  /* events */  /* Events Calendar */   74 => '#ffffff',
  /* events */  /* Events Calendar */   75 => '#ffffff',
  /* events */  /* Events Calendar */   76 => '#ffffff',
  /* events */  /* Events Calendar */   77 => '#ffffff',
  /* events */  /* Events Calendar */   78 => '#ffffff',
  /* events */  /* Events Calendar */   79 => '#ffffff',
  /* events */  /* Events Calendar */   80 => '#ffffff',
  /* events */  /* Events Calendar */   81 => '#ffffff',
  /* events */  /* Events Calendar */   82 => '#ffffff',
  /* events */  /* Events Calendar */   83 => '#ffffff',
  /* events */  /* Events Calendar */   84 => '#ffffff',
  /* events */  /* Events Calendar */   85 => '#ffffff',
  /* events */  /* Events Calendar */   86 => '#ffffff',
  /* events */  /* Events Calendar */   87 => '#ffffff',
  /* events */  /* Events Calendar */   88 => '#ffffff',
  /* events */  /* Events Calendar */   89 => '#ffffff',
  /* events */  /* Events Calendar */   90 => '#ffffff',
  /* events */  /* Events Calendar */   91 => '#ffffff',
  /* events */  /* Events Calendar */   92 => '#ffffff',
  /* events */  /* Events Calendar */   93 => '#ffffff',
  /* events */  /* Events Calendar */   94 => '#ffffff',
  /* events */  /* Events Calendar */   95 => '#ffffff',
  /* events */  /* Events Calendar */   96 => '#ffffff',
  /* events */  /* Events Calendar */   97 => '#ffffff',
  /* events */  /* Events Calendar */   98 => '#ffffff',
  /* events */  /* Events Calendar */   99 => '#ffffff',
  /* events */  /* Events Calendar */   100 => '#ffffff',
  /* events */  /* Events Calendar */   101 => '#ffffff',
  /* events */  /* Events Calendar */   102 => '#ffffff',
  /* events */  /* Events Calendar */   103 => '#ffffff',
  /* events */  /* Events Calendar */   104 => '#ffffff',
  /* events */  /* Events Calendar */   105 => '#ffffff',
  /* events */  /* Events Calendar */   106 => '#ffffff',
  /* events */  /* Events Calendar */   107 => '#ffffff',
  /* events */  /* Events Calendar */   108 => '#ffffff',
  /* events */  /* Events Calendar */   109 => '#ffffff',
  /* events */  /* Events Calendar */   110 => '#ffffff',
  /* events */  /* Events Calendar */   111 => '#ffffff',
  /* events */  /* Events Calendar */   112 => '#ffffff',
  /* events */  /* Events Calendar */   113 => '#ffffff',
  /* events */  /* Events Calendar */   114 => '#ffffff',
  /* events */  /* Events Calendar */   115 => '#ffffff',
  /* events */  /* Events Calendar */   116 => '#ffffff',
  /* events */  /* Events Calendar */   117 => '#ffffff',
  /* events */  /* Events Calendar */   118 => '#ffffff',
  /* events */  /* Events Calendar */   119 => '#ffffff',
  /* events */  /* Events Calendar */   120 => '#ffffff',
  /* events */  /* Events Calendar */   121 => '#ffffff',
  /* events */  /* Events Calendar */   122 => '#ffffff',
  /* events */  /* Events Calendar */   123 => '#ffffff',
  /* events */  /* Events Calendar */   124 => '#ffffff',
  /* events */  /* Events Calendar */   125 => '#ffffff',
  /* events */  /* Events Calendar */   126 => '#ffffff',
  /* events */  /* Events Calendar */   127 => '#ffffff',
  /* events */  /* Events Calendar */   128 => '#ffffff',
  /* events */  /* Events Calendar */   129 => '#ffffff',
  /* events */  /* Events Calendar */   130 => '#ffffff',
  /* events */  /* Events Calendar */   131 => '#ffffff',
  /* events */  /* Events Calendar */   132 => '#ffffff',
  /* events */  /* Events Calendar */   133 => '#ffffff',
  /* events */  /* Events Calendar */   134 => '#ffffff',
  /* events */  /* Events Calendar */   135 => '#ffffff',
  /* events */  /* Events Calendar */   136 => '#ffffff',
  /* events */  /* Events Calendar */   137 => '#ffffff',
  /* events */  /* Events Calendar */   138 => '#ffffff',
  /* events */  /* Events Calendar */   139 => '#ffffff',
  /* events */  /* Events Calendar */   140 => '#ffffff',
  /* events */  /* Events Calendar */   141 => '#ffffff',
  /* events */  /* Events Calendar */   142 => '#ffffff',
  /* events */  /* Events Calendar */   143 => '#ffffff',
  /* events */  /* Events Calendar */   144 => '#ffffff',
  /* events */  /* Events Calendar */   145 => '#ffffff',
  /* events */  /* Events Calendar */   146 => '#ffffff',
  /* events */  /* Events Calendar */   147 => '#ffffff',
  /* events */  /* Events Calendar */   148 => '#ffffff',
  /* events */  /* Events Calendar */   149 => '#ffffff',
  /* events */  /* Events Calendar */   150 => '#ffffff',
  /* events */  /* Events Calendar */   151 => '#ffffff',
  /* events */  /* Events Calendar */   152 => '#ffffff',
  /* events */  /* Events Calendar */   153 => '#ffffff',
  /* events */  /* Events Calendar */   154 => '#ffffff',
  /* events */  /* Events Calendar */   155 => '#ffffff',
  /* events */  /* Events Calendar */   156 => '#ffffff',
  /* events */  /* Events Calendar */   547 => '#ffffff',
  /* events */  /* Events Calendar */   554 => '#ffffff',
  /* events */  /* Events Calendar */   559 => '#ffffff',
  /* events */  /* Events Calendar */   719 => '#ffffff',
  /* events */  /* Events Calendar */   720 => '#ffffff',
  /* events */  /* Events Calendar */   721 => '#ffffff',
  /* events */  /* Events Calendar */ );
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Events Calendar */ /* Field: Content: Title */
  /* events */  /* Events Calendar */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Events Calendar */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Events Calendar */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Events Calendar */ $handler->display->display_options['fields']['title']['label'] = '';
  /* events */  /* Events Calendar */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Events Calendar */ /* Contextual filter: OG membership: Group ID */
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Events Calendar */ /* Contextual filter: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  /* events */  /* Events Calendar */ $handler->display->display_options['arguments']['field_event_date_value']['add_delta'] = 'yes';
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Events Calendar */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Events Calendar */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Events Calendar */ /* Filter criterion: Content: Type */
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Events Calendar */   'event' => 'event',
  /* events */  /* Events Calendar */ );
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Events Calendar */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['field_event_location_value']['id'] = 'field_event_location_value';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['field_event_location_value']['table'] = 'field_data_field_event_location';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['field_event_location_value']['field'] = 'field_event_location_value';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['field_event_location_value']['operator'] = 'not';
  /* events */  /* Events Calendar */ $handler->display->display_options['filters']['field_event_location_value']['value'] = array(
  /* events */  /* Events Calendar */   'adobe_open' => 'adobe_open',
  /* events */  /* Events Calendar */ );

  /* events */ /* Display: Upcoming events teasers */
  /* events */  /* Upcoming events teasers */ $handler = $view->new_display('panel_pane', 'Upcoming events teasers', 'view_pane__upcoming_events_teasers');
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['title'] = 'Events';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['css_class'] = 'pane-content';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['use_more'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['use_more_always'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['use_more_text'] = 'See all events »';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['link_url'] = '%1/upcoming-events';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['query']['type'] = 'views_query';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['style_plugin'] = 'default';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['style_options']['row_class'] = 'sidebar-node-list--item';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['row_plugin'] = 'entity';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* events */  /* Upcoming events teasers */ /* Relationship: OG membership: Group Node from OG membership */
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Upcoming events teasers */ /* Field: Content: Org Short Title */
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['id'] = 'field_org_short_title';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['table'] = 'field_data_field_org_short_title';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['field'] = 'field_org_short_title';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['relationship'] = 'og_membership_related_node_group';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['label'] = '';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['exclude'] = TRUE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['element_default_classes'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_org_short_title']['settings'] = array(
  /* events */  /* Upcoming events teasers */   'field_formatter_class' => '',
  /* events */  /* Upcoming events teasers */ );
  /* events */  /* Upcoming events teasers */ /* Field: Content: Title */
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['label'] = '';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['element_type'] = 'div';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['element_class'] = 'sidebar-node-list--item--title';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* events */  /* Upcoming events teasers */ /* Field: Content: Date And Time */
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['label'] = '';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['element_class'] = 'sidebar-node-list--item--text';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* events */  /* Upcoming events teasers */   'format_type' => 'military_with_time',
  /* events */  /* Upcoming events teasers */   'fromto' => 'value',
  /* events */  /* Upcoming events teasers */   'multiple_number' => '',
  /* events */  /* Upcoming events teasers */   'multiple_from' => '',
  /* events */  /* Upcoming events teasers */   'multiple_to' => '',
  /* events */  /* Upcoming events teasers */   'show_repeat_rule' => 'hide',
  /* events */  /* Upcoming events teasers */   'field_formatter_class' => '',
  /* events */  /* Upcoming events teasers */ );
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* events */  /* Upcoming events teasers */ /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Upcoming events teasers */ /* Contextual filter: OG membership: Group ID */
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  /* events */  /* Upcoming events teasers */ $handler->display->display_options['argument_input'] = array(
  /* events */  /* Upcoming events teasers */   'gid' => array(
  /* events */  /* Upcoming events teasers */     'type' => 'none',
  /* events */  /* Upcoming events teasers */     'context' => 'entity:comment.author',
  /* events */  /* Upcoming events teasers */     'context_optional' => 0,
  /* events */  /* Upcoming events teasers */     'panel' => '1',
  /* events */  /* Upcoming events teasers */     'fixed' => '12',
  /* events */  /* Upcoming events teasers */     'label' => 'OG membership: Group ID',
  /* events */  /* Upcoming events teasers */   ),
  /* events */  /* Upcoming events teasers */ );

  /* events */ /* Display: Data export */
  /* events */  /* Data export */ $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  /* events */  /* Data export */ $handler->display->display_options['pager']['type'] = 'some';
  /* events */  /* Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* events */  /* Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* events */  /* Data export */ $handler->display->display_options['style_options']['filename'] = '%view-export-%timestamp-full.csv';
  /* events */  /* Data export */ $handler->display->display_options['style_options']['parent_sort'] = 0;
  /* events */  /* Data export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* events */  /* Data export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* events */  /* Data export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* events */  /* Data export */ $handler->display->display_options['style_options']['newline_token'] = '1';
  /* events */  /* Data export */ $handler->display->display_options['style_options']['header'] = 1;
  /* events */  /* Data export */ $handler->display->display_options['style_options']['keep_html'] = 0;
  /* events */  /* Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* events */  /* Data export */ /* Field: Content: Title */
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['table'] = 'node';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['label'] = 'Host';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* events */  /* Data export */ /* Field: Content: Title */
  /* events */  /* Data export */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* events */  /* Data export */ $handler->display->display_options['fields']['title']['label'] = 'Event Title';
  /* events */  /* Data export */ /* Field: Content: Date And Time */
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['label'] = '';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['element_type'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* events */  /* Data export */   'format_type' => 'date_format_military_with_time',
  /* events */  /* Data export */   'fromto' => 'both',
  /* events */  /* Data export */   'multiple_number' => '',
  /* events */  /* Data export */   'multiple_from' => '',
  /* events */  /* Data export */   'multiple_to' => '',
  /* events */  /* Data export */   'show_repeat_rule' => 'show',
  /* events */  /* Data export */   'field_formatter_class' => '',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* events */  /* Data export */ /* Field: Content: Date And Time */
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '(All times [field_event_date_1])';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['alter']['trim_whitespace'] = TRUE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['alter']['strip_tags'] = TRUE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
  /* events */  /* Data export */   'format_type' => 'time_zone_only',
  /* events */  /* Data export */   'fromto' => 'both',
  /* events */  /* Data export */   'multiple_number' => '',
  /* events */  /* Data export */   'multiple_from' => '',
  /* events */  /* Data export */   'multiple_to' => '',
  /* events */  /* Data export */   'show_repeat_rule' => 'show',
  /* events */  /* Data export */   'field_formatter_class' => '',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* events */  /* Data export */ /* Field: Content: Date description */
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['id'] = 'field_event_date_description';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['table'] = 'field_data_field_event_date_description';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['field'] = 'field_event_date_description';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['label'] = 'Date and Time';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['element_type'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['element_label_colon'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['element_wrapper_type'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['element_default_classes'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['empty'] = '[field_event_date] [field_event_date_1] ';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['settings'] = array(
  /* events */  /* Data export */   'field_formatter_class' => '',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_date_description']['field_api_classes'] = TRUE;
  /* events */  /* Data export */ /* Field: Content: Event Location */
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['label'] = 'Location';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['element_type'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['element_wrapper_type'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['fields']['field_event_location']['settings'] = array(
  /* events */  /* Data export */   'field_formatter_class' => '',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ /* Field: GN2 OG: Group Members */
  /* events */  /* Data export */ $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['id'] = 'gn2_og_handler_group_members_list';
  /* events */  /* Data export */ $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['table'] = 'node';
  /* events */  /* Data export */ $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['field'] = 'gn2_og_handler_group_members_list';
  /* events */  /* Data export */ $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['label'] = 'Participants';
  /* events */  /* Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* events */  /* Data export */ /* Contextual filter: OG membership: Group ID */
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* events */  /* Data export */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* events */  /* Data export */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* events */  /* Data export */ $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* events */  /* Data export */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* events */  /* Data export */   1 => 'AND',
  /* events */  /* Data export */   2 => 'AND',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* events */  /* Data export */ /* Filter criterion: Content: Type */
  /* events */  /* Data export */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* events */  /* Data export */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* events */  /* Data export */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* events */  /* Data export */ $handler->display->display_options['filters']['type']['value'] = array(
  /* events */  /* Data export */   'event' => 'event',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* events */  /* Data export */ /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* events */  /* Data export */ /* Filter criterion: Content: Type */
  /* events */  /* Data export */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* events */  /* Data export */ $handler->display->display_options['filters']['type_1']['table'] = 'node';
  /* events */  /* Data export */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* events */  /* Data export */ $handler->display->display_options['filters']['type_1']['value'] = array(
  /* events */  /* Data export */   'event' => 'event',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* events */  /* Data export */ /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';
  /* events */  /* Data export */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value']['id'] = 'field_event_location_value';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value']['table'] = 'field_data_field_event_location';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value']['field'] = 'field_event_location_value';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value']['operator'] = 'not';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value']['value'] = array(
  /* events */  /* Data export */   'adobe_open' => 'adobe_open',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value']['group'] = 1;
  /* events */  /* Data export */ /* Filter criterion: Content: Event Location (field_event_location) */
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value_1']['id'] = 'field_event_location_value_1';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value_1']['table'] = 'field_data_field_event_location';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value_1']['field'] = 'field_event_location_value';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value_1']['operator'] = 'not';
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value_1']['value'] = array(
  /* events */  /* Data export */   'adobe_open' => 'adobe_open',
  /* events */  /* Data export */ );
  /* events */  /* Data export */ $handler->display->display_options['filters']['field_event_location_value_1']['group'] = 2;
  /* events */  /* Data export */ $handler->display->display_options['path'] = 'node/%/upcoming-events/export';
  /* events */  /* Data export */ $handler->display->display_options['displays'] = array(
  /* events */  /* Data export */   'upcoming_events_page' => 'upcoming_events_page',
  /* events */  /* Data export */   'default' => 0,
  /* events */  /* Data export */   'panel_pane_1' => 0,
  /* events */  /* Data export */   'panel_pane_3' => 0,
  /* events */  /* Data export */   'panel_pane_2' => 0,
  /* events */  /* Data export */   'panel_pane_4' => 0,
  /* events */  /* Data export */   'panel_pane_5' => 0,
  /* events */  /* Data export */   'panel_pane_7' => 0,
  /* events */  /* Data export */   'panel_pane__event_teaser_title' => 0,
  /* events */  /* Data export */   'block_events_calendar' => 0,
  /* events */  /* Data export */   'view_pane__upcoming_events_teasers' => 0,
  /* events */  /* Data export */ );
  /* events */ $translatables['events'] = array(
  /* events */   t('Master'),
  /* events */   t('See all events »'),
  /* events */   t('Apply'),
  /* events */   t('Reset'),
  /* events */   t('Sort by'),
  /* events */   t('Asc'),
  /* events */   t('Desc'),
  /* events */   t('Items per page'),
  /* events */   t('- All -'),
  /* events */   t('Offset'),
  /* events */   t('« first'),
  /* events */   t('‹ previous'),
  /* events */   t('next ›'),
  /* events */   t('last »'),
  /* events */   t('Group node from OG membership'),
  /* events */   t('Title'),
  /* events */   t('All'),
  /* events */   t('Event node title'),
  /* events */   t('more'),
  /* events */   t('[field_event_type]: '),
  /* events */   t('<h1>[field_event_type]: [title]</h1>
<h5>Hosted by [title_1]</h5>'),
  /* events */   t('<div class="title-image-block">
<div class="title-image-block--image">[field_main_image_1]</div>
<div class="title-image-block--title"><div class="inner">[nothing]</div></div>
</div>'),
  /* events */   t('<div class="title-no-image-block">
<div class="title-no-image-block--title"><h1>[nothing]</h1></div>
</div>'),
  /* events */   t('View panes'),
  /* events */   t('Event location'),
  /* events */   t('(PIN: [field_event_telephone_pin])'),
  /* events */   t('Phone: [field_event_telephone_number] [field_event_telephone_pin]'),
  /* events */   t('Event date and time'),
  /* events */   t('(All times [field_event_date_1])'),
  /* events */   t('[field_event_date]
[field_event_date_1] '),
  /* events */   t('Event Contacts'),
  /* events */   t('Additional Contact Information'),
  /* events */   t('Upcoming events for sidebar'),
  /* events */   t('Upcoming Events'),
  /* events */   t('<a href="[path]/upcoming-events">See all events »</a>'),
  /* events */   t('Upcoming Events Page'),
  /* events */   t('No events found'),
  /* events */   t('There are no upcoming events.'),
  /* events */   t('Start Date'),
  /* events */   t('End Date'),
  /* events */   t('Event teaser title'),
  /* events */   t('[field_event_type]: [title]'),
  /* events */   t('<h2 class="teaser-title">[title]</h2>
<h5>Hosted by [title_1]</h5>'),
  /* events */   t('Events Calendar'),
  /* events */   t('Upcoming events teasers'),
  /* events */   t('Events'),
  /* events */   t('Data export'),
  /* events */   t('Host'),
  /* events */   t('Event Title'),
  /* events */   t('Date and Time'),
  /* events */   t('[field_event_date] [field_event_date_1] '),
  /* events */   t('Location'),
  /* events */   t('Participants'),
  /* events */ );
  $export['events'] = $view;

  return $export;
}
