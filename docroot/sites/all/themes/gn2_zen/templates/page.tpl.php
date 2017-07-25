<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 *
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">

  <div id="header-wrapper" class="light-text">
    <header class="header" id="header" role="banner">
      <?php if ($site_name || $site_slogan) : ?>
        <div class="header__name-and-slogan" id="name-and-slogan">
          <?php if ($site_name) : ?>
            <h1 class="header__site-name" id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home">
                <span><?php print $site_name; ?></span>
              </a>
            </h1>
          <?php endif; ?>
          <?php if ($site_slogan) : ?>
            <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
          </div>
      <?php endif; ?>
      <?php if ($secondary_menu): ?>
        <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
          <?php print theme('links__system_secondary_menu', array(
              'links' => $secondary_menu,
              'attributes' => array(
                'class' => array('links', 'inline', 'clearfix'),
              ),
              'heading' => array(
                'text' => $secondary_menu_heading,
                'level' => 'h2',
                'class' => array('element-invisible'),
              ),
            )); ?>
        </nav>
      <?php endif; ?>
      <?php
      // @codingStandardsIgnoreStart
      //  @TODO: Is the next required?
      // @codingStandardsIgnoreEnd
      ?>
      <?php if ($logo): ?>
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
        <a href="<?php print $front_page; ?>" title="<?php print t('GlobalNet Home'); ?>" rel="home" class="header__logo" id="logo">
      <?php endif; ?>
      <?php print render($page['header']); ?>
      <div class = "header-user-info">
        <?php print render($page['header_user']); ?>
      </div>
    </header>
  </div> <!-- End header-wrapper -->

  <div id="main-wrapper">
    <div class="navigation-wrapper">
      <div class="inner">
        <?php print render($page['navigation']); ?>
      </div>
    </div>
    <div id="mobile-nav-wrapper" class="mobile-navigation-wrapper">
    <!-- Mobile menu is attached to this div -->
    </div>

    <div id="main">

      <div id="content" class="column" role="main">
        <?php print render($page['highlighted']); ?>
        <?php print $breadcrumb; ?>
          <a id="main-content"></a>
        <?php print render($title_prefix); ?>

        <?php
            print '<h1 class="page__title title" id="page-title">' . $title . '</h1>';
        ?>

        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div>

      <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
      ?>

      <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
      <?php endif; ?>

    </div> <!-- End main -->
  </div> <!--End main wrapper -->

  <!-- Start #footer-container -->
  <div id="footer-container">
    <!-- Start #footer-wrapper -->
    <div id="footer-wrapper">
      <div class="footer-placeholder">&nbsp;</div>
        <footer id="footer">
          <?php print render($footer_org); ?>
        </footer>
      </div>
    </div>
    <!-- End #footer-wrapper -->
  </div>
  <!-- End #footer-container -->


<?php print render($page['bottom']);
  /*print_r($node);*/
?>
