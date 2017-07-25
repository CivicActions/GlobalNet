<?php

/**
 * @file
 * Implementation for the 2:1 Group landing page.
 */

 // Plugin definition.
 $plugin = array(
   'title' => t('GN2 Home Page'),
   'category' => t('GN2 Page Layouts'),
   'icon' => 'home_layout.png',
   'theme' => 'home_layout',
   'css' => '../../css/layout/panels-layouts/home_layout.css',
   'regions' => array(
     'homepage_layout__top__left'  => t('Top Left'),
     'homepage_layout__top__right' => t('Top Right'),
     'homepage_layout__search'   => t('Search Area'),
     'homepage_layout__main'     => t('Main'),
   ),
 );
