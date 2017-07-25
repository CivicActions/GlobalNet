<?php
/**
 * @file
 * gn2_base_config.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function gn2_base_config_facetapi_default_facet_settings() {
  $export = array();

   /* search_api@default_node_index::author */ $facet = new stdClass();
   /* search_api@default_node_index::author */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::author */ $facet->api_version = 1;
   /* search_api@default_node_index::author */ $facet->name = 'search_api@default_node_index::author';
   /* search_api@default_node_index::author */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::author */ $facet->realm = '';
   /* search_api@default_node_index::author */ $facet->facet = 'author';
   /* search_api@default_node_index::author */ $facet->enabled = FALSE;
   /* search_api@default_node_index::author */ $facet->settings = array(
   /* search_api@default_node_index::author */   'operator' => 'or',
   /* search_api@default_node_index::author */   'hard_limit' => '50',
   /* search_api@default_node_index::author */   'dependencies' => array(
   /* search_api@default_node_index::author */     'bundle' => 'none',
   /* search_api@default_node_index::author */     'bundle_selected' => array(),
   /* search_api@default_node_index::author */   ),
   /* search_api@default_node_index::author */   'facet_mincount' => '1',
   /* search_api@default_node_index::author */   'facet_missing' => '0',
   /* search_api@default_node_index::author */   'flatten' => 0,
   /* search_api@default_node_index::author */   'individual_parent' => 0,
   /* search_api@default_node_index::author */   'query_type' => 'term',
   /* search_api@default_node_index::author */   'limit_active_items' => 0,
   /* search_api@default_node_index::author */   'default_true' => '1',
   /* search_api@default_node_index::author */   'facet_search_ids' => array(),
   /* search_api@default_node_index::author */   'exclude' => 0,
   /* search_api@default_node_index::author */   'pretty_paths_alias' => 'author',
   /* search_api@default_node_index::author */ );
  $export['search_api@default_node_index::author'] = $facet;

   /* search_api@default_node_index::field_gn2_simple_access */ $facet = new stdClass();
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->api_version = 1;
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->name = 'search_api@default_node_index::field_gn2_simple_access';
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->realm = '';
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->facet = 'field_gn2_simple_access';
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->enabled = FALSE;
   /* search_api@default_node_index::field_gn2_simple_access */ $facet->settings = array(
   /* search_api@default_node_index::field_gn2_simple_access */   'operator' => 'or',
   /* search_api@default_node_index::field_gn2_simple_access */   'hard_limit' => '50',
   /* search_api@default_node_index::field_gn2_simple_access */   'dependencies' => array(
   /* search_api@default_node_index::field_gn2_simple_access */     'bundle' => 'none',
   /* search_api@default_node_index::field_gn2_simple_access */     'bundle_selected' => array(),
   /* search_api@default_node_index::field_gn2_simple_access */     'roles' => array(),
   /* search_api@default_node_index::field_gn2_simple_access */   ),
   /* search_api@default_node_index::field_gn2_simple_access */   'facet_mincount' => '1',
   /* search_api@default_node_index::field_gn2_simple_access */   'facet_missing' => '0',
   /* search_api@default_node_index::field_gn2_simple_access */   'flatten' => 0,
   /* search_api@default_node_index::field_gn2_simple_access */   'individual_parent' => 0,
   /* search_api@default_node_index::field_gn2_simple_access */   'query_type' => 'term',
   /* search_api@default_node_index::field_gn2_simple_access */   'limit_active_items' => 0,
   /* search_api@default_node_index::field_gn2_simple_access */   'default_true' => '1',
   /* search_api@default_node_index::field_gn2_simple_access */   'facet_search_ids' => array(),
   /* search_api@default_node_index::field_gn2_simple_access */   'exclude' => 0,
   /* search_api@default_node_index::field_gn2_simple_access */   'pretty_paths_alias' => 'access',
   /* search_api@default_node_index::field_gn2_simple_access */ );
  $export['search_api@default_node_index::field_gn2_simple_access'] = $facet;

   /* search_api@default_node_index::field_parent_organization */ $facet = new stdClass();
   /* search_api@default_node_index::field_parent_organization */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::field_parent_organization */ $facet->api_version = 1;
   /* search_api@default_node_index::field_parent_organization */ $facet->name = 'search_api@default_node_index::field_parent_organization';
   /* search_api@default_node_index::field_parent_organization */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::field_parent_organization */ $facet->realm = '';
   /* search_api@default_node_index::field_parent_organization */ $facet->facet = 'field_parent_organization';
   /* search_api@default_node_index::field_parent_organization */ $facet->enabled = FALSE;
   /* search_api@default_node_index::field_parent_organization */ $facet->settings = array(
   /* search_api@default_node_index::field_parent_organization */   'operator' => 'or',
   /* search_api@default_node_index::field_parent_organization */   'hard_limit' => '50',
   /* search_api@default_node_index::field_parent_organization */   'dependencies' => array(
   /* search_api@default_node_index::field_parent_organization */     'facets' => array(),
   /* search_api@default_node_index::field_parent_organization */     'force_deactivation' => TRUE,
   /* search_api@default_node_index::field_parent_organization */     'regex' => FALSE,
   /* search_api@default_node_index::field_parent_organization */     'roles' => array(),
   /* search_api@default_node_index::field_parent_organization */     'bundle' => 'none',
   /* search_api@default_node_index::field_parent_organization */     'bundle_selected' => array(),
   /* search_api@default_node_index::field_parent_organization */   ),
   /* search_api@default_node_index::field_parent_organization */   'facet_mincount' => '1',
   /* search_api@default_node_index::field_parent_organization */   'facet_missing' => '0',
   /* search_api@default_node_index::field_parent_organization */   'flatten' => 0,
   /* search_api@default_node_index::field_parent_organization */   'individual_parent' => 0,
   /* search_api@default_node_index::field_parent_organization */   'query_type' => 'term',
   /* search_api@default_node_index::field_parent_organization */   'limit_active_items' => 0,
   /* search_api@default_node_index::field_parent_organization */   'default_true' => '1',
   /* search_api@default_node_index::field_parent_organization */   'facet_search_ids' => array(),
   /* search_api@default_node_index::field_parent_organization */   'exclude' => 0,
   /* search_api@default_node_index::field_parent_organization */   'pretty_paths_alias' => 'org',
   /* search_api@default_node_index::field_parent_organization */ );
  $export['search_api@default_node_index::field_parent_organization'] = $facet;

   /* search_api@default_node_index::og_group_ref */ $facet = new stdClass();
   /* search_api@default_node_index::og_group_ref */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::og_group_ref */ $facet->api_version = 1;
   /* search_api@default_node_index::og_group_ref */ $facet->name = 'search_api@default_node_index::og_group_ref';
   /* search_api@default_node_index::og_group_ref */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::og_group_ref */ $facet->realm = '';
   /* search_api@default_node_index::og_group_ref */ $facet->facet = 'og_group_ref';
   /* search_api@default_node_index::og_group_ref */ $facet->enabled = FALSE;
   /* search_api@default_node_index::og_group_ref */ $facet->settings = array(
   /* search_api@default_node_index::og_group_ref */   'operator' => 'or',
   /* search_api@default_node_index::og_group_ref */   'hard_limit' => '50',
   /* search_api@default_node_index::og_group_ref */   'dependencies' => array(
   /* search_api@default_node_index::og_group_ref */     'bundle' => 'none',
   /* search_api@default_node_index::og_group_ref */     'bundle_selected' => array(),
   /* search_api@default_node_index::og_group_ref */     'roles' => array(),
   /* search_api@default_node_index::og_group_ref */   ),
   /* search_api@default_node_index::og_group_ref */   'facet_mincount' => '1',
   /* search_api@default_node_index::og_group_ref */   'facet_missing' => '0',
   /* search_api@default_node_index::og_group_ref */   'flatten' => 0,
   /* search_api@default_node_index::og_group_ref */   'individual_parent' => 0,
   /* search_api@default_node_index::og_group_ref */   'query_type' => 'term',
   /* search_api@default_node_index::og_group_ref */   'limit_active_items' => 0,
   /* search_api@default_node_index::og_group_ref */   'default_true' => '1',
   /* search_api@default_node_index::og_group_ref */   'facet_search_ids' => array(),
   /* search_api@default_node_index::og_group_ref */   'exclude' => 0,
   /* search_api@default_node_index::og_group_ref */   'pretty_paths_alias' => 'group',
   /* search_api@default_node_index::og_group_ref */ );
  $export['search_api@default_node_index::og_group_ref'] = $facet;

   /* search_api@default_node_index::type */ $facet = new stdClass();
   /* search_api@default_node_index::type */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index::type */ $facet->api_version = 1;
   /* search_api@default_node_index::type */ $facet->name = 'search_api@default_node_index::type';
   /* search_api@default_node_index::type */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index::type */ $facet->realm = '';
   /* search_api@default_node_index::type */ $facet->facet = 'type';
   /* search_api@default_node_index::type */ $facet->enabled = FALSE;
   /* search_api@default_node_index::type */ $facet->settings = array(
   /* search_api@default_node_index::type */   'operator' => 'or',
   /* search_api@default_node_index::type */   'hard_limit' => '50',
   /* search_api@default_node_index::type */   'dependencies' => array(
   /* search_api@default_node_index::type */     'roles' => array(),
   /* search_api@default_node_index::type */   ),
   /* search_api@default_node_index::type */   'facet_mincount' => '1',
   /* search_api@default_node_index::type */   'facet_missing' => '0',
   /* search_api@default_node_index::type */   'flatten' => 0,
   /* search_api@default_node_index::type */   'individual_parent' => 0,
   /* search_api@default_node_index::type */   'query_type' => 'term',
   /* search_api@default_node_index::type */   'limit_active_items' => 0,
   /* search_api@default_node_index::type */   'default_true' => '1',
   /* search_api@default_node_index::type */   'facet_search_ids' => array(),
   /* search_api@default_node_index::type */   'exclude' => 0,
   /* search_api@default_node_index::type */   'pretty_paths_alias' => 'type',
   /* search_api@default_node_index::type */ );
  $export['search_api@default_node_index::type'] = $facet;

   /* search_api@default_node_index:block:author */ $facet = new stdClass();
   /* search_api@default_node_index:block:author */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:author */ $facet->api_version = 1;
   /* search_api@default_node_index:block:author */ $facet->name = 'search_api@default_node_index:block:author';
   /* search_api@default_node_index:block:author */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:author */ $facet->realm = 'block';
   /* search_api@default_node_index:block:author */ $facet->facet = 'author';
   /* search_api@default_node_index:block:author */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:author */ $facet->settings = array(
   /* search_api@default_node_index:block:author */   'weight' => 0,
   /* search_api@default_node_index:block:author */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:author */   'filters' => array(),
   /* search_api@default_node_index:block:author */   'active_sorts' => array(
   /* search_api@default_node_index:block:author */     'active' => 'active',
   /* search_api@default_node_index:block:author */     'count' => 'count',
   /* search_api@default_node_index:block:author */     'display' => 'display',
   /* search_api@default_node_index:block:author */     'indexed' => 0,
   /* search_api@default_node_index:block:author */   ),
   /* search_api@default_node_index:block:author */   'sort_weight' => array(
   /* search_api@default_node_index:block:author */     'active' => '-50',
   /* search_api@default_node_index:block:author */     'count' => '-49',
   /* search_api@default_node_index:block:author */     'display' => '-48',
   /* search_api@default_node_index:block:author */     'indexed' => '0',
   /* search_api@default_node_index:block:author */   ),
   /* search_api@default_node_index:block:author */   'sort_order' => array(
   /* search_api@default_node_index:block:author */     'active' => '3',
   /* search_api@default_node_index:block:author */     'count' => '3',
   /* search_api@default_node_index:block:author */     'display' => '4',
   /* search_api@default_node_index:block:author */     'indexed' => '4',
   /* search_api@default_node_index:block:author */   ),
   /* search_api@default_node_index:block:author */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:author */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:author */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:author */   'soft_limit' => '20',
   /* search_api@default_node_index:block:author */   'nofollow' => 1,
   /* search_api@default_node_index:block:author */   'show_expanded' => 0,
   /* search_api@default_node_index:block:author */   'empty_text' => array(
   /* search_api@default_node_index:block:author */     'value' => '',
   /* search_api@default_node_index:block:author */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:author */   ),
   /* search_api@default_node_index:block:author */ );
  $export['search_api@default_node_index:block:author'] = $facet;

   /* search_api@default_node_index:block:created */ $facet = new stdClass();
   /* search_api@default_node_index:block:created */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:created */ $facet->api_version = 1;
   /* search_api@default_node_index:block:created */ $facet->name = 'search_api@default_node_index:block:created';
   /* search_api@default_node_index:block:created */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:created */ $facet->realm = 'block';
   /* search_api@default_node_index:block:created */ $facet->facet = 'created';
   /* search_api@default_node_index:block:created */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:created */ $facet->settings = array(
   /* search_api@default_node_index:block:created */   'weight' => 0,
   /* search_api@default_node_index:block:created */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:created */   'filters' => array(),
   /* search_api@default_node_index:block:created */   'active_sorts' => array(
   /* search_api@default_node_index:block:created */     'active' => 'active',
   /* search_api@default_node_index:block:created */     'count' => 'count',
   /* search_api@default_node_index:block:created */     'display' => 'display',
   /* search_api@default_node_index:block:created */   ),
   /* search_api@default_node_index:block:created */   'sort_weight' => array(
   /* search_api@default_node_index:block:created */     'active' => -50,
   /* search_api@default_node_index:block:created */     'count' => -49,
   /* search_api@default_node_index:block:created */     'display' => -48,
   /* search_api@default_node_index:block:created */   ),
   /* search_api@default_node_index:block:created */   'sort_order' => array(
   /* search_api@default_node_index:block:created */     'active' => 3,
   /* search_api@default_node_index:block:created */     'count' => 3,
   /* search_api@default_node_index:block:created */     'display' => 4,
   /* search_api@default_node_index:block:created */   ),
   /* search_api@default_node_index:block:created */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:created */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:created */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:created */   'soft_limit' => 20,
   /* search_api@default_node_index:block:created */   'nofollow' => 1,
   /* search_api@default_node_index:block:created */   'show_expanded' => 0,
   /* search_api@default_node_index:block:created */ );
  $export['search_api@default_node_index:block:created'] = $facet;

   /* search_api@default_node_index:block:field_country */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_country */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_country */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_country */ $facet->name = 'search_api@default_node_index:block:field_country';
   /* search_api@default_node_index:block:field_country */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_country */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_country */ $facet->facet = 'field_country';
   /* search_api@default_node_index:block:field_country */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_country */ $facet->settings = array(
   /* search_api@default_node_index:block:field_country */   'weight' => 0,
   /* search_api@default_node_index:block:field_country */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:field_country */   'filters' => array(),
   /* search_api@default_node_index:block:field_country */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_country */     'active' => 'active',
   /* search_api@default_node_index:block:field_country */     'count' => 'count',
   /* search_api@default_node_index:block:field_country */     'display' => 'display',
   /* search_api@default_node_index:block:field_country */     'natural' => 0,
   /* search_api@default_node_index:block:field_country */     'indexed' => 0,
   /* search_api@default_node_index:block:field_country */   ),
   /* search_api@default_node_index:block:field_country */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_country */     'active' => '-50',
   /* search_api@default_node_index:block:field_country */     'count' => '-49',
   /* search_api@default_node_index:block:field_country */     'display' => '-48',
   /* search_api@default_node_index:block:field_country */     'natural' => '0',
   /* search_api@default_node_index:block:field_country */     'indexed' => '0',
   /* search_api@default_node_index:block:field_country */   ),
   /* search_api@default_node_index:block:field_country */   'sort_order' => array(
   /* search_api@default_node_index:block:field_country */     'active' => '3',
   /* search_api@default_node_index:block:field_country */     'count' => '3',
   /* search_api@default_node_index:block:field_country */     'display' => '4',
   /* search_api@default_node_index:block:field_country */     'natural' => '4',
   /* search_api@default_node_index:block:field_country */     'indexed' => '4',
   /* search_api@default_node_index:block:field_country */   ),
   /* search_api@default_node_index:block:field_country */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_country */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:field_country */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:field_country */   'soft_limit' => '5',
   /* search_api@default_node_index:block:field_country */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_country */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_country */   'empty_text' => array(
   /* search_api@default_node_index:block:field_country */     'value' => '',
   /* search_api@default_node_index:block:field_country */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_country */   ),
   /* search_api@default_node_index:block:field_country */   'ranges' => array(
   /* search_api@default_node_index:block:field_country */     'past_hour' => array(
   /* search_api@default_node_index:block:field_country */       'label' => 'Past hour',
   /* search_api@default_node_index:block:field_country */       'machine_name' => 'past_hour',
   /* search_api@default_node_index:block:field_country */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_country */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_country */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_country */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_country */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'weight' => '0',
   /* search_api@default_node_index:block:field_country */       'delete' => 0,
   /* search_api@default_node_index:block:field_country */     ),
   /* search_api@default_node_index:block:field_country */     'past_24_hours' => array(
   /* search_api@default_node_index:block:field_country */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:field_country */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:field_country */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_country */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:field_country */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_country */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_country */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'weight' => '1',
   /* search_api@default_node_index:block:field_country */       'delete' => 0,
   /* search_api@default_node_index:block:field_country */     ),
   /* search_api@default_node_index:block:field_country */     'past_week' => array(
   /* search_api@default_node_index:block:field_country */       'label' => 'Past week',
   /* search_api@default_node_index:block:field_country */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:field_country */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_country */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:field_country */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:field_country */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_country */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_country */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'weight' => '2',
   /* search_api@default_node_index:block:field_country */       'delete' => 0,
   /* search_api@default_node_index:block:field_country */     ),
   /* search_api@default_node_index:block:field_country */     'past_month' => array(
   /* search_api@default_node_index:block:field_country */       'label' => 'Past month',
   /* search_api@default_node_index:block:field_country */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:field_country */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_country */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_country */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:field_country */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_country */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_country */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'weight' => '3',
   /* search_api@default_node_index:block:field_country */       'delete' => 0,
   /* search_api@default_node_index:block:field_country */     ),
   /* search_api@default_node_index:block:field_country */     'past_year' => array(
   /* search_api@default_node_index:block:field_country */       'label' => 'Past year',
   /* search_api@default_node_index:block:field_country */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:field_country */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_country */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_country */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_country */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_country */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_country */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_country */       'weight' => '4',
   /* search_api@default_node_index:block:field_country */       'delete' => 0,
   /* search_api@default_node_index:block:field_country */     ),
   /* search_api@default_node_index:block:field_country */   ),
   /* search_api@default_node_index:block:field_country */   'date_ranges' => array(
   /* search_api@default_node_index:block:field_country */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:field_country */   ),
   /* search_api@default_node_index:block:field_country */ );
  $export['search_api@default_node_index:block:field_country'] = $facet;

   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->name = 'search_api@default_node_index:block:field_gn2_simple_access';
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->facet = 'field_gn2_simple_access';
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_gn2_simple_access */ $facet->settings = array(
   /* search_api@default_node_index:block:field_gn2_simple_access */   'weight' => 0,
   /* search_api@default_node_index:block:field_gn2_simple_access */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:field_gn2_simple_access */   'filters' => array(),
   /* search_api@default_node_index:block:field_gn2_simple_access */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_gn2_simple_access */     'active' => 'active',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'count' => 'count',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'display' => 'display',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'indexed' => 0,
   /* search_api@default_node_index:block:field_gn2_simple_access */   ),
   /* search_api@default_node_index:block:field_gn2_simple_access */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_gn2_simple_access */     'active' => '-50',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'count' => '-49',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'display' => '-48',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'indexed' => '0',
   /* search_api@default_node_index:block:field_gn2_simple_access */   ),
   /* search_api@default_node_index:block:field_gn2_simple_access */   'sort_order' => array(
   /* search_api@default_node_index:block:field_gn2_simple_access */     'active' => '3',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'count' => '3',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'display' => '4',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'indexed' => '4',
   /* search_api@default_node_index:block:field_gn2_simple_access */   ),
   /* search_api@default_node_index:block:field_gn2_simple_access */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_gn2_simple_access */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:field_gn2_simple_access */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:field_gn2_simple_access */   'soft_limit' => '20',
   /* search_api@default_node_index:block:field_gn2_simple_access */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_gn2_simple_access */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_gn2_simple_access */   'empty_text' => array(
   /* search_api@default_node_index:block:field_gn2_simple_access */     'value' => '',
   /* search_api@default_node_index:block:field_gn2_simple_access */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_gn2_simple_access */   ),
   /* search_api@default_node_index:block:field_gn2_simple_access */ );
  $export['search_api@default_node_index:block:field_gn2_simple_access'] = $facet;

   /* search_api@default_node_index:block:field_parent_organization */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_parent_organization */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_parent_organization */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_parent_organization */ $facet->name = 'search_api@default_node_index:block:field_parent_organization';
   /* search_api@default_node_index:block:field_parent_organization */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_parent_organization */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_parent_organization */ $facet->facet = 'field_parent_organization';
   /* search_api@default_node_index:block:field_parent_organization */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_parent_organization */ $facet->settings = array(
   /* search_api@default_node_index:block:field_parent_organization */   'weight' => 0,
   /* search_api@default_node_index:block:field_parent_organization */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:field_parent_organization */   'filters' => array(),
   /* search_api@default_node_index:block:field_parent_organization */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_parent_organization */     'active' => 'active',
   /* search_api@default_node_index:block:field_parent_organization */     'count' => 'count',
   /* search_api@default_node_index:block:field_parent_organization */     'display' => 'display',
   /* search_api@default_node_index:block:field_parent_organization */     'natural' => 0,
   /* search_api@default_node_index:block:field_parent_organization */     'indexed' => 0,
   /* search_api@default_node_index:block:field_parent_organization */   ),
   /* search_api@default_node_index:block:field_parent_organization */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_parent_organization */     'active' => '-50',
   /* search_api@default_node_index:block:field_parent_organization */     'count' => '-49',
   /* search_api@default_node_index:block:field_parent_organization */     'display' => '-48',
   /* search_api@default_node_index:block:field_parent_organization */     'natural' => '0',
   /* search_api@default_node_index:block:field_parent_organization */     'indexed' => '0',
   /* search_api@default_node_index:block:field_parent_organization */   ),
   /* search_api@default_node_index:block:field_parent_organization */   'sort_order' => array(
   /* search_api@default_node_index:block:field_parent_organization */     'active' => '3',
   /* search_api@default_node_index:block:field_parent_organization */     'count' => '3',
   /* search_api@default_node_index:block:field_parent_organization */     'display' => '4',
   /* search_api@default_node_index:block:field_parent_organization */     'natural' => '4',
   /* search_api@default_node_index:block:field_parent_organization */     'indexed' => '4',
   /* search_api@default_node_index:block:field_parent_organization */   ),
   /* search_api@default_node_index:block:field_parent_organization */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_parent_organization */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:field_parent_organization */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:field_parent_organization */   'soft_limit' => '5',
   /* search_api@default_node_index:block:field_parent_organization */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_parent_organization */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_parent_organization */   'empty_text' => array(
   /* search_api@default_node_index:block:field_parent_organization */     'value' => '',
   /* search_api@default_node_index:block:field_parent_organization */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_parent_organization */   ),
   /* search_api@default_node_index:block:field_parent_organization */   'ranges' => array(
   /* search_api@default_node_index:block:field_parent_organization */     'past_hour' => array(
   /* search_api@default_node_index:block:field_parent_organization */       'label' => 'Past hour',
   /* search_api@default_node_index:block:field_parent_organization */       'machine_name' => 'past_hour',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'weight' => '0',
   /* search_api@default_node_index:block:field_parent_organization */       'delete' => 0,
   /* search_api@default_node_index:block:field_parent_organization */     ),
   /* search_api@default_node_index:block:field_parent_organization */     'past_24_hours' => array(
   /* search_api@default_node_index:block:field_parent_organization */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:field_parent_organization */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'weight' => '1',
   /* search_api@default_node_index:block:field_parent_organization */       'delete' => 0,
   /* search_api@default_node_index:block:field_parent_organization */     ),
   /* search_api@default_node_index:block:field_parent_organization */     'past_week' => array(
   /* search_api@default_node_index:block:field_parent_organization */       'label' => 'Past week',
   /* search_api@default_node_index:block:field_parent_organization */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'weight' => '2',
   /* search_api@default_node_index:block:field_parent_organization */       'delete' => 0,
   /* search_api@default_node_index:block:field_parent_organization */     ),
   /* search_api@default_node_index:block:field_parent_organization */     'past_month' => array(
   /* search_api@default_node_index:block:field_parent_organization */       'label' => 'Past month',
   /* search_api@default_node_index:block:field_parent_organization */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'weight' => '3',
   /* search_api@default_node_index:block:field_parent_organization */       'delete' => 0,
   /* search_api@default_node_index:block:field_parent_organization */     ),
   /* search_api@default_node_index:block:field_parent_organization */     'past_year' => array(
   /* search_api@default_node_index:block:field_parent_organization */       'label' => 'Past year',
   /* search_api@default_node_index:block:field_parent_organization */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_parent_organization */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_parent_organization */       'weight' => '4',
   /* search_api@default_node_index:block:field_parent_organization */       'delete' => 0,
   /* search_api@default_node_index:block:field_parent_organization */     ),
   /* search_api@default_node_index:block:field_parent_organization */   ),
   /* search_api@default_node_index:block:field_parent_organization */   'date_ranges' => array(
   /* search_api@default_node_index:block:field_parent_organization */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:field_parent_organization */   ),
   /* search_api@default_node_index:block:field_parent_organization */ );
  $export['search_api@default_node_index:block:field_parent_organization'] = $facet;

   /* search_api@default_node_index:block:field_region */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_region */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_region */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_region */ $facet->name = 'search_api@default_node_index:block:field_region';
   /* search_api@default_node_index:block:field_region */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_region */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_region */ $facet->facet = 'field_region';
   /* search_api@default_node_index:block:field_region */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_region */ $facet->settings = array(
   /* search_api@default_node_index:block:field_region */   'weight' => 0,
   /* search_api@default_node_index:block:field_region */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:field_region */   'filters' => array(),
   /* search_api@default_node_index:block:field_region */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_region */     'active' => 'active',
   /* search_api@default_node_index:block:field_region */     'count' => 'count',
   /* search_api@default_node_index:block:field_region */     'display' => 'display',
   /* search_api@default_node_index:block:field_region */     'indexed' => 0,
   /* search_api@default_node_index:block:field_region */   ),
   /* search_api@default_node_index:block:field_region */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_region */     'active' => '-50',
   /* search_api@default_node_index:block:field_region */     'count' => '-49',
   /* search_api@default_node_index:block:field_region */     'display' => '-48',
   /* search_api@default_node_index:block:field_region */     'indexed' => '0',
   /* search_api@default_node_index:block:field_region */   ),
   /* search_api@default_node_index:block:field_region */   'sort_order' => array(
   /* search_api@default_node_index:block:field_region */     'active' => '3',
   /* search_api@default_node_index:block:field_region */     'count' => '3',
   /* search_api@default_node_index:block:field_region */     'display' => '4',
   /* search_api@default_node_index:block:field_region */     'indexed' => '4',
   /* search_api@default_node_index:block:field_region */   ),
   /* search_api@default_node_index:block:field_region */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_region */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:field_region */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:field_region */   'soft_limit' => '5',
   /* search_api@default_node_index:block:field_region */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_region */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_region */   'empty_text' => array(
   /* search_api@default_node_index:block:field_region */     'value' => '',
   /* search_api@default_node_index:block:field_region */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_region */   ),
   /* search_api@default_node_index:block:field_region */ );
  $export['search_api@default_node_index:block:field_region'] = $facet;

   /* search_api@default_node_index:block:field_subtitle */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_subtitle */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_subtitle */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_subtitle */ $facet->name = 'search_api@default_node_index:block:field_subtitle';
   /* search_api@default_node_index:block:field_subtitle */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_subtitle */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_subtitle */ $facet->facet = 'field_subtitle';
   /* search_api@default_node_index:block:field_subtitle */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:field_subtitle */ $facet->settings = array(
   /* search_api@default_node_index:block:field_subtitle */   'weight' => 0,
   /* search_api@default_node_index:block:field_subtitle */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:field_subtitle */   'filters' => array(),
   /* search_api@default_node_index:block:field_subtitle */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_subtitle */     'active' => 'active',
   /* search_api@default_node_index:block:field_subtitle */     'count' => 'count',
   /* search_api@default_node_index:block:field_subtitle */     'display' => 'display',
   /* search_api@default_node_index:block:field_subtitle */   ),
   /* search_api@default_node_index:block:field_subtitle */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_subtitle */     'active' => -50,
   /* search_api@default_node_index:block:field_subtitle */     'count' => -49,
   /* search_api@default_node_index:block:field_subtitle */     'display' => -48,
   /* search_api@default_node_index:block:field_subtitle */   ),
   /* search_api@default_node_index:block:field_subtitle */   'sort_order' => array(
   /* search_api@default_node_index:block:field_subtitle */     'active' => 3,
   /* search_api@default_node_index:block:field_subtitle */     'count' => 3,
   /* search_api@default_node_index:block:field_subtitle */     'display' => 4,
   /* search_api@default_node_index:block:field_subtitle */   ),
   /* search_api@default_node_index:block:field_subtitle */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_subtitle */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:field_subtitle */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:field_subtitle */   'soft_limit' => 20,
   /* search_api@default_node_index:block:field_subtitle */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_subtitle */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_subtitle */ );
  $export['search_api@default_node_index:block:field_subtitle'] = $facet;

   /* search_api@default_node_index:block:field_topic */ $facet = new stdClass();
   /* search_api@default_node_index:block:field_topic */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:field_topic */ $facet->api_version = 1;
   /* search_api@default_node_index:block:field_topic */ $facet->name = 'search_api@default_node_index:block:field_topic';
   /* search_api@default_node_index:block:field_topic */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:field_topic */ $facet->realm = 'block';
   /* search_api@default_node_index:block:field_topic */ $facet->facet = 'field_topic';
   /* search_api@default_node_index:block:field_topic */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:field_topic */ $facet->settings = array(
   /* search_api@default_node_index:block:field_topic */   'weight' => 0,
   /* search_api@default_node_index:block:field_topic */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:field_topic */   'filters' => array(),
   /* search_api@default_node_index:block:field_topic */   'active_sorts' => array(
   /* search_api@default_node_index:block:field_topic */     'active' => 'active',
   /* search_api@default_node_index:block:field_topic */     'count' => 'count',
   /* search_api@default_node_index:block:field_topic */     'display' => 'display',
   /* search_api@default_node_index:block:field_topic */     'natural' => 0,
   /* search_api@default_node_index:block:field_topic */     'indexed' => 0,
   /* search_api@default_node_index:block:field_topic */   ),
   /* search_api@default_node_index:block:field_topic */   'sort_weight' => array(
   /* search_api@default_node_index:block:field_topic */     'active' => '-50',
   /* search_api@default_node_index:block:field_topic */     'count' => '-49',
   /* search_api@default_node_index:block:field_topic */     'display' => '-48',
   /* search_api@default_node_index:block:field_topic */     'natural' => '0',
   /* search_api@default_node_index:block:field_topic */     'indexed' => '0',
   /* search_api@default_node_index:block:field_topic */   ),
   /* search_api@default_node_index:block:field_topic */   'sort_order' => array(
   /* search_api@default_node_index:block:field_topic */     'active' => '3',
   /* search_api@default_node_index:block:field_topic */     'count' => '3',
   /* search_api@default_node_index:block:field_topic */     'display' => '4',
   /* search_api@default_node_index:block:field_topic */     'natural' => '4',
   /* search_api@default_node_index:block:field_topic */     'indexed' => '4',
   /* search_api@default_node_index:block:field_topic */   ),
   /* search_api@default_node_index:block:field_topic */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:field_topic */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:field_topic */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:field_topic */   'soft_limit' => '5',
   /* search_api@default_node_index:block:field_topic */   'nofollow' => 1,
   /* search_api@default_node_index:block:field_topic */   'show_expanded' => 0,
   /* search_api@default_node_index:block:field_topic */   'empty_text' => array(
   /* search_api@default_node_index:block:field_topic */     'value' => '',
   /* search_api@default_node_index:block:field_topic */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:field_topic */   ),
   /* search_api@default_node_index:block:field_topic */   'ranges' => array(
   /* search_api@default_node_index:block:field_topic */     'past_hour' => array(
   /* search_api@default_node_index:block:field_topic */       'label' => 'Past hour',
   /* search_api@default_node_index:block:field_topic */       'machine_name' => 'past_hour',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'weight' => '0',
   /* search_api@default_node_index:block:field_topic */       'delete' => 0,
   /* search_api@default_node_index:block:field_topic */     ),
   /* search_api@default_node_index:block:field_topic */     'past_24_hours' => array(
   /* search_api@default_node_index:block:field_topic */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:field_topic */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'weight' => '1',
   /* search_api@default_node_index:block:field_topic */       'delete' => 0,
   /* search_api@default_node_index:block:field_topic */     ),
   /* search_api@default_node_index:block:field_topic */     'past_week' => array(
   /* search_api@default_node_index:block:field_topic */       'label' => 'Past week',
   /* search_api@default_node_index:block:field_topic */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'weight' => '2',
   /* search_api@default_node_index:block:field_topic */       'delete' => 0,
   /* search_api@default_node_index:block:field_topic */     ),
   /* search_api@default_node_index:block:field_topic */     'past_month' => array(
   /* search_api@default_node_index:block:field_topic */       'label' => 'Past month',
   /* search_api@default_node_index:block:field_topic */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'weight' => '3',
   /* search_api@default_node_index:block:field_topic */       'delete' => 0,
   /* search_api@default_node_index:block:field_topic */     ),
   /* search_api@default_node_index:block:field_topic */     'past_year' => array(
   /* search_api@default_node_index:block:field_topic */       'label' => 'Past year',
   /* search_api@default_node_index:block:field_topic */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:field_topic */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:field_topic */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:field_topic */       'weight' => '4',
   /* search_api@default_node_index:block:field_topic */       'delete' => 0,
   /* search_api@default_node_index:block:field_topic */     ),
   /* search_api@default_node_index:block:field_topic */   ),
   /* search_api@default_node_index:block:field_topic */   'date_ranges' => array(
   /* search_api@default_node_index:block:field_topic */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:field_topic */   ),
   /* search_api@default_node_index:block:field_topic */ );
  $export['search_api@default_node_index:block:field_topic'] = $facet;

   /* search_api@default_node_index:block:group_group */ $facet = new stdClass();
   /* search_api@default_node_index:block:group_group */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:group_group */ $facet->api_version = 1;
   /* search_api@default_node_index:block:group_group */ $facet->name = 'search_api@default_node_index:block:group_group';
   /* search_api@default_node_index:block:group_group */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:group_group */ $facet->realm = 'block';
   /* search_api@default_node_index:block:group_group */ $facet->facet = 'group_group';
   /* search_api@default_node_index:block:group_group */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:group_group */ $facet->settings = array(
   /* search_api@default_node_index:block:group_group */   'weight' => 0,
   /* search_api@default_node_index:block:group_group */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:group_group */   'filters' => array(),
   /* search_api@default_node_index:block:group_group */   'active_sorts' => array(
   /* search_api@default_node_index:block:group_group */     'active' => 'active',
   /* search_api@default_node_index:block:group_group */     'count' => 'count',
   /* search_api@default_node_index:block:group_group */     'display' => 'display',
   /* search_api@default_node_index:block:group_group */     'natural' => 0,
   /* search_api@default_node_index:block:group_group */     'indexed' => 0,
   /* search_api@default_node_index:block:group_group */   ),
   /* search_api@default_node_index:block:group_group */   'sort_weight' => array(
   /* search_api@default_node_index:block:group_group */     'active' => '-50',
   /* search_api@default_node_index:block:group_group */     'count' => '-49',
   /* search_api@default_node_index:block:group_group */     'display' => '-48',
   /* search_api@default_node_index:block:group_group */     'natural' => '0',
   /* search_api@default_node_index:block:group_group */     'indexed' => '0',
   /* search_api@default_node_index:block:group_group */   ),
   /* search_api@default_node_index:block:group_group */   'sort_order' => array(
   /* search_api@default_node_index:block:group_group */     'active' => '3',
   /* search_api@default_node_index:block:group_group */     'count' => '3',
   /* search_api@default_node_index:block:group_group */     'display' => '4',
   /* search_api@default_node_index:block:group_group */     'natural' => '4',
   /* search_api@default_node_index:block:group_group */     'indexed' => '4',
   /* search_api@default_node_index:block:group_group */   ),
   /* search_api@default_node_index:block:group_group */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:group_group */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:group_group */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:group_group */   'soft_limit' => '5',
   /* search_api@default_node_index:block:group_group */   'nofollow' => 1,
   /* search_api@default_node_index:block:group_group */   'show_expanded' => 0,
   /* search_api@default_node_index:block:group_group */   'empty_text' => array(
   /* search_api@default_node_index:block:group_group */     'value' => '',
   /* search_api@default_node_index:block:group_group */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:group_group */   ),
   /* search_api@default_node_index:block:group_group */   'ranges' => array(
   /* search_api@default_node_index:block:group_group */     'past_hour' => array(
   /* search_api@default_node_index:block:group_group */       'label' => 'Past hour',
   /* search_api@default_node_index:block:group_group */       'machine_name' => 'past_hour',
   /* search_api@default_node_index:block:group_group */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:group_group */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:group_group */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:group_group */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:group_group */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'weight' => '0',
   /* search_api@default_node_index:block:group_group */       'delete' => 0,
   /* search_api@default_node_index:block:group_group */     ),
   /* search_api@default_node_index:block:group_group */     'past_24_hours' => array(
   /* search_api@default_node_index:block:group_group */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:group_group */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:group_group */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:group_group */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:group_group */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:group_group */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:group_group */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'weight' => '1',
   /* search_api@default_node_index:block:group_group */       'delete' => 0,
   /* search_api@default_node_index:block:group_group */     ),
   /* search_api@default_node_index:block:group_group */     'past_week' => array(
   /* search_api@default_node_index:block:group_group */       'label' => 'Past week',
   /* search_api@default_node_index:block:group_group */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:group_group */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:group_group */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:group_group */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:group_group */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:group_group */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:group_group */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'weight' => '2',
   /* search_api@default_node_index:block:group_group */       'delete' => 0,
   /* search_api@default_node_index:block:group_group */     ),
   /* search_api@default_node_index:block:group_group */     'past_month' => array(
   /* search_api@default_node_index:block:group_group */       'label' => 'Past month',
   /* search_api@default_node_index:block:group_group */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:group_group */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:group_group */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:group_group */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:group_group */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:group_group */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:group_group */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'weight' => '3',
   /* search_api@default_node_index:block:group_group */       'delete' => 0,
   /* search_api@default_node_index:block:group_group */     ),
   /* search_api@default_node_index:block:group_group */     'past_year' => array(
   /* search_api@default_node_index:block:group_group */       'label' => 'Past year',
   /* search_api@default_node_index:block:group_group */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:group_group */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:group_group */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:group_group */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:group_group */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:group_group */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:group_group */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:group_group */       'weight' => '4',
   /* search_api@default_node_index:block:group_group */       'delete' => 0,
   /* search_api@default_node_index:block:group_group */     ),
   /* search_api@default_node_index:block:group_group */   ),
   /* search_api@default_node_index:block:group_group */   'date_ranges' => array(
   /* search_api@default_node_index:block:group_group */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:group_group */   ),
   /* search_api@default_node_index:block:group_group */ );
  $export['search_api@default_node_index:block:group_group'] = $facet;

   /* search_api@default_node_index:block:members */ $facet = new stdClass();
   /* search_api@default_node_index:block:members */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:members */ $facet->api_version = 1;
   /* search_api@default_node_index:block:members */ $facet->name = 'search_api@default_node_index:block:members';
   /* search_api@default_node_index:block:members */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:members */ $facet->realm = 'block';
   /* search_api@default_node_index:block:members */ $facet->facet = 'members';
   /* search_api@default_node_index:block:members */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:members */ $facet->settings = array(
   /* search_api@default_node_index:block:members */   'weight' => 0,
   /* search_api@default_node_index:block:members */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:members */   'filters' => array(),
   /* search_api@default_node_index:block:members */   'active_sorts' => array(
   /* search_api@default_node_index:block:members */     'active' => 'active',
   /* search_api@default_node_index:block:members */     'count' => 'count',
   /* search_api@default_node_index:block:members */     'display' => 'display',
   /* search_api@default_node_index:block:members */   ),
   /* search_api@default_node_index:block:members */   'sort_weight' => array(
   /* search_api@default_node_index:block:members */     'active' => -50,
   /* search_api@default_node_index:block:members */     'count' => -49,
   /* search_api@default_node_index:block:members */     'display' => -48,
   /* search_api@default_node_index:block:members */   ),
   /* search_api@default_node_index:block:members */   'sort_order' => array(
   /* search_api@default_node_index:block:members */     'active' => 3,
   /* search_api@default_node_index:block:members */     'count' => 3,
   /* search_api@default_node_index:block:members */     'display' => 4,
   /* search_api@default_node_index:block:members */   ),
   /* search_api@default_node_index:block:members */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:members */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:members */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:members */   'soft_limit' => 20,
   /* search_api@default_node_index:block:members */   'nofollow' => 1,
   /* search_api@default_node_index:block:members */   'show_expanded' => 0,
   /* search_api@default_node_index:block:members */ );
  $export['search_api@default_node_index:block:members'] = $facet;

   /* search_api@default_node_index:block:members__1 */ $facet = new stdClass();
   /* search_api@default_node_index:block:members__1 */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:members__1 */ $facet->api_version = 1;
   /* search_api@default_node_index:block:members__1 */ $facet->name = 'search_api@default_node_index:block:members__1';
   /* search_api@default_node_index:block:members__1 */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:members__1 */ $facet->realm = 'block';
   /* search_api@default_node_index:block:members__1 */ $facet->facet = 'members__1';
   /* search_api@default_node_index:block:members__1 */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:members__1 */ $facet->settings = array(
   /* search_api@default_node_index:block:members__1 */   'weight' => 0,
   /* search_api@default_node_index:block:members__1 */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:members__1 */   'filters' => array(),
   /* search_api@default_node_index:block:members__1 */   'active_sorts' => array(
   /* search_api@default_node_index:block:members__1 */     'active' => 'active',
   /* search_api@default_node_index:block:members__1 */     'count' => 'count',
   /* search_api@default_node_index:block:members__1 */     'display' => 'display',
   /* search_api@default_node_index:block:members__1 */   ),
   /* search_api@default_node_index:block:members__1 */   'sort_weight' => array(
   /* search_api@default_node_index:block:members__1 */     'active' => -50,
   /* search_api@default_node_index:block:members__1 */     'count' => -49,
   /* search_api@default_node_index:block:members__1 */     'display' => -48,
   /* search_api@default_node_index:block:members__1 */   ),
   /* search_api@default_node_index:block:members__1 */   'sort_order' => array(
   /* search_api@default_node_index:block:members__1 */     'active' => 3,
   /* search_api@default_node_index:block:members__1 */     'count' => 3,
   /* search_api@default_node_index:block:members__1 */     'display' => 4,
   /* search_api@default_node_index:block:members__1 */   ),
   /* search_api@default_node_index:block:members__1 */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:members__1 */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:members__1 */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:members__1 */   'soft_limit' => 20,
   /* search_api@default_node_index:block:members__1 */   'nofollow' => 1,
   /* search_api@default_node_index:block:members__1 */   'show_expanded' => 0,
   /* search_api@default_node_index:block:members__1 */ );
  $export['search_api@default_node_index:block:members__1'] = $facet;

   /* search_api@default_node_index:block:og_group_ref */ $facet = new stdClass();
   /* search_api@default_node_index:block:og_group_ref */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:og_group_ref */ $facet->api_version = 1;
   /* search_api@default_node_index:block:og_group_ref */ $facet->name = 'search_api@default_node_index:block:og_group_ref';
   /* search_api@default_node_index:block:og_group_ref */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:og_group_ref */ $facet->realm = 'block';
   /* search_api@default_node_index:block:og_group_ref */ $facet->facet = 'og_group_ref';
   /* search_api@default_node_index:block:og_group_ref */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:og_group_ref */ $facet->settings = array(
   /* search_api@default_node_index:block:og_group_ref */   'weight' => 0,
   /* search_api@default_node_index:block:og_group_ref */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:og_group_ref */   'filters' => array(
   /* search_api@default_node_index:block:og_group_ref */     'active_items' => array(
   /* search_api@default_node_index:block:og_group_ref */       'status' => 0,
   /* search_api@default_node_index:block:og_group_ref */       'weight' => '-50',
   /* search_api@default_node_index:block:og_group_ref */     ),
   /* search_api@default_node_index:block:og_group_ref */   ),
   /* search_api@default_node_index:block:og_group_ref */   'active_sorts' => array(
   /* search_api@default_node_index:block:og_group_ref */     'active' => 'active',
   /* search_api@default_node_index:block:og_group_ref */     'count' => 'count',
   /* search_api@default_node_index:block:og_group_ref */     'display' => 'display',
   /* search_api@default_node_index:block:og_group_ref */     'indexed' => 0,
   /* search_api@default_node_index:block:og_group_ref */   ),
   /* search_api@default_node_index:block:og_group_ref */   'sort_weight' => array(
   /* search_api@default_node_index:block:og_group_ref */     'active' => '-50',
   /* search_api@default_node_index:block:og_group_ref */     'count' => '-49',
   /* search_api@default_node_index:block:og_group_ref */     'display' => '-48',
   /* search_api@default_node_index:block:og_group_ref */     'indexed' => '0',
   /* search_api@default_node_index:block:og_group_ref */   ),
   /* search_api@default_node_index:block:og_group_ref */   'sort_order' => array(
   /* search_api@default_node_index:block:og_group_ref */     'active' => '3',
   /* search_api@default_node_index:block:og_group_ref */     'count' => '3',
   /* search_api@default_node_index:block:og_group_ref */     'display' => '4',
   /* search_api@default_node_index:block:og_group_ref */     'indexed' => '4',
   /* search_api@default_node_index:block:og_group_ref */   ),
   /* search_api@default_node_index:block:og_group_ref */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:og_group_ref */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:og_group_ref */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:og_group_ref */   'soft_limit' => '5',
   /* search_api@default_node_index:block:og_group_ref */   'nofollow' => 1,
   /* search_api@default_node_index:block:og_group_ref */   'show_expanded' => 0,
   /* search_api@default_node_index:block:og_group_ref */   'empty_text' => array(
   /* search_api@default_node_index:block:og_group_ref */     'value' => '',
   /* search_api@default_node_index:block:og_group_ref */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:og_group_ref */   ),
   /* search_api@default_node_index:block:og_group_ref */ );
  $export['search_api@default_node_index:block:og_group_ref'] = $facet;

   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet = new stdClass();
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->api_version = 1;
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->name = 'search_api@default_node_index:block:og_group_ref:field_org_short_title';
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->realm = 'block';
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->facet = 'og_group_ref:field_org_short_title';
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ $facet->settings = array(
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'weight' => 0,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'filters' => array(),
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'active_sorts' => array(
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'active' => 'active',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'count' => 'count',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'display' => 'display',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   ),
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'sort_weight' => array(
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'active' => -50,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'count' => -49,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'display' => -48,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   ),
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'sort_order' => array(
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'active' => 3,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'count' => 3,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */     'display' => 4,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   ),
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'soft_limit' => 20,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'nofollow' => 1,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */   'show_expanded' => 0,
   /* search_api@default_node_index:block:og_group_ref:field_org_short_title */ );
  $export['search_api@default_node_index:block:og_group_ref:field_org_short_title'] = $facet;

   /* search_api@default_node_index:block:search_api_language */ $facet = new stdClass();
   /* search_api@default_node_index:block:search_api_language */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:search_api_language */ $facet->api_version = 1;
   /* search_api@default_node_index:block:search_api_language */ $facet->name = 'search_api@default_node_index:block:search_api_language';
   /* search_api@default_node_index:block:search_api_language */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:search_api_language */ $facet->realm = 'block';
   /* search_api@default_node_index:block:search_api_language */ $facet->facet = 'search_api_language';
   /* search_api@default_node_index:block:search_api_language */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:search_api_language */ $facet->settings = array(
   /* search_api@default_node_index:block:search_api_language */   'weight' => 0,
   /* search_api@default_node_index:block:search_api_language */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:search_api_language */   'filters' => array(),
   /* search_api@default_node_index:block:search_api_language */   'active_sorts' => array(
   /* search_api@default_node_index:block:search_api_language */     'active' => 'active',
   /* search_api@default_node_index:block:search_api_language */     'count' => 'count',
   /* search_api@default_node_index:block:search_api_language */     'display' => 'display',
   /* search_api@default_node_index:block:search_api_language */     'natural' => 0,
   /* search_api@default_node_index:block:search_api_language */     'indexed' => 0,
   /* search_api@default_node_index:block:search_api_language */   ),
   /* search_api@default_node_index:block:search_api_language */   'sort_weight' => array(
   /* search_api@default_node_index:block:search_api_language */     'active' => '-50',
   /* search_api@default_node_index:block:search_api_language */     'count' => '-49',
   /* search_api@default_node_index:block:search_api_language */     'display' => '-48',
   /* search_api@default_node_index:block:search_api_language */     'natural' => '0',
   /* search_api@default_node_index:block:search_api_language */     'indexed' => '0',
   /* search_api@default_node_index:block:search_api_language */   ),
   /* search_api@default_node_index:block:search_api_language */   'sort_order' => array(
   /* search_api@default_node_index:block:search_api_language */     'active' => '3',
   /* search_api@default_node_index:block:search_api_language */     'count' => '3',
   /* search_api@default_node_index:block:search_api_language */     'display' => '4',
   /* search_api@default_node_index:block:search_api_language */     'natural' => '4',
   /* search_api@default_node_index:block:search_api_language */     'indexed' => '4',
   /* search_api@default_node_index:block:search_api_language */   ),
   /* search_api@default_node_index:block:search_api_language */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:search_api_language */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:search_api_language */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:search_api_language */   'soft_limit' => '5',
   /* search_api@default_node_index:block:search_api_language */   'nofollow' => 1,
   /* search_api@default_node_index:block:search_api_language */   'show_expanded' => 0,
   /* search_api@default_node_index:block:search_api_language */   'empty_text' => array(
   /* search_api@default_node_index:block:search_api_language */     'value' => '',
   /* search_api@default_node_index:block:search_api_language */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:search_api_language */   ),
   /* search_api@default_node_index:block:search_api_language */   'ranges' => array(
   /* search_api@default_node_index:block:search_api_language */     'past_hour' => array(
   /* search_api@default_node_index:block:search_api_language */       'label' => 'Past hour',
   /* search_api@default_node_index:block:search_api_language */       'machine_name' => 'past_hour',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'weight' => '0',
   /* search_api@default_node_index:block:search_api_language */       'delete' => 0,
   /* search_api@default_node_index:block:search_api_language */     ),
   /* search_api@default_node_index:block:search_api_language */     'past_24_hours' => array(
   /* search_api@default_node_index:block:search_api_language */       'label' => 'Past 24 hours',
   /* search_api@default_node_index:block:search_api_language */       'machine_name' => 'past_24_hours',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_amount' => '24',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'weight' => '1',
   /* search_api@default_node_index:block:search_api_language */       'delete' => 0,
   /* search_api@default_node_index:block:search_api_language */     ),
   /* search_api@default_node_index:block:search_api_language */     'past_week' => array(
   /* search_api@default_node_index:block:search_api_language */       'label' => 'Past week',
   /* search_api@default_node_index:block:search_api_language */       'machine_name' => 'past_week',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_amount' => '7',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_unit' => 'DAY',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'weight' => '2',
   /* search_api@default_node_index:block:search_api_language */       'delete' => 0,
   /* search_api@default_node_index:block:search_api_language */     ),
   /* search_api@default_node_index:block:search_api_language */     'past_month' => array(
   /* search_api@default_node_index:block:search_api_language */       'label' => 'Past month',
   /* search_api@default_node_index:block:search_api_language */       'machine_name' => 'past_month',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_unit' => 'MONTH',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'weight' => '3',
   /* search_api@default_node_index:block:search_api_language */       'delete' => 0,
   /* search_api@default_node_index:block:search_api_language */     ),
   /* search_api@default_node_index:block:search_api_language */     'past_year' => array(
   /* search_api@default_node_index:block:search_api_language */       'label' => 'Past year',
   /* search_api@default_node_index:block:search_api_language */       'machine_name' => 'past_year',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_op' => '-',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_amount' => '1',
   /* search_api@default_node_index:block:search_api_language */       'date_range_start_unit' => 'YEAR',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_op' => 'NOW',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_amount' => '',
   /* search_api@default_node_index:block:search_api_language */       'date_range_end_unit' => 'HOUR',
   /* search_api@default_node_index:block:search_api_language */       'weight' => '4',
   /* search_api@default_node_index:block:search_api_language */       'delete' => 0,
   /* search_api@default_node_index:block:search_api_language */     ),
   /* search_api@default_node_index:block:search_api_language */   ),
   /* search_api@default_node_index:block:search_api_language */   'date_ranges' => array(
   /* search_api@default_node_index:block:search_api_language */     'add_range' => 'Add a new date range',
   /* search_api@default_node_index:block:search_api_language */   ),
   /* search_api@default_node_index:block:search_api_language */ );
  $export['search_api@default_node_index:block:search_api_language'] = $facet;

   /* search_api@default_node_index:block:status */ $facet = new stdClass();
   /* search_api@default_node_index:block:status */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:status */ $facet->api_version = 1;
   /* search_api@default_node_index:block:status */ $facet->name = 'search_api@default_node_index:block:status';
   /* search_api@default_node_index:block:status */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:status */ $facet->realm = 'block';
   /* search_api@default_node_index:block:status */ $facet->facet = 'status';
   /* search_api@default_node_index:block:status */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:status */ $facet->settings = array(
   /* search_api@default_node_index:block:status */   'weight' => 0,
   /* search_api@default_node_index:block:status */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:status */   'filters' => array(),
   /* search_api@default_node_index:block:status */   'active_sorts' => array(
   /* search_api@default_node_index:block:status */     'active' => 'active',
   /* search_api@default_node_index:block:status */     'count' => 'count',
   /* search_api@default_node_index:block:status */     'display' => 'display',
   /* search_api@default_node_index:block:status */   ),
   /* search_api@default_node_index:block:status */   'sort_weight' => array(
   /* search_api@default_node_index:block:status */     'active' => -50,
   /* search_api@default_node_index:block:status */     'count' => -49,
   /* search_api@default_node_index:block:status */     'display' => -48,
   /* search_api@default_node_index:block:status */   ),
   /* search_api@default_node_index:block:status */   'sort_order' => array(
   /* search_api@default_node_index:block:status */     'active' => 3,
   /* search_api@default_node_index:block:status */     'count' => 3,
   /* search_api@default_node_index:block:status */     'display' => 4,
   /* search_api@default_node_index:block:status */   ),
   /* search_api@default_node_index:block:status */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:status */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:status */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:status */   'soft_limit' => 20,
   /* search_api@default_node_index:block:status */   'nofollow' => 1,
   /* search_api@default_node_index:block:status */   'show_expanded' => 0,
   /* search_api@default_node_index:block:status */ );
  $export['search_api@default_node_index:block:status'] = $facet;

   /* search_api@default_node_index:block:title */ $facet = new stdClass();
   /* search_api@default_node_index:block:title */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:title */ $facet->api_version = 1;
   /* search_api@default_node_index:block:title */ $facet->name = 'search_api@default_node_index:block:title';
   /* search_api@default_node_index:block:title */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:title */ $facet->realm = 'block';
   /* search_api@default_node_index:block:title */ $facet->facet = 'title';
   /* search_api@default_node_index:block:title */ $facet->enabled = FALSE;
   /* search_api@default_node_index:block:title */ $facet->settings = array(
   /* search_api@default_node_index:block:title */   'weight' => 0,
   /* search_api@default_node_index:block:title */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:title */   'filters' => array(),
   /* search_api@default_node_index:block:title */   'active_sorts' => array(
   /* search_api@default_node_index:block:title */     'active' => 'active',
   /* search_api@default_node_index:block:title */     'count' => 'count',
   /* search_api@default_node_index:block:title */     'display' => 'display',
   /* search_api@default_node_index:block:title */   ),
   /* search_api@default_node_index:block:title */   'sort_weight' => array(
   /* search_api@default_node_index:block:title */     'active' => -50,
   /* search_api@default_node_index:block:title */     'count' => -49,
   /* search_api@default_node_index:block:title */     'display' => -48,
   /* search_api@default_node_index:block:title */   ),
   /* search_api@default_node_index:block:title */   'sort_order' => array(
   /* search_api@default_node_index:block:title */     'active' => 3,
   /* search_api@default_node_index:block:title */     'count' => 3,
   /* search_api@default_node_index:block:title */     'display' => 4,
   /* search_api@default_node_index:block:title */   ),
   /* search_api@default_node_index:block:title */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:title */   'facet_more_text' => 'Show more',
   /* search_api@default_node_index:block:title */   'facet_fewer_text' => 'Show fewer',
   /* search_api@default_node_index:block:title */   'soft_limit' => 20,
   /* search_api@default_node_index:block:title */   'nofollow' => 1,
   /* search_api@default_node_index:block:title */   'show_expanded' => 0,
   /* search_api@default_node_index:block:title */ );
  $export['search_api@default_node_index:block:title'] = $facet;

   /* search_api@default_node_index:block:type */ $facet = new stdClass();
   /* search_api@default_node_index:block:type */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@default_node_index:block:type */ $facet->api_version = 1;
   /* search_api@default_node_index:block:type */ $facet->name = 'search_api@default_node_index:block:type';
   /* search_api@default_node_index:block:type */ $facet->searcher = 'search_api@default_node_index';
   /* search_api@default_node_index:block:type */ $facet->realm = 'block';
   /* search_api@default_node_index:block:type */ $facet->facet = 'type';
   /* search_api@default_node_index:block:type */ $facet->enabled = TRUE;
   /* search_api@default_node_index:block:type */ $facet->settings = array(
   /* search_api@default_node_index:block:type */   'weight' => 0,
   /* search_api@default_node_index:block:type */   'widget' => 'facetapi_links',
   /* search_api@default_node_index:block:type */   'filters' => array(),
   /* search_api@default_node_index:block:type */   'active_sorts' => array(
   /* search_api@default_node_index:block:type */     'active' => 'active',
   /* search_api@default_node_index:block:type */     'count' => 'count',
   /* search_api@default_node_index:block:type */     'display' => 'display',
   /* search_api@default_node_index:block:type */     'indexed' => 0,
   /* search_api@default_node_index:block:type */   ),
   /* search_api@default_node_index:block:type */   'sort_weight' => array(
   /* search_api@default_node_index:block:type */     'active' => '-50',
   /* search_api@default_node_index:block:type */     'count' => '-49',
   /* search_api@default_node_index:block:type */     'display' => '-48',
   /* search_api@default_node_index:block:type */     'indexed' => '0',
   /* search_api@default_node_index:block:type */   ),
   /* search_api@default_node_index:block:type */   'sort_order' => array(
   /* search_api@default_node_index:block:type */     'active' => '3',
   /* search_api@default_node_index:block:type */     'count' => '3',
   /* search_api@default_node_index:block:type */     'display' => '4',
   /* search_api@default_node_index:block:type */     'indexed' => '4',
   /* search_api@default_node_index:block:type */   ),
   /* search_api@default_node_index:block:type */   'empty_behavior' => 'none',
   /* search_api@default_node_index:block:type */   'facet_more_text' => 'Show more +',
   /* search_api@default_node_index:block:type */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@default_node_index:block:type */   'soft_limit' => '5',
   /* search_api@default_node_index:block:type */   'nofollow' => 1,
   /* search_api@default_node_index:block:type */   'show_expanded' => 0,
   /* search_api@default_node_index:block:type */   'empty_text' => array(
   /* search_api@default_node_index:block:type */     'value' => '',
   /* search_api@default_node_index:block:type */     'format' => 'filtered_html',
   /* search_api@default_node_index:block:type */   ),
   /* search_api@default_node_index:block:type */ );
  $export['search_api@default_node_index:block:type'] = $facet;

   /* search_api@user_profile::og_user_node */ $facet = new stdClass();
   /* search_api@user_profile::og_user_node */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile::og_user_node */ $facet->api_version = 1;
   /* search_api@user_profile::og_user_node */ $facet->name = 'search_api@user_profile::og_user_node';
   /* search_api@user_profile::og_user_node */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile::og_user_node */ $facet->realm = '';
   /* search_api@user_profile::og_user_node */ $facet->facet = 'og_user_node';
   /* search_api@user_profile::og_user_node */ $facet->enabled = FALSE;
   /* search_api@user_profile::og_user_node */ $facet->settings = array(
   /* search_api@user_profile::og_user_node */   'operator' => 'and',
   /* search_api@user_profile::og_user_node */   'hard_limit' => '20',
   /* search_api@user_profile::og_user_node */   'dependencies' => array(
   /* search_api@user_profile::og_user_node */     'roles' => array(),
   /* search_api@user_profile::og_user_node */   ),
   /* search_api@user_profile::og_user_node */   'facet_mincount' => '1',
   /* search_api@user_profile::og_user_node */   'facet_missing' => '0',
   /* search_api@user_profile::og_user_node */   'flatten' => 0,
   /* search_api@user_profile::og_user_node */   'individual_parent' => 0,
   /* search_api@user_profile::og_user_node */   'query_type' => 'term',
   /* search_api@user_profile::og_user_node */   'limit_active_items' => 1,
   /* search_api@user_profile::og_user_node */   'default_true' => '1',
   /* search_api@user_profile::og_user_node */   'facet_search_ids' => array(),
   /* search_api@user_profile::og_user_node */   'exclude' => 0,
   /* search_api@user_profile::og_user_node */   'pretty_paths_alias' => 'og_user_node',
   /* search_api@user_profile::og_user_node */ );
  $export['search_api@user_profile::og_user_node'] = $facet;

   /* search_api@user_profile:block:created */ $facet = new stdClass();
   /* search_api@user_profile:block:created */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:created */ $facet->api_version = 1;
   /* search_api@user_profile:block:created */ $facet->name = 'search_api@user_profile:block:created';
   /* search_api@user_profile:block:created */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:created */ $facet->realm = 'block';
   /* search_api@user_profile:block:created */ $facet->facet = 'created';
   /* search_api@user_profile:block:created */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:created */ $facet->settings = array(
   /* search_api@user_profile:block:created */   'weight' => 0,
   /* search_api@user_profile:block:created */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:created */   'filters' => array(),
   /* search_api@user_profile:block:created */   'active_sorts' => array(
   /* search_api@user_profile:block:created */     'active' => 'active',
   /* search_api@user_profile:block:created */     'count' => 'count',
   /* search_api@user_profile:block:created */     'display' => 'display',
   /* search_api@user_profile:block:created */   ),
   /* search_api@user_profile:block:created */   'sort_weight' => array(
   /* search_api@user_profile:block:created */     'active' => -50,
   /* search_api@user_profile:block:created */     'count' => -49,
   /* search_api@user_profile:block:created */     'display' => -48,
   /* search_api@user_profile:block:created */   ),
   /* search_api@user_profile:block:created */   'sort_order' => array(
   /* search_api@user_profile:block:created */     'active' => 3,
   /* search_api@user_profile:block:created */     'count' => 3,
   /* search_api@user_profile:block:created */     'display' => 4,
   /* search_api@user_profile:block:created */   ),
   /* search_api@user_profile:block:created */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:created */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:created */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:created */   'soft_limit' => 20,
   /* search_api@user_profile:block:created */   'nofollow' => 1,
   /* search_api@user_profile:block:created */   'show_expanded' => 0,
   /* search_api@user_profile:block:created */ );
  $export['search_api@user_profile:block:created'] = $facet;

   /* search_api@user_profile:block:field_countries_of_interest */ $facet = new stdClass();
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->name = 'search_api@user_profile:block:field_countries_of_interest';
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->facet = 'field_countries_of_interest';
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:field_countries_of_interest */ $facet->settings = array(
   /* search_api@user_profile:block:field_countries_of_interest */   'weight' => 0,
   /* search_api@user_profile:block:field_countries_of_interest */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_countries_of_interest */   'filters' => array(),
   /* search_api@user_profile:block:field_countries_of_interest */   'active_sorts' => array(
   /* search_api@user_profile:block:field_countries_of_interest */     'active' => 'active',
   /* search_api@user_profile:block:field_countries_of_interest */     'count' => 'count',
   /* search_api@user_profile:block:field_countries_of_interest */     'display' => 'display',
   /* search_api@user_profile:block:field_countries_of_interest */     'indexed' => 0,
   /* search_api@user_profile:block:field_countries_of_interest */   ),
   /* search_api@user_profile:block:field_countries_of_interest */   'sort_weight' => array(
   /* search_api@user_profile:block:field_countries_of_interest */     'active' => '-50',
   /* search_api@user_profile:block:field_countries_of_interest */     'count' => '-49',
   /* search_api@user_profile:block:field_countries_of_interest */     'display' => '-48',
   /* search_api@user_profile:block:field_countries_of_interest */     'indexed' => '0',
   /* search_api@user_profile:block:field_countries_of_interest */   ),
   /* search_api@user_profile:block:field_countries_of_interest */   'sort_order' => array(
   /* search_api@user_profile:block:field_countries_of_interest */     'active' => '3',
   /* search_api@user_profile:block:field_countries_of_interest */     'count' => '3',
   /* search_api@user_profile:block:field_countries_of_interest */     'display' => '4',
   /* search_api@user_profile:block:field_countries_of_interest */     'indexed' => '4',
   /* search_api@user_profile:block:field_countries_of_interest */   ),
   /* search_api@user_profile:block:field_countries_of_interest */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_countries_of_interest */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:field_countries_of_interest */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:field_countries_of_interest */   'soft_limit' => '5',
   /* search_api@user_profile:block:field_countries_of_interest */   'nofollow' => 1,
   /* search_api@user_profile:block:field_countries_of_interest */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_countries_of_interest */   'empty_text' => array(
   /* search_api@user_profile:block:field_countries_of_interest */     'value' => '',
   /* search_api@user_profile:block:field_countries_of_interest */     'format' => 'filtered_html',
   /* search_api@user_profile:block:field_countries_of_interest */   ),
   /* search_api@user_profile:block:field_countries_of_interest */ );
  $export['search_api@user_profile:block:field_countries_of_interest'] = $facet;

   /* search_api@user_profile:block:field_country_of_residence */ $facet = new stdClass();
   /* search_api@user_profile:block:field_country_of_residence */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_country_of_residence */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_country_of_residence */ $facet->name = 'search_api@user_profile:block:field_country_of_residence';
   /* search_api@user_profile:block:field_country_of_residence */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_country_of_residence */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_country_of_residence */ $facet->facet = 'field_country_of_residence';
   /* search_api@user_profile:block:field_country_of_residence */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:field_country_of_residence */ $facet->settings = array(
   /* search_api@user_profile:block:field_country_of_residence */   'weight' => 0,
   /* search_api@user_profile:block:field_country_of_residence */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_country_of_residence */   'filters' => array(),
   /* search_api@user_profile:block:field_country_of_residence */   'active_sorts' => array(
   /* search_api@user_profile:block:field_country_of_residence */     'active' => 'active',
   /* search_api@user_profile:block:field_country_of_residence */     'count' => 'count',
   /* search_api@user_profile:block:field_country_of_residence */     'display' => 'display',
   /* search_api@user_profile:block:field_country_of_residence */     'indexed' => 0,
   /* search_api@user_profile:block:field_country_of_residence */   ),
   /* search_api@user_profile:block:field_country_of_residence */   'sort_weight' => array(
   /* search_api@user_profile:block:field_country_of_residence */     'active' => '-50',
   /* search_api@user_profile:block:field_country_of_residence */     'count' => '-49',
   /* search_api@user_profile:block:field_country_of_residence */     'display' => '-48',
   /* search_api@user_profile:block:field_country_of_residence */     'indexed' => '0',
   /* search_api@user_profile:block:field_country_of_residence */   ),
   /* search_api@user_profile:block:field_country_of_residence */   'sort_order' => array(
   /* search_api@user_profile:block:field_country_of_residence */     'active' => '3',
   /* search_api@user_profile:block:field_country_of_residence */     'count' => '3',
   /* search_api@user_profile:block:field_country_of_residence */     'display' => '4',
   /* search_api@user_profile:block:field_country_of_residence */     'indexed' => '4',
   /* search_api@user_profile:block:field_country_of_residence */   ),
   /* search_api@user_profile:block:field_country_of_residence */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_country_of_residence */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:field_country_of_residence */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:field_country_of_residence */   'soft_limit' => '5',
   /* search_api@user_profile:block:field_country_of_residence */   'nofollow' => 1,
   /* search_api@user_profile:block:field_country_of_residence */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_country_of_residence */   'empty_text' => array(
   /* search_api@user_profile:block:field_country_of_residence */     'value' => '',
   /* search_api@user_profile:block:field_country_of_residence */     'format' => 'filtered_html',
   /* search_api@user_profile:block:field_country_of_residence */   ),
   /* search_api@user_profile:block:field_country_of_residence */ );
  $export['search_api@user_profile:block:field_country_of_residence'] = $facet;

   /* search_api@user_profile:block:field_expertise */ $facet = new stdClass();
   /* search_api@user_profile:block:field_expertise */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_expertise */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_expertise */ $facet->name = 'search_api@user_profile:block:field_expertise';
   /* search_api@user_profile:block:field_expertise */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_expertise */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_expertise */ $facet->facet = 'field_expertise';
   /* search_api@user_profile:block:field_expertise */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:field_expertise */ $facet->settings = array(
   /* search_api@user_profile:block:field_expertise */   'weight' => 0,
   /* search_api@user_profile:block:field_expertise */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_expertise */   'filters' => array(),
   /* search_api@user_profile:block:field_expertise */   'active_sorts' => array(
   /* search_api@user_profile:block:field_expertise */     'active' => 'active',
   /* search_api@user_profile:block:field_expertise */     'count' => 'count',
   /* search_api@user_profile:block:field_expertise */     'display' => 'display',
   /* search_api@user_profile:block:field_expertise */     'indexed' => 0,
   /* search_api@user_profile:block:field_expertise */   ),
   /* search_api@user_profile:block:field_expertise */   'sort_weight' => array(
   /* search_api@user_profile:block:field_expertise */     'active' => '-50',
   /* search_api@user_profile:block:field_expertise */     'count' => '-49',
   /* search_api@user_profile:block:field_expertise */     'display' => '-48',
   /* search_api@user_profile:block:field_expertise */     'indexed' => '0',
   /* search_api@user_profile:block:field_expertise */   ),
   /* search_api@user_profile:block:field_expertise */   'sort_order' => array(
   /* search_api@user_profile:block:field_expertise */     'active' => '3',
   /* search_api@user_profile:block:field_expertise */     'count' => '3',
   /* search_api@user_profile:block:field_expertise */     'display' => '4',
   /* search_api@user_profile:block:field_expertise */     'indexed' => '4',
   /* search_api@user_profile:block:field_expertise */   ),
   /* search_api@user_profile:block:field_expertise */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_expertise */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:field_expertise */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:field_expertise */   'soft_limit' => '5',
   /* search_api@user_profile:block:field_expertise */   'nofollow' => 1,
   /* search_api@user_profile:block:field_expertise */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_expertise */   'empty_text' => array(
   /* search_api@user_profile:block:field_expertise */     'value' => '',
   /* search_api@user_profile:block:field_expertise */     'format' => 'filtered_html',
   /* search_api@user_profile:block:field_expertise */   ),
   /* search_api@user_profile:block:field_expertise */ );
  $export['search_api@user_profile:block:field_expertise'] = $facet;

   /* search_api@user_profile:block:field_name_first */ $facet = new stdClass();
   /* search_api@user_profile:block:field_name_first */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_name_first */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_name_first */ $facet->name = 'search_api@user_profile:block:field_name_first';
   /* search_api@user_profile:block:field_name_first */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_name_first */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_name_first */ $facet->facet = 'field_name_first';
   /* search_api@user_profile:block:field_name_first */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:field_name_first */ $facet->settings = array(
   /* search_api@user_profile:block:field_name_first */   'weight' => 0,
   /* search_api@user_profile:block:field_name_first */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_name_first */   'filters' => array(),
   /* search_api@user_profile:block:field_name_first */   'active_sorts' => array(
   /* search_api@user_profile:block:field_name_first */     'active' => 'active',
   /* search_api@user_profile:block:field_name_first */     'count' => 'count',
   /* search_api@user_profile:block:field_name_first */     'display' => 'display',
   /* search_api@user_profile:block:field_name_first */   ),
   /* search_api@user_profile:block:field_name_first */   'sort_weight' => array(
   /* search_api@user_profile:block:field_name_first */     'active' => -50,
   /* search_api@user_profile:block:field_name_first */     'count' => -49,
   /* search_api@user_profile:block:field_name_first */     'display' => -48,
   /* search_api@user_profile:block:field_name_first */   ),
   /* search_api@user_profile:block:field_name_first */   'sort_order' => array(
   /* search_api@user_profile:block:field_name_first */     'active' => 3,
   /* search_api@user_profile:block:field_name_first */     'count' => 3,
   /* search_api@user_profile:block:field_name_first */     'display' => 4,
   /* search_api@user_profile:block:field_name_first */   ),
   /* search_api@user_profile:block:field_name_first */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_name_first */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:field_name_first */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:field_name_first */   'soft_limit' => 20,
   /* search_api@user_profile:block:field_name_first */   'nofollow' => 1,
   /* search_api@user_profile:block:field_name_first */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_name_first */ );
  $export['search_api@user_profile:block:field_name_first'] = $facet;

   /* search_api@user_profile:block:field_name_last */ $facet = new stdClass();
   /* search_api@user_profile:block:field_name_last */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_name_last */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_name_last */ $facet->name = 'search_api@user_profile:block:field_name_last';
   /* search_api@user_profile:block:field_name_last */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_name_last */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_name_last */ $facet->facet = 'field_name_last';
   /* search_api@user_profile:block:field_name_last */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:field_name_last */ $facet->settings = array(
   /* search_api@user_profile:block:field_name_last */   'weight' => 0,
   /* search_api@user_profile:block:field_name_last */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_name_last */   'filters' => array(),
   /* search_api@user_profile:block:field_name_last */   'active_sorts' => array(
   /* search_api@user_profile:block:field_name_last */     'active' => 'active',
   /* search_api@user_profile:block:field_name_last */     'count' => 'count',
   /* search_api@user_profile:block:field_name_last */     'display' => 'display',
   /* search_api@user_profile:block:field_name_last */   ),
   /* search_api@user_profile:block:field_name_last */   'sort_weight' => array(
   /* search_api@user_profile:block:field_name_last */     'active' => -50,
   /* search_api@user_profile:block:field_name_last */     'count' => -49,
   /* search_api@user_profile:block:field_name_last */     'display' => -48,
   /* search_api@user_profile:block:field_name_last */   ),
   /* search_api@user_profile:block:field_name_last */   'sort_order' => array(
   /* search_api@user_profile:block:field_name_last */     'active' => 3,
   /* search_api@user_profile:block:field_name_last */     'count' => 3,
   /* search_api@user_profile:block:field_name_last */     'display' => 4,
   /* search_api@user_profile:block:field_name_last */   ),
   /* search_api@user_profile:block:field_name_last */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_name_last */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:field_name_last */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:field_name_last */   'soft_limit' => 20,
   /* search_api@user_profile:block:field_name_last */   'nofollow' => 1,
   /* search_api@user_profile:block:field_name_last */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_name_last */ );
  $export['search_api@user_profile:block:field_name_last'] = $facet;

   /* search_api@user_profile:block:field_nationality */ $facet = new stdClass();
   /* search_api@user_profile:block:field_nationality */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_nationality */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_nationality */ $facet->name = 'search_api@user_profile:block:field_nationality';
   /* search_api@user_profile:block:field_nationality */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_nationality */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_nationality */ $facet->facet = 'field_nationality';
   /* search_api@user_profile:block:field_nationality */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:field_nationality */ $facet->settings = array(
   /* search_api@user_profile:block:field_nationality */   'weight' => 0,
   /* search_api@user_profile:block:field_nationality */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_nationality */   'filters' => array(),
   /* search_api@user_profile:block:field_nationality */   'active_sorts' => array(
   /* search_api@user_profile:block:field_nationality */     'active' => 'active',
   /* search_api@user_profile:block:field_nationality */     'count' => 'count',
   /* search_api@user_profile:block:field_nationality */     'display' => 'display',
   /* search_api@user_profile:block:field_nationality */     'indexed' => 0,
   /* search_api@user_profile:block:field_nationality */   ),
   /* search_api@user_profile:block:field_nationality */   'sort_weight' => array(
   /* search_api@user_profile:block:field_nationality */     'active' => '-50',
   /* search_api@user_profile:block:field_nationality */     'count' => '-49',
   /* search_api@user_profile:block:field_nationality */     'display' => '-48',
   /* search_api@user_profile:block:field_nationality */     'indexed' => '0',
   /* search_api@user_profile:block:field_nationality */   ),
   /* search_api@user_profile:block:field_nationality */   'sort_order' => array(
   /* search_api@user_profile:block:field_nationality */     'active' => '3',
   /* search_api@user_profile:block:field_nationality */     'count' => '3',
   /* search_api@user_profile:block:field_nationality */     'display' => '4',
   /* search_api@user_profile:block:field_nationality */     'indexed' => '4',
   /* search_api@user_profile:block:field_nationality */   ),
   /* search_api@user_profile:block:field_nationality */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_nationality */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:field_nationality */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:field_nationality */   'soft_limit' => '5',
   /* search_api@user_profile:block:field_nationality */   'nofollow' => 1,
   /* search_api@user_profile:block:field_nationality */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_nationality */   'empty_text' => array(
   /* search_api@user_profile:block:field_nationality */     'value' => '',
   /* search_api@user_profile:block:field_nationality */     'format' => 'filtered_html',
   /* search_api@user_profile:block:field_nationality */   ),
   /* search_api@user_profile:block:field_nationality */ );
  $export['search_api@user_profile:block:field_nationality'] = $facet;

   /* search_api@user_profile:block:field_topics_of_interest */ $facet = new stdClass();
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->name = 'search_api@user_profile:block:field_topics_of_interest';
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->facet = 'field_topics_of_interest';
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:field_topics_of_interest */ $facet->settings = array(
   /* search_api@user_profile:block:field_topics_of_interest */   'weight' => 0,
   /* search_api@user_profile:block:field_topics_of_interest */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_topics_of_interest */   'filters' => array(),
   /* search_api@user_profile:block:field_topics_of_interest */   'active_sorts' => array(
   /* search_api@user_profile:block:field_topics_of_interest */     'active' => 'active',
   /* search_api@user_profile:block:field_topics_of_interest */     'count' => 'count',
   /* search_api@user_profile:block:field_topics_of_interest */     'display' => 'display',
   /* search_api@user_profile:block:field_topics_of_interest */     'indexed' => 0,
   /* search_api@user_profile:block:field_topics_of_interest */   ),
   /* search_api@user_profile:block:field_topics_of_interest */   'sort_weight' => array(
   /* search_api@user_profile:block:field_topics_of_interest */     'active' => '-50',
   /* search_api@user_profile:block:field_topics_of_interest */     'count' => '-49',
   /* search_api@user_profile:block:field_topics_of_interest */     'display' => '-48',
   /* search_api@user_profile:block:field_topics_of_interest */     'indexed' => '0',
   /* search_api@user_profile:block:field_topics_of_interest */   ),
   /* search_api@user_profile:block:field_topics_of_interest */   'sort_order' => array(
   /* search_api@user_profile:block:field_topics_of_interest */     'active' => '3',
   /* search_api@user_profile:block:field_topics_of_interest */     'count' => '3',
   /* search_api@user_profile:block:field_topics_of_interest */     'display' => '4',
   /* search_api@user_profile:block:field_topics_of_interest */     'indexed' => '4',
   /* search_api@user_profile:block:field_topics_of_interest */   ),
   /* search_api@user_profile:block:field_topics_of_interest */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_topics_of_interest */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:field_topics_of_interest */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:field_topics_of_interest */   'soft_limit' => '5',
   /* search_api@user_profile:block:field_topics_of_interest */   'nofollow' => 1,
   /* search_api@user_profile:block:field_topics_of_interest */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_topics_of_interest */   'empty_text' => array(
   /* search_api@user_profile:block:field_topics_of_interest */     'value' => '',
   /* search_api@user_profile:block:field_topics_of_interest */     'format' => 'filtered_html',
   /* search_api@user_profile:block:field_topics_of_interest */   ),
   /* search_api@user_profile:block:field_topics_of_interest */ );
  $export['search_api@user_profile:block:field_topics_of_interest'] = $facet;

   /* search_api@user_profile:block:field_user_organization */ $facet = new stdClass();
   /* search_api@user_profile:block:field_user_organization */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:field_user_organization */ $facet->api_version = 1;
   /* search_api@user_profile:block:field_user_organization */ $facet->name = 'search_api@user_profile:block:field_user_organization';
   /* search_api@user_profile:block:field_user_organization */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:field_user_organization */ $facet->realm = 'block';
   /* search_api@user_profile:block:field_user_organization */ $facet->facet = 'field_user_organization';
   /* search_api@user_profile:block:field_user_organization */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:field_user_organization */ $facet->settings = array(
   /* search_api@user_profile:block:field_user_organization */   'weight' => 0,
   /* search_api@user_profile:block:field_user_organization */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:field_user_organization */   'filters' => array(),
   /* search_api@user_profile:block:field_user_organization */   'active_sorts' => array(
   /* search_api@user_profile:block:field_user_organization */     'active' => 'active',
   /* search_api@user_profile:block:field_user_organization */     'count' => 'count',
   /* search_api@user_profile:block:field_user_organization */     'display' => 'display',
   /* search_api@user_profile:block:field_user_organization */     'indexed' => 0,
   /* search_api@user_profile:block:field_user_organization */   ),
   /* search_api@user_profile:block:field_user_organization */   'sort_weight' => array(
   /* search_api@user_profile:block:field_user_organization */     'active' => '-50',
   /* search_api@user_profile:block:field_user_organization */     'count' => '-49',
   /* search_api@user_profile:block:field_user_organization */     'display' => '-48',
   /* search_api@user_profile:block:field_user_organization */     'indexed' => '0',
   /* search_api@user_profile:block:field_user_organization */   ),
   /* search_api@user_profile:block:field_user_organization */   'sort_order' => array(
   /* search_api@user_profile:block:field_user_organization */     'active' => '3',
   /* search_api@user_profile:block:field_user_organization */     'count' => '3',
   /* search_api@user_profile:block:field_user_organization */     'display' => '4',
   /* search_api@user_profile:block:field_user_organization */     'indexed' => '4',
   /* search_api@user_profile:block:field_user_organization */   ),
   /* search_api@user_profile:block:field_user_organization */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:field_user_organization */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:field_user_organization */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:field_user_organization */   'soft_limit' => '5',
   /* search_api@user_profile:block:field_user_organization */   'nofollow' => 1,
   /* search_api@user_profile:block:field_user_organization */   'show_expanded' => 0,
   /* search_api@user_profile:block:field_user_organization */   'empty_text' => array(
   /* search_api@user_profile:block:field_user_organization */     'value' => '',
   /* search_api@user_profile:block:field_user_organization */     'format' => 'filtered_html',
   /* search_api@user_profile:block:field_user_organization */   ),
   /* search_api@user_profile:block:field_user_organization */ );
  $export['search_api@user_profile:block:field_user_organization'] = $facet;

   /* search_api@user_profile:block:name */ $facet = new stdClass();
   /* search_api@user_profile:block:name */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:name */ $facet->api_version = 1;
   /* search_api@user_profile:block:name */ $facet->name = 'search_api@user_profile:block:name';
   /* search_api@user_profile:block:name */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:name */ $facet->realm = 'block';
   /* search_api@user_profile:block:name */ $facet->facet = 'name';
   /* search_api@user_profile:block:name */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:name */ $facet->settings = array(
   /* search_api@user_profile:block:name */   'weight' => 0,
   /* search_api@user_profile:block:name */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:name */   'filters' => array(),
   /* search_api@user_profile:block:name */   'active_sorts' => array(
   /* search_api@user_profile:block:name */     'active' => 'active',
   /* search_api@user_profile:block:name */     'count' => 'count',
   /* search_api@user_profile:block:name */     'display' => 'display',
   /* search_api@user_profile:block:name */   ),
   /* search_api@user_profile:block:name */   'sort_weight' => array(
   /* search_api@user_profile:block:name */     'active' => -50,
   /* search_api@user_profile:block:name */     'count' => -49,
   /* search_api@user_profile:block:name */     'display' => -48,
   /* search_api@user_profile:block:name */   ),
   /* search_api@user_profile:block:name */   'sort_order' => array(
   /* search_api@user_profile:block:name */     'active' => 3,
   /* search_api@user_profile:block:name */     'count' => 3,
   /* search_api@user_profile:block:name */     'display' => 4,
   /* search_api@user_profile:block:name */   ),
   /* search_api@user_profile:block:name */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:name */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:name */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:name */   'soft_limit' => 20,
   /* search_api@user_profile:block:name */   'nofollow' => 1,
   /* search_api@user_profile:block:name */   'show_expanded' => 0,
   /* search_api@user_profile:block:name */ );
  $export['search_api@user_profile:block:name'] = $facet;

   /* search_api@user_profile:block:og_user_node */ $facet = new stdClass();
   /* search_api@user_profile:block:og_user_node */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:og_user_node */ $facet->api_version = 1;
   /* search_api@user_profile:block:og_user_node */ $facet->name = 'search_api@user_profile:block:og_user_node';
   /* search_api@user_profile:block:og_user_node */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:og_user_node */ $facet->realm = 'block';
   /* search_api@user_profile:block:og_user_node */ $facet->facet = 'og_user_node';
   /* search_api@user_profile:block:og_user_node */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:og_user_node */ $facet->settings = array(
   /* search_api@user_profile:block:og_user_node */   'weight' => 0,
   /* search_api@user_profile:block:og_user_node */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:og_user_node */   'filters' => array(),
   /* search_api@user_profile:block:og_user_node */   'active_sorts' => array(
   /* search_api@user_profile:block:og_user_node */     'active' => 'active',
   /* search_api@user_profile:block:og_user_node */     'count' => 'count',
   /* search_api@user_profile:block:og_user_node */     'display' => 'display',
   /* search_api@user_profile:block:og_user_node */     'indexed' => 0,
   /* search_api@user_profile:block:og_user_node */   ),
   /* search_api@user_profile:block:og_user_node */   'sort_weight' => array(
   /* search_api@user_profile:block:og_user_node */     'active' => '-50',
   /* search_api@user_profile:block:og_user_node */     'count' => '-49',
   /* search_api@user_profile:block:og_user_node */     'display' => '-48',
   /* search_api@user_profile:block:og_user_node */     'indexed' => '0',
   /* search_api@user_profile:block:og_user_node */   ),
   /* search_api@user_profile:block:og_user_node */   'sort_order' => array(
   /* search_api@user_profile:block:og_user_node */     'active' => '3',
   /* search_api@user_profile:block:og_user_node */     'count' => '3',
   /* search_api@user_profile:block:og_user_node */     'display' => '4',
   /* search_api@user_profile:block:og_user_node */     'indexed' => '4',
   /* search_api@user_profile:block:og_user_node */   ),
   /* search_api@user_profile:block:og_user_node */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:og_user_node */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:og_user_node */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:og_user_node */   'soft_limit' => '20',
   /* search_api@user_profile:block:og_user_node */   'nofollow' => 1,
   /* search_api@user_profile:block:og_user_node */   'show_expanded' => 0,
   /* search_api@user_profile:block:og_user_node */   'empty_text' => array(
   /* search_api@user_profile:block:og_user_node */     'value' => '',
   /* search_api@user_profile:block:og_user_node */     'format' => 'filtered_html',
   /* search_api@user_profile:block:og_user_node */   ),
   /* search_api@user_profile:block:og_user_node */ );
  $export['search_api@user_profile:block:og_user_node'] = $facet;

   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet = new stdClass();
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->api_version = 1;
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->name = 'search_api@user_profile:block:og_user_node:field_org_short_title';
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->realm = 'block';
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->facet = 'og_user_node:field_org_short_title';
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ $facet->settings = array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'weight' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'filters' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'active_items' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'status' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'weight' => '-50',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'exclude_items' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'status' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'weight' => '-49',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'rewrite_items' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'status' => 1,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'weight' => '-48',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'narrow_results' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'status' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'weight' => '-47',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'show_if_minimum_items' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'status' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'weight' => '-46',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'deepest_level_items' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'status' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */       'weight' => '-45',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'active_sorts' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'active' => 'active',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'count' => 'count',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'display' => 'display',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'natural' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'indexed' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'sort_weight' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'active' => '-50',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'count' => '-49',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'display' => '-48',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'natural' => '0',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'indexed' => '0',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'sort_order' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'active' => '3',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'count' => '3',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'display' => '4',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'natural' => '4',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'indexed' => '4',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'soft_limit' => '5',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'nofollow' => 1,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'show_expanded' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'empty_text' => array(
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'value' => '',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */     'format' => 'filtered_html',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   ),
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'exclude' => '',
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'regex' => 0,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'show_minimum_items' => 2,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */   'rewrite_items' => 1,
   /* search_api@user_profile:block:og_user_node:field_org_short_title */ );
  $export['search_api@user_profile:block:og_user_node:field_org_short_title'] = $facet;

   /* search_api@user_profile:block:og_user_node:status */ $facet = new stdClass();
   /* search_api@user_profile:block:og_user_node:status */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:og_user_node:status */ $facet->api_version = 1;
   /* search_api@user_profile:block:og_user_node:status */ $facet->name = 'search_api@user_profile:block:og_user_node:status';
   /* search_api@user_profile:block:og_user_node:status */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:og_user_node:status */ $facet->realm = 'block';
   /* search_api@user_profile:block:og_user_node:status */ $facet->facet = 'og_user_node:status';
   /* search_api@user_profile:block:og_user_node:status */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:og_user_node:status */ $facet->settings = array(
   /* search_api@user_profile:block:og_user_node:status */   'weight' => 0,
   /* search_api@user_profile:block:og_user_node:status */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:og_user_node:status */   'filters' => array(),
   /* search_api@user_profile:block:og_user_node:status */   'active_sorts' => array(
   /* search_api@user_profile:block:og_user_node:status */     'active' => 'active',
   /* search_api@user_profile:block:og_user_node:status */     'count' => 'count',
   /* search_api@user_profile:block:og_user_node:status */     'display' => 'display',
   /* search_api@user_profile:block:og_user_node:status */   ),
   /* search_api@user_profile:block:og_user_node:status */   'sort_weight' => array(
   /* search_api@user_profile:block:og_user_node:status */     'active' => -50,
   /* search_api@user_profile:block:og_user_node:status */     'count' => -49,
   /* search_api@user_profile:block:og_user_node:status */     'display' => -48,
   /* search_api@user_profile:block:og_user_node:status */   ),
   /* search_api@user_profile:block:og_user_node:status */   'sort_order' => array(
   /* search_api@user_profile:block:og_user_node:status */     'active' => 3,
   /* search_api@user_profile:block:og_user_node:status */     'count' => 3,
   /* search_api@user_profile:block:og_user_node:status */     'display' => 4,
   /* search_api@user_profile:block:og_user_node:status */   ),
   /* search_api@user_profile:block:og_user_node:status */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:og_user_node:status */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:og_user_node:status */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:og_user_node:status */   'soft_limit' => 20,
   /* search_api@user_profile:block:og_user_node:status */   'nofollow' => 1,
   /* search_api@user_profile:block:og_user_node:status */   'show_expanded' => 0,
   /* search_api@user_profile:block:og_user_node:status */ );
  $export['search_api@user_profile:block:og_user_node:status'] = $facet;

   /* search_api@user_profile:block:og_user_node:title */ $facet = new stdClass();
   /* search_api@user_profile:block:og_user_node:title */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:og_user_node:title */ $facet->api_version = 1;
   /* search_api@user_profile:block:og_user_node:title */ $facet->name = 'search_api@user_profile:block:og_user_node:title';
   /* search_api@user_profile:block:og_user_node:title */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:og_user_node:title */ $facet->realm = 'block';
   /* search_api@user_profile:block:og_user_node:title */ $facet->facet = 'og_user_node:title';
   /* search_api@user_profile:block:og_user_node:title */ $facet->enabled = TRUE;
   /* search_api@user_profile:block:og_user_node:title */ $facet->settings = array(
   /* search_api@user_profile:block:og_user_node:title */   'weight' => 0,
   /* search_api@user_profile:block:og_user_node:title */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:og_user_node:title */   'filters' => array(),
   /* search_api@user_profile:block:og_user_node:title */   'active_sorts' => array(
   /* search_api@user_profile:block:og_user_node:title */     'active' => 'active',
   /* search_api@user_profile:block:og_user_node:title */     'count' => 'count',
   /* search_api@user_profile:block:og_user_node:title */     'display' => 'display',
   /* search_api@user_profile:block:og_user_node:title */     'indexed' => 0,
   /* search_api@user_profile:block:og_user_node:title */   ),
   /* search_api@user_profile:block:og_user_node:title */   'sort_weight' => array(
   /* search_api@user_profile:block:og_user_node:title */     'active' => '-50',
   /* search_api@user_profile:block:og_user_node:title */     'count' => '-49',
   /* search_api@user_profile:block:og_user_node:title */     'display' => '-48',
   /* search_api@user_profile:block:og_user_node:title */     'indexed' => '0',
   /* search_api@user_profile:block:og_user_node:title */   ),
   /* search_api@user_profile:block:og_user_node:title */   'sort_order' => array(
   /* search_api@user_profile:block:og_user_node:title */     'active' => '3',
   /* search_api@user_profile:block:og_user_node:title */     'count' => '3',
   /* search_api@user_profile:block:og_user_node:title */     'display' => '4',
   /* search_api@user_profile:block:og_user_node:title */     'indexed' => '4',
   /* search_api@user_profile:block:og_user_node:title */   ),
   /* search_api@user_profile:block:og_user_node:title */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:og_user_node:title */   'facet_more_text' => 'Show more +',
   /* search_api@user_profile:block:og_user_node:title */   'facet_fewer_text' => 'Show fewer -',
   /* search_api@user_profile:block:og_user_node:title */   'soft_limit' => '5',
   /* search_api@user_profile:block:og_user_node:title */   'nofollow' => 1,
   /* search_api@user_profile:block:og_user_node:title */   'show_expanded' => 0,
   /* search_api@user_profile:block:og_user_node:title */   'empty_text' => array(
   /* search_api@user_profile:block:og_user_node:title */     'value' => '',
   /* search_api@user_profile:block:og_user_node:title */     'format' => 'filtered_html',
   /* search_api@user_profile:block:og_user_node:title */   ),
   /* search_api@user_profile:block:og_user_node:title */ );
  $export['search_api@user_profile:block:og_user_node:title'] = $facet;

   /* search_api@user_profile:block:search_api_language */ $facet = new stdClass();
   /* search_api@user_profile:block:search_api_language */ $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
   /* search_api@user_profile:block:search_api_language */ $facet->api_version = 1;
   /* search_api@user_profile:block:search_api_language */ $facet->name = 'search_api@user_profile:block:search_api_language';
   /* search_api@user_profile:block:search_api_language */ $facet->searcher = 'search_api@user_profile';
   /* search_api@user_profile:block:search_api_language */ $facet->realm = 'block';
   /* search_api@user_profile:block:search_api_language */ $facet->facet = 'search_api_language';
   /* search_api@user_profile:block:search_api_language */ $facet->enabled = FALSE;
   /* search_api@user_profile:block:search_api_language */ $facet->settings = array(
   /* search_api@user_profile:block:search_api_language */   'weight' => 0,
   /* search_api@user_profile:block:search_api_language */   'widget' => 'facetapi_links',
   /* search_api@user_profile:block:search_api_language */   'filters' => array(),
   /* search_api@user_profile:block:search_api_language */   'active_sorts' => array(
   /* search_api@user_profile:block:search_api_language */     'active' => 'active',
   /* search_api@user_profile:block:search_api_language */     'count' => 'count',
   /* search_api@user_profile:block:search_api_language */     'display' => 'display',
   /* search_api@user_profile:block:search_api_language */   ),
   /* search_api@user_profile:block:search_api_language */   'sort_weight' => array(
   /* search_api@user_profile:block:search_api_language */     'active' => -50,
   /* search_api@user_profile:block:search_api_language */     'count' => -49,
   /* search_api@user_profile:block:search_api_language */     'display' => -48,
   /* search_api@user_profile:block:search_api_language */   ),
   /* search_api@user_profile:block:search_api_language */   'sort_order' => array(
   /* search_api@user_profile:block:search_api_language */     'active' => 3,
   /* search_api@user_profile:block:search_api_language */     'count' => 3,
   /* search_api@user_profile:block:search_api_language */     'display' => 4,
   /* search_api@user_profile:block:search_api_language */   ),
   /* search_api@user_profile:block:search_api_language */   'empty_behavior' => 'none',
   /* search_api@user_profile:block:search_api_language */   'facet_more_text' => 'Show more',
   /* search_api@user_profile:block:search_api_language */   'facet_fewer_text' => 'Show fewer',
   /* search_api@user_profile:block:search_api_language */   'soft_limit' => 20,
   /* search_api@user_profile:block:search_api_language */   'nofollow' => 1,
   /* search_api@user_profile:block:search_api_language */   'show_expanded' => 0,
   /* search_api@user_profile:block:search_api_language */ );
  $export['search_api@user_profile:block:search_api_language'] = $facet;

  return $export;
}
