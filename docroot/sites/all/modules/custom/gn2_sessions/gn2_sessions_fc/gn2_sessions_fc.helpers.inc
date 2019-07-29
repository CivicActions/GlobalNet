<?php
/**
 * @file
 * Include file for gn2_sessions_fc.
 */

/**
 * Where we submit our ordering info.
 */
function gn2_sessions_fc_order_save() {
  if (drupal_valid_token(arg(3))) {
    foreach ($_GET as $key => $item) {
      db_update('field_data_field_weight')
        ->fields(array('field_weight_value' => $item))
        ->condition('entity_id', $key, '=')
        ->execute();

    }
    cache_clear_all('*', 'cache_entity_field_collection_item', TRUE);
  }
}

/**
 * Deletes fcs.
 */
function gn2_sessions_fc_delete($fcid, $nid, $token) {
  if (!drupal_valid_token($token)) {
    return MENU_ACCESS_DENIED;
  }
  entity_delete('field_collection_item', $fcid);
}

/**
 * Handles our form load processing.
 */
function gn2_sessions_fc_reg_form_loader_ajax($page_callback_result) {
  // Only render content.
  $content = drupal_render($page_callback_result);
  // Add JS files, add some markup.
  $html = '<html class="js"><head></head><body class="jquery-ajax-load">' . $content . '</body>' . drupal_page_footer() . drupal_get_js() . '</html>';
  print $html;
}

/**
 * Implements hook_field_group_pre_render_alter().
 */
function gn2_sessions_fc_field_group_pre_render_alter(&$element, $group, &$form) {
  $goodies = array(
    'group_level1',
    'group_ind_items_level2',
    'group_ind_items_level3',
  );
  // Add entity id's to entity output for easier sorting.
  if (in_array($group->group_name, $goodies)) {
    $element['#title'] = !empty($element['field_title']['#items'][0]['value']) ? $element['field_title']['#items'][0]['value'] : $element['#title'];
  }
  if ($form['#bundle'] == 'field_session') {
    $form['group_level1']['#attributes']['data-id'] = $form['#entity_view_mode']['id'];
  }
  if ($form['#bundle'] == 'field_session_day') {
    $form['group_ind_items_level2']['#attributes']['data-id'] = $form['#entity_view_mode']['id'];
  }
  if ($form['#bundle'] == 'field_unit') {
    $form['group_ind_items_level3']['#attributes']['data-id'] = $form['#entity_view_mode']['id'];
  }
}

/**
 * @param $the_downloads
 *
 * @return string
 *    Helper function to format labels.
 */
function gn2_sessions_fc_downloads_wrapper($the_downloads) {
  $stringcheck = strpos($the_downloads, 'gn2_file_download_link');
  if (is_numeric($stringcheck)) {
    $downloads_block = '<h3 class="field-label">Files</h3>';
    $downloads_block .= '<div class="file-download pane-gn2-file-download-gallery-media">';
    $downloads_block .= $the_downloads;
    $downloads_block .= '</div>';
  }
  else {
    $downloads_block = $the_downloads;
  }

  return $downloads_block;
}

/**
 * Implements hook_entity_view_alter().
 */
