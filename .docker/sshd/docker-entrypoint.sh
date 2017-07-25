#!/bin/bash

# Create data user
USER_OPTS="-D -s /bin/bash"
OWNER=$(echo $HOST_USER | cut -d: -f1)
if [ "${OWNER}" ]; then
  USER_OPTS="${USER_OPTS} -u ${OWNER}"
fi
GROUP=$(echo $HOST_USER | cut -d: -f2)
if [ "${GROUP}" ]; then
  addgroup -g ${GROUP} data
  if [ "$?" -eq "0" ];then
    USER_OPTS="${USER_OPTS} -G data"
  fi
fi
adduser ${USER_OPTS} data
echo The data user and group has been set to the following:
id data

# Create ssh key
su -c "ssh-keygen -f /home/data/.ssh/id_rsa -t rsa -N ''" data
cp -av /home/data/.ssh/id_rsa.pub /home/data/.ssh/authorized_keys

exec "$@"
