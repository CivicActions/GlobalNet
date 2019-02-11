#!/bin/bash

echo 'Usage: [edit-]load-test [<alias>] [<users>] [<factor>] [<title>]'
echo
echo 'Sets up and runs a load test using a Dockerized JMeter, then cleans up afterwards. When run with the "edit-" prefix, it will use a system JMeter GUI instead - make sure you have at least the "Standard" plugin set from http://jmeter-plugins.org/ installed.'
echo
echo '1st argument is an optional Drush site alias to test against (without an @). Default is "self".'
echo '2nd argument is the optional number of users to test with, max 100. Default is 8.'
echo '3rd argument is an optional factor affecting the number of URLs to visit (in 2 loops). Default is 1, which corresponds to around 35 unique URLs.'
echo '4th argument is an optional title for the test to be uploaded to loadosophia.org. Default is the current Git hash.'
echo

# We run from the tests directory, so paths work as expected with the docker mount.
cd $(dirname $0)/..

# Load test parameters into environment.
# Set defaults
ALIAS=self
PORT=80
PROTO=http
USERS=8
FACTOR=1
TITLE=$(git rev-parse --short HEAD)
if [ ! -z "$1" ]; then
  ALIAS=$1
fi
URI=$(drush @$ALIAS status uri --format=list | grep -v 'inside container, using' | grep -v 'APC all requested flushes done.')
HOST=$(echo $URI | cut -d/ -f3)
if [[ $HOST == *".globalnetplatform.org"* ]]; then
  PORT=443
  PROTO=https
fi
if [ ! -z "$2" ]; then
  USERS=$2
fi
if [ ! -z "$3" ]; then
  FACTOR=$3
fi
if [ ! -z "$4" ]; then
  TITLE="$4"
fi

echo "Preparing $USERS test users and $FACTOR factor URL listing for @$ALIAS at $HOST"
drush @$ALIAS scr '../tests/jmeter/pre-test-logins.php' --users="$USERS" --factor="$FACTOR" | fgrep -v 'inside container, using' | grep -v 'APC all requested flushes done.' | fgrep -v '[status]' > ../tests/jmeter/logins.csv
drush @$ALIAS scr '../tests/jmeter/pre-test-urls.php' --users="$USERS" --factor="$FACTOR" | fgrep -v 'inside container, using' | grep -v 'APC all requested flushes done.' | fgrep -v '[status]' > ../tests/jmeter/urls.csv
echo "Clearing caches for consistent baseline"
drush @$ALIAS cc all 

# For simple command line access we use the docker JMeter, to avoid a dependency.
JMETER="docker run --rm -t -P --name master -v $(pwd)/jmeter:/jmeter cirit/jmeter:base-with-standard-set jmeter.sh -n"
if [ $(basename "$0") == "edit-load-test.sh" ]; then
  # If we are editing, we will need a system JMeter.
  JMETER='jmeter.sh'
fi

echo "Running load test"
$JMETER -p jmeter/jmeter.properties -t jmeter/test.jmx -j jmeter/output.log -l jmeter/results.jtl -JHOST="$HOST" -JPORT="$PORT" -JPROTO="$PROTO" -JUSERS="$USERS" -JTITLE="$TITLE"

echo "Blocking test users"
drush @$ALIAS scr '../tests/jmeter/post-test.php' --users=$USERS | grep -v 'inside container, using'

echo "Cleaning up"
rm jmeter/logins.csv jmeter/urls.csv