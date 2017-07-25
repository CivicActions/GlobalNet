<?php
/**
 * @file
 * Context definition for Node.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Behat\Behat\Tester\Exception\PendingException;
use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Step definitions for nodes.
 */
class Node extends RawDrupalContext {
  use  \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  /**
   * Directs to a node with a specific title and asserts its presense.
   *
   * @param string $title
   *   The title of the node to be looked up.
   *
   * @Given I visit the node with title :title
   */
  public function iVisitTheNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }

    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}"));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Directs to the delete form for a node with a specific title.
   *
   * @param string $title
   *   The title of the node to be looked up.
   *
   * @Given I visit the delete form for node with title :title
   */
  public function iVisitTheDeleteFormForNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }

    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}/delete"));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Directs to the edit form for a node with a specific title.
   *
   * @param string $title
   *   The title of the node to be looked up.
   *
   * @Given I visit the edit form for node with title :title
   */
  public function iVisitTheEditFormForNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }

    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}/edit"));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Directs to edit form for a node with a specific title on a specific tab.
   *
   * @param string $title
   *   The title of the node to be looked up.
   * @param string $tab
   *   The tab to be looked up.
   *
   * @Given I visit the edit form for node with title :title with open tab :tab
   */
  public function iVisitTheEditFormForNodeWithTitleAndTab($title, $tab) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }

    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}/edit#" . $tab));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }


  /**
   * Directs to the a node with a specific title on a specific tab.
   *
   * @param string $title
   *   The title of the node to be looked up.
   * @param string $tab
   *   The tab to be looked up.
   *
   * @Given I visit the node with title :title with open tab :tab
   *
   * @And I visit the node with title :title with open tab :tab
   */
  public function iVisitTheNodeWithTitleAndTab($title, $tab) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;
    $tab = strtolower($tab);

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }
    $tab = strtolower($tab);
    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}#" . $tab));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }


  /**
   * Directs to a node with a specific title on a specific administrative tab.
   *
   * @param string $title
   *   The title of the node to be looked up.
   * @param string $tab
   *   The tab to be looked up.
   *
   * @Given I visit the node with title :title with open admin tab :tab
   *
   * @And I visit the node with title :title with open admin tab :tab
   */
  public function iVisitTheNodeWithTitleAndAdminTab($title, $tab) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;
    $tab = strtolower($tab);

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }

    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}/" . $tab));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Go to the last created node.
   *
   * @When I visit the last created node
   */
  public function iVisitTheLastCreatedNode() {
    $node = $this->getLastCreatedEntityFromDb('node');
    $this->getSession()->visit($this->locatePath('/node/' . $node->nid));
  }


  /**
   * Visit a file embed form.
   *
   * @Given /^I visit a file embed form$/
   */
  public function iVisitAFileEmbedForm() {
    $session = $this->getSession();
    $url_full = $session->getCurrentUrl();
    $explode = explode("/", $url_full);
    $explode = array_reverse($explode);
    for ($i = 1; $i <= 3; $i++) {
      array_pop($explode);
    }
    $explode = array_reverse($explode);
    $implode = implode("/", $explode);
    $url = '/' . $implode;
    // We're grabbing the Mink session and visiting the file listing page.
    $this->getSession()->visit($this->locatePath('/admin/content/file'));
    // Find the first checkbox in the file listing page,
    // which is conveniently keyed by file id.
    if ($file_link = $this->getSession()
      ->getPage()
      ->find('css', '.file-entity-admin-file-form table tbody tr:first-child td:first-child input[type=checkbox]')
    ) {
      // Found a checkbox for a file, get the value from it - which is the fid.
      $fid = $file_link->getAttribute('value');
      // Now head to the file-embed form media displays in the dialog.
      // Without JavaScript this is of course just a normal page.
      $this->getSession()
        ->visit($this->locatePath('/media/' . $fid . '/format-form?render=media-popup&fields=undefined&destination="' . $url . '"'));
      $this->getSession()
        ->getPage()
        ->fillField("edit-field-file-image-alt-text-und-0-value", "testing");
      $this->getSession()
        ->getPage()
        ->selectFieldOption("edit-format", "original_version");
      $this->getSession()
        ->getPage()
        ->checkField("edit-field-topic-und-0-10-10");
    }
    else {
      // So things went wrong here and we couldn't find a file.
      // So we throw an Exception so the test fails.
      throw new \Exception('Could not find a media file at /admin/content/file');
    }

  }

  /**
   * Visit a node of type with a specific title.
   *
   * @Given /^I visit a "([^"]*)" with the title "([^"]*)"$/
   */
  public function iVisitASingleWithTheTitle($type, $title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->propertyCondition("type", $type);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $node = entity_load_single("node", $id);
      }
    }

    if (isset($node)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/node/{$node->nid}"));
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Safe deletes test data (nodes, files, users) from the drupal db.
   *
   * @param string $token
   *   The token by which to look up and identify test data.
   *
   * @Given I delete test data with :token
   */
  public function iDeleteTestDataWithToken($token) {

    // Delete test nodes.
    $query = new \EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'node')
      ->propertyCondition('title', '(' . $token . ')', 'REGEXP')
      ->range(0, 1000)
      ->execute();
    if (!empty($entities['node'])) {
      $nodes = [];
      foreach ($entities['node'] as $nid => $info) {
        $nodes[] = $nid;
      }
      node_delete_multiple($nodes);
    }
    else {
      // throw new \Exception("No nodes w/ title containing '{$token}' found");
    }

    // Delete test files.
    $query = new \EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'file')
      ->propertyCondition('filename', '(' . $token . ')', 'REGEXP')
      ->range(0, 1000)
      ->execute();
    if (!empty($entities)) {
      foreach (array_shift($entities) as $entity) {
        $file = entity_load('file', $entity->nid);
        file_delete($file);
      }
    }
    else {
      // throw new \Exception("No files w/ title containing '{$token}' found");
    }

  }

}
