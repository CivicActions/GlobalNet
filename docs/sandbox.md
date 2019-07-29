# GlobalNET Platform Version 2 Sandbox Installation

_This page still needs review_


Table of Contents
=================

* [Step 1. Requirements](#step-1-requirements)
* [Step 2. Cloning GlobalNET D7 (Platform Version 2)](#step-2-cloning-globalnet-d7-platform-version-2)
    * [2.1. Provide Your Public SSH Key to CivicActions Infrastructure Support](#21-provide-your-public-ssh-key-to-civicactions-infrastructure-support)
    * [2.2. Configure CivicActions SSH Port](#22-configure-civicactions-ssh-port)
    * [2.2. Get the latest "develop" branch code for gn2](#22-get-the-latest-develop-branch-code-for-gn2)
* [Step 3. Activate Bowline](#step-3-activate-bowline)
* [Step 4. Pull Database and Support Files](#step-4-pull-database-and-support-files)
* [Step 5. Build and Run GlobalNET "gn2" Container](#step-5-build-and-run-globalnet-gn2-container)
    * [Synchronizing Files](#synchronizing-files)
* [Updating Your Build](#updating-your-build)
* [Daily Usage](#daily-usage)
* [Docker for Mac notes](#docker-for-mac)
* [CI Skip](#ci-skip)

The GlobalNET developer sandbox runs on your workstation as a set of docker-based containers mimicking the operating environment of GlobalNET servers.

Read these instructions carefully. These instructions describe how to download, install, and configure software and/or virtual machines on your workstation and run a set of scripts to build the containers and GlobalNET code base.

* Linux users can install and run Docker and containers directly on workstation
* OSX users are recommended to run _Docker for Mac_ and _Docker sync_

### Step 1. Requirements

- [Git 2.0+](http://git-scm.com/book/en/v2/Getting-Started-Installing-Git)
- Docker 1.10.0+
  - OSX users [install Docker for Mac](https://docs.docker.com/docker-for-mac/install/)
    - OSX users should also install [Docker Sync](http://docker-sync.io/) for better performance. This one command should install it properly: `gem install docker-sync`
  - Linux users [install Docker](https://docs.docker.com/engine/installation/#/on-linux)
    - [Docker Compose 1.7.0+](https://docs.docker.com/compose/install/) Linux users additionally need to install Docker Compose (OSX users get Docker Composed installed automatically with _Docker for Mac_)
- Make sure you can successfully run docker commands without sudo.
  See [Ubuntu example](https://docs.docker.com/engine/installation/linux/ubuntulinux/#/manage-docker-as-a-non-root-user).
- For the docker proxy to work you must stop anything using port 80 and 8080

### Step 2. Cloning GlobalNET 

Note: Many of these commands run from the `~/workspace/gn2` directory.

#### 2.1. Provide Your Public SSH Key to CivicActions Infrastructure Support

Contact the CivicActions Infrastructure Support team and provide them with your public SSHkey (e.g., `~/.ssh/id_rsa.pub`). Never share your private key.

#### 2.2. Get the latest "develop" branch code for gn2

#### 2.3. If OSX / Non-linux user, configure bowline to use docker-sync

Assuming Docker Sync was installed in Step 1, all that is required to enable it is to set an environment variable:

```bash
echo "BOWLINE_FILESYNC=docker-sync" >> env.local
```

### Step 3. Activate Bowline

A number of scripts are made available when activating your shell session (based on the bowline project):

```bash
cd ~/workspace/gn2
. bin/activate
```
Note the "dot space" is intentional. Once activated, to get a list of available commands and see info about your containers run this:

```bash
bowline
```

_For more information on bowline commands see [reference page](reference.md)._

### Step 4. Pull Database and Support Files

Pull a recent, sanitized copy of the database in the base directory.

`pull db`     Download db snapshot

`pull files`  Download files

Also download the latest docker images for building the containers:

`docker-compose pull`


### Step 5. Build and Run GlobalNET "gn2" Container

Docker creates virtual instances of Linux on your local machine, and this next step installs those machines, then sets the ~/workspace/gn2 directory to work with the Linux environments installed here.

```bash
build
import
```

- Your first build can take some time as it downloads virtual Linux environments but subsequent builds will be fast.
- After the build completes, you should see a link to http://gn2.localtest.me (based on the gn2 directory name). If that does not load in your browser then you need to find what is using port 80 and 8080 then re-run `build`.


#### Synchronizing files

Linux users have the container files bind mounted so synchronizing isn't necessary, but can be used for testing docker-sync.

OSX users should have the docker-sync program running, which should just work automatically. You can check the status of this with `docker-sync list`.
For more information on the docker-sync commands, see: https://github.com/EugenMayer/docker-sync/wiki/2.1-sync-commands

#### Using drush

If you would like to use `drush` on the newly built containers, activate your bash session:
(Assumes cd ~/workspace/gn2; . bin/activate)

```bash
. bin/activate
```

- This will add a special drush script which overrides your installed drush
- If you want to use your normal drush, simply open another terminal or run `deactivate`


## Updating Your Build

To update your code (but keep your database) and restart your container:

```bash
git remote update
git rebase prime/develop
build
```

If you want to start with a fresh database, also run:

```bash
pull db
import
```


## Daily Usage

You will need to restart a few functions each time rebuild your container or restart your computer.

**Activate**

```bash
. bin/activate
build
```

Logging in via `drush` one time login

```bash
drush uli
```
Then, paste generated link into browser


If you like, you can stop the container when done:

```bash
stop
```

Restart with:

```bash
build
```


## Docker for Mac

You may be able to boost your performance by adjusting the CPU and memory allocation for docker engine. Click the whale icon and increase the CPU and memory to about 1/2 of what is available or more to see if it helps. Note that docker engine will have to restart for the change to take effect. If your contains don't restart automatically, simply run `build' again.
