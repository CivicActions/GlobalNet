<?php
/**
 * @file
 * SearchContext provides support for Search steps
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext,
    Behat\Behat\Context\SnippetAcceptingContext;

use Behat\Behat\Context\Step,
    Behat\Behat\Context\Step\Given,
    Behat\Gherkin\Node\TableNode;

class Search extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Check number of rows returned.
   *
   * @param int $count
   *   The minimum number of rows that should be returned
   *
   * @Then I should see at least :count record/records
   */
  public function iShouldSeeAtLeastRecord($count) {
    $records = array();
    $page = $this->getSession()->getPage();
    $records = $this->getDisplayRows($page);
    if (count($records) < $count) {
      throw new \Exception("The page (" . $this->getSession()->getCurrentUrl() .
        ") has less than " . $count . " records");
    }
  }

  /**
   * General purpose function to retrieve a resultset from markup.
   *
   * @param Object $page
   *   The page object to look into.
   *
   * @return array
   *   An array of items.
   */
  private function getDisplayRows($page) {
    $result = '';
    $classes = array(
      // Core search results, using HTML5.
      'search' => '.search-results article',
    );
    foreach ($classes as $type => $class) {
      $result = $page->findAll('css', $class);
      if (!empty($result)) {
        break;
      }
    }
    return $result;
  }
}
