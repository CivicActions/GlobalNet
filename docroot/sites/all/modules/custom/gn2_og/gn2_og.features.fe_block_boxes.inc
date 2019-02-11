<?php
/**
 * @file
 * gn2_og.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function gn2_og_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Google Translate block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'gtranslate';
  $fe_block_boxes->body = '<div id="google_translate_element"></div><script type="text/javascript">
function googleTranslateElementInit() {
  new google.translate.TranslateElement({pageLanguage: \'en\', includedLanguages: \'ar,de,en,es,fr,pt,ru,zh-CN\', layout: google.translate.TranslateElement.InlineLayout.SIMPLE, multilanguagePage: true}, \'google_translate_element\');
}
</script><script type="text/javascript" src="//translate.google.com/translate_a/element.js?cb=googleTranslateElementInit"></script>';

  $export['gtranslate'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'GlobalNET Logo';
  $fe_block_boxes->format = 'full_html';
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
