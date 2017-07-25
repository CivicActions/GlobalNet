<?php
/**
 * @file
 * FieldCollectionDiff.
 */

namespace GN2ReportUserChanges;

/**
 * FieldCollectionDiff.
 */
class FieldCollectionDiff {
  private $current;
  private $revision;

  private $diff;

  /**
   * Constructor.
   */
  public function __construct($current) {
    $this->current = $current;
  }

  /**
   * Set revision.
   */
  public function setRevision($revision) {
    $this->revision = $revision;
  }

  /**
   * Get diff.
   */
  public function getDiff() {
    $current = (array) $this->current;
    $revision = array();
    if (isset($this->revision)) {
      $revision = (array) $this->revision;
    }
    $differ = new ArrayDiff($current, $revision);
    $this->diff = $differ->diff();
    $this->cleanDiff();
    return $this->diff;
  }

  /**
   * Clean diff.
   */
  private function cleanDiff() {
    foreach ($this->diff as $key => $value) {
      if (substr_count($key, '*') > 0) {
        unset($this->diff[$key]);
      }
    }

    $fields_to_remove = array(
      'item_id',
      'revision_id',
      'field_name',
      'default_revision',
      'archived',
      '0',
    );

    foreach ($fields_to_remove as $ip) {
      if (isset($this->diff[$ip])) {
        unset($this->diff[$ip]);
      }
    }
  }

}
