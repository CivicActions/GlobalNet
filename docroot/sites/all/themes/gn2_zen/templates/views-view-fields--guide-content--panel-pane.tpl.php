<?php foreach ($fields as $id => $field): ?>
  <?php // Verify if the current user is Group, Course, Org manager.
  if (_gn2_og_check_groupmanager($row->nid)): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  <?php endif; ?>
<?php endforeach; ?>