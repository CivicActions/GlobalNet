<?php
/**
 * @file
 * gn2_taxonomy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_taxonomy_views_default_views() {
  $export = array();

  /* admin_tags */ $view = new view();
  /* admin_tags */ $view->name = 'admin_tags';
  /* admin_tags */ $view->description = '';
  /* admin_tags */ $view->tag = 'default';
  /* admin_tags */ $view->base_table = 'taxonomy_term_data';
  /* admin_tags */ $view->human_name = 'Admin Tags';
  /* admin_tags */ $view->core = 7;
  /* admin_tags */ $view->api_version = '3.0';
  /* admin_tags */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* admin_tags */ /* Display: Master */
  /* admin_tags */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* admin_tags */  /* Master */ $handler->display->display_options['title'] = 'Admin Tags';
  /* admin_tags */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* admin_tags */  /* Master */ $handler->display->display_options['group_by'] = TRUE;
  /* admin_tags */  /* Master */ $handler->display->display_options['access']['type'] = 'role';
  /* admin_tags */  /* Master */ $handler->display->display_options['access']['role'] = array(
  /* admin_tags */  /* Master */   9 => '9',
  /* admin_tags */  /* Master */ );
  /* admin_tags */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* admin_tags */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* admin_tags */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* admin_tags */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* admin_tags */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* admin_tags */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* admin_tags */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_tags */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_tags */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_tags */  /* Master */   'name' => 'name',
  /* admin_tags */  /* Master */   'title' => 'title',
  /* admin_tags */  /* Master */ );
  /* admin_tags */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* admin_tags */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_tags */  /* Master */   'views_bulk_operations' => array(
  /* admin_tags */  /* Master */     'align' => '',
  /* admin_tags */  /* Master */     'separator' => '',
  /* admin_tags */  /* Master */     'empty_column' => 0,
  /* admin_tags */  /* Master */   ),
  /* admin_tags */  /* Master */   'name' => array(
  /* admin_tags */  /* Master */     'sortable' => 0,
  /* admin_tags */  /* Master */     'default_sort_order' => 'asc',
  /* admin_tags */  /* Master */     'align' => '',
  /* admin_tags */  /* Master */     'separator' => '',
  /* admin_tags */  /* Master */     'empty_column' => 0,
  /* admin_tags */  /* Master */   ),
  /* admin_tags */  /* Master */   'title' => array(
  /* admin_tags */  /* Master */     'sortable' => 0,
  /* admin_tags */  /* Master */     'default_sort_order' => 'asc',
  /* admin_tags */  /* Master */     'align' => '',
  /* admin_tags */  /* Master */     'separator' => '',
  /* admin_tags */  /* Master */     'empty_column' => 0,
  /* admin_tags */  /* Master */   ),
  /* admin_tags */  /* Master */ );
  /* admin_tags */  /* Master */ /* Relationship: Taxonomy term: Content using Tags */
  /* admin_tags */  /* Master */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* admin_tags */  /* Master */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* admin_tags */  /* Master */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* admin_tags */  /* Master */ /* Field: Bulk operations: Taxonomy term */
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* admin_tags */  /* Master */   'action::views_bulk_operations_delete_item' => array(
  /* admin_tags */  /* Master */     'selected' => 1,
  /* admin_tags */  /* Master */     'postpone_processing' => 0,
  /* admin_tags */  /* Master */     'skip_confirmation' => 1,
  /* admin_tags */  /* Master */     'override_label' => 0,
  /* admin_tags */  /* Master */     'label' => '',
  /* admin_tags */  /* Master */   ),
  /* admin_tags */  /* Master */ );
  /* admin_tags */  /* Master */ /* Field: Taxonomy term: Name */
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Tags';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* admin_tags */  /* Master */ /* Field: COUNT(Content: Title) */
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_tags_node';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['group_type'] = 'count';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['alter']['text'] = '[title] content(s) using this tag.';
  /* admin_tags */  /* Master */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* admin_tags */  /* Master */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* admin_tags */  /* Master */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* admin_tags */  /* Master */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* admin_tags */  /* Master */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* admin_tags */  /* Master */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* admin_tags */  /* Master */   'tags' => 'tags',
  /* admin_tags */  /* Master */ );

  /* admin_tags */ /* Display: Page */
  /* admin_tags */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* admin_tags */  /* Page */ $handler->display->display_options['path'] = 'admin/tags';
  /* admin_tags */ $translatables['admin_tags'] = array(
  /* admin_tags */   t('Master'),
  /* admin_tags */   t('Admin Tags'),
  /* admin_tags */   t('more'),
  /* admin_tags */   t('Apply'),
  /* admin_tags */   t('Reset'),
  /* admin_tags */   t('Sort by'),
  /* admin_tags */   t('Asc'),
  /* admin_tags */   t('Desc'),
  /* admin_tags */   t('Items per page'),
  /* admin_tags */   t('- All -'),
  /* admin_tags */   t('Offset'),
  /* admin_tags */   t('« first'),
  /* admin_tags */   t('‹ previous'),
  /* admin_tags */   t('next ›'),
  /* admin_tags */   t('last »'),
  /* admin_tags */   t('field_tags'),
  /* admin_tags */   t('Taxonomy term'),
  /* admin_tags */   t('- Choose an operation -'),
  /* admin_tags */   t('Tags'),
  /* admin_tags */   t('[title] content(s) using this tag.'),
  /* admin_tags */   t('Page'),
  /* admin_tags */ );
  $export['admin_tags'] = $view;

  /* topics */ $view = new view();
  /* topics */ $view->name = 'topics';
  /* topics */ $view->description = '';
  /* topics */ $view->tag = 'default';
  /* topics */ $view->base_table = 'taxonomy_term_data';
  /* topics */ $view->human_name = 'Topics';
  /* topics */ $view->core = 7;
  /* topics */ $view->api_version = '3.0';
  /* topics */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* topics */ /* Display: Master */
  /* topics */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* topics */  /* Master */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* topics */  /* Master */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* topics */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* topics */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* topics */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* topics */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  /* topics */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* topics */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* topics */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* topics */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Master */ /* Header: Global: Text area */
  /* topics */  /* Master */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* topics */  /* Master */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* topics */  /* Master */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* topics */  /* Master */ $handler->display->display_options['header']['area']['content'] = 'Classes, resources, and communities are organized around a specific topic. Click on  a topic title to see all available items.';
  /* topics */  /* Master */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* topics */  /* Master */ /* No results behavior: Global: Text area */
  /* topics */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* topics */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* topics */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* topics */  /* Master */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  /* topics */  /* Master */ $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* topics */  /* Master */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Master */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Master */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Master */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Master */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Master */ /* Field: Taxonomy term: Name */
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['label'] = '';
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* topics */  /* Master */ $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* topics */  /* Master */ /* Field: COUNT(Content: Nid) */
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['alter']['text'] = '([nid] items)';
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Master */ $handler->display->display_options['fields']['nid']['empty'] = '(0 items)';
  /* topics */  /* Master */ /* Field: Taxonomy term: Term description */
  /* topics */  /* Master */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* topics */  /* Master */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Master */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* topics */  /* Master */ $handler->display->display_options['fields']['description']['label'] = '';
  /* topics */  /* Master */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* topics */  /* Master */ /* Sort criterion: Taxonomy term: Name */
  /* topics */  /* Master */ $handler->display->display_options['sorts']['name']['id'] = 'name';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['sorts']['name']['expose']['label'] = 'Name';
  /* topics */  /* Master */ /* Sort criterion: COUNT(Content: Nid) */
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['table'] = 'node';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['group_type'] = 'count';
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Results';
  /* topics */  /* Master */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Master */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Master */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Master */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Master */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Master */   'topics' => 'topics',
  /* topics */  /* Master */ );
  /* topics */  /* Master */ /* Filter criterion: Content: Type */
  /* topics */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Master */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Master */   'announcement' => 'announcement',
  /* topics */  /* Master */   'course' => 'course',
  /* topics */  /* Master */   'event' => 'event',
  /* topics */  /* Master */   'group' => 'group',
  /* topics */  /* Master */   'news' => 'news',
  /* topics */  /* Master */   'publication' => 'publication',
  /* topics */  /* Master */ );
  /* topics */  /* Master */ /* Filter criterion: Taxonomy term: Term description */
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['id'] = 'description';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['field'] = 'description';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['operator'] = 'word';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['exposed'] = TRUE;
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['operator_id'] = 'description_op';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['label'] = 'Term description';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['operator'] = 'description_op';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['identifier'] = 'description';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['remember_roles'] = array(
  /* topics */  /* Master */   2 => '2',
  /* topics */  /* Master */   1 => 0,
  /* topics */  /* Master */   9 => 0,
  /* topics */  /* Master */ );
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['autocomplete_items'] = '10';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['autocomplete_min_chars'] = '0';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['autocomplete_field'] = 'description';
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['autocomplete_raw_suggestion'] = 1;
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['autocomplete_raw_dropdown'] = 1;
  /* topics */  /* Master */ $handler->display->display_options['filters']['description']['expose']['autocomplete_dependent'] = 0;

  /* topics */ /* Display: Topic OG Terms List */
  /* topics */  /* Topic OG Terms List */ $handler = $view->new_display('panel_pane', 'Topic OG Terms List', 'panel_pane_1');
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['pager']['type'] = 'full';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Terms List */ /* Field: Taxonomy term: Name */
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['label'] = '';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* topics */  /* Topic OG Terms List */ /* Field: COUNT(Content: Nid) */
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['alter']['text'] = '([nid] items)';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['nid']['empty'] = '(0 items)';
  /* topics */  /* Topic OG Terms List */ /* Field: Taxonomy term: Term description */
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['description']['label'] = '';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Terms List */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Terms List */   'topics' => 'topics',
  /* topics */  /* Topic OG Terms List */ );
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* topics */  /* Topic OG Terms List */ /* Filter criterion: Taxonomy term: Name */
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['id'] = 'name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['field'] = 'name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['operator'] = 'word';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['group'] = 1;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  /* topics */  /* Topic OG Terms List */   2 => '2',
  /* topics */  /* Topic OG Terms List */   1 => 0,
  /* topics */  /* Topic OG Terms List */   9 => 0,
  /* topics */  /* Topic OG Terms List */ );
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* topics */  /* Topic OG Terms List */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Terms List */   'gid' => array(
  /* topics */  /* Topic OG Terms List */     'type' => 'panel',
  /* topics */  /* Topic OG Terms List */     'context' => 'entity:comment.author',
  /* topics */  /* Topic OG Terms List */     'context_optional' => 0,
  /* topics */  /* Topic OG Terms List */     'panel' => '0',
  /* topics */  /* Topic OG Terms List */     'fixed' => '',
  /* topics */  /* Topic OG Terms List */     'label' => 'OG membership: Group ID',
  /* topics */  /* Topic OG Terms List */   ),
  /* topics */  /* Topic OG Terms List */ );

  /* topics */ /* Display: Topic OG Term Header */
  /* topics */  /* Topic OG Term Header */ $handler = $view->new_display('panel_pane', 'Topic OG Term Header', 'panel_pane_2');
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Term Header */ /* Field: Taxonomy term: Name */
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['label'] = '';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Term Header */ /* Field: Taxonomy term: Term description */
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['description']['label'] = '';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG Term Header */ /* Contextual filter: Taxonomy term: Term ID */
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG Term Header */   'topics' => 'topics',
  /* topics */  /* Topic OG Term Header */ );
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Term Header */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Term Header */   'tags' => 'tags',
  /* topics */  /* Topic OG Term Header */   'topics' => 'topics',
  /* topics */  /* Topic OG Term Header */ );
  /* topics */  /* Topic OG Term Header */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Term Header */   'tid' => array(
  /* topics */  /* Topic OG Term Header */     'type' => 'user',
  /* topics */  /* Topic OG Term Header */     'context' => 'entity:taxonomy_term.tid',
  /* topics */  /* Topic OG Term Header */     'context_optional' => 0,
  /* topics */  /* Topic OG Term Header */     'panel' => '0',
  /* topics */  /* Topic OG Term Header */     'fixed' => '',
  /* topics */  /* Topic OG Term Header */     'label' => 'Taxonomy term: Term ID',
  /* topics */  /* Topic OG Term Header */   ),
  /* topics */  /* Topic OG Term Header */ );

  /* topics */ /* Display: Topic OG News */
  /* topics */  /* Topic OG News */ $handler = $view->new_display('panel_pane', 'Topic OG News', 'panel_pane_3');
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['title'] = 'News';
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG News */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ /* Relationship: Content: Author */
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ /* Relationship: Content: Vote results */
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Topic OG News */   'value_type' => '',
  /* topics */  /* Topic OG News */   'tag' => '',
  /* topics */  /* Topic OG News */   'function' => '',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG News */ /* Field: Field: Family Name */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Topic OG News */   'field_formatter_class' => '',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ /* Field: Field: Given Name */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Topic OG News */   'field_formatter_class' => '',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ /* Field: Content: Post date */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Topic OG News */ /* Field: Content: Body */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Topic OG News */   'field_formatter_class' => '',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG News */ /* Field: Content: Comment count */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ /* Field: Content: Main Image */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['hide_alter_empty'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Topic OG News */   'image_style' => 'news_thumbnail',
  /* topics */  /* Topic OG News */   'image_link' => 'content',
  /* topics */  /* Topic OG News */   'field_formatter_class' => '',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG News */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Topic OG News */   'image_style' => 'news_thumbnail',
  /* topics */  /* Topic OG News */   'image_link' => 'content',
  /* topics */  /* Topic OG News */   'field_formatter_class' => '',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG News */ /* Field: Vote results: Value */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Topic OG News */ /* Field: Content: Title */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ /* Field: Global: Custom text */
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="topics--metadata num-comments">[comment_count] <span>comments</span> </div> 
<div class="topics--metadata rate-info">[value] <span>likes</span> </div> 
</div>';
  /* topics */  /* Topic OG News */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG News */ /* Sort criterion: Content: Title */
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Topic OG News */ /* Sort criterion: Content: Post date */
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG News */ /* Contextual filter: Field: Topics (field_topic) */
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG News */ $handler->display->display_options['arguments']['field_topic_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG News */   'topics' => 'topics',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG News */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG News */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG News */   'topics' => 'topics',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ /* Filter criterion: Content: Type */
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG News */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Topic OG News */   'news' => 'news',
  /* topics */  /* Topic OG News */ );
  /* topics */  /* Topic OG News */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG News */   'field_topic_tid' => array(
  /* topics */  /* Topic OG News */     'type' => 'user',
  /* topics */  /* Topic OG News */     'context' => 'entity:taxonomy_term.tid',
  /* topics */  /* Topic OG News */     'context_optional' => 0,
  /* topics */  /* Topic OG News */     'panel' => '0',
  /* topics */  /* Topic OG News */     'fixed' => '',
  /* topics */  /* Topic OG News */     'label' => 'Content: Topics (field_topic)',
  /* topics */  /* Topic OG News */   ),
  /* topics */  /* Topic OG News */ );

  /* topics */ /* Display: Topic OG Courses */
  /* topics */  /* Topic OG Courses */ $handler = $view->new_display('panel_pane', 'Topic OG Courses', 'panel_pane_4');
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['title'] = 'Courses';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['row_options']['inline'] = array(
  /* topics */  /* Topic OG Courses */   'field_course_dates' => 'field_course_dates',
  /* topics */  /* Topic OG Courses */   'nid' => 'nid',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['row_options']['separator'] = ', ';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Courses */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Courses */ /* Relationship: Content: Author */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ /* Relationship: Content: Vote results */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Topic OG Courses */   'value_type' => '',
  /* topics */  /* Topic OG Courses */   'tag' => '',
  /* topics */  /* Topic OG Courses */   'function' => '',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Field: Content: Title */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Field: Content: Course Dates */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
  /* topics */  /* Topic OG Courses */   'format_type' => 'military_without_time',
  /* topics */  /* Topic OG Courses */   'fromto' => 'both',
  /* topics */  /* Topic OG Courses */   'multiple_number' => '',
  /* topics */  /* Topic OG Courses */   'multiple_from' => '',
  /* topics */  /* Topic OG Courses */   'multiple_to' => '',
  /* topics */  /* Topic OG Courses */   'show_repeat_rule' => 'show',
  /* topics */  /* Topic OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['field_course_dates']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Courses */ /* Field: Content: Nid */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Field: Content: Body */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['element_type'] = 'p';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Topic OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Courses */ /* Field: Global: Custom text */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="courses-summary-content">
<h5>[title]</h5>
<p class="author-date">[field_course_dates] | [nid]</p>
<p>[body]</p>
</div>';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Sort criterion: Content: Title */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Topic OG Courses */ /* Sort criterion: Content: Course Dates -  start date (field_course_dates) */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['order'] = 'DESC';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['exposed'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['expose']['label'] = 'Start Date';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Contextual filter: Field: Topics (field_topic) */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['arguments']['field_topic_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG Courses */   'topics' => 'topics',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Courses */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Courses */   'topics' => 'topics',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ /* Filter criterion: Content: Type */
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Topic OG Courses */   'course' => 'course',
  /* topics */  /* Topic OG Courses */ );
  /* topics */  /* Topic OG Courses */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Courses */   'field_topic_tid' => array(
  /* topics */  /* Topic OG Courses */     'type' => 'user',
  /* topics */  /* Topic OG Courses */     'context' => 'entity:taxonomy_term.tid',
  /* topics */  /* Topic OG Courses */     'context_optional' => 0,
  /* topics */  /* Topic OG Courses */     'panel' => '0',
  /* topics */  /* Topic OG Courses */     'fixed' => '',
  /* topics */  /* Topic OG Courses */     'label' => 'Content: Topics (field_topic)',
  /* topics */  /* Topic OG Courses */   ),
  /* topics */  /* Topic OG Courses */ );

  /* topics */ /* Display: Topic OG Events */
  /* topics */  /* Topic OG Events */ $handler = $view->new_display('panel_pane', 'Topic OG Events', 'panel_pane_5');
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['title'] = 'Events';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Field: Content: Nid */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Field: Content: Date And Time */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* topics */  /* Topic OG Events */   'format_type' => 'military_without_time',
  /* topics */  /* Topic OG Events */   'fromto' => 'value',
  /* topics */  /* Topic OG Events */   'multiple_number' => '',
  /* topics */  /* Topic OG Events */   'multiple_from' => '',
  /* topics */  /* Topic OG Events */   'multiple_to' => '',
  /* topics */  /* Topic OG Events */   'show_repeat_rule' => 'show',
  /* topics */  /* Topic OG Events */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Events */ /* Field: Content: Event Type */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['settings'] = array(
  /* topics */  /* Topic OG Events */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_event_type']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Events */ /* Field: Content: Title */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Field: Content: Who can see this content? */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['id'] = 'field_gn2_simple_access';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['table'] = 'field_data_field_gn2_simple_access';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['field'] = 'field_gn2_simple_access';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['settings'] = array(
  /* topics */  /* Topic OG Events */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ /* Field: Content: Groups audience */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
  /* topics */  /* Topic OG Events */   'link' => 0,
  /* topics */  /* Topic OG Events */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* topics */  /* Topic OG Events */ /* Field: Content: Body */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['element_type'] = 'p';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Topic OG Events */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Events */ /* Field: Global: Custom text */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-date">
[field_event_date]
</div>
<h5 class="event-title">
<a href="/node/[nid]">
[field_event_type]: [title]
</a>
</h5>
<p class="event-detail author-date">
[field_gn2_simple_access] Event | Hosted by [og_group_ref]
</p>
<p>
[body]
</p>';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['exposed'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['expose']['label'] = 'Date';
  /* topics */  /* Topic OG Events */ /* Sort criterion: Content: Title */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Name';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Contextual filter: Field: Topics (field_topic) */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['arguments']['field_topic_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG Events */   'topics' => 'topics',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Events */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Events */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Events */   'topics' => 'topics',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ /* Filter criterion: Content: Type */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Topic OG Events */   'event' => 'event',
  /* topics */  /* Topic OG Events */ );
  /* topics */  /* Topic OG Events */ /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* topics */  /* Topic OG Events */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Events */   'field_topic_tid' => array(
  /* topics */  /* Topic OG Events */     'type' => 'user',
  /* topics */  /* Topic OG Events */     'context' => 'entity:comment.author',
  /* topics */  /* Topic OG Events */     'context_optional' => 0,
  /* topics */  /* Topic OG Events */     'panel' => '0',
  /* topics */  /* Topic OG Events */     'fixed' => '',
  /* topics */  /* Topic OG Events */     'label' => 'Content: Topics (field_topic)',
  /* topics */  /* Topic OG Events */   ),
  /* topics */  /* Topic OG Events */ );

  /* topics */ /* Display: Topic OG Announcements */
  /* topics */  /* Topic OG Announcements */ $handler = $view->new_display('panel_pane', 'Topic OG Announcements', 'panel_pane_6');
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['title'] = 'Announcements';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ /* Relationship: Content: Author */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ /* Relationship: Content: Vote results */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Topic OG Announcements */   'value_type' => '',
  /* topics */  /* Topic OG Announcements */   'tag' => '',
  /* topics */  /* Topic OG Announcements */   'function' => '',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Field: Field: Family Name */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Topic OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ /* Field: Field: Given Name */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Topic OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ /* Field: Content: Post date */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Topic OG Announcements */ /* Field: Content: Body */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Topic OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Announcements */ /* Field: Content: Comment count */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Field: Content: Main Image */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Topic OG Announcements */   'image_style' => '',
  /* topics */  /* Topic OG Announcements */   'image_link' => '',
  /* topics */  /* Topic OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Announcements */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Topic OG Announcements */   'image_style' => 'news_thumbnail',
  /* topics */  /* Topic OG Announcements */   'image_link' => 'content',
  /* topics */  /* Topic OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Announcements */ /* Field: Vote results: Value */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Topic OG Announcements */ /* Field: Content: Title */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Field: Global: Custom text */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="topics--metadata num-comments">[comment_count] <span>comments</span> </div> 
