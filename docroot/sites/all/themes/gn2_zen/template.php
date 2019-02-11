<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 */

/**
 * Preprocess fields.
 */
function gn2_zen_preprocess_field(&$variables, $hook) {
  $target = $variables['element']['#field_name'];
  $variables['#object']->field_connect_to_node[LANGUAGE_NONE][0]['target_id'] = 61;

  switch ($target) {
    case ('field_event_date'):
      // Fixes Event date for Detail Page. See RD-3567.
      $start = $variables['element']['#items'][0]['value'];
      $d1 = _gn2_content_event_convert_date_to_user_timezone($start, 'd M Y');
      $t1 = _gn2_content_event_convert_date_to_user_timezone($start, 'H:i');
      $output = '<span class="date-display-single">' . $d1 . ' - ' . $t1;

      $end = !empty($variables['element']['#items'][0]['value2']) ? $variables['element']['#items'][0]['value2'] : '';
      if ($start != $end) {
        $d2 = _gn2_content_event_convert_date_to_user_timezone($end, 'd M Y');
        $t2 = _gn2_content_event_convert_date_to_user_timezone($end, 'H:i');
        if ($d1 == $d2) {
          $output .= ' to ' . $t2;
        }
        else {
          $output .= ' to ' . $d2 . ' - ' . $t2;
        }
      }

      $output .= '</span>';
      $variables['items'][0]['#markup'] = $variables['element'][0]['#markup'] = $output;
      break;

    case ('field_session_presenter'):
      $i = 0;
      $count = count($variables['items']);
      while ($i <= $count - 1) {
        $user = user_load_by_name($variables['items'][$i]['#label']);
        $variables['items'][$i] = '';
        $image = !empty($user->picture->uri) ? '<img src="' . image_style_url('media_thumbnail', $user->picture->uri) . '"/>' : '<img src ="/sites/all/themes/gn2_zen/images/generic-head.jpg">';
        $user_link = l($image, 'user/' . $user->uid, array('html' => TRUE));
        $first = !empty($user->field_name_first[LANGUAGE_NONE][0]['safe_value']) ? $user->field_name_first[LANGUAGE_NONE][0]['safe_value'] : '';
        $last = !empty($user->field_name_last[LANGUAGE_NONE][0]['safe_value']) ? $user->field_name_last[LANGUAGE_NONE][0]['safe_value'] : '';
        $full_name = $first . ' ' . $last;

        $country_raw = !empty($user->field_country_of_residence[LANGUAGE_NONE][0]) ? field_view_field('user', $user, 'field_country_of_residence') : '';
        $country = !empty($user->field_country_of_residence[LANGUAGE_NONE][0]) ? $country_raw[0]['#markup'] : '';
        $bio_raw = !empty($user->field_bio_short[LANGUAGE_NONE][0]) ? field_view_field('user', $user, 'field_bio_short') : '';
        $bio = !empty($user->field_bio_short[LANGUAGE_NONE][0]) ? $bio_raw[0]['#markup'] : '';
        if (!empty($user_link)) :
          $variables['items'][$i]['#markup'] = '<h3 class="session-presenter-label">Presenter</h3>';
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-wrap">';
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-column-left">';
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-image-wrap">' . $user_link . '</div>';
          $variables['items'][$i]['#markup'] .= '</div><div class="field-presenter-column-right">';
        endif;

        if (!empty($full_name)) :
          $name_link = l($full_name, 'user/' . $user->uid, array('html' => TRUE));
        endif;

        if (!empty($full_name) && empty($country)) :
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-name-country-wrap">' . $name_link . '</div>';
        endif;

        if (!empty($full_name) && !empty($country)) :
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-name-country-wrap"><div class="field-presenter-name-wrap">' . $name_link . '</div>';
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-country-wrap">' . $country . '</div></div>';
        endif;

        if (!empty($bio)) :
          $variables['items'][$i]['#markup'] .= '<div class="field-presenter-bio-wrap">' . $bio . '</div>';
        endif;

        $variables['items'][$i]['#markup'] .= '</div>';
        $variables['items'][$i]['#markup'] .= '</div>';

        $i++;
      }
      break;

    case ('field_type'):
      $variables['items'][0]['#markup'] = '';

      break;

    case ('field_course_schedule'):
    case ('field_course_syllabus'):
      $i = 0;
      $count = count($variables['items']);

      while ($i <= $count) {
        if (!empty($variables['element'][$i])) {
          if ($variables['element']['#field_name'] == 'field_course_schedule') {
            $variables['element'][$i]['#file']->filename = 'View Schedule';
          }
          if ($variables['element']['#field_name'] == 'field_course_syllabus') {
            $variables['element'][$i]['#file']->filename = 'View Syllabus';
          }
        }
        if (!empty($variables['element'][$i]['#file']->description)) {
          $variables['items'][$i]['#text'] = $variables['element'][$i]['#file']->description;
        }
        $i++;
      }

      break;

    case ('field_language'):
      $object = (array) $variables['element']['#object'];
      if (arg(1) == $object['nid']) {
        $type = $object['type'];
        if ($type == 'course') {
          $action = t('taught');
        }
        else {
          $action = t('held');
        }
        $prelude = t('This !type will be !action in ', array('!type' => $type, '!action' => $action));
        $variables['items'][0]['#markup'] = $prelude . $variables['items'][0]['#markup'] . '.';
      }

      break;

    default:
      '';
  }
}

