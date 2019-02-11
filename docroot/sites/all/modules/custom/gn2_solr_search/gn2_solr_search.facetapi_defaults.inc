<?php
/**
 * @file
 * gn2_solr_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function gn2_solr_search_facetapi_default_facet_settings() {
  $export = array();

   /* search_api@default_node_index::field_event_date:value */ $facet = new stdClass();
   /* search_api@default_node_index::field_event_date:value */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::field_event_date:value */ $facet->api_version = 1;
   /* search_api@default_node_index::field_event_date:value */ $facet->name = 'search_api@default_node_index::field_event_date:value';
   /* search_api@default_node_index::field_event_date:value */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::field_event_date:value */ $facet->realm = '';
   /* search_api@default_node_index::field_event_date:value */ $facet->facet = 'field_event_date:value';
   /* search_api@default_node_index::field_event_date:value */ $facet->enabled = FALSE;
   /* search_api@default_node_index::field_event_date:value */ $facet->settings = array(
   /* search_api@default_node_index::field_event_date:value */   'operator' => 'and',
   /* search_api@default_node_index::field_event_date:value */   'hard_limit' => '50',
   /* search_api@default_node_index::field_event_date:value */   'dependencies' => array(
   /* search_api@default_node_index::field_event_date:value */     'facets' => array(),
   /* search_api@default_node_index::field_event_date:value */     'force_deactivation' => TRUE,
   /* search_api@default_node_index::field_event_date:value */     'regex' => FALSE,
   /* search_api@default_node_index::field_event_date:value */   ),
   /* search_api@default_node_index::field_event_date:value */   'facet_mincount' => '1',
   /* search_api@default_node_index::field_event_date:value */   'facet_missing' => '0',
   /* search_api@default_node_index::field_event_date:value */   'flatten' => 0,
   /* search_api@default_node_index::field_event_date:value */   'individual_parent' => 0,
   /* search_api@default_node_index::field_event_date:value */   'query_type' => 'date_range',
   /* search_api@default_node_index::field_event_date:value */   'limit_active_items' => 0,
   /* search_api@default_node_index::field_event_date:value */   'default_true' => '1',
   /* search_api@default_node_index::field_event_date:value */   'facet_search_ids' => array(),
   /* search_api@default_node_index::field_event_date:value */   'exclude' => 0,
   /* search_api@default_node_index::field_event_date:value */   'pretty_paths_alias' => 'field_event_date:value',
   /* search_api@default_node_index::field_event_date:value */ );
  $export['search_api@default_node_index::field_event_date:value'] = $facet;

   /* search_api@default_node_index::field_event_start_date */ $facet = new stdClass();
   /* search_api@default_node_index::field_event_start_date */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::field_event_start_date */ $facet->api_version = 1;
   /* search_api@default_node_index::field_event_start_date */ $facet->name = 'search_api@default_node_index::field_event_start_date';
   /* search_api@default_node_index::field_event_start_date */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::field_event_start_date */ $facet->realm = '';
   /* search_api@default_node_index::field_event_start_date */ $facet->facet = 'field_event_start_date';
   /* search_api@default_node_index::field_event_start_date */ $facet->enabled = FALSE;
   /* search_api@default_node_index::field_event_start_date */ $facet->settings = array(
   /* search_api@default_node_index::field_event_start_date */   'operator' => 'and',
   /* search_api@default_node_index::field_event_start_date */   'hard_limit' => '50',
   /* search_api@default_node_index::field_event_start_date */   'dependencies' => array(
   /* search_api@default_node_index::field_event_start_date */     'roles' => array(
   /* search_api@default_node_index::field_event_start_date */       1 => 0,
   /* search_api@default_node_index::field_event_start_date */       2 => 0,
   /* search_api@default_node_index::field_event_start_date */       9 => 0,
   /* search_api@default_node_index::field_event_start_date */       10 => 0,
   /* search_api@default_node_index::field_event_start_date */     ),
   /* search_api@default_node_index::field_event_start_date */     'bundle' => 'none',
   /* search_api@default_node_index::field_event_start_date */     'bundle_selected' => array(
   /* search_api@default_node_index::field_event_start_date */       'event' => 'event',
   /* search_api@default_node_index::field_event_start_date */       'about_page' => 0,
   /* search_api@default_node_index::field_event_start_date */       'announcement' => 0,
   /* search_api@default_node_index::field_event_start_date */       'course' => 0,
   /* search_api@default_node_index::field_event_start_date */       'course_group' => 0,
   /* search_api@default_node_index::field_event_start_date */       'program' => 0,
   /* search_api@default_node_index::field_event_start_date */       'media_gallery' => 0,
   /* search_api@default_node_index::field_event_start_date */       'group' => 0,
   /* search_api@default_node_index::field_event_start_date */       'help' => 0,
   /* search_api@default_node_index::field_event_start_date */       'news' => 0,
   /* search_api@default_node_index::field_event_start_date */       'organization' => 0,
   /* search_api@default_node_index::field_event_start_date */       'page' => 0,
   /* search_api@default_node_index::field_event_start_date */       'panel' => 0,
   /* search_api@default_node_index::field_event_start_date */       'poll' => 0,
   /* search_api@default_node_index::field_event_start_date */       'post' => 0,
   /* search_api@default_node_index::field_event_start_date */       'publication' => 0,
   /* search_api@default_node_index::field_event_start_date */     ),
   /* search_api@default_node_index::field_event_start_date */     'facets' => array(
   /* search_api@default_node_index::field_event_start_date */       'search_api_language' => 0,
   /* search_api@default_node_index::field_event_start_date */       'field_event_date:value' => 0,
   /* search_api@default_node_index::field_event_start_date */       'field_topic' => 0,
   /* search_api@default_node_index::field_event_start_date */       'field_region' => 0,
   /* search_api@default_node_index::field_event_start_date */       'author' => 0,
   /* search_api@default_node_index::field_event_start_date */       'og_group_ref' => 0,
   /* search_api@default_node_index::field_event_start_date */       'field_country' => 0,
   /* search_api@default_node_index::field_event_start_date */       'field_parent_organization' => 0,
   /* search_api@default_node_index::field_event_start_date */       'field_gn2_simple_access' => 0,
   /* search_api@default_node_index::field_event_start_date */       'group_group' => 0,
   /* search_api@default_node_index::field_event_start_date */       'type' => 0,
   /* search_api@default_node_index::field_event_start_date */     ),
   /* search_api@default_node_index::field_event_start_date */     'force_deactivation' => 1,
   /* search_api@default_node_index::field_event_start_date */     'regex' => 0,
   /* search_api@default_node_index::field_event_start_date */     'facet_items_search_api_language' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_field_event_date:value' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_field_topic' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_field_region' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_author' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_og_group_ref' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_field_country' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_field_parent_organization' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_field_gn2_simple_access' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_group_group' => '',
   /* search_api@default_node_index::field_event_start_date */     'facet_items_type' => '',
   /* search_api@default_node_index::field_event_start_date */   ),
   /* search_api@default_node_index::field_event_start_date */   'facet_mincount' => '1',
   /* search_api@default_node_index::field_event_start_date */   'facet_missing' => '0',
   /* search_api@default_node_index::field_event_start_date */   'flatten' => 0,
   /* search_api@default_node_index::field_event_start_date */   'individual_parent' => 0,
   /* search_api@default_node_index::field_event_start_date */   'query_type' => 'date_range',
   /* search_api@default_node_index::field_event_start_date */   'limit_active_items' => 0,
   /* search_api@default_node_index::field_event_start_date */   'default_true' => '1',
   /* search_api@default_node_index::field_event_start_date */   'facet_search_ids' => array(),
   /* search_api@default_node_index::field_event_start_date */   'date_granularity' => 'DAY',
   /* search_api@default_node_index::field_event_start_date */   'pretty_paths_alias' => 'field_event_start_date',
   /* search_api@default_node_index::field_event_start_date */ );
  $export['search_api@default_node_index::field_event_start_date'] = $facet;

   /* search_api@default_node_index:block:field_event_date:value */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_event_date:value */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_event_date:value */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_event_date:value */ $facet->name = 'search_api@default_node_index:block:field_event_date:value';
   /* search_api@default_node_index:block:field_event_date:value */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_event_date:value */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_event_date:value */ $facet->facet = 'field_event_date:value';
   /* search_api@default_node_index:block:field_event_date:value */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_event_date:value */ $facet->settings = array(
   /* search_api@default_node_index:block:field_event_date:value */   'weight' => 0,
   /* search_api@default_node_index:block:field_event_date:value */   'widget' => 'date_range',
   /* search_api@default_node_index:block:field_event_date:value */   'filters' => array(),
   /* search_api@default_node_index:block:field_event_date:value */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_event_date:value */     'active' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     'count' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     'display' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     'natural' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     'indexed' => 0,
   /* search_api@default_node_index:block:field_event_date:value */   ),
   /* search_api@default_node_index:block:field_event_date:value */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_event_date:value */     'active' => '-50',
   /* search_api@default_node_index:block:field_event_date:value */     'count' => '-49',
   /* search_api@default_node_index:block:field_event_date:value */     'display' => '-48',
   /* search_api@default_node_index:block:field_event_date:value */     'natural' => '0',
   /* search_api@default_node_index:block:field_event_date:value */     'indexed' => '0',
   /* search_api@default_node_index:block:field_event_date:value */   ),
   /* search_api@default_node_index:block:field_event_date:value */   'sort_order' => array(
   /* search_api@default_node_index:block:field_event_date:value */     'active' => '3',
   /* search_api@default_node_index:block:field_event_date:value */     'count' => '3',
   /* search_api@default_node_index:block:field_event_date:value */     'display' => '4',
   /* search_api@default_node_index:block:field_event_date:value */     'natural' => '4',
   /* search_api@default_node_index:block:field_event_date:value */     'indexed' => '4',
   /* search_api@default_node_index:block:field_event_date:value */   ),
   /* search_api@default_node_index:block:field_event_date:value */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_event_date:value */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:field_event_date:value */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:field_event_date:value */   'soft_limit' => '20',
   /* search_api@default_node_index:block:field_event_date:value */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_event_date:value */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_event_date:value */   'ranges' => array(
   /* search_api@default_node_index:block:field_event_date:value */     'past_24_hours' => array(
   /* search_api@default_node_index:block:field_event_date:value */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:field_event_date:value */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_date:value */       'weight' => '-10',
   /* search_api@default_node_index:block:field_event_date:value */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     ),
   /* search_api@default_node_index:block:field_event_date:value */     'past_week' => array(
   /* search_api@default_node_index:block:field_event_date:value */       'label' => 'Past week',
   /* search_api@default_node_index:block:field_event_date:value */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_date:value */       'weight' => '-9',
   /* search_api@default_node_index:block:field_event_date:value */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     ),
   /* search_api@default_node_index:block:field_event_date:value */     'past_month' => array(
   /* search_api@default_node_index:block:field_event_date:value */       'label' => 'Past month',
   /* search_api@default_node_index:block:field_event_date:value */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_date:value */       'weight' => '-8',
   /* search_api@default_node_index:block:field_event_date:value */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     ),
   /* search_api@default_node_index:block:field_event_date:value */     'past_year' => array(
   /* search_api@default_node_index:block:field_event_date:value */       'label' => 'Past year',
   /* search_api@default_node_index:block:field_event_date:value */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_date:value */       'weight' => '-7',
   /* search_api@default_node_index:block:field_event_date:value */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     ),
   /* search_api@default_node_index:block:field_event_date:value */     'future' => array(
   /* search_api@default_node_index:block:field_event_date:value */       'label' => 'Future',
   /* search_api@default_node_index:block:field_event_date:value */       'machine_name' => 'future',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_op' => '+',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_amount' => '99',
   /* search_api@default_node_index:block:field_event_date:value */       'date_range_end_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_event_date:value */       'weight' => '-6',
   /* search_api@default_node_index:block:field_event_date:value */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_date:value */     ),
   /* search_api@default_node_index:block:field_event_date:value */   ),
   /* search_api@default_node_index:block:field_event_date:value */   'date_ranges' => array(
   /* search_api@default_node_index:block:field_event_date:value */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:field_event_date:value */   ),
   /* search_api@default_node_index:block:field_event_date:value */   'empty_text' => array(
   /* search_api@default_node_index:block:field_event_date:value */     'value' => '',
   /* search_api@default_node_index:block:field_event_date:value */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_event_date:value */   ),
   /* search_api@default_node_index:block:field_event_date:value */ );
  $export['search_api@default_node_index:block:field_event_date:value'] = $facet;

   /* search_api@default_node_index:block:field_event_start_date */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_event_start_date */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_event_start_date */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_event_start_date */ $facet->name = 'search_api@default_node_index:block:field_event_start_date';
   /* search_api@default_node_index:block:field_event_start_date */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_event_start_date */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_event_start_date */ $facet->facet = 'field_event_start_date';
   /* search_api@default_node_index:block:field_event_start_date */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_event_start_date */ $facet->settings = array(
   /* search_api@default_node_index:block:field_event_start_date */   'weight' => 0,
   /* search_api@default_node_index:block:field_event_start_date */   'widget' => 'date_range',
   /* search_api@default_node_index:block:field_event_start_date */   'filters' => array(),
   /* search_api@default_node_index:block:field_event_start_date */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_event_start_date */     'active' => 'active',
   /* search_api@default_node_index:block:field_event_start_date */     'count' => 'count',
   /* search_api@default_node_index:block:field_event_start_date */     'display' => 'display',
   /* search_api@default_node_index:block:field_event_start_date */     'natural' => 0,
   /* search_api@default_node_index:block:field_event_start_date */     'indexed' => 0,
   /* search_api@default_node_index:block:field_event_start_date */   ),
   /* search_api@default_node_index:block:field_event_start_date */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_event_start_date */     'active' => '-50',
   /* search_api@default_node_index:block:field_event_start_date */     'count' => '-49',
   /* search_api@default_node_index:block:field_event_start_date */     'display' => '-48',
   /* search_api@default_node_index:block:field_event_start_date */     'natural' => '0',
   /* search_api@default_node_index:block:field_event_start_date */     'indexed' => '0',
   /* search_api@default_node_index:block:field_event_start_date */   ),
   /* search_api@default_node_index:block:field_event_start_date */   'sort_order' => array(
   /* search_api@default_node_index:block:field_event_start_date */     'active' => '3',
   /* search_api@default_node_index:block:field_event_start_date */     'count' => '3',
   /* search_api@default_node_index:block:field_event_start_date */     'display' => '4',
   /* search_api@default_node_index:block:field_event_start_date */     'natural' => '4',
   /* search_api@default_node_index:block:field_event_start_date */     'indexed' => '4',
   /* search_api@default_node_index:block:field_event_start_date */   ),
   /* search_api@default_node_index:block:field_event_start_date */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_event_start_date */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:field_event_start_date */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:field_event_start_date */   'soft_limit' => '20',
   /* search_api@default_node_index:block:field_event_start_date */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_event_start_date */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_event_start_date */   'empty_text' => array(
   /* search_api@default_node_index:block:field_event_start_date */     'value' => '',
   /* search_api@default_node_index:block:field_event_start_date */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_event_start_date */   ),
   /* search_api@default_node_index:block:field_event_start_date */   'ranges' => array(
   /* search_api@default_node_index:block:field_event_start_date */     'past_hour' => array(
   /* search_api@default_node_index:block:field_event_start_date */       'label' => 'Future',
   /* search_api@default_node_index:block:field_event_start_date */       'machine_name' => 'past_hour',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_op' => '+',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_amount' => '99',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_event_start_date */       'weight' => '0',
   /* search_api@default_node_index:block:field_event_start_date */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_start_date */     ),
   /* search_api@default_node_index:block:field_event_start_date */     'past_24_hours' => array(
   /* search_api@default_node_index:block:field_event_start_date */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:field_event_start_date */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_start_date */       'weight' => '1',
   /* search_api@default_node_index:block:field_event_start_date */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_start_date */     ),
   /* search_api@default_node_index:block:field_event_start_date */     'past_week' => array(
   /* search_api@default_node_index:block:field_event_start_date */       'label' => 'Past week',
   /* search_api@default_node_index:block:field_event_start_date */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_start_date */       'weight' => '2',
   /* search_api@default_node_index:block:field_event_start_date */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_start_date */     ),
   /* search_api@default_node_index:block:field_event_start_date */     'past_month' => array(
   /* search_api@default_node_index:block:field_event_start_date */       'label' => 'Past month',
   /* search_api@default_node_index:block:field_event_start_date */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_start_date */       'weight' => '3',
   /* search_api@default_node_index:block:field_event_start_date */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_start_date */     ),
   /* search_api@default_node_index:block:field_event_start_date */     'past_year' => array(
   /* search_api@default_node_index:block:field_event_start_date */       'label' => 'Past year',
   /* search_api@default_node_index:block:field_event_start_date */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_event_start_date */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_event_start_date */       'weight' => '4',
   /* search_api@default_node_index:block:field_event_start_date */       'delete' => 0,
   /* search_api@default_node_index:block:field_event_start_date */     ),
   /* search_api@default_node_index:block:field_event_start_date */   ),
   /* search_api@default_node_index:block:field_event_start_date */   'date_ranges' => array(
   /* search_api@default_node_index:block:field_event_start_date */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:field_event_start_date */   ),
   /* search_api@default_node_index:block:field_event_start_date */ );
  $export['search_api@default_node_index:block:field_event_start_date'] = $facet;

   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet = new stdClass();
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->api_version = 1;
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->name = 'search_api@user_profile::og_user_node:field_org_short_title';
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->realm = '';
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->facet = 'og_user_node:field_org_short_title';
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->enabled = FALSE;
   /* search_api@user_profile::og_user_node:field_org_short_title */ $facet->settings = array(
   /* search_api@user_profile::og_user_node:field_org_short_title */   'operator' => 'and',
   /* search_api@user_profile::og_user_node:field_org_short_title */   'hard_limit' => '50',
   /* search_api@user_profile::og_user_node:field_org_short_title */   'dependencies' => array(
   /* search_api@user_profile::og_user_node:field_org_short_title */     'facets' => array(),
   /* search_api@user_profile::og_user_node:field_org_short_title */     'force_deactivation' => TRUE,
   /* search_api@user_profile::og_user_node:field_org_short_title */     'regex' => FALSE,
   /* search_api@user_profile::og_user_node:field_org_short_title */   ),
   /* search_api@user_profile::og_user_node:field_org_short_title */   'facet_mincount' => '1',
   /* search_api@user_profile::og_user_node:field_org_short_title */   'facet_missing' => '0',
   /* search_api@user_profile::og_user_node:field_org_short_title */   'flatten' => 0,
   /* search_api@user_profile::og_user_node:field_org_short_title */   'individual_parent' => 0,
   /* search_api@user_profile::og_user_node:field_org_short_title */   'query_type' => 'term',
   /* search_api@user_profile::og_user_node:field_org_short_title */   'limit_active_items' => 0,
   /* search_api@user_profile::og_user_node:field_org_short_title */   'default_true' => TRUE,
   /* search_api@user_profile::og_user_node:field_org_short_title */   'facet_search_ids' => array(),
   /* search_api@user_profile::og_user_node:field_org_short_title */   'exclude' => 0,
   /* search_api@user_profile::og_user_node:field_org_short_title */   'pretty_paths_alias' => 'org',
   /* search_api@user_profile::og_user_node:field_org_short_title */ );
  $export['search_api@user_profile::og_user_node:field_org_short_title'] = $facet;

  return $export;
}
