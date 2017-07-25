<?php
/**
 * @file
 * Template for user poll results (casted votes).
 */
?>
<div class="gn2-poll-results gn2-poll-results--user">
  <h2 class="gn2-poll-results__title">
    <?php print t('Completed polls'); ?>
  </h2>
  <div class="gn2-poll-results__results-wrapper">
    <?php if (empty($results)) : ?>
    <div class="gn2-poll-results__results gn2-poll-results__results--empty">
      <p class="gn2-poll-results__message-empty">
        <?php print t('You have not participated on a poll yet.'); ?>
      </p>
    </div>
    <?php else : ?>
    <div class="gn2-poll-results__results">
      <?php foreach ($results as $poll_result) : ?>
      <div class="gn2-poll-results__result">
        <div class="gn2-poll-results__poll">
          <h3 class="gn2-poll-results__poll-title">
            <?php print $poll_result->title; ?>
          </h3>
          <time class="gn2-poll-results__poll-date" datetime="<?php print format_date($poll_result->created, 'custom', 'd M Y'); ?>">
            <?php print format_date($poll_result->timestamp, 'custom', 'd M Y'); ?>
          </time>
        </div>
        <div class="gn2-poll-results__vote">
          <span class="gn2-poll-results__vote-text">
            <?php print t('You Voted "!vote"', array('!vote' => $poll_result->chtext)); ?>
          </span>
          <time class="gn2-poll-results__vote-date" datetime="<?php print format_date($poll_result->timestamp, 'custom', 'd M Y'); ?>">
            <?php print t('on !date', array('!date' => format_date($poll_result->timestamp, 'custom', 'd M Y'))); ?>
          </time>
        </div>
        <div class="gn2-poll-results__link-wrapper">
          <?php print l(t('View result »'), "node/{$poll_result->nid}", array('attributes' => array('class' => array('gn2-poll-results__link')))); ?>
        </div>
      </div>
      <?php endforeach; ?>
    </div>
    <?php endif; ?>
  </div>
</div>
