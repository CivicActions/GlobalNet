<?php

/**
 * Custom function to search keyword - Guide.
 */
function _gn2_guide_search_keyword($keyword) {
  global $user;
  $data = new stdClass();

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
    ->entityCondition('bundle', array('help'))
    ->propertyCondition('name', '%' . $keyword . '%', 'LIKE')
    ->range(0, 20)
    ->execute();

  $result = $query->execute();
  $tids = array_keys($result['taxonomy_term']);

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'help')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->propertyCondition('title', '%' . $keyword . '%', 'LIKE')
    ->range(0, 20)
    ->execute();

  $nids = array_keys($result['node']);

  if (is_array($tids)) {
    $query = new EntityFieldQuery();
    if (in_array('administrator', $user->roles)) {
      $result = $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'help')
        ->propertyCondition('status', NODE_PUBLISHED)
        ->fieldCondition('field_help_topics', 'tid', $tids, 'IN')
        ->range(0, 20)
        ->execute();
    }
    else {
      $result = $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'help')
        ->propertyCondition('status', NODE_PUBLISHED)
        ->fieldCondition('field_help_topics', 'tid', $tids, 'IN')
        ->fieldCondition('field_group_manager_display', 'value', '1', '!=')
        ->range(0, 20)
        ->execute();
    }

    if (is_array($nids)) {
      $nids2 = array_keys($result['node']);
      $nids = (is_array($nids2))? array_merge($nids, $nids2) : $nids;
    } else {
      $nids = array_keys($result['node']);
    }
  }

  $nodes = array();
  if (is_array($nids)) {
    $nodes = node_load_multiple($nids);
    $output = array();

    foreach ($nodes as $node) {
      $node = entity_metadata_wrapper('node', $node);
      $title = $node->title->value();
      $term = $node->field_help_topics->value();
      $tname = str_replace(' ', '-', $term[0]->name);
      $output[] = l($title, '/guide/' . $tname . '/' . $node->nid->value());
    }
  }
  $data->res = theme('guide_keyword', array('output' => $output));
  return drupal_json_output($data);
}

/**
 * Guide searcher form().
 */
function _gn2_guide_searcher_form($form,&$form_submit) {
  $form['keyword'] = array(
    '#title' => t('Keyword search'),
    '#type' => 'textfield',
    '#attributes' =>
      array('placeholder' => t('Search for help'))
  );
  $form['output'] = array(
    '#value' => '<span class="search-button">Search</span><span class="right-text">'
      . '<span class="white-text">Can\'t find what you\'re looking for?</span>'
      . '<span><a href="/contact-support">Contact Support</a></span></span>',
    '#type' => 'fieldset',
  );
  return $form;
}
