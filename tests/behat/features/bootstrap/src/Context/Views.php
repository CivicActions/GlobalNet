<?php
/**
 * @file
 * Context definition for ViewsContext.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Drupal\DrupalExtension\Hook\Scope\EntityScope;

use Behat\Behat\Context\SnippetAcceptingContext,
  Behat\Behat\Context\Context,
  Behat\Behat\Context\Step,
  Behat\Behat\Context\Step\Given,
  Behat\Gherkin\Node\TableNode;

class Views extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Step function to assert the number of Views rows present.
   *
   * @Then /^I should see at least "([^"]*)" Views rows$/
   */
  public function iShouldSeeAtLeastViewsRows($count) {
    $page = $this->getSession()->getPage();
    $rows = $this->getViewsRows($page);
    if (count($rows) < $count) {
      throw new \Exception("The page (" . $this->getSession()->getCurrentUrl() .
        ") has less than " . $count . " views rows");
    }
  }

  /**
   * Step function to assert the presense of a Views row with specific text.
   *
   * @Then I should see a Views row with text :arg1
   */
  public function iShouldSeeAViewsRowWithText($text) {
    $page = $this->getSession()->getPage();
    $rows = $this->getViewsRows($page);
    $found = FALSE;

    // Iterate over each views row looking for text.
    foreach ($rows as $row) {
      if (strpos(trim($row->getText()), $text) !== FALSE) {
        $found = TRUE;
        break;
      }
    }
    if (!$found) {
      throw new \Exception(sprintf("The page '%s' does not contain a Views row with the text '%s'", $this->getSession()->getCurrentUrl(), $text));
    }
  }

  /**
   * Step function to assert the absense of a Views row with specific text.
   *
   * @Then /^I should not see a Views row with text "([^"]*)"$/
   */
  public function iShouldNotSeeAViewsRowWithText($text) {
    $page = $this->getSession()->getPage();
    $rows = $this->getViewsRows($page);
    $found = FALSE;

    // Iterate over each views row looking for text.
    foreach ($rows as $row) {
      if (strpos(trim($row->getText()), $text) !== FALSE) {
        $found = TRUE;
        break;
      }
    }
    if ($found) {
      throw new \Exception(sprintf("The page '%s' contains a Views row with the text '%s'", $this->getSession()->getCurrentUrl(), $text));
    }
  }

  /**
   * Step function to assert the presence or absense of a Views row with text.
   *
   * @Then /^I should <see> a Views row with <text>$/
   */
  public function iShouldSeeNotSeeAViewsRow(TableNode $table) {
    $page = $this->getSession()->getPage();
    $rows = $this->getViewsRows($page);

    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $found = FALSE;
      $see = $table[$key]['see'];
      $text = $table[$key]['text'];

      // Set $not TRUE if "not" was found in $see.
      $not = (stripos($see, 'not') === FALSE) ? FALSE : TRUE;

      // Iterate over each views row looking for text.
      foreach ($rows as $row) {
        if (strpos(trim($row->getText()), $text) !== FALSE) {
          $found = TRUE;
          break;
        }
      }
      if ($not) {
        if ($found) {
          throw new \Exception(sprintf("The page '%s' contains a Views row with the text '%s'", $this->getSession()->getCurrentUrl(), $text));
        }
      }
      else {
        if (!$found) {
          throw new \Exception(sprintf("The page '%s' does not contain a Views row with the text '%s'", $this->getSession()->getCurrentUrl(), $text));
        }
      }
    }
  }

  /**
   * Step function to asser the presence of a Views RSS feed link.
   *
   * @Given /^I should see a Views RSS feed link$/
   */
  public function iShouldSeeAViewsRssFeedLink() {
    $element = $this->getSession()->getPage()->find("css", ".feed-icon");
    if (empty($element)) {
      throw new \Exception(sprintf("The page '%s' does not contain a Views feed icon", $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Step function to asser the presence of a Views More link.
   *
   * @Given /^I should see a Views more link$/
   */
  public function iShouldSeeAViewsMoreLink() {
    $element = $this->getSession()->getPage()->find("css", ".more-link");
    if (empty($element)) {
      throw new \Exception(sprintf("The page '%s' does not contain a Views more link", $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Step function to assert the presence of a Views pager.
   *
   * @Given /^I should see a Views pager$/
   */
  public function iShouldSeeAViewsPager() {
    $element = $this->getSession()->getPage()->find("css", ".pager");
    if (empty($element)) {
      throw new \Exception(sprintf("The page '%s' does not contain a Views pager", $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * General purpose function to retrieve Views rows from markup.
   *
   * @param Object $page
   *   The page object to look into.
   *
   * @return array
   *   An array of markup for Views rows.
   */
  private function getViewsRows($page) {
    $result = '';
    $classes = array(
      // View with table display.
      'table' => '.view table.views-table tr',
      // View with grid drisplay.
      'grid' => '.view table.views-view-grid tr td',
      // View with unformatted row display.
      'row' => '.view div.views-row',
      // View with list displayed.
      'row li' => '.view li.views-row',
    );
    foreach ($classes as $type => $class) {
      $result = $page->findAll('css', $class);
      // If a matching result has been found, exit loop.
      // @todo This currently will not work on a page that contains more than
      // one view. We should allow an optional, parent class to be passed
      // so that CSS scope can be refined.
      if (!empty($result)) {
        break;
      }
    }
    return $result;
  }
}
