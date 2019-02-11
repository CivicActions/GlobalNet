<?php
/**
 * @file
 * Displays the feedback link block.
 *
 * Available variables:
 * - $text: The description text.
 * - $link: The HTML link to the feedback form.
 */

?>
<div class="panel-pane pane-custom pane-3 panel-pane block__highlighted--darkbg">
  <div class="inner pane-inner"> 
    <?php if ($text) : ?>
      <?php print $text; ?>
    <?php endif; ?>
    <?php if ($link) : ?>
      <?php print $link; ?>
    <?php endif; ?>
  </div>
</div>
