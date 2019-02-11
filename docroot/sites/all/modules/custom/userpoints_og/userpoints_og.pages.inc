<?php

/**
 * @file
 * Page callbacks for the userpoints_og module.
 */

/**
 * Userpoints og config.
 */
function userpoints_og_config() {
  $header = array(
    array('data' => t('ID')),
    array('data' => t('Title')),
    array('data' => t('Operations')),
  );

  $query = db_select('userpoints_og', 'uo')->extend('PagerDefault');
  $query->fields('uo');

  $result = $query
    ->limit(50)
    ->orderBy('uo.nid')
    ->execute();

  $rows = array();
  foreach ($result as $value) {
    $group = node_load($value->nid);

    $rows[] = array(
      $value->nid,
      l($group->title, 'node/' . $group->nid),
      l(t('Edit'), 'admin/config/workflow/userpoints_og/config/edit/' . $value->nid),
    );
  }

  $build['pager_table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#empty' => t('There are no date formats found in the db'),
  );

  $build['pager_pager'] = array('#theme' => 'pager');

  return $build;
}

/**
 * Form builder for the userpoints og config edit.
 */
function userpoints_og_config_edit_form($form, &$form_state, $config) {
  if (!$config) {
    return;
  }

  $form['userpoints_og_general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['userpoints_og_general']['branding'] = array(
    '#type' => 'textfield',
    '#title' => t('Points Word'),
    '#description' => t('Please enter a name of integral, if you like.'),
    '#default_value' => !empty($config->config['branding']) ? $config->config['branding'] : t('Points'),
    '#required' => TRUE,
    '#size' => 5,
  );

  $form['config'] = array(
    '#type' => 'value',
    '#value' => $config,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Form submission handler for userpoints_og_config_edit_form().
 *
 * @see userpoints_og_config_edit_form()
 */
function userpoints_og_config_edit_form_submit($form, &$form_state) {
  $config = $form_state['values']['config'];

  // Edit the taxonomy name.
  $term = taxonomy_term_load($config->tid);
  $term->name = $form_state['values']['branding'];
  taxonomy_term_save($term);

  $data = array();
  $data['branding'] = $form_state['values']['branding'];
  db_merge('userpoints_og')
    ->key(array('nid' => $config->nid))
    ->fields(array('data' => serialize($data)))
    ->execute();

  drupal_set_message(t('The configuration options have been saved.'));
}

/**
 * Form builder for the userpoints og batch the old group.
 */
function userpoints_og_batch_old_group_form($form, &$form_state) {
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Old group is not create term in userpoints category, need to relate.') . '</p>',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Go',
  );

  return $form;
}

/**
 * Form submission handler on userpoints_og_batch_old_group_form().
 *
 * @see userpoints_og_batch_old_group_form()
 */
function userpoints_og_batch_old_group_form_submit($form, &$form_state) {
  $function = 'userpoints_og_batch_old_group';

  $batch = $function();
  batch_set($batch);
}
