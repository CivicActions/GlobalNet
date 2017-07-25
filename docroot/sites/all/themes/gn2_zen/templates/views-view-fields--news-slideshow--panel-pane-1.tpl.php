<?php
if (trim($fields['field_main_image']->content) == '<div class="field-content"></div>') {
  if (trim($fields['field_thumbnail_image']->content) == '<div class="field-content"></div>') {
    $fields['field_main_image']->content = '<img class="file-icon" src="/sites/all/themes/gn2_zen/images/image-placeholder-slider.png">';
  }
  else {
    $fields['field_main_image']->content = $fields['field_thumbnail_image']->content;
  }
}
unset($fields['field_thumbnail_image']);
?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
