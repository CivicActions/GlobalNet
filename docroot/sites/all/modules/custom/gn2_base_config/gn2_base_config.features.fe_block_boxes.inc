<?php
/**
 * @file
 * gn2_base_config.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function gn2_base_config_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'GlobalNET Logo';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_logo';
  $fe_block_boxes->body = '<div class="header__logo">
<a href="/"><img src="/sites/all/themes/gn2_zen/images/org-logos/logo_globalnet.png"></a>
</div>';

  $export['header_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'User Registration';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'use_registration';
  $fe_block_boxes->body = '<div class=""><a href="#">Help</a></div>
<div class=""><a href="/registration">Create an account</a></div>';

  $export['use_registration'] = $fe_block_boxes;

  return $export;
}
