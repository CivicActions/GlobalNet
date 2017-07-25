<?php
/**
 * @file
 * gn2_base_config.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function gn2_base_config_flexslider_default_presets() {
  $export = array();

   /* gn_flexslider */ $preset = new stdClass();
   /* gn_flexslider */ $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
   /* gn_flexslider */ $preset->api_version = 1;
   /* gn_flexslider */ $preset->name = 'gn_flexslider';
   /* gn_flexslider */ $preset->title = 'GN-Flexslider';
   /* gn_flexslider */ $preset->theme = 'classic';
   /* gn_flexslider */ $preset->imagestyle_normal = 'flexslider_full';
   /* gn_flexslider */ $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
   /* gn_flexslider */ $preset->options = array(
   /* gn_flexslider */   'namespace' => 'flex-',
   /* gn_flexslider */   'selector' => '.slides > li',
   /* gn_flexslider */   'easing' => 'swing',
   /* gn_flexslider */   'direction' => 'horizontal',
   /* gn_flexslider */   'reverse' => 0,
   /* gn_flexslider */   'smoothHeight' => 0,
   /* gn_flexslider */   'startAt' => '0',
   /* gn_flexslider */   'animationSpeed' => '600',
   /* gn_flexslider */   'initDelay' => '0',
   /* gn_flexslider */   'useCSS' => 1,
   /* gn_flexslider */   'touch' => 1,
   /* gn_flexslider */   'video' => 0,
   /* gn_flexslider */   'keyboard' => 1,
   /* gn_flexslider */   'multipleKeyboard' => 0,
   /* gn_flexslider */   'mousewheel' => 0,
   /* gn_flexslider */   'controlsContainer' => '.flex-control-nav-container',
   /* gn_flexslider */   'sync' => '',
   /* gn_flexslider */   'asNavFor' => '',
   /* gn_flexslider */   'itemWidth' => '0',
   /* gn_flexslider */   'itemMargin' => '0',
   /* gn_flexslider */   'minItems' => '',
   /* gn_flexslider */   'maxItems' => '',
   /* gn_flexslider */   'move' => '0',
   /* gn_flexslider */   'animation' => 'slide',
   /* gn_flexslider */   'slideshow' => 1,
   /* gn_flexslider */   'slideshowSpeed' => '8000',
   /* gn_flexslider */   'directionNav' => 1,
   /* gn_flexslider */   'controlNav' => '1',
   /* gn_flexslider */   'prevText' => 'Previous',
   /* gn_flexslider */   'nextText' => 'Next',
   /* gn_flexslider */   'pausePlay' => 0,
   /* gn_flexslider */   'pauseText' => 'Pause',
   /* gn_flexslider */   'playText' => 'Play',
   /* gn_flexslider */   'randomize' => 0,
   /* gn_flexslider */   'thumbCaptions' => 0,
   /* gn_flexslider */   'thumbCaptionsBoth' => 0,
   /* gn_flexslider */   'animationLoop' => 1,
   /* gn_flexslider */   'pauseOnAction' => 1,
   /* gn_flexslider */   'pauseOnHover' => 1,
   /* gn_flexslider */   'manualControls' => '',
   /* gn_flexslider */ );
  $export['gn_flexslider'] = $preset;

  return $export;
}
