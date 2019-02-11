<?php

/**
 * @file
 * Views field handler for badge level.
 */

class gn2_badges_handler_level extends views_handler_field {

  function construct() {
    parent::construct();
    $this->additional_fields['level'] = [
      'table' => 'gn2_badges_user_totals',
      'field' => 'level',
    ];
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $value = $this->get_value($values, 'level');
    $levelOne = variable_get('gn2_badges_level_one_title', 'Bronze');
    $levelTwo = variable_get('gn2_badges_level_two_title', 'Silver');
    $levelThree = variable_get('gn2_badges_level_three_title', 'Gold');
    $badges = [
      $levelOne => [
        'active' => FALSE,
      ],
      $levelTwo => [
        'active' => FALSE,
      ],
      $levelThree => [
        'active' => FALSE,
      ],
    ];
    switch ($value) {
      case 'gn2_badges_level_one':
        $badges[$levelOne]['active'] = TRUE;
        break;

      case 'gn2_badges_level_two':
        $badges[$levelOne]['active'] = TRUE;
        $badges[$levelTwo]['active'] = TRUE;
        break;

      case 'gn2_badges_level_three':
        $badges[$levelOne]['active'] = TRUE;
        $badges[$levelTwo]['active'] = TRUE;
        $badges[$levelThree]['active'] = TRUE;
        break;
    }
    return theme('badges_large', ['badges' => $badges]);
  }

}
