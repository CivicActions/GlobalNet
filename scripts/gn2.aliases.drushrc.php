<?php

/**
 * @file
 * GlobalNET V2 Drush Aliases.
 */

// Vhost: prod ; site: Live site V2
$aliases['prod'] = array(
  'root' => '/var/www/prod/docroot',
  'uri' => 'https://globalnetplatform.org',
  'remote-host' => 'v2-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

// Vhost: stage ; site: stage. For UAT.
$aliases['stage'] = array(
  'root' => '/var/www/stage/docroot',
  'uri' => 'https://stage.globalnetplatform.org',
  'remote-host' => 'v2-stage-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

// Vhost: stage ; site: learn. For Training.
$aliases['learn'] = array(
  'root' => '/var/www/learn/docroot',
  'uri' => 'https://learn.globalnetplatform.org',
  'remote-host' => 'v2-stage-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

// Vhost: stage ; site: stable. For Regressions management.
$aliases['stable'] = array(
  'root' => '/var/www/stable/docroot',
  'uri' => 'https://stable.globalnetplatform.org',
  'remote-host' => 'v2-stage-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

// Vhost: dev ; site: dev. For development.
$aliases['dev'] = array(
  'root' => '/var/www/dev/docroot',
  'uri' => 'https://dev.globalnetplatform.org',
  'remote-host' => 'v2-dev-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

// Vhost: dev ; site: dev. For development.
$aliases['devtest'] = array(
  'root' => '/var/www/devtest/docroot',
  'uri' => 'https://devtest.globalnetplatform.org',
  'remote-host' => 'v2-dev-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

//
// The following sites are temprary during initial development.
//
// Vhost: stage ; site: migrate. For Migrations.
$aliases['migrate'] = array(
  'root' => '/var/www/migrate/docroot',
  'uri' => 'https://migrate-test.globalnetplatform.org',
  'remote-host' => 'v2-stage-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);

// Vhost: dev ; site: microtext. For development.
$aliases['microtext'] = array(
  'root' => '/var/www/microtext/docroot',
  'uri' => 'https://microtext.globalnetplatform.org',
  'remote-host' => 'v2-dev-ssh.globalnetplatform.org',
  'remote-user' => 'globalnet',
  'ssh-options' => '-q',
);
