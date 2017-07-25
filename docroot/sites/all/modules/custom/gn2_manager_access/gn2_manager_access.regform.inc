<?php
/**
 * @file
 * File contains forms and handlers for the gn2_manager_access_regform form.
 */

/**
 * Form constructor for the gn2_manager_access_regform form.
 *
 * @param int $eid
 *   The entityform ID.
 *
 * @see gn2_manager_access_regform_validate()
 * @see gn2_manager_access_regform_approve()
 * @see gn2_manager_access_regform_deny()
 *
 * @ingroup forms
 */
function gn2_manager_access_regform($form, &$form_state, $eid) {
  $submission = entity_load_single('entityform', $eid);
  $types = array('userreg', 'join_org');

  if (is_object($submission) && in_array($submission->type, $types)) {
    $entity_display = entity_view('entityform', array($submission));
    $wrapper = entity_metadata_wrapper('entityform', $submission);
    $form['entity'] = array(
      '#markup' => drupal_render($entity_display),
    );

    $path = (filter_input(INPUT_GET, 'destination')) ?
        filter_input(INPUT_GET, 'destination') : 'admin/manage/userform/submissions/' . $submission->type;
    $return = l(t('Click here'), $path);

    global $user;
    $org = $wrapper->field_organization->value();
    $roles = og_get_user_roles('node', $org->nid);

    // Check to see if the request has already been approved or denied.
    $status_id = $wrapper->field_status->value();
    if ($status_id > 0) {
      $status = ($status_id == 1) ? 'approved' : 'denied';
      $text = t('This request has already been %status.',
          array('%status' => strtoupper($status)));
      $text .= ' ' . t('!return to return to the submissions list.',
          array('!return' => $return));
      drupal_set_message($text, 'warning', FALSE);

      return $form;
    }
    // Check to see if the current user is an Org Manager for the requested Org.
    elseif (!in_array('org_manager', $roles) && !in_array('administrator', $user->roles)) {
      $text = t('You need to be an Organization Manager for %org',
          array('%org' => $org->title));
      $text .= ' ' . t('or an Administrator to confirm or deny this request.');
      $text .= ' ' . t('!return to return to the submissions list.',
          array('!return' => $return));
      drupal_set_message($text, 'error', FALSE);

      return $form;
    }

    // Entityform entity ID.
    $form['eid'] = array(
      '#type' => 'hidden',
      '#value' => $eid,
    );

    // The form which the request came.
    $form['form_type'] = array(
      '#type' => 'hidden',
      '#value' => $submission->type,
    );

    // The organization to join.
    if ($org) {
      $form['org'] = array(
        '#type' => 'hidden',
        '#value' => $org->nid,
      );
    }

    // If an authenticated user made the request, load their email and set the
    // User ID value.
    if ($submission->uid > 0) {
      $submitted_email = user_load($submission->uid);
      $email = $submitted_email->mail;
      $form['uid'] = array(
        '#type' => 'hidden',
        '#value' => $submission->uid,
      );
    }
    // If the form contains the email address, set the email value.
    else {
      $email = $wrapper->field_email->value();
    }

    // Add the email address.
    if ($email) {
      $form['mail'] = array(
        '#type' => 'hidden',
        '#value' => $email,
      );
    }

    // Set the submission handler based on the form from which the request was
    // made.
    $submit = ($submission->type == 'userreg') ? 'gn2_manager_access_regform_approve_new' :
        'gn2_manager_access_regform_approve_existing';
    $form['approve'] = array(
      '#type' => 'submit',
      '#value' => t('Approve'),
      '#submit' => array($submit),
    );

    $form['deny'] = array(
      '#type' => 'submit',
      '#value' => t('Deny'),
      '#submit' => array('gn2_manager_access_regform_deny'),
    );
  }

  return $form;
}

/**
 * Form validation handler for gn2_manager_access_regform().
 *
 * @see gn2_manager_access_regform_approve_new()
 * @see gn2_manager_access_regform_approve_existing()
 * @see gn2_manager_access_regform_deny()
 */
function gn2_manager_access_regform_validate($form, &$form_state) {
  // Make sure that the Entityform submitted is the same as the id in the URL.
  $eid = $form_state['values']['eid'];
  if ($eid !== arg(4)) {
    form_set_error(NULL, t('An error occurred.'));
  }
  // Make sure that the submitted email address is valid.
  if (!valid_email_address($form_state['values']['mail'])) {
    form_set_error(NULL, t('The email address is not valid.'));
  }
}

/**
 * Form validation handler for gn2_manager_access_regform().
 *
 * @see gn2_manager_access_regform_validate()
 * @see gn2_manager_access_regform_approve_existing()
 * @see gn2_manager_access_regform_deny()
 */