/**
 * Open files in new window.
 */
function gn2_zen_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples.
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  $options['attributes']['target'] = '_blank';

  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}

/**
 * Preprocess function for the thumbs_up template.
 */
function gn2_zen_preprocess_rate_template_thumbs_up(&$variables) {
  extract($variables);
  $info = array();
  if ($mode == RATE_CLOSED) {
    $info[] = t('Voting is closed.');
  }
  if ($mode != RATE_COMPACT && $mode != RATE_COMPACT_DISABLED) {
    $info[] = format_plural($results['count'], '@count Like', '@count Likes');
  }
  $variables['info'] = implode(' ', $info);
  $variables['up_button'] = theme(
    'rate_button',
    array(
      'text' => $links[0]['text'],
      'href' => $links[0]['href'],
      'class' => 'rate-thumbs-up-btn-up',
    )
  );
}

/**
 * Implements template_preprocess_page().
 */
function gn2_zen_preprocess_page(&$variables) {
  if (arg(0) == 'messages') {
    unset($variables['tabs']);
  }

  // We don't use the off-the-shelf subscriptions gui.
  if (!empty($variables['tabs']['#primary'])) {
    foreach ($variables['tabs']['#primary'] as $value) {
      if ($value['#link']['title'] == 'Subscriptions') {
        unset($value);
      }
    }
  }
  // Node used to set the footer.
  $node_for_footer = NULL;

  // If current page is displaying a node, use that.
  if (array_key_exists('node', $variables)) {
    $node_for_footer = $variables['node'];
  }
  // Checks if a node is set based on login id.
  elseif ($theme_nid = gn2_context_get_org_id()) {
    $node_for_footer = node_load($theme_nid);
  }

  // If a node is loaded, renders the footer.
  if ($node_for_footer) {
    $panel_mini = panels_mini_load('footer');
    ctools_include('context');
    $context = ctools_context_create('entity:node', $node_for_footer);
    $contexts = ctools_context_match_required_contexts($panel_mini->requiredcontexts, array($context));
    $panel_mini->context = $panel_mini->display->context = ctools_context_load_contexts($panel_mini, FALSE, $contexts);
    $panel_mini->display->css_id = panels_mini_get_id($panel_mini->name);
    $markup = panels_render_display($panel_mini->display);
    $variables['footer_org']['#markup'] = $markup;
    $variables['root_parent_organization'] = $node_for_footer->nid;
  }

  // Add the Tag Manager datalayer.
  if (function_exists('gn2_metrics_set_datalayer')) {
    $data_layer = gn2_metrics_set_datalayer($variables);
    drupal_add_js('dataLayer = [' . json_encode($data_layer) . '];',
      'inline', array('group' => JS_LIBRARY, 'scope' => 'header'));
  }
}

/**
 * Implements template_preprocess_comment().
 */
