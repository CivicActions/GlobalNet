<?php
/**
 * @file
 * Template for a 2 column-stacked panel layout for the Group landing page
 */
?>

<div class="gn-two-col-stacked <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class = "top">
    <?php print $content['top']; ?>
  </div>
  <div class = "sidebar">
    <?php print $content['sidebar']; ?>
  </div>
  <div class = "main">
      <div class = "main-top">
        <?php print $content['main_top']; ?>
      </div>
      <div class = "main-bottom">
        <?php print $content['main_bottom']; ?>
      </div>
  </div>
  <div class = "footer">
    <?php print $content['footer']; ?>
  </div>
</div>
