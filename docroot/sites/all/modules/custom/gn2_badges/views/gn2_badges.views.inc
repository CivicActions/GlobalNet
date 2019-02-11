<?php

/**
 * Implements hook_views_data().
 */
function gn2_badges_views_data() {
  $data = [
    'gn2_badges_user_totals' => [
      'table' => [
        'group' => t('GN2 Badges'),
        'base' => [
          'field' => 'bid',
          'title' => t('GN2 Badges Totals'),
          'help' => t('Badges contains the badge level for users.'),
          'weight' => -10,
        ],
        'join' => [
          'users' => [
            'left_field' => 'uid',
            'field' => 'uid',
          ],
        ],
      ],
      'uid' => [
        'title' => t('Badges User ID'),
        'help' => t('The User ID for a given Badge'),
        'relationship' => [
          'base' => 'users',
          'base_field' => 'uid',
          'handler' => 'views_handler_relationship',
          'label' => t('Badge User ID'),
        ],
      ],
      'level' => [
        'title' => t('Badge level'),
        'help' => t('The Userpoints Badge'),
        'field' => [
          'handler' => 'gn2_badges_handler_level',
          'click sortable' => FALSE,
        ],
        'sort' => [
          'handler' => 'views_handler_sort',
        ],
        'filter' => [
          'handler' => 'views_handler_filter_string',
        ],
        'argument' => [
          'handler' => 'views_handler_argument_string',
        ],
      ],
    ],
  ];

  return $data;
}
