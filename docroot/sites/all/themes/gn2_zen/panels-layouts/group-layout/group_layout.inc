<?php

/**
 * @file
 * Implementation for the 2:1 Group landing page.
 */

 // Plugin definition.
 $plugin = array(
   'title' => t('GN2 Groups Page'),
   'category' => t('GN2 Page Layouts'),
   'icon' => 'group_layout.png',
   'theme' => 'group_layout',
   'css' => '../../css/layout/panels-layouts/group_layout.css',
   'regions' => array(
     'group_maintopleft'  => t('Top Left'),
     'group_maintopright' => t('Top Right'),
     'group_mainbanner'   => t('Banner'),
     'group_maintabs'     => t('Tabs'),
     'group_sidebar'      => t('Sidebar'),
   ),
 );
