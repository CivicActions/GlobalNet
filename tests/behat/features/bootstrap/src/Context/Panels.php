<?php
/**
 * @file
 * Provide Behat step-definitions for Panels (pulled from Panopoly)
 *
 * @todo This should become panels.behat.inc in the Panels module!
 */
namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext,
    Behat\Behat\Context\SnippetAcceptingContext;

use Behat\Behat\Context\Step,
    Behat\Behat\Context\Step\Given,
    Behat\Gherkin\Node\TableNode;

class Panels extends RawDrupalContext implements SnippetAcceptingContext {

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  /**
   * Function override to return panels alias to use in XML.
   */
  public static function getAlias() {
    return 'panels';
  }

  /**
   * Wait until the Panels IPE is activated.
   *
   * @When I wait for the Panels IPE to activate
   */
  public function waitForIPEtoActivate() {
    $this->getSession()->wait(5000, 'jQuery(".panels-ipe-editing").length > 0');
  }

  /**
   * Wait until the Panels IPE is deactivated.
   *
   * @When I wait for the Panels IPE to deactivate
   */
  public function waitForIPEtoDeactivate() {
    $this->getSession()->wait(5000, 'jQuery(".panels-ipe-editing").length === 0');
  }

  /**
   * Enable the Panels IPE if it's available on the current page.
   *
   * @When I customize this page with the Panels IPE
   */
  public function customizeThisPageIPE() {
    $this->getSession()->getPage()->clickLink('Customize this page');
    $this->waitForIPEtoActivate();
  }

  /**
   * Wait until the live preview to finish.
   *
   * @When I wait for live preview to finish
   */
  public function waitForLivePreview() {
    $this->getSession()->wait(5000, 'jQuery(".form-submit").value == "Save"');
  }
}
