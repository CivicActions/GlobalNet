<?php

/**
 * @file
 * Token callbacks for the og_subscriptions module.
 */

/**
 * Implements hook_token_info().
 *
 * @return array
 */
function og_subscriptions_token_info() {
/*  $subs['category'] = array(
    'name' => t("Group"),
    'description' => t("The group, if this notification was triggered by a %Group subscription.", array('%Group' => t('Group'))),
    'type' => 'term',
  );
  return array(
    'types' => array(),
    'tokens' => array('subs' => $subs),
  ); */
}

/** TODO: REWRITE
 * Implements hook_tokens().
 *
 * @param $type
 * @param $tokens
 * @param array $data
 * @param array $options
 *
 * @return array
 *
 * @ingroup hooks
 */
function og_subscriptions_tokens($type, $tokens, array $data = array(), array $options = array()) {
/*  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);
*/
  $replacements = array();
/*
  if ($type == 'subs' && !empty($data['subs']['category'])) {
    $term = $data['subs']['category'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
          // Default values for the chained tokens handled below.
        case 'category':
          //$replacements[$original] = $sanitize ? filter_xss($term->name) : $term->name;
          $replacements[$original] = render(taxonomy_term_view($term, 'full', $language_code));
          break;
      }
    }

    if ($term_tokens = token_find_with_prefix($tokens, 'category')) {
      $replacements += token_generate('term', $term_tokens, array('term' => $term), $options);
    }
  }*/
  return $replacements;
}

