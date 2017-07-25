<?php
/**
 * @file
 * gn2_metrics.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_metrics_views_default_views() {
  $export = array();

  /* google_analytics_organization_report */ $view = new view();
  /* google_analytics_organization_report */ $view->name = 'google_analytics_organization_report';
  /* google_analytics_organization_report */ $view->description = '';
  /* google_analytics_organization_report */ $view->tag = 'default';
  /* google_analytics_organization_report */ $view->base_table = 'google_analytics';
  /* google_analytics_organization_report */ $view->human_name = 'Google Analytics Organization Report';
  /* google_analytics_organization_report */ $view->core = 7;
  /* google_analytics_organization_report */ $view->api_version = '3.0';
  /* google_analytics_organization_report */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* google_analytics_organization_report */ /* Display: Master */
  /* google_analytics_organization_report */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['title'] = 'Google Analytics Organization Report';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_org_manager_access';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* google_analytics_organization_report */  /* Master */   'general' => array(
  /* google_analytics_organization_report */  /* Master */     'input_required' => 0,
  /* google_analytics_organization_report */  /* Master */     'text_input_required' => array(
  /* google_analytics_organization_report */  /* Master */       'text_input_required' => array(
  /* google_analytics_organization_report */  /* Master */         'value' => 'Select any filter and click on Apply to see results',
  /* google_analytics_organization_report */  /* Master */         'format' => 'filtered_html',
  /* google_analytics_organization_report */  /* Master */       ),
  /* google_analytics_organization_report */  /* Master */     ),
  /* google_analytics_organization_report */  /* Master */     'allow_secondary' => 0,
  /* google_analytics_organization_report */  /* Master */     'secondary_label' => 'Advanced options',
  /* google_analytics_organization_report */  /* Master */     'secondary_collapse_override' => '0',
  /* google_analytics_organization_report */  /* Master */   ),
  /* google_analytics_organization_report */  /* Master */   'start_date' => array(
  /* google_analytics_organization_report */  /* Master */     'bef_format' => 'bef_datepicker',
  /* google_analytics_organization_report */  /* Master */     'more_options' => array(
  /* google_analytics_organization_report */  /* Master */       'autosubmit' => 0,
  /* google_analytics_organization_report */  /* Master */       'is_secondary' => 0,
  /* google_analytics_organization_report */  /* Master */       'any_label' => '',
  /* google_analytics_organization_report */  /* Master */       'bef_filter_description' => '',
  /* google_analytics_organization_report */  /* Master */       'tokens' => array(
  /* google_analytics_organization_report */  /* Master */         'available' => array(
  /* google_analytics_organization_report */  /* Master */           0 => 'global_types',
  /* google_analytics_organization_report */  /* Master */         ),
  /* google_analytics_organization_report */  /* Master */       ),
  /* google_analytics_organization_report */  /* Master */       'rewrite' => array(
  /* google_analytics_organization_report */  /* Master */         'filter_rewrite_values' => '',
  /* google_analytics_organization_report */  /* Master */       ),
  /* google_analytics_organization_report */  /* Master */       'datepicker_options' => '',
  /* google_analytics_organization_report */  /* Master */     ),
  /* google_analytics_organization_report */  /* Master */   ),
  /* google_analytics_organization_report */  /* Master */   'end_date' => array(
  /* google_analytics_organization_report */  /* Master */     'bef_format' => 'bef_datepicker',
  /* google_analytics_organization_report */  /* Master */     'more_options' => array(
  /* google_analytics_organization_report */  /* Master */       'autosubmit' => 0,
  /* google_analytics_organization_report */  /* Master */       'is_secondary' => 0,
  /* google_analytics_organization_report */  /* Master */       'any_label' => '',
  /* google_analytics_organization_report */  /* Master */       'bef_filter_description' => '',
  /* google_analytics_organization_report */  /* Master */       'tokens' => array(
  /* google_analytics_organization_report */  /* Master */         'available' => array(
  /* google_analytics_organization_report */  /* Master */           0 => 'global_types',
  /* google_analytics_organization_report */  /* Master */         ),
  /* google_analytics_organization_report */  /* Master */       ),
  /* google_analytics_organization_report */  /* Master */       'rewrite' => array(
  /* google_analytics_organization_report */  /* Master */         'filter_rewrite_values' => '',
  /* google_analytics_organization_report */  /* Master */       ),
  /* google_analytics_organization_report */  /* Master */       'datepicker_options' => '',
  /* google_analytics_organization_report */  /* Master */     ),
  /* google_analytics_organization_report */  /* Master */   ),
  /* google_analytics_organization_report */  /* Master */ );
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* google_analytics_organization_report */  /* Master */   'country' => 'country',
  /* google_analytics_organization_report */  /* Master */   'pageviews' => 'pageviews',
  /* google_analytics_organization_report */  /* Master */ );
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* google_analytics_organization_report */  /* Master */   'country' => array(
  /* google_analytics_organization_report */  /* Master */     'sortable' => 0,
  /* google_analytics_organization_report */  /* Master */     'default_sort_order' => 'asc',
  /* google_analytics_organization_report */  /* Master */     'align' => 'views-align-left',
  /* google_analytics_organization_report */  /* Master */     'separator' => '',
  /* google_analytics_organization_report */  /* Master */     'empty_column' => 0,
  /* google_analytics_organization_report */  /* Master */   ),
  /* google_analytics_organization_report */  /* Master */   'pageviews' => array(
  /* google_analytics_organization_report */  /* Master */     'sortable' => 1,
  /* google_analytics_organization_report */  /* Master */     'default_sort_order' => 'desc',
  /* google_analytics_organization_report */  /* Master */     'align' => 'views-align-center',
  /* google_analytics_organization_report */  /* Master */     'separator' => '',
  /* google_analytics_organization_report */  /* Master */     'empty_column' => 0,
  /* google_analytics_organization_report */  /* Master */   ),
  /* google_analytics_organization_report */  /* Master */ );
  /* google_analytics_organization_report */  /* Master */ /* Header: Global: Unfiltered text */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Master */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'No data to display.';
  /* google_analytics_organization_report */  /* Master */ /* Field: Page Tracking: Page Title */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageTitle']['element_type'] = '0';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageTitle']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageTitle']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ /* Field: Custom Variables or Columns: Custom Dimension XX */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['id'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['field'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['label'] = 'Content Type';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX']['custom_field_number'] = '6';
  /* google_analytics_organization_report */  /* Master */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['label'] = 'Page Views';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['element_type'] = '0';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['element_class'] = 'align-center';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_organization_report */  /* Master */ /* Field: Custom Variables or Columns: Custom Dimension XX */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX_1']['id'] = 'dimensionXX_1';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX_1']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX_1']['field'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX_1']['label'] = 'User Status';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['fields']['dimensionXX_1']['custom_field_number'] = '7';
  /* google_analytics_organization_report */  /* Master */ /* Sort criterion: Page Tracking: Pageviews */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* google_analytics_organization_report */  /* Master */ /* Contextual filter: Custom Variables or Columns: Custom Dimension XX */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['id'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['field'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['default_action'] = 'default';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['default_argument_type'] = 'node';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['summary']['number_of_records'] = '0';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['summary']['format'] = 'default_summary';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['summary_options']['items_per_page'] = '25';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['specify_validation'] = TRUE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['validate']['type'] = 'node';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['validate_options']['types'] = array(
  /* google_analytics_organization_report */  /* Master */   'organization' => 'organization',
  /* google_analytics_organization_report */  /* Master */ );
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['arguments']['dimensionXX']['custom_field_number'] = '4';
  /* google_analytics_organization_report */  /* Master */ /* Filter criterion: Google Analytics: Start date of report */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['value']['value'] = '-30 days';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['remember'] = TRUE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* google_analytics_organization_report */  /* Master */   2 => '2',
  /* google_analytics_organization_report */  /* Master */   1 => 0,
  /* google_analytics_organization_report */  /* Master */   9 => 0,
  /* google_analytics_organization_report */  /* Master */   10 => 0,
  /* google_analytics_organization_report */  /* Master */   11 => 0,
  /* google_analytics_organization_report */  /* Master */ );
  /* google_analytics_organization_report */  /* Master */ /* Filter criterion: Google Analytics: End date of report */
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['value']['value'] = 'today';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['expose']['remember'] = TRUE;
  /* google_analytics_organization_report */  /* Master */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* google_analytics_organization_report */  /* Master */   2 => '2',
  /* google_analytics_organization_report */  /* Master */   1 => 0,
  /* google_analytics_organization_report */  /* Master */   9 => 0,
  /* google_analytics_organization_report */  /* Master */   10 => 0,
  /* google_analytics_organization_report */  /* Master */   11 => 0,
  /* google_analytics_organization_report */  /* Master */ );

  /* google_analytics_organization_report */ /* Display: Page */
  /* google_analytics_organization_report */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* google_analytics_organization_report */  /* Page */ /* Footer: Global: Unfiltered text */
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="description">* <strong>Non-node</strong> content are pages such as <strong>Search</strong>, <strong>My GlobalNET</strong>, the <strong>Page not found</strong> page, among others.</div>';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['path'] = 'node/%/metrics/analytics-pages';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['menu']['type'] = 'tab';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['menu']['title'] = 'Page Views';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['menu']['weight'] = '5';
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['menu']['context'] = 0;
  /* google_analytics_organization_report */  /* Page */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* google_analytics_organization_report */ /* Display: Chart */
  /* google_analytics_organization_report */  /* Chart */ $handler = $view->new_display('attachment', 'Chart', 'attachment_1');
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary-block google-analytics-reports-summary-block-chart';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_plugin'] = 'chart';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['type'] = 'area';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['library'] = '';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['label_field'] = 'date';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['data_fields'] = array(
  /* google_analytics_organization_report */  /* Chart */   'sessions' => 'sessions',
  /* google_analytics_organization_report */  /* Chart */   'pageviews' => 'pageviews',
  /* google_analytics_organization_report */  /* Chart */   'country' => 'country',
  /* google_analytics_organization_report */  /* Chart */   'date' => 0,
  /* google_analytics_organization_report */  /* Chart */ );
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['field_colors'] = array(
  /* google_analytics_organization_report */  /* Chart */   'date' => '#8bbc21',
  /* google_analytics_organization_report */  /* Chart */   'sessions' => '#0000ff',
  /* google_analytics_organization_report */  /* Chart */   'pageviews' => '#8bbc21',
  /* google_analytics_organization_report */  /* Chart */   'country' => '#910000',
  /* google_analytics_organization_report */  /* Chart */ );
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['width'] = '';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['height'] = '';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['yaxis_title'] = 'Sessions and Pageviews';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ /* Field: Time: Date */
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['date']['id'] = 'date';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['date']['field'] = 'date';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['date']['custom_date_format'] = 'j M';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['date']['second_date_format'] = 'date_format_globalnet_date';
  /* google_analytics_organization_report */  /* Chart */ /* Field: Session: Sessions */
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* google_analytics_organization_report */  /* Chart */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['label'] = 'Pageview';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['element_type'] = 'span';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['element_class'] = 'description';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['element_wrapper_type'] = '0';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['fields']['pageviews']['suffix'] = ' views';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ /* Sort criterion: Time: Date */
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['sorts']['date']['id'] = 'date';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['sorts']['date']['field'] = 'date';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* google_analytics_organization_report */  /* Chart */ /* Contextual filter: Custom Variables or Columns: Custom Dimension XX */
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['id'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['field'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['default_action'] = 'default';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['default_argument_type'] = 'node';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['summary']['number_of_records'] = '0';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['summary']['format'] = 'default_summary';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['summary_options']['items_per_page'] = '25';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['specify_validation'] = TRUE;
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['validate']['type'] = 'node';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['validate_options']['types'] = array(
  /* google_analytics_organization_report */  /* Chart */   'organization' => 'organization',
  /* google_analytics_organization_report */  /* Chart */ );
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['arguments']['dimensionXX']['custom_field_number'] = '4';
  /* google_analytics_organization_report */  /* Chart */ $handler->display->display_options['displays'] = array(
  /* google_analytics_organization_report */  /* Chart */   'page' => 'page',
  /* google_analytics_organization_report */  /* Chart */   'page_2' => 'page_2',
  /* google_analytics_organization_report */  /* Chart */   'default' => 0,
  /* google_analytics_organization_report */  /* Chart */   'page_1' => 0,
  /* google_analytics_organization_report */  /* Chart */ );

  /* google_analytics_organization_report */ /* Display: Countries */
  /* google_analytics_organization_report */  /* Countries */ $handler = $view->new_display('page', 'Countries', 'page_1');
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_organization_report */  /* Countries */ /* Field: Geo Network: Country */
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['country']['id'] = 'country';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['country']['field'] = 'country';
  /* google_analytics_organization_report */  /* Countries */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['label'] = 'Page Views';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['element_type'] = '0';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['element_class'] = 'align-center';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['path'] = 'node/%/metrics/analytics-countries';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['menu']['type'] = 'tab';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['menu']['title'] = 'Views by Country';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['menu']['weight'] = '6';
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['menu']['context'] = 0;
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* google_analytics_organization_report */  /* Countries */ $handler->display->display_options['tab_options']['weight'] = '0';

  /* google_analytics_organization_report */ /* Display: Pages export */
  /* google_analytics_organization_report */  /* Pages export */ $handler = $view->new_display('views_data_export', 'Pages export', 'views_data_export_1');
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['filename'] = '%1-title-pages.csv';
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['parent_sort'] = 0;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['newline_token'] = '1';
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['header'] = 1;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['style_options']['keep_html'] = 0;
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['path'] = 'node/%/metrics/analytics/pages-export';
  /* google_analytics_organization_report */  /* Pages export */ $handler->display->display_options['displays'] = array(
  /* google_analytics_organization_report */  /* Pages export */   'page' => 'page',
  /* google_analytics_organization_report */  /* Pages export */   'default' => 0,
  /* google_analytics_organization_report */  /* Pages export */   'page_1' => 0,
  /* google_analytics_organization_report */  /* Pages export */   'page_2' => 0,
  /* google_analytics_organization_report */  /* Pages export */   'page_3' => 0,
  /* google_analytics_organization_report */  /* Pages export */ );

  /* google_analytics_organization_report */ /* Display: Country export */
  /* google_analytics_organization_report */  /* Country export */ $handler = $view->new_display('views_data_export', 'Country export', 'views_data_export_2');
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['filename'] = '%1-title-countries.csv';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['parent_sort'] = 0;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['newline_token'] = '1';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['header'] = 1;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['style_options']['keep_html'] = 0;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_organization_report */  /* Country export */ /* Field: Geo Network: Country */
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['country']['id'] = 'country';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['country']['field'] = 'country';
  /* google_analytics_organization_report */  /* Country export */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['label'] = 'Page Views';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['element_type'] = '0';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['path'] = 'node/%/metrics/analytics/countries-export';
  /* google_analytics_organization_report */  /* Country export */ $handler->display->display_options['displays'] = array(
  /* google_analytics_organization_report */  /* Country export */   'page_1' => 'page_1',
  /* google_analytics_organization_report */  /* Country export */   'default' => 0,
  /* google_analytics_organization_report */  /* Country export */   'page' => 0,
  /* google_analytics_organization_report */  /* Country export */   'page_2' => 0,
  /* google_analytics_organization_report */  /* Country export */ );

  /* google_analytics_organization_report */ /* Display: Content types */
  /* google_analytics_organization_report */  /* Content types */ $handler = $view->new_display('page', 'Content types', 'page_3');
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* google_analytics_organization_report */  /* Content types */ /* Footer: Global: Unfiltered text */
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="description">* <strong>Non-node</strong> content are pages such as <strong>Search</strong>, <strong>My GlobalNET</strong>, the <strong>Page not found</strong> page, among others.</div>';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_organization_report */  /* Content types */ /* Field: Custom Variables or Columns: Custom Dimension XX */
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['dimensionXX']['id'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['dimensionXX']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['dimensionXX']['field'] = 'dimensionXX';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['dimensionXX']['label'] = 'Content Type';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['dimensionXX']['custom_field_number'] = '6';
  /* google_analytics_organization_report */  /* Content types */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['label'] = 'Page Views';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['element_type'] = '0';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['element_class'] = 'align-center';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['element_default_classes'] = FALSE;
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['path'] = 'node/%/metrics/content-types';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['menu']['type'] = 'tab';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['menu']['title'] = 'Views by Content Types';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['menu']['weight'] = '7';
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['menu']['context'] = 0;
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* google_analytics_organization_report */  /* Content types */ $handler->display->display_options['tab_options']['weight'] = '0';
  /* google_analytics_organization_report */ $translatables['google_analytics_organization_report'] = array(
  /* google_analytics_organization_report */   t('Master'),
  /* google_analytics_organization_report */   t('Google Analytics Organization Report'),
  /* google_analytics_organization_report */   t('more'),
  /* google_analytics_organization_report */   t('Apply'),
  /* google_analytics_organization_report */   t('Reset'),
  /* google_analytics_organization_report */   t('Sort by'),
  /* google_analytics_organization_report */   t('Asc'),
  /* google_analytics_organization_report */   t('Desc'),
  /* google_analytics_organization_report */   t('Select any filter and click on Apply to see results'),
  /* google_analytics_organization_report */   t('Advanced options'),
  /* google_analytics_organization_report */   t('Items per page'),
  /* google_analytics_organization_report */   t('- All -'),
  /* google_analytics_organization_report */   t('Offset'),
  /* google_analytics_organization_report */   t('« first'),
  /* google_analytics_organization_report */   t('‹ previous'),
  /* google_analytics_organization_report */   t('next ›'),
  /* google_analytics_organization_report */   t('last »'),
  /* google_analytics_organization_report */   t('No data to display.'),
  /* google_analytics_organization_report */   t('Page Title'),
  /* google_analytics_organization_report */   t('Content Type'),
  /* google_analytics_organization_report */   t('Page Views'),
  /* google_analytics_organization_report */   t('.'),
  /* google_analytics_organization_report */   t(','),
  /* google_analytics_organization_report */   t('User Status'),
  /* google_analytics_organization_report */   t('All'),
  /* google_analytics_organization_report */   t('Start date'),
  /* google_analytics_organization_report */   t('End date'),
  /* google_analytics_organization_report */   t('Page'),
  /* google_analytics_organization_report */   t('<div class="description">* <strong>Non-node</strong> content are pages such as <strong>Search</strong>, <strong>My GlobalNET</strong>, the <strong>Page not found</strong> page, among others.</div>'),
  /* google_analytics_organization_report */   t('Chart'),
  /* google_analytics_organization_report */   t('Date'),
  /* google_analytics_organization_report */   t('Sessions'),
  /* google_analytics_organization_report */   t('Pageview'),
  /* google_analytics_organization_report */   t(' views'),
  /* google_analytics_organization_report */   t('Countries'),
  /* google_analytics_organization_report */   t('Country'),
  /* google_analytics_organization_report */   t('Pages export'),
  /* google_analytics_organization_report */   t('Country export'),
  /* google_analytics_organization_report */   t('Content types'),
  /* google_analytics_organization_report */ );
  $export['google_analytics_organization_report'] = $view;

  /* google_analytics_reports_summary_override */ $view = new view();
  /* google_analytics_reports_summary_override */ $view->name = 'google_analytics_reports_summary_override';
  /* google_analytics_reports_summary_override */ $view->description = 'Display summary statistic information about website from Google Analytics.';
  /* google_analytics_reports_summary_override */ $view->tag = 'Google Analytics Reports';
  /* google_analytics_reports_summary_override */ $view->base_table = 'google_analytics';
  /* google_analytics_reports_summary_override */ $view->human_name = 'Google Analytics Reports Summary OVERRIDE';
  /* google_analytics_reports_summary_override */ $view->core = 7;
  /* google_analytics_reports_summary_override */ $view->api_version = '3.0';
  /* google_analytics_reports_summary_override */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* google_analytics_reports_summary_override */ /* Display: Master */
  /* google_analytics_reports_summary_override */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['title'] = 'Google Analytics Summary';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_org_manager_access';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['sessions']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: User: Users */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['id'] = 'users';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['field'] = 'users';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['users']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: Page Tracking: Pages / Session */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['id'] = 'pageviewsPerSession';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['field'] = 'pageviewsPerSession';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['set_precision'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['precision'] = '2';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['pageviewsPerSession']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: Session: Avg. Session Duration */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['id'] = 'avgSessionDuration';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['field'] = 'avgSessionDuration';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['date_format'] = 'custom';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['custom_date_format'] = 'i:s';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['avgSessionDuration']['second_date_format'] = 'long';
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: Session: Bounce Rate */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['id'] = 'bounceRate';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['field'] = 'bounceRate';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['set_precision'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['precision'] = '2';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['separator'] = '';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['bounceRate']['suffix'] = '%';
  /* google_analytics_reports_summary_override */  /* Master */ /* Field: User: % New Sessions */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['id'] = 'percentNewSessions';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['field'] = 'percentNewSessions';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['element_type'] = 'strong';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['empty'] = '-';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['set_precision'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['precision'] = '2';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['separator'] = '';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['fields']['percentNewSessions']['suffix'] = '%';
  /* google_analytics_reports_summary_override */  /* Master */ /* Filter criterion: Google Analytics: Start date of report */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['start_date']['value']['value'] = '-31 day';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* google_analytics_reports_summary_override */  /* Master */ /* Filter criterion: Google Analytics: End date of report */
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  /* google_analytics_reports_summary_override */  /* Master */ $handler->display->display_options['filters']['end_date']['group'] = 1;

  /* google_analytics_reports_summary_override */ /* Display: Page */
  /* google_analytics_reports_summary_override */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['style_plugin'] = 'table';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['style_options']['columns'] = array(
  /* google_analytics_reports_summary_override */  /* Page */   'sessions' => 'sessions',
  /* google_analytics_reports_summary_override */  /* Page */   'users' => 'users',
  /* google_analytics_reports_summary_override */  /* Page */   'pageviews' => 'pageviews',
  /* google_analytics_reports_summary_override */  /* Page */   'pageviewsPerSession' => 'pageviewsPerSession',
  /* google_analytics_reports_summary_override */  /* Page */   'avgSessionDuration' => 'avgSessionDuration',
  /* google_analytics_reports_summary_override */  /* Page */   'bounceRate' => 'bounceRate',
  /* google_analytics_reports_summary_override */  /* Page */   'percentNewSessions' => 'percentNewSessions',
  /* google_analytics_reports_summary_override */  /* Page */ );
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['style_options']['default'] = '-1';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['style_options']['info'] = array(
  /* google_analytics_reports_summary_override */  /* Page */   'sessions' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */   'users' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */   'pageviews' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */   'pageviewsPerSession' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */   'avgSessionDuration' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */   'bounceRate' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */   'percentNewSessions' => array(
  /* google_analytics_reports_summary_override */  /* Page */     'sortable' => 0,
  /* google_analytics_reports_summary_override */  /* Page */     'default_sort_order' => 'asc',
  /* google_analytics_reports_summary_override */  /* Page */     'align' => 'views-align-center',
  /* google_analytics_reports_summary_override */  /* Page */     'separator' => '',
  /* google_analytics_reports_summary_override */  /* Page */     'empty_column' => 0,
  /* google_analytics_reports_summary_override */  /* Page */   ),
  /* google_analytics_reports_summary_override */  /* Page */ );
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['path'] = 'admin/reports/google-analytics-reports/summary';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['type'] = 'normal';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['title'] = 'Google Analytics Summary';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['description'] = 'View a traffic report for your site.';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['weight'] = '0';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['name'] = 'management';
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['context'] = 0;
  /* google_analytics_reports_summary_override */  /* Page */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* google_analytics_reports_summary_override */ /* Display: Top Pages */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler = $view->new_display('attachment', 'Top Pages', 'attachment_top_pages');
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary google-analytics-reports-summary-top-pages';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['pager']['type'] = 'some';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['style_plugin'] = 'list';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['style_options']['type'] = 'ol';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['row_plugin'] = 'fields';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['row_options']['inline'] = array(
  /* google_analytics_reports_summary_override */  /* Top Pages */   'pageTitle' => 'pageTitle',
  /* google_analytics_reports_summary_override */  /* Top Pages */   'pageviews' => 'pageviews',
  /* google_analytics_reports_summary_override */  /* Top Pages */ );
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ /* Header: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['header']['area_text_custom']['label'] = 'Top Pages';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Top Pages</h2>';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['empty']['area_text_custom']['label'] = 'Pages not found.';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'Pages not found.';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ /* Field: Page Tracking: Page */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pagePath']['id'] = 'pagePath';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pagePath']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pagePath']['field'] = 'pagePath';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pagePath']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pagePath']['exclude'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pagePath']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ /* Field: Page Tracking: Page Title */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['alter']['alter_text'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['alter']['text'] = '<a href="[pagePath]">[pageTitle]</a>';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageTitle']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['prefix'] = '- ';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['fields']['pageviews']['suffix'] = ' views';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Pages */ /* Sort criterion: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['displays'] = array(
  /* google_analytics_reports_summary_override */  /* Top Pages */   'page' => 'page',
  /* google_analytics_reports_summary_override */  /* Top Pages */   'default' => 0,
  /* google_analytics_reports_summary_override */  /* Top Pages */ );
  /* google_analytics_reports_summary_override */  /* Top Pages */ $handler->display->display_options['attachment_position'] = 'after';

  /* google_analytics_reports_summary_override */ /* Display: Top Sources */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler = $view->new_display('attachment', 'Top Sources', 'attachment_top_sources');
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary google-analytics-reports-summary-top-sources';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['pager']['type'] = 'some';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['style_plugin'] = 'list';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['style_options']['type'] = 'ol';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['row_plugin'] = 'fields';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['row_options']['inline'] = array(
  /* google_analytics_reports_summary_override */  /* Top Sources */   'source' => 'source',
  /* google_analytics_reports_summary_override */  /* Top Sources */   'medium' => 'medium',
  /* google_analytics_reports_summary_override */  /* Top Sources */   'sessions' => 'sessions',
  /* google_analytics_reports_summary_override */  /* Top Sources */ );
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ /* Header: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['header']['area_text_custom']['label'] = 'Top Sources';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Top Sources</h2>';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['empty']['area_text_custom']['label'] = 'Sources not found.';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'Sources not found.';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ /* Field: Traffic Sources: Source */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['id'] = 'source';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['field'] = 'source';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['alter']['alter_text'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['alter']['text'] = '<strong>[source]</strong> - ';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['source']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ /* Field: Traffic Sources: Medium */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['medium']['id'] = 'medium';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['medium']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['medium']['field'] = 'medium';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['medium']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['medium']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ /* Field: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['prefix'] = '- ';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['fields']['sessions']['suffix'] = ' sessions';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Sources */ /* Sort criterion: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['sorts']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['sorts']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['sorts']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['sorts']['sessions']['order'] = 'DESC';
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['displays'] = array(
  /* google_analytics_reports_summary_override */  /* Top Sources */   'page' => 'page',
  /* google_analytics_reports_summary_override */  /* Top Sources */   'default' => 0,
  /* google_analytics_reports_summary_override */  /* Top Sources */ );
  /* google_analytics_reports_summary_override */  /* Top Sources */ $handler->display->display_options['attachment_position'] = 'after';

  /* google_analytics_reports_summary_override */ /* Display: Top Keywords */
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler = $view->new_display('attachment', 'Top Keywords', 'attachment_top_keywords');
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary google-analytics-reports-summary-top-keywords';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['pager']['type'] = 'some';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['style_plugin'] = 'list';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['style_options']['type'] = 'ol';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['row_plugin'] = 'fields';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['row_options']['inline'] = array(
  /* google_analytics_reports_summary_override */  /* Top Keywords */   'keyword' => 'keyword',
  /* google_analytics_reports_summary_override */  /* Top Keywords */   'sessions' => 'sessions',
  /* google_analytics_reports_summary_override */  /* Top Keywords */ );
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ /* Header: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['header']['area_text_custom']['label'] = 'Top Keywords';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Top Keywords</h2>';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['empty']['area_text_custom']['label'] = 'Keywords not found.';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'Keywords not found.';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ /* Field: Traffic Sources: Keyword */
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['id'] = 'keyword';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['field'] = 'keyword';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['alter']['alter_text'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['alter']['text'] = '<strong>[keyword]</strong>';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['keyword']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ /* Field: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['prefix'] = '- ';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['fields']['sessions']['suffix'] = ' sessions';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Top Keywords */ /* Sort criterion: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['sorts']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['sorts']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['sorts']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['sorts']['sessions']['order'] = 'DESC';
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['displays'] = array(
  /* google_analytics_reports_summary_override */  /* Top Keywords */   'page' => 'page',
  /* google_analytics_reports_summary_override */  /* Top Keywords */   'default' => 0,
  /* google_analytics_reports_summary_override */  /* Top Keywords */ );
  /* google_analytics_reports_summary_override */  /* Top Keywords */ $handler->display->display_options['attachment_position'] = 'after';

  /* google_analytics_reports_summary_override */ /* Display: Chart */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler = $view->new_display('attachment', 'Chart', 'attachment_chart');
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary google-analytics-reports-summary-chart';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_plugin'] = 'chart';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['type'] = 'area';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['library'] = '';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['label_field'] = 'date';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['data_fields'] = array(
  /* google_analytics_reports_summary_override */  /* Chart */   'sessions' => 'sessions',
  /* google_analytics_reports_summary_override */  /* Chart */   'pageviews' => 'pageviews',
  /* google_analytics_reports_summary_override */  /* Chart */   'date' => 0,
  /* google_analytics_reports_summary_override */  /* Chart */ );
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['field_colors'] = array(
  /* google_analytics_reports_summary_override */  /* Chart */   'date' => '#2f7ed8',
  /* google_analytics_reports_summary_override */  /* Chart */   'sessions' => '#058dc7',
  /* google_analytics_reports_summary_override */  /* Chart */   'pageviews' => '#aadff3',
  /* google_analytics_reports_summary_override */  /* Chart */ );
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['title_position'] = '';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['width'] = '';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['height'] = '300';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['yaxis_title'] = 'Sessions and Pageviews';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ /* Header: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['header']['area_text_custom']['label'] = 'Sessions and Pageviews over the past 30 days';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Sessions and Pageviews over the past 30 days</h2>';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['empty']['area_text_custom']['label'] = 'No data to display.';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'No data to display.';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ /* Field: Time: Date */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['id'] = 'date';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['field'] = 'date';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['custom_date_format'] = 'j M';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['date']['second_date_format'] = 'long';
  /* google_analytics_reports_summary_override */  /* Chart */ /* Field: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['sessions']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Chart */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Chart */ /* Sort criterion: Time: Date */
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['sorts']['date']['id'] = 'date';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['sorts']['date']['field'] = 'date';
  /* google_analytics_reports_summary_override */  /* Chart */ $handler->display->display_options['displays'] = array(
  /* google_analytics_reports_summary_override */  /* Chart */   'page' => 'page',
  /* google_analytics_reports_summary_override */  /* Chart */   'default' => 0,
  /* google_analytics_reports_summary_override */  /* Chart */   'block_1' => 0,
  /* google_analytics_reports_summary_override */  /* Chart */ );

  /* google_analytics_reports_summary_override */ /* Display: Block */
  /* google_analytics_reports_summary_override */  /* Block */ $handler = $view->new_display('block', 'Block', 'block');
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['title'] = 'Sessions and Pageviews over the last 30 days';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary-block';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['use_more'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['use_more'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['use_more_always'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['use_more_text'] = 'Full report';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['link_display'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['link_display'] = 'page';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['pager']['type'] = 'some';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['style_plugin'] = 'list';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['style_options']['type'] = 'ol';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['row_plugin'] = 'fields';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['row_options']['inline'] = array(
  /* google_analytics_reports_summary_override */  /* Block */   'pageTitle' => 'pageTitle',
  /* google_analytics_reports_summary_override */  /* Block */   'pageviews' => 'pageviews',
  /* google_analytics_reports_summary_override */  /* Block */ );
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ /* Header: Global: View area */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['view']['id'] = 'view';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['view']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['view']['field'] = 'view';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['view']['label'] = 'Block Chart';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['view']['view_to_insert'] = 'google_analytics_reports_summary:attachment_block_chart';
  /* google_analytics_reports_summary_override */  /* Block */ /* Header: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['area_text_custom']['label'] = 'Top Pages';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Top Pages</h3>';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['empty']['area_text_custom']['label'] = 'Site doesn\'t have any statistics.';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'Site doesn\'t have any statistics.';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ /* Field: Page Tracking: Page */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pagePath']['id'] = 'pagePath';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pagePath']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pagePath']['field'] = 'pagePath';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pagePath']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pagePath']['exclude'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pagePath']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ /* Field: Page Tracking: Page Title */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['alter']['alter_text'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['alter']['text'] = '<a href="[pagePath]">[pageTitle]</a>';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageTitle']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['prefix'] = '- ';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['fields']['pageviews']['suffix'] = ' views';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block */ /* Sort criterion: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* google_analytics_reports_summary_override */  /* Block */ $handler->display->display_options['block_description'] = 'Google Analytics Reports Summary Block';

  /* google_analytics_reports_summary_override */ /* Display: Block Chart */
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler = $view->new_display('attachment', 'Block Chart', 'attachment_block_chart');
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['css_class'] = 'google-analytics-reports-summary-block google-analytics-reports-summary-block-chart';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['pager']['type'] = 'none';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_plugin'] = 'chart';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['type'] = 'area';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['library'] = '';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['label_field'] = 'date';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['data_fields'] = array(
  /* google_analytics_reports_summary_override */  /* Block Chart */   'sessions' => 'sessions',
  /* google_analytics_reports_summary_override */  /* Block Chart */   'pageviews' => 'pageviews',
  /* google_analytics_reports_summary_override */  /* Block Chart */   'date' => 0,
  /* google_analytics_reports_summary_override */  /* Block Chart */ );
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['field_colors'] = array(
  /* google_analytics_reports_summary_override */  /* Block Chart */   'date' => '#2f7ed8',
  /* google_analytics_reports_summary_override */  /* Block Chart */   'sessions' => '#058dc7',
  /* google_analytics_reports_summary_override */  /* Block Chart */   'pageviews' => '#aadff3',
  /* google_analytics_reports_summary_override */  /* Block Chart */ );
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['title_position'] = '';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['legend_position'] = '';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['width'] = '';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['height'] = '200';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ /* No results behavior: Global: Unfiltered text */
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['empty']['area_text_custom']['label'] = 'No data to display.';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['empty']['area_text_custom']['content'] = 'No data to display.';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ /* Field: Time: Date */
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['date']['id'] = 'date';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['date']['field'] = 'date';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['date']['custom_date_format'] = 'j M';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['date']['second_date_format'] = 'long';
  /* google_analytics_reports_summary_override */  /* Block Chart */ /* Field: Session: Sessions */
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['sessions']['separator'] = '';
  /* google_analytics_reports_summary_override */  /* Block Chart */ /* Field: Page Tracking: Pageviews */
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* google_analytics_reports_summary_override */  /* Block Chart */ /* Sort criterion: Time: Date */
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['sorts']['date']['id'] = 'date';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['sorts']['date']['field'] = 'date';
  /* google_analytics_reports_summary_override */  /* Block Chart */ $handler->display->display_options['displays'] = array(
  /* google_analytics_reports_summary_override */  /* Block Chart */   'default' => 0,
  /* google_analytics_reports_summary_override */  /* Block Chart */   'page' => 0,
  /* google_analytics_reports_summary_override */  /* Block Chart */   'block_1' => 0,
  /* google_analytics_reports_summary_override */  /* Block Chart */ );
  /* google_analytics_reports_summary_override */ $translatables['google_analytics_reports_summary_override'] = array(
  /* google_analytics_reports_summary_override */   t('Master'),
  /* google_analytics_reports_summary_override */   t('Google Analytics Summary'),
  /* google_analytics_reports_summary_override */   t('more'),
  /* google_analytics_reports_summary_override */   t('Apply'),
  /* google_analytics_reports_summary_override */   t('Reset'),
  /* google_analytics_reports_summary_override */   t('Sort by'),
  /* google_analytics_reports_summary_override */   t('Asc'),
  /* google_analytics_reports_summary_override */   t('Desc'),
  /* google_analytics_reports_summary_override */   t('Sessions'),
  /* google_analytics_reports_summary_override */   t('-'),
  /* google_analytics_reports_summary_override */   t('.'),
  /* google_analytics_reports_summary_override */   t(' '),
  /* google_analytics_reports_summary_override */   t('Users'),
  /* google_analytics_reports_summary_override */   t('Pageviews'),
  /* google_analytics_reports_summary_override */   t('Pages / Session'),
  /* google_analytics_reports_summary_override */   t('Avg. Session Duration'),
  /* google_analytics_reports_summary_override */   t('Bounce Rate'),
  /* google_analytics_reports_summary_override */   t('%'),
  /* google_analytics_reports_summary_override */   t('% New Sessions'),
  /* google_analytics_reports_summary_override */   t('Page'),
  /* google_analytics_reports_summary_override */   t('Top Pages'),
  /* google_analytics_reports_summary_override */   t('<h2>Top Pages</h2>'),
  /* google_analytics_reports_summary_override */   t('Pages not found.'),
  /* google_analytics_reports_summary_override */   t('<a href="[pagePath]">[pageTitle]</a>'),
  /* google_analytics_reports_summary_override */   t('- '),
  /* google_analytics_reports_summary_override */   t(' views'),
  /* google_analytics_reports_summary_override */   t('Top Sources'),
  /* google_analytics_reports_summary_override */   t('<h2>Top Sources</h2>'),
  /* google_analytics_reports_summary_override */   t('Sources not found.'),
  /* google_analytics_reports_summary_override */   t('<strong>[source]</strong> - '),
  /* google_analytics_reports_summary_override */   t(' sessions'),
  /* google_analytics_reports_summary_override */   t('Top Keywords'),
  /* google_analytics_reports_summary_override */   t('<h2>Top Keywords</h2>'),
  /* google_analytics_reports_summary_override */   t('Keywords not found.'),
  /* google_analytics_reports_summary_override */   t('<strong>[keyword]</strong>'),
  /* google_analytics_reports_summary_override */   t('Chart'),
  /* google_analytics_reports_summary_override */   t('Sessions and Pageviews over the past 30 days'),
  /* google_analytics_reports_summary_override */   t('<h2>Sessions and Pageviews over the past 30 days</h2>'),
  /* google_analytics_reports_summary_override */   t('No data to display.'),
  /* google_analytics_reports_summary_override */   t('Date'),
  /* google_analytics_reports_summary_override */   t('Block'),
  /* google_analytics_reports_summary_override */   t('Sessions and Pageviews over the last 30 days'),
  /* google_analytics_reports_summary_override */   t('Full report'),
  /* google_analytics_reports_summary_override */   t('Block Chart'),
  /* google_analytics_reports_summary_override */   t('<h3>Top Pages</h3>'),
  /* google_analytics_reports_summary_override */   t('Site doesn\'t have any statistics.'),
  /* google_analytics_reports_summary_override */   t('Google Analytics Reports Summary Block'),
  /* google_analytics_reports_summary_override */ );
  $export['google_analytics_reports_summary_override'] = $view;

  /* metrics_ga */ $view = new view();
  /* metrics_ga */ $view->name = 'metrics_ga';
  /* metrics_ga */ $view->description = 'Display statistic information about website pages from Google Analytics.';
  /* metrics_ga */ $view->tag = 'Google Analytics Reports';
  /* metrics_ga */ $view->base_table = 'google_analytics';
  /* metrics_ga */ $view->human_name = 'Metrics GA';
  /* metrics_ga */ $view->core = 7;
  /* metrics_ga */ $view->api_version = '3.0';
  /* metrics_ga */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* metrics_ga */ /* Display: Master */
  /* metrics_ga */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* metrics_ga */  /* Master */ $handler->display->display_options['title'] = 'Google Analytics Reports Page';
  /* metrics_ga */  /* Master */ $handler->display->display_options['css_class'] = 'google-analytics-reports-pages';
  /* metrics_ga */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* metrics_ga */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* metrics_ga */  /* Master */ $handler->display->display_options['access']['perm'] = 'access google analytics reports';
  /* metrics_ga */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* metrics_ga */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* metrics_ga */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* metrics_ga */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* metrics_ga */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* Master */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['element_type'] = 'strong';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* Master */ /* Field: Page Tracking: Unique Pageviews */
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['id'] = 'uniquePageviews';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['field'] = 'uniquePageviews';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['element_type'] = 'strong';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['empty'] = '-';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['precision'] = '0';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['uniquePageviews']['separator'] = ' ';
  /* metrics_ga */  /* Master */ /* Field: Page Tracking: Avg. Time on Page */
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['id'] = 'avgTimeOnPage';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['field'] = 'avgTimeOnPage';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['element_type'] = 'strong';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['empty'] = '-';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['date_format'] = 'custom';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['custom_date_format'] = 'i:s';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['avgTimeOnPage']['second_date_format'] = 'long';
  /* metrics_ga */  /* Master */ /* Field: Page Tracking: Entrances */
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['id'] = 'entrances';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['field'] = 'entrances';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['element_type'] = 'strong';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['empty'] = '-';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['precision'] = '0';
  /* metrics_ga */  /* Master */ $handler->display->display_options['fields']['entrances']['separator'] = ' ';
  /* metrics_ga */  /* Master */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Master */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Master */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['value']['value'] = '-31 day';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Master */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  /* metrics_ga */  /* Master */ $handler->display->display_options['filters']['end_date']['group'] = 1;

  /* metrics_ga */ /* Display: Top 50 */
  /* metrics_ga */  /* Top 50 */ $handler = $view->new_display('page', 'Top 50', 'page_1');
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* Top 50 */   'general' => array(
  /* metrics_ga */  /* Top 50 */     'allow_secondary' => 0,
  /* metrics_ga */  /* Top 50 */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'start_date' => array(
  /* metrics_ga */  /* Top 50 */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Top 50 */     'more_options' => array(
  /* metrics_ga */  /* Top 50 */       'is_secondary' => 0,
  /* metrics_ga */  /* Top 50 */       'any_label' => '',
  /* metrics_ga */  /* Top 50 */       'bef_filter_description' => '',
  /* metrics_ga */  /* Top 50 */       'tokens' => array(
  /* metrics_ga */  /* Top 50 */         'available' => array(
  /* metrics_ga */  /* Top 50 */           0 => 'global_types',
  /* metrics_ga */  /* Top 50 */         ),
  /* metrics_ga */  /* Top 50 */       ),
  /* metrics_ga */  /* Top 50 */       'rewrite' => array(
  /* metrics_ga */  /* Top 50 */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Top 50 */       ),
  /* metrics_ga */  /* Top 50 */     ),
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'end_date' => array(
  /* metrics_ga */  /* Top 50 */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Top 50 */     'more_options' => array(
  /* metrics_ga */  /* Top 50 */       'is_secondary' => 0,
  /* metrics_ga */  /* Top 50 */       'any_label' => '',
  /* metrics_ga */  /* Top 50 */       'bef_filter_description' => '',
  /* metrics_ga */  /* Top 50 */       'tokens' => array(
  /* metrics_ga */  /* Top 50 */         'available' => array(
  /* metrics_ga */  /* Top 50 */           0 => 'global_types',
  /* metrics_ga */  /* Top 50 */         ),
  /* metrics_ga */  /* Top 50 */       ),
  /* metrics_ga */  /* Top 50 */       'rewrite' => array(
  /* metrics_ga */  /* Top 50 */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Top 50 */       ),
  /* metrics_ga */  /* Top 50 */     ),
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['pager']['type'] = 'full';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['pager']['options']['quantity'] = '5';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['style_plugin'] = 'table';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['style_options']['grouping'] = array(
  /* metrics_ga */  /* Top 50 */   0 => array(
  /* metrics_ga */  /* Top 50 */     'field' => 'pagePath',
  /* metrics_ga */  /* Top 50 */     'rendered' => 1,
  /* metrics_ga */  /* Top 50 */     'rendered_strip' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['style_options']['columns'] = array(
  /* metrics_ga */  /* Top 50 */   'counter' => 'counter',
  /* metrics_ga */  /* Top 50 */   'pageTitle' => 'pageTitle',
  /* metrics_ga */  /* Top 50 */   'pagePath' => 'pagePath',
  /* metrics_ga */  /* Top 50 */   'country' => 'country',
  /* metrics_ga */  /* Top 50 */   'pageviews' => 'pageviews',
  /* metrics_ga */  /* Top 50 */   'uniquePageviews' => 'uniquePageviews',
  /* metrics_ga */  /* Top 50 */   'avgTimeOnPage' => 'avgTimeOnPage',
  /* metrics_ga */  /* Top 50 */   'entrances' => 'entrances',
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['style_options']['default'] = '-1';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['style_options']['info'] = array(
  /* metrics_ga */  /* Top 50 */   'counter' => array(
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'pageTitle' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'pagePath' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'country' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'pageviews' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'uniquePageviews' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'avgTimeOnPage' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */   'entrances' => array(
  /* metrics_ga */  /* Top 50 */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 */     'align' => '',
  /* metrics_ga */  /* Top 50 */     'separator' => '',
  /* metrics_ga */  /* Top 50 */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 */   ),
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* metrics_ga */  /* Top 50 */ /* Header: Global: Text area */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['header']['area']['content'] = '<a href="/users/dashboard">Back to dashboard</a>';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View result counter */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['id'] = 'counter';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['field'] = 'counter';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['label'] = '';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* metrics_ga */  /* Top 50 */ /* Field: Page Tracking: Page Title */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageTitle']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageTitle']['alter']['text'] = '<a href="[pagePath]">[pageTitle]</a>';
  /* metrics_ga */  /* Top 50 */ /* Field: Page Tracking: Page */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['label'] = '';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['alter']['text'] = 'Title: <a href="[pagePath]">[pageTitle]</a><br> 
Path: [pagePath]';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pagePath']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Top 50 */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['element_type'] = 'strong';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* Top 50 */ /* Field: Page Tracking: Unique Pageviews */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['id'] = 'uniquePageviews';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['field'] = 'uniquePageviews';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['element_type'] = 'strong';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['empty'] = '-';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['precision'] = '0';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['uniquePageviews']['separator'] = ' ';
  /* metrics_ga */  /* Top 50 */ /* Field: Page Tracking: Avg. Time on Page */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['id'] = 'avgTimeOnPage';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['field'] = 'avgTimeOnPage';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['label'] = '';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['element_type'] = 'strong';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['empty'] = '-';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['date_format'] = 'custom';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['custom_date_format'] = 'i:s';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['avgTimeOnPage']['second_date_format'] = 'long';
  /* metrics_ga */  /* Top 50 */ /* Field: Page Tracking: Entrances */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['id'] = 'entrances';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['field'] = 'entrances';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['element_type'] = 'strong';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['empty'] = '-';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['precision'] = '0';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['entrances']['separator'] = ' ';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: Custom text */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['nothing']['label'] = 'Summary';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Views: [pageviews]<br>
Unique views: [uniquePageviews]<br>
Avg. Time on Page: [avgTimeOnPage]  <br>
Entrances: [entrances] ';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['id'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['field'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['label'] = 'Country';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['display'] = 'page_2';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view']['arguments'] = '[!pagePath]';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['field'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['label'] = 'Regions';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['display'] = 'page_3';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_1']['arguments'] = '[!pagePath]';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['field'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['label'] = 'City';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['display'] = 'page_4';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_2']['arguments'] = '[!pagePath]';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['field'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['label'] = 'Device';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['display'] = 'page_5';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_3']['arguments'] = '[!pagePath]';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['id'] = 'view_4';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['field'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['label'] = 'Browser';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['display'] = 'page_6';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_4']['arguments'] = '[!pagePath]';
  /* metrics_ga */  /* Top 50 */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['id'] = 'view_5';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['table'] = 'views';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['field'] = 'view';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['label'] = 'OS';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['display'] = 'page_7';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['fields']['view_5']['arguments'] = '[!pagePath]';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Top 50 */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Top 50 */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Top 50 */   2 => '2',
  /* metrics_ga */  /* Top 50 */   1 => 0,
  /* metrics_ga */  /* Top 50 */   9 => 0,
  /* metrics_ga */  /* Top 50 */   10 => 0,
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Top 50 */   2 => '2',
  /* metrics_ga */  /* Top 50 */   1 => 0,
  /* metrics_ga */  /* Top 50 */   9 => 0,
  /* metrics_ga */  /* Top 50 */   10 => 0,
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page path';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['description'] = 'Use raw path e.g. /or1/or1-co1pu';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Top 50 */   2 => '2',
  /* metrics_ga */  /* Top 50 */   1 => 0,
  /* metrics_ga */  /* Top 50 */   9 => 0,
  /* metrics_ga */  /* Top 50 */   10 => 0,
  /* metrics_ga */  /* Top 50 */ );
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['path'] = 'users/dashboard/metrics';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['menu']['title'] = 'Metrics Pages';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['menu']['weight'] = '0';
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['menu']['context'] = 0;
  /* metrics_ga */  /* Top 50 */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* metrics_ga */ /* Display: Country */
  /* metrics_ga */  /* Country */ $handler = $view->new_display('page', 'Country', 'page_2');
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Country */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Country */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Country */ /* Field: Geo Network: Country */
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['country']['id'] = 'country';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['country']['field'] = 'country';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['country']['label'] = '';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Country */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['alter']['text'] = '[country]: [pageviews]';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* Country */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Country */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* Country */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Country */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Country */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Country */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Country */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Country */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Country */   2 => '2',
  /* metrics_ga */  /* Country */   1 => 0,
  /* metrics_ga */  /* Country */   9 => 0,
  /* metrics_ga */  /* Country */   10 => 0,
  /* metrics_ga */  /* Country */ );
  /* metrics_ga */  /* Country */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date of report';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Country */   2 => '2',
  /* metrics_ga */  /* Country */   1 => 0,
  /* metrics_ga */  /* Country */   9 => 0,
  /* metrics_ga */  /* Country */   10 => 0,
  /* metrics_ga */  /* Country */ );
  /* metrics_ga */  /* Country */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* Country */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Country */   2 => '2',
  /* metrics_ga */  /* Country */   1 => 0,
  /* metrics_ga */  /* Country */   9 => 0,
  /* metrics_ga */  /* Country */   10 => 0,
  /* metrics_ga */  /* Country */ );
  /* metrics_ga */  /* Country */ $handler->display->display_options['path'] = 'admin/content/metrics/country';

  /* metrics_ga */ /* Display: Region */
  /* metrics_ga */  /* Region */ $handler = $view->new_display('page', 'Region', 'page_3');
  /* metrics_ga */  /* Region */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Region */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Region */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Region */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Region */ /* Field: Geo Network: Region */
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['region']['id'] = 'region';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['region']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['region']['field'] = 'region';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['region']['label'] = '';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['region']['exclude'] = TRUE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['region']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Region */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['alter']['text'] = '[region]: [pageviews]';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* Region */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* Region */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Region */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* Region */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Region */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Region */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* Region */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Region */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Region */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Region */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Region */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Region */   2 => '2',
  /* metrics_ga */  /* Region */   1 => 0,
  /* metrics_ga */  /* Region */   9 => 0,
  /* metrics_ga */  /* Region */   10 => 0,
  /* metrics_ga */  /* Region */ );
  /* metrics_ga */  /* Region */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date of report';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Region */   2 => '2',
  /* metrics_ga */  /* Region */   1 => 0,
  /* metrics_ga */  /* Region */   9 => 0,
  /* metrics_ga */  /* Region */   10 => 0,
  /* metrics_ga */  /* Region */ );
  /* metrics_ga */  /* Region */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* Region */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Region */   2 => '2',
  /* metrics_ga */  /* Region */   1 => 0,
  /* metrics_ga */  /* Region */   9 => 0,
  /* metrics_ga */  /* Region */   10 => 0,
  /* metrics_ga */  /* Region */ );
  /* metrics_ga */  /* Region */ $handler->display->display_options['path'] = 'admin/content/metrics/region';

  /* metrics_ga */ /* Display: City */
  /* metrics_ga */  /* City */ $handler = $view->new_display('page', 'City', 'page_4');
  /* metrics_ga */  /* City */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* City */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* City */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* City */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* City */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* City */ /* Field: Geo Network: City */
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['city']['id'] = 'city';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['city']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['city']['field'] = 'city';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['city']['label'] = '';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* City */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['alter']['text'] = '[city]: [pageviews]';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* City */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* City */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* City */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* City */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* City */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* City */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* City */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* City */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* City */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* City */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* City */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* City */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* City */   2 => '2',
  /* metrics_ga */  /* City */   1 => 0,
  /* metrics_ga */  /* City */   9 => 0,
  /* metrics_ga */  /* City */   10 => 0,
  /* metrics_ga */  /* City */ );
  /* metrics_ga */  /* City */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date of report';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* City */   2 => '2',
  /* metrics_ga */  /* City */   1 => 0,
  /* metrics_ga */  /* City */   9 => 0,
  /* metrics_ga */  /* City */   10 => 0,
  /* metrics_ga */  /* City */ );
  /* metrics_ga */  /* City */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* City */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* City */   2 => '2',
  /* metrics_ga */  /* City */   1 => 0,
  /* metrics_ga */  /* City */   9 => 0,
  /* metrics_ga */  /* City */   10 => 0,
  /* metrics_ga */  /* City */ );
  /* metrics_ga */  /* City */ $handler->display->display_options['path'] = 'admin/content/metrics/city';

  /* metrics_ga */ /* Display: Device */
  /* metrics_ga */  /* Device */ $handler = $view->new_display('page', 'Device', 'page_5');
  /* metrics_ga */  /* Device */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Device */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Device */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Device */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Device */ /* Field: Platform or Device: Device Category */
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['deviceCategory']['id'] = 'deviceCategory';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['deviceCategory']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['deviceCategory']['field'] = 'deviceCategory';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['deviceCategory']['label'] = '';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['deviceCategory']['exclude'] = TRUE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['deviceCategory']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Device */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['alter']['text'] = '[deviceCategory]: [pageviews]';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* Device */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* Device */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Device */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* Device */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Device */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Device */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* Device */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Device */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Device */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Device */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Device */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Device */   2 => '2',
  /* metrics_ga */  /* Device */   1 => 0,
  /* metrics_ga */  /* Device */   9 => 0,
  /* metrics_ga */  /* Device */   10 => 0,
  /* metrics_ga */  /* Device */ );
  /* metrics_ga */  /* Device */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date of report';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Device */   2 => '2',
  /* metrics_ga */  /* Device */   1 => 0,
  /* metrics_ga */  /* Device */   9 => 0,
  /* metrics_ga */  /* Device */   10 => 0,
  /* metrics_ga */  /* Device */ );
  /* metrics_ga */  /* Device */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* Device */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Device */   2 => '2',
  /* metrics_ga */  /* Device */   1 => 0,
  /* metrics_ga */  /* Device */   9 => 0,
  /* metrics_ga */  /* Device */   10 => 0,
  /* metrics_ga */  /* Device */ );
  /* metrics_ga */  /* Device */ $handler->display->display_options['path'] = 'admin/content/metrics/device';

  /* metrics_ga */ /* Display: Browser */
  /* metrics_ga */  /* Browser */ $handler = $view->new_display('page', 'Browser', 'page_6');
  /* metrics_ga */  /* Browser */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Browser */ /* Field: Platform or Device: Browser */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['browser']['id'] = 'browser';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['browser']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['browser']['field'] = 'browser';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['browser']['label'] = '';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['browser']['exclude'] = TRUE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['browser']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Browser */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['alter']['text'] = '[browser]: [pageviews]';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Browser */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Browser */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Browser */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Browser */   2 => '2',
  /* metrics_ga */  /* Browser */   1 => 0,
  /* metrics_ga */  /* Browser */   9 => 0,
  /* metrics_ga */  /* Browser */   10 => 0,
  /* metrics_ga */  /* Browser */ );
  /* metrics_ga */  /* Browser */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date of report';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Browser */   2 => '2',
  /* metrics_ga */  /* Browser */   1 => 0,
  /* metrics_ga */  /* Browser */   9 => 0,
  /* metrics_ga */  /* Browser */   10 => 0,
  /* metrics_ga */  /* Browser */ );
  /* metrics_ga */  /* Browser */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* Browser */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Browser */   2 => '2',
  /* metrics_ga */  /* Browser */   1 => 0,
  /* metrics_ga */  /* Browser */   9 => 0,
  /* metrics_ga */  /* Browser */   10 => 0,
  /* metrics_ga */  /* Browser */ );
  /* metrics_ga */  /* Browser */ $handler->display->display_options['path'] = 'admin/content/metrics/country';

  /* metrics_ga */ /* Display: OS */
  /* metrics_ga */  /* OS */ $handler = $view->new_display('page', 'OS', 'page_7');
  /* metrics_ga */  /* OS */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* OS */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* OS */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* OS */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* OS */ /* Field: Platform or Device: Operating System */
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['operatingSystem']['id'] = 'operatingSystem';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['operatingSystem']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['operatingSystem']['field'] = 'operatingSystem';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['operatingSystem']['label'] = '';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['operatingSystem']['exclude'] = TRUE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['operatingSystem']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* OS */ /* Field: Page Tracking: Pageviews */
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['label'] = '';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['alter']['text'] = '[operatingSystem]: [pageviews]';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['empty'] = '-';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  /* metrics_ga */  /* OS */ $handler->display->display_options['fields']['pageviews']['separator'] = ' ';
  /* metrics_ga */  /* OS */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* OS */ /* Sort criterion: Page Tracking: Pageviews */
  /* metrics_ga */  /* OS */ $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  /* metrics_ga */  /* OS */ $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  /* metrics_ga */  /* OS */ $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* metrics_ga */  /* OS */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* OS */ /* Contextual filter: Page Tracking: Page */
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['title_enable'] = TRUE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['title'] = 'Google Analytics details for "%1" page';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['default_argument_options']['argument'] = '/';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* OS */ $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* OS */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* OS */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date of report';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* OS */   2 => '2',
  /* metrics_ga */  /* OS */   1 => 0,
  /* metrics_ga */  /* OS */   9 => 0,
  /* metrics_ga */  /* OS */   10 => 0,
  /* metrics_ga */  /* OS */ );
  /* metrics_ga */  /* OS */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date of report';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* OS */   2 => '2',
  /* metrics_ga */  /* OS */   1 => 0,
  /* metrics_ga */  /* OS */   9 => 0,
  /* metrics_ga */  /* OS */   10 => 0,
  /* metrics_ga */  /* OS */ );
  /* metrics_ga */  /* OS */ /* Filter criterion: Page Tracking: Page */
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['exposed'] = TRUE;
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['expose']['operator_id'] = 'pagePath_op';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['expose']['label'] = 'Page';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['expose']['operator'] = 'pagePath_op';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['expose']['identifier'] = 'pagePath';
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['expose']['required'] = 0;
  /* metrics_ga */  /* OS */ $handler->display->display_options['filters']['pagePath']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* OS */   2 => '2',
  /* metrics_ga */  /* OS */   1 => 0,
  /* metrics_ga */  /* OS */   9 => 0,
  /* metrics_ga */  /* OS */   10 => 0,
  /* metrics_ga */  /* OS */ );
  /* metrics_ga */  /* OS */ $handler->display->display_options['path'] = 'admin/content/metrics/country';

  /* metrics_ga */ /* Display: Top 50 - files */
  /* metrics_ga */  /* Top 50 - files */ $handler = $view->new_display('page', 'Top 50 - files', 'page_8');
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* Top 50 - files */   'general' => array(
  /* metrics_ga */  /* Top 50 - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* Top 50 - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'start_date' => array(
  /* metrics_ga */  /* Top 50 - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Top 50 - files */     'more_options' => array(
  /* metrics_ga */  /* Top 50 - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Top 50 - files */       'any_label' => '',
  /* metrics_ga */  /* Top 50 - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Top 50 - files */       'tokens' => array(
  /* metrics_ga */  /* Top 50 - files */         'available' => array(
  /* metrics_ga */  /* Top 50 - files */           0 => 'global_types',
  /* metrics_ga */  /* Top 50 - files */         ),
  /* metrics_ga */  /* Top 50 - files */       ),
  /* metrics_ga */  /* Top 50 - files */       'rewrite' => array(
  /* metrics_ga */  /* Top 50 - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Top 50 - files */       ),
  /* metrics_ga */  /* Top 50 - files */     ),
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'end_date' => array(
  /* metrics_ga */  /* Top 50 - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Top 50 - files */     'more_options' => array(
  /* metrics_ga */  /* Top 50 - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Top 50 - files */       'any_label' => '',
  /* metrics_ga */  /* Top 50 - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Top 50 - files */       'tokens' => array(
  /* metrics_ga */  /* Top 50 - files */         'available' => array(
  /* metrics_ga */  /* Top 50 - files */           0 => 'global_types',
  /* metrics_ga */  /* Top 50 - files */         ),
  /* metrics_ga */  /* Top 50 - files */       ),
  /* metrics_ga */  /* Top 50 - files */       'rewrite' => array(
  /* metrics_ga */  /* Top 50 - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Top 50 - files */       ),
  /* metrics_ga */  /* Top 50 - files */     ),
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['pager']['type'] = 'full';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['pager']['options']['quantity'] = '5';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['style_plugin'] = 'table';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['style_options']['grouping'] = array(
  /* metrics_ga */  /* Top 50 - files */   0 => array(
  /* metrics_ga */  /* Top 50 - files */     'field' => 'eventLabel',
  /* metrics_ga */  /* Top 50 - files */     'rendered' => 1,
  /* metrics_ga */  /* Top 50 - files */     'rendered_strip' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['style_options']['columns'] = array(
  /* metrics_ga */  /* Top 50 - files */   'pageTitle' => 'pageTitle',
  /* metrics_ga */  /* Top 50 - files */   'eventLabel' => 'eventLabel',
  /* metrics_ga */  /* Top 50 - files */   'totalEvents' => 'totalEvents',
  /* metrics_ga */  /* Top 50 - files */   'eventAction' => 'eventAction',
  /* metrics_ga */  /* Top 50 - files */   'eventCategory' => 'eventCategory',
  /* metrics_ga */  /* Top 50 - files */   'eventValue' => 'eventValue',
  /* metrics_ga */  /* Top 50 - files */   'uniqueEvents' => 'uniqueEvents',
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['style_options']['default'] = '-1';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['style_options']['info'] = array(
  /* metrics_ga */  /* Top 50 - files */   'pageTitle' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'eventLabel' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'totalEvents' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'eventAction' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'eventCategory' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'eventValue' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */   'uniqueEvents' => array(
  /* metrics_ga */  /* Top 50 - files */     'sortable' => 0,
  /* metrics_ga */  /* Top 50 - files */     'default_sort_order' => 'asc',
  /* metrics_ga */  /* Top 50 - files */     'align' => '',
  /* metrics_ga */  /* Top 50 - files */     'separator' => '',
  /* metrics_ga */  /* Top 50 - files */     'empty_column' => 0,
  /* metrics_ga */  /* Top 50 - files */   ),
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ /* Header: Global: Text area */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['header']['area']['content'] = '<a href="/users/dashboard">Back to dashboard</a>';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ /* Field: Page Tracking: Page Title */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['pageTitle']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ /* Field: Event Tracking: Event Label */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['eventLabel']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['eventLabel']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['eventLabel']['alter']['text'] = 'Page: <a href="[eventLabel]">[pageTitle]</a><br>
Path: [eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['totalEvents']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Broken/missing handler */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['uniqueEvents']['id'] = 'uniqueEvents';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['uniqueEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['uniqueEvents']['field'] = 'uniqueEvents';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['uniqueEvents']['exclude'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: Custom text */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['nothing']['label'] = 'Summary';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Downloads: [totalEvents]<br>
Unique downloads: [uniqueEvents]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['id'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['field'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['label'] = 'Country';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['display'] = 'page_9';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view']['arguments'] = '[!eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['field'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['label'] = 'Region';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['display'] = 'page_10';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_1']['arguments'] = '[!eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['field'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['label'] = 'City';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['display'] = 'page_11';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_2']['arguments'] = '[!eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['field'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['label'] = 'Device';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['display'] = 'page_12';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_3']['arguments'] = '[!eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['id'] = 'view_4';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['field'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['label'] = 'Browser';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['display'] = 'page_13';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_4']['arguments'] = '[!eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ /* Field: Global: View */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['id'] = 'view_5';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['table'] = 'views';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['field'] = 'view';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['label'] = 'OS';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['view'] = 'metrics_ga';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['display'] = 'page_14';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['fields']['view_5']['arguments'] = '[!eventLabel]';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* Top 50 - files */   1 => 'AND',
  /* metrics_ga */  /* Top 50 - files */   2 => 'OR',
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Top 50 - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Top 50 - files */   2 => '2',
  /* metrics_ga */  /* Top 50 - files */   1 => 0,
  /* metrics_ga */  /* Top 50 - files */   9 => 0,
  /* metrics_ga */  /* Top 50 - files */   10 => 0,
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Top 50 - files */   2 => '2',
  /* metrics_ga */  /* Top 50 - files */   1 => 0,
  /* metrics_ga */  /* Top 50 - files */   9 => 0,
  /* metrics_ga */  /* Top 50 - files */   10 => 0,
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* Top 50 - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* Top 50 - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Top 50 - files */   2 => '2',
  /* metrics_ga */  /* Top 50 - files */   1 => 0,
  /* metrics_ga */  /* Top 50 - files */   9 => 0,
  /* metrics_ga */  /* Top 50 - files */   10 => 0,
  /* metrics_ga */  /* Top 50 - files */ );
  /* metrics_ga */  /* Top 50 - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files';

  /* metrics_ga */ /* Display: Country - files */
  /* metrics_ga */  /* Country - files */ $handler = $view->new_display('page', 'Country - files', 'page_9');
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* Country - files */   'general' => array(
  /* metrics_ga */  /* Country - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* Country - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* Country - files */   ),
  /* metrics_ga */  /* Country - files */   'start_date' => array(
  /* metrics_ga */  /* Country - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Country - files */     'more_options' => array(
  /* metrics_ga */  /* Country - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Country - files */       'any_label' => '',
  /* metrics_ga */  /* Country - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Country - files */       'tokens' => array(
  /* metrics_ga */  /* Country - files */         'available' => array(
  /* metrics_ga */  /* Country - files */           0 => 'global_types',
  /* metrics_ga */  /* Country - files */         ),
  /* metrics_ga */  /* Country - files */       ),
  /* metrics_ga */  /* Country - files */       'rewrite' => array(
  /* metrics_ga */  /* Country - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Country - files */       ),
  /* metrics_ga */  /* Country - files */     ),
  /* metrics_ga */  /* Country - files */   ),
  /* metrics_ga */  /* Country - files */   'end_date' => array(
  /* metrics_ga */  /* Country - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Country - files */     'more_options' => array(
  /* metrics_ga */  /* Country - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Country - files */       'any_label' => '',
  /* metrics_ga */  /* Country - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Country - files */       'tokens' => array(
  /* metrics_ga */  /* Country - files */         'available' => array(
  /* metrics_ga */  /* Country - files */           0 => 'global_types',
  /* metrics_ga */  /* Country - files */         ),
  /* metrics_ga */  /* Country - files */       ),
  /* metrics_ga */  /* Country - files */       'rewrite' => array(
  /* metrics_ga */  /* Country - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Country - files */       ),
  /* metrics_ga */  /* Country - files */     ),
  /* metrics_ga */  /* Country - files */   ),
  /* metrics_ga */  /* Country - files */ );
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Country - files */ /* Field: Geo Network: Country */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['country']['id'] = 'country';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['country']['field'] = 'country';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['country']['label'] = '';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Country - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['label'] = '';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['alter']['text'] = '[country]:  [totalEvents]';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Country - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Country - files */ /* Contextual filter: Event Tracking: Event Label */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['default_action'] = 'default';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['arguments']['eventLabel']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* Country - files */   1 => 'AND',
  /* metrics_ga */  /* Country - files */   2 => 'OR',
  /* metrics_ga */  /* Country - files */ );
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Country - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Country - files */   2 => '2',
  /* metrics_ga */  /* Country - files */   1 => 0,
  /* metrics_ga */  /* Country - files */   9 => 0,
  /* metrics_ga */  /* Country - files */   10 => 0,
  /* metrics_ga */  /* Country - files */ );
  /* metrics_ga */  /* Country - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Country - files */   2 => '2',
  /* metrics_ga */  /* Country - files */   1 => 0,
  /* metrics_ga */  /* Country - files */   9 => 0,
  /* metrics_ga */  /* Country - files */   10 => 0,
  /* metrics_ga */  /* Country - files */ );
  /* metrics_ga */  /* Country - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* Country - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* Country - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Country - files */   2 => '2',
  /* metrics_ga */  /* Country - files */   1 => 0,
  /* metrics_ga */  /* Country - files */   9 => 0,
  /* metrics_ga */  /* Country - files */   10 => 0,
  /* metrics_ga */  /* Country - files */ );
  /* metrics_ga */  /* Country - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files/country';

  /* metrics_ga */ /* Display: Region - files */
  /* metrics_ga */  /* Region - files */ $handler = $view->new_display('page', 'Region - files', 'page_10');
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* Region - files */   'general' => array(
  /* metrics_ga */  /* Region - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* Region - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* Region - files */   ),
  /* metrics_ga */  /* Region - files */   'start_date' => array(
  /* metrics_ga */  /* Region - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Region - files */     'more_options' => array(
  /* metrics_ga */  /* Region - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Region - files */       'any_label' => '',
  /* metrics_ga */  /* Region - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Region - files */       'tokens' => array(
  /* metrics_ga */  /* Region - files */         'available' => array(
  /* metrics_ga */  /* Region - files */           0 => 'global_types',
  /* metrics_ga */  /* Region - files */         ),
  /* metrics_ga */  /* Region - files */       ),
  /* metrics_ga */  /* Region - files */       'rewrite' => array(
  /* metrics_ga */  /* Region - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Region - files */       ),
  /* metrics_ga */  /* Region - files */     ),
  /* metrics_ga */  /* Region - files */   ),
  /* metrics_ga */  /* Region - files */   'end_date' => array(
  /* metrics_ga */  /* Region - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Region - files */     'more_options' => array(
  /* metrics_ga */  /* Region - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Region - files */       'any_label' => '',
  /* metrics_ga */  /* Region - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Region - files */       'tokens' => array(
  /* metrics_ga */  /* Region - files */         'available' => array(
  /* metrics_ga */  /* Region - files */           0 => 'global_types',
  /* metrics_ga */  /* Region - files */         ),
  /* metrics_ga */  /* Region - files */       ),
  /* metrics_ga */  /* Region - files */       'rewrite' => array(
  /* metrics_ga */  /* Region - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Region - files */       ),
  /* metrics_ga */  /* Region - files */     ),
  /* metrics_ga */  /* Region - files */   ),
  /* metrics_ga */  /* Region - files */ );
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Region - files */ /* Field: Geo Network: Region */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['region']['id'] = 'region';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['region']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['region']['field'] = 'region';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['region']['label'] = '';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['region']['exclude'] = TRUE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['region']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Region - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['label'] = '';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['alter']['text'] = '[region]:  [totalEvents]';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Region - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Region - files */ /* Contextual filter: Event Tracking: Event Label */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['default_action'] = 'default';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['arguments']['eventLabel']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* Region - files */   1 => 'AND',
  /* metrics_ga */  /* Region - files */   2 => 'OR',
  /* metrics_ga */  /* Region - files */ );
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Region - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Region - files */   2 => '2',
  /* metrics_ga */  /* Region - files */   1 => 0,
  /* metrics_ga */  /* Region - files */   9 => 0,
  /* metrics_ga */  /* Region - files */   10 => 0,
  /* metrics_ga */  /* Region - files */ );
  /* metrics_ga */  /* Region - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Region - files */   2 => '2',
  /* metrics_ga */  /* Region - files */   1 => 0,
  /* metrics_ga */  /* Region - files */   9 => 0,
  /* metrics_ga */  /* Region - files */   10 => 0,
  /* metrics_ga */  /* Region - files */ );
  /* metrics_ga */  /* Region - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* Region - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* Region - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Region - files */   2 => '2',
  /* metrics_ga */  /* Region - files */   1 => 0,
  /* metrics_ga */  /* Region - files */   9 => 0,
  /* metrics_ga */  /* Region - files */   10 => 0,
  /* metrics_ga */  /* Region - files */ );
  /* metrics_ga */  /* Region - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files/region';

  /* metrics_ga */ /* Display: City - files */
  /* metrics_ga */  /* City - files */ $handler = $view->new_display('page', 'City - files', 'page_11');
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* City - files */   'general' => array(
  /* metrics_ga */  /* City - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* City - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* City - files */   ),
  /* metrics_ga */  /* City - files */   'start_date' => array(
  /* metrics_ga */  /* City - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* City - files */     'more_options' => array(
  /* metrics_ga */  /* City - files */       'is_secondary' => 0,
  /* metrics_ga */  /* City - files */       'any_label' => '',
  /* metrics_ga */  /* City - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* City - files */       'tokens' => array(
  /* metrics_ga */  /* City - files */         'available' => array(
  /* metrics_ga */  /* City - files */           0 => 'global_types',
  /* metrics_ga */  /* City - files */         ),
  /* metrics_ga */  /* City - files */       ),
  /* metrics_ga */  /* City - files */       'rewrite' => array(
  /* metrics_ga */  /* City - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* City - files */       ),
  /* metrics_ga */  /* City - files */     ),
  /* metrics_ga */  /* City - files */   ),
  /* metrics_ga */  /* City - files */   'end_date' => array(
  /* metrics_ga */  /* City - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* City - files */     'more_options' => array(
  /* metrics_ga */  /* City - files */       'is_secondary' => 0,
  /* metrics_ga */  /* City - files */       'any_label' => '',
  /* metrics_ga */  /* City - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* City - files */       'tokens' => array(
  /* metrics_ga */  /* City - files */         'available' => array(
  /* metrics_ga */  /* City - files */           0 => 'global_types',
  /* metrics_ga */  /* City - files */         ),
  /* metrics_ga */  /* City - files */       ),
  /* metrics_ga */  /* City - files */       'rewrite' => array(
  /* metrics_ga */  /* City - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* City - files */       ),
  /* metrics_ga */  /* City - files */     ),
  /* metrics_ga */  /* City - files */   ),
  /* metrics_ga */  /* City - files */ );
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* City - files */ /* Field: Geo Network: City */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['city']['id'] = 'city';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['city']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['city']['field'] = 'city';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['city']['label'] = '';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* City - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['label'] = '';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['alter']['text'] = '[city]:  [totalEvents]';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* City - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* City - files */ /* Contextual filter: Event Tracking: Event Label */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['default_action'] = 'default';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['arguments']['eventLabel']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* City - files */   1 => 'AND',
  /* metrics_ga */  /* City - files */   2 => 'OR',
  /* metrics_ga */  /* City - files */ );
  /* metrics_ga */  /* City - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* City - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* City - files */   2 => '2',
  /* metrics_ga */  /* City - files */   1 => 0,
  /* metrics_ga */  /* City - files */   9 => 0,
  /* metrics_ga */  /* City - files */   10 => 0,
  /* metrics_ga */  /* City - files */ );
  /* metrics_ga */  /* City - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* City - files */   2 => '2',
  /* metrics_ga */  /* City - files */   1 => 0,
  /* metrics_ga */  /* City - files */   9 => 0,
  /* metrics_ga */  /* City - files */   10 => 0,
  /* metrics_ga */  /* City - files */ );
  /* metrics_ga */  /* City - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* City - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* City - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* City - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* City - files */   2 => '2',
  /* metrics_ga */  /* City - files */   1 => 0,
  /* metrics_ga */  /* City - files */   9 => 0,
  /* metrics_ga */  /* City - files */   10 => 0,
  /* metrics_ga */  /* City - files */ );
  /* metrics_ga */  /* City - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files/city';

  /* metrics_ga */ /* Display: Device - files */
  /* metrics_ga */  /* Device - files */ $handler = $view->new_display('page', 'Device - files', 'page_12');
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* Device - files */   'general' => array(
  /* metrics_ga */  /* Device - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* Device - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* Device - files */   ),
  /* metrics_ga */  /* Device - files */   'start_date' => array(
  /* metrics_ga */  /* Device - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Device - files */     'more_options' => array(
  /* metrics_ga */  /* Device - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Device - files */       'any_label' => '',
  /* metrics_ga */  /* Device - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Device - files */       'tokens' => array(
  /* metrics_ga */  /* Device - files */         'available' => array(
  /* metrics_ga */  /* Device - files */           0 => 'global_types',
  /* metrics_ga */  /* Device - files */         ),
  /* metrics_ga */  /* Device - files */       ),
  /* metrics_ga */  /* Device - files */       'rewrite' => array(
  /* metrics_ga */  /* Device - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Device - files */       ),
  /* metrics_ga */  /* Device - files */     ),
  /* metrics_ga */  /* Device - files */   ),
  /* metrics_ga */  /* Device - files */   'end_date' => array(
  /* metrics_ga */  /* Device - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Device - files */     'more_options' => array(
  /* metrics_ga */  /* Device - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Device - files */       'any_label' => '',
  /* metrics_ga */  /* Device - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Device - files */       'tokens' => array(
  /* metrics_ga */  /* Device - files */         'available' => array(
  /* metrics_ga */  /* Device - files */           0 => 'global_types',
  /* metrics_ga */  /* Device - files */         ),
  /* metrics_ga */  /* Device - files */       ),
  /* metrics_ga */  /* Device - files */       'rewrite' => array(
  /* metrics_ga */  /* Device - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Device - files */       ),
  /* metrics_ga */  /* Device - files */     ),
  /* metrics_ga */  /* Device - files */   ),
  /* metrics_ga */  /* Device - files */ );
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Device - files */ /* Field: Platform or Device: Device Category */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['deviceCategory']['id'] = 'deviceCategory';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['deviceCategory']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['deviceCategory']['field'] = 'deviceCategory';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['deviceCategory']['label'] = '';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['deviceCategory']['exclude'] = TRUE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['deviceCategory']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Device - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['label'] = '';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['alter']['text'] = '[deviceCategory]:  [totalEvents]';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Device - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Device - files */ /* Contextual filter: Event Tracking: Event Label */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['default_action'] = 'default';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['arguments']['eventLabel']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* Device - files */   1 => 'AND',
  /* metrics_ga */  /* Device - files */   2 => 'OR',
  /* metrics_ga */  /* Device - files */ );
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Device - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Device - files */   2 => '2',
  /* metrics_ga */  /* Device - files */   1 => 0,
  /* metrics_ga */  /* Device - files */   9 => 0,
  /* metrics_ga */  /* Device - files */   10 => 0,
  /* metrics_ga */  /* Device - files */ );
  /* metrics_ga */  /* Device - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Device - files */   2 => '2',
  /* metrics_ga */  /* Device - files */   1 => 0,
  /* metrics_ga */  /* Device - files */   9 => 0,
  /* metrics_ga */  /* Device - files */   10 => 0,
  /* metrics_ga */  /* Device - files */ );
  /* metrics_ga */  /* Device - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* Device - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* Device - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Device - files */   2 => '2',
  /* metrics_ga */  /* Device - files */   1 => 0,
  /* metrics_ga */  /* Device - files */   9 => 0,
  /* metrics_ga */  /* Device - files */   10 => 0,
  /* metrics_ga */  /* Device - files */ );
  /* metrics_ga */  /* Device - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files/device';

  /* metrics_ga */ /* Display: Browser - files */
  /* metrics_ga */  /* Browser - files */ $handler = $view->new_display('page', 'Browser - files', 'page_13');
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* Browser - files */   'general' => array(
  /* metrics_ga */  /* Browser - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* Browser - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* Browser - files */   ),
  /* metrics_ga */  /* Browser - files */   'start_date' => array(
  /* metrics_ga */  /* Browser - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Browser - files */     'more_options' => array(
  /* metrics_ga */  /* Browser - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Browser - files */       'any_label' => '',
  /* metrics_ga */  /* Browser - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Browser - files */       'tokens' => array(
  /* metrics_ga */  /* Browser - files */         'available' => array(
  /* metrics_ga */  /* Browser - files */           0 => 'global_types',
  /* metrics_ga */  /* Browser - files */         ),
  /* metrics_ga */  /* Browser - files */       ),
  /* metrics_ga */  /* Browser - files */       'rewrite' => array(
  /* metrics_ga */  /* Browser - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Browser - files */       ),
  /* metrics_ga */  /* Browser - files */     ),
  /* metrics_ga */  /* Browser - files */   ),
  /* metrics_ga */  /* Browser - files */   'end_date' => array(
  /* metrics_ga */  /* Browser - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* Browser - files */     'more_options' => array(
  /* metrics_ga */  /* Browser - files */       'is_secondary' => 0,
  /* metrics_ga */  /* Browser - files */       'any_label' => '',
  /* metrics_ga */  /* Browser - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* Browser - files */       'tokens' => array(
  /* metrics_ga */  /* Browser - files */         'available' => array(
  /* metrics_ga */  /* Browser - files */           0 => 'global_types',
  /* metrics_ga */  /* Browser - files */         ),
  /* metrics_ga */  /* Browser - files */       ),
  /* metrics_ga */  /* Browser - files */       'rewrite' => array(
  /* metrics_ga */  /* Browser - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* Browser - files */       ),
  /* metrics_ga */  /* Browser - files */     ),
  /* metrics_ga */  /* Browser - files */   ),
  /* metrics_ga */  /* Browser - files */ );
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* Browser - files */ /* Field: Platform or Device: Browser */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['browser']['id'] = 'browser';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['browser']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['browser']['field'] = 'browser';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['browser']['label'] = '';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['browser']['exclude'] = TRUE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['browser']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Browser - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['label'] = '';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['alter']['text'] = '[browser]:  [totalEvents]';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* Browser - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* Browser - files */ /* Contextual filter: Event Tracking: Event Label */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['default_action'] = 'default';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['arguments']['eventLabel']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* Browser - files */   1 => 'AND',
  /* metrics_ga */  /* Browser - files */   2 => 'OR',
  /* metrics_ga */  /* Browser - files */ );
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* Browser - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Browser - files */   2 => '2',
  /* metrics_ga */  /* Browser - files */   1 => 0,
  /* metrics_ga */  /* Browser - files */   9 => 0,
  /* metrics_ga */  /* Browser - files */   10 => 0,
  /* metrics_ga */  /* Browser - files */ );
  /* metrics_ga */  /* Browser - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Browser - files */   2 => '2',
  /* metrics_ga */  /* Browser - files */   1 => 0,
  /* metrics_ga */  /* Browser - files */   9 => 0,
  /* metrics_ga */  /* Browser - files */   10 => 0,
  /* metrics_ga */  /* Browser - files */ );
  /* metrics_ga */  /* Browser - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* Browser - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* Browser - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* Browser - files */   2 => '2',
  /* metrics_ga */  /* Browser - files */   1 => 0,
  /* metrics_ga */  /* Browser - files */   9 => 0,
  /* metrics_ga */  /* Browser - files */   10 => 0,
  /* metrics_ga */  /* Browser - files */ );
  /* metrics_ga */  /* Browser - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files/device';

  /* metrics_ga */ /* Display: OS - files */
  /* metrics_ga */  /* OS - files */ $handler = $view->new_display('page', 'OS - files', 'page_14');
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* metrics_ga */  /* OS - files */   'general' => array(
  /* metrics_ga */  /* OS - files */     'allow_secondary' => 0,
  /* metrics_ga */  /* OS - files */     'secondary_label' => 'Advanced options',
  /* metrics_ga */  /* OS - files */   ),
  /* metrics_ga */  /* OS - files */   'start_date' => array(
  /* metrics_ga */  /* OS - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* OS - files */     'more_options' => array(
  /* metrics_ga */  /* OS - files */       'is_secondary' => 0,
  /* metrics_ga */  /* OS - files */       'any_label' => '',
  /* metrics_ga */  /* OS - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* OS - files */       'tokens' => array(
  /* metrics_ga */  /* OS - files */         'available' => array(
  /* metrics_ga */  /* OS - files */           0 => 'global_types',
  /* metrics_ga */  /* OS - files */         ),
  /* metrics_ga */  /* OS - files */       ),
  /* metrics_ga */  /* OS - files */       'rewrite' => array(
  /* metrics_ga */  /* OS - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* OS - files */       ),
  /* metrics_ga */  /* OS - files */     ),
  /* metrics_ga */  /* OS - files */   ),
  /* metrics_ga */  /* OS - files */   'end_date' => array(
  /* metrics_ga */  /* OS - files */     'bef_format' => 'bef_datepicker',
  /* metrics_ga */  /* OS - files */     'more_options' => array(
  /* metrics_ga */  /* OS - files */       'is_secondary' => 0,
  /* metrics_ga */  /* OS - files */       'any_label' => '',
  /* metrics_ga */  /* OS - files */       'bef_filter_description' => '',
  /* metrics_ga */  /* OS - files */       'tokens' => array(
  /* metrics_ga */  /* OS - files */         'available' => array(
  /* metrics_ga */  /* OS - files */           0 => 'global_types',
  /* metrics_ga */  /* OS - files */         ),
  /* metrics_ga */  /* OS - files */       ),
  /* metrics_ga */  /* OS - files */       'rewrite' => array(
  /* metrics_ga */  /* OS - files */         'filter_rewrite_values' => '',
  /* metrics_ga */  /* OS - files */       ),
  /* metrics_ga */  /* OS - files */     ),
  /* metrics_ga */  /* OS - files */   ),
  /* metrics_ga */  /* OS - files */ );
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['pager']['type'] = 'some';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['style_plugin'] = 'default';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['row_plugin'] = 'fields';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* metrics_ga */  /* OS - files */ /* Field: Platform or Device: Operating System */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['operatingSystem']['id'] = 'operatingSystem';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['operatingSystem']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['operatingSystem']['field'] = 'operatingSystem';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['operatingSystem']['label'] = '';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['operatingSystem']['exclude'] = TRUE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['operatingSystem']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* OS - files */ /* Field: Event Tracking: Total Events */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['label'] = '';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['alter']['alter_text'] = TRUE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['alter']['text'] = '[operatingSystem]:  [totalEvents]';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['element_label_colon'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['fields']['totalEvents']['precision'] = '0';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* metrics_ga */  /* OS - files */ /* Sort criterion: Event Tracking: Total Events */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['sorts']['totalEvents']['id'] = 'totalEvents';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['sorts']['totalEvents']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['sorts']['totalEvents']['field'] = 'totalEvents';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['sorts']['totalEvents']['order'] = 'DESC';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* metrics_ga */  /* OS - files */ /* Contextual filter: Event Tracking: Event Label */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['default_action'] = 'default';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['default_argument_type'] = 'fixed';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['number_of_records'] = '0';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['summary']['format'] = 'default_summary';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['arguments']['eventLabel']['summary_options']['items_per_page'] = '25';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* metrics_ga */  /* OS - files */   1 => 'AND',
  /* metrics_ga */  /* OS - files */   2 => 'OR',
  /* metrics_ga */  /* OS - files */ );
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* metrics_ga */  /* OS - files */ /* Filter criterion: Google Analytics: Start date of report */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* OS - files */   2 => '2',
  /* metrics_ga */  /* OS - files */   1 => 0,
  /* metrics_ga */  /* OS - files */   9 => 0,
  /* metrics_ga */  /* OS - files */   10 => 0,
  /* metrics_ga */  /* OS - files */ );
  /* metrics_ga */  /* OS - files */ /* Filter criterion: Google Analytics: End date of report */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['group'] = 1;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* OS - files */   2 => '2',
  /* metrics_ga */  /* OS - files */   1 => 0,
  /* metrics_ga */  /* OS - files */   9 => 0,
  /* metrics_ga */  /* OS - files */   10 => 0,
  /* metrics_ga */  /* OS - files */ );
  /* metrics_ga */  /* OS - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel']['id'] = 'eventLabel';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel']['field'] = 'eventLabel';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel']['operator'] = 'regular_expression';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel']['value'] = '.avi|.csx|.doc|.docx|.gif|.gz|.jpeg|.jpg|.m4a|.m4v|.mov|.mp3|.mp4|.mpeg|.mpg|.mpv|.notebook|.odp|.ods|.odt';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel']['group'] = 2;
  /* metrics_ga */  /* OS - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_1']['id'] = 'eventLabel_1';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_1']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_1']['field'] = 'eventLabel';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_1']['operator'] = 'regular_expression';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_1']['value'] = '.oga|.ogg|.ogv|.pdf|.png|.pps|.ppsx|.ppt|.pptx|.pub|.tar|.txt|.weba|.webm|.webp|.wmv|.xls|.xlsx|.zip';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_1']['group'] = 2;
  /* metrics_ga */  /* OS - files */ /* Filter criterion: Event Tracking: Event Label */
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['id'] = 'eventLabel_2';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['table'] = 'google_analytics';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['field'] = 'eventLabel';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['operator'] = 'contains';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['exposed'] = TRUE;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator_id'] = 'eventLabel_2_op';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['label'] = 'File path';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['operator'] = 'eventLabel_2_op';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['identifier'] = 'eventLabel_2';
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['required'] = 0;
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['filters']['eventLabel_2']['expose']['remember_roles'] = array(
  /* metrics_ga */  /* OS - files */   2 => '2',
  /* metrics_ga */  /* OS - files */   1 => 0,
  /* metrics_ga */  /* OS - files */   9 => 0,
  /* metrics_ga */  /* OS - files */   10 => 0,
  /* metrics_ga */  /* OS - files */ );
  /* metrics_ga */  /* OS - files */ $handler->display->display_options['path'] = 'users/dashboard/metrics/files/device';
  /* metrics_ga */ $translatables['metrics_ga'] = array(
  /* metrics_ga */   t('Master'),
  /* metrics_ga */   t('Google Analytics Reports Page'),
  /* metrics_ga */   t('more'),
  /* metrics_ga */   t('Apply'),
  /* metrics_ga */   t('Reset'),
  /* metrics_ga */   t('Sort by'),
  /* metrics_ga */   t('Asc'),
  /* metrics_ga */   t('Desc'),
  /* metrics_ga */   t('Pageviews'),
  /* metrics_ga */   t('-'),
  /* metrics_ga */   t('.'),
  /* metrics_ga */   t(' '),
  /* metrics_ga */   t('Unique Pageviews'),
  /* metrics_ga */   t('Avg. Time on Page'),
  /* metrics_ga */   t('Entrances'),
  /* metrics_ga */   t('All'),
  /* metrics_ga */   t('Google Analytics details for "%1" page'),
  /* metrics_ga */   t('Start date of report'),
  /* metrics_ga */   t('Top 50'),
  /* metrics_ga */   t('Advanced options'),
  /* metrics_ga */   t('Items per page'),
  /* metrics_ga */   t('- All -'),
  /* metrics_ga */   t('Offset'),
  /* metrics_ga */   t('« first'),
  /* metrics_ga */   t('‹ previous'),
  /* metrics_ga */   t('next ›'),
  /* metrics_ga */   t('last »'),
  /* metrics_ga */   t('<a href="/users/dashboard">Back to dashboard</a>'),
  /* metrics_ga */   t('Page Title'),
  /* metrics_ga */   t('<a href="[pagePath]">[pageTitle]</a>'),
  /* metrics_ga */   t('Title: <a href="[pagePath]">[pageTitle]</a><br> 
Path: [pagePath]'),
  /* metrics_ga */   t('Summary'),
  /* metrics_ga */   t('Views: [pageviews]<br>
Unique views: [uniquePageviews]<br>
Avg. Time on Page: [avgTimeOnPage]  <br>
Entrances: [entrances] '),
  /* metrics_ga */   t('Country'),
  /* metrics_ga */   t('Regions'),
  /* metrics_ga */   t('City'),
  /* metrics_ga */   t('Device'),
  /* metrics_ga */   t('Browser'),
  /* metrics_ga */   t('OS'),
  /* metrics_ga */   t('Start date'),
  /* metrics_ga */   t('End date'),
  /* metrics_ga */   t('Page path'),
  /* metrics_ga */   t('Use raw path e.g. /or1/or1-co1pu'),
  /* metrics_ga */   t('[country]: [pageviews]'),
  /* metrics_ga */   t('End date of report'),
  /* metrics_ga */   t('Page'),
  /* metrics_ga */   t('Region'),
  /* metrics_ga */   t('[region]: [pageviews]'),
  /* metrics_ga */   t('[city]: [pageviews]'),
  /* metrics_ga */   t('[deviceCategory]: [pageviews]'),
  /* metrics_ga */   t('[browser]: [pageviews]'),
  /* metrics_ga */   t('[operatingSystem]: [pageviews]'),
  /* metrics_ga */   t('Top 50 - files'),
  /* metrics_ga */   t('Event Label'),
  /* metrics_ga */   t('Page: <a href="[eventLabel]">[pageTitle]</a><br>
Path: [eventLabel]'),
  /* metrics_ga */   t('Total Events'),
  /* metrics_ga */   t(','),
  /* metrics_ga */   t('Broken handler google_analytics.uniqueEvents'),
  /* metrics_ga */   t('Downloads: [totalEvents]<br>
Unique downloads: [uniqueEvents]'),
  /* metrics_ga */   t('File path'),
  /* metrics_ga */   t('Country - files'),
  /* metrics_ga */   t('[country]:  [totalEvents]'),
  /* metrics_ga */   t('Region - files'),
  /* metrics_ga */   t('[region]:  [totalEvents]'),
  /* metrics_ga */   t('City - files'),
  /* metrics_ga */   t('[city]:  [totalEvents]'),
  /* metrics_ga */   t('Device - files'),
  /* metrics_ga */   t('[deviceCategory]:  [totalEvents]'),
  /* metrics_ga */   t('Browser - files'),
  /* metrics_ga */   t('[browser]:  [totalEvents]'),
  /* metrics_ga */   t('OS - files'),
  /* metrics_ga */   t('[operatingSystem]:  [totalEvents]'),
  /* metrics_ga */ );
  $export['metrics_ga'] = $view;

  return $export;
}
