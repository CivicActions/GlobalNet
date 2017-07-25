<?php
/**
 * @file
 * Basic step and helper functions.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext,
    Drupal\Driver\Fields\Drupal7;

use Behat\Behat\Context\Step,
    Behat\Behat\Context\Step\Given,
    Behat\Gherkin\Node\TableNode,
    Behat\Behat\Context\SnippetAcceptingContext,
    Behat\Behat\Context\Context,
    Behat\Behat\Hook\Scope\AfterStepScope;

use Drupal\DrupalExtension\Hook\Scope\EntityScope;

/**
 * BaseContext class for localized behat steps.
 */
class Base extends RawDrupalContext implements SnippetAcceptingContext {

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  /**
   * @var $output
   *   Command line output.
   */
  protected $output;

  /**
   * @var $url
   *   A constructed URL.
   */
  protected $url;

  /**
   * @var $screenshotDir
   *   The directory in which screenshots are saved.
   *   FIXME: This should be a DrupalContext parameter.
   */
  protected $screenshotDir;


  /**
   * Constructor.
   */
  public function __construct($screenshot_dir = '/var/www/logs/') {
    $this->screenshotDir = $screenshot_dir;

    // Ignore Notices.
    // define('BEHAT_ERROR_REPORTING', E_ERROR | E_WARNING | E_PARSE);
    // define('BEHAT_ERROR_REPORTING', E_ERROR | E_PARSE);
  }

  /**
   * Revert a feature.
   *
   * @param string $module
   *   The feature name.
   *
   * @Given I revert the :module feature
   */
  public function iRevertTheFeature($module) {
    $feature = features_get_features($module);
    $components = array_keys($feature->info['features']);
    return features_revert(array($module => $components));
  }

  /**
   * Wait for a given number of seconds.
   *
   * @param int $seconds
   *   The number of seconds to wait.
   *
   * @Given I wait for :seconds seconds
   */
  public function iWaitForSeconds($seconds) {
    sleep($seconds);
  }

  /**
   * Reload the page :times number of times.
   *
   * Sometimes things don't load the first time. Try 8 or 10.
   *
   * @param int $times
   *   The number of times to reload the page.
   *
   * @Given I reload the page :times time(s)
   */
  public function iReloadThePageManyTimes($times) {
    for ($i = 0; $i < $times; $i++) {
      $this->softReload();
    }
  }

  /**
   * Run a command.
   *
   * @param string $command
   *   The command to pass to exec.
   *
   * @When I run the command :command
   */
  public function iRun($command) {
    exec($command, $output);
    $this->output = trim(implode("\n", $output));
  }

  /**
   * Look for text in output of command.
   *
   * @Then I should see the command output:
   */
  public function iShouldSee(PyStringNode $string) {
    if ((string) $string !== $this->output) {
      throw new \Exception("Actual output is:\n" . $this->output);
    }
  }

  /**
   * Look for a CSS selector.
   *
   * @param string $css_selector
   *   The CSS selecttor to look for.
   *
   * @Then I should see the CSS selector :css_selector
   */
  public function iShouldSeeTheCssSelector($css_selector) {
    $element = $this->getSession()->getPage()->find("css", $css_selector);
    if (empty($element)) {
      throw new \Exception(sprintf("The page '%s' does not contain the css selector '%s'", $this->getSession()->getCurrentUrl(), $css_selector));
    }
  }

  /**
   * Confirm that a CSS selector is not on the page.
   *
   * @param string $css_selector
   *   The CSS selector that should not exist on the page.
   *
   * @Then I should not see the CSS selector :css_selector
   */
  public function iShouldNotSeeAElementWithCssSelector($css_selector) {
    $element = $this->getSession()->getPage()->find("css", $css_selector);
    if (!empty($element)) {
      throw new \Exception(sprintf("The page '%s' contains the css selector '%s'", $this->getSession()->getCurrentUrl(), $css_selector));
    }
  }

