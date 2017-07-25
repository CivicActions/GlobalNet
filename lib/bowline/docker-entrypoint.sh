#!/bin/bash -e
set -e

echo using custom entrypoint

[ -e "/var/www/.docker/etc/bashrc" ] && source /var/www/.docker/etc/bashrc

# Set the apache user and group to match the host user.
OWNER=$(stat -c '%u' /var/www)
GROUP=$(stat -c '%g' /var/www)
if [ "$OWNER" != "0" ]; then
  usermod -o -u $OWNER www-data
  groupmod -o -g $GROUP www-data
fi
usermod -s /bin/bash www-data
usermod -d /var/www www-data

echo The apache user and group has been set to the following:
id www-data

exec "$@"
