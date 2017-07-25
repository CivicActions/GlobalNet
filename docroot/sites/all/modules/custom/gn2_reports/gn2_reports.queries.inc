<?php
/**
 * @file
 * Code for the gn2_reports.queries.inc.
 */

/**
 * Builds our site usage report.
 */
function _gn2_reports_query() {
  // Implement heavy caching to avoid querying every page load.
  $output = &drupal_static(__FUNCTION__);
  if (!isset($output)) {
    if ($cache = cache_get('gn2_reports_admin_report')) {
      $output = $cache->data;
    }
    else {
      // Grab all orgs.
      $headers = array();
      $rows = array();
      $orgs = db_select('node', 'title')
        ->fields('title')
        ->condition('type', 'organization', '=')
        ->execute()->fetchAll();

      // Start our table, and grab org user info.
      $sort_array = array();
      foreach ($orgs as $org) {
        $sort_array[$org->title]['mem_all'] = db_query('SELECT u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['mem_new'] = db_query('SELECT o.etid, o.created FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.entity_type = \'user\' GROUP BY o.created HAVING o.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['mem_thirty'] = db_query('SELECT o.etid, u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.entity_type = \'user\' GROUP BY u.access HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['mem_sixty'] = db_query('SELECT o.etid, u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.entity_type = \'user\' GROUP BY u.access HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 60 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['mem_ninety'] = db_query('SELECT o.etid, u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.entity_type = \'user\' GROUP BY u.access HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 120 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['mem_year'] = db_query('SELECT o.etid, u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.entity_type = \'user\' GROUP BY u.access HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 365 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['title'] = $org->title;
      }
      usort($sort_array, function ($x, $y) {
        return $x['mem_all'] > $y['mem_all'] ? -1 : $x['mem_all'] != $y['mem_all'];
      });
      $headers['org_user'] = array(
        'Org Users',
        'All',
        'New Mem last 30',
        'Mem visit last 30',
        'Mem visit last 60',
        'Mem visit last 120',
        'Mem visit last Yr',
      );
      foreach ($sort_array as $key => $sort_item) {
        $rows['org_user'][] = array(
          $sort_item['title'],
          $sort_item['mem_all'],
          $sort_item['mem_new'],
          $sort_item['mem_thirty'],
          $sort_item['mem_sixty'],
          $sort_item['mem_ninety'],
          $sort_item['mem_year'],
        );
      }

      // Grab org comment info.
      $sort_array = array();
      foreach ($orgs as $org) {
        $sort_array[$org->title]['com_all'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['com_thirty'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid HAVING c.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['com_sixty'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid HAVING c.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 60 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['com_ninety'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid HAVING c.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 120 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['com_year'] = db_query('SELECT c.created FROM comment c INNER JOIN node n ON n.nid = c.nid INNER JOIN og_membership o ON n.nid = o.etid WHERE o.entity_type = \'node\' AND o.gid = :gid HAVING c.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 365 DAY))',
          array(':gid' => $org->nid))->rowCount();

        $sort_array[$org->title]['total_points'] = db_query('SELECT SUM(u.points) AS points FROM userpoints_total u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid AND o.entity_type = \'user\'',
          array(':gid' => $org->nid))->fetchAll();

        $sort_array[$org->title]['title'] = $org->title;

        $all_mem = db_query('SELECT u.access FROM users u INNER JOIN og_membership o ON u.uid = o.etid WHERE o.gid = :gid',
          array(':gid' => $org->nid))->rowCount();
      }
      usort($sort_array, function ($x, $y) {
        return $x['com_all'] > $y['com_all'] ? -1 : $x['com_all'] != $y['com_all'];
      });
      $headers['engagement'] = array(
        'Org User Engagement',
        'All Comments',
        'Comments last 30 days',
        'Comments last 60 days',
        'Comments last 120 days',
        'Comments yr',
        'Userpoints',
        'User Engagement',
      );
      foreach ($sort_array as $key => $sort_item) {
        $engagement = gn2_reports_precentages($sort_item['total_points'][0]->points, $all_mem, 99);
        $rows['engagement'][] = array(
          $sort_item['title'],
          $sort_item['com_all'],
          $sort_item['com_thirty'],
          $sort_item['com_sixty'],
          $sort_item['com_ninety'],
          $sort_item['com_year'],
          $sort_item['total_points'],
          $engagement,
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
        $sort_array[$key]['group_total'] = db_query('SELECT nid FROM node WHERE type = :type ',
          array(':type' => $type))->rowCount();

        $sort_array[$key]['group_month'] = db_query('SELECT created FROM node WHERE type = :type HAVING created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':type' => $type))->rowCount();

        $sort_array[$key]['group_mem_thirty'] = db_query('SELECT o.created, u.uid, n.type FROM users u INNER JOIN og_membership o ON u.uid = o.etid INNER JOIN node n ON n.nid = o.gid WHERE n.type = :type HAVING o.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':type' => $type))->rowCount();

        $sort_array[$key]['group_mem_qtr'] = db_query('SELECT o.created, u.uid, n.type FROM users u INNER JOIN og_membership o ON u.uid = o.etid INNER JOIN node n ON n.nid = o.gid WHERE n.type = :type HAVING o.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 120 DAY))',
          array(':type' => $type))->rowCount();

        $sort_array[$key]['group_mem_yr'] = db_query('SELECT o.created, u.uid, n.type FROM users u INNER JOIN og_membership o ON u.uid = o.etid INNER JOIN node n ON n.nid = o.gid WHERE n.type = :type HAVING o.created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 365 DAY))',
          array(':type' => $type))->rowCount();

        $sort_array[$key]['title'] = $key;
      }
      usort($sort_array, function ($x, $y) {
        return $x['group_total'] > $y['group_total'] ? -1 : $x['group_total'] != $y['group_total'];
      });
      $headers['group_info'] = array(
        'Groups',
        'Total Nodes',
        'Nodes Created Last Month',
        'Mem added 30',
        'Mem added Qtr',
        'Mem added yr',
      );
      foreach ($sort_array as $key => $sort_item) {
        $rows['group_info'][] = array(
          $sort_item['title'],
          $sort_item['group_total'],
          $sort_item['group_month'],
          $sort_item['group_mem_thirty'],
          $sort_item['group_mem_qtr'],
          $sort_item['group_mem_yr'],
        );
      }

      // Grab org content info.
      $sort_array = array();
      $content_types = array(
        'Announcements' => 'announcement',
        'News' => 'news',
        'Posts' => 'post',
        'Publications' => 'publication',
      );
      foreach ($content_types as $key => $type) {
        $sort_array[$key]['content_total'] = db_query('SELECT nid FROM node WHERE type = :type ',
          array(':type' => $type))->rowCount();

        $sort_array[$key]['content_month'] = db_query('SELECT nid FROM node WHERE type = :type AND created > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':type' => $type))->rowCount();

        $visits_raw = db_query('SELECT SUM(nc.totalcount) as total FROM node_counter nc INNER JOIN node n ON n.nid = nc.nid WHERE n.type = :type',
          array(':type' => $type))->fetchAll();
        foreach ($visits_raw as $vm) {
          $sort_array[$key]['visits'] = !empty($vm->total) ? $vm->total : 0;
        }

        $sort_array[$key]['title'] = $key;
      }
      usort($sort_array, function ($x, $y) {
        return $x['content_total'] > $y['content_total'] ? -1 : $x['content_total'] != $y['content_total'];
      });
      $headers['content_info'] = array(
        'Content Types',
        'Total Nodes',
        'Nodes Added Last Month',
        'Total Number of User Visits',
      );
      foreach ($sort_array as $key => $sort_item) {
        $rows['content_info'][] = array(
          $sort_item['title'],
          $sort_item['content_total'],
          $sort_item['content_month'],
          $sort_item['visits'],
        );
      }

      // Grab our country info.
      $countries = gn2_reports_country_list();
      $sort_array = array();
      foreach ($countries as $key => $country) {
        $sort_array[$country]['u_visit_thirty'] = db_query('SELECT u.access, f.field_nationality_value FROM users u INNER JOIN field_data_field_nationality f ON u.uid = f.entity_id WHERE f.field_nationality_value = :key HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 30 DAY))',
          array(':key' => $key))->rowCount();

        $sort_array[$country]['u_visit_qtr'] = db_query('SELECT u.access, f.field_nationality_value FROM users u INNER JOIN field_data_field_nationality f ON u.uid = f.entity_id WHERE f.field_nationality_value = :key HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 120 DAY))',
          array(':key' => $key))->rowCount();

        $sort_array[$country]['u_visit_yr'] = db_query('SELECT u.access, f.field_nationality_value FROM users u INNER JOIN field_data_field_nationality f ON u.uid = f.entity_id WHERE f.field_nationality_value = :key HAVING u.access > UNIX_TIMESTAMP(DATE_SUB(NOW(), INTERVAL 365 DAY))',
          array(':key' => $key))->rowCount();

        $sort_array[$country]['title'] = $country;
      }
      usort($sort_array, function ($x, $y) {
        return $x['u_visit_thirty'] > $y['u_visit_thirty'] ? -1 : $x['u_visit_thirty'] != $y['u_visit_thirty'];
      });
      $headers['country_info'] = array(
        'Visits by Country',
        '30 days',
        '120 days',
        'Year',
      );
      foreach ($sort_array as $key => $sort_item) {
        if ($sort_item['u_visit_yr'] > 0) {
          $rows['country_info'][] = array(
            $sort_item['title'],
            $sort_item['u_visit_thirty'],
            $sort_item['u_visit_qtr'],
            $sort_item['u_visit_yr'],
          );
        }
      }
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

      cache_set('gn2_reports_admin_report', $output, 'cache');
    }
  }
  return $output;
}
