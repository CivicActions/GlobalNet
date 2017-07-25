<?php
/**
 * @file
 * API related context.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Behat\Behat\Tester\Exception\PendingException,
    Behat\Behat\Context\SnippetAcceptingContext;

use Drupal\DrupalExtension\Context\RawDrupalContext,
    Drupal\DrupalDriverManager;

/**
 * Api context.
 */
class Api extends RawDrupalContext implements SnippetAcceptingContext {

  public $response = array();

  protected $client;

  protected $apiUrl;

  private $drupal;

  /**
   * Get Mink session from main context.
   */
  public function getSession($name = NULL) {
    return $this->getMainContext()->getSession($name);
  }

  /**
   * Getter.
   */
  public function getClient() {
    if (!$this->client) {

      $this->client = new Guzzle\Service\Client();
      $this->client->setDefaultOption('verify', FALSE);
    }
    return $this->client;
  }

  /**
   * Setter for the url of the API.
   *
   * @param string $url
   *   The rul to be used for the API.
   */
  public function setApiUrl($url) {
    $this->apiUrl = $url;
  }

  /**
   * Handles getting past Shield http authentication.
   *
   * @param object $request
   *   The http request object.
   */
  public function setHttpAuth($request) {
    $username = variable_get('shield_user');

    // The way we are deactivating shield in our local environments is by
    // setting the user to empty. That won't work for us, so let's go to
    // a default.
    if (empty($username)) {
      $username = "admin";
    }

    // Module exists check is failing in integration.
    if (module_exists('shield') && $username) {
      $password = variable_get('shield_pass');
    }
    else {
      // Let's set the password default to what it is now.
      // @todo.. this is no bueno, I should use drush to get this info from
      // the destination.
      $password = "BdeiRm3P9Fdk";
    }

    $request->setAuth($username, $password);
  }

  /**
   * Requests a given path.
   *
   * @param string $path
   *   The path to request.
   *
   * @Given /^I call "([^"]*)"$/
   *
   * @Todo  This should probably throw an exception.
   */
  public function iCall($path) {
    if ($this->apiUrl) {
      $url = "{$this->apiUrl}/{$path}";
    }
    else {
      $url = $this->getMainContext()->locatePath($path);
    }

    $client = $this->getClient();

    $request = $client->get($url);
    $this->setHttpAuth($request);

    $this->response = $request->send();
  }

  /**
   * Retreives a constructed url and requests it.
   *
   * @Given /^I call the constructed URL$/
   */
  public function iCallTheConstructedUrl() {
    $url = $this->getMainContext()->url;
    $this->iCall($url);
  }

  /**
   * Asserts the presence of content in a response.
   *
   * @Then /^I should get a response$/
   *
   * @throws Exception if the page body was empty.
   */
  public function iShouldGetAResponse() {
    $body = $this->response->getBody(TRUE);
    if (empty($body)) {
      throw new \Exception('Did not get a response from the API');
    }
  }

  /**
   * Asserts that the content found was in JSON format.
   *
   * @Given /^the response should be JSON$/
   *
   * @throws Exception if the results are not JSON.
   */
  public function theResponseShouldBeJson() {
    $body = $this->response->getBody(TRUE);
    $data = json_decode($body);

    if (empty($data)) {
      throw new \Exception("Response was not JSON" . $body);
    }
    if (is_array($data) && isset($data[0]) && empty($data[0])) {
      throw new \Exception("JSON response was empty.");
    }
  }

  /**
   * Asserts the minimum number of results the JSON response should contain.
   *
   * @param int $count
   *   The minimum number of results that should be found.
   *
   * @Given /^the JSON response should contain at least (\d+) results$/
   * @Given /^the JSON response should contain at least (\d+) result$/
   *
   * @throws Exception if the minimum number of results were not found.
   */
  public function theJsonResponseShouldContainAtLeastResults($count) {
    $body = $this->response->getBody(TRUE);
    $data = json_decode($body);
    if (empty($data->results) || count($data->results) < $count) {
      throw new \Exception("The JSON response did not contain at least $count results" . $body);
    }
  }

  /**
   * Asserts the number of results the JSON response should contain.
   *
   * @param int $count
   *   The number of results that should be found.
   *
   * @Given /^the JSON response should contain exactly (\d+) results$/
   * @Given /^the JSON response should contain exactly (\d+) result$/
   *
   * @throws Exception if the number of results were not found.
   */
  public function theJsonResponseShouldContainExactlyResults($count) {
    $body = $this->response->getBody(TRUE);
    $data = json_decode($body);
    if (empty($data->results)
        || count($data->results) != $count
        || !isset($data->metadata->resultset->pagesize)
        || $data->metadata->resultset->pagesize != $count) {
      throw new \Exception("The JSON response did not exactly $count result(s)" . $body);
    }
  }

  /**
   * Asserts the presense of data in a JSON feed.
   *
   * @Given /^the JSON response should contain metadata$/
   *
   * @throws Exception if the body of the current location contains no JSON
   *   data.
   */
  public function theJsonResponseShouldContainMetadata() {
    $body = $this->response->getBody(TRUE);
    $data = json_decode($body);
    if (!isset($data->metadata->responseInfo->status)
        || !isset($data->metadata->responseInfo->developerMessage)
        || !isset($data->metadata->resultset->count)
        || !isset($data->metadata->resultset->pagesize)
        || !isset($data->metadata->resultset->page)
        || !isset($data->metadata->executionTime)) {
      throw new \Exception("The JSON response did contain the expected metadata." . $body);
    }
  }
}
