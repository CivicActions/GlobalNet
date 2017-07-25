<?php
/**
 * @file
 * Template for a 2 column-stacked panel layout.
 */
?>

<div class="panels-layout page-layout sidebar-left gn-two-col-stacked-page <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class="top">
    <div class="panels-layout--column-inner panels-layout--region-inner">
      <?php print $content['top']; ?>
    </div>
  </div>
  <div class="sidebar">
    <div class="panels-layout--column-inner panels-layout--region-inner">
      <?php print $content['sidebar']; ?>
    </div>
  </div>
  <div class="main">
    <div class="panels-layout--column-inner">
      <div class="main-top">
        <div class="panels-layout--region-inner">
          <?php print $content['main_top']; ?>
        </div>
      </div>
      <div class="main-bottom">
        <div class="panels-layout--region-inner">
          <?php print $content['main_bottom']; ?>
        </div>
      </div>
    </div>
  </div>
  <div class="footer">
    <div class="panels-layout--column-inner panels-layout--region-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>
</div>
