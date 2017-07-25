Annotates queries with debug information to make it easier to identify the source.

To use, copy or symlink this directory into the docroot/includes/database directory and add the following to your settings.php, after the $databases configuration.
$databases['default']['default']['driver'] = 'mysqlv';
