<?php
/**
 * @file
 * gn2_captcha.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_captcha_strongarm() {
  $export = array();

  /* captcha_add_captcha_description */  /* captcha_add_captcha_description */ $strongarm = new stdClass();
  /* captcha_add_captcha_description */  /* captcha_add_captcha_description */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_add_captcha_description */  /* captcha_add_captcha_description */ $strongarm->api_version = 1;
  /* captcha_add_captcha_description */  /* captcha_add_captcha_description */ $strongarm->name = 'captcha_add_captcha_description';
  /* captcha_add_captcha_description */  /* captcha_add_captcha_description */ $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  /* captcha_administration_mode */  /* captcha_administration_mode */ $strongarm = new stdClass();
  /* captcha_administration_mode */  /* captcha_administration_mode */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_administration_mode */  /* captcha_administration_mode */ $strongarm->api_version = 1;
  /* captcha_administration_mode */  /* captcha_administration_mode */ $strongarm->name = 'captcha_administration_mode';
  /* captcha_administration_mode */  /* captcha_administration_mode */ $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  /* captcha_allow_on_admin_pages */  /* captcha_allow_on_admin_pages */ $strongarm = new stdClass();
  /* captcha_allow_on_admin_pages */  /* captcha_allow_on_admin_pages */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_allow_on_admin_pages */  /* captcha_allow_on_admin_pages */ $strongarm->api_version = 1;
  /* captcha_allow_on_admin_pages */  /* captcha_allow_on_admin_pages */ $strongarm->name = 'captcha_allow_on_admin_pages';
  /* captcha_allow_on_admin_pages */  /* captcha_allow_on_admin_pages */ $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  /* captcha_default_challenge */  /* captcha_default_challenge */ $strongarm = new stdClass();
  /* captcha_default_challenge */  /* captcha_default_challenge */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_default_challenge */  /* captcha_default_challenge */ $strongarm->api_version = 1;
  /* captcha_default_challenge */  /* captcha_default_challenge */ $strongarm->name = 'captcha_default_challenge';
  /* captcha_default_challenge */  /* captcha_default_challenge */ $strongarm->value = 'image_captcha/Image';
  $export['captcha_default_challenge'] = $strongarm;

  /* captcha_default_challenge_on_nonlisted_forms */  /* captcha_default_challenge_on_nonlisted_forms */ $strongarm = new stdClass();
  /* captcha_default_challenge_on_nonlisted_forms */  /* captcha_default_challenge_on_nonlisted_forms */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_default_challenge_on_nonlisted_forms */  /* captcha_default_challenge_on_nonlisted_forms */ $strongarm->api_version = 1;
  /* captcha_default_challenge_on_nonlisted_forms */  /* captcha_default_challenge_on_nonlisted_forms */ $strongarm->name = 'captcha_default_challenge_on_nonlisted_forms';
  /* captcha_default_challenge_on_nonlisted_forms */  /* captcha_default_challenge_on_nonlisted_forms */ $strongarm->value = 0;
  $export['captcha_default_challenge_on_nonlisted_forms'] = $strongarm;

  /* captcha_default_validation */  /* captcha_default_validation */ $strongarm = new stdClass();
  /* captcha_default_validation */  /* captcha_default_validation */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_default_validation */  /* captcha_default_validation */ $strongarm->api_version = 1;
  /* captcha_default_validation */  /* captcha_default_validation */ $strongarm->name = 'captcha_default_validation';
  /* captcha_default_validation */  /* captcha_default_validation */ $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  /* captcha_description_de */  /* captcha_description_de */ $strongarm = new stdClass();
  /* captcha_description_de */  /* captcha_description_de */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_description_de */  /* captcha_description_de */ $strongarm->api_version = 1;
  /* captcha_description_de */  /* captcha_description_de */ $strongarm->name = 'captcha_description_de';
  /* captcha_description_de */  /* captcha_description_de */ $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_de'] = $strongarm;

  /* captcha_description_en */  /* captcha_description_en */ $strongarm = new stdClass();
  /* captcha_description_en */  /* captcha_description_en */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_description_en */  /* captcha_description_en */ $strongarm->api_version = 1;
  /* captcha_description_en */  /* captcha_description_en */ $strongarm->name = 'captcha_description_en';
  /* captcha_description_en */  /* captcha_description_en */ $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_en'] = $strongarm;

  /* captcha_description_es */  /* captcha_description_es */ $strongarm = new stdClass();
  /* captcha_description_es */  /* captcha_description_es */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_description_es */  /* captcha_description_es */ $strongarm->api_version = 1;
  /* captcha_description_es */  /* captcha_description_es */ $strongarm->name = 'captcha_description_es';
  /* captcha_description_es */  /* captcha_description_es */ $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_es'] = $strongarm;

  /* captcha_description_fr */  /* captcha_description_fr */ $strongarm = new stdClass();
  /* captcha_description_fr */  /* captcha_description_fr */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_description_fr */  /* captcha_description_fr */ $strongarm->api_version = 1;
  /* captcha_description_fr */  /* captcha_description_fr */ $strongarm->name = 'captcha_description_fr';
  /* captcha_description_fr */  /* captcha_description_fr */ $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_fr'] = $strongarm;

  /* captcha_description_pt-br */  /* captcha_description_pt-br */ $strongarm = new stdClass();
  /* captcha_description_pt-br */  /* captcha_description_pt-br */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_description_pt-br */  /* captcha_description_pt-br */ $strongarm->api_version = 1;
  /* captcha_description_pt-br */  /* captcha_description_pt-br */ $strongarm->name = 'captcha_description_pt-br';
  /* captcha_description_pt-br */  /* captcha_description_pt-br */ $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_pt-br'] = $strongarm;

  /* captcha_description_ru */  /* captcha_description_ru */ $strongarm = new stdClass();
  /* captcha_description_ru */  /* captcha_description_ru */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_description_ru */  /* captcha_description_ru */ $strongarm->api_version = 1;
  /* captcha_description_ru */  /* captcha_description_ru */ $strongarm->name = 'captcha_description_ru';
  /* captcha_description_ru */  /* captcha_description_ru */ $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_ru'] = $strongarm;

  /* captcha_enable_stats */  /* captcha_enable_stats */ $strongarm = new stdClass();
  /* captcha_enable_stats */  /* captcha_enable_stats */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_enable_stats */  /* captcha_enable_stats */ $strongarm->api_version = 1;
  /* captcha_enable_stats */  /* captcha_enable_stats */ $strongarm->name = 'captcha_enable_stats';
  /* captcha_enable_stats */  /* captcha_enable_stats */ $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  /* captcha_log_wrong_responses */  /* captcha_log_wrong_responses */ $strongarm = new stdClass();
  /* captcha_log_wrong_responses */  /* captcha_log_wrong_responses */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_log_wrong_responses */  /* captcha_log_wrong_responses */ $strongarm->api_version = 1;
  /* captcha_log_wrong_responses */  /* captcha_log_wrong_responses */ $strongarm->name = 'captcha_log_wrong_responses';
  /* captcha_log_wrong_responses */  /* captcha_log_wrong_responses */ $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  /* captcha_persistence */  /* captcha_persistence */ $strongarm = new stdClass();
  /* captcha_persistence */  /* captcha_persistence */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_persistence */  /* captcha_persistence */ $strongarm->api_version = 1;
  /* captcha_persistence */  /* captcha_persistence */ $strongarm->name = 'captcha_persistence';
  /* captcha_persistence */  /* captcha_persistence */ $strongarm->value = '1';
  $export['captcha_persistence'] = $strongarm;

  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */ $strongarm = new stdClass();
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */ $strongarm->api_version = 1;
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */ $strongarm->name = 'captcha_placement_map_cache';
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */ $strongarm->value = array(
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */   'user_login_block' => array(
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'path' => array(),
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'key' => 'actions',
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'weight' => 99,
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */   ),
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */   'userreg_entityform_edit_form' => array(
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'path' => array(
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */       0 => 'og_entityform_group_ref',
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */       1 => 'und',
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     ),
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'key' => 'add_more',
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'weight' => NULL,
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */   ),
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */   'user_pass' => array(
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'path' => array(),
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'key' => 'actions',
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */     'weight' => 99,
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */   ),
  /* captcha_placement_map_cache */  /* captcha_placement_map_cache */ );
  $export['captcha_placement_map_cache'] = $strongarm;

  /* captcha_response */  /* captcha_response */ $strongarm = new stdClass();
  /* captcha_response */  /* captcha_response */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_response */  /* captcha_response */ $strongarm->api_version = 1;
  /* captcha_response */  /* captcha_response */ $strongarm->name = 'captcha_response';
  /* captcha_response */  /* captcha_response */ $strongarm->value = 'hmArF';
  $export['captcha_response'] = $strongarm;

  /* captcha_sid */  /* captcha_sid */ $strongarm = new stdClass();
  /* captcha_sid */  /* captcha_sid */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_sid */  /* captcha_sid */ $strongarm->api_version = 1;
  /* captcha_sid */  /* captcha_sid */ $strongarm->name = 'captcha_sid';
  /* captcha_sid */  /* captcha_sid */ $strongarm->value = 4;
  $export['captcha_sid'] = $strongarm;

  /* captcha_token */  /* captcha_token */ $strongarm = new stdClass();
  /* captcha_token */  /* captcha_token */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* captcha_token */  /* captcha_token */ $strongarm->api_version = 1;
  /* captcha_token */  /* captcha_token */ $strongarm->name = 'captcha_token';
  /* captcha_token */  /* captcha_token */ $strongarm->value = '';
  $export['captcha_token'] = $strongarm;

  /* image_captcha_background_color */  /* image_captcha_background_color */ $strongarm = new stdClass();
  /* image_captcha_background_color */  /* image_captcha_background_color */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_background_color */  /* image_captcha_background_color */ $strongarm->api_version = 1;
  /* image_captcha_background_color */  /* image_captcha_background_color */ $strongarm->name = 'image_captcha_background_color';
  /* image_captcha_background_color */  /* image_captcha_background_color */ $strongarm->value = '#ffffff';
  $export['image_captcha_background_color'] = $strongarm;

  /* image_captcha_bilinear_interpolation */  /* image_captcha_bilinear_interpolation */ $strongarm = new stdClass();
  /* image_captcha_bilinear_interpolation */  /* image_captcha_bilinear_interpolation */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_bilinear_interpolation */  /* image_captcha_bilinear_interpolation */ $strongarm->api_version = 1;
  /* image_captcha_bilinear_interpolation */  /* image_captcha_bilinear_interpolation */ $strongarm->name = 'image_captcha_bilinear_interpolation';
  /* image_captcha_bilinear_interpolation */  /* image_captcha_bilinear_interpolation */ $strongarm->value = 0;
  $export['image_captcha_bilinear_interpolation'] = $strongarm;

  /* image_captcha_character_spacing */  /* image_captcha_character_spacing */ $strongarm = new stdClass();
  /* image_captcha_character_spacing */  /* image_captcha_character_spacing */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_character_spacing */  /* image_captcha_character_spacing */ $strongarm->api_version = 1;
  /* image_captcha_character_spacing */  /* image_captcha_character_spacing */ $strongarm->name = 'image_captcha_character_spacing';
  /* image_captcha_character_spacing */  /* image_captcha_character_spacing */ $strongarm->value = '1.2';
  $export['image_captcha_character_spacing'] = $strongarm;

  /* image_captcha_code_length */  /* image_captcha_code_length */ $strongarm = new stdClass();
  /* image_captcha_code_length */  /* image_captcha_code_length */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_code_length */  /* image_captcha_code_length */ $strongarm->api_version = 1;
  /* image_captcha_code_length */  /* image_captcha_code_length */ $strongarm->name = 'image_captcha_code_length';
  /* image_captcha_code_length */  /* image_captcha_code_length */ $strongarm->value = '5';
  $export['image_captcha_code_length'] = $strongarm;

  /* image_captcha_distortion_amplitude */  /* image_captcha_distortion_amplitude */ $strongarm = new stdClass();
  /* image_captcha_distortion_amplitude */  /* image_captcha_distortion_amplitude */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_distortion_amplitude */  /* image_captcha_distortion_amplitude */ $strongarm->api_version = 1;
  /* image_captcha_distortion_amplitude */  /* image_captcha_distortion_amplitude */ $strongarm->name = 'image_captcha_distortion_amplitude';
  /* image_captcha_distortion_amplitude */  /* image_captcha_distortion_amplitude */ $strongarm->value = '0';
  $export['image_captcha_distortion_amplitude'] = $strongarm;

  /* image_captcha_dot_noise */  /* image_captcha_dot_noise */ $strongarm = new stdClass();
  /* image_captcha_dot_noise */  /* image_captcha_dot_noise */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_dot_noise */  /* image_captcha_dot_noise */ $strongarm->api_version = 1;
  /* image_captcha_dot_noise */  /* image_captcha_dot_noise */ $strongarm->name = 'image_captcha_dot_noise';
  /* image_captcha_dot_noise */  /* image_captcha_dot_noise */ $strongarm->value = 0;
  $export['image_captcha_dot_noise'] = $strongarm;

  /* image_captcha_file_format */  /* image_captcha_file_format */ $strongarm = new stdClass();
  /* image_captcha_file_format */  /* image_captcha_file_format */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_file_format */  /* image_captcha_file_format */ $strongarm->api_version = 1;
  /* image_captcha_file_format */  /* image_captcha_file_format */ $strongarm->name = 'image_captcha_file_format';
  /* image_captcha_file_format */  /* image_captcha_file_format */ $strongarm->value = '1';
  $export['image_captcha_file_format'] = $strongarm;

  /* image_captcha_fonts */  /* image_captcha_fonts */ $strongarm = new stdClass();
  /* image_captcha_fonts */  /* image_captcha_fonts */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_fonts */  /* image_captcha_fonts */ $strongarm->api_version = 1;
  /* image_captcha_fonts */  /* image_captcha_fonts */ $strongarm->name = 'image_captcha_fonts';
  /* image_captcha_fonts */  /* image_captcha_fonts */ $strongarm->value = array(
  /* image_captcha_fonts */  /* image_captcha_fonts */   'sites/all/modules/contrib/captcha/image_captcha/fonts/Tesox/tesox.ttf' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tesox/tesox.ttf',
  /* image_captcha_fonts */  /* image_captcha_fonts */   'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf',
  /* image_captcha_fonts */  /* image_captcha_fonts */ );
  $export['image_captcha_fonts'] = $strongarm;

  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */ $strongarm = new stdClass();
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */ $strongarm->api_version = 1;
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */ $strongarm->name = 'image_captcha_fonts_preview_map_cache';
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */ $strongarm->value = array(
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */   'f36285dfa81137d37fe06003d5568523' => (object) array(
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'uri' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tesox/tesox.ttf',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'filename' => 'tesox.ttf',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'name' => 'tesox',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */   ),
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */   '2b55c667e0cf90112fd3ad79bf7a634e' => (object) array(
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'uri' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy_Bold.ttf',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'filename' => 'Tuffy_Bold.ttf',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'name' => 'Tuffy_Bold',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */   ),
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */   'a60fb7b7785018bc608512ddf0ef9669' => (object) array(
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'uri' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'filename' => 'Tuffy.ttf',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */     'name' => 'Tuffy',
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */   ),
  /* image_captcha_fonts_preview_map_cache */  /* image_captcha_fonts_preview_map_cache */ );
  $export['image_captcha_fonts_preview_map_cache'] = $strongarm;

  /* image_captcha_font_size */  /* image_captcha_font_size */ $strongarm = new stdClass();
  /* image_captcha_font_size */  /* image_captcha_font_size */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_font_size */  /* image_captcha_font_size */ $strongarm->api_version = 1;
  /* image_captcha_font_size */  /* image_captcha_font_size */ $strongarm->name = 'image_captcha_font_size';
  /* image_captcha_font_size */  /* image_captcha_font_size */ $strongarm->value = '30';
  $export['image_captcha_font_size'] = $strongarm;

  /* image_captcha_foreground_color */  /* image_captcha_foreground_color */ $strongarm = new stdClass();
  /* image_captcha_foreground_color */  /* image_captcha_foreground_color */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_foreground_color */  /* image_captcha_foreground_color */ $strongarm->api_version = 1;
  /* image_captcha_foreground_color */  /* image_captcha_foreground_color */ $strongarm->name = 'image_captcha_foreground_color';
  /* image_captcha_foreground_color */  /* image_captcha_foreground_color */ $strongarm->value = '#000000';
  $export['image_captcha_foreground_color'] = $strongarm;

  /* image_captcha_foreground_color_randomness */  /* image_captcha_foreground_color_randomness */ $strongarm = new stdClass();
  /* image_captcha_foreground_color_randomness */  /* image_captcha_foreground_color_randomness */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_foreground_color_randomness */  /* image_captcha_foreground_color_randomness */ $strongarm->api_version = 1;
  /* image_captcha_foreground_color_randomness */  /* image_captcha_foreground_color_randomness */ $strongarm->name = 'image_captcha_foreground_color_randomness';
  /* image_captcha_foreground_color_randomness */  /* image_captcha_foreground_color_randomness */ $strongarm->value = '100';
  $export['image_captcha_foreground_color_randomness'] = $strongarm;

  /* image_captcha_image_allowed_chars */  /* image_captcha_image_allowed_chars */ $strongarm = new stdClass();
  /* image_captcha_image_allowed_chars */  /* image_captcha_image_allowed_chars */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_image_allowed_chars */  /* image_captcha_image_allowed_chars */ $strongarm->api_version = 1;
  /* image_captcha_image_allowed_chars */  /* image_captcha_image_allowed_chars */ $strongarm->name = 'image_captcha_image_allowed_chars';
  /* image_captcha_image_allowed_chars */  /* image_captcha_image_allowed_chars */ $strongarm->value = 'aAbBCdEeFfGHhijKLMmNPQRrSTtWXYZ23456789';
  $export['image_captcha_image_allowed_chars'] = $strongarm;

  /* image_captcha_line_noise */  /* image_captcha_line_noise */ $strongarm = new stdClass();
  /* image_captcha_line_noise */  /* image_captcha_line_noise */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_line_noise */  /* image_captcha_line_noise */ $strongarm->api_version = 1;
  /* image_captcha_line_noise */  /* image_captcha_line_noise */ $strongarm->name = 'image_captcha_line_noise';
  /* image_captcha_line_noise */  /* image_captcha_line_noise */ $strongarm->value = 0;
  $export['image_captcha_line_noise'] = $strongarm;

  /* image_captcha_noise_level */  /* image_captcha_noise_level */ $strongarm = new stdClass();
  /* image_captcha_noise_level */  /* image_captcha_noise_level */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* image_captcha_noise_level */  /* image_captcha_noise_level */ $strongarm->api_version = 1;
  /* image_captcha_noise_level */  /* image_captcha_noise_level */ $strongarm->name = 'image_captcha_noise_level';
  /* image_captcha_noise_level */  /* image_captcha_noise_level */ $strongarm->value = '3';
  $export['image_captcha_noise_level'] = $strongarm;

  return $export;
}
