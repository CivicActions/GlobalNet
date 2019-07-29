# GlobalNET Platform Version 2 ~ Additional reference documentation

Table of Contents
=================

* [Bowline commands:](#bowline-commands-include)
* [Check Operational Cache status](#check-operational-cache-status)
* [Run Apache Benchmark tests](#run-apache-benchmark-tests)
* [View files in Docker Container](#view-files-in-docker-container)
* [Spinning up a second (or third, or fourth) container](#spinning-up-a-second-or-third-or-fourth-container)

#### Bowline commands include:

- **activate**: Sets up bowline
- **backup**: Create a snapshot of your db called .git-branch.sql.gz
- **behat**: run behat command from inside the container
- **bowline**: show some info about your containers
- **build**: build the containers or start them if already built
- **composer**: php composer run inside the container
- **create-files**: dummy file generator for testing
- **hoist**: N/A - used for adding bowline things to the project such as behat
- **deactivate**: Turns off bowline
- **drush**: Runs drush for the installed sandbox instance
- **enter**: Starts a bash shell inside container
- **fix-perms**: Fixes permissions for Drupal directories
- **import**: Installs local copy of db (stored in .snapshot.sql.gz)
- **invoke_prox**y
- **make-contrib**: Runs an installer script for modules that includes relevant patches when a)adding new modules b) updating existing modules.
- **migrate**: Runs migration steps
- **phpcbf**: PHP code beautifier and fixer inside container
- **phpcs**: PHP code sniffer inside container
- **quick-reload-config**: Quick Reload of Features and modules, does not rebuild search indexes. Used after git pull.
- **reload-config**: Reload Features and modules, rebuilds search indexes. Used after git pull.
- **run**: behat smoke tests
- **settings_init**: makes sure your settings.php file is configured for bowline


## Spinning up a second (or third, or fourth) container

Let's say you are working on a ticket then have an idea or need to look into something
completely different with different code and/or configuration. But you don't want to
lose what you're currently working on. Maybe want to try out something features module,
or configuration module, ...or "foo bar" whatever that is.

```
cd ~/workspace
cp -a gn2 gn2-foo_bar   # complete copy of code base
cd gn2-foo_bar
. bin/activate
build; import  # We're in a new dir so need new containers
```

The `docker-compose ps` command will display what is currently running


### Run Apache Benchmark tests

In your docker container:

```bash
enter ab -n100 -c1 http://localhost/globalnet
```

Copy the results and share

### Check Operational Cache status

OpCache:

```bash
wget https://raw.github.com/rlerdorf/opcache-status/master/opcache.php
mv opcache.php docroot
```

 and visit `http://gn2.localtest.me/opcache.php`


### View files in Docker Container

```
enter
```
To leave the docker container files:

```
exit
```
