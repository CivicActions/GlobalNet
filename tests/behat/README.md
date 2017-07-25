# Running Behat Tests

### Requirements
- A running [GlobalNET v2 D7 Sandbox](https://git.civicactions.net/dsca/globalnet2/tree/develop/readme.md)

#### Documentation
- [Behat documentation](http://behat.readthedocs.org/en/latest/)
  - [Writing Features in the Gherkin Language](http://docs.behat.org/en/latest/guides/1.gherkin.html)
  - [Behat Drupal Extension](http://behat-drupal-extension.readthedocs.org/en/3.0/)
- [What’s in a Story?](http://dannorth.net/whats-in-a-story/)
- [Organizing Behat Tests in GlobalNET](https://git.civicactions.net/dsca/globalnet2/wikis/organizing-behat-tests)

## Bowline activated
Make sure you have Bowline activated with `. bin/activate` before running tests.

### Run basic Behat smoke tests
- `run`

### Run all available tests
- `run full`

## Directly invoke behat for greater control/testing in a sandbox

### Run a specific test (e.g. the Message.feature)
- `behat tests/behat/features/Message.feature`

#### List all the currently defined and available test steps
- `behat -dl`
- `behat -di`      # more verbose
- `behat -d visit` # list commands with 'visit' in them

## Running Javascript Tests in Browser

### Default browser, PhantomJS

Tests will automatically use the lightweight PhantomJS browser for tests tagged with @javascript. This is run in Docker and there are no dependencies or setup needed.

### Testing with Firefox

To run tests in Firefox, run behat with the option `--browser=firefox`. This is run in Docker and there are no dependencies or setup needed (you do not need a local Firefox installed).
- `behat --browser=firefox`

### Testing with Chrome

To run tests in Chrome, run behat with the option `--browser=chrome`. This is run in Docker and there are no dependencies or setup needed (you do not need a local Chrome installed).
- `behat --browser=chrome`

### Debugging browser tests

There are 3 options for debugging tests that run in a browser.
- Failing browser tests will create a screenshot in the logs directory - you may be able to see the issue by examining the logs.
- For Firefox and Chrome you can connect to the browser using a VNC Viewer (these are built into most Linux and OS X installs) - when you run the tests the output will show the IP you need to connect to - use the password "secret".
- For more complex fails you can also connect tests to a local browser - see below.

### Using a local Firefox browser

This is not required for running regular tests, but may be useful if debugging complex issues.

You will require:
- Java JDK _(with the `java` command line function)_
- Firefox
- Selenium Server _(install instructions below)_

#### Download Selenium Server (needed for javascript testing)
_From http://www.seleniumhq.org/download/ (current version is 2.50.0)_
- `mkdir ~/workspace/selenium`
- `mv ~/Downloads/selenium-server-standalone-2.50.0.jar ~/workspace/selenium/selenium.jar`

#### Start Selenium Server
_In a separate terminal session, run the following commands:_
- ` cd ~/workspace/selenium`
- `java -jar ../selenium/selenium.jar`

## Information specific to GlobalNET v2

### Feature tags
Tags - placed just above a Feature or Scenario definition - are used to organize tests into groups. You can make up and use any tags you want - and use several at a time - but note that several have special meanings or uses in our environment:
- `@api` - required for all our tests to use the Druapl API driver
- `@javascript` - tests that need to be run in a full browser.
- `@smoke` - tags a set of fast executing, non-javascript tests run before every commit
- `@smoke-20` - tags a set of tests for client worse case scenarios
- `@security` - tests that check security and audit features
- `@content` - tests for content types
- `@groups` - testing group functionality
- `@permissions` - tests for user/group access and permissions
- `@wip` - "work in progress" - test may not be functional or otherwise unstable

#### Examples
- `behat --tags='@smoke'` - run all smoke tests
- `behat --tags='~@javascript&&~@wip'` - run all completed non-javascript tests

### The date: keyword
During node creation, a date field containing `date: 3 days ago` will have the relative date format turned into a UNIX epoch for storage. The key id the `date:` string.

#### Examples
- `date: tomorrow`
- `date: yesterday, now + 5 hours` -- _useful for comma-separated start and end dates_

### Contexts
The `local.yml` file defines several custom contexts in addition to the five provided by the (Behat) Drupal Extension. The Drupal Extension was installed by composer under the `vendor/` directory and the custom contexts reside in the `tests/behat/features/bootstrap/` directory. Note that custom step definitions defined in these contexts are more likely to contain bugs. If and when you find a bug in a custom context's step definition, please either fix the step definition or report it (perhaps by creating a JIRA ticket).
