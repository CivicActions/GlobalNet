<?php
/**
 * @file
 * Template for a 2 column panel layout for the Home page.
 */
?>

<div class="panels-layout page-layout homepage-layout <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class="homepage-layout--top">
    <div class="homepage-layout--top--left">
      <div class="panels-layout--region-inner"><?php print $content['homepage_layout__top__left']; ?></div>
    </div>
    <div class="homepage-layout--top--right">
      <div class="panels-layout--region-inner"><?php print $content['homepage_layout__top__right']; ?></div>
    </div>
  </div>
  <div class = "homepage-layout--search">
    <div class="panels-layout--region-inner" ><?php print $content['homepage_layout__search']; ?></div>
  </div>
  <div class = "homepage-layout--main">
    <div class="panels-layout--region-inner"><?php print $content['homepage_layout__main']; ?></div>
  </div>
</div>