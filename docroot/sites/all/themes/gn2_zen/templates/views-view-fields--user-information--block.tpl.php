<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 */
?>

<?php
$var_name = $fields['field_name_first']->content . ' ' . $fields['field_name_last']->content;
$var_name = strip_tags($var_name);
global $user;
$is_drupal_admin = in_array('administrator', $user->roles);
?>

<div class="header__user_links">
  <div class="header__user_links__my_account notranslate">
    <?php print l(t('<span>My GlobalNET</span>'), 'account', array('html' => TRUE)) ?>
  </div>
  <?php if ($is_drupal_admin) : ?>
    <div class="header__user_links__dashboard">
      <?php print l(t('<span>My Dashboard</span>'), 'users/dashboard', array('html' => TRUE)) ?>
    </div>
  <?php endif ?>
  <div class="header__user_links__logout">
    <?php print l(t('<span>Log out</span>'), 'user/logout', array('html' => TRUE, 'class' => array('logout-link'))) ?>
  </div>
  <div class="header__user_links__help">
    <?php print l(t('<span>Help</span>'), 'guide', array('html' => TRUE, 'class' => array('help-link'))) ?>
  </div>
</div>
