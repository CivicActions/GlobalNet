<?php
/**
 * @file
 * gn2_base_config.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function gn2_base_config_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
  /* en */   'language' => 'en',
  /* en */   'name' => 'English',
  /* en */   'native' => 'English',
  /* en */   'direction' => 0,
  /* en */   'enabled' => 1,
  /* en */   'plurals' => 0,
  /* en */   'formula' => '',
  /* en */   'domain' => '',
  /* en */   'prefix' => '',
  /* en */   'weight' => 0,
  /* en */ );
  return $languages;
}
