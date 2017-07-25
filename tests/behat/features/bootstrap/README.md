#Behat Bootstrap

This is a repo for standardizing our Behat step functions.

## Configuration

To make further development easier, we have opted to organize the code using the PSR-4 standard.
For Behat to be able to utilize our context we must connect our code with the autoloder related to Behat, most likely composer's autoloader.

To do this simply add something like this to the composer.json file of your project.

```
"autoload-dev": {
    "psr-4": {
        "CivicActions\\Drupal\\Behat\\Bootstrap\\": "tests/behat/features/bootstrap/src"
    }
},
```
```CivicActions\\Drupal\\Behat\\Bootstrap\\``` is the namespace used by our code, and ```tests/behat/features/bootstrap/src``` should be the path to the ```src``` directory inside of this repository.

Loading different contexts can be easily accomplished by adding something like this to your behat.yml configuration file:
```
default:
  suites:
    default:
      contexts:
        - CivicActions\Drupal\Behat\Bootstrap\Context\Api
        - CivicActions\Drupal\Behat\Bootstrap\Context\Base
        - CivicActions\Drupal\Behat\Bootstrap\Context\Dom
        - CivicActions\Drupal\Behat\Bootstrap\Context\Node
        - CivicActions\Drupal\Behat\Bootstrap\Context\Og
        - CivicActions\Drupal\Behat\Bootstrap\Context\Panels
        - CivicActions\Drupal\Behat\Bootstrap\Context\Search
        - CivicActions\Drupal\Behat\Bootstrap\Context\Specific
        #- CivicActions\Drupal\Behat\Bootstrap\Context\Utility
        - CivicActions\Drupal\Behat\Bootstrap\Context\User
        - CivicActions\Drupal\Behat\Bootstrap\Context\Views
        - Drupal\DrupalExtension\Context\DrupalContext
        - Drupal\DrupalExtension\Context\MinkContext
        - Drupal\DrupalExtension\Context\MessageContext
        - Drupal\DrupalExtension\Context\MarkupContext
        - Drupal\DrupalExtension\Context\DrushContext
```

Then run (in activate container) ``` composer update```



## Bootstrap Maintainers

If you are maintaining the bootstrap repo within a site, you will want to run
run the following command inside this directory so that local site related
changes to CustomContext.php do not get tracked and committed as part of the
bootstrap repository.

```
git update-index --assume-unchanged FeaturesContext.php
git update-index --assume-unchanged CustomCommonMethods.php
```
