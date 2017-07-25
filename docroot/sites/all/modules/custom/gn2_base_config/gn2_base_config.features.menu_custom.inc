<?php
/**
 * @file
 * gn2_base_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gn2_base_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
  /* management */   'menu_name' => 'management',
  /* management */   'title' => 'Management',
  /* management */   'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  /* management */   'language' => 'und',
  /* management */   'i18n_mode' => 0,
  /* management */ );
  // Exported menu: menu-globalnet-main-menu.
  $menus['menu-globalnet-main-menu'] = array(
  /* menu-globalnet-main-menu */   'menu_name' => 'menu-globalnet-main-menu',
  /* menu-globalnet-main-menu */   'title' => 'GlobalNET Main Menu',
  /* menu-globalnet-main-menu */   'description' => '',
  /* menu-globalnet-main-menu */   'language' => 'und',
  /* menu-globalnet-main-menu */   'i18n_mode' => 0,
  /* menu-globalnet-main-menu */ );
  // Exported menu: menu-globalnet-support.
  $menus['menu-globalnet-support'] = array(
  /* menu-globalnet-support */   'menu_name' => 'menu-globalnet-support',
  /* menu-globalnet-support */   'title' => 'GlobalNET Support',
  /* menu-globalnet-support */   'description' => '',
  /* menu-globalnet-support */   'language' => 'und',
  /* menu-globalnet-support */   'i18n_mode' => 0,
  /* menu-globalnet-support */ );
  // Exported menu: menu-group.
  $menus['menu-group'] = array(
  /* menu-group */   'menu_name' => 'menu-group',
  /* menu-group */   'title' => 'Group Admin Menu',
  /* menu-group */   'description' => '',
  /* menu-group */   'language' => 'und',
  /* menu-group */   'i18n_mode' => 0,
  /* menu-group */ );
  // Exported menu: menu-org-upcoming-events.
  $menus['menu-org-upcoming-events'] = array(
  /* menu-org-upcoming-events */   'menu_name' => 'menu-org-upcoming-events',
  /* menu-org-upcoming-events */   'title' => 'Org Upcoming Events',
  /* menu-org-upcoming-events */   'description' => '',
  /* menu-org-upcoming-events */   'language' => 'und',
  /* menu-org-upcoming-events */   'i18n_mode' => 0,
  /* menu-org-upcoming-events */ );
  // Exported menu: menu-profile-edit-links.
  $menus['menu-profile-edit-links'] = array(
  /* menu-profile-edit-links */   'menu_name' => 'menu-profile-edit-links',
  /* menu-profile-edit-links */   'title' => 'Profile Edit Menu',
  /* menu-profile-edit-links */   'description' => 'A menu of links to Edit the User\'s profile.',
  /* menu-profile-edit-links */   'language' => 'und',
  /* menu-profile-edit-links */   'i18n_mode' => 0,
  /* menu-profile-edit-links */ );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu of links to Edit the User\'s profile.');
  t('GlobalNET Main Menu');
  t('GlobalNET Support');
  t('Group Admin Menu');
  t('Management');
  t('Org Upcoming Events');
  t('Profile Edit Menu');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
