<?php
/**
 * @file
 * Context definition for ViewsContext.
 */
namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\DrupalContext,
    Drupal\DrupalExtension\Event\EntityEvent,
    Drupal\Component\Utility\Random;

use Behat\Behat\Context\BehatContext,
    Behat\Behat\Context\Step,
    Behat\Behat\Context\Step\Given;

/**
 * Copied from PanopolyContext.php
 */
class Utility extends BehatContext {
  /**
   * Get Mink session from main context.
   */
  public function getSession($name = NULL) {
    return $this->getMainContext()->getSession($name);
  }

  /**
   * Step function enters random field values into fields.
   *
   * @Given /^for "(?P<field>[^"]*)" I enter random string "(?P<length>[^"]*)"$/
   * @Given /^I enter random string "(?P<length>[^"]*)" for "(?P<field>[^"]*)"$/
   */
  public function assertEnterRandomStringField($field, $length) {
    $value = Random::string($length);
    // Use the Mink Extension step definition.
    return new Given("I fill in \"$field\" with \"$value\"");
  }

  /**
   * Step function enters random name values into field.
   *
   * @Given /^for "(?P<field>[^"]*)" I enter random name "(?P<length>[^"]*)"$/
   * @Given /^I enter random name "(?P<length>[^"]*)" for "(?P<field>[^"]*)"$/
   */
  public function assertEnterRandomNameField($field, $length) {
    $value = Random::name($length);
    // Use the Mink Extension step definition.
    return new Given("I fill in \"$field\" with \"$value\"");
  }

  /**
   * Override MinkContext::fixStepArgument().
   *
   * Make it possible to use [random].
   * If you want to use the previous random value [random:1].
   */
  public function fixStepArgument($argument) {
    $argument = str_replace('\\"', '"', $argument);

    // Token replace the argument.
    static $random = array();
    for ($start = 0; ($start = strpos($argument, '[', $start)) !== FALSE;) {
      $end = strpos($argument, ']', $start);
      if ($end === FALSE) {
        break;
      }
      $random_generator = new Random();
      $name = substr($argument, $start + 1, $end - $start - 1);
      if ($name == 'random') {
        $this->vars[$name] = $random_generator->name(8);
        $random[] = $this->vars[$name];
      }
      // In order to test previous random values stored in the form,
      // suppport random:n, where n is the number or random's ago
      // to use, i.e., random:1 is the previous random value.
      elseif (substr($name, 0, 7) == 'random:') {
        $num = substr($name, 7);
        if (is_numeric($num) && $num <= count($random)) {
          $this->vars[$name] = $random[count($random) - $num];
        }
      }
      if (isset($this->vars[$name])) {
        $argument = substr_replace($argument, $this->vars[$name], $start, $end - $start + 1);
        $start += strlen($this->vars[$name]);
      }
      else {
        $start = $end + 1;
      }
    }
    return $argument;
  }
}
