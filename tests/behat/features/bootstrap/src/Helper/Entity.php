<?php
/**
 * @file
 * Shared functions useful to multiple contexts.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Helper;

use Drupal\DrupalExtension\Hook\Scope\EntityScope,
  Drupal\Driver\Fields\Drupal7;
use Behat\Behat\Hook\Scope\AfterStepScope;


/*
 * A collection of methods related to entities to be used in any context.
 */
trait Entity {

  // WARNING: Absolutely no step functions can be declared in this trait.

  /**
   * An array of entities created during our tests.
   *
   * @var object
   */
  protected $entities = array();


  /**
   * Overrides the parent createNode() method.
   *
   * This allows node properties to be passes via $properties argument.
   *
   * @override
   */
  public function createNode($type, $properties = array()) {
    // Set defaults. These may be overridden via $properties.
    $node = (object) array(
      'title' => $this->getRandom()->string(15),
      'type' => $type,
    );

    // Set node properties.
    if ($properties) {
      foreach ($properties as $key => $value) {
        $node->$key = $value;
      }
    }

    // From: DrupalExtension/Context/RawDrupalContext.php
    $saved = $this->nodeCreate($node);

    // Set internal page on the new node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));

    return $saved;
  }

  /**
   * Add an entity to our entities array to keep track of it.
   */
  public function addEntity($type, $entity) {
    $info = entity_get_info($type);
    $id_key = $info["entity keys"]["id"];
    $this->entities[$type][$entity->{$id_key}] = $entity;
  }

  /**
   * Get all of the entity's created during tests of a given entity type.
   *
   * @param string $type
   *   The entity type.
   *
   * @return array
   *   An array of entities.
   */
  public function getEntitiesOfType($type) {
    $entities = array();

    if (!empty($this->entities[$type])) {
      $entities = $this->entities[$type];
    }
    return $entities;
  }

  /**
   * Get the last created entity of a given type.
   *
   * @param string $type
   *   An entity type.
   *
   * @return object
   *   Then last entity created of the given type.
   */
  public function getLastCreatedEntity($type) {
    $entities = $this->getEntitiesOfType($type);
    $entity = end($entities);
    return $entity;
  }

  /**
   * Returns the most recently created node.
   *
   * @param string $node_type
   *   The node type to search for the last created node. (optional)
   *
   * @return object
   *   The most recently created node.
   */
  public function getLastCreatedNode($node_type = NULL) {
    if (empty($node_type)) {
      // No node_type was specified, so just return the last node created.
      $node = $this->getLastCreatedEntity("node");
    }
    else {
      $entities = $this->getEntitiesOfType('node');
      // Remove any entity that is not of type $node_type.
      foreach ($entities as $nid => $entity) {
        if ($node_type !== $entity->type) {
          unset($entities[$nid]);
        }
      }
      if (empty($entities)) {
        throw new \Exception("No recently created '{$node_type}'  was found.");
      }
      else {
        $node = end($entities);
      }
    }

    return $node;
  }

  /**
   * Returns the most recently created node.
   *
   * @return object
   *   The most recently created node.
   */
  public function getLastCreatedNodeFromDb() {
    return $this->getLastCreatedEntityFromDb("node");
  }

  /**
   * Get the last created entity of a type and bundle from the db.
   */
  public function getLastCreatedEntityFromDb($entity_type, $bundle = NULL) {
    return $this->getCreatedEntityFromDb($entity_type, $bundle);
  }

  /**
   * Fetches the last created entity of a given type from the local db.
   *
   * @param string $entity_type
   *   The machine name of the entity type. E.g., node, user, file, etc.
   *
   * @return mixed|null
   *   Returns the entity object, or else NULL if none was found.
   */
  public function getCreatedEntityFromDb($entity_type, $bundle = NULL, $index = 0) {
    switch ($entity_type) {
      case 'node':
        // Needed because behat temp nodes don't have timestamps.
        $order_by = 'nid';
        break;

      case 'file':
        $order_by = 'timestamp';
        break;

      default:
        $order_by = 'created';
        break;
    }

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', $entity_type);
    if ($bundle) {
      $query->entityCondition('bundle', $bundle, "=");
    }
    $query->propertyOrderBy($order_by, 'DESC');
    $query->range($index, 1);
    $results = $query->execute();
    foreach ($results[$entity_type] as $id => $info) {
      return entity_load_single($entity_type, $id);
    }
    return NULL;
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

  /**
   * Lookup the entity id based on property value.
   *
   * @param string $entity_type
   *   The entity type to search in. Defaults to node.
   *
   * @param string $bundle
   *   The machine name of the $bundle type search within.
   *
   * @param string $property
   *   The entity property to search within.
   *
   * @param string $value
   *   The value of the entity property to search for.
   *
   * @return int
   *   Entity ID if found or NULL.
   *
   * @throws Exception
   */
  public function lookupEntityByProperty($entity_type, $bundle, $property, $value) {
    $query = new \EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', $entity_type)
      ->entityCondition('bundle', $bundle)
      ->propertyCondition($property, $value)
      ->execute();

    if (!empty($entities[$entity_type])) {
      $entity = end($entities[$entity_type]);
      $entity_info = entity_get_info($entity_type);
      $key = $entity_info['entity keys']['id'];

      return $entity->$key;
    }
    else {
      throw new \Exception("No $bundle $entity_type with $property = '$value' was found.");
    }
  }
}
