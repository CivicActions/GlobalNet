<?php
/**
 * @file
 * Integrates features for password_policy.
 */

/**
 * Implements hook_features_export_options().
 */
function password_policy_features_export_options() {
  $policies = array();

  $result = db_select('password_policy', 'p', array(
    'fetch' => PDO::FETCH_ASSOC,
    'target' => 'slave',
  ))
    ->fields('p', array(
      'pid',
      'name',
      'enabled',
      'description',
      'created',
      'weight',
    ))
    ->orderBy('weight')
    ->execute();

  foreach ($result as $row) {
    $policies[$row['name']] = $row['name'];
  }

  return $policies;
}

/**
 * Implements hook_features_export().
 */
function password_policy_features_export($data, &$export, $module_name) {
  $export['dependencies']['features'] = 'features';
  $export['dependencies']['password_policy'] = 'password_policy';

  foreach ($data as $pid) {
    $policy = password_policy_policy_load_by_name($pid);
    foreach ($policy['roles'] as $key => $rid) {
      $role = user_role_load($rid);
      $export['user_role'][$role->name] = $role->name;
    }
    $export['features']['password_policy'][$policy['name']] = $policy['name'];
  }

  return $export;

}

/**
 * Implements hook_features_export_render().
 */
function password_policy_features_export_render($module_name, $data, $export = NULL) {
  $code = array();
  foreach ($data as $name) {
    $policy = password_policy_policy_load_by_name($name);
    if ($policy) {
      $roles = array();
      foreach ($policy['roles'] as $key => $rid) {
        $role = user_role_load($rid);
        $roles[$role->name] = $role->name;
      }
      $policy['roles'] = $roles;

      unset($policy['pid']);
      $code[$policy['name']] = $policy;
    }
  }

  $code = '  return ' . features_var_export($code, '  ') . ';';

  return array('password_policy_features_default_policy' => $code);
}

/**
 * Implements hook_features_revert().
 */
function password_policy_features_revert($module_name) {
  password_policy_features_rebuild($module_name);
}

/**
 * Implements hook_features_rebuild().
 */
function password_policy_features_rebuild($module_name) {
  $saved_policies = module_invoke($module_name, 'password_policy_features_default_policy');
  foreach ($saved_policies as $key => $policy) {
    $roles = array();
    foreach ($policy['roles'] as $key => $name) {
      $role = user_role_load_by_name($name);
      $roles[$role->rid] = $role->rid;
    }
    $policy['roles'] = $roles;

    $exists = password_policy_policy_load_by_name($policy['name']);
    if ($exists) {
      $policy['pid'] = $exists['pid'];
    }

    password_policy_policy_save($policy);
  }
}

/**
 * Loads a policy array from the database.
 *
 * @param string $name
 *   The name of the policy.
 *
 * @return array|false
 *   A populated policy array or FALSE if not found.
 */
function password_policy_policy_load_by_name($name) {
  static $policies = array();

  if (isset($policies[$name])) {
    return $policies[$name];
  }
  else {
    $policy = _password_policy_load_policy_by_name($name);
    if ($policy) {
      $policy['policy'] = unserialize($policy['policy']);
      $policies[$name] = $policy;
      return $policy;
    }
  }
  return FALSE;
}

/**
 * Loads the policy with the specified name.
 *
 * @param string $name
 *   The name of the policy.
 *
 * @return array|false
 *   A policy array or FALSE if no policy was found.
 */
function _password_policy_load_policy_by_name($name) {
  $row = db_select('password_policy', 'p', array('target' => 'slave'))
    ->fields('p')
    ->condition('name', $name)
    ->execute()
    ->fetchAssoc();

  if ($row) {
    // Fetch roles.
    $row['roles'] = array();
    $result = db_select('password_policy_role', 'p', array('target' => 'slave'))
      ->fields('p', array('rid'))
      ->condition('pid', $row['pid'])
      ->execute();
    foreach ($result as $role) {
      $row['roles'][$role->rid] = $role->rid;
    }
    return $row;
  }
  return FALSE;
}

/**
 * Saves a policy to the database.
 *
 * @param array $policy
 *   A policy array.
 */
function password_policy_policy_save($policy) {
  if (isset($policy['pid']) && $policy['pid']) {
    db_update('password_policy')
      ->fields(array(
        'name' => $policy['name'],
        'description' => $policy['description'],
        'enabled' => $policy['enabled'],
        'policy' => serialize($policy['policy']),
        'created' => $policy['created'],
        'expiration' => !empty($policy['expiration']) ? $policy['expiration'] : 0,
        'warning' => str_replace(' ', '', $policy['warning']),
      ))
      ->condition('pid', $policy['pid'])
      ->execute();
    watchdog('password_policy', 'Policy %name updated.', array('%name' => $form_state['values']['name']), WATCHDOG_NOTICE, l(t('edit'), 'admin/config/people/password_policy/' . $form_state['values']['pid'] . '/edit'));
    db_delete('password_policy_role')
      ->condition('pid', $policy['pid'])
      ->execute();
    $pid = $policy['pid'];
  }
  else {
    $pid = db_insert('password_policy')
      ->fields(array(
        'name' => $policy['name'],
        'description' => $policy['description'],
        'enabled' => $policy['enabled'],
        'policy' => serialize($policy['policy']),
        'created' => $policy['created'],
        'expiration' => !empty($policy['expiration']) ? $policy['expiration'] : 0,
        'warning' => str_replace(' ', '', $policy['warning']),
      ))
      ->execute();
    watchdog('password_policy', 'New policy %name created.', array('%name' => $form_state['values']['name']), WATCHDOG_NOTICE, l(t('edit'), 'admin/config/people/password_policy/' . $pid . '/edit'));
  }

  foreach (array_filter($policy['roles']) as $rid => $enabled) {
    db_insert('password_policy_role')
      ->fields(array(
        'pid' => $pid,
        'rid' => $rid,
      ))
      ->execute();
  }

}
