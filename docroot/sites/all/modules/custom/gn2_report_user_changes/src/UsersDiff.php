<?php
/**
 * @file
 * UserDiff.
 */

namespace GN2ReportUserChanges;

/**
 * UserDiff.
 */
class UsersDiff {
  private $current;
  private $revision;

  private $diff;

  /**
   * Constructor.
   */
  public function __construct($current, $revision) {
    $users = array($current, $revision);
    foreach ($users as $user) {
      if (!$this->validateUser($user)) {
        return new \Exception('Invalid user');
      }
    }
    $this->current = $current;
    $this->revision = $revision;
  }

  /**
   * Get the diff from the current and the revision version.
   */
  public function getDiff() {
    $current = (array) $this->current;
    $revision = (array) $this->revision;
    $differ = new ArrayDiff($current, $revision);
    $this->diff = $differ->diff();
    $this->cleanDiff();
    return $this->diff;
  }

  /**
   * Remove data we don't care for from the diff.
   */
  private function cleanDiff() {
    $fields_to_remove = array(
      'vid',
      'authorid',
      'ip',
      'revision_timestamp',
      'revision_uid',
      'pki_authentication_pki_string',
    );

    foreach ($fields_to_remove as $ip) {
      if (isset($this->diff[$ip])) {
        unset($this->diff[$ip]);
      }
    }
  }

  /**
   * Not comprehensive but should work to eliminate completely useless input.
   */
  private function validateUser($user) {
    if (is_object($user) && property_exists($user, 'uid')) {
      return TRUE;
    }
    return FALSE;
  }

}
