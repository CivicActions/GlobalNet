
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  
<?php
global $user;
$ban = TRUE;
if ($user->uid == arg(1) && $header && strpos($header, 'Contact') !== FALSE) {
  $ban = FALSE;
  $loaded_user = user_load($user->uid);
  if (isset($loaded_user->field_facebook[LANGUAGE_NONE]) ||
    isset($loaded_user->field_linkedin[LANGUAGE_NONE]) ||
    isset($loaded_user->field_twitter[LANGUAGE_NONE]) ||
    isset($loaded_user->field_telephone[LANGUAGE_NONE]) ||
    isset($loaded_user->field_website[LANGUAGE_NONE])) {
      $ban = TRUE;
    }
}
?>
  <?php if ($ban && $header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

    </div><?php /* class view */ ?>
