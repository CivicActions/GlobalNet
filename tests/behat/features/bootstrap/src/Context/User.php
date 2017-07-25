<?php
namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext;

class User extends RawDrupalContext {
  /**
   * @Given I check the box for user whose name is :username
   */
  public function iCheckTheBoxForUserWhoseNameIs($username) {
    $user = user_load_by_name($username);

    if (isset($user)) {
      $this->getSession()->getPage()->checkField($user->uid);
    } else {
      throw new \Exception('User with name "' . $username . '" does not exist');
    }
  }

}
