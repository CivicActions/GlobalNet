<?php
/**
 * @file
 * FieldOutput.
 */

namespace GN2ReportUserChanges;

/**
 * FieldOutput.
 */
class FieldOutput {

  /**
   * Given some field data, return HTML.
   */
  public static function getHtml($data) {
    foreach ($data as $language => $items) {
      if (isset($items) && is_array($items)) {
        foreach ($items as $delta => $item) {
          if (isset($item['value']) && ($item['value']['new'] != $item['value']['old'])) {
            $value = $item['value']['new'];
            return $value;
          }
        }
      }
    }
  }
}
