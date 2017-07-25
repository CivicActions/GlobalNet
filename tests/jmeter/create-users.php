<?php

/**
 * Generate some random users. Based on devel_create_users().
 *
 * @param $num
 *  Number of users to generate.
 * @param $kill
 *  Boolean that indicates if existing users should be removed first.
 * @param $age
 *  The max age of each randomly-generated user, in seconds.
 * @param $roles
 *  An array of role IDs that the users should receive.
 * @param $pass
 *  A string to be used as common password for all generated users.
 */
function jmeter_create_users($num, $groups) {
  global $language;
  $uids = db_select('users', 'u')
          ->fields('u', array('uid'))
          ->condition('name', 'qa-loadtest-%', 'LIKE')
          ->execute()
          ->fetchAllAssoc('uid');
  user_delete_multiple(array_keys($uids));
  $url = parse_url($GLOBALS['base_url']);
  if ($num > 0) {
    $roles = array(DRUPAL_AUTHENTICATED_RID);
    for ($n = 0; $n <= $num; $n++) {
      $edit = array(
        'uid'     => NULL,
        'name'    => 'qa-loadtest-' . $n,
        'pass'    => user_password(20),
        'mail'    => $n . '@' . $url['host'].'.invalid',
        'status'  => 0,
        'created' => REQUEST_TIME - mt_rand(0, 90000000),
        'roles' => drupal_map_assoc($roles),
        'devel_generate' => TRUE // A flag to let hook_user_* know that this is a generated user.
      );

      // Populate all core fields on behalf of field.module
      drush_generate_include_devel();
      module_load_include('inc', 'devel_generate', 'devel_generate.fields');
      $edit = (object) $edit;
      $edit->language = LANGUAGE_NONE;
      devel_generate_fields($edit, 'user', 'user');
      $edit = (array) $edit;

      $account = user_save(drupal_anonymous_user(), $edit);

      // Accept TOU.
      $conditions = legal_get_conditions($language->language);
      legal_save_accept($conditions['version'], $conditions['revision'], $conditions['language'], $account->uid);

      // Join OGs.
      foreach ($groups as $group) {
        // Add the user to the group.
        og_group('node', $group, array("entity type" => "user", "entity" => $account, "membership type" => OG_MEMBERSHIP_TYPE_DEFAULT)); 
      }
    }
  }
  drupal_set_message(t('!num_users created.', array('!num_users' => format_plural($num, '1 user', '@count users'))));
}

jmeter_create_users(100, array(855, 14686, 17524, 14872, 13701));
