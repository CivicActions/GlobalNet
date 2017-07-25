<?php
/**
 * @file
 * API around the path from a node to the upmost organization.
 *
 * In GlobalNet group relations create a tree strcutre in which a path from
 * any content to a topmost Organization group can be found.
 * This class creates an API around this path.
 */

/**
 * Implementation of GN2PathToOrganization.
 */
class GN2PathToOrganization {
  private $node;
  private $path = array();

  /**
   * Constructor.
   */
  public function __construct($node) {
    $this->node = $node;
    $this->pathToOrganization();
  }

  /**
   * Get all the group nodes between the current node, and the organization.
   *
   * The big assumption is that each node is only connected to 1
   * non-organization group, and that the upmost group is the organization.
   */
  private function pathToOrganization() {
    $node = $this->node;
    while ($group = GN2PathToOrganization::nextGroupUp($node)) {
      $this->path[] = $group;
      $node = $group;
    }
  }

  /**
   * Return the organization.
   *
   * The organization is the last element in the path.
   *
   * @return object
   *   The organization node object.
   */
  public function getOrganization() {

    if ($this->node->type == "organization") {
      return $this->node;
    }
    $last_index = count($this->path) - 1;
    return isset($this->path[$last_index]) ? $this->path[$last_index] : NULL;
  }

  /**
   * Return the org's child on the path from our node.
   *
   * But only return it if the path is greater or equal in size to 3. Otherwise,
   * we are returning the node's parent (A different concept for our use case)
   */
  public function getOrganizationChild() {
    $index = count($this->path) - 2;
    if ($index >= 1) {
      return $this->path[$index];
    }

    return NULL;
  }

  /**
   * Get the parent group.
   *
   * The parent is the first element in the path. But it only gets returned
   * if we have more than or 2 elements in the path, otherwise we are returning
   * the organization.
   */
  public function getParent() {
    if (count($this->path) >= 2) {
      return $this->path[0];
    }

    return NULL;
  }

  /**
   * Return the next group that is not an organization.
   */
  public static function nextGroupUp($node) {
    $gid = GN2GroupIDExtractor::fromNode($node);
    if ($gid) {
      return node_load($gid);
    }
    else {
      return NULL;
    }
  }

}
