<?php
/**
 * @file
 * Code for the gn2_reports.range.inc.
 */

/**
 * Builds our range report.
 */
function gn2_reports_date_range_form_submit($form, &$form_state) {

  // Set our date values.
  $date_str1 = strtotime($form_state['values']['gn2_reports_date_field1']);
  $date_str1_diff = $date_str1 - 2629746;
  $date_str2 = strtotime($form_state['values']['gn2_reports_date_field2']);
  $date_str2_diff = $date_str2 - 2629746;
  $headers = array();
  $rows = array();

  // Grab all orgs.
  $orgs = db_select('node', 'title')
    ->fields('title')
    ->condition('type', 'organization', '=')
    ->execute()->fetchAll();

  // Start our table, and grab org user info.
  $sort_array = array();
  foreach ($orgs as $org) {
    $sort_array[$org->title]['date1'] = db_query('SELECT o.etid, o.created FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.created BETWEEN :date1diff AND :date1',
      array(
        ':gid' => $org->nid,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$org->title]['date2'] = db_query('SELECT o.etid, o.created FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.created BETWEEN :date2diff AND :date2',
      array(
        ':gid' => $org->nid,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();

    $sort_array[$org->title]['change'] = gn2_reports_precentages($sort_array[$org->title]['date1'], $sort_array[$org->title]['date2']);
    $sort_array[$org->title]['title'] = $org->title;

  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['org_users'] = array(
    'New Org Users',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['org_users'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Grab org comment info.
  $sort_array = array();
  foreach ($orgs as $org) {
    $sort_array[$org->title]['date1'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid AND c.created BETWEEN :date1diff AND :date1',
      array(
        ':gid' => $org->nid,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$org->title]['date2'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid AND c.created BETWEEN :date2diff AND :date2',
      array(
        ':gid' => $org->nid,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();

    $sort_array[$org->title]['change'] = gn2_reports_precentages($sort_array[$org->title]['date1'], $sort_array[$org->title]['date2']);
    $sort_array[$org->title]['title'] = $org->title;
  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['org_comments'] = array(
    'Org Comments',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['org_comments'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Grab org user visits.
  $sort_array = array();
  foreach ($orgs as $org) {
    $sort_array[$org->title]['date1'] = db_query('SELECT o.etid, u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid GROUP BY u.access HAVING u.access BETWEEN :date1diff AND :date1',
      array(
        ':gid' => $org->nid,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$org->title]['date2'] = db_query('SELECT o.etid, u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid GROUP BY u.access HAVING u.access BETWEEN :date2diff AND :date2',
      array(
        ':gid' => $org->nid,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();
    $sort_array[$org->title]['change'] = gn2_reports_precentages($sort_array[$org->title]['date1'], $sort_array[$org->title]['date2']);
    $sort_array[$org->title]['title'] = $org->title;
  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['org_visits'] = array(
    'Org Member Visits',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['org_visits'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Grab group info.
  $sort_array = array();
  $types = array(
    'Courses' => 'course',
    'Events' => 'event',
    'Groups' => 'group',
    'Course Groups' => 'course_group',
    'Custom Pages' => 'custom_page',
  );

  foreach ($types as $key => $type) {
    $sort_array[$key]['date1'] = db_query('SELECT created FROM node WHERE type = :type HAVING created BETWEEN :date1diff AND :date1',
      array(
        ':type' => $type,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$key]['date2'] = db_query('SELECT created FROM node WHERE type = :type HAVING created BETWEEN :date2diff AND :date2',
      array(
        ':type' => $type,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();
    $sort_array[$key]['change'] = gn2_reports_precentages($sort_array[$key]['date1'], $sort_array[$key]['date2']);
    $sort_array[$key]['title'] = $key;
  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['groups_created'] = array(
    'Groups Created',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['groups_created'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Group member info.
  $sort_array = array();
  foreach ($types as $key => $type) {
    $sort_array[$key]['date1'] = db_query('SELECT o.created, u.uid, n.type FROM users u INNER JOIN og_membership o ON u.uid = o.etid INNER JOIN node n ON n.nid = o.gid WHERE n.type = :type HAVING o.created BETWEEN :date1diff AND :date1',
      array(
        ':type' => $type,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$key]['date2'] = db_query('SELECT o.created, u.uid, n.type FROM users u INNER JOIN og_membership o ON u.uid = o.etid INNER JOIN node n ON n.nid = o.gid WHERE n.type = :type HAVING o.created BETWEEN :date2diff AND :date2',
      array(
        ':type' => $type,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();
    $sort_array[$key]['change'] = gn2_reports_precentages($sort_array[$key]['date1'], $sort_array[$key]['date2']);
    $sort_array[$key]['title'] = $key;
  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['mems_added'] = array(
    'Group Members Added',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['mems_added'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Grab our content info.
  $content_types = array(
    'Announcements' => 'announcement',
    'News' => 'news',
    'Posts' => 'post',
    'Publications' => 'publication',
  );
  $sort_array = array();
  foreach ($content_types as $key => $type) {
    $sort_array[$key]['date1'] = db_query('SELECT nid FROM node WHERE type = :type AND created BETWEEN :date1diff AND :date1',
      array(
        ':type' => $type,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$key]['date2'] = db_query('SELECT nid FROM node WHERE type = :type AND created BETWEEN :date2diff AND :date2',
      array(
        ':type' => $type,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();
    $sort_array[$key]['change'] = gn2_reports_precentages($sort_array[$key]['date1'], $sort_array[$key]['date2']);
    $sort_array[$key]['title'] = $key;
  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['con_types'] = array(
    'Content Created',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['con_types'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Grab our country info.
  $countries = gn2_reports_country_list();
  $sort_array = array();
  foreach ($countries as $key => $country) {
    $sort_array[$key]['date1'] = db_query('SELECT u.access, f.field_nationality_value FROM users u INNER JOIN field_data_field_nationality f ON u.uid = f.entity_id WHERE f.field_nationality_value = :key HAVING u.access BETWEEN :date1diff AND :date1',
      array(
        ':key' => $key,
        ':date1' => $date_str1,
        ':date1diff' => $date_str1_diff,
      ))->rowCount();

    $sort_array[$key]['date2'] = db_query('SELECT u.access, f.field_nationality_value FROM users u INNER JOIN field_data_field_nationality f ON u.uid = f.entity_id WHERE f.field_nationality_value = :key HAVING u.access BETWEEN :date2diff AND :date2',
      array(
        ':key' => $key,
        ':date2' => $date_str2,
        ':date2diff' => $date_str2_diff,
      ))->rowCount();
    $sort_array[$key]['change'] = gn2_reports_precentages($sort_array[$key]['date1'], $sort_array[$key]['date2']);
    $sort_array[$key]['title'] = $country;
  }
  usort($sort_array, function ($x, $y) {
    return $x['date1'] > $y['date1'] ? -1 : $x['date1'] != $y['date1'];
  });
  $headers['country_visits'] = array(
    'Visits By Country',
    'Date 1: ' . $form_state['values']['gn2_reports_date_field1'],
    'Date 2: ' . $form_state['values']['gn2_reports_date_field2'],
    'Change',
  );
  foreach ($sort_array as $key => $sort_item) {
    $rows['country_visits'][] = array(
      $sort_item['title'],
      $sort_item['date1'],
      $sort_item['date2'],
      $sort_item['change'],
    );
  }

  // Close up our table.
  $output = '';
  foreach ($headers as $key => $header) {
    $variables = array(
      'header' => $header,
      'rows' => $rows[$key],
      'sticky' => TRUE,
      'empty' => 'No results found',
      'attributes' => array(),
      'caption' => '',
      'colgroups' => array(),
    );
    $output .= theme_table($variables);
  }
  $range = variable_set('gn2_reports_range_form', $output);

}

/**
 * Builds our range report.
 */
function gn2_reports_mail_range_output() {
  if (variable_get('gn2_reports_range_form')) {
    return variable_get('gn2_reports_range_form');
  }
}

/**
 * Helper function for formatting percentages.
 */
function gn2_reports_precentages($date1, $date2, $modifier = NULL) {
  $change = '';
  if ($date1 > 0 && $date2 == 0) {
    $change = round(($date1 / 100) * (100 - $modifier), 2) . '%';
  }
  elseif ($date1 == 0 && $date2 > 0) {
    $change = '-' . round(($date2) * (100 - $modifier), 2) . '%';
  }
  elseif ($date1 != 0 && $date2 != 0) {
    if ($date1 > $date2) {
      $change = round(($date1 / $date2) * (100 - $modifier), 2) . '%';
    }
    elseif ($date1 < $date2) {
      $change = '-' . round(($date2 / $date1) * (100 - $modifier), 2) . '%';
    }
  }
  elseif ($date1 == 0 && $date2 == 0) {
    $change = '0%';
  }
  return $change;
}
