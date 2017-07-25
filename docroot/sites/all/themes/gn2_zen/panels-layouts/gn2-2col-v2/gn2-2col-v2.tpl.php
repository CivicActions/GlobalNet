<?php
/**
 * @file
 * Two across panels template.
 */
?>
<div class="gn2-2col-v2 layout-wrapper <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['gn2-2col-v2--header']): ?>
    <div class="gn2-2col-v2--header">
      <div class="inner">
        <?php print $content['gn2-2col-v2--header']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="gn2-2col-v2--col1 col first">
    <div class="inner">
      <?php print $content['gn2-2col-v2--col1']; ?>
    </div>
  </div>
  <div class="gn2-2col-v2--col2 col last">
    <div class="inner">
      <?php print $content['gn2-2col-v2--col2']; ?>
    </div>
  </div>
  <?php if ($content['gn2-2col-v2--footer']): ?>
    <div class="gn2-2col-v2--footer">
      <div class="inner">
        <?php print $content['gn2-2col-v2--footer']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
