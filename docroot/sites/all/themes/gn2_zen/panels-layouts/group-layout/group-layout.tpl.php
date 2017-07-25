<?php
/**
 * @file
 * Template for a 2 column panel layout for the Group landing page.
 */
?>

<div class="panels-layout page-layout sidebar-right group <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class = "main">
    <div class="panels-layout--column-inner">
      <div class = "group__main--top-left">
        <div class="panels-layout--region-inner">
          <?php print $content['group_maintopleft']; ?>
        </div>
      </div>
      <div class = "group__main--top-right">
        <div class="panels-layout--region-inner">
          <?php print $content['group_maintopright']; ?>
        </div>
      </div>
      <div class = "group__main--banner">
        <div class="panels-layout--region-inner">
          <?php print $content['group_mainbanner']; ?>
        </div>
      </div>
      <div class = "group__main--tabs">
        <div class="panels-layout--region-inner">
          <?php print $content['group_maintabs']; ?>
        </div>
      </div>
    </div>
  </div>
  <div class = "sidebar">
    <div class="panels-layout--column-inner panels-layout--region-inner">
      <?php print $content['group_sidebar']; ?>
    </div>
  </div>
</div>
