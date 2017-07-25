<?php
/**
 * @file
 * gn2_feedback.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_feedback_strongarm() {
  $export = array();

  /* feedback_simple */  /* feedback_simple */ $strongarm = new stdClass();
  /* feedback_simple */  /* feedback_simple */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* feedback_simple */  /* feedback_simple */ $strongarm->api_version = 1;
  /* feedback_simple */  /* feedback_simple */ $strongarm->name = 'feedback_simple';
  /* feedback_simple */  /* feedback_simple */ $strongarm->value = array(
  /* feedback_simple */  /* feedback_simple */   'enabled' => 0,
  /* feedback_simple */  /* feedback_simple */   'link' => 'feedback',
  /* feedback_simple */  /* feedback_simple */   'target' => '_self',
  /* feedback_simple */  /* feedback_simple */   'class' => array(
  /* feedback_simple */  /* feedback_simple */     0 => 'feedback_simple',
  /* feedback_simple */  /* feedback_simple */   ),
  /* feedback_simple */  /* feedback_simple */   'align' => 'right',
  /* feedback_simple */  /* feedback_simple */   'top' => '75%',
  /* feedback_simple */  /* feedback_simple */   'image' => 'sites/all/modules/contrib/feedback_simple/feedback_simple.gif',
  /* feedback_simple */  /* feedback_simple */   'alt' => 'Feedback',
  /* feedback_simple */  /* feedback_simple */   'deny' => 'admin*',
  /* feedback_simple */  /* feedback_simple */   'allow' => 'admin/appearance/feedback-simple',
  /* feedback_simple */  /* feedback_simple */ );
  $export['feedback_simple'] = $strongarm;

  return $export;
}
