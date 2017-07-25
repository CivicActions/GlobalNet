<?php

/**
 * @file
 * Generic Implementation for 40:60 2-col layouts.
 */

 // Plugin definition.
 $plugin = array(
   'title' => t('2-col 40:60'),
   'category' => t('GN2 Panel Layouts'),
   'icon' => 'gn2_2col.png',
   'theme' => 'gn2_2col',
   'css' => 'gn2_2col.css',
   'regions' => array(
     'sidebar'       => t('Sidebar'),
     'main_content'  => t('Main Content'),
   ),
 );
