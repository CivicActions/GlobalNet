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
* OSX users are recommended to run Docker for Mac

### Step 1. Requirements

- [Git 2.0+](http://git-scm.com/book/en/v2/Getting-Started-Installing-Git)
- Docker 1.10.0+
  - OSX users [install Docker for Mac](https://docs.docker.com/engine/installation/mac/#/docker-for-mac)
  - Linux users [install Docker](https://docs.docker.com/engine/installation/#/on-linux)
    - [Docker Compose 1.7.0+](https://docs.docker.com/compose/install/) Linux users additionally need to install Docker Compose (OSX users get Docker Composed installed automatically with _Docker for Mac_)
- Make sure you can successfully run docker commands without sudo.
  See [Ubuntu example](https://docs.docker.com/engine/installation/linux/ubuntulinux/#/manage-docker-as-a-non-root-user).
- For the docker proxy to work you must stop anything using port 80 and 8080

### Step 2. Cloning GlobalNET D7 (Platform Version 2)

Note: Many of these commands run from the `~/workspace/gn2` directory.

#### 2.1. Provide Your Public SSH Key to CivicActions Infrastructure Support

CivicActions needs your public SSH Key to grant you access to the GlobalNET repository. Use Slack to contact the CivicActions Infrastructure Support team and provide them with your public SSHkey (e.g., `~/.ssh/id_rsa.pub`). Never share your private key.

#### 2.2. Configure CivicActions SSH Port
All civicactions.net sites use a nonstandard port (940) for SSH traffic, so if the `git clone` command below fails with something like:

`port 22: Connection refused`

then add this to your `~/.ssh/config` file (creating it if necessary):

```bash
Host *.civicactions.net
Port 940
```

#### 2.2. Get the latest "develop" branch code for gn2

See also the [Git Workflow document](workflow.md) for setting up your remotes correctly.

```bash
cd ~/workspace
git clone git@git.civicactions.net:dsca/globalnet2.git gn2
cd gn2
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

Unlike other docker based projects that mount the project files directly into the container, this project syncs the files from the project into the container. Thus, there are two copies of the project files: one on the host (your machine) and one in the docker volume.

Files are copied to the container on the initial `build` step. The _sync_ container periodically monitors changes using _unison_ and copies files to and from the container automatically. Unfortunately, the sync container can be very slow so the project includes an additional file-watching utility to speed updates for development: modd.

In a new terminal, [activate bowline](#step-3-activate-bowline) then run the following:

Linux users:
```bash
modd.linux
```

Mac users:
```bash
modd.osx
```

This will start the golang modd utility to watch for file changes. As you edit files you should see output as it copies files and corrects file permissions. Hit `ctrl`+`c` to stop modd.


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

## Bypassing the QA build for special fixes (documentation, quick css fixes, etc.)

There are times when we need to push code and bypass building a QA pipeline. (Example: If a ticket can only be QA'd on Learn or Stage).

If you are pushing code that does not need a test or QA build, such as project documentation changes, you can save server resources and skip the builds on the CI server. To achieve this, simply include either `[ci skip]` or `[skip ci]` at the end of the last commit message of the branch you are pushing.

This is also useful if you are working on a large ticket and want to push your changes but your branch is not yet ready for a merge request. Remember you can always edit a commit message with `git commit --amend` if you need to remove the ci skip of your last commit when you are ready to request a merge.