function gn2_zen_preprocess_comment(&$vars) {
  global $user;
  if (arg(0) == 'comment' && arg(1) == 'reply' && is_numeric(arg(2))) {
    unset($vars['elements']['links']);
    unset($vars['content']['links']);
    drupal_add_css('.icon-links{visibility:hidden;}', 'inline');
  }

  $status = gn2_base_config_user_online($vars['comment']->uid);
  $vars['user_status'] = ($status) ? 'Online' : 'Offline';
  $vars['user_status_class'] = ($status) ? 'online' : 'offline';

  $this_uid = $vars['elements']['#comment']->uid;
  $this_created = $vars['elements']['#comment']->created;
  $account = user_load($this_uid);

  if ($account->uid > 0) {
    $vars['author_name'] = gn2_base_config_get_user_proper_name($account->uid, $link = TRUE);
  }
  else {
    $vars['author_name'] = "Anonymous";
  }

  $vars['timeago'] = format_interval(time() - $this_created, 1) . ' ' . t('ago');

  $vars['private_message'] = l(t('Send private message'), "messages/new", array(
    'query' => array('to' => $account->name),
    'attributes' => array(
      'target' => 'blank',
      'class' => array(
        'icon-link',
        'send-private-mesage',
      ),
    ),
  ));

  if ($user->uid != $vars['comment']->uid && !$vars['is_admin']) {
    unset($vars['content']['links']['comment']['#links']['comment-delete']);
    unset($vars['content']['links']['comment']['#links']['comment-edit']);
  }
}

/**
 * Implements template_preprocess_block().
 *
 * This sets toggle classes to indicate when there is a new private message.
 */
function gn2_zen_preprocess_block(&$vars) {

  $block_id = $vars['block']->module . '-' . $vars['block']->delta;
  switch ($block_id) {
    case 'gn2_privatemsg-privatemsg-menu':
      $count = privatemsg_unread_count();
      $vars['classes_array'][] = ($count) ? 'new-private-message' : 'no-new-private-message';
      break;
  }
}

/**
 * Implements theme_breadcrumb().
 */
function gn2_zen_breadcrumb($variables) {
  $breadcrumb = gn2_context_get_trail();

  $link_attributes = array(
    'attributes' => array(
      'class' => array('breadcrumb__link'),
    ),
  );

  $output = '';
  // Only display if there are two or more breadcrumbs.
  if (count($breadcrumb) > 1) {
    $output .= '<ul class="breadcrumb__list">';
    $count = 0;
    foreach ($breadcrumb as $path => $text) {
      $content = l($text, $path, $link_attributes);
      $classes = array('breadcrumb__list-item');
      if ($count == 0) {
        $classes[] = 'breadcrumb__list-item--first';
      }
      if ($count == count($breadcrumb) - 2) {
        $classes[] = 'breadcrumb__list-item--before-last';
      }
      if ($count == count($breadcrumb) - 1) {
        $classes[] = 'breadcrumb__list-item--last';
        $content = '<span class="breadcrumb__text">' . html_entity_decode($text) . '</span>';
      }
      $output .= '<li class="' . implode(' ', $classes) . '">' . $content . '</li>';
      $count++;
    }
    $output .= '</ul>';
  }
  return $output;
}

/**
 * Implements theme_preprocess_views_view.
 */
function gn2_zen_preprocess_views_view(&$vars) {
  if ($vars['view']->name == 'sessions_created') {
    global $user;
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      $ef = arg(1);
      $roles = og_get_user_roles('node', arg(1));
      if ($user->uid != 1) {
        if (!in_array('administrator', $user->roles)) {
          if (!in_array('org_manager', $roles)) {
            if (!in_array('group_manager', $roles)) {
              $vars['classes_array'][] = 'not-group-admin';
            };
          }
        }
      }
    }
  }
  if ($vars['view']->name == 'events' && $vars['view']->current_display == 'upcoming_events_page') {
    global $user;
    
    $is_admin = (in_array('administrator', $user->roles));
    if (is_numeric(arg(1))) {
      $group_roles = og_get_user_roles('node', arg(1));
      $toggler = FALSE;
      if (in_array('group_manager', $group_roles) || in_array('org_manager', $group_roles) || $is_admin) {
        $toggler = TRUE;
      }
      
      $vars['toggler'] = $toggler;
    }
  }
}

/**
 * Implements template_preprocess_views_view_unformatted.
 */
