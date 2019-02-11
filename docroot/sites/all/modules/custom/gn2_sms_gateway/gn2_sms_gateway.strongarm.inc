<?php
/**
 * @file
 * gn2_sms_gateway.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_sms_gateway_strongarm() {
  $export = array();

  /* sms_clickatell_session_id */  /* sms_clickatell_session_id */ $strongarm = new stdClass();
  /* sms_clickatell_session_id */  /* sms_clickatell_session_id */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* sms_clickatell_session_id */  /* sms_clickatell_session_id */ $strongarm->api_version = 1;
  /* sms_clickatell_session_id */  /* sms_clickatell_session_id */ $strongarm->name = 'sms_clickatell_session_id';
  /* sms_clickatell_session_id */  /* sms_clickatell_session_id */ $strongarm->value = '6528311bb96048d694492196f4978827';
  $export['sms_clickatell_session_id'] = $strongarm;

  /* sms_clickatell_session_id_timestamp */  /* sms_clickatell_session_id_timestamp */ $strongarm = new stdClass();
  /* sms_clickatell_session_id_timestamp */  /* sms_clickatell_session_id_timestamp */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* sms_clickatell_session_id_timestamp */  /* sms_clickatell_session_id_timestamp */ $strongarm->api_version = 1;
  /* sms_clickatell_session_id_timestamp */  /* sms_clickatell_session_id_timestamp */ $strongarm->name = 'sms_clickatell_session_id_timestamp';
  /* sms_clickatell_session_id_timestamp */  /* sms_clickatell_session_id_timestamp */ $strongarm->value = 1441323288;
  $export['sms_clickatell_session_id_timestamp'] = $strongarm;

  /* sms_clickatell_settings */  /* sms_clickatell_settings */ $strongarm = new stdClass();
  /* sms_clickatell_settings */  /* sms_clickatell_settings */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* sms_clickatell_settings */  /* sms_clickatell_settings */ $strongarm->api_version = 1;
  /* sms_clickatell_settings */  /* sms_clickatell_settings */ $strongarm->name = 'sms_clickatell_settings';
  /* sms_clickatell_settings */  /* sms_clickatell_settings */ $strongarm->value = array(
  /* sms_clickatell_settings */  /* sms_clickatell_settings */   'sms_clickatell_ssl' => 0,
  /* sms_clickatell_settings */  /* sms_clickatell_settings */   'sms_clickatell_api_id' => '',
  /* sms_clickatell_settings */  /* sms_clickatell_settings */   'sms_clickatell_user' => '',
  /* sms_clickatell_settings */  /* sms_clickatell_settings */   variable_get('sms_clickatell_password', NULL),
  /* sms_clickatell_settings */  /* sms_clickatell_settings */   'sms_clickatell_from' => '',
  /* sms_clickatell_settings */  /* sms_clickatell_settings */   'sms_clickatell_callback' => '0',
  /* sms_clickatell_settings */  /* sms_clickatell_settings */ );
  $export['sms_clickatell_settings'] = $strongarm;

  /* sms_default_gateway */  /* sms_default_gateway */ $strongarm = new stdClass();
  /* sms_default_gateway */  /* sms_default_gateway */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* sms_default_gateway */  /* sms_default_gateway */ $strongarm->api_version = 1;
  /* sms_default_gateway */  /* sms_default_gateway */ $strongarm->name = 'sms_default_gateway';
  /* sms_default_gateway */  /* sms_default_gateway */ $strongarm->value = 'clickatell';
  $export['sms_default_gateway'] = $strongarm;

  /* sms_enabled_carriers */  /* sms_enabled_carriers */ $strongarm = new stdClass();
  /* sms_enabled_carriers */  /* sms_enabled_carriers */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* sms_enabled_carriers */  /* sms_enabled_carriers */ $strongarm->api_version = 1;
  /* sms_enabled_carriers */  /* sms_enabled_carriers */ $strongarm->name = 'sms_enabled_carriers';
  /* sms_enabled_carriers */  /* sms_enabled_carriers */ $strongarm->value = array(
  /* sms_enabled_carriers */  /* sms_enabled_carriers */   0 => '',
  /* sms_enabled_carriers */  /* sms_enabled_carriers */ );
  $export['sms_enabled_carriers'] = $strongarm;

  return $export;
}
