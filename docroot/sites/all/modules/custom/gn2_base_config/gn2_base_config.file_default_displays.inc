<?php
/**
 * @file
 * gn2_base_config.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function gn2_base_config_file_default_displays() {
  $export = array();

   /* audio__downloadable_file__file_field_file_audio */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_file_audio */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_file_audio */ $file_display->name = 'audio__downloadable_file__file_field_file_audio';
   /* audio__downloadable_file__file_field_file_audio */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_file_audio */ $file_display->status = TRUE;
   /* audio__downloadable_file__file_field_file_audio */ $file_display->settings = array(
   /* audio__downloadable_file__file_field_file_audio */   'controls' => 1,
   /* audio__downloadable_file__file_field_file_audio */   'autoplay' => 0,
   /* audio__downloadable_file__file_field_file_audio */   'loop' => 0,
   /* audio__downloadable_file__file_field_file_audio */   'multiple_file_behavior' => 'tags',
   /* audio__downloadable_file__file_field_file_audio */ );
  $export['audio__downloadable_file__file_field_file_audio'] = $file_display;

   /* audio__downloadable_file__file_field_file_default */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_file_default */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_file_default */ $file_display->name = 'audio__downloadable_file__file_field_file_default';
   /* audio__downloadable_file__file_field_file_default */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_file_default */ $file_display->status = FALSE;
   /* audio__downloadable_file__file_field_file_default */ $file_display->settings = '';
  $export['audio__downloadable_file__file_field_file_default'] = $file_display;

   /* audio__downloadable_file__file_field_file_download_link */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_file_download_link */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_file_download_link */ $file_display->name = 'audio__downloadable_file__file_field_file_download_link';
   /* audio__downloadable_file__file_field_file_download_link */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_file_download_link */ $file_display->status = TRUE;
   /* audio__downloadable_file__file_field_file_download_link */ $file_display->settings = array(
   /* audio__downloadable_file__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* audio__downloadable_file__file_field_file_download_link */ );
  $export['audio__downloadable_file__file_field_file_download_link'] = $file_display;

   /* audio__downloadable_file__file_field_file_table */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_file_table */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_file_table */ $file_display->name = 'audio__downloadable_file__file_field_file_table';
   /* audio__downloadable_file__file_field_file_table */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_file_table */ $file_display->status = FALSE;
   /* audio__downloadable_file__file_field_file_table */ $file_display->settings = '';
  $export['audio__downloadable_file__file_field_file_table'] = $file_display;

   /* audio__downloadable_file__file_field_file_token_link */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_file_token_link */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_file_token_link */ $file_display->name = 'audio__downloadable_file__file_field_file_token_link';
   /* audio__downloadable_file__file_field_file_token_link */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_file_token_link */ $file_display->status = FALSE;
   /* audio__downloadable_file__file_field_file_token_link */ $file_display->settings = array(
   /* audio__downloadable_file__file_field_file_token_link */   'text' => '[file:name]',
   /* audio__downloadable_file__file_field_file_token_link */   'url' => '[file:download-url]',
   /* audio__downloadable_file__file_field_file_token_link */   'icon' => 0,
   /* audio__downloadable_file__file_field_file_token_link */   'size' => 0,
   /* audio__downloadable_file__file_field_file_token_link */ );
  $export['audio__downloadable_file__file_field_file_token_link'] = $file_display;

   /* audio__downloadable_file__file_field_file_url_plain */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_file_url_plain */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_file_url_plain */ $file_display->name = 'audio__downloadable_file__file_field_file_url_plain';
   /* audio__downloadable_file__file_field_file_url_plain */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_file_url_plain */ $file_display->status = FALSE;
   /* audio__downloadable_file__file_field_file_url_plain */ $file_display->settings = '';
  $export['audio__downloadable_file__file_field_file_url_plain'] = $file_display;

   /* audio__downloadable_file__file_field_media_large_icon */ $file_display = new stdClass();
   /* audio__downloadable_file__file_field_media_large_icon */ $file_display->api_version = 1;
   /* audio__downloadable_file__file_field_media_large_icon */ $file_display->name = 'audio__downloadable_file__file_field_media_large_icon';
   /* audio__downloadable_file__file_field_media_large_icon */ $file_display->weight = 0;
   /* audio__downloadable_file__file_field_media_large_icon */ $file_display->status = FALSE;
   /* audio__downloadable_file__file_field_media_large_icon */ $file_display->settings = '';
  $export['audio__downloadable_file__file_field_media_large_icon'] = $file_display;

   /* image__default__file_field_file_download_link */ $file_display = new stdClass();
   /* image__default__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__default__file_field_file_download_link */ $file_display->name = 'image__default__file_field_file_download_link';
   /* image__default__file_field_file_download_link */ $file_display->weight = 0;
   /* image__default__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__default__file_field_file_download_link */ $file_display->settings = array(
   /* image__default__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__default__file_field_file_download_link */ );
  $export['image__default__file_field_file_download_link'] = $file_display;

   /* image__default__file_field_file_table */ $file_display = new stdClass();
   /* image__default__file_field_file_table */ $file_display->api_version = 1;
   /* image__default__file_field_file_table */ $file_display->name = 'image__default__file_field_file_table';
   /* image__default__file_field_file_table */ $file_display->weight = 0;
   /* image__default__file_field_file_table */ $file_display->status = FALSE;
   /* image__default__file_field_file_table */ $file_display->settings = '';
  $export['image__default__file_field_file_table'] = $file_display;

   /* image__default__file_field_file_token_link */ $file_display = new stdClass();
   /* image__default__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__default__file_field_file_token_link */ $file_display->name = 'image__default__file_field_file_token_link';
   /* image__default__file_field_file_token_link */ $file_display->weight = 0;
   /* image__default__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__default__file_field_file_token_link */ $file_display->settings = array(
   /* image__default__file_field_file_token_link */   'text' => '[file:name]',
   /* image__default__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__default__file_field_file_token_link */   'icon' => 0,
   /* image__default__file_field_file_token_link */   'size' => 0,
   /* image__default__file_field_file_token_link */ );
  $export['image__default__file_field_file_token_link'] = $file_display;

   /* image__default__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__default__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__default__file_field_file_url_plain */ $file_display->name = 'image__default__file_field_file_url_plain';
   /* image__default__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__default__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__default__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__default__file_field_file_url_plain'] = $file_display;

   /* image__default__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__default__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__default__file_field_media_large_icon */ $file_display->name = 'image__default__file_field_media_large_icon';
   /* image__default__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__default__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__default__file_field_media_large_icon */ $file_display->settings = array(
   /* image__default__file_field_media_large_icon */   'image_style' => '',
   /* image__default__file_field_media_large_icon */ );
  $export['image__default__file_field_media_large_icon'] = $file_display;

   /* image__full__file_field_file_default */ $file_display = new stdClass();
   /* image__full__file_field_file_default */ $file_display->api_version = 1;
   /* image__full__file_field_file_default */ $file_display->name = 'image__full__file_field_file_default';
   /* image__full__file_field_file_default */ $file_display->weight = 0;
   /* image__full__file_field_file_default */ $file_display->status = FALSE;
   /* image__full__file_field_file_default */ $file_display->settings = '';
  $export['image__full__file_field_file_default'] = $file_display;

   /* image__full__file_field_file_download_link */ $file_display = new stdClass();
   /* image__full__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__full__file_field_file_download_link */ $file_display->name = 'image__full__file_field_file_download_link';
   /* image__full__file_field_file_download_link */ $file_display->weight = 0;
   /* image__full__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__full__file_field_file_download_link */ $file_display->settings = array(
   /* image__full__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__full__file_field_file_download_link */ );
  $export['image__full__file_field_file_download_link'] = $file_display;

   /* image__full__file_field_file_table */ $file_display = new stdClass();
   /* image__full__file_field_file_table */ $file_display->api_version = 1;
   /* image__full__file_field_file_table */ $file_display->name = 'image__full__file_field_file_table';
   /* image__full__file_field_file_table */ $file_display->weight = 0;
   /* image__full__file_field_file_table */ $file_display->status = FALSE;
   /* image__full__file_field_file_table */ $file_display->settings = '';
  $export['image__full__file_field_file_table'] = $file_display;

   /* image__full__file_field_file_token_link */ $file_display = new stdClass();
   /* image__full__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__full__file_field_file_token_link */ $file_display->name = 'image__full__file_field_file_token_link';
   /* image__full__file_field_file_token_link */ $file_display->weight = 0;
   /* image__full__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__full__file_field_file_token_link */ $file_display->settings = array(
   /* image__full__file_field_file_token_link */   'text' => '[file:name]',
   /* image__full__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__full__file_field_file_token_link */   'icon' => 0,
   /* image__full__file_field_file_token_link */   'size' => 0,
   /* image__full__file_field_file_token_link */ );
  $export['image__full__file_field_file_token_link'] = $file_display;

   /* image__full__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__full__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__full__file_field_file_url_plain */ $file_display->name = 'image__full__file_field_file_url_plain';
   /* image__full__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__full__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__full__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__full__file_field_file_url_plain'] = $file_display;

   /* image__full__file_field_image */ $file_display = new stdClass();
   /* image__full__file_field_image */ $file_display->api_version = 1;
   /* image__full__file_field_image */ $file_display->name = 'image__full__file_field_image';
   /* image__full__file_field_image */ $file_display->weight = 0;
   /* image__full__file_field_image */ $file_display->status = TRUE;
   /* image__full__file_field_image */ $file_display->settings = array(
   /* image__full__file_field_image */   'image_style' => '',
   /* image__full__file_field_image */   'image_link' => '',
   /* image__full__file_field_image */ );
  $export['image__full__file_field_image'] = $file_display;

   /* image__full__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__full__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__full__file_field_media_large_icon */ $file_display->name = 'image__full__file_field_media_large_icon';
   /* image__full__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__full__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__full__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__full__file_field_media_large_icon'] = $file_display;

   /* image__full__file_image */ $file_display = new stdClass();
   /* image__full__file_image */ $file_display->api_version = 1;
   /* image__full__file_image */ $file_display->name = 'image__full__file_image';
   /* image__full__file_image */ $file_display->weight = 5;
   /* image__full__file_image */ $file_display->status = TRUE;
   /* image__full__file_image */ $file_display->settings = array(
   /* image__full__file_image */   'image_style' => 'large',
   /* image__full__file_image */ );
  $export['image__full__file_image'] = $file_display;

   /* image__group_banner__file_field_file_default */ $file_display = new stdClass();
   /* image__group_banner__file_field_file_default */ $file_display->api_version = 1;
   /* image__group_banner__file_field_file_default */ $file_display->name = 'image__group_banner__file_field_file_default';
   /* image__group_banner__file_field_file_default */ $file_display->weight = 0;
   /* image__group_banner__file_field_file_default */ $file_display->status = FALSE;
   /* image__group_banner__file_field_file_default */ $file_display->settings = '';
  $export['image__group_banner__file_field_file_default'] = $file_display;

   /* image__group_banner__file_field_file_download_link */ $file_display = new stdClass();
   /* image__group_banner__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__group_banner__file_field_file_download_link */ $file_display->name = 'image__group_banner__file_field_file_download_link';
   /* image__group_banner__file_field_file_download_link */ $file_display->weight = 0;
   /* image__group_banner__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__group_banner__file_field_file_download_link */ $file_display->settings = array(
   /* image__group_banner__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__group_banner__file_field_file_download_link */ );
  $export['image__group_banner__file_field_file_download_link'] = $file_display;

   /* image__group_banner__file_field_file_table */ $file_display = new stdClass();
   /* image__group_banner__file_field_file_table */ $file_display->api_version = 1;
   /* image__group_banner__file_field_file_table */ $file_display->name = 'image__group_banner__file_field_file_table';
   /* image__group_banner__file_field_file_table */ $file_display->weight = 0;
   /* image__group_banner__file_field_file_table */ $file_display->status = FALSE;
   /* image__group_banner__file_field_file_table */ $file_display->settings = '';
  $export['image__group_banner__file_field_file_table'] = $file_display;

   /* image__group_banner__file_field_file_token_link */ $file_display = new stdClass();
   /* image__group_banner__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__group_banner__file_field_file_token_link */ $file_display->name = 'image__group_banner__file_field_file_token_link';
   /* image__group_banner__file_field_file_token_link */ $file_display->weight = 0;
   /* image__group_banner__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__group_banner__file_field_file_token_link */ $file_display->settings = array(
   /* image__group_banner__file_field_file_token_link */   'text' => '[file:name]',
   /* image__group_banner__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__group_banner__file_field_file_token_link */   'icon' => 0,
   /* image__group_banner__file_field_file_token_link */   'size' => 0,
   /* image__group_banner__file_field_file_token_link */ );
  $export['image__group_banner__file_field_file_token_link'] = $file_display;

   /* image__group_banner__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__group_banner__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__group_banner__file_field_file_url_plain */ $file_display->name = 'image__group_banner__file_field_file_url_plain';
   /* image__group_banner__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__group_banner__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__group_banner__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__group_banner__file_field_file_url_plain'] = $file_display;

   /* image__group_banner__file_field_image */ $file_display = new stdClass();
   /* image__group_banner__file_field_image */ $file_display->api_version = 1;
   /* image__group_banner__file_field_image */ $file_display->name = 'image__group_banner__file_field_image';
   /* image__group_banner__file_field_image */ $file_display->weight = 0;
   /* image__group_banner__file_field_image */ $file_display->status = TRUE;
   /* image__group_banner__file_field_image */ $file_display->settings = array(
   /* image__group_banner__file_field_image */   'image_style' => 'banner810x400',
   /* image__group_banner__file_field_image */   'image_link' => '',
   /* image__group_banner__file_field_image */ );
  $export['image__group_banner__file_field_image'] = $file_display;

   /* image__group_banner__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__group_banner__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__group_banner__file_field_media_large_icon */ $file_display->name = 'image__group_banner__file_field_media_large_icon';
   /* image__group_banner__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__group_banner__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__group_banner__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__group_banner__file_field_media_large_icon'] = $file_display;

   /* image__large_version__file_field_file_default */ $file_display = new stdClass();
   /* image__large_version__file_field_file_default */ $file_display->api_version = 1;
   /* image__large_version__file_field_file_default */ $file_display->name = 'image__large_version__file_field_file_default';
   /* image__large_version__file_field_file_default */ $file_display->weight = 0;
   /* image__large_version__file_field_file_default */ $file_display->status = FALSE;
   /* image__large_version__file_field_file_default */ $file_display->settings = '';
  $export['image__large_version__file_field_file_default'] = $file_display;

   /* image__large_version__file_field_file_download_link */ $file_display = new stdClass();
   /* image__large_version__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__large_version__file_field_file_download_link */ $file_display->name = 'image__large_version__file_field_file_download_link';
   /* image__large_version__file_field_file_download_link */ $file_display->weight = 0;
   /* image__large_version__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__large_version__file_field_file_download_link */ $file_display->settings = array(
   /* image__large_version__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__large_version__file_field_file_download_link */ );
  $export['image__large_version__file_field_file_download_link'] = $file_display;

   /* image__large_version__file_field_file_table */ $file_display = new stdClass();
   /* image__large_version__file_field_file_table */ $file_display->api_version = 1;
   /* image__large_version__file_field_file_table */ $file_display->name = 'image__large_version__file_field_file_table';
   /* image__large_version__file_field_file_table */ $file_display->weight = 0;
   /* image__large_version__file_field_file_table */ $file_display->status = FALSE;
   /* image__large_version__file_field_file_table */ $file_display->settings = '';
  $export['image__large_version__file_field_file_table'] = $file_display;

   /* image__large_version__file_field_file_token_link */ $file_display = new stdClass();
   /* image__large_version__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__large_version__file_field_file_token_link */ $file_display->name = 'image__large_version__file_field_file_token_link';
   /* image__large_version__file_field_file_token_link */ $file_display->weight = 0;
   /* image__large_version__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__large_version__file_field_file_token_link */ $file_display->settings = array(
   /* image__large_version__file_field_file_token_link */   'text' => '[file:name]',
   /* image__large_version__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__large_version__file_field_file_token_link */   'icon' => 0,
   /* image__large_version__file_field_file_token_link */   'size' => 0,
   /* image__large_version__file_field_file_token_link */ );
  $export['image__large_version__file_field_file_token_link'] = $file_display;

   /* image__large_version__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__large_version__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__large_version__file_field_file_url_plain */ $file_display->name = 'image__large_version__file_field_file_url_plain';
   /* image__large_version__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__large_version__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__large_version__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__large_version__file_field_file_url_plain'] = $file_display;

   /* image__large_version__file_field_image */ $file_display = new stdClass();
   /* image__large_version__file_field_image */ $file_display->api_version = 1;
   /* image__large_version__file_field_image */ $file_display->name = 'image__large_version__file_field_image';
   /* image__large_version__file_field_image */ $file_display->weight = 0;
   /* image__large_version__file_field_image */ $file_display->status = TRUE;
   /* image__large_version__file_field_image */ $file_display->settings = array(
   /* image__large_version__file_field_image */   'image_style' => 'wysiwyg-large-version',
   /* image__large_version__file_field_image */   'image_link' => '',
   /* image__large_version__file_field_image */ );
  $export['image__large_version__file_field_image'] = $file_display;

   /* image__large_version__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__large_version__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__large_version__file_field_media_large_icon */ $file_display->name = 'image__large_version__file_field_media_large_icon';
   /* image__large_version__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__large_version__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__large_version__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__large_version__file_field_media_large_icon'] = $file_display;

   /* image__main_news_image__file_field_file_default */ $file_display = new stdClass();
   /* image__main_news_image__file_field_file_default */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_file_default */ $file_display->name = 'image__main_news_image__file_field_file_default';
   /* image__main_news_image__file_field_file_default */ $file_display->weight = 0;
   /* image__main_news_image__file_field_file_default */ $file_display->status = FALSE;
   /* image__main_news_image__file_field_file_default */ $file_display->settings = '';
  $export['image__main_news_image__file_field_file_default'] = $file_display;

   /* image__main_news_image__file_field_file_download_link */ $file_display = new stdClass();
   /* image__main_news_image__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_file_download_link */ $file_display->name = 'image__main_news_image__file_field_file_download_link';
   /* image__main_news_image__file_field_file_download_link */ $file_display->weight = 0;
   /* image__main_news_image__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__main_news_image__file_field_file_download_link */ $file_display->settings = array(
   /* image__main_news_image__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__main_news_image__file_field_file_download_link */ );
  $export['image__main_news_image__file_field_file_download_link'] = $file_display;

   /* image__main_news_image__file_field_file_table */ $file_display = new stdClass();
   /* image__main_news_image__file_field_file_table */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_file_table */ $file_display->name = 'image__main_news_image__file_field_file_table';
   /* image__main_news_image__file_field_file_table */ $file_display->weight = 0;
   /* image__main_news_image__file_field_file_table */ $file_display->status = FALSE;
   /* image__main_news_image__file_field_file_table */ $file_display->settings = '';
  $export['image__main_news_image__file_field_file_table'] = $file_display;

   /* image__main_news_image__file_field_file_token_link */ $file_display = new stdClass();
   /* image__main_news_image__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_file_token_link */ $file_display->name = 'image__main_news_image__file_field_file_token_link';
   /* image__main_news_image__file_field_file_token_link */ $file_display->weight = 0;
   /* image__main_news_image__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__main_news_image__file_field_file_token_link */ $file_display->settings = array(
   /* image__main_news_image__file_field_file_token_link */   'text' => '[file:name]',
   /* image__main_news_image__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__main_news_image__file_field_file_token_link */   'icon' => 0,
   /* image__main_news_image__file_field_file_token_link */   'size' => 0,
   /* image__main_news_image__file_field_file_token_link */ );
  $export['image__main_news_image__file_field_file_token_link'] = $file_display;

   /* image__main_news_image__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__main_news_image__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_file_url_plain */ $file_display->name = 'image__main_news_image__file_field_file_url_plain';
   /* image__main_news_image__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__main_news_image__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__main_news_image__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__main_news_image__file_field_file_url_plain'] = $file_display;

   /* image__main_news_image__file_field_image */ $file_display = new stdClass();
   /* image__main_news_image__file_field_image */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_image */ $file_display->name = 'image__main_news_image__file_field_image';
   /* image__main_news_image__file_field_image */ $file_display->weight = 0;
   /* image__main_news_image__file_field_image */ $file_display->status = TRUE;
   /* image__main_news_image__file_field_image */ $file_display->settings = array(
   /* image__main_news_image__file_field_image */   'image_style' => 'news_item_main_image',
   /* image__main_news_image__file_field_image */   'image_link' => '',
   /* image__main_news_image__file_field_image */ );
  $export['image__main_news_image__file_field_image'] = $file_display;

   /* image__main_news_image__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__main_news_image__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__main_news_image__file_field_media_large_icon */ $file_display->name = 'image__main_news_image__file_field_media_large_icon';
   /* image__main_news_image__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__main_news_image__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__main_news_image__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__main_news_image__file_field_media_large_icon'] = $file_display;

   /* image__medium_version__file_field_file_default */ $file_display = new stdClass();
   /* image__medium_version__file_field_file_default */ $file_display->api_version = 1;
   /* image__medium_version__file_field_file_default */ $file_display->name = 'image__medium_version__file_field_file_default';
   /* image__medium_version__file_field_file_default */ $file_display->weight = 0;
   /* image__medium_version__file_field_file_default */ $file_display->status = FALSE;
   /* image__medium_version__file_field_file_default */ $file_display->settings = '';
  $export['image__medium_version__file_field_file_default'] = $file_display;

   /* image__medium_version__file_field_file_download_link */ $file_display = new stdClass();
   /* image__medium_version__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__medium_version__file_field_file_download_link */ $file_display->name = 'image__medium_version__file_field_file_download_link';
   /* image__medium_version__file_field_file_download_link */ $file_display->weight = 0;
   /* image__medium_version__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__medium_version__file_field_file_download_link */ $file_display->settings = array(
   /* image__medium_version__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__medium_version__file_field_file_download_link */ );
  $export['image__medium_version__file_field_file_download_link'] = $file_display;

   /* image__medium_version__file_field_file_table */ $file_display = new stdClass();
   /* image__medium_version__file_field_file_table */ $file_display->api_version = 1;
   /* image__medium_version__file_field_file_table */ $file_display->name = 'image__medium_version__file_field_file_table';
   /* image__medium_version__file_field_file_table */ $file_display->weight = 0;
   /* image__medium_version__file_field_file_table */ $file_display->status = FALSE;
   /* image__medium_version__file_field_file_table */ $file_display->settings = '';
  $export['image__medium_version__file_field_file_table'] = $file_display;

   /* image__medium_version__file_field_file_token_link */ $file_display = new stdClass();
   /* image__medium_version__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__medium_version__file_field_file_token_link */ $file_display->name = 'image__medium_version__file_field_file_token_link';
   /* image__medium_version__file_field_file_token_link */ $file_display->weight = 0;
   /* image__medium_version__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__medium_version__file_field_file_token_link */ $file_display->settings = array(
   /* image__medium_version__file_field_file_token_link */   'text' => '[file:name]',
   /* image__medium_version__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__medium_version__file_field_file_token_link */   'icon' => 0,
   /* image__medium_version__file_field_file_token_link */   'size' => 0,
   /* image__medium_version__file_field_file_token_link */ );
  $export['image__medium_version__file_field_file_token_link'] = $file_display;

   /* image__medium_version__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__medium_version__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__medium_version__file_field_file_url_plain */ $file_display->name = 'image__medium_version__file_field_file_url_plain';
   /* image__medium_version__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__medium_version__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__medium_version__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__medium_version__file_field_file_url_plain'] = $file_display;

   /* image__medium_version__file_field_image */ $file_display = new stdClass();
   /* image__medium_version__file_field_image */ $file_display->api_version = 1;
   /* image__medium_version__file_field_image */ $file_display->name = 'image__medium_version__file_field_image';
   /* image__medium_version__file_field_image */ $file_display->weight = 0;
   /* image__medium_version__file_field_image */ $file_display->status = TRUE;
   /* image__medium_version__file_field_image */ $file_display->settings = array(
   /* image__medium_version__file_field_image */   'image_style' => 'wysiwyg-medium-version',
   /* image__medium_version__file_field_image */   'image_link' => '',
   /* image__medium_version__file_field_image */ );
  $export['image__medium_version__file_field_image'] = $file_display;

   /* image__medium_version__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__medium_version__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__medium_version__file_field_media_large_icon */ $file_display->name = 'image__medium_version__file_field_media_large_icon';
   /* image__medium_version__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__medium_version__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__medium_version__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__medium_version__file_field_media_large_icon'] = $file_display;

   /* image__original_version__file_field_file_default */ $file_display = new stdClass();
   /* image__original_version__file_field_file_default */ $file_display->api_version = 1;
   /* image__original_version__file_field_file_default */ $file_display->name = 'image__original_version__file_field_file_default';
   /* image__original_version__file_field_file_default */ $file_display->weight = 0;
   /* image__original_version__file_field_file_default */ $file_display->status = FALSE;
   /* image__original_version__file_field_file_default */ $file_display->settings = '';
  $export['image__original_version__file_field_file_default'] = $file_display;

   /* image__original_version__file_field_file_download_link */ $file_display = new stdClass();
   /* image__original_version__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__original_version__file_field_file_download_link */ $file_display->name = 'image__original_version__file_field_file_download_link';
   /* image__original_version__file_field_file_download_link */ $file_display->weight = 0;
   /* image__original_version__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__original_version__file_field_file_download_link */ $file_display->settings = array(
   /* image__original_version__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__original_version__file_field_file_download_link */ );
  $export['image__original_version__file_field_file_download_link'] = $file_display;

   /* image__original_version__file_field_file_table */ $file_display = new stdClass();
   /* image__original_version__file_field_file_table */ $file_display->api_version = 1;
   /* image__original_version__file_field_file_table */ $file_display->name = 'image__original_version__file_field_file_table';
   /* image__original_version__file_field_file_table */ $file_display->weight = 0;
   /* image__original_version__file_field_file_table */ $file_display->status = FALSE;
   /* image__original_version__file_field_file_table */ $file_display->settings = '';
  $export['image__original_version__file_field_file_table'] = $file_display;

   /* image__original_version__file_field_file_token_link */ $file_display = new stdClass();
   /* image__original_version__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__original_version__file_field_file_token_link */ $file_display->name = 'image__original_version__file_field_file_token_link';
   /* image__original_version__file_field_file_token_link */ $file_display->weight = 0;
   /* image__original_version__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__original_version__file_field_file_token_link */ $file_display->settings = array(
   /* image__original_version__file_field_file_token_link */   'text' => '[file:name]',
   /* image__original_version__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__original_version__file_field_file_token_link */   'icon' => 0,
   /* image__original_version__file_field_file_token_link */   'size' => 0,
   /* image__original_version__file_field_file_token_link */ );
  $export['image__original_version__file_field_file_token_link'] = $file_display;

   /* image__original_version__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__original_version__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__original_version__file_field_file_url_plain */ $file_display->name = 'image__original_version__file_field_file_url_plain';
   /* image__original_version__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__original_version__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__original_version__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__original_version__file_field_file_url_plain'] = $file_display;

   /* image__original_version__file_field_image */ $file_display = new stdClass();
   /* image__original_version__file_field_image */ $file_display->api_version = 1;
   /* image__original_version__file_field_image */ $file_display->name = 'image__original_version__file_field_image';
   /* image__original_version__file_field_image */ $file_display->weight = 0;
   /* image__original_version__file_field_image */ $file_display->status = TRUE;
   /* image__original_version__file_field_image */ $file_display->settings = array(
   /* image__original_version__file_field_image */   'image_style' => 'media_gallery_large',
   /* image__original_version__file_field_image */   'image_link' => '',
   /* image__original_version__file_field_image */ );
  $export['image__original_version__file_field_image'] = $file_display;

   /* image__original_version__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__original_version__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__original_version__file_field_media_large_icon */ $file_display->name = 'image__original_version__file_field_media_large_icon';
   /* image__original_version__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__original_version__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__original_version__file_field_media_large_icon */ $file_display->settings = array(
   /* image__original_version__file_field_media_large_icon */   'image_style' => '',
   /* image__original_version__file_field_media_large_icon */ );
  $export['image__original_version__file_field_media_large_icon'] = $file_display;

   /* image__sidebar_image__file_field_file_default */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_file_default */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_file_default */ $file_display->name = 'image__sidebar_image__file_field_file_default';
   /* image__sidebar_image__file_field_file_default */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_file_default */ $file_display->status = FALSE;
   /* image__sidebar_image__file_field_file_default */ $file_display->settings = '';
  $export['image__sidebar_image__file_field_file_default'] = $file_display;

   /* image__sidebar_image__file_field_file_download_link */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_file_download_link */ $file_display->name = 'image__sidebar_image__file_field_file_download_link';
   /* image__sidebar_image__file_field_file_download_link */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__sidebar_image__file_field_file_download_link */ $file_display->settings = array(
   /* image__sidebar_image__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__sidebar_image__file_field_file_download_link */ );
  $export['image__sidebar_image__file_field_file_download_link'] = $file_display;

   /* image__sidebar_image__file_field_file_table */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_file_table */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_file_table */ $file_display->name = 'image__sidebar_image__file_field_file_table';
   /* image__sidebar_image__file_field_file_table */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_file_table */ $file_display->status = FALSE;
   /* image__sidebar_image__file_field_file_table */ $file_display->settings = '';
  $export['image__sidebar_image__file_field_file_table'] = $file_display;

   /* image__sidebar_image__file_field_file_token_link */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_file_token_link */ $file_display->name = 'image__sidebar_image__file_field_file_token_link';
   /* image__sidebar_image__file_field_file_token_link */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__sidebar_image__file_field_file_token_link */ $file_display->settings = array(
   /* image__sidebar_image__file_field_file_token_link */   'text' => '[file:name]',
   /* image__sidebar_image__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__sidebar_image__file_field_file_token_link */   'icon' => 0,
   /* image__sidebar_image__file_field_file_token_link */   'size' => 0,
   /* image__sidebar_image__file_field_file_token_link */ );
  $export['image__sidebar_image__file_field_file_token_link'] = $file_display;

   /* image__sidebar_image__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_file_url_plain */ $file_display->name = 'image__sidebar_image__file_field_file_url_plain';
   /* image__sidebar_image__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__sidebar_image__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__sidebar_image__file_field_file_url_plain'] = $file_display;

   /* image__sidebar_image__file_field_image */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_image */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_image */ $file_display->name = 'image__sidebar_image__file_field_image';
   /* image__sidebar_image__file_field_image */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_image */ $file_display->status = TRUE;
   /* image__sidebar_image__file_field_image */ $file_display->settings = array(
   /* image__sidebar_image__file_field_image */   'image_style' => 'sidebar_additional_image',
   /* image__sidebar_image__file_field_image */   'image_link' => '',
   /* image__sidebar_image__file_field_image */ );
  $export['image__sidebar_image__file_field_image'] = $file_display;

   /* image__sidebar_image__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__sidebar_image__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__sidebar_image__file_field_media_large_icon */ $file_display->name = 'image__sidebar_image__file_field_media_large_icon';
   /* image__sidebar_image__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__sidebar_image__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__sidebar_image__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__sidebar_image__file_field_media_large_icon'] = $file_display;

   /* image__small_version__file_field_file_default */ $file_display = new stdClass();
   /* image__small_version__file_field_file_default */ $file_display->api_version = 1;
   /* image__small_version__file_field_file_default */ $file_display->name = 'image__small_version__file_field_file_default';
   /* image__small_version__file_field_file_default */ $file_display->weight = 0;
   /* image__small_version__file_field_file_default */ $file_display->status = FALSE;
   /* image__small_version__file_field_file_default */ $file_display->settings = '';
  $export['image__small_version__file_field_file_default'] = $file_display;

   /* image__small_version__file_field_file_download_link */ $file_display = new stdClass();
   /* image__small_version__file_field_file_download_link */ $file_display->api_version = 1;
   /* image__small_version__file_field_file_download_link */ $file_display->name = 'image__small_version__file_field_file_download_link';
   /* image__small_version__file_field_file_download_link */ $file_display->weight = 0;
   /* image__small_version__file_field_file_download_link */ $file_display->status = FALSE;
   /* image__small_version__file_field_file_download_link */ $file_display->settings = array(
   /* image__small_version__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* image__small_version__file_field_file_download_link */ );
  $export['image__small_version__file_field_file_download_link'] = $file_display;

   /* image__small_version__file_field_file_table */ $file_display = new stdClass();
   /* image__small_version__file_field_file_table */ $file_display->api_version = 1;
   /* image__small_version__file_field_file_table */ $file_display->name = 'image__small_version__file_field_file_table';
   /* image__small_version__file_field_file_table */ $file_display->weight = 0;
   /* image__small_version__file_field_file_table */ $file_display->status = FALSE;
   /* image__small_version__file_field_file_table */ $file_display->settings = '';
  $export['image__small_version__file_field_file_table'] = $file_display;

   /* image__small_version__file_field_file_token_link */ $file_display = new stdClass();
   /* image__small_version__file_field_file_token_link */ $file_display->api_version = 1;
   /* image__small_version__file_field_file_token_link */ $file_display->name = 'image__small_version__file_field_file_token_link';
   /* image__small_version__file_field_file_token_link */ $file_display->weight = 0;
   /* image__small_version__file_field_file_token_link */ $file_display->status = FALSE;
   /* image__small_version__file_field_file_token_link */ $file_display->settings = array(
   /* image__small_version__file_field_file_token_link */   'text' => '[file:name]',
   /* image__small_version__file_field_file_token_link */   'url' => '[file:download-url]',
   /* image__small_version__file_field_file_token_link */   'icon' => 0,
   /* image__small_version__file_field_file_token_link */   'size' => 0,
   /* image__small_version__file_field_file_token_link */ );
  $export['image__small_version__file_field_file_token_link'] = $file_display;

   /* image__small_version__file_field_file_url_plain */ $file_display = new stdClass();
   /* image__small_version__file_field_file_url_plain */ $file_display->api_version = 1;
   /* image__small_version__file_field_file_url_plain */ $file_display->name = 'image__small_version__file_field_file_url_plain';
   /* image__small_version__file_field_file_url_plain */ $file_display->weight = 0;
   /* image__small_version__file_field_file_url_plain */ $file_display->status = FALSE;
   /* image__small_version__file_field_file_url_plain */ $file_display->settings = '';
  $export['image__small_version__file_field_file_url_plain'] = $file_display;

   /* image__small_version__file_field_image */ $file_display = new stdClass();
   /* image__small_version__file_field_image */ $file_display->api_version = 1;
   /* image__small_version__file_field_image */ $file_display->name = 'image__small_version__file_field_image';
   /* image__small_version__file_field_image */ $file_display->weight = 0;
   /* image__small_version__file_field_image */ $file_display->status = TRUE;
   /* image__small_version__file_field_image */ $file_display->settings = array(
   /* image__small_version__file_field_image */   'image_style' => 'wysiwyg-small-version',
   /* image__small_version__file_field_image */   'image_link' => '',
   /* image__small_version__file_field_image */ );
  $export['image__small_version__file_field_image'] = $file_display;

   /* image__small_version__file_field_media_large_icon */ $file_display = new stdClass();
   /* image__small_version__file_field_media_large_icon */ $file_display->api_version = 1;
   /* image__small_version__file_field_media_large_icon */ $file_display->name = 'image__small_version__file_field_media_large_icon';
   /* image__small_version__file_field_media_large_icon */ $file_display->weight = 0;
   /* image__small_version__file_field_media_large_icon */ $file_display->status = FALSE;
   /* image__small_version__file_field_media_large_icon */ $file_display->settings = '';
  $export['image__small_version__file_field_media_large_icon'] = $file_display;

  return $export;
}
