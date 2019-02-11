<?php
/**
 * @file
 * Extract a group id from different sources in different ways.
 */

/**
 * A group id extractor.
 */
class GN2GroupIDExtractor {

  private $node = NULL;
  private $formState = NULL;

  /**
   * Setter.
   */
  public function setNode($node) {
    $this->node = $node;
  }

  /**
   * Setter.
   */
  public function setFormState($form_state) {
    $this->formState = $form_state;
  }

  /**
   * Try to extract the group id in different ways from the info given.
   */
  public function extract() {
    $gid = self::fromUrl();
    if (!isset($gid) && isset($this->formState)) {
      $gid = self::fromFormState($this->formState);
    }
    if (!isset($gid) && isset($this->node)) {
      $gid = self::fromNode($this->node);
    }
    return $gid;
  }

  /**
   * Return an array with the group nodes from the given node.
   */
  public static function getParentGroups($node) {
    $items = field_get_items("node", $node, "og_group_ref");
    if (!$items) {
      $items = array();
    }

    $node_loader = function($value) {
      $nid = $value['target_id'];
      return node_load($nid);
    };

    return array_map($node_loader, $items);
  }

  /**
   * Get the group id from a node.
   */
  public static function fromNode($node) {
    // Lets check if we are cheating by setting the context without an actual
    // field.
    if (isset($node->gn2_gid)) {
      return $node->gn2_gid;
    }

    $org = NULL;
    foreach (GN2GroupIDExtractor::getParentGroups($node) as $group) {
      if ($group->type != "organization") {
        return $group->nid;
      }
      elseif ($group->type == "organization") {
        $org = $group;
      }
    }

    // We want to give priority to group ids, but if all we have is
    // an org id, then lets send that.
    if (isset($org)) {
      return $org->nid;
    }

    return NULL;
  }

  /**
   * Get a group id from the form state.
   */
  public static function fromFormState($form_state) {
    if (isset($form_state['values']['og_group_ref'][LANGUAGE_NONE])) {
      // In the most general case we can have 2 ogs, the group and the
      // organization, we need to find which one is the group.
      foreach ($form_state['values']['og_group_ref'][LANGUAGE_NONE] as $info) {
        $nid = $info['target_id'];
        $node = node_load($nid);
        if ($node->type != "organization") {
          return $node->nid;
        }
        elseif ($node->type == "organization") {
          $org = $node;
        }
      }

      // We want to give priority to group ids, but if all we have is
      // an org id, then lets send that.
      if (isset($org)) {
        return $org->nid;
      }
    }
    return NULL;
  }

  /**
   * Get a group id from the url.
   */
  public static function fromUrl() {
    $params = drupal_get_query_parameters();
    if (isset($params['gid'])) {
      $gid = $params['gid'];
      $node = node_load($gid);
      if ($node && og_is_group("node", $node)) {
        return $gid;
      }
    }
    return NULL;
  }

}
