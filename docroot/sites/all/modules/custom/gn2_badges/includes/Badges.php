<?php

namespace Drupal\gn2_badges;

use Drupal\Driver\Exception\Exception;

/**
 * The badges class provides functions to interact with the GN2 badges.class.
 */
class Badges implements BadgesInterface {

  /**
   * The level one minimum.
   *
   * @var string
   */
  protected $levelOne;

  /**
   * The level two minimum.
   *
   * @var string
   */
  protected $levelTwo;

  /**
   * The level three minimum.
   *
   * @var string
   */
  protected $levelThree;

  /**
   * The users current Userpoint total.
   *
   * @var int
   */
  protected $totalUserpoints;

  /**
   * The users who's Userpoint we will calculate.
   *
   * @var int
   */
  protected $userId;

  /**
   * The user's badge level.
   *
   * @var string
   */
  protected $userLevel;

  /**
   * badges.class constructor.
   *
   * @param int $uid
   *   The user ID to whom to calculate points.
   */
  public function __construct($uid) {
    $this->levelOne = variable_get('gn2_badges_level_one', 10);
    $this->levelTwo = variable_get('gn2_badges_level_two', 50);
    $this->levelThree = variable_get('gn2_badges_level_two', 51);
    $this->userId = $uid;
    $this->getUserTotals();
    $this->calculateUserLevel();
    $this->levelChange();
  }

  /**
   * {@inheritdoc}
   */
  public function getUserTotals() {
    $userPoints = db_query('SELECT points FROM {userpoints_total} WHERE uid = :uid', [
      ':uid' => $this->userId,
    ])->fetchField();
    $this->totalUserpoints = ($userPoints) ? $userPoints : 1;
  }

  /**
   * {@inheritdoc}
   */
  public function setUserLevel() {
    $transaction = db_transaction();
    try {
      $bid = db_insert('gn2_badges_user_totals')
        ->fields([
          'uid' => $this->userId,
          'level' => $this->userLevel,
          'created' => REQUEST_TIME,
          'changed' => REQUEST_TIME,
        ])->execute();
    }
    catch (Exception $e) {
      $transaction->rollback();
      watchdog_exception('GN2 badges.class', $e, '', [], WATCHDOG_ERROR, NULL);
    }
  }

  /**
   * {@inheritdoc}
   */
  public function updateUserLevel() {
    $transaction = db_transaction();
    try {
      db_update('gn2_badges_user_totals')
        ->fields(['level' => $this->userLevel])
        ->condition('uid', $this->userId)
        ->execute();
    }
    catch (Exception $e) {
      $transaction->rollback();
      watchdog_exception('GN2 badges.class', $e, '', [], WATCHDOG_ERROR, NULL);
    }
  }

  /**
   * {@inheritdoc}
   */
  public function getUserLevel() {
    $userLevel = db_query('SELECT level FROM {gn2_badges_user_totals} WHERE uid = :uid', [
      ':uid' => $this->userId,
    ])->fetchField();
    return $userLevel;
  }

  /**
   * {@inheritdoc}
   */
  public function calculateUserLevel() {
    if ($this->totalUserpoints <= $this->levelOne) {
      $this->userLevel = 'gn2_badges_level_one';
    }
    elseif ($this->totalUserpoints < $this->levelOne && $this->totalUserpoints >= $this->levelTwo) {
      $this->userLevel = 'gn2_badges_level_two';
    }
    else {
      $this->userLevel = 'gn2_badges_level_three';
    }
  }

  /**
   * {@inheritdoc|
   */
  public function levelChange() {
    $currentLevel = $this->getUserLevel();
    if (!$currentLevel) {
      $this->setUserLevel();
      $this->notifyChangedLevel();
    }
    elseif ($currentLevel !== $this->userLevel) {
      $this->updateUserLevel();
      $this->notifyChangedLevel();
    }
  }

  /**
   * {@inheritdoc}
   */
  public function notifyChangedLevel() {
    $badgeName = variable_get($this->userLevel . '_title', $this->userLevel);
    drupal_set_message(t('You have achieved the @badge badge for user participation', [
      '@badge' => $badgeName,
    ]), 'status', TRUE);
  }

}
