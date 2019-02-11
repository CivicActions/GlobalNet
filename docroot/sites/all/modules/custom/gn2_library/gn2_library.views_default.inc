<?php
/**
 * @file
 * gn2_library.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_library_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_resource_library';
  $view->human_name = 'Search-Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['row_options']['regions'] = array(
    'field_resource_thumbnail' => 'left',
    'nid' => 'left',
    'title' => 'left',
    'field_link' => 'left',
    'field_resource_description' => 'left',
    'edit_node' => 'left',
  );
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Resource Description */
  $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  $handler->display->display_options['fields']['field_resource_description']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_resource_description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_resource_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['element_label_type'] = 'strong';
  /* Field: Indexed Node: Resource Topic */
  $handler->display->display_options['fields']['field_resource_tags']['id'] = 'field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_resource_tags']['field'] = 'field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_resource_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_resource_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_resource_tags']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_tags']['bypass_access'] = 0;
  /* Field: Indexed Node: Resource Category */
  $handler->display->display_options['fields']['field_resource_category']['id'] = 'field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_resource_category']['field'] = 'field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_resource_category']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_resource_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_category']['bypass_access'] = 0;
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Indexed Node: Groups audience */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* Filter criterion: Indexed Node: Resource Topic */
  $handler->display->display_options['filters']['field_resource_tags']['id'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_tags']['field'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['value'] = array();
  $handler->display->display_options['filters']['field_resource_tags']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_tags']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_tags']['expose']['operator_id'] = 'field_resource_tags_op';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['operator'] = 'field_resource_tags_op';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['identifier'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_tags']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['identifier'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_resource_tags']['type'] = 'select';
  /* Filter criterion: Indexed Node: Resource Category */
  $handler->display->display_options['filters']['field_resource_category']['id'] = 'field_resource_category';
  $handler->display->display_options['filters']['field_resource_category']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_category']['field'] = 'field_resource_category';
  $handler->display->display_options['filters']['field_resource_category']['value'] = array();
  $handler->display->display_options['filters']['field_resource_category']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_category']['expose']['operator_id'] = 'field_resource_category_op';
  $handler->display->display_options['filters']['field_resource_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_resource_category']['expose']['operator'] = 'field_resource_category_op';
  $handler->display->display_options['filters']['field_resource_category']['expose']['identifier'] = 'field_resource_category';
  $handler->display->display_options['filters']['field_resource_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_category']['type'] = 'select';
  /* Filter criterion: Indexed Node: Resource Type */
  $handler->display->display_options['filters']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['filters']['field_resource_type']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['filters']['field_resource_type']['value'] = array();
  $handler->display->display_options['filters']['field_resource_type']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type']['expose']['operator_id'] = 'field_resource_type_op';
  $handler->display->display_options['filters']['field_resource_type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_resource_type']['expose']['operator'] = 'field_resource_type_op';
  $handler->display->display_options['filters']['field_resource_type']['expose']['identifier'] = 'field_resource_type';
  $handler->display->display_options['filters']['field_resource_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type']['type'] = 'select';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Text search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-resources';

  /* Display: Library */
  $handler = $view->new_display('panel_pane', 'Library', 'panel_pane_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_resource_tags' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_resource_category' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_resource_type' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_resource_language' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Thumbnail Image */
  $handler->display->display_options['fields']['field_resource_thumbnail']['id'] = 'field_resource_thumbnail';
  $handler->display->display_options['fields']['field_resource_thumbnail']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_resource_thumbnail']['field'] = 'field_resource_thumbnail';
  $handler->display->display_options['fields']['field_resource_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_resource_thumbnail']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_thumbnail']['element_class'] = 'inline-thumb';
  $handler->display->display_options['fields']['field_resource_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_resource_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Resource Description */
  $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  $handler->display->display_options['fields']['field_resource_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_description']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_resource_description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Resource';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>
[field_link]
<p>[field_resource_description]</p>
[edit_node] ';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'inline-description';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups audience */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Resource Topic */
  $handler->display->display_options['filters']['field_resource_tags']['id'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_tags']['field'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['value'] = array();
  $handler->display->display_options['filters']['field_resource_tags']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_tags']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_tags']['expose']['operator_id'] = 'field_resource_tags_op';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['operator'] = 'field_resource_tags_op';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['identifier'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_tags']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['identifier'] = 'field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_resource_tags']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_resource_tags']['type'] = 'select';
  /* Filter criterion: Indexed Node: Resource Category */
  $handler->display->display_options['filters']['field_resource_category']['id'] = 'field_resource_category';
  $handler->display->display_options['filters']['field_resource_category']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_category']['field'] = 'field_resource_category';
  $handler->display->display_options['filters']['field_resource_category']['value'] = array();
  $handler->display->display_options['filters']['field_resource_category']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_category']['expose']['operator_id'] = 'field_resource_category_op';
  $handler->display->display_options['filters']['field_resource_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_resource_category']['expose']['operator'] = 'field_resource_category_op';
  $handler->display->display_options['filters']['field_resource_category']['expose']['identifier'] = 'field_resource_category';
  $handler->display->display_options['filters']['field_resource_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_category']['type'] = 'select';
  /* Filter criterion: Indexed Node: Resource Type */
  $handler->display->display_options['filters']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['filters']['field_resource_type']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['filters']['field_resource_type']['value'] = array();
  $handler->display->display_options['filters']['field_resource_type']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type']['expose']['operator_id'] = 'field_resource_type_op';
  $handler->display->display_options['filters']['field_resource_type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_resource_type']['expose']['operator'] = 'field_resource_type_op';
  $handler->display->display_options['filters']['field_resource_type']['expose']['identifier'] = 'field_resource_type';
  $handler->display->display_options['filters']['field_resource_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type']['type'] = 'select';
  /* Filter criterion: Indexed Node: Resource Language */
  $handler->display->display_options['filters']['field_resource_language']['id'] = 'field_resource_language';
  $handler->display->display_options['filters']['field_resource_language']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['field_resource_language']['field'] = 'field_resource_language';
  $handler->display->display_options['filters']['field_resource_language']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_language']['expose']['operator_id'] = 'field_resource_language_op';
  $handler->display->display_options['filters']['field_resource_language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_resource_language']['expose']['operator'] = 'field_resource_language_op';
  $handler->display->display_options['filters']['field_resource_language']['expose']['identifier'] = 'field_resource_language';
  $handler->display->display_options['filters']['field_resource_language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_resource_language']['type'] = 'select';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_resource_library';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Text search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Indexed Node: Groups audience',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['search_resources'] = array(
    t('Master'),
    t('Library'),
    t('more'),
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
    t('Node ID'),
    t('.'),
    t('read more'),
    t('Resource Type'),
    t('Resource Topic'),
    t('Resource Category'),
    t('All'),
    t('Topic'),
    t('Tags'),
    t('Category'),
    t('Type'),
    t('Text search'),
    t('Page'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Edit Resource'),
    t('<h3>[title]</h3>
[field_link]
<p>[field_resource_description]</p>
[edit_node] '),
    t('Language'),
    t('View panes'),
  );
  $export['search_resources'] = $view;

  return $export;
}