function gn2_zen_preprocess_views_view_unformatted(&$vars) {
  if ($vars['view']->name == 'events' && $vars['view']->current_display == 'upcoming_events_page') {
    
    global $user;    
    
    foreach($vars['view']->result as $key => $value){
      
      $node = node_load($value->nid);
      
      // Is membership for this event open?
      $group_type = gn2_og_get_membership_type($node->nid);
      
      // Get count of registered event members.
      $group_members = _gn2_base_config_get_users_in_group($node->nid);
      $number_of_registrants = count($group_members);
      
      // Check if registration for this event open.
      $reg = field_get_items('node', $node, 'field_registration');
      $registration = $reg[0]['value'];
      
      // Check if the Registration Limit is enabled.
      $reg_limit = field_get_items('node', $node, 'field_registration_limit');
      $registration_limit = ($reg_limit) ? $reg_limit[0]['value'] : NULL;
      
      // Get the Registration Limit.
      $reg_limit_number = field_get_items('node', $node, 'field_registration_limit_number');
      $registration_limit_number = ($reg_limit_number) ? $reg_limit_number[0]['value'] : NULL;
      $is_full = ($registration_limit && $registration_limit_number <= $number_of_registrants) ? TRUE : FALSE;

      // Check if the user has already enrolled.
      $is_enrolled = og_is_member('node', $node->nid, 'user', $user);
      
      // Check to see if the user is pending.
      $is_pending = og_is_member('node', $node->nid, 'user', $user, array(OG_STATE_PENDING));

      // If event has unlimited seats or available seats - show as open.
      if ($registration_limit == NULL || !$is_full) {
        $temp['grouptype'] = 'open';
      }
      // If user is registered or pending for event - show as open.
      elseif ($is_enrolled || $is_pending) {
        $temp['grouptype'] = 'open';
      }
      // User, event is full.
      elseif ($is_full) {
        $temp['grouptype'] = 'closed';
      }
      else {
        $temp['grouptype'] = $group_type;
      }
      
      $vars['classes_array'][$key] .= ' ' . $temp['grouptype'];
      
    }
  }
  
}


/**
 * Implements theme_preprocess_views_view_table.
 */
function gn2_zen_preprocess_views_view_table(&$vars) {
  if ($vars['view']->name == 'inbox') {
    foreach ($vars['rows'] as $key => $val) {
      $vars['rows'][$key]['thread_id'] = _gn2_zen_prepare_message_field($val['thread_id']);
    }
  }
}

/**
 * Helper function, alter the result for Thread_id.
 * Returns an output with formated participants for the current message.
 */
function _gn2_zen_prepare_message_field($pm_tid) {
  global $user;
  $user_loaded = user_load($user->uid);
  // Loads current thread.
  $message = privatemsg_message_load($pm_tid);
  // Loads participants for the current thread.
  $participants = _privatemsg_load_thread_participants($pm_tid, $user_loaded);
  // Output - result.
  $output = '';

  // Count replies for the current thread.
  $result = db_select('pm_index', 'pm')
    ->distinct()
    ->fields('pm', array('mid'))
    ->condition('pm.thread_id', $pm_tid, '=')
    ->execute();
  $replies = $result->rowCount() - 1;

  // Formats the paricipants display.
  if (count($participants) == 1) {
    foreach ($participants as $key => $p) {
      if ($message->author->uid != $p->uid) {
        $output = $p->field_name_first[LANGUAGE_NONE][0]['value'] . ' ';
        $output .= $p->field_name_last[LANGUAGE_NONE][0]['value'];
      }
      else {
        $output = $message->author->field_name_first[LANGUAGE_NONE][0]['value'] . ' ';
        $output .= $message->author->field_name_last[LANGUAGE_NONE][0]['value'];
      }
    }
  }
  elseif (count($participants) == 2) {
    foreach ($participants as $key => $p) {
      $output .= $p->field_name_first[LANGUAGE_NONE][0]['value'] . ', ';
    }
    $output .= 'me';
  }
  elseif (count($participants) > 2) {
    $i = 0;
    foreach ($participants as $key => $p) {
      $output .= $p->field_name_first[LANGUAGE_NONE][0]['value'] . ', ';
      if (++$i == 2) {
        break;
      }
    }
    $other = count($participants) - 2;
    $output .= $other . ' others';
  }

  // Add replies count is exist.
  if ($replies > 0) {
    $output .= ' (' . $replies . ')';
  }
  return $output;
}

