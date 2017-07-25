<?php
/**
 * @file
 * File for common methods that can be shared among contexts.
 */
namespace CivicActions\Drupal\Behat\Bootstrap\Helper;

use Drupal\DrupalExtension\Hook\Scope\EntityScope;
use Behat\Behat\Hook\Scope\AfterStepScope;

trait All {
  // WARNING: Absolutely no step functions can be declared in this trait.

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\Entity;

  /**
   * Returns the current, relative path.
   *
   * Simply using Drupal's current_path() or $_GET['q'] does not work.
   *
   * @return string
   *   The path.
   */
  public function getCurrentPath() {
    $url = $this->getSession()->getCurrentUrl();
    $parsed_url = parse_url($url);
    $path = trim($parsed_url['path'], '/');

    return $path;
  }

  /**
   * Performs a soft reload by re-visting the same URL rather than refreshing.
   */
  public function softReload() {
    $path = $this->getSession()->getCurrentUrl();
    $this->getSession()->visit($path);
  }

  /**
   * Determines whether the current browser is Internet Explorer.
   *
   * @return int
   *   If the browser is IE, the IE version will be returned. Otherwise, -1.
   */
  public function getIeVersion() {
    $ie_version = $this->getSession()->evaluateScript('
      var rv = -1; // Return value assumes failure.
      if (navigator.appName == "Microsoft Internet Explorer")
      {
        var ua = navigator.userAgent;
        var re  = new RegExp("MSIE ([0-9]{1,}[\.0-9]{0,})");
        if (re.exec(ua) != null)
          rv = parseFloat( RegExp.$1 );
      }
      return rv;
    ');

    return $ie_version;
  }

  /**
   * Waits some time or until JS condition turns true.
   *
   * @param int $time
   *   Time in milliseconds.
   * @param string $condition
   *   JS condition.
   * @param int $interval
   *   Interval in milliseconds.
   *
   * @return bool
   *   Success.
   *
   * @see Selenium2Driver->wait()
   */
  public function wait($time, $condition, $interval = 1000) {
    $script = "return $condition;";
    $start = microtime(TRUE);
    $end = $start + $time / 1000.0;

    do {
      $result = $this->getSession()->evaluateScript($script);
      usleep($interval * 1000);
    } while (microtime(TRUE) < $end && !$result);

    return (bool) $result;
  }

  /**
   * Return the name of the current scenario.
   *
   * @param AfterStepScope $scope
   *   The current context scope.
   *
   * @return ScenarioInterface
   *   \Behat\Gherkin\Node\ScenarioInterface
   */
  private function getScenario(AfterStepScope $scope) {
    $scenarios = $scope->getFeature()->getScenarios();
    foreach ($scenarios as $scenario) {
      $step_lines_in_scenario = array_map(
        function ($step) {
          return $step->getLine();
        },
        $scenario->getSteps()
      );
      if (in_array($scope->getStep()->getLine(), $step_lines_in_scenario)) {
        return $scenario;
      }
    }
    throw new \LogicException('Unable to find the scenario');
  }

  /**
   * Helper function to login the current user.
   *
   * This had to be overridden to support the addition of the legal module
   * which redirects a user to accept the rules of behavior.
   *
   * @Override
   */
  public function login() {
    // Check if logged in.
    if ($this->loggedIn()) {
      $this->logout();
    }

    if (!$this->user) {
      throw new \Exception('Tried to login without a user.');
    }

    $this->getSession()->visit($this->locatePath('/user'));
    $element = $this->getSession()->getPage();
    $element->fillField($this->getDrupalText('username_field'), $this->user->name);
    $element->fillField($this->getDrupalText('password_field'), $this->user->pass);
    $submit = $element->findButton($this->getDrupalText('log_in'));
    if (empty($submit)) {
      throw new \Exception(sprintf("No submit button at %s", $this->getSession()->getCurrentUrl()));
    }

    // Log in.
    $submit->click();

    // Adds support for accepting the ROB.
    if (!strpos($this->getSession()->getCurrentUrl(), 'legal_accept')) {
      // Calls step definition above.
      throw new \Exception(sprintf("Legal accept was not found at %s", $this->getSession()->getCurrentUrl()));
    }
    $this->iAcceptTheTaC();

    if (!$this->loggedIn()) {
      throw new \Exception(sprintf("Failed to log in as user '%s' with role '%s'", $this->user->name, $this->user->role));
    }
  }

  /**
   * Returns node currently being viewed. Assumes /node/[nid] URL.
   *
   * Using path-based loaders, like menu_load_object(), will not work.
   *
   * @return object
   *   The currently viewed node.
   *
   * @throws Exception
   */
  public function getNodeFromUrl() {
    $path = $this->getCurrentPath();
    $system_path = drupal_lookup_path('source', $path);
    if (!$system_path) {
      $system_path = $path;
    }
    $menu_item = menu_get_item($system_path);
    if ($menu_item['path'] == 'node/%') {
      $node = node_load($menu_item['original_map'][1]);
    }
    else {
      throw new \Exception(sprintf("Node could not be loaded from URL '%s'", $path));
    }
    return $node;
  }
}
