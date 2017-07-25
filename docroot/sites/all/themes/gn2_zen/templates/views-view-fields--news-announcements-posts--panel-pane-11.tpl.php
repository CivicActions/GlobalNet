<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 */
?>

<?php foreach ($fields as $id => $field): ?>
  <?php
    if ($field->class == 'title') : $my_title = $field->content; endif;
    if ($field->class == 'uid') : $my_uid = $field->raw; endif;
    if ($field->class == 'created') : $my_created = $field->content; endif;
    if ($field->class == 'nothing-1') : $my_fullname = $field->content; endif;
    if ($field->class == 'view-user') : $my_fullname_linked = $field->content; endif;
    if ($field->class == 'organization-short') : $my_orgname = $field->content; endif;
  ?>  
<?php endforeach; ?>

<?php
  // if logged in, use the linked name; otherwise, just use the name.
  global $user;
  if ($user->uid) :
    $my_fullname_display = $my_fullname_linked;
  else :
    $my_fullname_display = $my_fullname;
  endif;
?>

<?php print $my_title; ?>

<span class="teaser-header--parent-org">
  From <?php print $my_orgname; ?> |
</span>

<span class="teaser-header--author">
  <?php 
    if ($my_uid == 0) : 
      print 'anonymous';
    else : 
      print 'by&nbsp;' . $my_fullname_display;
    endif;
    print '&nbsp;|';
  ?>
</span>

<span class="teaser-header--dateposted">
  <?php print $my_created; ?>
</span>