function gn2_manager_access_regform_approve_new($form, &$form_state) {
  $eid = $form_state['values']['eid'];
  $submission = entity_load_single('entityform', $eid);
  $wrapper = entity_metadata_wrapper('entityform', $submission);
  $mail = $wrapper->field_email->value();

  // Check to see if a user already exists with that email address.
  $existing = user_load_by_mail($mail);
  if ($existing) {
    $link = l($existing->name, 'user/' . $existing->uid);
    drupal_set_message(t('User !link already exists with email address !mail',
        array('!link' => $link, '!mail' => $mail)), 'warning', FALSE);
  }
  else {
    $fields = array(
      'name' => 'unset_username',
      'mail' => $mail,
      'status' => 1,
      'init' => 'email address',
      'field_name_first' => $submission->field_name_first,
      'field_name_last' => $submission->field_name_last,
      'roles' => array(
        DRUPAL_AUTHENTICATED_RID => 'authenticated user',
      ),
    );

    $new_user = user_save(NULL, $fields);
    if ($new_user) {
      $link = l($new_user->name, 'user/' . $new_user->uid);
      drupal_set_message(t('New user !link was created using email address !mail',
          array('!link' => $link, '!mail' => $mail)), 'message', FALSE);
    }
  }

  $wrapper->field_status->set(1);
  $wrapper->save();
  entity_save('entityform', $submission);

  // Add user to Org.
  $org_id = $form_state['values']['org'];
  $org = node_load($org_id);
  if ($org->type == 'organization') {
    $values = array(
      'entity_type' => 'user',
      'entity' => ($existing) ? $existing : $new_user,
      'state' => OG_STATE_ACTIVE,
      'membership_type' => OG_MEMBERSHIP_TYPE_DEFAULT,
    );
    og_group('node', $org->nid, $values);

    // Send confirmation message.
    if (function_exists('gn2_notifications_immediate_send')) {
      global $user;
      $body = t('Your request to join the organization !group has been approved',
          array('!group' => $org->title));
      gn2_notifications_immediate_send($org_id, $new_user->uid, $user->uid,
          'Private Message', $body);
    }
  }

  $path = (filter_input(INPUT_GET, 'destination')) ?
      filter_input(INPUT_GET, 'destination') : 'admin/manage/userform/submissions/userreg';
  drupal_goto($path);
}

/**
 * Form validation handler for gn2_manager_access_regform().
 *
 * @see gn2_manager_access_regform_validate()
 * @see gn2_manager_access_regform_approve_new()
 * @see gn2_manager_access_regform_deny()
 */
function gn2_manager_access_regform_approve_existing($form, &$form_state) {
  $eid = $form_state['values']['eid'];

  // Set submission status to Approved.
  $submission = entity_load_single('entityform', $eid);
  $wrapper = entity_metadata_wrapper('entityform', $submission);
  $wrapper->field_status->set(1);
  $wrapper->save();
  entity_save('entityform', $submission);

  // Add user to Org.
  $org_id = $form_state['values']['org'];
  $org = node_load($org_id);
  $uid = array_key_exists('uid', $form_state['values']) ?
      $form_state['values']['uid'] : NULL;
  if ($org->type == 'organization' && $uid) {
    $existing_user = user_load($uid);
    $values = array(
      'entity_type' => 'user',
      'entity' => $existing_user,
      'state' => OG_STATE_ACTIVE,
      'membership_type' => OG_MEMBERSHIP_TYPE_DEFAULT,
    );
    og_group('node', $org->nid, $values);

    // Send confirmation message.
    if (function_exists('gn2_notifications_immediate_send')) {
      global $user;
      $body = t('Your request to join the organization !group has been approved',
          array('!group' => $org->title));
      gn2_notifications_immediate_send($org_id, $existing_user->uid, $user->uid,
          'Private Message', $body);
    }
  }

  drupal_set_message(t('!user has been added to !group', array(
    '!user' => l($existing_user->name, 'user/' . $existing_user->uid),
    '!group' => l($org->title, 'node/' . $org->nid),
  )));

  $path = (filter_input(INPUT_GET, 'destination')) ?
      filter_input(INPUT_GET, 'destination') : 'admin/manage/userform/submissions/join_org';
  drupal_goto($path);
}

/**
 * Form validation handler for gn2_manager_access_regform().
 *
 * @see gn2_manager_access_regform_validate()
 * @see gn2_manager_access_regform_approve()
 */
function gn2_manager_access_regform_deny($form, &$form_state) {
  $org = $form_state['values']['org'];
  $type = $form_state['values']['form_type'];
  $eid = $form_state['values']['eid'];

  // Set submission status to Denied.
  $submission = entity_load_single('entityform', $eid);
  $wrapper = entity_metadata_wrapper('entityform', $submission);
  $wrapper->field_status->set(2);
  $wrapper->save();
  entity_save('entityform', $submission);

  // Redirect to the user reject form.
  $path = (filter_input(INPUT_GET, 'destination')) ?
      filter_input(INPUT_GET, 'destination') : 'admin/manage/userform/submissions/' . $type;
  drupal_goto('eform/submit/reject-request', array(
    'query' => array(
      'org' => $org,
      'eid' => $eid,
      'destination' => $path,
    ),
  ));
}
