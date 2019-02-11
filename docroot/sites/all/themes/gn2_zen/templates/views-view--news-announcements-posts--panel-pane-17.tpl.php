<?php

/**
 * @file
 * Default simple view template.
 */

// If logged in, use the linked name; otherwise, just use the name.
global $user;
$username = '';
$name = '';
if (isset($view->style_plugin->row_tokens[0]['[name]'])) {
  $username = $view->style_plugin->row_tokens[0]['[name]'];
}
if (isset($view->style_plugin->row_tokens[0]['[view_user_1]'])) {
  $name = $view->style_plugin->row_tokens[0]['[view_user_1]'];
}
if (empty($user->uid)) {
  if (isset($view->style_plugin->row_tokens[0]['[field_name_first]'])) {
    $name = $view->style_plugin->row_tokens[0]['[field_name_first]'];
  }
  if (isset($view->style_plugin->row_tokens[0]['[field_name_last]'])) {
    $name .= ' ' . $view->style_plugin->row_tokens[0]['[field_name_last]'];
  }
}
?>

<span class="teaser-header--parent-org">
  From <?php print !empty($view->style_plugin->row_tokens[0]['[organization_short]']) ? $view->style_plugin->row_tokens[0]['[organization_short]'] : ''; ?> |
</span>

<span class="teaser-header--author">
  <?php
    if ($username == 'Anonymous') {
      print 'anonymous';
    } else {
      print 'by&nbsp;' . $name;
    }
    print '&nbsp;|';
  ?>
</span>

<span class="teaser-header--dateposted">
  <?php print !empty($view->style_plugin->row_tokens[0]['[created]']) ? $view->style_plugin->row_tokens[0]['[created]'] : ''; ?>
</span>
