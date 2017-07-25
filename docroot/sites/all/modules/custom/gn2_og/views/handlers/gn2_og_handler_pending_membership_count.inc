<?php

/**
 * @file
 * Definition of gn2_og_handler_pending_membership_count.
 */

/**
 * Field handler to display the total number of pending memberships in a group.
 */
class gn2_og_handler_pending_membership_count extends views_handler_field {

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

    // Table used for data fetching.
    $table = $this->ensure_my_table();

    // Subquery that fetches count.
    $pending_state = OG_STATE_PENDING;
    $sql = <<<SQL
(
  SELECT
    COUNT(*)
  FROM
     {og_membership} ogm
  WHERE
    ogm.gid = {$table}.nid AND ogm.group_type = 'node' AND ogm.state = {$pending_state} AND
    ogm.entity_type = 'user'
)
SQL;

    // Adds subquery to the main query as a field.
    $field = "{$table}_pending_count";
    $this->query->add_field(NULL, $sql, $field);
    $this->field_alias = $field;

    // Adds any additional fields.
    $this->add_additional_fields();
  }

  /**
   * Renders field value.
   */
  public function render($values) {

    // Table used for data fetching.
    $table = $this->ensure_my_table();
    $field = "{$table}_pending_count";

    return $values->$field;
  }

}
