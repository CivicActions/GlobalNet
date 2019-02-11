#!/bin/bash -e
set -e

[ -e "/var/www/.docker/etc/bashrc" ] && source /var/www/.docker/etc/bashrc

# Create required directories just in case.
mkdir -p /var/www/logs/php-fpm /var/www/files-private /var/www/docroot
echo "*" > /var/www/logs/.gitignore

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
  echo "Setting apache uid to ($OWNER) and gid to ($GROUP)"
  usermod -o -u $OWNER apache
  groupmod -o -g $GROUP apache
  id apache
fi

exec "$@"
