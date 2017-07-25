<?php

/**
 * @file
 * Active communities.
 */

/**
 * Query to get active communities depending on their node activities.
 *
 * Relevant nodes are events added to a group, new posts or news.
 */
function gn2_og_active_communities_query_nodes() {
  // Get the most recently modified events, posts and news.
  $query = db_select('node', 'n');
  $query->fields('n', array('changed'));
  $query->condition('n.type', array('event', 'post', 'news'), 'IN');
  $query->orderBy('n.changed', 'DESC');

  gn2_og_active_communities_query_common($query);

  return $query;
}

/**
 * Query to geet active communities depending on their comments activity.
 */
function gn2_og_active_communities_query_comments() {
  // Get the most recently commented on nids.
  $query = db_select('comment', 'n');
  $query->fields('n', array('cid', 'changed'));
  $query->orderBy('n.changed', 'DESC');

  gn2_og_active_communities_query_common($query);

  return $query;
}

/**
 * Common settings in the Active Communities queries.
 */
function gn2_og_active_communities_query_common($query) {
  // Active group types.
  $groups = array(
    'group',
  );
  $gid = arg(1);
  // No matter what we want to connect the nid of the relevant content
  // to the parent group through the og_membership table, And
  // we want to connect that gid back again with a node for node_access to
  // work.
  $query->join('og_membership', 'm', "n.nid = m.etid");
  $query->fields('m', array('gid'));
  $query->condition('m.entity_type', 'node');

  $query->join('node', 'n2', 'n2.nid = m.gid');
  $query->join('field_data_field_parent_organization', 'po', 'n2.nid = po.entity_id');
  $query->fields('n2', array('nid', 'title'));
  $query->condition('po.field_parent_organization_target_id', $gid, '=');
  $query->condition('n2.type', $groups, 'IN');

  // We only want 10 results.
  $query->range(0, 10);
  // This tags activates node access altering on the query.
  $query->addTag('node_access');
  // Our own tag in case we need to identify the query for some reason.
  $query->addTag('gn2_active_communities');
}

/**
 * Html to display nodes in the active communities block.
 */
function gn2_og_active_communities_node_output($node) {
  $output = '<div class="item active-communities--item ' . $node->type . '">';
  $output .= '<div class="active-communities--item--title">';
  $output .= l($node->title, 'node/' . $node->nid);
  $output .= '</div>';
  $output .= '<div class="active-communities--item--summary">';
  $output .= gn2_og_active_communities_node_trimmed_body($node);
  $output .= l(t('Read more'), 'node/' . $node->nid);
  $output .= '</div>';
  $output .= '</div>';

  return $output;
}

/**
 * Trimming the node body for display purposes.
 */
function gn2_og_active_communities_node_trimmed_body($node) {
  $body = field_get_items('node', $node, 'body');
  if ($body) {
    if (!empty($body[0]['safe_value'])) {
      $text = $body[0]['safe_value'];
    }
    else {
      $text = $body[0]['value'];
    }
    $body_summary = strip_tags($text);
    $pos = strlen($body_summary);
    if ($pos > 140) {
      $pos = strpos($body_summary, ' ', 140);
    }
    $body_summary_trimmed = substr($body_summary, 0, $pos);
    if (strlen($body_summary) > 140) {
      $body_summary_trimmed = $body_summary_trimmed . '...';
    }

    return $body_summary_trimmed;
  }
}

/**
 * Merge results from multiple queries.
 *
 * Get the latest modified withtout duplicates.
 *
 * @return array
 *   An array of nids as keys and the changed timestamp as the value.
 */
function gn2_og_active_communities_merge_results($result1, $result2) {
  $final = array();
  $results = array($result1, $result2);

  // Sorting through duplicates and creating a format for sorting.
  foreach ($results as $result) {
    foreach ($result as $row) {
      if (!isset($final[$row->nid])) {
        $final[$row->nid] = $row->changed;
      }
      elseif ($final[$row->nid] < $row->changed) {
        $final[$row->nid] = $row->changed;
      }
    }
  }

  $error = arsort($final);

  return $final;
}
