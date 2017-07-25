<?php

/**
 * @file
 * Implementation for the 2:1 Organization landing page.
 */

 // Plugin definition.
 $plugin = array(
   'title' => t('GN2 Organization Page'),
   'category' => t('GN2 Page Layouts'),
   'icon' => 'org_layout.png',
   'theme' => 'org_layout',
   'css' => '../../css/layout/panels-layouts/org_layout.css',
   'regions' => array(
     'main_top'               => t('Main Top'),
     'main_uppertabs'         => t('Upper Tabs'),
     'main_activecommunities' => t('Active Communities'),
     'main_lowertabs'         => t('Lower Tabs'),
     'sidebar_top'            => t('Sidebar Top'),
     'sidebar_logo'           => t('Sidebar Logo'),
     'sidebar_title'          => t('Sidebar Title'),
     'sidebar_orginfo'        => t('Org Info'),
   ),
 );
