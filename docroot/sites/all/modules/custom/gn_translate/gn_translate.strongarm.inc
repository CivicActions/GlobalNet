<?php
/**
 * @file
 * gn_translate.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn_translate_strongarm() {
  $export = array();

  /* i18n_hide_translation_links */  /* i18n_hide_translation_links */ $strongarm = new stdClass();
  /* i18n_hide_translation_links */  /* i18n_hide_translation_links */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_hide_translation_links */  /* i18n_hide_translation_links */ $strongarm->api_version = 1;
  /* i18n_hide_translation_links */  /* i18n_hide_translation_links */ $strongarm->name = 'i18n_hide_translation_links';
  /* i18n_hide_translation_links */  /* i18n_hide_translation_links */ $strongarm->value = 0;
  $export['i18n_hide_translation_links'] = $strongarm;

  /* i18n_language_list */  /* i18n_language_list */ $strongarm = new stdClass();
  /* i18n_language_list */  /* i18n_language_list */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_language_list */  /* i18n_language_list */ $strongarm->api_version = 1;
  /* i18n_language_list */  /* i18n_language_list */ $strongarm->name = 'i18n_language_list';
  /* i18n_language_list */  /* i18n_language_list */ $strongarm->value = '1';
  $export['i18n_language_list'] = $strongarm;

  /* i18n_node_default_language_none */  /* i18n_node_default_language_none */ $strongarm = new stdClass();
  /* i18n_node_default_language_none */  /* i18n_node_default_language_none */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_default_language_none */  /* i18n_node_default_language_none */ $strongarm->api_version = 1;
  /* i18n_node_default_language_none */  /* i18n_node_default_language_none */ $strongarm->name = 'i18n_node_default_language_none';
  /* i18n_node_default_language_none */  /* i18n_node_default_language_none */ $strongarm->value = '1';
  $export['i18n_node_default_language_none'] = $strongarm;

  /* i18n_node_extended_about_page */  /* i18n_node_extended_about_page */ $strongarm = new stdClass();
  /* i18n_node_extended_about_page */  /* i18n_node_extended_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_about_page */  /* i18n_node_extended_about_page */ $strongarm->api_version = 1;
  /* i18n_node_extended_about_page */  /* i18n_node_extended_about_page */ $strongarm->name = 'i18n_node_extended_about_page';
  /* i18n_node_extended_about_page */  /* i18n_node_extended_about_page */ $strongarm->value = '1';
  $export['i18n_node_extended_about_page'] = $strongarm;

  /* i18n_node_extended_media_gallery */  /* i18n_node_extended_media_gallery */ $strongarm = new stdClass();
  /* i18n_node_extended_media_gallery */  /* i18n_node_extended_media_gallery */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_media_gallery */  /* i18n_node_extended_media_gallery */ $strongarm->api_version = 1;
  /* i18n_node_extended_media_gallery */  /* i18n_node_extended_media_gallery */ $strongarm->name = 'i18n_node_extended_media_gallery';
  /* i18n_node_extended_media_gallery */  /* i18n_node_extended_media_gallery */ $strongarm->value = '1';
  $export['i18n_node_extended_media_gallery'] = $strongarm;

  /* i18n_node_extended_post */  /* i18n_node_extended_post */ $strongarm = new stdClass();
  /* i18n_node_extended_post */  /* i18n_node_extended_post */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_post */  /* i18n_node_extended_post */ $strongarm->api_version = 1;
  /* i18n_node_extended_post */  /* i18n_node_extended_post */ $strongarm->name = 'i18n_node_extended_post';
  /* i18n_node_extended_post */  /* i18n_node_extended_post */ $strongarm->value = '1';
  $export['i18n_node_extended_post'] = $strongarm;

  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */ $strongarm = new stdClass();
  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */ $strongarm->api_version = 1;
  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */ $strongarm->name = 'i18n_node_options_about_page';
  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */ $strongarm->value = array(
  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */   0 => 'current',
  /* i18n_node_options_about_page */  /* i18n_node_options_about_page */ );
  $export['i18n_node_options_about_page'] = $strongarm;

  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */ $strongarm = new stdClass();
  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */ $strongarm->api_version = 1;
  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */ $strongarm->name = 'i18n_node_options_media_gallery';
  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */ $strongarm->value = array(
  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */   0 => 'current',
  /* i18n_node_options_media_gallery */  /* i18n_node_options_media_gallery */ );
  $export['i18n_node_options_media_gallery'] = $strongarm;

  /* i18n_node_options_post */  /* i18n_node_options_post */ $strongarm = new stdClass();
  /* i18n_node_options_post */  /* i18n_node_options_post */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_post */  /* i18n_node_options_post */ $strongarm->api_version = 1;
  /* i18n_node_options_post */  /* i18n_node_options_post */ $strongarm->name = 'i18n_node_options_post';
  /* i18n_node_options_post */  /* i18n_node_options_post */ $strongarm->value = array(
  /* i18n_node_options_post */  /* i18n_node_options_post */   0 => 'current',
  /* i18n_node_options_post */  /* i18n_node_options_post */ );
  $export['i18n_node_options_post'] = $strongarm;

  /* i18n_select_nodes */  /* i18n_select_nodes */ $strongarm = new stdClass();
  /* i18n_select_nodes */  /* i18n_select_nodes */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_select_nodes */  /* i18n_select_nodes */ $strongarm->api_version = 1;
  /* i18n_select_nodes */  /* i18n_select_nodes */ $strongarm->name = 'i18n_select_nodes';
  /* i18n_select_nodes */  /* i18n_select_nodes */ $strongarm->value = 1;
  $export['i18n_select_nodes'] = $strongarm;

  /* i18n_select_page_block */  /* i18n_select_page_block */ $strongarm = new stdClass();
  /* i18n_select_page_block */  /* i18n_select_page_block */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_select_page_block */  /* i18n_select_page_block */ $strongarm->api_version = 1;
  /* i18n_select_page_block */  /* i18n_select_page_block */ $strongarm->name = 'i18n_select_page_block';
  /* i18n_select_page_block */  /* i18n_select_page_block */ $strongarm->value = 1;
  $export['i18n_select_page_block'] = $strongarm;

  /* i18n_select_page_list */  /* i18n_select_page_list */ $strongarm = new stdClass();
  /* i18n_select_page_list */  /* i18n_select_page_list */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_select_page_list */  /* i18n_select_page_list */ $strongarm->api_version = 1;
  /* i18n_select_page_list */  /* i18n_select_page_list */ $strongarm->name = 'i18n_select_page_list';
  /* i18n_select_page_list */  /* i18n_select_page_list */ $strongarm->value = 'admin/*';
  $export['i18n_select_page_list'] = $strongarm;

  /* i18n_select_page_mode */  /* i18n_select_page_mode */ $strongarm = new stdClass();
  /* i18n_select_page_mode */  /* i18n_select_page_mode */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_select_page_mode */  /* i18n_select_page_mode */ $strongarm->api_version = 1;
  /* i18n_select_page_mode */  /* i18n_select_page_mode */ $strongarm->name = 'i18n_select_page_mode';
  /* i18n_select_page_mode */  /* i18n_select_page_mode */ $strongarm->value = '0';
  $export['i18n_select_page_mode'] = $strongarm;

  /* i18n_select_skip_tags */  /* i18n_select_skip_tags */ $strongarm = new stdClass();
  /* i18n_select_skip_tags */  /* i18n_select_skip_tags */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_select_skip_tags */  /* i18n_select_skip_tags */ $strongarm->api_version = 1;
  /* i18n_select_skip_tags */  /* i18n_select_skip_tags */ $strongarm->name = 'i18n_select_skip_tags';
  /* i18n_select_skip_tags */  /* i18n_select_skip_tags */ $strongarm->value = 'views';
  $export['i18n_select_skip_tags'] = $strongarm;

  /* i18n_select_taxonomy */  /* i18n_select_taxonomy */ $strongarm = new stdClass();
  /* i18n_select_taxonomy */  /* i18n_select_taxonomy */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_select_taxonomy */  /* i18n_select_taxonomy */ $strongarm->api_version = 1;
  /* i18n_select_taxonomy */  /* i18n_select_taxonomy */ $strongarm->name = 'i18n_select_taxonomy';
  /* i18n_select_taxonomy */  /* i18n_select_taxonomy */ $strongarm->value = 0;
  $export['i18n_select_taxonomy'] = $strongarm;

  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */ $strongarm = new stdClass();
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */ $strongarm->api_version = 1;
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */ $strongarm->name = 'i18n_string_allowed_formats';
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */ $strongarm->value = array(
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */   'plain_text' => 'plain_text',
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */   'filtered_html' => 0,
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */   'full_html' => 0,
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */   'php_code' => 0,
  /* i18n_string_allowed_formats */  /* i18n_string_allowed_formats */ );
  $export['i18n_string_allowed_formats'] = $strongarm;

  /* i18n_string_source_language */  /* i18n_string_source_language */ $strongarm = new stdClass();
  /* i18n_string_source_language */  /* i18n_string_source_language */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_string_source_language */  /* i18n_string_source_language */ $strongarm->api_version = 1;
  /* i18n_string_source_language */  /* i18n_string_source_language */ $strongarm->name = 'i18n_string_source_language';
  /* i18n_string_source_language */  /* i18n_string_source_language */ $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  /* language_content_type_page */  /* language_content_type_page */ $strongarm = new stdClass();
  /* language_content_type_page */  /* language_content_type_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_page */  /* language_content_type_page */ $strongarm->api_version = 1;
  /* language_content_type_page */  /* language_content_type_page */ $strongarm->name = 'language_content_type_page';
  /* language_content_type_page */  /* language_content_type_page */ $strongarm->value = '2';
  $export['language_content_type_page'] = $strongarm;

  /* language_content_type_poll */  /* language_content_type_poll */ $strongarm = new stdClass();
  /* language_content_type_poll */  /* language_content_type_poll */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_poll */  /* language_content_type_poll */ $strongarm->api_version = 1;
  /* language_content_type_poll */  /* language_content_type_poll */ $strongarm->name = 'language_content_type_poll';
  /* language_content_type_poll */  /* language_content_type_poll */ $strongarm->value = '2';
  $export['language_content_type_poll'] = $strongarm;

  /* locale_language_negotiation_url_part */  /* locale_language_negotiation_url_part */ $strongarm = new stdClass();
  /* locale_language_negotiation_url_part */  /* locale_language_negotiation_url_part */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* locale_language_negotiation_url_part */  /* locale_language_negotiation_url_part */ $strongarm->api_version = 1;
  /* locale_language_negotiation_url_part */  /* locale_language_negotiation_url_part */ $strongarm->name = 'locale_language_negotiation_url_part';
  /* locale_language_negotiation_url_part */  /* locale_language_negotiation_url_part */ $strongarm->value = '0';
  $export['locale_language_negotiation_url_part'] = $strongarm;

  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */ $strongarm = new stdClass();
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */ $strongarm->api_version = 1;
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */ $strongarm->name = 'locale_language_providers_weight_language';
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */ $strongarm->value = array(
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */   'locale-url' => '-10',
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */   'locale-user' => '-9',
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */   'locale-browser' => '-8',
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */   'language-default' => '-7',
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */   'locale-session' => '-6',
  /* locale_language_providers_weight_language */  /* locale_language_providers_weight_language */ );
  $export['locale_language_providers_weight_language'] = $strongarm;

  return $export;
}
