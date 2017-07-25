<?php
/**
 * @file
 * Three across panels template.
 */
?>
<div class="gn2-footer layout-wrapper <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class="gn2-footer--col1 col">
    <div class="inner">
      <div class="gn2-footer--col1--info">
        <div class="inner">
          <?php print $content['gn2-footer--col1--info']; ?>
        </div>
      </div>
      <div class="gn2-footer--col1--nav">
        <div class="inner">
          <?php print $content['gn2-footer--col1--nav']; ?>
        </div>
      </div>
    </div>
  </div>
  <div class="gn2-footer--col2 col">
    <div class="inner">
      <div class="gn2-footer--col2--info">
        <div class="inner">
          <?php print $content['gn2-footer--col2--info']; ?>
        </div>
      </div>
      <div class="gn2-footer--col2--nav">
        <div class="inner">
          <div class="gn2-footer--col2--nav--left">
            <?php print $content['gn2-footer--col2--nav--left']; ?>
          </div>
          <div class="gn2-footer--col2--nav--right">
            <?php print $content['gn2-footer--col2--nav--right']; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="gn2-footer--col3 col">
    <div class="inner">
      <div class="gn2-footer--col3--info">
        <div class="inner">
          <?php print $content['gn2-footer--col3--info']; ?>
        </div>
      </div>
      <div class="gn2-footer--col3--nav">
        <div class="inner">
          <?php print $content['gn2-footer--col3--nav']; ?>
        </div>
      </div>
    </div>
  </div>
</div>
