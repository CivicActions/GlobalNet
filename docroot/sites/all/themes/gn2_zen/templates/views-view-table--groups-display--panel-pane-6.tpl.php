<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?><?php print $attributes; ?>>
   <?php if (!empty($title) || !empty($caption)) : ?>
     <caption><?php print $caption . $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)) : ?>
    <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>
          <?php if ($field != "nid") { ?>
          <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?> scope="col">
            <?php print $label; ?>
          </th>
          <?php } ?>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php endif; ?>
  <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
      <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
        <?php
        $is_group_manager = FALSE;
        foreach ($row as $field => $content): ?>
          <?php 
          if ($field == "nid") {
            $roles = og_get_user_roles('node', intval($content));
            if (in_array('group_manager', $roles) || in_array('org_manager', $roles)) {
              $is_group_manager = TRUE;
            }
          }
          else {
          ?>
          <td class="<?php if ($is_group_manager) {print "is-group-manager ";} if ($field_classes[$field][$row_count]) { print ''. $field_classes[$field][$row_count] . '" '; } ?>" 
            <?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
            <?php print $content; ?>
          </td>
          <?php
          }
          if ($field == "title") {
            $is_group_manager = FALSE;
          }
          ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>


