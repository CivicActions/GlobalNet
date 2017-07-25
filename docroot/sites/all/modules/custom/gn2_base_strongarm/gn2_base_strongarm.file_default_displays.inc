<?php
/**
 * @file
 * gn2_base_strongarm.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function gn2_base_strongarm_file_default_displays() {
  $export = array();

   /* image__media_gallery_thumbnail__file_field_colorbox */ $file_display = new stdClass();
   /* image__media_gallery_thumbnail__file_field_colorbox */ $file_display->api_version = 1;
   /* image__media_gallery_thumbnail__file_field_colorbox */ $file_display->name = 'image__media_gallery_thumbnail__file_field_colorbox';
   /* image__media_gallery_thumbnail__file_field_colorbox */ $file_display->weight = 0;
   /* image__media_gallery_thumbnail__file_field_colorbox */ $file_display->status = TRUE;
   /* image__media_gallery_thumbnail__file_field_colorbox */ $file_display->settings = array(
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_node_style' => 'media_gallery_large',
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_node_style_first' => '',
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_image_style' => 'media_gallery_large',
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_gallery' => 'post',
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_gallery_custom' => '',
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_caption' => 'auto',
   /* image__media_gallery_thumbnail__file_field_colorbox */   'colorbox_caption_custom' => '',
   /* image__media_gallery_thumbnail__file_field_colorbox */ );
  $export['image__media_gallery_thumbnail__file_field_colorbox'] = $file_display;

   /* image__media_gallery_thumbnail__file_field_image */ $file_display = new stdClass();
   /* image__media_gallery_thumbnail__file_field_image */ $file_display->api_version = 1;
   /* image__media_gallery_thumbnail__file_field_image */ $file_display->name = 'image__media_gallery_thumbnail__file_field_image';
   /* image__media_gallery_thumbnail__file_field_image */ $file_display->weight = 0;
   /* image__media_gallery_thumbnail__file_field_image */ $file_display->status = TRUE;
   /* image__media_gallery_thumbnail__file_field_image */ $file_display->settings = array(
   /* image__media_gallery_thumbnail__file_field_image */   'image_style' => 'wysiwyg-large-version',
   /* image__media_gallery_thumbnail__file_field_image */   'image_link' => '',
   /* image__media_gallery_thumbnail__file_field_image */ );
  $export['image__media_gallery_thumbnail__file_field_image'] = $file_display;

   /* video__default__file_field_file_default */ $file_display = new stdClass();
   /* video__default__file_field_file_default */ $file_display->api_version = 1;
   /* video__default__file_field_file_default */ $file_display->name = 'video__default__file_field_file_default';
   /* video__default__file_field_file_default */ $file_display->weight = 0;
   /* video__default__file_field_file_default */ $file_display->status = FALSE;
   /* video__default__file_field_file_default */ $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

   /* video__default__file_field_file_download_link */ $file_display = new stdClass();
   /* video__default__file_field_file_download_link */ $file_display->api_version = 1;
   /* video__default__file_field_file_download_link */ $file_display->name = 'video__default__file_field_file_download_link';
   /* video__default__file_field_file_download_link */ $file_display->weight = 0;
   /* video__default__file_field_file_download_link */ $file_display->status = FALSE;
   /* video__default__file_field_file_download_link */ $file_display->settings = array(
   /* video__default__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* video__default__file_field_file_download_link */ );
  $export['video__default__file_field_file_download_link'] = $file_display;

   /* video__default__file_field_file_table */ $file_display = new stdClass();
   /* video__default__file_field_file_table */ $file_display->api_version = 1;
   /* video__default__file_field_file_table */ $file_display->name = 'video__default__file_field_file_table';
   /* video__default__file_field_file_table */ $file_display->weight = 0;
   /* video__default__file_field_file_table */ $file_display->status = FALSE;
   /* video__default__file_field_file_table */ $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

   /* video__default__file_field_file_token_link */ $file_display = new stdClass();
   /* video__default__file_field_file_token_link */ $file_display->api_version = 1;
   /* video__default__file_field_file_token_link */ $file_display->name = 'video__default__file_field_file_token_link';
   /* video__default__file_field_file_token_link */ $file_display->weight = 0;
   /* video__default__file_field_file_token_link */ $file_display->status = FALSE;
   /* video__default__file_field_file_token_link */ $file_display->settings = array(
   /* video__default__file_field_file_token_link */   'text' => '[file:name]',
   /* video__default__file_field_file_token_link */   'url' => '[file:download-url]',
   /* video__default__file_field_file_token_link */   'icon' => 0,
   /* video__default__file_field_file_token_link */   'size' => 0,
   /* video__default__file_field_file_token_link */ );
  $export['video__default__file_field_file_token_link'] = $file_display;

   /* video__default__file_field_file_url_plain */ $file_display = new stdClass();
   /* video__default__file_field_file_url_plain */ $file_display->api_version = 1;
   /* video__default__file_field_file_url_plain */ $file_display->name = 'video__default__file_field_file_url_plain';
   /* video__default__file_field_file_url_plain */ $file_display->weight = 0;
   /* video__default__file_field_file_url_plain */ $file_display->status = FALSE;
   /* video__default__file_field_file_url_plain */ $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

   /* video__default__file_field_media_gallery */ $file_display = new stdClass();
   /* video__default__file_field_media_gallery */ $file_display->api_version = 1;
   /* video__default__file_field_media_gallery */ $file_display->name = 'video__default__file_field_media_gallery';
   /* video__default__file_field_media_gallery */ $file_display->weight = 0;
   /* video__default__file_field_media_gallery */ $file_display->status = FALSE;
   /* video__default__file_field_media_gallery */ $file_display->settings = array(
   /* video__default__file_field_media_gallery */   'file_view_mode' => 'media_gallery_thumbnail',
   /* video__default__file_field_media_gallery */ );
  $export['video__default__file_field_media_gallery'] = $file_display;

   /* video__default__file_field_media_large_icon */ $file_display = new stdClass();
   /* video__default__file_field_media_large_icon */ $file_display->api_version = 1;
   /* video__default__file_field_media_large_icon */ $file_display->name = 'video__default__file_field_media_large_icon';
   /* video__default__file_field_media_large_icon */ $file_display->weight = 0;
   /* video__default__file_field_media_large_icon */ $file_display->status = FALSE;
   /* video__default__file_field_media_large_icon */ $file_display->settings = '';
  $export['video__default__file_field_media_large_icon'] = $file_display;

   /* video__default__media_vimeo_image */ $file_display = new stdClass();
   /* video__default__media_vimeo_image */ $file_display->api_version = 1;
   /* video__default__media_vimeo_image */ $file_display->name = 'video__default__media_vimeo_image';
   /* video__default__media_vimeo_image */ $file_display->weight = 0;
   /* video__default__media_vimeo_image */ $file_display->status = FALSE;
   /* video__default__media_vimeo_image */ $file_display->settings = array(
   /* video__default__media_vimeo_image */   'image_style' => '',
   /* video__default__media_vimeo_image */ );
  $export['video__default__media_vimeo_image'] = $file_display;

   /* video__default__media_youtube_image */ $file_display = new stdClass();
   /* video__default__media_youtube_image */ $file_display->api_version = 1;
   /* video__default__media_youtube_image */ $file_display->name = 'video__default__media_youtube_image';
   /* video__default__media_youtube_image */ $file_display->weight = 0;
   /* video__default__media_youtube_image */ $file_display->status = FALSE;
   /* video__default__media_youtube_image */ $file_display->settings = array(
   /* video__default__media_youtube_image */   'image_style' => '',
   /* video__default__media_youtube_image */ );
  $export['video__default__media_youtube_image'] = $file_display;

   /* video__preview__file_field_file_download_link */ $file_display = new stdClass();
   /* video__preview__file_field_file_download_link */ $file_display->api_version = 1;
   /* video__preview__file_field_file_download_link */ $file_display->name = 'video__preview__file_field_file_download_link';
   /* video__preview__file_field_file_download_link */ $file_display->weight = 0;
   /* video__preview__file_field_file_download_link */ $file_display->status = FALSE;
   /* video__preview__file_field_file_download_link */ $file_display->settings = array(
   /* video__preview__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* video__preview__file_field_file_download_link */ );
  $export['video__preview__file_field_file_download_link'] = $file_display;

   /* video__preview__file_field_file_table */ $file_display = new stdClass();
   /* video__preview__file_field_file_table */ $file_display->api_version = 1;
   /* video__preview__file_field_file_table */ $file_display->name = 'video__preview__file_field_file_table';
   /* video__preview__file_field_file_table */ $file_display->weight = 0;
   /* video__preview__file_field_file_table */ $file_display->status = FALSE;
   /* video__preview__file_field_file_table */ $file_display->settings = '';
  $export['video__preview__file_field_file_table'] = $file_display;

   /* video__preview__file_field_file_token_link */ $file_display = new stdClass();
   /* video__preview__file_field_file_token_link */ $file_display->api_version = 1;
   /* video__preview__file_field_file_token_link */ $file_display->name = 'video__preview__file_field_file_token_link';
   /* video__preview__file_field_file_token_link */ $file_display->weight = 0;
   /* video__preview__file_field_file_token_link */ $file_display->status = FALSE;
   /* video__preview__file_field_file_token_link */ $file_display->settings = array(
   /* video__preview__file_field_file_token_link */   'text' => '[file:name]',
   /* video__preview__file_field_file_token_link */   'url' => '[file:download-url]',
   /* video__preview__file_field_file_token_link */   'icon' => 0,
   /* video__preview__file_field_file_token_link */   'size' => 0,
   /* video__preview__file_field_file_token_link */ );
  $export['video__preview__file_field_file_token_link'] = $file_display;

   /* video__preview__file_field_file_url_plain */ $file_display = new stdClass();
   /* video__preview__file_field_file_url_plain */ $file_display->api_version = 1;
   /* video__preview__file_field_file_url_plain */ $file_display->name = 'video__preview__file_field_file_url_plain';
   /* video__preview__file_field_file_url_plain */ $file_display->weight = 0;
   /* video__preview__file_field_file_url_plain */ $file_display->status = FALSE;
   /* video__preview__file_field_file_url_plain */ $file_display->settings = '';
  $export['video__preview__file_field_file_url_plain'] = $file_display;

   /* video__preview__file_field_file_video */ $file_display = new stdClass();
   /* video__preview__file_field_file_video */ $file_display->api_version = 1;
   /* video__preview__file_field_file_video */ $file_display->name = 'video__preview__file_field_file_video';
   /* video__preview__file_field_file_video */ $file_display->weight = 0;
   /* video__preview__file_field_file_video */ $file_display->status = FALSE;
   /* video__preview__file_field_file_video */ $file_display->settings = array(
   /* video__preview__file_field_file_video */   'controls' => 1,
   /* video__preview__file_field_file_video */   'autoplay' => 0,
   /* video__preview__file_field_file_video */   'loop' => 0,
   /* video__preview__file_field_file_video */   'muted' => 0,
   /* video__preview__file_field_file_video */   'width' => '640',
   /* video__preview__file_field_file_video */   'height' => '390',
   /* video__preview__file_field_file_video */   'preload' => '',
   /* video__preview__file_field_file_video */   'multiple_file_behavior' => 'tags',
   /* video__preview__file_field_file_video */ );
  $export['video__preview__file_field_file_video'] = $file_display;

   /* video__preview__file_field_media_gallery */ $file_display = new stdClass();
   /* video__preview__file_field_media_gallery */ $file_display->api_version = 1;
   /* video__preview__file_field_media_gallery */ $file_display->name = 'video__preview__file_field_media_gallery';
   /* video__preview__file_field_media_gallery */ $file_display->weight = 0;
   /* video__preview__file_field_media_gallery */ $file_display->status = FALSE;
   /* video__preview__file_field_media_gallery */ $file_display->settings = array(
   /* video__preview__file_field_media_gallery */   'file_view_mode' => 'media_gallery_thumbnail',
   /* video__preview__file_field_media_gallery */ );
  $export['video__preview__file_field_media_gallery'] = $file_display;

   /* video__preview__media_vimeo_video */ $file_display = new stdClass();
   /* video__preview__media_vimeo_video */ $file_display->api_version = 1;
   /* video__preview__media_vimeo_video */ $file_display->name = 'video__preview__media_vimeo_video';
   /* video__preview__media_vimeo_video */ $file_display->weight = 0;
   /* video__preview__media_vimeo_video */ $file_display->status = FALSE;
   /* video__preview__media_vimeo_video */ $file_display->settings = array(
   /* video__preview__media_vimeo_video */   'width' => '640',
   /* video__preview__media_vimeo_video */   'height' => '360',
   /* video__preview__media_vimeo_video */   'color' => '',
   /* video__preview__media_vimeo_video */   'protocol_specify' => 0,
   /* video__preview__media_vimeo_video */   'protocol' => 'https://',
   /* video__preview__media_vimeo_video */   'autoplay' => 0,
   /* video__preview__media_vimeo_video */   'loop' => 0,
   /* video__preview__media_vimeo_video */   'title' => 1,
   /* video__preview__media_vimeo_video */   'byline' => 1,
   /* video__preview__media_vimeo_video */   'portrait' => 1,
   /* video__preview__media_vimeo_video */   'api' => 0,
   /* video__preview__media_vimeo_video */ );
  $export['video__preview__media_vimeo_video'] = $file_display;

   /* video__preview__media_youtube_video */ $file_display = new stdClass();
   /* video__preview__media_youtube_video */ $file_display->api_version = 1;
   /* video__preview__media_youtube_video */ $file_display->name = 'video__preview__media_youtube_video';
   /* video__preview__media_youtube_video */ $file_display->weight = 0;
   /* video__preview__media_youtube_video */ $file_display->status = FALSE;
   /* video__preview__media_youtube_video */ $file_display->settings = array(
   /* video__preview__media_youtube_video */   'width' => '640',
   /* video__preview__media_youtube_video */   'height' => '390',
   /* video__preview__media_youtube_video */   'theme' => 'dark',
   /* video__preview__media_youtube_video */   'color' => 'red',
   /* video__preview__media_youtube_video */   'autohide' => '2',
   /* video__preview__media_youtube_video */   'captions' => FALSE,
   /* video__preview__media_youtube_video */   'autoplay' => 0,
   /* video__preview__media_youtube_video */   'loop' => 0,
   /* video__preview__media_youtube_video */   'showinfo' => 1,
   /* video__preview__media_youtube_video */   'modestbranding' => 0,
   /* video__preview__media_youtube_video */   'rel' => 1,
   /* video__preview__media_youtube_video */   'nocookie' => 0,
   /* video__preview__media_youtube_video */   'protocol_specify' => 0,
   /* video__preview__media_youtube_video */   'protocol' => 'https:',
   /* video__preview__media_youtube_video */   'enablejsapi' => 0,
   /* video__preview__media_youtube_video */   'origin' => '',
   /* video__preview__media_youtube_video */ );
  $export['video__preview__media_youtube_video'] = $file_display;

   /* video__teaser__file_field_file_default */ $file_display = new stdClass();
   /* video__teaser__file_field_file_default */ $file_display->api_version = 1;
   /* video__teaser__file_field_file_default */ $file_display->name = 'video__teaser__file_field_file_default';
   /* video__teaser__file_field_file_default */ $file_display->weight = 0;
   /* video__teaser__file_field_file_default */ $file_display->status = FALSE;
   /* video__teaser__file_field_file_default */ $file_display->settings = '';
  $export['video__teaser__file_field_file_default'] = $file_display;

   /* video__teaser__file_field_file_download_link */ $file_display = new stdClass();
   /* video__teaser__file_field_file_download_link */ $file_display->api_version = 1;
   /* video__teaser__file_field_file_download_link */ $file_display->name = 'video__teaser__file_field_file_download_link';
   /* video__teaser__file_field_file_download_link */ $file_display->weight = 0;
   /* video__teaser__file_field_file_download_link */ $file_display->status = FALSE;
   /* video__teaser__file_field_file_download_link */ $file_display->settings = array(
   /* video__teaser__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* video__teaser__file_field_file_download_link */ );
  $export['video__teaser__file_field_file_download_link'] = $file_display;

   /* video__teaser__file_field_file_table */ $file_display = new stdClass();
   /* video__teaser__file_field_file_table */ $file_display->api_version = 1;
   /* video__teaser__file_field_file_table */ $file_display->name = 'video__teaser__file_field_file_table';
   /* video__teaser__file_field_file_table */ $file_display->weight = 0;
   /* video__teaser__file_field_file_table */ $file_display->status = FALSE;
   /* video__teaser__file_field_file_table */ $file_display->settings = '';
  $export['video__teaser__file_field_file_table'] = $file_display;

   /* video__teaser__file_field_file_token_link */ $file_display = new stdClass();
   /* video__teaser__file_field_file_token_link */ $file_display->api_version = 1;
   /* video__teaser__file_field_file_token_link */ $file_display->name = 'video__teaser__file_field_file_token_link';
   /* video__teaser__file_field_file_token_link */ $file_display->weight = 0;
   /* video__teaser__file_field_file_token_link */ $file_display->status = FALSE;
   /* video__teaser__file_field_file_token_link */ $file_display->settings = array(
   /* video__teaser__file_field_file_token_link */   'text' => '[file:name]',
   /* video__teaser__file_field_file_token_link */   'url' => '[file:download-url]',
   /* video__teaser__file_field_file_token_link */   'icon' => 0,
   /* video__teaser__file_field_file_token_link */   'size' => 0,
   /* video__teaser__file_field_file_token_link */ );
  $export['video__teaser__file_field_file_token_link'] = $file_display;

   /* video__teaser__file_field_file_url_plain */ $file_display = new stdClass();
   /* video__teaser__file_field_file_url_plain */ $file_display->api_version = 1;
   /* video__teaser__file_field_file_url_plain */ $file_display->name = 'video__teaser__file_field_file_url_plain';
   /* video__teaser__file_field_file_url_plain */ $file_display->weight = 0;
   /* video__teaser__file_field_file_url_plain */ $file_display->status = FALSE;
   /* video__teaser__file_field_file_url_plain */ $file_display->settings = '';
  $export['video__teaser__file_field_file_url_plain'] = $file_display;

   /* video__teaser__file_field_media_gallery */ $file_display = new stdClass();
   /* video__teaser__file_field_media_gallery */ $file_display->api_version = 1;
   /* video__teaser__file_field_media_gallery */ $file_display->name = 'video__teaser__file_field_media_gallery';
   /* video__teaser__file_field_media_gallery */ $file_display->weight = 0;
   /* video__teaser__file_field_media_gallery */ $file_display->status = FALSE;
   /* video__teaser__file_field_media_gallery */ $file_display->settings = array(
   /* video__teaser__file_field_media_gallery */   'file_view_mode' => 'media_gallery_thumbnail',
   /* video__teaser__file_field_media_gallery */ );
  $export['video__teaser__file_field_media_gallery'] = $file_display;

   /* video__teaser__file_field_media_large_icon */ $file_display = new stdClass();
   /* video__teaser__file_field_media_large_icon */ $file_display->api_version = 1;
   /* video__teaser__file_field_media_large_icon */ $file_display->name = 'video__teaser__file_field_media_large_icon';
   /* video__teaser__file_field_media_large_icon */ $file_display->weight = 0;
   /* video__teaser__file_field_media_large_icon */ $file_display->status = FALSE;
   /* video__teaser__file_field_media_large_icon */ $file_display->settings = '';
  $export['video__teaser__file_field_media_large_icon'] = $file_display;

   /* video__teaser__media_vimeo_image */ $file_display = new stdClass();
   /* video__teaser__media_vimeo_image */ $file_display->api_version = 1;
   /* video__teaser__media_vimeo_image */ $file_display->name = 'video__teaser__media_vimeo_image';
   /* video__teaser__media_vimeo_image */ $file_display->weight = 0;
   /* video__teaser__media_vimeo_image */ $file_display->status = FALSE;
   /* video__teaser__media_vimeo_image */ $file_display->settings = array(
   /* video__teaser__media_vimeo_image */   'image_style' => '',
   /* video__teaser__media_vimeo_image */ );
  $export['video__teaser__media_vimeo_image'] = $file_display;

   /* video__teaser__media_youtube_image */ $file_display = new stdClass();
   /* video__teaser__media_youtube_image */ $file_display->api_version = 1;
   /* video__teaser__media_youtube_image */ $file_display->name = 'video__teaser__media_youtube_image';
   /* video__teaser__media_youtube_image */ $file_display->weight = 0;
   /* video__teaser__media_youtube_image */ $file_display->status = FALSE;
   /* video__teaser__media_youtube_image */ $file_display->settings = array(
   /* video__teaser__media_youtube_image */   'image_style' => '',
   /* video__teaser__media_youtube_image */ );
  $export['video__teaser__media_youtube_image'] = $file_display;

   /* video__wysiwyg__file_field_file_default */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_file_default */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_file_default */ $file_display->name = 'video__wysiwyg__file_field_file_default';
   /* video__wysiwyg__file_field_file_default */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_file_default */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_file_default */ $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_default'] = $file_display;

   /* video__wysiwyg__file_field_file_download_link */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_file_download_link */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_file_download_link */ $file_display->name = 'video__wysiwyg__file_field_file_download_link';
   /* video__wysiwyg__file_field_file_download_link */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_file_download_link */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_file_download_link */ $file_display->settings = array(
   /* video__wysiwyg__file_field_file_download_link */   'text' => 'Download [file:name]',
   /* video__wysiwyg__file_field_file_download_link */ );
  $export['video__wysiwyg__file_field_file_download_link'] = $file_display;

   /* video__wysiwyg__file_field_file_table */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_file_table */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_file_table */ $file_display->name = 'video__wysiwyg__file_field_file_table';
   /* video__wysiwyg__file_field_file_table */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_file_table */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_file_table */ $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_table'] = $file_display;

   /* video__wysiwyg__file_field_file_token_link */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_file_token_link */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_file_token_link */ $file_display->name = 'video__wysiwyg__file_field_file_token_link';
   /* video__wysiwyg__file_field_file_token_link */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_file_token_link */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_file_token_link */ $file_display->settings = array(
   /* video__wysiwyg__file_field_file_token_link */   'text' => '[file:name]',
   /* video__wysiwyg__file_field_file_token_link */   'url' => '[file:download-url]',
   /* video__wysiwyg__file_field_file_token_link */   'icon' => 0,
   /* video__wysiwyg__file_field_file_token_link */   'size' => 0,
   /* video__wysiwyg__file_field_file_token_link */ );
  $export['video__wysiwyg__file_field_file_token_link'] = $file_display;

   /* video__wysiwyg__file_field_file_url_plain */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_file_url_plain */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_file_url_plain */ $file_display->name = 'video__wysiwyg__file_field_file_url_plain';
   /* video__wysiwyg__file_field_file_url_plain */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_file_url_plain */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_file_url_plain */ $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_url_plain'] = $file_display;

   /* video__wysiwyg__file_field_file_video */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_file_video */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_file_video */ $file_display->name = 'video__wysiwyg__file_field_file_video';
   /* video__wysiwyg__file_field_file_video */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_file_video */ $file_display->status = TRUE;
   /* video__wysiwyg__file_field_file_video */ $file_display->settings = array(
   /* video__wysiwyg__file_field_file_video */   'controls' => 1,
   /* video__wysiwyg__file_field_file_video */   'autoplay' => 0,
   /* video__wysiwyg__file_field_file_video */   'loop' => 0,
   /* video__wysiwyg__file_field_file_video */   'muted' => 0,
   /* video__wysiwyg__file_field_file_video */   'width' => '640',
   /* video__wysiwyg__file_field_file_video */   'height' => '390',
   /* video__wysiwyg__file_field_file_video */   'preload' => '',
   /* video__wysiwyg__file_field_file_video */   'multiple_file_behavior' => 'tags',
   /* video__wysiwyg__file_field_file_video */ );
  $export['video__wysiwyg__file_field_file_video'] = $file_display;

   /* video__wysiwyg__file_field_media_gallery */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_media_gallery */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_media_gallery */ $file_display->name = 'video__wysiwyg__file_field_media_gallery';
   /* video__wysiwyg__file_field_media_gallery */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_media_gallery */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_media_gallery */ $file_display->settings = array(
   /* video__wysiwyg__file_field_media_gallery */   'file_view_mode' => 'media_gallery_thumbnail',
   /* video__wysiwyg__file_field_media_gallery */ );
  $export['video__wysiwyg__file_field_media_gallery'] = $file_display;

   /* video__wysiwyg__file_field_media_large_icon */ $file_display = new stdClass();
   /* video__wysiwyg__file_field_media_large_icon */ $file_display->api_version = 1;
   /* video__wysiwyg__file_field_media_large_icon */ $file_display->name = 'video__wysiwyg__file_field_media_large_icon';
   /* video__wysiwyg__file_field_media_large_icon */ $file_display->weight = 0;
   /* video__wysiwyg__file_field_media_large_icon */ $file_display->status = FALSE;
   /* video__wysiwyg__file_field_media_large_icon */ $file_display->settings = '';
  $export['video__wysiwyg__file_field_media_large_icon'] = $file_display;

   /* video__wysiwyg__media_vimeo_image */ $file_display = new stdClass();
   /* video__wysiwyg__media_vimeo_image */ $file_display->api_version = 1;
   /* video__wysiwyg__media_vimeo_image */ $file_display->name = 'video__wysiwyg__media_vimeo_image';
   /* video__wysiwyg__media_vimeo_image */ $file_display->weight = 0;
   /* video__wysiwyg__media_vimeo_image */ $file_display->status = FALSE;
   /* video__wysiwyg__media_vimeo_image */ $file_display->settings = array(
   /* video__wysiwyg__media_vimeo_image */   'image_style' => '',
   /* video__wysiwyg__media_vimeo_image */ );
  $export['video__wysiwyg__media_vimeo_image'] = $file_display;

   /* video__wysiwyg__media_vimeo_video */ $file_display = new stdClass();
   /* video__wysiwyg__media_vimeo_video */ $file_display->api_version = 1;
   /* video__wysiwyg__media_vimeo_video */ $file_display->name = 'video__wysiwyg__media_vimeo_video';
   /* video__wysiwyg__media_vimeo_video */ $file_display->weight = 0;
   /* video__wysiwyg__media_vimeo_video */ $file_display->status = FALSE;
   /* video__wysiwyg__media_vimeo_video */ $file_display->settings = array(
   /* video__wysiwyg__media_vimeo_video */   'width' => '640',
   /* video__wysiwyg__media_vimeo_video */   'height' => '360',
   /* video__wysiwyg__media_vimeo_video */   'color' => '',
   /* video__wysiwyg__media_vimeo_video */   'protocol_specify' => 0,
   /* video__wysiwyg__media_vimeo_video */   'protocol' => 'https://',
   /* video__wysiwyg__media_vimeo_video */   'autoplay' => 0,
   /* video__wysiwyg__media_vimeo_video */   'loop' => 0,
   /* video__wysiwyg__media_vimeo_video */   'title' => 1,
   /* video__wysiwyg__media_vimeo_video */   'byline' => 1,
   /* video__wysiwyg__media_vimeo_video */   'portrait' => 1,
   /* video__wysiwyg__media_vimeo_video */   'api' => 0,
   /* video__wysiwyg__media_vimeo_video */ );
  $export['video__wysiwyg__media_vimeo_video'] = $file_display;

   /* video__wysiwyg__media_youtube_image */ $file_display = new stdClass();
   /* video__wysiwyg__media_youtube_image */ $file_display->api_version = 1;
   /* video__wysiwyg__media_youtube_image */ $file_display->name = 'video__wysiwyg__media_youtube_image';
   /* video__wysiwyg__media_youtube_image */ $file_display->weight = 0;
   /* video__wysiwyg__media_youtube_image */ $file_display->status = FALSE;
   /* video__wysiwyg__media_youtube_image */ $file_display->settings = array(
   /* video__wysiwyg__media_youtube_image */   'image_style' => '',
   /* video__wysiwyg__media_youtube_image */ );
  $export['video__wysiwyg__media_youtube_image'] = $file_display;

   /* video__wysiwyg__media_youtube_video */ $file_display = new stdClass();
   /* video__wysiwyg__media_youtube_video */ $file_display->api_version = 1;
   /* video__wysiwyg__media_youtube_video */ $file_display->name = 'video__wysiwyg__media_youtube_video';
   /* video__wysiwyg__media_youtube_video */ $file_display->weight = 0;
   /* video__wysiwyg__media_youtube_video */ $file_display->status = FALSE;
   /* video__wysiwyg__media_youtube_video */ $file_display->settings = array(
   /* video__wysiwyg__media_youtube_video */   'width' => '640',
   /* video__wysiwyg__media_youtube_video */   'height' => '390',
   /* video__wysiwyg__media_youtube_video */   'theme' => 'dark',
   /* video__wysiwyg__media_youtube_video */   'color' => 'red',
   /* video__wysiwyg__media_youtube_video */   'autohide' => '2',
   /* video__wysiwyg__media_youtube_video */   'captions' => FALSE,
   /* video__wysiwyg__media_youtube_video */   'autoplay' => 0,
   /* video__wysiwyg__media_youtube_video */   'loop' => 0,
   /* video__wysiwyg__media_youtube_video */   'showinfo' => 1,
   /* video__wysiwyg__media_youtube_video */   'modestbranding' => 0,
   /* video__wysiwyg__media_youtube_video */   'rel' => 1,
   /* video__wysiwyg__media_youtube_video */   'nocookie' => 0,
   /* video__wysiwyg__media_youtube_video */   'protocol_specify' => 0,
   /* video__wysiwyg__media_youtube_video */   'protocol' => 'https:',
   /* video__wysiwyg__media_youtube_video */   'enablejsapi' => 0,
   /* video__wysiwyg__media_youtube_video */   'origin' => '',
   /* video__wysiwyg__media_youtube_video */ );
  $export['video__wysiwyg__media_youtube_video'] = $file_display;

  return $export;
}