function gn2_sessions_fc_entity_view_alter(&$build, $type) {
  if ($type == 'field_collection_item' && ($build['#bundle'] == 'field_session' || $build['#bundle'] == 'field_session_day')) {
    $key = $build['field_title']['#object']->item_id;
    $query = db_select('field_data_field_weight', 'field_weight_value')
      ->fields('field_weight_value')
      ->condition('entity_id', $key, '=')
      ->execute()->fetchAssoc();
    $weight = $query['field_weight_value'];

    if (og_user_access('node', arg(1), 'administer_group')) {
      // Add our level2 buttons, level 1 weight, and ajax form holders.
      if ($build['#bundle'] == 'field_session') {
        $field_title_temp = $build['field_title'][0]['#markup'];
        $output = '<div id="ajaxatron-id-' . $build['#entity_view_mode']['id'] . '" class="ajaxatron-wrapper"><a class="ajaxatron level2 " data-type="add" data-nid="' . arg(1) . '" data-level="level2" id="ajaxatron-' . $build['#entity_view_mode']['id'] . '">' . t('New Session', array(
            ':title' => $build['field_title'][0]['#markup'],
          )) . '</a><span class="ajaxatron-session-name">' . $build['field_title'][0]['#markup'] . '</span></div>';
        $output .= '<div class="ajaxatron-ajax ajaxatron-' . $build['#entity_view_mode']['id'] . '"><div class="sessions-ajax-form"></div></div>';
        $build['#group_children']['field_level_add_item'] = 'group_level1';
        $build['weight']['#prefix'] = '<input class="weight-input-toggle-item" data-input="' . $build['#entity_view_mode']['id'] . '" id="weight-' . $build['#entity_view_mode']['id'] . '" name="weight" size="1" type="number" placeholder="' . $weight . '"/>';
      }
      // Add our level3 buttons, level 2 weight, and ajax form holders.
      if ($build['#bundle'] == 'field_session_day') {
        $output = '<div id="ajaxatron-id-' . $build['#entity_view_mode']['id'] . '" class="ajaxatron-wrapper"><a class="ajaxatron level3" data-type="add" data-nid="' . arg(1) . '" data-level="level3" id="ajaxatron-' . $build['#entity_view_mode']['id'] . '">' . t('New Session', array(
            ':title' => $build['field_title'][0]['#markup'],
          )) . '</a><span class="ajaxatron-session-name">' . $build['field_title'][0]['#markup'] . '</span></div>';
        $output .= '<div class="ajaxatron-' . $build['#entity_view_mode']['id'] . '"><div class="sessions-ajax-form"></div></div>';
        $build['#group_children']['field_level_add_item'] = 'group_ind_items_level2';
        $build['weight']['#prefix'] = '<input class="weight-input-toggle-item" data-input="' . $build['#entity_view_mode']['id'] . '" id="weight-' . $build['#entity_view_mode']['id'] . '" name="weight" size="1" type="number" placeholder="' . $weight . '"/>';
      }

      $build['field_level_add_item'] = array(
        'field_name' => 'field_level_add_item',
        'type' => 'text',
        '#weight' => 10,
        '#markup' => $output,
      );
    }
  }
  if ($type == 'field_collection_item' && ($build['#bundle'] == 'field_session_day')) {
    $downloads_form = drupal_get_form('gn2_file_download_form', $build['#entity_view_mode']['id']);
    $downloads_temp = drupal_render($downloads_form);
    $downloads = gn2_sessions_fc_downloads_wrapper($downloads_temp);
    $build['field_media'] = '';
    $build['field_session_presenter']['#title'] = 'Presenters';
    $build['field_media']['#weight'] = 4;
    $build['field_media']['#prefix'] = $downloads;
  }
  if ($type == 'field_collection_item' && ($build['#bundle'] == 'field_unit')) {
    $render_form = drupal_get_form('gn2_file_download_form', $build['#entity_view_mode']['id']);
    $downloads_temp = drupal_render($render_form);
    $downloads = gn2_sessions_fc_downloads_wrapper($downloads_temp);
    $build['field_media'] = '';
    $build['field_description']['#weight'] = -10;
    $build['field_session_presenter']['#weight'] = -9;
    $build['field_session_presenter']['#title'] = 'Presenters';
    $build['field_media']['#weight'] = 4;
    $build['field_media']['#prefix'] = $downloads;
    // Add our level 3 weight.
    $key = $build['field_title']['#object']->item_id;
    $query = db_select('field_data_field_weight', 'field_weight_value')
      ->fields('field_weight_value')
      ->condition('entity_id', $key, '=')
      ->execute()->fetchAssoc();
    $weight = $query['field_weight_value'];
    $build['weight']['#prefix'] = '<input class="weight-input-toggle-item" data-input="' . $build['#entity_view_mode']['id'] . '" id="weight-' . $build['#entity_view_mode']['id'] . '" name="weight" size="1" type="number" placeholder="' . $weight . '"/>';
  }
}

/**
 * Implements hook_preprocess_field().
 */
function gn2_sessions_fc_preprocess_field(&$variables, $hook) {
  $target = $variables['element']['#field_name'];

  switch ($target) {

    // This is where we re-order level2 & level3 sessions to match field_weight.
    case ('field_session_day'):
    case ('field_unit'):
      gn2_sessions_fc_sorter($variables['items'], 'entity', 'field_collection_item');

      break;
  }
}

/**
 * Sorts our items according to weight determined by drag and dop.
 *
 * @param array $haystack
 *   The array of items to sort.
 * @param int $key_a
 *   Used to determine entity of item 1.
 * @param int $key_b
 *   Used to determine entity of item 2.
 */
