<?php

/**
 * @file
 * Definition of gn2_og_handler_group_status.
 */

/**
 * Provides a custom views field.
 */
class gn2_og_handler_group_status extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    // Do nothing -- to override the parent query.
  }

  function render($data) {
    // If the devel module is enabled, you may view all of the
    // data provided by fields previously added in your view.
    $statedisplay = '';
    if (!empty($data->entity)) {
      $this_nid = (is_int($data->entity)) ? $data->entity : $data->entity->nid;
      $state = db_query('SELECT grouptype FROM {gn2_og_membership_permission} WHERE nid = :nid',
      array(':nid' => $this_nid))->fetchField();
      $open_message =
        'This group is open; membership requests 
        are accepted immediately.';
      $moderated_message =
        'This group is moderated; membership 
        requests must be approved by a group admin.';
      $closed_message =
        'This group is closed; membership is 
        exclusively managed by a group admin. 
        Only the group admin can add or remove a member.';
      if ($state == 'open') {
        $statedisplay = $open_message;
      }
      elseif ($state == 'moderated') {
        $statedisplay = $moderated_message;
      }
      elseif ($state == 'closed') {
        $statedisplay = $closed_message;
      }
      else {
        $statedisplay = $state . '';
      }
    }
    else {
      $statedisplay = '';
    }
    return $statedisplay;
  }

}
