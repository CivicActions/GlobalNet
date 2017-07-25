<?php
/**
 * @file
 * FieldCollectionOutput.
 */

namespace GN2ReportUserChanges;

/**
 * FieldCollectionOutput.
 */
class FieldCollectionOutput {
  private $fieldName;

  private $current;
  private $revision;

  private $diff;

  private $delta;

  /**
   * Constructor.
   */
  public function __construct($field_name, $vid, $delta) {
    $this->fieldName = $field_name;
    $this->current = field_collection_item_revision_load($vid);
    $this->delta = $delta;
  }

  /**
   * Set revision.
   */
  public function setRevision($vid) {
    $this->revision = field_collection_item_revision_load($vid);
  }

  /**
   * Get the Html output.
   */
  public function getHtmlOutput() {
    $differ = new FieldCollectionDiff($this->current);
    if (isset($this->revision)) {
      $differ->setRevision($this->revision);
    }
    $this->diff = $differ->getDiff();

    return $this->getHtmlFromDiff();
  }

  /**
   * Get Html from diff.
   */
  private function getHtmlFromDiff() {
    $diff = $this->diff;

    $fields_output = array();
    foreach ($diff as $field => $data) {

      if (isset($data['new'])) {
        $fields_output[] = array(
          'field' => $field . '(' .$this->delta . ')',
          'new' => $data['new'],
        );
      }
      else {
        $field_data_output = FieldOutput::getHtml($data);
        if (!empty($field_data_output)) {
          $user_info = field_info_instance('user', $this->fieldName, 'user');
          $fc_info = field_info_instance('field_collection_item', $field, $this->fieldName);
          $delta = $this->delta + 1;
          $fields_output[] = array(
            'field' => $user_info['label'] . ': ' . $fc_info['label'] . '(' . $delta . ')',
            'new' => $field_data_output,
          );
        }
      }
    }
    return $fields_output;
  }

}
