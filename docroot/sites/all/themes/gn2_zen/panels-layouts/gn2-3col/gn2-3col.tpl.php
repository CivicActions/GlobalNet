<?php
/**
 * @file
 * Three across panels template.
 */
?>
<div class="gn2-3col layout-wrapper <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['gn2-3col--header']): ?>
    <div class="gn2-3col--header">
      <?php print $content['gn2-3col--header']; ?>
    </div>
  <?php endif; ?>
  <div class="gn2-3col--col1 col column first">
    <?php print $content['gn2-3col--col1']; ?>
  </div>
  <div class="gn2-3col--col2 col column second middle">
    <?php print $content['gn2-3col--col2']; ?>
  </div>
  <div class="gn2-3col--col3 col column last">
    <?php print $content['gn2-3col--col3']; ?>
  </div>
  <?php if ($content['gn2-3col--footer']): ?>
    <div class="gn2-3col--footer">
      <?php print $content['gn2-3col--footer']; ?>
    </div>
  <?php endif; ?>
</div>
