<?php
/**
 * @file
 * Template for registration header link
 */
?>
<div class="header__anon_links<?php print ( $auth ) ? ' auth' : ' anon'; ?>">
  <?php if ($cac) : ?>
  <div class="cac_link"><?php print $cac; ?></div>
  <?php endif; ?>
  <?php if ($fpass) : ?>
  <div class="forgot_pass"><?php print $fpass; ?></div>
  <?php endif; ?>
  <?php if ($reg) : ?>
  <div class="register"><?php print $reg; ?></div>
  <?php endif; ?>
</div>