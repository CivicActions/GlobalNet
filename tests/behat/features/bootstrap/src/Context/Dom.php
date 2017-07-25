<?php
/**
 * @file
 * Walk elements on a page.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Gherkin\Node\TableNode;

/**
 * Page element inspection.
 */
class Dom extends RawDrupalContext {
  /**
   * Look for a set of links (defined in a feature table) on the page.
   *
   * @Given I should see the following <links>
   */
  public function iShouldSeeTheFollowingLinks(TableNode $table) {
    $page = $this->getSession()->getPage();
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $link = $table[$key]['links'];
      $result = $page->findLink($link);
      if (empty($result)) {
        throw new \Exception("The link '" . $link . "' was not found");
      }
    }
  }

  /**
   * Confirm that links (defined in a feature table) do not appear on the page.
   *
   * @Given I should not see the following <links>
   */
  public function iShouldNotSeeTheFollowingLinks(TableNode $table) {
    $page = $this->getSession()->getPage();
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $link = $table[$key]['links'];
      $result = $page->findLink($link);
      if (!empty($result)) {
        throw new \Exception("The link '" . $link . "' was found");
      }
    }
  }

  /**
   * Look for a set of texts (defined in a feature table) on the page.
   *
   * @param TableNode $table
   *   A table of text to look for on the page where each row is a separate
   *   string of text to look for.
   *
   * @Given I should see the following <texts>
   */
  public function iShouldSeeTheFollowingTexts(TableNode $table) {
    $page = $this->getSession()->getPage();
    $messages = array();
    $failure_detected = FALSE;
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $text = $table[$key]['texts'];
      if ($page->hasContent($text) === FALSE) {
        $messages[] = "FAILED: The text '" . $text . "' was not found";
        $failure_detected = TRUE;
      }
      else {
        $messages[] = "PASSED: '" . $text . "'";
      }
    }
    if ($failure_detected) {
      throw new \Exception(implode("\n", $messages));
    }
  }

  /**
   * Confirm that links (defined in a feature table) do not appear on the page.
   *
   * @Given I should not see the following <texts>
   */
  public function iShouldNotSeeTheFollowingTexts(TableNode $table) {
    $page = $this->getSession()->getPage();
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $text = $table[$key]['texts'];
      if (!$page->hasContent($text) === FALSE) {
        throw new \Exception("The text '" . $text . "' was found");
      }
    }
  }

  /**
   * Check that a named select element contains an expected option value.
   *
   * @param string $select_id
   *   The named select element.
   * @param string $option
   *   The expected option value.
   *
   * @Then I should see the select element :select_id containing :option
   */
  public function iShouldSeeTheSelectElementNamedContainingAsAnOption($select_id, $option) {
    $select_element = $this->getSession()->getPage()->findById($select_id);
    if (!$select_element) {
      throw new \Exception(sprintf("Did not find a <select> element '%s'.", $select_id));
    }
    $option_element = $select_element->find('named', array('option', $option));
    if (!$option_element) {
      throw new \Exception(sprintf("Did not find a <select> element '%s' with <option> '%s'.",
                                   $select_id, $option));
    }
  }

  /**
   * Check that a named select element does not contain an option value.
   *
   * @param string $select_id
   *   The named select element.
   * @param string $option
   *   The option value that should not exist.
   *
   * @Given I should see the select element :select_id not containing :option
   */
  public function iShouldSeeTheSelectElementNamedThatDoesNotContainAsAnOption($select_id, $option) {
    $select_element = $this->getSession()->getPage()->findById($select_id);
    if (!$select_element) {
      throw new \Exception(sprintf("Did not find a <select> element '%s'.", $select_id));
    }
    $option_element = $select_element->find('named', array('option', $option));
    if ($option_element) {
      throw new \Exception(sprintf("Found <select> element '%s' with <option> '%s'.", $select_id, $option));
    }
  }

  /**
   * Check that a select element does (does not) contain a table of values.
   *
   * @Then I should see the select element :select_id that <does> contain <option>
   */
  public function iShouldSeeTheSelectElementThatMightContainAnOption($select_id, TableNode $table) {
    $select_element = $this->getSession()->getPage()->findById($select_id);
    if (!$select_element) {
      throw new \Exception(sprintf("Did not find a <select> element '%s'.", $select_id));
    }
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $does   = $table[$key]['does'];
      $option = $table[$key]['option'];

      $option_element = $select_element->find('named', array('option', $option));

      // Set $not TRUE if "not" was found in $does.
      $not = (stripos($does, 'not') === FALSE) ? FALSE : TRUE;

      if ($not) {
        if ($option_element) {
          throw new \Exception(sprintf("Found a '%s' <select> element '%s'.", $select_id, $option));
        }
      }
      else {
        if (!$option_element) {
          throw new \Exception(sprintf("Did not find a '%s' <select> element '%s'.", $select_id, $option));
        }
      }
    }
  }

  /**
   * Validate the breadcrumb matches a simple string breadcrumb definition.
   *
   * @Then I should see the breadcrumb :breadcrumb
   */
  public function iShouldSeeTheBreadcrumb($breadcrumb) {
    $breadcrumbs_list = explode(' > ', $breadcrumb);
    $page_breadcrumb_list = array();
    $page_breadcrumbs = $this->getSession()->getPage()->findAll('css', '.breadcrumb__list-item');
    foreach ($page_breadcrumbs as $n => $page_breadcrumb) {
      $page_breadcrumb_list[$n] = $page_breadcrumb->getText();
    }
    if (empty($breadcrumb) && empty($page_breadcrumb_list)) {
      // Confirmed there are no breadcrumbs, our work here is done.
      return;
    }
    if (count($breadcrumbs_list) !== count($page_breadcrumb_list)) {
      $page_breadcrumb_text = implode(' > ', $page_breadcrumb_list);
      throw new \Exception(sprintf("Breadcrumb count for '%s' does not match '%s'.", $page_breadcrumb_text, $breadcrumb));
    }
    foreach ($page_breadcrumb_list as $n => $page_breadcrumb_text) {
      $breadcrumb_text = $breadcrumbs_list[$n];
      if ($page_breadcrumb_text !== $breadcrumb_text) {
        throw new \Exception(sprintf("Breadcrumb part '%s' does not match part '%s' for '%s'.", $page_breadcrumb_text, $breadcrumb_text, $breadcrumb));
      }
    }
  }

  /**
   * Checks if the given value is default selected in the given dropdown
   *
   * @param $option
   *   string The value to be looked for
   * @param $field
   *   string The dropdown field that has the value
   *
   * @Given /^I should see the option "([^"]*)" selected in "([^"]*)" dropdown$/
   *
   * @throws Exception if expected option not selected in dropdown.
   */
  public function iShouldSeeTheOptionSelectedInDropdown($option, $field) {
    $selector = $field;
    // Some fields do not have label, so set the selector here
    if (strtolower($field) == "default notification") {
      $selector = "edit-projects-default";
    }
    $chk = $this->getSession()->getPage()->findField($field);
    // Make sure that the dropdown $field and the value $option exists in the dropdown
    if (is_object($chk)) {
      $optionObj = $chk->findAll('xpath', '//option[@selected="selected"]');
    }
    // Check if at least one value is selected
    if (empty($optionObj)) {
      throw new \Exception("The field '" . $field . "' does not have any options selected");
    }
    $found = FALSE;
    foreach ($optionObj as $opt) {
      if ($opt->getText() == $option) {
        $found = TRUE;
        break;
      }
    }
    foreach ($optionObj as $opt) {
      if ($opt->getValue() == $option) {
        $found = TRUE;
        break;
      }
    }
    if (!$found) {
      throw new \Exception("The field '" . $field . "' does not have the option '" . $option . "' selected");
    }
  }

}