  /**
   * Look for a CSS selector in the region.
   *
   * @param string $css_selector
   *   CSS selector name.
   * @param string $region
   *   The region name.
   *
   * @Then I should see the CSS selector :css_selector in the :region( region)
   */
  public function iShouldSeeTheCssSelectorInTheRegion($css_selector, $region) {
    $session = $this->getSession();
    $region_obj = $session->getPage()->find('region', $region);
    if (!$region_obj) {
      throw new \Exception(sprintf('The region "%s" was not found on the page %s.', $region, $session->getCurrentUrl()));
    }
    $elements = $region_obj->findAll('css', $css_selector);
    if (empty($elements)) {
      throw new \Exception(sprintf('The css selector "%s" was not found in the "%s" region on the page %s',
          $css_selector, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Confirm a region (defined in region_map) exists.
   *
   * @param string $region
   *   The region to look for.
   *
   * @Then I should see the :region( region)
   */
  public function iShouldSeeTheRegion($region) {
    // Why can't (MarkupContext) $this->getRegion() be used here?
    $session = $this->getSession();
    $region_obj = $session->getPage()->find('region', $region);
    if (!$region_obj) {
      throw new \Exception(sprintf('The region "%s" was not found on the page %s.', $region, $session->getCurrentUrl()));
    }
    return $region_obj;
  }

  /**
   * Confirm a region (defined in region_map) does not exist.
   *
   * @param string $region
   *   The region to look for.
   *
   * @Then I should not see the :region( region)
   */
  public function iShouldNotSeeTheRegion($region) {
    $session = $this->getSession();
    $region_obj = $session->getPage()->find('region', $region);
    if ($region_obj) {
      throw new \Exception(sprintf('The region "%s" was found on the page %s.', $region, $session->getCurrentUrl()));
    }
    return $region_obj;
  }

  /**
   * Check that the expected theme is in effect.
   *
   * @param string $expected_theme
   *   The expected theme the check for.
   *
   * @Given I am viewing the :expected_theme theme
   */
  public function iAmViewingTheTheme($expected_theme) {
    global $theme;
    if ($theme !== $expected_theme) {
      throw new \Exception(sprintf("'%s' is not the active theme. '%s' is active instead.",
                                   $expected_theme, $theme));
    }
  }

  /**
   * Check that a named select element is present.
   *
   * @param string $select
   *   The select element to look for.
   *
   * @Then I should not see the select element :select
   */
  public function iShouldNotSeeASelectElement($select_id) {
      $select_element = $this->getSession()->getPage()->findById($select_id);
      if ($select_element) {
        throw new \Exception(sprintf("Did not find a <select> element '%s'.", $select_id));
      }
  }

  /**
   * @Then /^I verify the "([^"]*)" select is found on the page$/
   */
  public function iVerifyTheSelectIsOnPage($field) {
    $hasField = $this->getSession()->getPage()->hasSelect($field);
    if (!$hasField) {
      throw new \Exception(sprintf("The select '%s' is not present on page '%s'.",$field,$this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then /^I verify the "([^"]*)" select is not found on the page$/
   */
  public function iVerifyTheSelectIsNotOnPage($field) {
    $hasField = $this->getSession()->getPage()->hasSelect($field);
    if ($hasField) {
      throw new \Exception(sprintf("The select '%s' is present on page '%s'.",$field,$this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then /^I verify the "([^"]*)" select is visible$/
   */
  public function iVerifyTheSelectIsVisible($field) {
    $hasField = $this->getSession()->getPage()->hasSelect($field);

    if (!$hasField) {
      throw new \Exception(sprintf("The select '%s' is not present on page '%s'.",$field,$this->getSession()->getCurrentUrl()));
    }
    $bool = $this->getSession()->getPage()->findField($field)->isVisible();
    if (!$bool) {
      throw new \Exception(sprintf("The select '%s' is not visible on page '%s' but it should be.",$field,$this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then /^I verify the "([^"]*)" select is not visible$/
   */
  public function iVerifyTheSelectIsNotVisible($field) {
    $hasField = $this->getSession()->getPage()->hasSelect($field);
    if (!$hasField) {
      throw new \Exception(sprintf("The select '%s' is not present on page '%s'.",$field,$this->getSession()->getCurrentUrl()));
    }
    $bool = $this->getSession()->getPage()->findField($field)->isVisible();
    if ($bool) {
      throw new \Exception(sprintf("The select '%s' is visible on page '%s' but it should not be.",$field,$this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Check that a named select element is present.
   *
   * @param string $select
   *   The select element to look for.
   *
   * @Then I should not see the select :select
   */
  public function iShouldNotSeeASelectNamedContainingAsAnOption($select) {
    $select_element = $this->getSession()->getPage()->find('named', array('select', "\"{$select}\""));
    if ($select_element) {
      throw new \Exception(sprintf("Found a <select> element named '%s'.", $select));
    }
  }

  /**
   * Choose a random value for a select element.
   *
   * @param string $field
   *   The field to receive a random value.
   *
   * @Given I select a random option for :field
   */
  public function iSelectARandomOptionFrom($field) {
    $page = $this->getSession()->getPage();
    $element = $page->find('named', array(
      'select',
      $this->getSession()->getSelectorsHandler()->xpathLiteral($field),
    ));
    if (!$element) {
      throw new \Exception(sprintf("No <select> element '%s' found.", $field));
    }
    $option_elements = $element->findAll('named', array('option', 'select'));
    if (!$option_elements) {
      throw new \Exception(sprintf("No <option>s found for <select> element '%s'.", $field));
    }

    // Create array of available option values.
    $values = array();
    foreach ($option_elements as $option_element) {
      $values[] = $option_element->getValue();
    }

    // Select any option that is not '_none' or empty.
    do {
      $key = array_rand($values);
      $value = $values[$key];
    } while (empty($value) || $value == '_none');
    $element->selectOption($value);
  }

  /**
   * Set multiple fields with values.
   *
   * @When I select the following <fields> with <values>
   */
  public function iSelectTheFollowingFieldsWithValues(TableNode $table) {
    $multiple = TRUE;
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $select = $this->getSession()->getPage()->findField($table[$key]['fields']);
      if (empty($select)) {
        throw new \Exception("The page does not have the field with id|name|label|value '" . $table[$key]['fields'] . "'");
      }
      // If multiple is always true we get "value cannot be an array" error for
      // single select fields.
      $multiple = $select->getAttribute('multiple') ? TRUE : FALSE;
      $this->getSession()->getPage()->selectFieldOption($table[$key]['fields'], $table[$key]['values'], $multiple);
    }
  }

  /**
   * Click on an element with a defined CSS selector.
   *
   * @param string $css_selector
   *   The CSS selector identifying the element to click.
   *
   * @When I click the element with CSS selector :css_selector
   */
  public function iClickTheElementWithCssSelector($css_selector) {
    $element = $this->getSession()->getPage()->find("css", $css_selector);
    if (empty($element)) {
      throw new \Exception(sprintf("The page '%s' does not contain the css selector '%s'", $this->getSession()->getCurrentUrl(), $css_selector));
    }
    $element->click();

  }

  /**
   * Clear the defined cache bin.
   *
   * @param string $bin
   *   The cache bin to clear.
   *
   * @Given the :bin cache bin has been cleared
   */
  public function theCacheBinHasBeenCleared($bin) {
    $current_path = getcwd();
    chdir(DRUPAL_ROOT);
    if ($bin == 'css' || $bin == 'js') {
      _drupal_flush_css_js();
      drupal_clear_css_cache();
      drupal_clear_js_cache();
    }
    elseif ($bin == 'block') {
      cache_clear_all(NULL, 'cache_block');
    }
    elseif ($bin == 'theme') {
      cache_clear_all('theme_registry', 'cache', TRUE);
    }
    elseif ($bin == 'views') {
      cache_clear_all('*', 'cache_views', TRUE);
      cache_clear_all('*', 'cache_views_data', TRUE);
    }
    else {
      cache_clear_all(NULL, $bin);
    }
    chdir($current_path);
  }

  /**
   * Fills in WYSIWYG editor with specified id.
   *
   * @Given I fill in :text in WYSIWYG editor :css_selector
   */
  public function iFillInInWYSIWYGEditor($text, $css_selector) {
    try {
      $element = $this->getSession()->getPage()->find('css', $css_selector);
      $id = $element->getAttribute('id');
      $this->getSession()->switchToIFrame($id);
    }
    catch (Exception $e) {
      throw new \Exception(sprintf("No iframe with id '%s' found on the page '%s'.", $id, $this->getSession()->getCurrentUrl()));
    }
    $this->getSession()->executeScript("document.body.innerHTML = '<p>" . $text . "</p>'");
    $this->getSession()->switchToIFrame();
  }

  /**
   * Check for one of two possible status codes.
   *
   * @param int $arg1
   *   Possible HTTP response code.
   * @param int $arg2
   *   Possible HTTP response code.
   *
   * @Then I should get a :arg1 HTTP response or a :arg2 HTTP response
   */
  public function iShouldGetAHttpResponseOrAHttpResponse($arg1, $arg2) {
    return $this->getSession()->getStatusCode($arg1) || $this->getSession()->getStatusCode($arg2);
  }

  /**
   * Set a variable to a value.
   *
   * @param string $var_name
   *   The variable name.
   * @param string $value
   *   The value to set the variable to.
   *
   * @Given I set the variable :var_name to :value
   */
  public function iSetTheVariableTo($var_name, $value) {
    if ($value === 'TRUE') {
      $value = TRUE;
    }
    elseif ($value === 'FALSE') {
      $value = FALSE;
    }

    variable_set($var_name, $value);
  }

  /**
   * Click on the element with the provided xpath query.
   *
   * @When I click on the element with xpath :xpath
   */
  public function iClickOnTheElementWithXPath($xpath) {
    // Get the mink session.
    $session = $this->getSession();

    // Runs the actual query and returns the element.
    $element = $session->getPage()->find(
        'xpath',
        $session->getSelectorsHandler()->selectorToXpath('xpath', $xpath)
    );

    // Errors must not pass silently.
    if (NULL === $element) {
      throw new \InvalidArgumentException(sprintf('Could not evaluate XPath: "%s"', $xpath));
    }

    // OK, let's click on it.
    $element->click();
  }

  /**
   * This permits click on non-link, non-button text.
   *
   * @param string $text
   *   The text to click on.
   *
   * @When I click on the text :text
   */
  public function iClickOnTheText($text) {
    $session = $this->getSession();
    $element = $session->getPage()->find(
      'xpath',
      $session->getSelectorsHandler()->selectorToXpath('xpath', '*//*[text()="' . $text . '"]')
    );
    if (NULL === $element) {
      throw new \InvalidArgumentException(sprintf('Cannot find text: "%s"', $text));
    }

    $element->click();
  }

  /**
   * Update a property of the last created entity.
   *
   * @Given I update the last created :type entity :property property
   */
  public function iUpdateTheLastCreatedEntityProperty($type, $property) {
    $entity = $this->getLastCreatedEntity($type);

    $entity->{$property} = $this->getRandom()->string(24);
    entity_save($type, $entity);
  }

  /**
   * Step function to visit the last created node of a specific type.
   *
   * @param string $type
   *   The type of node that should be visited.
   *
   * @Given I visit the last created :type node
   */
  public function iVisitTheLastCreatedNodeByType($type) {
    $node = $this->getLastCreatedEntityFromDb('node', $type);
    $this->getSession()->visit($this->locatePath('/node/' . $node->nid));
  }

  /**
   * Step funciton to go to teh edit tab of the last created node of $type.
   *
   * @param string $type
   *   The type of node that should be visited.
   *
   * @Given I visit the edit form of the last created :type node
   */
  public function iVisitTheEditFormOfTheLastCreatedNodeByType($type) {
    try {
      $node = $this->getLastCreatedEntityFromDb('node', $type);
      $this->getSession()->visit($this->locatePath('/node/' . $node->nid . "/edit"));
    }
    catch (Behat\Mink\Exception\ExpectationException $e) {
    }
  }

  /**
   * Directs to a specific drupal system path.
   *
   * @param string $path
   *   The system/path to visit.
   *
   * @Given I visit the system path :path
   */
  public function iVisitTheSystemPath($path) {
    $session = $this->getSession();
    $session->visit($this->locatePath('/' . $path));
  }

  /**
   * Directs to a specific user edit profile form.
   *
   * @param string $username
   *   The username whose profile to access.
   *
   * @Given I visit the edit profile form for :username
   */
  public function iVisitTheEditProfileFormFor($username) {
    $user = user_load_by_name($username);
    $session = $this->getSession();
    $session->visit($this->locatePath('/user/' . $user->uid . '/edit'));
  }

  /**
   * Directs to a specific user edit profile form.
   *
   * @param string $username
   *   The username whose profile to access.
   *
   * @Given I visit the edit profile form for :username by alias
   */
  public function iVisitTheEditProfileFormForByAlias($username) {
    $user = user_load_by_name($username);
    $session = $this->getSession();
    $session->visit($this->locatePath('/users/' . $username . '/edit'));
  }
  /**
   * Directs to a specific user edit profile form with horizontal tab open.
   *
   * @param string $username
   *   The username whose profile to access.
   * @param string $tab
   *   The tab to open.
   *
   * @Given I visit the edit profile form for user :username with open tab :tab
   */
  public function iVisitTheEditProfileFormForUserWithOpenTab($username, $tab) {
    $user = user_load_by_name($username);
    $session = $this->getSession();
    $session->visit($this->locatePath('/user/' . $user->uid . '/edit#' . $tab));
  }

  /**
   * Wait for AJAX element to render on page.
   *
   * @Given I wait :seconds seconds or for AJAX :script
   */
  public function iWaitForAjaxElement($seconds = 5000, $script = '') {
    $milliseconds = $seconds * 1000;
    $this->getSession()->wait($milliseconds, $script);
  }

  /**
   * Saving a screenshot (add .png to filename).
   *
   * @When I save a screenshot in :filename
   */
  public function iSaveAScreenshotIn($filename) {
    sleep(1);
    $this->saveScreenshot($filename, $this->screenshotDir);
  }

  /**
   * This Behat hook runs after every step.
   *
   * @AfterStep
   */
  public function failScreenshots(AfterStepScope $scope) {
    if (!$scope->getTestResult()->isPassed()) {
      $scenario = $this->getScenario($scope);
      if ($scenario->hasTag('javascript')) {
        $scenario_name = urlencode(str_replace(' ', '_', $scope->getSuite()->getName()));
        $filename = sprintf(
          '%s_%s_%s.png',
            $this->getMinkParameter('browser_name'),
          date('Y-m-d_TH_i-s'),
          $scenario_name
        );
        $this->saveScreenshot($filename, $this->screenshotDir);
        print 'Screenshot at: ' . $this->screenshotDir . $filename;
      }
    }
  }

  /**
   * Replace entity tokens in step arguments.
   *
   * Takes tokens in the form {entity_type:property:value} and replaces them
   * with the first found entity ID with the specified property matching value.
   *
   * @Transform /^.*$/
   */
  public function replaceEntityTokens($string) {
    $tokens = array();
    preg_match_all('#{([^:]*):([^:]*):([^:]*)}#', $string, $tokens, PREG_SET_ORDER);
    foreach ($tokens as $token) {
      if (empty($token[1]) || empty($token[2]) || empty($token[3])) {
        throw new \Exception("Invalid path replacement tokens in $string : ". __METHOD__);
      }
      $entity_type = $token[1];
      $property = $token[2];
      $value = $token[3];
      // Run an EFQ as admin to bypass node access.
      $query = new \EntityFieldQuery();
      $query->entityCondition('entity_type', $entity_type)
        ->propertyCondition($property, $value)
        ->addMetaData('account', user_load(1));
      $result = $query->execute();

      if (empty($result[$entity_type])) {
        throw new \Exception("Path replacement tokens in $string find no matches : ". __METHOD__);
      }

      // Replace the token with the first result found.
      $id = array_shift(array_keys($result[$entity_type]));
      $string = str_replace('{' . $entity_type .':' . $property.':' . $value . '}', $id, $string);
    }
    return $string;
  }

  /*************************\
   * Create Node Functions *
  \*************************/

  /**
   * This allows node properties to be passes via $properties argument.
   *
   * @Given I am viewing a/an :type (content)
   * @Given I create a/an :type (content)
   *
   * @override
   */
  public function iCreateNode($type, $properties = array()) {
    $saved = $this->createNode($type, $properties);
    return $saved;
  }


  /**
   * Creates content of the given type and set the title.
   *
   * **IMPORTANT** Use this instead of DrupalContext::createNode() [below]
   *
   * @Given I create a/an :type (content )with the title :title
   *
   * @override
   */
  public function iCreateANodeWithTitle($type, $title) {
    $this->createNode($type, array(
      'title' => $title,
      'body' => $this->getRandom()->string(255),
    ));
  }

  /**
   * Construct a URL.
   *
   * @param string $url
   *   The base URL being constructed.
   *
   * @Given I construct the URL :url
   */
  public function iConstructTheUrl($url) {
    $this->url = $url;
  }

  /**
   * Append to an internally constructed URL.
   *
   * @param string $appendix
   *   The base URL to be appended to..
   *
   * @Given I append :appendix to the constructed URL
   */
  public function iAppendToTheConstructedUrl($appendix) {
    $this->url .= $appendix;
  }

  /**
   * Fills field collection fields with data from table with fields in columns.
   *
   * @param string $field_collection_name
   *   The machine name of the field collecion.
   * @param TableNode $fields_table
   *   The table where each column is a separate field.  First row contains
   *   field machine names.
   *
   * @Given /^I populate "(?P<field_collection_name>[^"]*)" field collections with:$/
   */
  public function iPopulateTheFieldCollectionWith($field_collection_name, TableNode $fields_table) {
    $field_hash = $fields_table->getHash();
    // Are there nodes to work with?
    if (empty($this->nodes)) {
      throw new \Exception("There are no nodes to process.  You need to create some nodes in a prior behat step.");
    }
    // Loop through all previously created nodes and add field collection data.
    foreach ($this->nodes as &$node) {
      // Create the field collection entities.
      $this->createFieldCollections($field_collection_name, $field_hash, $node);
    }
    // Break the reference.
    unset($node);
  }


  /**
   * Populates a field collection image field.
   *
   * @param string $field_collection_name
   *   The machine name of the field collecion.
   * @param string $field_name
   *   The machine name of the image field inside the field collection.
   * @param string $image
   *   The filename of the image already present in the behat/media directory.
   *
   * @Given /^I populate the "(?P<field_collection_name>[^"]*)" field collection image field "(?P<field_name>[^"]*)" with "(?P<image>[^"]*)"$/
   */
  public function iPopulateTheFieldCollectionImageFieldWith($field_collection_name, $field_name, $image) {
    // Are there nodes to work with?
    if (empty($this->nodes)) {
      throw new \Exception("There are no nodes to process.  You need to create some nodes in a prior behat step.");
    }

    foreach ($this->nodes as $node) {
      // Does the node contain a field collection we are looking to add to?
      if (empty($node->{$field_collection_name})) {
        throw new \Exception(sprintf("The field collection '%s' either does not exist or contains no entries. An entry must be created prior to this step.", $field_collection_name));
      }
      foreach ($node->{$field_collection_name} as $language => $language_collections) {
        // Loop through the associated field collections.
        foreach ($language_collections as $attached_collection) {
          $fc = $attached_collection['entity'];

          // Check to see that it doesn't already exist.
          if (!property_exists($fc, $field_name)) {
            $file = $this->createAndUploadFile($image);
            $file->alt = "Here is some alt attribute text.";
            $file->title = "Here is some title attribute text.";
            $file = file_save($file);
            $fc->{$field_name}[$language][] = (array) $file;
            $fc->save();
          }
        }
      }
    }
  }

  /**
   * Adds field collection entry(s) to a node.
   *
   * CAVEAT: This handles cardinality of field collections, but does not handle
   * field level cardinality within a single field collection.
   * CAVEAT: It also only works for the value attribute of a field.
   *
   * @param array $field_collection_hash
   *   Field collection field names and values.
   * @param object $node
   *   Node object for the destination node to associate the fc to.
   */
  public function createFieldCollections($field_collection_name, $field_collection_hash, &$node) {
    $language = (!empty($node->language)) ? $node->language : LANGUAGE_NONE;

    foreach ($field_collection_hash as $cardinal => $fields) {
      $item = entity_create('field_collection_item', array('field_name' => $field_collection_name));
      foreach ($fields as $field_name => $field_value) {
        $item->{$field_name}[$language][] = array('value' => $field_value);
      }
      $item->setHostEntity('node', $node);
      $item->save(TRUE);
    }
  }

  /**
   * Given a filename, uploads the file if it exists and returns file object.
   *
   * @param string $filename
   *   The filename of a file in the local path.
   *
   * @return object
   *   A drupal file object or FALSE if not possible.
   * @throws \Exception
   *   If file is not available or could not be saved in to the file system.
   */
  public function createAndUploadFile($filename) {
    if ($this->getMinkParameter('files_path')) {
      $full_path = rtrim(realpath($this->getMinkParameter('files_path')), DIRECTORY_SEPARATOR) . DIRECTORY_SEPARATOR . $filename;
      if (is_file($full_path)) {
        $filename = $full_path;
      }
    }

    $data = file_get_contents($filename);
    if ($data === FALSE) {
      throw new \Exception(sprintf("Could not upload the file from '%s'.  It may be missing.", $filename));
    }
    $destination = file_create_filename(basename($filename), file_default_scheme() . '://');
    $file = file_save_data($data, $destination);
    if ($file === FALSE) {
      throw new \Exception(sprintf("Could not save the file from '%s'.  The destination '%s' may not exist or have incorrect permissions.", $filename, $destination));
    }
    return $file;
  }

  /**
   * Populates required fields before node creation.
   *
   * @beforeNodeCreate
   */
  public function nodePreSave(EntityScope $scope) {
    $node = $scope->getEntity();

    // Prevent bug caused by pathauto menu rebuild outside of Drupal context.
    // @see http://previousnext.com.au/blog/using-behat-and-drupaldriver-beware-pathauto
    $node->path = (empty($node->path)) ? array() : $node->path;
    if (module_exists('pathauto')) {
      $node->path['pathauto'] = 0;
    }

    if (empty($node->title)) {
      $node->title = $this->getRandom()->name(10);
    }
    // https://www.drupal.org/files/issues/token-fix-node-insert-error.patch
    if (module_exists("comment")) {
      $node->comment_count = isset($node->comment_count) ? $node->comment_count : 0;
    }

    $this->convertNodeRelativeDateValues($node);
    $this->processStatus($node);
  }

  /**
   * Clean up after node save.
   *
   * @afterNodeCreate
   */
  public function nodePostSave(EntityScope $scope) {
    $node = $scope->getEntity();

    // By default, workbench_moderation delays calling node_save() on new
    // revisions until the PHP proc is being shutdown.
    if (module_exists('workbench_moderation') &&!empty($node->workbench_moderation['published'])) {
      workbench_moderation_store($node);
    }
    $this->addEntity("node", $node);
  }

  /**
   * Modify user entity before saving.
   *
   * @beforeUserCreate
   */
  public function userPreSave(EntityScope $scope) {
    $user = $scope->getEntity();

    // Prevent bug caused by pathauto menu rebuild outside of Drupal context.
    // @see http://previousnext.com.au/blog/using-behat-and-drupaldriver-beware-pathauto
    $user->path = array('pathauto' => 0);
  }

  /**
   * Clean up after user save.
   *
   * @afterUserCreate
   */
  public function userPostSave(EntityScope $scope) {
    $user = $scope->getEntity();
    $this->addEntity("user", $user);
  }


  /**
   * Replaces all $node properties containing 'date:*' with unix epochs.
   *
   * E.g., $node->date with value 'date:tomorrow' would be replaced with unix
   * epoch for tomorrow.  Supports any statement that strtotime supports.
   *
   * @param obj $node
   *   A node that is about to be saved.
   */
  public function convertNodeRelativeDateValues($node) {

    // If a node property contains 'date:*', parse into relative date format.
    foreach ($node as $property => $value) {
      if (is_string($value) && strpos($value, 'date:') !== FALSE) {

        // Get field info to determine date format.
        $field_info = field_info_field($property);

        // Date fields may be start and end dates,
        // e.g., 'date: now, date: tomorrow'.
        $rows = explode('-', $value);
        $new_value = array();
        foreach ($rows as $row) {
          if (strpos($row, 'date:') !== FALSE) {
            $parts = explode(':', $row, 2);
            if ($field_info['type'] == 'date') {
              $new_value[] = gmdate("Y-m-d\TH:i:s", strtotime($parts[1]));
            }
            elseif ($field_info['type'] == 'datestamp') {
              $new_value[] = strtotime($parts[1]);
            }
            elseif ($field_info['type'] == 'datetime') {
              $new_value[] = date(DATE_FORMAT_DATETIME, strtotime($parts[1]));
            }
          }
          else {
            $new_value[] = $row;
          }
        }

        $node->$property = implode(' - ', $new_value);
      }
    }
  }

  /**
   * Sets node status and worbench moderation state of published.
   *
   * @param object $node
   *   The node object about to be saved.
   */
  public function processStatus($node) {
    // Set published status to 1 unless specifically set otherwise.
    if (!property_exists($node, 'status')) {
      $node->status = 1;
    }
    else {
      // Sanitize the value to be an integer. Behat sometimes makes it a string.
      $node->status = (int) $node->status;
    }

    if (module_exists('workbench_moderation')) {
      if (empty($node->workbench_moderation_state_new) && ($node->status !== 0)) {
        // The state is not specifically set, so set it.
        $node->workbench_moderation_state_new = 'published';
      }

      if (!empty($node->workbench_moderation_state_new) && $node->workbench_moderation_state_new == 'published') {
        // Workbench says it is published so make the status agree.
        $node->status = 1;
      }
    }
  }

  /**
   * @Then /^I should not see the following (.*)$/
   */
  public function iShouldNotSeeTheFollowing($texts) {
    $page = $this->getSession()->getPage();
    /** @var $page */
    if (!empty($page)) {
      if (!$page->hasContent($texts) === FALSE) {
        throw new \Exception("The text '" . $texts . "' was found");
      }
    }
  }

  /**
   * Directs to a specific user login history.
   *
   * @param string $username
   *   The username whose history to access.
   *
   * @Given I visit the login history for :username
   */
  public function iVisitTheLoginHistoryFor($username) {
    $user = user_load_by_name($username);
    $session = $this->getSession();
    $session->visit($this->locatePath('/user/' . $user->uid . '/login-history'));
  }

  /**
   * Visit the href of the link element with the provided xpath query.
   *
   * @When I follow the href on the link element with xpath :xpath
   */
  public function iFollowTheHrefOfTheElementWithXPath($xpath) {
    // Get the mink session.
    $session = $this->getSession();

    // Runs the actual query and returns the element.
    $element = $session->getPage()->find(
      'xpath',
      $session->getSelectorsHandler()->selectorToXpath('xpath', $xpath)
    );

    // Errors must not pass silently.
    if (NULL === $element) {
      throw new \InvalidArgumentException(sprintf('Could not evaluate XPath: "%s"', $xpath));
    }

    // OK, let's follow it.
    $path = $element->getAttribute("href");

    $this->getSession()->visit($this->locatePath($path));

  }

}
