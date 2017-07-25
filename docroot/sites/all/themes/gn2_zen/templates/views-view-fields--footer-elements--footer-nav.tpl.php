<?php

/**
 * @file
 * View template to display the fields in the footer elements footer nav view display.
 */
?>

<?php foreach ($fields as $id => $field): ?>
  <?php
    if ($field->class == 'path') :
      $my_path = $field->content;
    endif;
    if ($field->class == 'nid') :
      $my_nid = $field->content;
    endif;
    if ($field->class == 'title') :
      $my_title = $field->content;
    endif;
  ?>
<?php endforeach; ?>

<?php 
  print '<option value="' . $my_path . '">' . $my_title . '</option>';
?>
