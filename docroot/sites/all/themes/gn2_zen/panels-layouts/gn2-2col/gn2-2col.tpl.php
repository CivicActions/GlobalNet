<?php
/**
 * @file
 * Template for a 2 column panel layout for the Group landing page.
 */
?>

<div class="gn2-2col gn-two-col <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class="sidebar">
    <div class="inner">
      <?php print $content['sidebar']; ?>
    </div>
  </div>
  <div class="main-content">
    <div class="inner">
      <?php print $content['main_content']; ?>
    </div>
  </div>
</div>
