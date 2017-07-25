<?php
/**
 * @file
 * Template for a 2 column panel layout for the Organization landing page.
 */
?>

<div class="panels-layout page-layout sidebar-right org <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class = "main">
    <div class="panels-layout--column-inner">
      <div class = "main__top">
        <div class="panels-layout--region-inner">
          <?php print $content['main_top']; ?>
        </div>
      </div>
      <div class = "main__upper-tabs">
        <div class="panels-layout--region-inner">
          <?php print $content['main_uppertabs']; ?>
        </div>
      </div>
      <div class = "main__active-communities">
        <div class="panels-layout--region-inner">
          <?php print $content['main_activecommunities']; ?>
        </div>
      </div>
      <div class = "main__lower-tabs">
        <div class="panels-layout--region-inner">
          <?php print $content['main_lowertabs']; ?>
        </div>
      </div>
    </div>
  </div>
  <div class = "sidebar">
    <div class="panels-layout--column-inner">
      <div class = "sidebar__top">
        <div class="panels-layout--region-inner">
          <?php print $content['sidebar_top']; ?>
        </div>
      </div>
      <div class = "sidebar__logo org-brand">
        <div class="panels-layout--region-inner">
          <?php print $content['sidebar_logo']; ?>
        </div>
      </div>
      <div class = "sidebar__title org-brand">
        <div class="panels-layout--region-inner">
          <?php print $content['sidebar_title']; ?>
        </div>
      </div>
      <div class = "sidebar__bottom">
        <div class="panels-layout--region-inner">
          <?php print $content['sidebar_orginfo']; ?>
        </div>
      </div>
    </div>
  </div>
</div>
