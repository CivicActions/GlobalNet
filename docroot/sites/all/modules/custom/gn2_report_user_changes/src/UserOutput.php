<?php
/**
 * @file
 * UserOutput.
 */

namespace GN2ReportUserChanges;

/**
 * UserOutput.
 */
class UserOutput {
  private $uid;
  private $initialTimestamp;
  private $endingTimestamp;

  private $current;
  private $revision;

  private $modificationTime;

  private $diff;

  private $fieldCollections = array();

  /**
   * Constructor.
   */
  public function __construct($uid, $initial_timestamp, $ending_timestamp, $vid) {
    $this->uid = $uid;
    $this->initialTimestamp = $initial_timestamp;
    $this->endingTimestamp = $ending_timestamp;
    if ($this->uid > 0 && is_numeric($this->uid) && isset($this->endingTimestamp) && isset($vid)) {
      $revisioner = new UserRevision($this->uid, $this->endingTimestamp);
      $this->current = user_revision_load($this->uid, $vid);
      $this->revision = $revisioner->getRevision($vid);
  
      if (is_object($this->current) && isset($this->current->revision_timestamp)) {
        $this->modificationTime = date("F j, Y", $this->current->revision_timestamp);
      }
    }
  }

  /**
   * Get the full html of a report.
   */
  public function getHtmlOutput() {
    $differ = new UsersDiff($this->current, $this->revision);
    $this->diff = $differ->getDiff();
    $this->separateFieldCollections();

    $header = array(
      'Date Modified',
      'Field Modified',
      'New Value',
    );

    $rows = $this->getUserGeneralTableRows();
 
    // Now field collections.
    foreach ($this->fieldCollections as $field_name => $data) {
      foreach ($data as $language => $data2) {
        foreach ($data2 as $delta => $item) {
          $outputter = new FieldCollectionOutput($field_name, $item['revision_id']['new'], $delta);
          if (isset($item['revision_id']['old'])) {
            $vid = $item['revision_id']['old'];
            $outputter->setRevision($vid);
          }
          $fcos = $outputter->getHtmlOutput();
          foreach ($fcos as $fco) {
            if (!empty($fco)) {
              $rows[] = array(
                $this->modificationTime,
                $fco['field'],
                $fco['new'],
              );
            }
          }
        }
      }
    }

    $new_output = theme_table(array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array(
        'width' => '100%',
        'id' => 'gn2-user-table',
        'class' => array(
          'user-table',
        ),
      ),
      'caption' => $this->getUserHeaderHtml(),
      'colgroups' => array(),
      'sticky' => TRUE,
      'empty' => t('Edited, but no fields were changed.'),
    ));
 
    return $new_output;
  }

  /**
   * Get the array for the csv file.
   */
  public function getCsvData() {
    $differ = new UsersDiff($this->current, $this->revision);
    $this->diff = $differ->getDiff();
    $this->separateFieldCollections();

    $rows[$this->uid]['name' ] = $this->getName();
    $rows[$this->uid]['general'] = $this->getUserGeneralTableRows();

    // Now field collections.
    foreach ($this->fieldCollections as $field_name => $data) {
      foreach ($data as $language => $data2) {
        foreach ($data2 as $delta => $item) {
          $outputter = new FieldCollectionOutput($field_name, $item['revision_id']['new'], $delta);
          if (isset($item['revision_id']['old'])) {
            $vid = $item['revision_id']['old'];
            $outputter->setRevision($vid);
          }
          $fcos = $outputter->getHtmlOutput();
          foreach ($fcos as $fco) {
            if (!empty($fco)) {
              $rows[$this->uid]['field_collection'][] = array(
                $this->modificationTime,
                $fco['field'],
                $fco['new'],
              );
            }
          }
        }
      }
    }

    return $rows;
  }

  /**
   * Get user header html.
   */
  private function getUserHeaderHtml() {
    $name = $this->getName();
    $username = $this->current->name;

    global $base_url;
    $alias = $base_url . "/" . drupal_get_path_alias("user/{$this->current->uid}");

    $output = "<span class='label'>User:</span> {$name} - " . l($username, $alias);

    if (!empty($this->current->field_user_organization)) {
      $output .= "<br />" . $this->current->field_user_organization[LANGUAGE_NONE][0]['value'];
    }
    if (!empty($this->current->field_country_of_representation)) {
      $output .= "<br /><span class='label'>Country of representation:</span> " . $this->current->field_country_of_representation[LANGUAGE_NONE][0]['value'];
    }

    $counter = 0;
    foreach ($this->getUserGroups() as $result) {
      if ($counter == 0) {
        $output .= "<br /><span class='label'>Group(s):</span> ";
      }
      else {
        $output .= ", ";
      }
      $output .= $result->title;
      $counter++;
      if ($counter == 10) {
        break;
      }
    }

    $output .= "</b></p>";

    return $output;
  }

  /**
   * Generate and return some HTML from the diff.
   */
  private function getUserGeneralTableRows() {
    $rows = array();
    $diff = $this->diff;

    foreach ($diff as $field => $data) {
      if (isset($data['new'])) {
        $rows[] = array(
          $this->modificationTime,
          $field,
          $data['new'],
        );
      }
      else {
        $fo = FieldOutput::getHtml($data);
        if (!empty($fo)) {
          $info = field_info_instance('user', $field, 'user');
          $rows[] = array(
            $this->modificationTime,
            $info['label'],
            $fo,
          );
        }
      }
    }
    return $rows;
  }

  /**
   * Get the full name of an user.
   */
  private function getName() {
    $name = "";
    $fields = array(
      'field_name_first',
      'field_name_middle',
      'field_name_last',
    );

    foreach ($fields as $field) {
      $items = field_get_items('user', $this->current, $field);
      if ($items) {
        foreach ($items as $item) {
          $name .= $item['value'] . " ";
        }
      }
    }
    return $name;
  }

  /**
   * Separate each field collection into its own diff.
   */
  private function separateFieldCollections() {
    $field_collections = array(
      'field_telephone',
      'field_expertise',
      'field_employers',
      'field_education',
      'field_training',
    );

    foreach ($field_collections as $fc) {
      if (isset($this->diff[$fc])) {
        $this->fieldCollections[$fc] = $this->diff[$fc];
        unset($this->diff[$fc]);
      }
    }
  }

  /**
   * Get user groups.
   */
  private function getUserGroups() {
    $uid = $this->current->uid;

    $query = db_select("og_membership", 'om');
    $query->fields('om', array('gid'));
    $query->condition('entity_type', 'user', '=');
    $query->condition('etid', $uid, '=');
    $query->join('node', 'n', 'n.nid = om.gid');
    $query->fields('n', array('title'));

    $results = $query->execute();
    return $results;
  }

}
