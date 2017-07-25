<?php
/**
 * @file
 * gn2_base_config.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function gn2_base_config_default_panels_layout() {
  $export = array();

   /* group_layout */ $layout = new stdClass();
   /* group_layout */ $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
   /* group_layout */ $layout->api_version = 1;
   /* group_layout */ $layout->name = 'group_layout';
   /* group_layout */ $layout->admin_title = 'Group layout';
   /* group_layout */ $layout->admin_description = '';
   /* group_layout */ $layout->category = '2-columns';
   /* group_layout */ $layout->plugin = 'flexible';
   /* group_layout */ $layout->settings = array(
   /* group_layout */   'items' => array(
   /* group_layout */     'canvas' => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'column',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'main',
   /* group_layout */       ),
   /* group_layout */       'parent' => NULL,
   /* group_layout */     ),
   /* group_layout */     'main' => array(
   /* group_layout */       'type' => 'column',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 10,
   /* group_layout */         1 => 'main-row',
   /* group_layout */         2 => 2,
   /* group_layout */       ),
   /* group_layout */       'parent' => 'canvas',
   /* group_layout */       'class' => 'right-column',
   /* group_layout */     ),
   /* group_layout */     'main-row' => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'column',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 4,
   /* group_layout */         1 => 3,
   /* group_layout */       ),
   /* group_layout */       'parent' => 'main',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     2 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'column',
   /* group_layout */       'children' => array(),
   /* group_layout */       'parent' => 'main',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     3 => array(
   /* group_layout */       'type' => 'column',
   /* group_layout */       'width' => '30.0452073179346',
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => 'main-row',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 8,
   /* group_layout */         1 => 9,
   /* group_layout */       ),
   /* group_layout */       'class' => 'Featured Article',
   /* group_layout */     ),
   /* group_layout */     4 => array(
   /* group_layout */       'type' => 'column',
   /* group_layout */       'width' => '69.9547926820654',
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => 'main-row',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 12,
   /* group_layout */         1 => 11,
   /* group_layout */         2 => 6,
   /* group_layout */         3 => 7,
   /* group_layout */       ),
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     6 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'tabbed_content',
   /* group_layout */       ),
   /* group_layout */       'parent' => '4',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'tabbed_content' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Tabbed Content',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '6',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     7 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'activity_stream',
   /* group_layout */       ),
   /* group_layout */       'parent' => '4',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'activity_stream' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Activity Stream',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '7',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     8 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'updates___poll',
   /* group_layout */       ),
   /* group_layout */       'parent' => '3',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'updates___poll' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Updates & Poll',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '8',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     9 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'group_info',
   /* group_layout */       ),
   /* group_layout */       'parent' => '3',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'group_info' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Group info',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '9',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     10 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'header_region',
   /* group_layout */       ),
   /* group_layout */       'parent' => 'main',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'header_region' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Group menu',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '10',
   /* group_layout */       'class' => 'group-banner',
   /* group_layout */     ),
   /* group_layout */     11 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'title',
   /* group_layout */       ),
   /* group_layout */       'parent' => '4',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'title' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Group Banner',
   /* group_layout */       'width' => 100,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '11',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     12 => array(
   /* group_layout */       'type' => 'row',
   /* group_layout */       'contains' => 'region',
   /* group_layout */       'children' => array(
   /* group_layout */         0 => 'title_',
   /* group_layout */         1 => 'member_button_',
   /* group_layout */       ),
   /* group_layout */       'parent' => '4',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'title_' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Title',
   /* group_layout */       'width' => 50,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '12',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */     'member_button_' => array(
   /* group_layout */       'type' => 'region',
   /* group_layout */       'title' => 'Member Button',
   /* group_layout */       'width' => 50,
   /* group_layout */       'width_type' => '%',
   /* group_layout */       'parent' => '12',
   /* group_layout */       'class' => '',
   /* group_layout */     ),
   /* group_layout */   ),
   /* group_layout */ );
  $export['group_layout'] = $layout;

   /* org_landing_page_layout */ $layout = new stdClass();
   /* org_landing_page_layout */ $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
   /* org_landing_page_layout */ $layout->api_version = 1;
   /* org_landing_page_layout */ $layout->name = 'org_landing_page_layout';
   /* org_landing_page_layout */ $layout->admin_title = 'Org landing page layout';
   /* org_landing_page_layout */ $layout->admin_description = '';
   /* org_landing_page_layout */ $layout->category = 'Columns: 2';
   /* org_landing_page_layout */ $layout->plugin = 'flexible';
   /* org_landing_page_layout */ $layout->settings = array(
   /* org_landing_page_layout */   'items' => array(
   /* org_landing_page_layout */     'canvas' => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'column',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'main',
   /* org_landing_page_layout */         1 => 1,
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => NULL,
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'main' => array(
   /* org_landing_page_layout */       'type' => 'column',
   /* org_landing_page_layout */       'width' => '70.01305572734144',
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'main-row',
   /* org_landing_page_layout */         1 => 2,
   /* org_landing_page_layout */         2 => 3,
   /* org_landing_page_layout */         3 => 4,
   /* org_landing_page_layout */         4 => 9,
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => 'canvas',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'main-row' => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'center',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => 'main',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'center' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Menu',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => 'main-row',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     1 => array(
   /* org_landing_page_layout */       'type' => 'column',
   /* org_landing_page_layout */       'width' => '29.986944272658558',
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => 'canvas',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 10,
   /* org_landing_page_layout */         1 => 11,
   /* org_landing_page_layout */         2 => 12,
   /* org_landing_page_layout */         3 => 13,
   /* org_landing_page_layout */         4 => 14,
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     2 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'articles',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => 'main',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'articles' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Articles',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '2',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     3 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'first_tabbed_region_',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => 'main',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'first_tabbed_region_' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'First Tabbed Region ',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '3',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     4 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'column',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 5,
   /* org_landing_page_layout */         1 => 7,
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => 'main',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     5 => array(
   /* org_landing_page_layout */       'type' => 'column',
   /* org_landing_page_layout */       'width' => 50,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '4',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 6,
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     6 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'active_communities',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '5',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'active_communities' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Active Communities',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '6',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     7 => array(
   /* org_landing_page_layout */       'type' => 'column',
   /* org_landing_page_layout */       'width' => 50,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '4',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 8,
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     8 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'custom_content',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '7',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'custom_content' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Custom Content',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '8',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     9 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'second_tabed_region',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => 'main',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'second_tabed_region' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Second Tabbed Region',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '9',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     10 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'search',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '1',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'search' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Search',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '10',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     11 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'hot_topics',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '1',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'hot_topics' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Hot Topics',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '11',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     12 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'custom_content_call_to_action_',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '1',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'custom_content_call_to_action_' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Custom Content (Call to Action)',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '12',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     13 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'logo',
   /* org_landing_page_layout */         1 => 'title',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '1',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'logo' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Logo',
   /* org_landing_page_layout */       'width' => '30.815911048469186',
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '13',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'title' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Title',
   /* org_landing_page_layout */       'width' => '69.18408895153081',
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '13',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     14 => array(
   /* org_landing_page_layout */       'type' => 'row',
   /* org_landing_page_layout */       'contains' => 'region',
   /* org_landing_page_layout */       'children' => array(
   /* org_landing_page_layout */         0 => 'organization_info',
   /* org_landing_page_layout */       ),
   /* org_landing_page_layout */       'parent' => '1',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */     'organization_info' => array(
   /* org_landing_page_layout */       'type' => 'region',
   /* org_landing_page_layout */       'title' => 'Organization Info',
   /* org_landing_page_layout */       'width' => 100,
   /* org_landing_page_layout */       'width_type' => '%',
   /* org_landing_page_layout */       'parent' => '14',
   /* org_landing_page_layout */       'class' => '',
   /* org_landing_page_layout */     ),
   /* org_landing_page_layout */   ),
   /* org_landing_page_layout */ );
  $export['org_landing_page_layout'] = $layout;

  return $export;
}
