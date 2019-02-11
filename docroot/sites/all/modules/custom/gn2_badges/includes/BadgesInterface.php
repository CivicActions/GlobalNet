<?php

namespace Drupal\gn2_badges;

/**
 * Interface file for the Badges class.
 */
interface BadgesInterface {

  /**
   * Gets the user's Userpoint total points.
   */
  public function getUserTotals();

  /**
   * Set the user's Badge level.
   */
  public function setUserLevel();

  /**
   * Updates the user's Badge level.
   */
  public function updateUserLevel();

  /**
   * Get the user's Badge level.
   */
  public function getUserLevel();

  /**
   * Calculate the user's Badge level.
   */
  public function calculateUserLevel();

  /**
   * Determine if the user's level has changed.
   */
  public function levelChange();

  /**
   * Notify the user if their level has changed.
   */
  public function notifyChangedLevel();

}
