<?php
/**
 * @file
 * ArrayDiff.
 */

namespace GN2ReportUserChanges;

/**
 * ArrayDiff.
 */
class ArrayDiff {
  private $array1;
  private $array2;

  /**
   * Constructor.
   */
  public function __construct($array1, $array2) {
    $arrays = array($array1, $array2);
    foreach ($arrays as $array) {
      if (!is_array($array)) {
        return \Exception('Invalid array');
      }
    }
    $this->array1 = $array1;
    $this->array2 = $array2;
  }

  /**
   * Get the diff for the 2 arrays.
   */
  public function diff() {
    $diff = $this->recursiveDiff($this->array1, $this->array2);
    return $diff;
  }

  /**
   * Get the diff recursively.
   */
  private function recursiveDiff($array1, $array2) {
    $diff = array();
    foreach ($array1 as $key => $value) {
      // If our value is an object, we don't deal with it.
      if (is_object($value)) {
        continue;
      }

      if (is_array($value)) {
        $value2 = array();
        if (isset($array2[$key])) {
          $value2 = $array2[$key];
        }
        $rdiff = $this->recursiveDiff($value, $value2);
        if (!empty($rdiff)) {
          $diff[$key] = $rdiff;
        }
      }
      elseif (!array_key_exists($key, $array2)) {
        $diff[$key] = array('new' => $value, 'old' => NULL);
      }
      elseif ($array1[$key] != $array2[$key]) {
        $diff[$key] = array('new' => $value, 'old' => $array2[$key]);
      }
    }
    return $diff;
  }

}