<div class="topics--metadata rate-info">[value] <span>likes</span> </div> 
</div>
';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Sort criterion: Content: Title */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Topic OG Announcements */ /* Sort criterion: Content: Post date */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Contextual filter: Field: Topics (field_topic) */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['arguments']['field_topic_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG Announcements */   'topics' => 'topics',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Announcements */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Announcements */   'topics' => 'topics',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ /* Filter criterion: Content: Type */
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Topic OG Announcements */   'announcement' => 'announcement',
  /* topics */  /* Topic OG Announcements */ );
  /* topics */  /* Topic OG Announcements */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Announcements */   'field_topic_tid' => array(
  /* topics */  /* Topic OG Announcements */     'type' => 'user',
  /* topics */  /* Topic OG Announcements */     'context' => 'entity:comment.author',
  /* topics */  /* Topic OG Announcements */     'context_optional' => 0,
  /* topics */  /* Topic OG Announcements */     'panel' => '0',
  /* topics */  /* Topic OG Announcements */     'fixed' => '',
  /* topics */  /* Topic OG Announcements */     'label' => 'Content: Topics (field_topic)',
  /* topics */  /* Topic OG Announcements */   ),
  /* topics */  /* Topic OG Announcements */ );

  /* topics */ /* Display: Topic OG Publications */
  /* topics */  /* Topic OG Publications */ $handler = $view->new_display('panel_pane', 'Topic OG Publications', 'panel_pane_7');
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['title'] = 'Publications';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ /* Relationship: Content: Author */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ /* Relationship: Content: Vote results */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Topic OG Publications */   'value_type' => '',
  /* topics */  /* Topic OG Publications */   'tag' => '',
  /* topics */  /* Topic OG Publications */   'function' => '',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Field: Field: Family Name */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Topic OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ /* Field: Field: Given Name */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Topic OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ /* Field: Content: Post date */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Topic OG Publications */ /* Field: Content: Body */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Topic OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Publications */ /* Field: Content: Comment count */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Field: Content: Main Image */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Topic OG Publications */   'image_style' => '',
  /* topics */  /* Topic OG Publications */   'image_link' => '',
  /* topics */  /* Topic OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Publications */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Topic OG Publications */   'image_style' => 'news_thumbnail',
  /* topics */  /* Topic OG Publications */   'image_link' => 'content',
  /* topics */  /* Topic OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Publications */ /* Field: Vote results: Value */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Topic OG Publications */ /* Field: Content: Title */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Field: Global: Custom text */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Sort criterion: Content: Post date */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Topic OG Publications */ /* Sort criterion: Content: Title */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Contextual filter: Field: Topics (field_topic) */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['arguments']['field_topic_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG Publications */   'topics' => 'topics',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Publications */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Publications */   'topics' => 'topics',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ /* Filter criterion: Content: Type */
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Topic OG Publications */   'publication' => 'publication',
  /* topics */  /* Topic OG Publications */ );
  /* topics */  /* Topic OG Publications */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Publications */   'field_topic_tid' => array(
  /* topics */  /* Topic OG Publications */     'type' => 'user',
  /* topics */  /* Topic OG Publications */     'context' => 'entity:comment.author',
  /* topics */  /* Topic OG Publications */     'context_optional' => 0,
  /* topics */  /* Topic OG Publications */     'panel' => '0',
  /* topics */  /* Topic OG Publications */     'fixed' => '',
  /* topics */  /* Topic OG Publications */     'label' => 'Content: Topics (field_topic)',
  /* topics */  /* Topic OG Publications */   ),
  /* topics */  /* Topic OG Publications */ );

  /* topics */ /* Display: Topic OG Groups */
  /* topics */  /* Topic OG Groups */ $handler = $view->new_display('panel_pane', 'Topic OG Groups', 'panel_pane_8');
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['title'] = 'Groups';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['row_options']['inline'] = array(
  /* topics */  /* Topic OG Groups */   'og_simplestats_user_count' => 'og_simplestats_user_count',
  /* topics */  /* Topic OG Groups */   'og_simplestats_node_count' => 'og_simplestats_node_count',
  /* topics */  /* Topic OG Groups */ );
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['row_options']['separator'] = ' | ';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Relationship: Taxonomy term: Content using Topics */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Groups */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Groups */ /* Relationship: Content: Author */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ /* Relationship: Content: Vote results */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Topic OG Groups */   'value_type' => '',
  /* topics */  /* Topic OG Groups */   'tag' => '',
  /* topics */  /* Topic OG Groups */   'function' => '',
  /* topics */  /* Topic OG Groups */ );
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Field: Content: Title */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Field: OG SimpleStats: Total Members */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['id'] = 'og_simplestats_user_count';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['field'] = 'og_simplestats_user_count';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['label'] = '';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['exclude'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['alter']['alter_text'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['alter']['text'] = '[og_simplestats_user_count] Members';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_user_count']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Field: OG SimpleStats: Total Posts */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['id'] = 'og_simplestats_node_count';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['field'] = 'og_simplestats_node_count';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['label'] = '';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['exclude'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['alter']['alter_text'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['alter']['text'] = '[og_simplestats_node_count] Posts';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['og_simplestats_node_count']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Field: Global: Custom text */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="author-date">
[og_simplestats_user_count] | [og_simplestats_node_count]
</p>';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Field: Content: Body */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['element_type'] = 'p';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Topic OG Groups */   'field_formatter_class' => '',
  /* topics */  /* Topic OG Groups */ );
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Sort criterion: Content: Post date */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Most recent';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* topics */  /* Topic OG Groups */ /* Sort criterion: Content: Title */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Group name';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Contextual filter: Field: Topics (field_topic) */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['specify_validation'] = TRUE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['arguments']['field_topic_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Topic OG Groups */   'topics' => 'topics',
  /* topics */  /* Topic OG Groups */ );
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Topic OG Groups */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Topic OG Groups */   'topics' => 'topics',
  /* topics */  /* Topic OG Groups */ );
  /* topics */  /* Topic OG Groups */ /* Filter criterion: Content: Type */
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Topic OG Groups */   'group' => 'group',
  /* topics */  /* Topic OG Groups */ );
  /* topics */  /* Topic OG Groups */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Topic OG Groups */   'field_topic_tid' => array(
  /* topics */  /* Topic OG Groups */     'type' => 'user',
  /* topics */  /* Topic OG Groups */     'context' => 'entity:comment.author',
  /* topics */  /* Topic OG Groups */     'context_optional' => 0,
  /* topics */  /* Topic OG Groups */     'panel' => '0',
  /* topics */  /* Topic OG Groups */     'fixed' => '',
  /* topics */  /* Topic OG Groups */     'label' => 'Content: Topics (field_topic)',
  /* topics */  /* Topic OG Groups */   ),
  /* topics */  /* Topic OG Groups */ );

  /* topics */ /* Display: Country OG Terms List */
  /* topics */  /* Country OG Terms List */ $handler = $view->new_display('panel_pane', 'Country OG Terms List', 'panel_pane_10');
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['pager']['type'] = 'full';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Header: Global: Text area */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['header']['area']['content'] = 'Classes, resources, and communities are organized around a specific country or region. Click on  a country or region title to see all available items.';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Terms List */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Field: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['machine_name']['label'] = '';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Field: Taxonomy term: Name */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['label'] = '';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['alter']['path'] = '[machine_name]/[name]';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Field: COUNT(Content: Nid) */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['alter']['text'] = '([nid] items)';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['nid']['empty'] = '(0 items)';
  /* topics */  /* Country OG Terms List */ /* Field: Taxonomy term: Term description */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['description']['label'] = '';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Sort criterion: Taxonomy term: Name */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['sorts']['name']['id'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Terms List */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Terms List */   'countries' => 'countries',
  /* topics */  /* Country OG Terms List */   'regions' => 'regions',
  /* topics */  /* Country OG Terms List */ );
  /* topics */  /* Country OG Terms List */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG Terms List */   'announcement' => 'announcement',
  /* topics */  /* Country OG Terms List */   'course' => 'course',
  /* topics */  /* Country OG Terms List */   'event' => 'event',
  /* topics */  /* Country OG Terms List */   'group' => 'group',
  /* topics */  /* Country OG Terms List */   'news' => 'news',
  /* topics */  /* Country OG Terms List */   'publication' => 'publication',
  /* topics */  /* Country OG Terms List */ );
  /* topics */  /* Country OG Terms List */ /* Filter criterion: Taxonomy term: Name */
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['id'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['field'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['operator'] = 'word';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  /* topics */  /* Country OG Terms List */   2 => '2',
  /* topics */  /* Country OG Terms List */   1 => 0,
  /* topics */  /* Country OG Terms List */   9 => 0,
  /* topics */  /* Country OG Terms List */ );
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* topics */  /* Country OG Terms List */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Terms List */   'gid' => array(
  /* topics */  /* Country OG Terms List */     'type' => 'panel',
  /* topics */  /* Country OG Terms List */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG Terms List */     'context_optional' => 0,
  /* topics */  /* Country OG Terms List */     'panel' => '0',
  /* topics */  /* Country OG Terms List */     'fixed' => '',
  /* topics */  /* Country OG Terms List */     'label' => 'OG membership: Group ID',
  /* topics */  /* Country OG Terms List */   ),
  /* topics */  /* Country OG Terms List */ );

  /* topics */ /* Display: Country OG Term Header */
  /* topics */  /* Country OG Term Header */ $handler = $view->new_display('panel_pane', 'Country OG Term Header', 'panel_pane_11');
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Term Header */ /* Field: Taxonomy term: Name */
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['label'] = '';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Term Header */ /* Field: Taxonomy term: Term description */
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['description']['label'] = '';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG Term Header */ /* Contextual filter: Taxonomy term: Term ID */
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG Term Header */   'countries' => 'countries',
  /* topics */  /* Country OG Term Header */   'regions' => 'regions',
  /* topics */  /* Country OG Term Header */ );
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Term Header */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Term Header */   'countries' => 'countries',
  /* topics */  /* Country OG Term Header */   'regions' => 'regions',
  /* topics */  /* Country OG Term Header */ );
  /* topics */  /* Country OG Term Header */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Term Header */   'tid' => array(
  /* topics */  /* Country OG Term Header */     'type' => 'user',
  /* topics */  /* Country OG Term Header */     'context' => 'entity:taxonomy_term.tid',
  /* topics */  /* Country OG Term Header */     'context_optional' => 0,
  /* topics */  /* Country OG Term Header */     'panel' => '0',
  /* topics */  /* Country OG Term Header */     'fixed' => '',
  /* topics */  /* Country OG Term Header */     'label' => 'Taxonomy term: Term ID',
  /* topics */  /* Country OG Term Header */   ),
  /* topics */  /* Country OG Term Header */ );

  /* topics */ /* Display: Country OG News */
  /* topics */  /* Country OG News */ $handler = $view->new_display('panel_pane', 'Country OG News', 'panel_pane_12');
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['title'] = 'News';
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG News */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG News */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG News */ /* Relationship: Content: Author */
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ /* Relationship: Content: Vote results */
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Country OG News */   'value_type' => '',
  /* topics */  /* Country OG News */   'tag' => '',
  /* topics */  /* Country OG News */   'function' => '',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG News */ /* Field: Field: Family Name */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Country OG News */   'field_formatter_class' => '',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ /* Field: Field: Given Name */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Country OG News */   'field_formatter_class' => '',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ /* Field: Content: Post date */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Country OG News */ /* Field: Content: Body */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Country OG News */   'field_formatter_class' => '',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG News */ /* Field: Content: Comment count */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Country OG News */   'image_style' => 'news_thumbnail',
  /* topics */  /* Country OG News */   'image_link' => 'content',
  /* topics */  /* Country OG News */   'field_formatter_class' => '',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG News */ /* Field: Vote results: Value */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Country OG News */ /* Field: Content: Title */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ /* Field: Global: Custom text */
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Country OG News */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG News */ /* Sort criterion: Content: Title */
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Country OG News */ /* Sort criterion: Content: Post date */
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG News */ /* Contextual filter: Content: Has taxonomy term ID */
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['relationship'] = 'nid';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG News */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG News */   'countries' => 'countries',
  /* topics */  /* Country OG News */   'regions' => 'regions',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG News */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG News */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG News */   'countries' => 'countries',
  /* topics */  /* Country OG News */   'regions' => 'regions',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  /* topics */  /* Country OG News */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG News */   'news' => 'news',
  /* topics */  /* Country OG News */ );
  /* topics */  /* Country OG News */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG News */   'tid' => array(
  /* topics */  /* Country OG News */     'type' => 'user',
  /* topics */  /* Country OG News */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG News */     'context_optional' => 0,
  /* topics */  /* Country OG News */     'panel' => '0',
  /* topics */  /* Country OG News */     'fixed' => '',
  /* topics */  /* Country OG News */     'label' => 'Content: Has taxonomy term ID',
  /* topics */  /* Country OG News */   ),
  /* topics */  /* Country OG News */ );

  /* topics */ /* Display: Country OG Courses */
  /* topics */  /* Country OG Courses */ $handler = $view->new_display('panel_pane', 'Country OG Courses', 'panel_pane_13');
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['title'] = 'Courses';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Courses */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG Courses */ /* Relationship: Content: Author */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ /* Relationship: Content: Vote results */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Country OG Courses */   'value_type' => '',
  /* topics */  /* Country OG Courses */   'tag' => '',
  /* topics */  /* Country OG Courses */   'function' => '',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Field: Field: Family Name */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Country OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ /* Field: Field: Given Name */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Country OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ /* Field: Content: Post date */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Country OG Courses */ /* Field: Content: Body */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Country OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Courses */ /* Field: Content: Comment count */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Country OG Courses */   'image_style' => 'news_thumbnail',
  /* topics */  /* Country OG Courses */   'image_link' => 'content',
  /* topics */  /* Country OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Courses */ /* Field: Vote results: Value */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Country OG Courses */ /* Field: Content: Title */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Field: Global: Custom text */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Sort criterion: Content: Title */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Country OG Courses */ /* Sort criterion: Content: Post date */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Contextual filter: Content: Has taxonomy term ID */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['relationship'] = 'nid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG Courses */   'countries' => 'countries',
  /* topics */  /* Country OG Courses */   'regions' => 'regions',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Courses */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Courses */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Courses */   'countries' => 'countries',
  /* topics */  /* Country OG Courses */   'regions' => 'regions',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  /* topics */  /* Country OG Courses */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG Courses */   'course' => 'course',
  /* topics */  /* Country OG Courses */ );
  /* topics */  /* Country OG Courses */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Courses */   'tid' => array(
  /* topics */  /* Country OG Courses */     'type' => 'user',
  /* topics */  /* Country OG Courses */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG Courses */     'context_optional' => 0,
  /* topics */  /* Country OG Courses */     'panel' => '0',
  /* topics */  /* Country OG Courses */     'fixed' => '',
  /* topics */  /* Country OG Courses */     'label' => 'Content: Has taxonomy term ID',
  /* topics */  /* Country OG Courses */   ),
  /* topics */  /* Country OG Courses */ );

  /* topics */ /* Display: Country OG Events */
  /* topics */  /* Country OG Events */ $handler = $view->new_display('panel_pane', 'Country OG Events', 'panel_pane_14');
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['title'] = 'Events';
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Events */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Events */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG Events */ /* Relationship: Content: Author */
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ /* Relationship: Content: Vote results */
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Country OG Events */   'value_type' => '',
  /* topics */  /* Country OG Events */   'tag' => '',
  /* topics */  /* Country OG Events */   'function' => '',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Events */ /* Field: Field: Family Name */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Country OG Events */   'field_formatter_class' => '',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ /* Field: Field: Given Name */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Country OG Events */   'field_formatter_class' => '',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ /* Field: Content: Post date */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Country OG Events */ /* Field: Content: Body */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Country OG Events */   'field_formatter_class' => '',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Events */ /* Field: Content: Comment count */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Country OG Events */   'image_style' => 'news_thumbnail',
  /* topics */  /* Country OG Events */   'image_link' => 'content',
  /* topics */  /* Country OG Events */   'field_formatter_class' => '',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Events */ /* Field: Vote results: Value */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Country OG Events */ /* Field: Content: Title */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ /* Field: Global: Custom text */
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Country OG Events */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Events */ /* Sort criterion: Content: Title */
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Country OG Events */ /* Sort criterion: Content: Post date */
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG Events */ /* Contextual filter: Content: Has taxonomy term ID */
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['relationship'] = 'nid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG Events */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG Events */   'countries' => 'countries',
  /* topics */  /* Country OG Events */   'regions' => 'regions',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Events */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Events */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Events */   'countries' => 'countries',
  /* topics */  /* Country OG Events */   'regions' => 'regions',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  /* topics */  /* Country OG Events */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG Events */   'event' => 'event',
  /* topics */  /* Country OG Events */ );
  /* topics */  /* Country OG Events */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Events */   'tid' => array(
  /* topics */  /* Country OG Events */     'type' => 'user',
  /* topics */  /* Country OG Events */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG Events */     'context_optional' => 0,
  /* topics */  /* Country OG Events */     'panel' => '0',
  /* topics */  /* Country OG Events */     'fixed' => '',
  /* topics */  /* Country OG Events */     'label' => 'Content: Has taxonomy term ID',
  /* topics */  /* Country OG Events */   ),
  /* topics */  /* Country OG Events */ );

  /* topics */ /* Display: Country OG Announcements */
  /* topics */  /* Country OG Announcements */ $handler = $view->new_display('panel_pane', 'Country OG Announcements', 'panel_pane_15');
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['title'] = 'Announcements';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Announcements */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG Announcements */ /* Relationship: Content: Author */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ /* Relationship: Content: Vote results */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Country OG Announcements */   'value_type' => '',
  /* topics */  /* Country OG Announcements */   'tag' => '',
  /* topics */  /* Country OG Announcements */   'function' => '',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Field: Field: Family Name */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Country OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ /* Field: Field: Given Name */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Country OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ /* Field: Content: Post date */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Country OG Announcements */ /* Field: Content: Body */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Country OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Announcements */ /* Field: Content: Comment count */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Country OG Announcements */   'image_style' => 'news_thumbnail',
  /* topics */  /* Country OG Announcements */   'image_link' => 'content',
  /* topics */  /* Country OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Announcements */ /* Field: Vote results: Value */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Country OG Announcements */ /* Field: Content: Title */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Field: Global: Custom text */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Sort criterion: Content: Title */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Country OG Announcements */ /* Sort criterion: Content: Post date */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Contextual filter: Content: Has taxonomy term ID */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['relationship'] = 'nid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG Announcements */   'countries' => 'countries',
  /* topics */  /* Country OG Announcements */   'regions' => 'regions',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Announcements */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Announcements */   'countries' => 'countries',
  /* topics */  /* Country OG Announcements */   'regions' => 'regions',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG Announcements */   'announcement' => 'announcement',
  /* topics */  /* Country OG Announcements */ );
  /* topics */  /* Country OG Announcements */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Announcements */   'tid' => array(
  /* topics */  /* Country OG Announcements */     'type' => 'user',
  /* topics */  /* Country OG Announcements */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG Announcements */     'context_optional' => 0,
  /* topics */  /* Country OG Announcements */     'panel' => '0',
  /* topics */  /* Country OG Announcements */     'fixed' => '',
  /* topics */  /* Country OG Announcements */     'label' => 'Content: Has taxonomy term ID',
  /* topics */  /* Country OG Announcements */   ),
  /* topics */  /* Country OG Announcements */ );

  /* topics */ /* Display: Country OG Publications */
  /* topics */  /* Country OG Publications */ $handler = $view->new_display('panel_pane', 'Country OG Publications', 'panel_pane_16');
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['title'] = 'Publications';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Publications */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG Publications */ /* Relationship: Content: Author */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ /* Relationship: Content: Vote results */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Country OG Publications */   'value_type' => '',
  /* topics */  /* Country OG Publications */   'tag' => '',
  /* topics */  /* Country OG Publications */   'function' => '',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Field: Field: Family Name */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Country OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ /* Field: Field: Given Name */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Country OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ /* Field: Content: Post date */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Country OG Publications */ /* Field: Content: Body */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Country OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Publications */ /* Field: Content: Comment count */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Country OG Publications */   'image_style' => 'news_thumbnail',
  /* topics */  /* Country OG Publications */   'image_link' => 'content',
  /* topics */  /* Country OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Publications */ /* Field: Vote results: Value */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Country OG Publications */ /* Field: Content: Title */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Field: Global: Custom text */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Sort criterion: Content: Title */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Country OG Publications */ /* Sort criterion: Content: Post date */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Contextual filter: Content: Has taxonomy term ID */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['relationship'] = 'nid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG Publications */   'countries' => 'countries',
  /* topics */  /* Country OG Publications */   'regions' => 'regions',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Publications */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Publications */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Publications */   'countries' => 'countries',
  /* topics */  /* Country OG Publications */   'regions' => 'regions',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  /* topics */  /* Country OG Publications */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG Publications */   'publication' => 'publication',
  /* topics */  /* Country OG Publications */ );
  /* topics */  /* Country OG Publications */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Publications */   'tid' => array(
  /* topics */  /* Country OG Publications */     'type' => 'user',
  /* topics */  /* Country OG Publications */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG Publications */     'context_optional' => 0,
  /* topics */  /* Country OG Publications */     'panel' => '0',
  /* topics */  /* Country OG Publications */     'fixed' => '',
  /* topics */  /* Country OG Publications */     'label' => 'Content: Has taxonomy term ID',
  /* topics */  /* Country OG Publications */   ),
  /* topics */  /* Country OG Publications */ );

  /* topics */ /* Display: Country OG Groups */
  /* topics */  /* Country OG Groups */ $handler = $view->new_display('panel_pane', 'Country OG Groups', 'panel_pane_17');
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['title'] = 'Groups';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Relationship: Taxonomy term: Content with term */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* topics */  /* Country OG Groups */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'nid';
  /* topics */  /* Country OG Groups */ /* Relationship: Content: Author */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ /* Relationship: Content: Vote results */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Country OG Groups */   'value_type' => '',
  /* topics */  /* Country OG Groups */   'tag' => '',
  /* topics */  /* Country OG Groups */   'function' => '',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Field: Field: Family Name */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Country OG Groups */   'field_formatter_class' => '',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ /* Field: Field: Given Name */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Country OG Groups */   'field_formatter_class' => '',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ /* Field: Content: Post date */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['date_format'] = 'military_without_time';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Country OG Groups */ /* Field: Content: Body */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Country OG Groups */   'field_formatter_class' => '',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Groups */ /* Field: Content: Comment count */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Country OG Groups */   'image_style' => 'news_thumbnail',
  /* topics */  /* Country OG Groups */   'image_link' => 'content',
  /* topics */  /* Country OG Groups */   'field_formatter_class' => '',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Country OG Groups */ /* Field: Vote results: Value */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Country OG Groups */ /* Field: Content: Title */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Field: Global: Custom text */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Sort criterion: Content: Title */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Country OG Groups */ /* Sort criterion: Content: Post date */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Contextual filter: Content: Has taxonomy term ID */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['relationship'] = 'nid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Country OG Groups */   'countries' => 'countries',
  /* topics */  /* Country OG Groups */   'regions' => 'regions',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Country OG Groups */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Country OG Groups */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Country OG Groups */   'countries' => 'countries',
  /* topics */  /* Country OG Groups */   'regions' => 'regions',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ /* Filter criterion: Content: Type */
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  /* topics */  /* Country OG Groups */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Country OG Groups */   'group' => 'group',
  /* topics */  /* Country OG Groups */ );
  /* topics */  /* Country OG Groups */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Country OG Groups */   'tid' => array(
  /* topics */  /* Country OG Groups */     'type' => 'user',
  /* topics */  /* Country OG Groups */     'context' => 'entity:comment.author',
  /* topics */  /* Country OG Groups */     'context_optional' => 0,
  /* topics */  /* Country OG Groups */     'panel' => '0',
  /* topics */  /* Country OG Groups */     'fixed' => '',
  /* topics */  /* Country OG Groups */     'label' => 'Content: Has taxonomy term ID',
  /* topics */  /* Country OG Groups */   ),
  /* topics */  /* Country OG Groups */ );

  /* topics */ /* Display: Tags OG Terms List */
  /* topics */  /* Tags OG Terms List */ $handler = $view->new_display('panel_pane', 'Tags OG Terms List', 'panel_pane_9');
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['pager']['type'] = 'full';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Terms List */ /* Header: Global: Text area */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['header']['area']['content'] = 'Announcements, courses, events, news, polls, posts and publications are organized around a specific tag. Click on a Tag title to see all available items.';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Terms List */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Terms List */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Terms List */ /* Field: Taxonomy term: Name */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['label'] = '';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* topics */  /* Tags OG Terms List */ /* Field: COUNT(Content: Nid) */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['alter']['text'] = '([nid] items)';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['nid']['empty'] = '(0 items)';
  /* topics */  /* Tags OG Terms List */ /* Field: Taxonomy term: Term description */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['description']['label'] = '';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Terms List */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Terms List */   'tags' => 'tags',
  /* topics */  /* Tags OG Terms List */ );
  /* topics */  /* Tags OG Terms List */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Terms List */   'announcement' => 'announcement',
  /* topics */  /* Tags OG Terms List */   'course' => 'course',
  /* topics */  /* Tags OG Terms List */   'event' => 'event',
  /* topics */  /* Tags OG Terms List */   'news' => 'news',
  /* topics */  /* Tags OG Terms List */   'poll' => 'poll',
  /* topics */  /* Tags OG Terms List */   'post' => 'post',
  /* topics */  /* Tags OG Terms List */   'publication' => 'publication',
  /* topics */  /* Tags OG Terms List */ );
  /* topics */  /* Tags OG Terms List */ /* Filter criterion: Taxonomy term: Name */
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['id'] = 'name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['field'] = 'name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['operator'] = 'word';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  /* topics */  /* Tags OG Terms List */   2 => '2',
  /* topics */  /* Tags OG Terms List */   1 => 0,
  /* topics */  /* Tags OG Terms List */   9 => 0,
  /* topics */  /* Tags OG Terms List */ );
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* topics */  /* Tags OG Terms List */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Terms List */   'gid' => array(
  /* topics */  /* Tags OG Terms List */     'type' => 'panel',
  /* topics */  /* Tags OG Terms List */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Terms List */     'context_optional' => 0,
  /* topics */  /* Tags OG Terms List */     'panel' => '0',
  /* topics */  /* Tags OG Terms List */     'fixed' => '',
  /* topics */  /* Tags OG Terms List */     'label' => 'OG membership: Group ID',
  /* topics */  /* Tags OG Terms List */   ),
  /* topics */  /* Tags OG Terms List */ );

  /* topics */ /* Display: Tags OG News */
  /* topics */  /* Tags OG News */ $handler = $view->new_display('panel_pane', 'Tags OG News', 'panel_pane_18');
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['title'] = 'News';
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG News */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ /* Relationship: Content: Author */
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ /* Relationship: Content: Vote results */
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Tags OG News */   'value_type' => '',
  /* topics */  /* Tags OG News */   'tag' => '',
  /* topics */  /* Tags OG News */   'function' => '',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG News */ /* Field: Field: Family Name */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Tags OG News */   'field_formatter_class' => '',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ /* Field: Field: Given Name */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Tags OG News */   'field_formatter_class' => '',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ /* Field: Content: Post date */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Tags OG News */ /* Field: Content: Body */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Tags OG News */   'field_formatter_class' => '',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG News */ /* Field: Content: Comment count */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ /* Field: Content: Main Image */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['hide_alter_empty'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Tags OG News */   'image_style' => 'news_thumbnail',
  /* topics */  /* Tags OG News */   'image_link' => 'content',
  /* topics */  /* Tags OG News */   'field_formatter_class' => '',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG News */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Tags OG News */   'image_style' => 'news_thumbnail',
  /* topics */  /* Tags OG News */   'image_link' => 'content',
  /* topics */  /* Tags OG News */   'field_formatter_class' => '',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG News */ /* Field: Vote results: Value */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Tags OG News */ /* Field: Content: Title */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="topics--metadata num-comments">[comment_count] <span>comments</span> </div> 
<div class="topics--metadata rate-info">[value] <span>likes</span> </div> 
</div>';
  /* topics */  /* Tags OG News */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG News */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Tags OG News */ /* Sort criterion: Content: Post date */
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG News */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG News */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG News */   'tags' => 'tags',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG News */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG News */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG News */   'tags' => 'tags',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG News */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG News */   'news' => 'news',
  /* topics */  /* Tags OG News */ );
  /* topics */  /* Tags OG News */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG News */   'field_tags_tid' => array(
  /* topics */  /* Tags OG News */     'type' => 'user',
  /* topics */  /* Tags OG News */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG News */     'context_optional' => 0,
  /* topics */  /* Tags OG News */     'panel' => '0',
  /* topics */  /* Tags OG News */     'fixed' => '',
  /* topics */  /* Tags OG News */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG News */   ),
  /* topics */  /* Tags OG News */ );

  /* topics */ /* Display: Tags OG Courses */
  /* topics */  /* Tags OG Courses */ $handler = $view->new_display('panel_pane', 'Tags OG Courses', 'panel_pane_19');
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['title'] = 'Courses';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['row_options']['inline'] = array(
  /* topics */  /* Tags OG Courses */   'field_course_dates' => 'field_course_dates',
  /* topics */  /* Tags OG Courses */   'nid' => 'nid',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['row_options']['separator'] = ', ';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Courses */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Courses */ /* Relationship: Content: Author */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ /* Relationship: Content: Vote results */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Tags OG Courses */   'value_type' => '',
  /* topics */  /* Tags OG Courses */   'tag' => '',
  /* topics */  /* Tags OG Courses */   'function' => '',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Field: Content: Title */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Field: Content: Course Dates */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
  /* topics */  /* Tags OG Courses */   'format_type' => 'military_without_time',
  /* topics */  /* Tags OG Courses */   'fromto' => 'both',
  /* topics */  /* Tags OG Courses */   'multiple_number' => '',
  /* topics */  /* Tags OG Courses */   'multiple_from' => '',
  /* topics */  /* Tags OG Courses */   'multiple_to' => '',
  /* topics */  /* Tags OG Courses */   'show_repeat_rule' => 'show',
  /* topics */  /* Tags OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['field_course_dates']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Courses */ /* Field: Content: Nid */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Field: Content: Body */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['element_type'] = 'p';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Tags OG Courses */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Courses */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="courses-summary-content">
<h5>[title]</h5>
<p class="author-date">[field_course_dates] | [nid]</p>
<p>[body]</p>
</div>';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Tags OG Courses */ /* Sort criterion: Content: Course Dates -  start date (field_course_dates) */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['order'] = 'DESC';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['exposed'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['sorts']['field_course_dates_value']['expose']['label'] = 'Start Date';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG Courses */   'tags' => 'tags',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Courses */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Courses */   'tags' => 'tags',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Courses */   'course' => 'course',
  /* topics */  /* Tags OG Courses */ );
  /* topics */  /* Tags OG Courses */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Courses */   'field_tags_tid' => array(
  /* topics */  /* Tags OG Courses */     'type' => 'user',
  /* topics */  /* Tags OG Courses */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Courses */     'context_optional' => 0,
  /* topics */  /* Tags OG Courses */     'panel' => '0',
  /* topics */  /* Tags OG Courses */     'fixed' => '',
  /* topics */  /* Tags OG Courses */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG Courses */   ),
  /* topics */  /* Tags OG Courses */ );

  /* topics */ /* Display: Tags OG Events */
  /* topics */  /* Tags OG Events */ $handler = $view->new_display('panel_pane', 'Tags OG Events', 'panel_pane_20');
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['title'] = 'Events';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Field: Content: Nid */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Field: Content: Date And Time */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* topics */  /* Tags OG Events */   'format_type' => 'date_format_globalnet_date',
  /* topics */  /* Tags OG Events */   'fromto' => 'value',
  /* topics */  /* Tags OG Events */   'multiple_number' => '',
  /* topics */  /* Tags OG Events */   'multiple_from' => '',
  /* topics */  /* Tags OG Events */   'multiple_to' => '',
  /* topics */  /* Tags OG Events */   'show_repeat_rule' => 'show',
  /* topics */  /* Tags OG Events */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Events */ /* Field: Content: Event Type */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['settings'] = array(
  /* topics */  /* Tags OG Events */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_event_type']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Events */ /* Field: Content: Title */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Field: Content: Who can see this content? */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['id'] = 'field_gn2_simple_access';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['table'] = 'field_data_field_gn2_simple_access';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['field'] = 'field_gn2_simple_access';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['field_gn2_simple_access']['settings'] = array(
  /* topics */  /* Tags OG Events */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ /* Field: Content: Groups audience */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
  /* topics */  /* Tags OG Events */   'link' => 0,
  /* topics */  /* Tags OG Events */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* topics */  /* Tags OG Events */ /* Field: Content: Body */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['element_type'] = 'p';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Tags OG Events */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Events */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-date">
[field_event_date]
</div>
<h5 class="event-title">
<a href="/node/[nid]">
[field_event_type]: [title]
</a>
</h5>
<p class="event-detail author-date">
[field_gn2_simple_access] Event | Hosted by [og_group_ref]
</p>
<p>
[body]
</p>';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Sort criterion: Content: Date And Time -  start date (field_event_date) */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['exposed'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['field_event_date_value']['expose']['label'] = 'Date';
  /* topics */  /* Tags OG Events */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Name';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG Events */   'tags' => 'tags',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Events */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Events */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Events */   'tags' => 'tags',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Events */   'event' => 'event',
  /* topics */  /* Tags OG Events */ );
  /* topics */  /* Tags OG Events */ /* Filter criterion: Content: Date And Time -  start date (field_event_date) */
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* topics */  /* Tags OG Events */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Events */   'field_tags_tid' => array(
  /* topics */  /* Tags OG Events */     'type' => 'user',
  /* topics */  /* Tags OG Events */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Events */     'context_optional' => 0,
  /* topics */  /* Tags OG Events */     'panel' => '0',
  /* topics */  /* Tags OG Events */     'fixed' => '',
  /* topics */  /* Tags OG Events */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG Events */   ),
  /* topics */  /* Tags OG Events */ );

  /* topics */ /* Display: Tags OG Announcements */
  /* topics */  /* Tags OG Announcements */ $handler = $view->new_display('panel_pane', 'Tags OG Announcements', 'panel_pane_21');
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['title'] = 'Announcements';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ /* Relationship: Content: Author */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ /* Relationship: Content: Vote results */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Tags OG Announcements */   'value_type' => '',
  /* topics */  /* Tags OG Announcements */   'tag' => '',
  /* topics */  /* Tags OG Announcements */   'function' => '',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Field: Field: Family Name */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Tags OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ /* Field: Field: Given Name */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Tags OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ /* Field: Content: Post date */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Tags OG Announcements */ /* Field: Content: Body */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Tags OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Announcements */ /* Field: Content: Comment count */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Field: Content: Main Image */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Tags OG Announcements */   'image_style' => '',
  /* topics */  /* Tags OG Announcements */   'image_link' => '',
  /* topics */  /* Tags OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Announcements */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Tags OG Announcements */   'image_style' => 'news_thumbnail',
  /* topics */  /* Tags OG Announcements */   'image_link' => 'content',
  /* topics */  /* Tags OG Announcements */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Announcements */ /* Field: Vote results: Value */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Tags OG Announcements */ /* Field: Content: Title */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="topics--metadata num-comments">[comment_count] <span>comments</span> </div> 
