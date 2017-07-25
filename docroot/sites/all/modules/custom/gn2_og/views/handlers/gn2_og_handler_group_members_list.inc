<?php

/**
 * @file
 * Definition of gn2_og_handler_group_members_list.
 */

/**
 * Field handler to display the list of group members.
 */
class gn2_og_handler_group_members_list extends views_handler_field {

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

    // Subquery that fetches members.
    $sql = <<<SQL
(
  SELECT
    GROUP_CONCAT(CONCAT(u.uid, ';', u.name))
  FROM
     {users} u
     INNER JOIN {og_membership} ogm ON u.uid = ogm.etid AND ogm.entity_type = 'user'
  WHERE
    ogm.gid = {$table}.nid AND ogm.group_type = 'node' AND ogm.state = {$active_state}
)
SQL;

    // Adds subquery to the main query as a field.
    $field = "{$table}_member_list";
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
    $field = "{$table}_member_list";

    // Builds member list based on fetched values.
    $members = array();
    if (trim($values->$field)) {
      $members = explode(',', $values->$field);
      foreach ($members as &$member) {
        $member = explode(';', $member);
        $member = l($member[1], "user/{$member[0]}");
      }
    }

    // Final display.
    if (empty($members)) {
      $members = t('There are no active participants.');
    }
    else {
      $members = implode(', ', $members);
    }

    return $members;

  }

}
