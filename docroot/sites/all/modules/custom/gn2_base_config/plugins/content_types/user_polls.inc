<?php
/**
 * @file
 * Panel pane that displays the polls a user has been part of.
 */

// Content plugin for user basic account settings form.
$plugin = array(
  'category' => t('User'), 
  'single' => TRUE,
  'title' => t('User polls'),
  'description' => t('Displays a list of the polls a user has participated in.'), 
  'admin info' => 'gn2_base_config_user_polls_pane_admin_info',
  'edit form' => 'gn2_base_config_user_polls_pane_edit_form',
  'render callback' => 'gn2_base_config_user_polls_render',
  'all contexts' => TRUE, 
);

/**
 * Admin users info.
 */
function gn2_base_config_user_polls_pane_admin_info() {
  
  $block = new stdClass;
  $block->title = t('User polls the user has participated in');
  $block->content = t('Account form');
  return $block;  
  
}

/**
 * Admin form definition.
 */
function gn2_base_config_user_polls_pane_edit_form($form, &$form_state) {
  
  return $form;
  
}

/**
 * Renders polls taken by the user.
 */
function gn2_base_config_user_polls_render($subtype, $conf, $args, $contexts) {

  // Module path.
  $path = drupal_get_path('module', 'gn2_base_config');

  // Adds poll results.
  $content = array(
    '#attached' => array(
      'js' => array(
        "{$path}/js/gn2_polls.js",
      ),
    ),
    'polls' => array(
      '#theme' => 'gn2_user_polls_results', 
      '#results' => gn2_base_config_get_user_poll_results(),
    ),
  );

  
  // Empty by default.
  $block = new stdClass();
  $block->display_title = FALSE;
  $block->title = t('Polls');
  $block->content = drupal_render($content);
  
  // Returns rendered content.
  return $block;
  
}