<div class="topics--metadata rate-info">[value] <span>likes</span> </div> 
</div>
';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Tags OG Announcements */ /* Sort criterion: Content: Post date */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG Announcements */   'tags' => 'tags',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Announcements */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Announcements */   'tags' => 'tags',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Announcements */   'announcement' => 'announcement',
  /* topics */  /* Tags OG Announcements */ );
  /* topics */  /* Tags OG Announcements */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Announcements */   'field_tags_tid' => array(
  /* topics */  /* Tags OG Announcements */     'type' => 'user',
  /* topics */  /* Tags OG Announcements */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Announcements */     'context_optional' => 0,
  /* topics */  /* Tags OG Announcements */     'panel' => '0',
  /* topics */  /* Tags OG Announcements */     'fixed' => '',
  /* topics */  /* Tags OG Announcements */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG Announcements */   ),
  /* topics */  /* Tags OG Announcements */ );

  /* topics */ /* Display: Tags OG Publications */
  /* topics */  /* Tags OG Publications */ $handler = $view->new_display('panel_pane', 'Tags OG Publications', 'panel_pane_22');
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['title'] = 'Publications';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ /* Relationship: Content: Author */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ /* Relationship: Content: Vote results */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Tags OG Publications */   'value_type' => '',
  /* topics */  /* Tags OG Publications */   'tag' => '',
  /* topics */  /* Tags OG Publications */   'function' => '',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Field: Field: Family Name */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Tags OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ /* Field: Field: Given Name */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Tags OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ /* Field: Content: Post date */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Tags OG Publications */ /* Field: Content: Body */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Tags OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Publications */ /* Field: Content: Comment count */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Field: Content: Main Image */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Tags OG Publications */   'image_style' => '',
  /* topics */  /* Tags OG Publications */   'image_link' => '',
  /* topics */  /* Tags OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Publications */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Tags OG Publications */   'image_style' => 'news_thumbnail',
  /* topics */  /* Tags OG Publications */   'image_link' => 'content',
  /* topics */  /* Tags OG Publications */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Publications */ /* Field: Vote results: Value */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Tags OG Publications */ /* Field: Content: Title */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Sort criterion: Content: Post date */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Tags OG Publications */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG Publications */   'tags' => 'tags',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Publications */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Publications */   'tags' => 'tags',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Publications */   'publication' => 'publication',
  /* topics */  /* Tags OG Publications */ );
  /* topics */  /* Tags OG Publications */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Publications */   'field_tags_tid' => array(
  /* topics */  /* Tags OG Publications */     'type' => 'user',
  /* topics */  /* Tags OG Publications */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Publications */     'context_optional' => 0,
  /* topics */  /* Tags OG Publications */     'panel' => '0',
  /* topics */  /* Tags OG Publications */     'fixed' => '',
  /* topics */  /* Tags OG Publications */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG Publications */   ),
  /* topics */  /* Tags OG Publications */ );

  /* topics */ /* Display: Tags OG Posts */
  /* topics */  /* Tags OG Posts */ $handler = $view->new_display('panel_pane', 'Tags OG Posts', 'panel_pane_23');
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['title'] = 'Posts';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ /* Relationship: Content: Author */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ /* Relationship: Content: Vote results */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Tags OG Posts */   'value_type' => '',
  /* topics */  /* Tags OG Posts */   'tag' => '',
  /* topics */  /* Tags OG Posts */   'function' => '',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Field: Field: Family Name */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'uid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* topics */  /* Tags OG Posts */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ /* Field: Field: Given Name */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'uid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* topics */  /* Tags OG Posts */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ /* Field: Content: Post date */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* topics */  /* Tags OG Posts */ /* Field: Content: Body */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* topics */  /* Tags OG Posts */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Posts */ /* Field: Content: Comment count */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Field: Content: Main Image */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['settings'] = array(
  /* topics */  /* Tags OG Posts */   'image_style' => '',
  /* topics */  /* Tags OG Posts */   'image_link' => '',
  /* topics */  /* Tags OG Posts */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_main_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Posts */ /* Field: Content: Thumbnail Image */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['element_type'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['element_wrapper_type'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_main_image]';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
  /* topics */  /* Tags OG Posts */   'image_style' => 'news_thumbnail',
  /* topics */  /* Tags OG Posts */   'image_link' => 'content',
  /* topics */  /* Tags OG Posts */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = TRUE;
  /* topics */  /* Tags OG Posts */ /* Field: Vote results: Value */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* topics */  /* Tags OG Posts */ /* Field: Content: Title */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Sort criterion: Content: Post date */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* topics */  /* Tags OG Posts */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG Posts */   'tags' => 'tags',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Posts */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Posts */   'tags' => 'tags',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Posts */   'post' => 'post',
  /* topics */  /* Tags OG Posts */ );
  /* topics */  /* Tags OG Posts */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Posts */   'field_tags_tid' => array(
  /* topics */  /* Tags OG Posts */     'type' => 'user',
  /* topics */  /* Tags OG Posts */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Posts */     'context_optional' => 0,
  /* topics */  /* Tags OG Posts */     'panel' => '0',
  /* topics */  /* Tags OG Posts */     'fixed' => '',
  /* topics */  /* Tags OG Posts */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG Posts */   ),
  /* topics */  /* Tags OG Posts */ );

  /* topics */ /* Display: Tags OG Polls */
  /* topics */  /* Tags OG Polls */ $handler = $view->new_display('panel_pane', 'Tags OG Polls', 'panel_pane_24');
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['title'] = 'Polls';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['use_ajax'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['group_by'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['query']['type'] = 'views_query';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['style_plugin'] = 'default';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['row_plugin'] = 'fields';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['row_options']['inline'] = array(
  /* topics */  /* Tags OG Polls */   'field_course_dates' => 'field_course_dates',
  /* topics */  /* Tags OG Polls */   'nid' => 'nid',
  /* topics */  /* Tags OG Polls */ );
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['row_options']['separator'] = ', ';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Relationship: Taxonomy term: Content using Tags */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Polls */ /* Relationship: OG membership: Node from OG membership */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Polls */ /* Relationship: Content: Author */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ /* Relationship: Content: Vote results */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['votingapi_cache']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* topics */  /* Tags OG Polls */   'value_type' => '',
  /* topics */  /* Tags OG Polls */   'tag' => '',
  /* topics */  /* Tags OG Polls */   'function' => '',
  /* topics */  /* Tags OG Polls */ );
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Field: Content: Title */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['label'] = '';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Field: Content: Nid */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Field: Content: Groups audience */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = 'Hosted by: [og_group_ref]';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
  /* topics */  /* Tags OG Polls */   'link' => 0,
  /* topics */  /* Tags OG Polls */   'field_formatter_class' => '',
  /* topics */  /* Tags OG Polls */ );
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'entity_id';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* topics */  /* Tags OG Polls */ /* Field: Global: Custom text */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="courses-summary-content">
<h5>[title]</h5>
<p class="author-date"></p>
<p class="event-detail author-date">[og_group_ref]</p>
</div>';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Sort criterion: Content: Title */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Contextual filter: Field: Tags (field_tags) */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['default_action'] = 'default';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['specify_validation'] = TRUE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['validate']['type'] = 'taxonomy_term';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['arguments']['field_tags_tid']['validate_options']['vocabularies'] = array(
  /* topics */  /* Tags OG Polls */   'tags' => 'tags',
  /* topics */  /* Tags OG Polls */ );
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* topics */  /* Tags OG Polls */ /* Filter criterion: Taxonomy vocabulary: Machine name */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['machine_name']['value'] = array(
  /* topics */  /* Tags OG Polls */   'tags' => 'tags',
  /* topics */  /* Tags OG Polls */ );
  /* topics */  /* Tags OG Polls */ /* Filter criterion: Content: Type */
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tags_node';
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['filters']['type']['value'] = array(
  /* topics */  /* Tags OG Polls */   'poll' => 'poll',
  /* topics */  /* Tags OG Polls */ );
  /* topics */  /* Tags OG Polls */ $handler->display->display_options['argument_input'] = array(
  /* topics */  /* Tags OG Polls */   'field_tags_tid' => array(
  /* topics */  /* Tags OG Polls */     'type' => 'user',
  /* topics */  /* Tags OG Polls */     'context' => 'entity:comment.author',
  /* topics */  /* Tags OG Polls */     'context_optional' => 0,
  /* topics */  /* Tags OG Polls */     'panel' => '0',
  /* topics */  /* Tags OG Polls */     'fixed' => '',
  /* topics */  /* Tags OG Polls */     'label' => 'Field: Tags (field_tags)',
  /* topics */  /* Tags OG Polls */   ),
  /* topics */  /* Tags OG Polls */ );
  /* topics */ $translatables['topics'] = array(
  /* topics */   t('Master'),
  /* topics */   t('more'),
  /* topics */   t('Apply'),
  /* topics */   t('Reset'),
  /* topics */   t('Sort by'),
  /* topics */   t('Asc'),
  /* topics */   t('Desc'),
  /* topics */   t('Items per page'),
  /* topics */   t('- All -'),
  /* topics */   t('Offset'),
  /* topics */   t('« first'),
  /* topics */   t('‹ previous'),
  /* topics */   t('next ›'),
  /* topics */   t('last »'),
  /* topics */   t('Classes, resources, and communities are organized around a specific topic. Click on  a topic title to see all available items.'),
  /* topics */   t('No results found.'),
  /* topics */   t('field_topic'),
  /* topics */   t('node from OG membership'),
  /* topics */   t('([nid] items)'),
  /* topics */   t('(0 items)'),
  /* topics */   t('Name'),
  /* topics */   t('Results'),
  /* topics */   t('Term description'),
  /* topics */   t('Topic OG Terms List'),
  /* topics */   t('View panes'),
  /* topics */   t('Topic OG Term Header'),
  /* topics */   t('All'),
  /* topics */   t('Topic OG News'),
  /* topics */   t('News'),
  /* topics */   t('author'),
  /* topics */   t('Vote results'),
  /* topics */   t('.'),
  /* topics */   t(','),
  /* topics */   t('<img src="/sites/all/themes/gn2_zen/images/image-placeholder-topics-teasers.jpg" width="245" height="150">'),
  /* topics */   t('[field_main_image]'),
  /* topics */   t('<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="topics--metadata num-comments">[comment_count] <span>comments</span> </div> 
<div class="topics--metadata rate-info">[value] <span>likes</span> </div> 
</div>'),
  /* topics */   t('Title'),
  /* topics */   t('Date'),
  /* topics */   t('Topic OG Courses'),
  /* topics */   t('Courses'),
  /* topics */   t('<div class="courses-summary-content">
<h5>[title]</h5>
<p class="author-date">[field_course_dates] | [nid]</p>
<p>[body]</p>
</div>'),
  /* topics */   t('Start Date'),
  /* topics */   t('Topic OG Events'),
  /* topics */   t('Events'),
  /* topics */   t('<div class="event-date">
[field_event_date]
</div>
<h5 class="event-title">
<a href="/node/[nid]">
[field_event_type]: [title]
</a>
</h5>
<p class="event-detail author-date">
[field_gn2_simple_access] Event | Hosted by [og_group_ref]
</p>
<p>
[body]
</p>'),
  /* topics */   t('Topic OG Announcements'),
  /* topics */   t('Announcements'),
  /* topics */   t('<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="topics--metadata num-comments">[comment_count] <span>comments</span> </div> 
<div class="topics--metadata rate-info">[value] <span>likes</span> </div> 
</div>
'),
  /* topics */   t('Topic OG Publications'),
  /* topics */   t('Publications'),
  /* topics */   t('<div class="gn2-3col--col1">
[field_thumbnail_image]
</div>
<div class="gn2-3col--col2">
<h5>[title]</h5>
<p class="author-date">by [field_name_first] [field_name_last] | [created]</p>
<p>[body]</p>
</div>
<div class="gn2-3col--col3 comments-votes">
<div class="num-comments">[comment_count] </div> <span>comments</span>
<div class="clearfix"></div>
<div class="rate-info">[value] </div> <span>likes</span>
</div>'),
  /* topics */   t('Topic OG Groups'),
  /* topics */   t('Groups'),
  /* topics */   t('[og_simplestats_user_count] Members'),
  /* topics */   t('[og_simplestats_node_count] Posts'),
  /* topics */   t('<p class="author-date">
[og_simplestats_user_count] | [og_simplestats_node_count]
</p>'),
  /* topics */   t('Most recent'),
  /* topics */   t('Group name'),
  /* topics */   t('Country OG Terms List'),
  /* topics */   t('Classes, resources, and communities are organized around a specific country or region. Click on  a country or region title to see all available items.'),
  /* topics */   t('node'),
  /* topics */   t('Country OG Term Header'),
  /* topics */   t('Country OG News'),
  /* topics */   t('Country OG Courses'),
  /* topics */   t('Country OG Events'),
  /* topics */   t('Country OG Announcements'),
  /* topics */   t('Country OG Publications'),
  /* topics */   t('Country OG Groups'),
  /* topics */   t('Tags OG Terms List'),
  /* topics */   t('Announcements, courses, events, news, polls, posts and publications are organized around a specific tag. Click on a Tag title to see all available items.'),
  /* topics */   t('field_tags'),
  /* topics */   t('Tags OG News'),
  /* topics */   t('Tags OG Courses'),
  /* topics */   t('Tags OG Events'),
  /* topics */   t('Tags OG Announcements'),
  /* topics */   t('Tags OG Publications'),
  /* topics */   t('Tags OG Posts'),
  /* topics */   t('Posts'),
  /* topics */   t('Tags OG Polls'),
  /* topics */   t('Polls'),
  /* topics */   t('Hosted by: [og_group_ref]'),
  /* topics */   t('<div class="courses-summary-content">
<h5>[title]</h5>
<p class="author-date"></p>
<p class="event-detail author-date">[og_group_ref]</p>
</div>'),
  /* topics */ );
  $export['topics'] = $view;

  return $export;
}
