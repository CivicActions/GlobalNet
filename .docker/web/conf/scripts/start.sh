#!/bin/bash -e

export PATH=$HOME/bin:$PATH

# Create required directories just in case.
mkdir -p /var/www/logs /var/www/files-private
echo "*" > /var/www/logs/.gitignore

# Use project's drush if exists.
if [[ -e /var/www/vender/drush ]]; then
  export DRUSH="/var/www/vendor/drush/drush/drush"
  ln -s $DRUSH /usr/local/bin/drush
fi

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

/etc/apache2/foreground.sh
