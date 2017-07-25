<?php
/**
 * @file
 * Displays the Group info.
 *
 * Available variables:
 * - $title: The Group title as a link.
 * - $gid: The Group ID.
 * - $manager: A unordered list of Group managers.
 * - $man_title: The plural formatted title for managers.
 * - $links: A unordered list with links to the Org Dashboard and Group search.
 *
 * @ingroup themeable
 */
?>
<section>
  <h2><?php print $title; ?></h2>
  <h3><?php print t('Group ID');?>: <?php print $gid; ?></h3>
  <div class="managers" style="margin-bottom: 30px;">
    <b><?php print $man_title; ?>:</b>
    <?php print $managers; ?>
  </div>
  <?php print $links; ?>
</section>
