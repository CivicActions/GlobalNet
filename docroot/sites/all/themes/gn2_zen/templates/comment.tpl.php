<?php
/**
 * @file
 * Returns the HTML for comments.
 *
 * Complete documentation for this file is available online.
 *
 * @see https://drupal.org/node/1728216
 */
?>

<article class="gn2-3col comment-container <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="gn2-3col--col1 comment-left comment-column">
    <div class="inner">
      <div class="comment-author-image">
         <?php print $picture; ?>
      </div><!-- .comment-author-image -->
    </div><!-- .inner -->
  </div><!-- .comment-left .comment-column -->

  <div class="gn2-3col--col2 comment-center comment-column">
    <div class="inner">
      <header class="comment-header">
        <p class="submitted">
          <?php
            print '<h4 class="comment-author-name">' . $author_name . '</h4>';
            print ' <span class = "comment__date">' . $timeago . '</span>';
          ?>
        </p>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h3<?php print $title_attributes; ?>>
            <?php print $title; ?>
            <?php if ($new): ?>
              <mark class="new"><?php print $new; ?></mark>
            <?php endif; ?>
          </h3>
        <?php elseif ($new): ?>
          <mark class="new"><?php print $new; ?></mark>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($status == 'comment-unpublished'): ?>
          <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
        <?php endif; ?>
      </header><!-- .comment-header -->

      <div class="comment-content">
        <?php
          // Hiding comments and links now so we can render them later.
          hide($content['links']);
          print render($content);
        ?>
        <?php if ($signature): ?>
          <footer class="user-signature clearfix">
            <?php print $signature; ?>
          </footer>
        <?php endif; ?>
      </div><!-- .comment-content -->
    </div><!-- .inner -->
  </div><!-- .comment-center .comment-column -->

  <div class="gn2-3col--col3 comment-right comment-column">
    <div class="inner">
      <div class="icon-links">
        <?php print $private_message; ?>
      </div>
      <?php print render($content['links']) ?>
    </div><!-- .inner -->
  </div><!-- .comment-links -->

  <div class="comment-clear"></div>

</article>
