<?php
/**
 * @file
 * Organization views field handler.
 */

 /**
  * Organization views handler.
  */
class gn2_context_handler_organization_short extends views_handler_field {
  /**
   * Constructor.
   */
  public function construct() {
    parent::construct();
  }

  /**
   * Renders the field handler.
   */
  public function render($values) {
    $value = $this->get_value($values);
    $p = new GN2PathToOrganization(node_load($value));
    $org = $p->getOrganization();
    return $org->field_org_short_title[LANGUAGE_NONE][0]['value'];
  }

}
