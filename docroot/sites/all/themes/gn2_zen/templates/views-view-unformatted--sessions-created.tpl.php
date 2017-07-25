<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

drupal_add_js('misc/form.js');
drupal_add_js('misc/collapse.js');

// We don't want to show our weeks view if there is a query being passed.'
if ($view->current_display == 'panel_pane_1') :
  if (!empty($_GET['n'])) :
    return;
  endif;
  foreach ($rows as $id => $row) :
    $er = '';
    $er_next = '';
    $er_prev = '';
    $erval = '';
    $erval_prev = '';
    $erval_next = '';

    $descrip = '';
    $date_extract_raw = '';

    $date_extract = reset(entity_load('entityform', array($date_extract_raw)));
    if (!(empty($view->result[$id]->_field_data['entityform_id']['entity']->field_day_number[LANGUAGE_NONE][0]['value']))) :
      $interval = $view->result[$id]->_field_data['entityform_id']['entity']->field_day_number[LANGUAGE_NONE][0]['value'] - 1;
    else :
      $interval = '';
    endif;
    if (!empty($interval)) :
      if (!empty($view->result[$id]->field_data_field_event_date_field_event_date_value)) :
        $date_extract_raw = $view->result[$id]->field_data_field_event_date_field_event_date_value;
      else :
        $date_extract_raw = '';
      endif;
      $date = new DateTime($date_extract_raw);
      $date->add(new DateInterval('P' . $interval . 'D'));

    $today_check = date('l, F d, Y');

    $er = $view->result[$id]->field_data_field_type_field_type_value;

    if (!empty($view->result[$id - 1]->field_data_field_type_field_type_value)) :
      $er_prev = $view->result[$id - 1]->field_data_field_type_field_type_value;
    endif;

    if (!empty($view->result[$id + 1]->field_data_field_type_field_type_value)) :
      $er_next = $view->result[$id + 1]->field_data_field_type_field_type_value;
    endif;

    $erval = $view->result[$id]->field_data_field_shared_entity_ref_field_shared_entity_ref_v;

    if (!empty($view->result[$id - 1]->field_data_field_shared_entity_ref_field_shared_entity_ref_v)) :
      $erval_prev = $view->result[$id - 1]->field_data_field_shared_entity_ref_field_shared_entity_ref_v;
    endif;

    if (!empty($view->result[$id + 1]->field_data_field_shared_entity_ref_field_shared_entity_ref_v)) :
      $erval_next = $view->result[$id + 1]->field_data_field_shared_entity_ref_field_shared_entity_ref_v;
    endif;

    if ($er == 'Week') :
      $week_start_raw = new DateTime($view->result[$id]->_field_data['entityform_id']['entity']->field_date2[LANGUAGE_NONE][0]['value']);
      $week_start = $week_start_raw->format('l, F d, Y');
      $current_time = date('l, F d, Y');
      $time_unix = strtotime($week_start);
      if ($week_start == $current_time):
        print '<fieldset class="collapsible" data-order="' . $time_unix . '">';
      endif;
      if ($week_start !== $current_time):
        print '<fieldset class="collapsible collapsed" data-order="' . $time_unix . '">';
      endif;

      print '<legend><span class="fieldset-legend"><span class="week-info"></span></span></legend>';
      print '<div class="fieldset-wrapper">';
    endif;

    $entity = entity_load('entityform', array($view->result[$id]->entityform_id));

    foreach ($entity as $key => $thing) :

      if (!empty($thing->field_description[LANGUAGE_NONE][0]['safe_value'])) :
        $descrip = $thing->field_description[LANGUAGE_NONE][0]['safe_value'];
      endif;
      if (!empty($thing->field_event_date[LANGUAGE_NONE][0]['value'])) :
        $date_raw = $thing->field_event_date[LANGUAGE_NONE][0]['value'];
      endif;

      if (!empty($thing->field_shared_entity_ref[LANGUAGE_NONE][0])) :
        $entity_id = $thing->field_shared_entity_ref[LANGUAGE_NONE][0]['safe_value'];
      endif;
    endforeach;

    if (empty($thing->field_shared_entity_ref[LANGUAGE_NONE][0])) :
      $entity_id = 'none';
    endif;

    $type = $thing->field_type[LANGUAGE_NONE][0]['value'];

    $day_start_raw = new DateTime($view->result[$id]->_field_data['entityform_id']['entity']->field_date2[LANGUAGE_NONE][0]['value']);
    $interval = $view->result[$id]->_field_data['entityform_id']['entity']->field_day_number[LANGUAGE_NONE][0]['value'] - 1;
    $day_start_raw->add(new DateInterval('P' . $interval . 'D'));

      if (!empty($view->result[$id]->_field_data['entityform_id']['entity']->field_session_association[LANGUAGE_NONE][0]['target_id'])) :
      $day_parent = reset(entity_load('entityform', array($view->result[$id]->_field_data['entityform_id']['entity']->field_session_association[LANGUAGE_NONE][0]['target_id'])));
    else :
      $day_parent = '';
    endif;
    if (!empty($day_parent->field_date2[LANGUAGE_NONE][0]['value'])) :
      $day_parent_start_raw = new DateTime($day_parent->field_date2[LANGUAGE_NONE][0]['value']);
    else :
      $day_parent_start_raw = new DateTime();
    endif;
    $day_parent_interval = $view->result[$id]->_field_data['entityform_id']['entity']->field_day_number[LANGUAGE_NONE][0]['value'] - 1;
    $day_parent_start_raw->add(new DateInterval('P' . $day_parent_interval . 'D'));

    if ($today_check == $day_parent_start_raw->format('l, F d, Y')):
      print '<div class="' . $classes_array[$id] . ' ' . 'entityconnection-' . $entity_id . ' today ' . $type . '">';
    endif;

    if ($today_check !== $day_parent_start_raw->format('l, F d, Y')):
      print '<div class="' . $classes_array[$id] . ' ' . 'entityconnection-' . $entity_id . ' ' . $type . '">';
    endif;

    print $row;
    print '</div>';

    if ($erval !== $erval_next) :
      print '</div>';
      print '</fieldset>';
    endif;
    endif;
  endforeach;
endif;


if ($view->current_display == 'panel_pane_2') :

  foreach ($rows as $id => $row) :

    $entity = entity_load('entityform', array($view->result[$id]->entityform_id));

    foreach ($entity as $key => $thing) :
      $type = $thing->field_type[LANGUAGE_NONE][0]['value'];
      if (!empty($thing->field_shared_entity_ref[LANGUAGE_NONE][0])) :
        $entity_id = $thing->field_shared_entity_ref[LANGUAGE_NONE][0]['safe_value'];
      endif;
    endforeach;

    if (empty($thing->field_shared_entity_ref[LANGUAGE_NONE][0])) :
      $entity_id = 'none';
    endif;

    $descrip = '';
    $date_raw = '';
    if (!empty($thing->field_description[LANGUAGE_NONE][0]['safe_value'])) :
      $descrip = $thing->field_description[LANGUAGE_NONE][0]['safe_value'];
    endif;

    print '<div class="' . $classes_array[$id] . ' ' . 'entityconnection-' . $entity_id . ' ' . $type . '">';
    print $row . '</div>';
  endforeach;

endif;
