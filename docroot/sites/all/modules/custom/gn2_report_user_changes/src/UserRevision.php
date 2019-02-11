<?php
/**
 * @file
 * Given a timestamp, find the oldest revision for a user.
 */

namespace GN2ReportUserChanges;

/**
 * UserRevision.
 */
class UserRevision {
  private $uid;
  private $timestamp;

  /**
   * Seach modes for revisions.
   *
   * The timestamp given could be looking for the next newest revision
   * (The beginning of a range), or from the bottom up (the end of a range).
   * This variable determines the kind of search, by default we are doing the
   * first kind of search unless the setEnd() function is called.
   */
  private $beginning = TRUE;

  private $revision;

  /**
   * Constructor.
   */
  public function __construct($uid, $timestamp) {
    $this->setUid($uid);
    $this->setTimestamp($timestamp);
  }

  /**
   * Look from the bottom up.
   */
  public function setEnd() {
    $this->beginning = FALSE;
  }

  /**
   * Get the oldest revision of a user given the timestamp.
   */
  public function getRevision($vid) {
    $query = db_select('user_revision', 'u');
    $query->fields('u', array('vid'));
    $query->condition('u.uid', $this->uid);
    $query->condition('u.vid', $vid, '<');
    $query->orderBy('u.vid', 'DESC');
    $query->range(0, 1);

    $revision_id = $query->execute()->fetchField();
    $this->revision = user_revision_load($this->uid, $revision_id);
    return $this->revision;
  }


  /**
   * Setter.
   */
  private function setUid($uid) {
    $query = db_select("users", "u");
    $query->fields('u', array('uid'));
    $query->condition('u.uid', $uid, "=");
    $results = $query->execute()->fetchAll();
    if (!empty($results)) {
      $this->uid = $uid;
    }
  }

  /**
   * Setter.
   */
  private function setTimestamp($timestamp) {
    if (is_string($timestamp) && is_numeric($timestamp)) {
      $timestamp = intval($timestamp);
    }

    if (is_int($timestamp) && $timestamp <= PHP_INT_MAX && $timestamp >= ~PHP_INT_MAX) {
      $this->timestamp = $timestamp;
    }
    else {
      throw new \Exception("Invalid timestamp value");
    }
  }

}