/**
 * Implements template_preprocess().
 *
 * RD-1289 Applying an image style to the private messages full view page.
 */
function gn2_zen_preprocess(&$variables, $hook) {
  if ($hook == 'privatemsg_view') {
    $user = user_load($variables['message']->author->uid);
    if (!empty($user->picture->uri)) {
      $variables['author_picture'] = theme('image_style', array(
        'style_name' => 'tiny50x50',
        'path' => $user->picture->uri,
        'width' => NULL,
        'height' => NULL,
        'alt' => $user->name,
        'title' => $user->name,
        'attributes' => array(),
      ));
    }
  }
}

/**
 * Implements theme_file_icon().
 *
 * RD-1824 Replacing default file icons with SVG icons.
 */
function gn2_zen_file_icon($variables) {
  $file = $variables['file'];
  $icon_directory = drupal_get_path('theme', 'gn2_zen') . '/images/gn2_file_icons';
  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);
  $icon = str_replace('.png', '.svg', $icon_url);
  return '<img class="file-icon" alt="" title="' . $mime . '" src="' . $icon . '" />';
}

/**
 * Node preprocess.
 */
function gn2_zen_preprocess_node(&$variables) {
  $node = $variables['node'];
  $view_mode = $variables['view_mode'];
  $types = array('group');

  // RD-1741/1923: finds subgroups of current group if using group teaser mode.
  // If rerun in tpl, yields recursion by finding further subgroups (disabled).
  if (in_array($node->type, $types) && $view_mode == 'group_teaser') {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->entityCondition('bundle', array("group"), "IN");
    $query->fieldCondition('og_group_ref', 'target_id', $node->nid);
    $results = $query->execute();

    $entities = array();
    foreach ($results as $entity_type => $data) {
      foreach ($data as $nid => $info) {
        $entities[] = node_load($nid);
      }
    }
    $renderable_array = entity_view('node', $entities, 'group_teaser');
    $variables['subgroups'] = $renderable_array;
  }
}

/**
 * Implements theme_file_entity_file_video().
 */
function gn2_zen_file_entity_file_video($variables) {

  // Prepare filename. Fixes existent filenames with repeated Download word.
  $filename = str_replace('Download ', '', $variables['files'][0]['filename']);
  $filename = trim($filename);

  // Download link attributes.
  $download_attributes = array(
    'attributes' => array(
      'download' => $filename,
      'target' => '_blank',
    ),
  );

  // Translation variables.
  $t_vars = array(
    '!filename' => $filename,
  );

  // Builds the video markup using the existing implementation. Then includes
  // the download link.
  $output = '<div class="gnet-video-wrapper">';
  $output .= theme_file_entity_file_video($variables);
  $output .= '<p class="gnet-video-download-lik">';
  $output .= l(t('Download !filename', $t_vars), file_create_url($variables['files'][0]['uri']), $download_attributes);
  $output .= '</p>';
  $output .= '</div>';

  return $output;

}

/**
 * Implements hook_entity_view_alter().
 *
 * RD-2425 Hiding the reply buttons in for comments with depth > 0 in hierarchy.
 */
function gn2_zen_entity_view_alter(&$build, $type) {
  if (isset($build['comment_body']['#object']->depth)) {
    $depth = $build['comment_body']['#object']->depth;
  }
  if (isset($depth) && ($depth != 0)) {
    unset($build['links']['comment']['#links']['comment-reply']);
  }
}

/**
 * Implements template_preprocess_html().
 */
function gn2_zen_preprocess_html(&$variables) {
  // Add class for HR and Org managers.
  if (arg(0) == 'user' && is_numeric(arg(1)) && gn2_manager_is_manager(array('hr_manager', 'org_manager'))) {
    $variables['classes_array'][] = 'gn-manager';
  }
}

/**
 * Implements template_preprocess_panels_pane().
 */
function gn2_zen_preprocess_panels_pane(&$variables) {
  if (arg(0) == 'node' && is_numeric(arg(1))) {
    global $user;
    $gid = arg(1);
    $member = og_is_member('node', $gid, 'user', $user);
    if ($variables['pane']->panel == 'group_maintabs') {
      if (!isset($member) && !in_array('administrator', $user->roles) && $user->uid != 1) {
        $variables['content'] = t('You have to be a member of this course in order to view this content.');
      }
    }
  }
}
