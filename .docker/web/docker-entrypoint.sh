#!/bin/bash -e
set -e

[ -e "/var/www/.docker/etc/bashrc" ] && source /var/www/.docker/etc/bashrc

# Set the apache user and group to match the host user.
# Optionally use the HOST_USER env var if provided.
if [ "$HOST_USER" ]; then
  OWNER=$(echo $HOST_USER | cut -d: -f1)
  GROUP=$(echo $HOST_USER | cut -d: -f2)
else
  OWNER=$(stat -c '%u' /var/www)
  GROUP=$(stat -c '%g' /var/www)
fi
if [ "$OWNER" != "0" ]; then
  usermod -o -u $OWNER www-data
  groupmod -o -g $GROUP www-data
fi
usermod -s /bin/bash www-data
usermod -d /var/www www-data

echo The apache user and group has been set to the following:
id www-data

exec "$@"
