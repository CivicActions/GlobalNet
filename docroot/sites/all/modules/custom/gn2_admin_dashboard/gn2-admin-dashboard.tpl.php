<?php
/**
 * @file
 * Display the Admin Dashboard.
 *
 * Available variables:
 * - $links: An HTML list of adminstrative links.
 * - $help: The Help navigation.
 */
?>
<article class="page-users-dashboard gn-two-col-stacked">
  <section class="top">
    <?php if ($links != '<div class="item-list"></div>'): ?>
    <section class="dashboard-links">
      <strong>Group ID: <?php print arg(1);?></strong><br><br>
      <h2 class="pane-title">Administrative Links</h2>
      <div class="fancy-bullets"><?php print $links;?></div>
    </section>
    <?php endif; ?>
    <h2 class="pane-title">Help for Managers</h2>
    <p>Click on the Help category on the left to find help and guidelines for GlobalNET administrators and managers</p>
    <br>
  </section>
  <aside class="sidebar help">
    <div class="help-nav"><?php print $help;?></div>
  </aside>
  <section class="main">
    <div id="help-description"></div>
  </section>
</article>
