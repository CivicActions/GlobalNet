<?php
/**
 * @file
 * Three across panels template.
 */
?>
<div class="gn2-4col layout-wrapper <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['gn2-4col--header']): ?>
    <div class="gn2-4col--header">
      <?php print $content['gn2-4col--header']; ?>
    </div>
  <?php endif; ?>
  <div class="gn2-4col--col1 col first">
    <?php print $content['gn2-4col--col1']; ?>
  </div>
  <div class="gn2-4col--col2">
    <?php print $content['gn2-4col--col2']; ?>
  </div>
  <div class="gn2-4col--col3">
    <?php print $content['gn2-4col--col3']; ?>
  </div>
  <div class="gn2-4col--col4 col last">
    <?php print $content['gn2-4col--col4']; ?>
  </div>
  <?php if ($content['gn2-4col--footer']): ?>
    <div class="gn2-4col--footer">
      <?php print $content['gn2-4col--footer']; ?>
    </div>
  <?php endif; ?>
</div>
