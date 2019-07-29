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

  $view = new view();
  $view->name = 'events';
  $view->description = 'Views and displays pertaining to "event" node type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events »';
  $handler->display->display_options['link_display'] = 'upcoming_events_page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';

  /* Display: Event node title */
  $handler = $view->new_display('panel_pane', 'Event node title', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '[field_event_type]: ';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Host Group */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Host Group';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Event type + title */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Event type + title';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h1>[field_event_type]: [title]</h1>
<h5>Hosted by [title_1]</h5>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h1';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['alter']['text'] = '<div class="title-image-block">
<div class="title-image-block--image">[field_main_image_1]</div>
<div class="title-image-block--title"><div class="inner">[nothing]</div></div>
</div>';
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['empty'] = '<div class="title-no-image-block">
<div class="title-no-image-block--title"><h1>[nothing]</h1></div>
</div>';
  $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
    'image_style' => 'event_main_image',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Event location */
  $handler = $view->new_display('panel_pane', 'Event location', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event-location';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Location / Venue Name */
  $handler->display->display_options['fields']['field_location_venue_name']['id'] = 'field_location_venue_name';
  $handler->display->display_options['fields']['field_location_venue_name']['table'] = 'field_data_field_location_venue_name';
  $handler->display->display_options['fields']['field_location_venue_name']['field'] = 'field_location_venue_name';
  $handler->display->display_options['fields']['field_location_venue_name']['label'] = '';
  $handler->display->display_options['fields']['field_location_venue_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location_venue_name']['element_class'] = 'location-name';
  $handler->display->display_options['fields']['field_location_venue_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_venue_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_venue_name']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: PIN */
  $handler->display->display_options['fields']['field_event_telephone_pin']['id'] = 'field_event_telephone_pin';
  $handler->display->display_options['fields']['field_event_telephone_pin']['table'] = 'field_data_field_event_telephone_pin';
  $handler->display->display_options['fields']['field_event_telephone_pin']['field'] = 'field_event_telephone_pin';
  $handler->display->display_options['fields']['field_event_telephone_pin']['label'] = '';
  $handler->display->display_options['fields']['field_event_telephone_pin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_telephone_pin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_telephone_pin']['alter']['text'] = '(PIN: [field_event_telephone_pin])';
  $handler->display->display_options['fields']['field_event_telephone_pin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_telephone_pin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_telephone_pin']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Telephone number */
  $handler->display->display_options['fields']['field_event_telephone_number']['id'] = 'field_event_telephone_number';
  $handler->display->display_options['fields']['field_event_telephone_number']['table'] = 'field_data_field_event_telephone_number';
  $handler->display->display_options['fields']['field_event_telephone_number']['field'] = 'field_event_telephone_number';
  $handler->display->display_options['fields']['field_event_telephone_number']['label'] = '';
  $handler->display->display_options['fields']['field_event_telephone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_telephone_number']['alter']['text'] = 'Phone: [field_event_telephone_number] [field_event_telephone_pin]';
  $handler->display->display_options['fields']['field_event_telephone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_telephone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_telephone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_telephone_number']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_telephone_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Web Conference Details */
  $handler->display->display_options['fields']['field_web_conference_detail']['id'] = 'field_web_conference_detail';
  $handler->display->display_options['fields']['field_web_conference_detail']['table'] = 'field_data_field_web_conference_detail';
  $handler->display->display_options['fields']['field_web_conference_detail']['field'] = 'field_web_conference_detail';
  $handler->display->display_options['fields']['field_web_conference_detail']['label'] = '';
  $handler->display->display_options['fields']['field_web_conference_detail']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_web_conference_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_web_conference_detail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_web_conference_detail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_web_conference_detail']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_web_conference_detail']['field_api_classes'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_event_address']['id'] = 'field_event_address';
  $handler->display->display_options['fields']['field_event_address']['table'] = 'field_data_field_event_address';
  $handler->display->display_options['fields']['field_event_address']['field'] = 'field_event_address';
  $handler->display->display_options['fields']['field_event_address']['label'] = '';
  $handler->display->display_options['fields']['field_event_address']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'field_formatter_class' => '',
  );
  /* Field: Content: Other Location Details */
  $handler->display->display_options['fields']['field_other_location_details']['id'] = 'field_other_location_details';
  $handler->display->display_options['fields']['field_other_location_details']['table'] = 'field_data_field_other_location_details';
  $handler->display->display_options['fields']['field_other_location_details']['field'] = 'field_other_location_details';
  $handler->display->display_options['fields']['field_other_location_details']['label'] = '';
  $handler->display->display_options['fields']['field_other_location_details']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_other_location_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_location_details']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_location_details']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Event date and time */
  $handler = $view->new_display('panel_pane', 'Event date and time', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date and time */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Date and time';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date_format_military_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* Field: Time zone indicator */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time zone indicator';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '(All times [field_event_date_1])';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_zone_only',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Date description */
  $handler->display->display_options['fields']['field_event_date_description']['id'] = 'field_event_date_description';
  $handler->display->display_options['fields']['field_event_date_description']['table'] = 'field_data_field_event_date_description';
  $handler->display->display_options['fields']['field_event_date_description']['field'] = 'field_event_date_description';
  $handler->display->display_options['fields']['field_event_date_description']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_description']['empty'] = '[field_event_date]
[field_event_date_1] ';
  $handler->display->display_options['fields']['field_event_date_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Event Contacts */
  $handler = $view->new_display('panel_pane', 'Event Contacts', 'panel_pane_4');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Contact Person */
  $handler->display->display_options['fields']['field_event_contact_person']['id'] = 'field_event_contact_person';
  $handler->display->display_options['fields']['field_event_contact_person']['table'] = 'field_data_field_event_contact_person';
  $handler->display->display_options['fields']['field_event_contact_person']['field'] = 'field_event_contact_person';
  $handler->display->display_options['fields']['field_event_contact_person']['label'] = '';
  $handler->display->display_options['fields']['field_event_contact_person']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_contact_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_contact_person']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_contact_person']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_contact_person']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_event_contact_person']['settings'] = array(
    'view_mode' => 'full_name_phone',
    'links' => 0,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_contact_person']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_contact_person']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Additional Contact Information */
  $handler = $view->new_display('panel_pane', 'Additional Contact Information', 'panel_pane_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Additional Contact Information */
  $handler->display->display_options['fields']['field_addl_contact_info']['id'] = 'field_addl_contact_info';
  $handler->display->display_options['fields']['field_addl_contact_info']['table'] = 'field_data_field_addl_contact_info';
  $handler->display->display_options['fields']['field_addl_contact_info']['field'] = 'field_addl_contact_info';
  $handler->display->display_options['fields']['field_addl_contact_info']['label'] = '';
  $handler->display->display_options['fields']['field_addl_contact_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_addl_contact_info']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_addl_contact_info']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Upcoming events for sidebar */
  $handler = $view->new_display('panel_pane', 'Upcoming events for sidebar', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pane-content';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events »';
  $handler->display->display_options['link_url'] = '%1/upcoming-events';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'sidebar-node-list--item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="[path]/upcoming-events">See all events »</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Org Short Title */
  $handler->display->display_options['fields']['field_org_short_title']['id'] = 'field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['table'] = 'field_data_field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['field'] = 'field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_org_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_org_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_org_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_short_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_org_short_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'sidebar-node-list--item--title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date And Time */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'sidebar-node-list--item--text';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'military_with_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '12',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Upcoming Events Page */
  $handler = $view->new_display('page', 'Upcoming Events Page', 'upcoming_events_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'upcoming-events--page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'events:block_events_calendar';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No events found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no upcoming events.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['expose']['label'] = 'Start Date';
  /* Sort criterion: Content: Date And Time - end date (field_event_date:value2) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['expose']['label'] = 'End Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';
  $handler->display->display_options['path'] = 'node/%/upcoming-events';

  /* Display: Event teaser title */
  $handler = $view->new_display('panel_pane', 'Event teaser title', 'panel_pane__event_teaser_title');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '[field_event_type]: ';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_event_type]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Host Group */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Host Group';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Event type + title */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Event type + title';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="teaser-title">[title]</h2>
<h5>Hosted by [title_1]</h5>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Events Calendar */
  $handler = $view->new_display('block', 'Events Calendar', 'block_events_calendar');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['multiday_hidden'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'announcement' => '#ffffff',
    'course' => '#ffffff',
    'program' => '#ffffff',
    'event' => '#ffffff',
    'media_gallery' => '#ffffff',
    'group' => '#ffffff',
    'help' => '#ffffff',
    'news' => '#ffffff',
    'organization' => '#ffffff',
    'page' => '#ffffff',
    'panel' => '#ffffff',
    'poll' => '#ffffff',
    'post' => '#ffffff',
    'publication' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_group'] = array(
    11 => '#ffffff',
    12 => '#ffffff',
    16 => '#ffffff',
    17 => '#ffffff',
    18 => '#ffffff',
    20 => '#ffffff',
    21 => '#ffffff',
    22 => '#ffffff',
    25 => '#ffffff',
    27 => '#ffffff',
    28 => '#ffffff',
    29 => '#ffffff',
    30 => '#ffffff',
    31 => '#ffffff',
    32 => '#ffffff',
    33 => '#ffffff',
    34 => '#ffffff',
    35 => '#ffffff',
    36 => '#ffffff',
    37 => '#ffffff',
    38 => '#ffffff',
    39 => '#ffffff',
    40 => '#ffffff',
    41 => '#ffffff',
    42 => '#ffffff',
    43 => '#ffffff',
    44 => '#ffffff',
    45 => '#ffffff',
    46 => '#ffffff',
    47 => '#ffffff',
    48 => '#ffffff',
    49 => '#ffffff',
    50 => '#ffffff',
    51 => '#ffffff',
    52 => '#ffffff',
    53 => '#ffffff',
    54 => '#ffffff',
    55 => '#ffffff',
    56 => '#ffffff',
    57 => '#ffffff',
    58 => '#ffffff',
    59 => '#ffffff',
    60 => '#ffffff',
    61 => '#ffffff',
    62 => '#ffffff',
    63 => '#ffffff',
    64 => '#ffffff',
    65 => '#ffffff',
    66 => '#ffffff',
    67 => '#ffffff',
    68 => '#ffffff',
    69 => '#ffffff',
    70 => '#ffffff',
    71 => '#ffffff',
    72 => '#ffffff',
    73 => '#ffffff',
    74 => '#ffffff',
    75 => '#ffffff',
    76 => '#ffffff',
    77 => '#ffffff',
    78 => '#ffffff',
    79 => '#ffffff',
    80 => '#ffffff',
    81 => '#ffffff',
    82 => '#ffffff',
    83 => '#ffffff',
    84 => '#ffffff',
    85 => '#ffffff',
    86 => '#ffffff',
    87 => '#ffffff',
    88 => '#ffffff',
    89 => '#ffffff',
    90 => '#ffffff',
    91 => '#ffffff',
    92 => '#ffffff',
    93 => '#ffffff',
    94 => '#ffffff',
    95 => '#ffffff',
    96 => '#ffffff',
    97 => '#ffffff',
    98 => '#ffffff',
    99 => '#ffffff',
    100 => '#ffffff',
    101 => '#ffffff',
    102 => '#ffffff',
    103 => '#ffffff',
    104 => '#ffffff',
    105 => '#ffffff',
    106 => '#ffffff',
    107 => '#ffffff',
    108 => '#ffffff',
    109 => '#ffffff',
    110 => '#ffffff',
    111 => '#ffffff',
    112 => '#ffffff',
    113 => '#ffffff',
    114 => '#ffffff',
    115 => '#ffffff',
    116 => '#ffffff',
    117 => '#ffffff',
    118 => '#ffffff',
    119 => '#ffffff',
    120 => '#ffffff',
    121 => '#ffffff',
    122 => '#ffffff',
    123 => '#ffffff',
    124 => '#ffffff',
    125 => '#ffffff',
    126 => '#ffffff',
    127 => '#ffffff',
    128 => '#ffffff',
    129 => '#ffffff',
    130 => '#ffffff',
    131 => '#ffffff',
    132 => '#ffffff',
    133 => '#ffffff',
    134 => '#ffffff',
    135 => '#ffffff',
    136 => '#ffffff',
    137 => '#ffffff',
    138 => '#ffffff',
    139 => '#ffffff',
    140 => '#ffffff',
    141 => '#ffffff',
    142 => '#ffffff',
    143 => '#ffffff',
    144 => '#ffffff',
    145 => '#ffffff',
    146 => '#ffffff',
    147 => '#ffffff',
    148 => '#ffffff',
    149 => '#ffffff',
    150 => '#ffffff',
    151 => '#ffffff',
    152 => '#ffffff',
    153 => '#ffffff',
    154 => '#ffffff',
    155 => '#ffffff',
    156 => '#ffffff',
    547 => '#ffffff',
    554 => '#ffffff',
    559 => '#ffffff',
    719 => '#ffffff',
    720 => '#ffffff',
    721 => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_date_value']['add_delta'] = 'yes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Upcoming events teasers */
  $handler = $view->new_display('panel_pane', 'Upcoming events teasers', 'view_pane__upcoming_events_teasers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pane-content';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events »';
  $handler->display->display_options['link_url'] = '%1/upcoming-events';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'sidebar-node-list--item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Org Short Title */
  $handler->display->display_options['fields']['field_org_short_title']['id'] = 'field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['table'] = 'field_data_field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['field'] = 'field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_org_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_org_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_org_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_short_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_org_short_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'sidebar-node-list--item--title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date And Time */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'sidebar-node-list--item--text';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'military_with_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '12',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-export-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Host';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event Title';
  /* Field: Content: Date And Time */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date_format_military_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Date And Time */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '(All times [field_event_date_1])';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_zone_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Date description */
  $handler->display->display_options['fields']['field_event_date_description']['id'] = 'field_event_date_description';
  $handler->display->display_options['fields']['field_event_date_description']['table'] = 'field_data_field_event_date_description';
  $handler->display->display_options['fields']['field_event_date_description']['field'] = 'field_event_date_description';
  $handler->display->display_options['fields']['field_event_date_description']['label'] = 'Date and Time';
  $handler->display->display_options['fields']['field_event_date_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_description']['empty'] = '[field_event_date] [field_event_date_1] ';
  $handler->display->display_options['fields']['field_event_date_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_event_date_description']['field_api_classes'] = TRUE;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: GN2 OG: Group Members */
  $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['id'] = 'gn2_og_handler_group_members_list';
  $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['table'] = 'node';
  $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['field'] = 'gn2_og_handler_group_members_list';
  $handler->display->display_options['fields']['gn2_og_handler_group_members_list']['label'] = 'Participants';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['add_delta'] = 'yes';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date And Time - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value2']['add_delta'] = 'yes';
  /* Filter criterion: Content: Event Location (field_event_location) */
  $handler->display->display_options['filters']['field_event_location_value']['id'] = 'field_event_location_value';
  $handler->display->display_options['filters']['field_event_location_value']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['filters']['field_event_location_value']['field'] = 'field_event_location_value';
  $handler->display->display_options['filters']['field_event_location_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_location_value']['value'] = array(
    'adobe_open' => 'adobe_open',
  );
  $handler->display->display_options['filters']['field_event_location_value']['group'] = 1;
  /* Filter criterion: Content: Event Location (field_event_location) */
  $handler->display->display_options['filters']['field_event_location_value_1']['id'] = 'field_event_location_value_1';
  $handler->display->display_options['filters']['field_event_location_value_1']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['filters']['field_event_location_value_1']['field'] = 'field_event_location_value';
  $handler->display->display_options['filters']['field_event_location_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_location_value_1']['value'] = array(
    'adobe_open' => 'adobe_open',
  );
  $handler->display->display_options['filters']['field_event_location_value_1']['group'] = 2;
  $handler->display->display_options['path'] = 'node/%/upcoming-events/export';
  $handler->display->display_options['displays'] = array(
    'upcoming_events_page' => 'upcoming_events_page',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_3' => 0,
    'panel_pane_2' => 0,
    'panel_pane_4' => 0,
    'panel_pane_5' => 0,
    'panel_pane_7' => 0,
    'panel_pane__event_teaser_title' => 0,
    'block_events_calendar' => 0,
    'view_pane__upcoming_events_teasers' => 0,
  );
  $translatables['events'] = array(
    t('Master'),
    t('See all events »'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Group node from OG membership'),
    t('Title'),
    t('All'),
    t('Event node title'),
    t('more'),
    t('[field_event_type]: '),
    t('<h1>[field_event_type]: [title]</h1>
<h5>Hosted by [title_1]</h5>'),
    t('<div class="title-image-block">
<div class="title-image-block--image">[field_main_image_1]</div>
<div class="title-image-block--title"><div class="inner">[nothing]</div></div>
</div>'),
    t('<div class="title-no-image-block">
<div class="title-no-image-block--title"><h1>[nothing]</h1></div>
</div>'),
    t('View panes'),
    t('Event location'),
    t('(PIN: [field_event_telephone_pin])'),
    t('Phone: [field_event_telephone_number] [field_event_telephone_pin]'),
    t('Event date and time'),
    t('(All times [field_event_date_1])'),
    t('[field_event_date]
[field_event_date_1] '),
    t('Event Contacts'),
    t('Additional Contact Information'),
    t('Upcoming events for sidebar'),
    t('Upcoming Events'),
    t('<a href="[path]/upcoming-events">See all events »</a>'),
    t('Upcoming Events Page'),
    t('No events found'),
    t('There are no upcoming events.'),
    t('Start Date'),
    t('End Date'),
    t('Event teaser title'),
    t('[field_event_type]: [title]'),
    t('<h2 class="teaser-title">[title]</h2>
<h5>Hosted by [title_1]</h5>'),
    t('Events Calendar'),
    t('Upcoming events teasers'),
    t('Events'),
    t('Data export'),
    t('Host'),
    t('Event Title'),
    t('Date and Time'),
    t('[field_event_date] [field_event_date_1] '),
    t('Location'),
    t('Participants'),
  );
  $export['events'] = $view;

  return $export;
}