function gn2_sessions_fc_sorter(array &$haystack, $key_a, $key_b = NULL) {
  usort($haystack, function ($a, $b) use ($key_a, $key_b) {

    if ($key_b != NULL) {
      $first_key = key($a[$key_a][$key_b]);
      $second_key = key($b[$key_a][$key_b]);
      $first_item = $a['entity']['field_collection_item'][$first_key]['#entity']->field_weight[LANGUAGE_NONE][0]['value'];
      $second_item = $b['entity']['field_collection_item'][$second_key]['#entity']->field_weight[LANGUAGE_NONE][0]['value'];
    }
    else {
      $first_key = key($a[$key_a]);
      $second_key = key($b[$key_a]);
      $first_item = $a['field_collection_item'][$first_key]['#entity']->field_weight[LANGUAGE_NONE][0]['value'];
      $second_item = $b['field_collection_item'][$second_key]['#entity']->field_weight[LANGUAGE_NONE][0]['value'];
    }

    if ($first_item == $second_item) {
      if ($first_key < $second_key) {
        return -1;
      }
      if ($first_key > $second_key) {
        return 1;
      }
    }
    if ($first_item < $second_item) {
      return -1;
    }
    if ($first_item > $second_item) {
      return 1;
    }

  });

}

/**
 * Implements hook_preprocess_entity().
 */
function gn2_sessions_fc_preprocess_entity(&$variables, $hook) {
  if ($variables['entity_type'] == 'field_collection_item') {
    if ($variables['elements']['#groups'] == ('group_level1' || 'group-ind-items-level2' || 'group-ind-items-level3')) {
      $output = '';
      $level = '';
      $handle_class = '';

      if ($variables['content']['field_title']['#bundle'] == 'field_session_day') {
        $level = 'level2';
        $handle_class = 'handle-group-ind-items-level2';
      }
      elseif ($variables['content']['field_title']['#bundle'] == 'field_unit') {
        $level = 'level3';
        $handle_class = 'handle-group-ind-items-level3';
      }
      elseif ($variables['content']['field_title']['#bundle'] == 'field_session') {
        $level = 'level1';
        $handle_class = 'handle-group-level1';
      }

      if (og_user_access('node', arg(1), 'administer_group')) {
        $output .= '<div class="sessions-buttons-wrap">';
        if ($variables['content']['field_title']['#bundle'] !== 'field_session') {
          $output .= '<span data-nid="' . arg(1) . '" data-level="' . $level . '" data-id="' . $variables['elements']['#entity']->item_id . '" data-token="' . drupal_get_token() . '" class="updateatron handle ' . $handle_class . '">+</span>';
        }
        $output .= '<span data-nid="' . arg(1) . '" data-level="' . $level . '" data-id="' . $variables['elements']['#entity']->item_id . '" data-token="' . drupal_get_token() . '" class="delete-session deleteatron">Delete</span>';
        $output .= '<span data-nid="' . arg(1) . '" data-level="' . $level . '" data-id="' . $variables['elements']['#entity']->item_id . '" class="edit-session editatron">Edit</span></div>';
      }

      $suffix = '<div id="session-edit-container-' . $variables['elements']['#entity']->item_id . '" class="session-edit-container"></div>';
      $variables['content']['#prefix'] = $output;
      $variables['content']['#suffix'] = $suffix;
    }
  }
}

/**
 * Grab user id from input instead of values for order.
 */
function gn2_sessions_fc_string_between($string, $start, $end) {
  $string = ' ' . $string;
  $ini = strpos($string, $start);
  if ($ini == 0) {
    return '';
  }
  $ini += strlen($start);
  $len = strpos($string, $end, $ini) - $ini;

  return substr($string, $ini, $len);
}

/**
 * Returns an svg loading animation.
 */
function gn2_sessions_fc_spinner() {
  return '<div class="loader loader-hidden" id="sessions-loading">
  <svg version="1.1" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
     width="24px" height="24px" viewBox="0 0 24 24" style="enable-background:new 0 0 50 50;" xml:space="preserve">
    <rect x="0" y="0" width="4" height="7" fill="#333">
      <animateTransform  attributeType="xml"
        attributeName="transform" type="scale"
        values="1,1; 1,3; 1,1"
        begin="0s" dur="0.6s" repeatCount="indefinite" />
    </rect>

    <rect x="10" y="0" width="4" height="7" fill="#333">
      <animateTransform  attributeType="xml"
        attributeName="transform" type="scale"
        values="1,1; 1,3; 1,1"
        begin="0.2s" dur="0.6s" repeatCount="indefinite" />
    </rect>
    <rect x="20" y="0" width="4" height="7" fill="#333">
      <animateTransform  attributeType="xml"
        attributeName="transform" type="scale"
        values="1,1; 1,3; 1,1"
        begin="0.4s" dur="0.6s" repeatCount="indefinite" />
    </rect>
  </svg>
</div>';
}
