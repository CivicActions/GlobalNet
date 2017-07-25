<?php

/**
 * @file
 * Definition of gn2_og_handler_group_managers_list.
 */

/**
 * Field handler to display the list of group managers.
 */
class gn2_og_handler_group_managers_list extends views_handler_field {

  /**
   * Constructor.
   */
  public function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
  }

  /**
   * Query conditions.
   */
  public function query() {

    // Activate user state.
    $active_state = OG_STATE_ACTIVE;

    // Node table used to filter.
    $table = $this->ensure_my_table();

    // Subquery that fetches managers.
    $sql = <<<SQL
(
  SELECT
    GROUP_CONCAT(CONCAT(u.uid, ';', u.name))
  FROM
     {users} u
     INNER JOIN {og_membership} ogm ON u.uid = ogm.etid AND ogm.entity_type = 'user'
     INNER JOIN {og_users_roles} ogur ON ogm.etid = ogur.uid AND ogm.gid = ogur.gid
     INNER JOIN {og_role ogr} ON ogur.rid = ogr.rid
  WHERE
    ogm.gid = {$table}.nid AND ogm.group_type = 'node' AND ogm.state = {$active_state} AND
    ogr.name IN ('group_manager', 'org_manager')
)
SQL;

    // Adds subquery to the main query as a field.
    $field = "{$table}_manager_list";
    $this->query->add_field(NULL, $sql, $field);
    $this->field_alias = $field;

    // Adds any other fields.
    $this->add_additional_fields();

  }

  /**
   * Renders field value.
   */
  public function render($values) {

    // Gets field table.
    $table = $this->ensure_my_table();
    $field = "{$table}_manager_list";

    // Builds manager list based on fetched values.
    $managers = array();
    if (trim($values->$field)) {
      $managers = explode(',', $values->$field);
      foreach ($managers as &$manager) {
        $manager = explode(';', $manager);
        $manager = l($manager[1], "user/{$manager[0]}");
      }
    }

    // Final display.
    if (empty($managers)) {
      $managers = t('There are no defined managers.');
    }
    else {
      $managers = implode(', ', $managers);
    }

    return $managers;

  }

}
