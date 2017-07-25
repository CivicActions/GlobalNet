<?php
/**
 * @file
 * gn_translate.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function gn_translate_default_fe_block_boxes() {
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

  return $export;
}
