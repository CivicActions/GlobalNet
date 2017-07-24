# GlobalNET Platform Version 2

Table of Contents
=================

* [GitHub Version-READ ME BEFORE DOWNLOADING](#GitHub Version Notes)
* [Security Prologue](#security-prologue)
    * [Security Requirements of GlobalNET](#security-requirements-of-globalnet)
* External Links
    * [Sandbox Setup](docs/sandbox.md)
    * [Code Submission and Deployment](docs/workflow.md)
    * [Behat Testing Instructions](tests/behat/)
    * [Theming Guidelines](docs/theming.md)
* [Using Drush Outside the Containers](#using-drush-outside-the-containers)
    * [Install GlobalNET v2 Drush Aliases](#install-globalnet-v2-drush-aliases)
    * [Drush usage examples:](#drush-usage-examples)
      * [Login as admin on the GlobalNET v2 Development server](#login-as-admin-on-the-globalnet-v2-development-server)
      * [Login to the GlobalNET v2 Development server via ssh (as globalnet user)](#login-to-the-globalnet-v2-development-server-via-ssh-as-globalnet-user)
      * [Drush usage notes:](#drush-usage-notes)
* [Migration](#migration)
  * [Module Updates](#module-updates)
    * [Patch management](#patch-management)
    * [Marking modules NOT to be updated](#marking-modules-not-to-be-updated)
  * [Miscellaneous Troubleshooting Notes](#miscellaneous-troubleshooting-notes)
    * [Server Permission Issue Fix:](#server-permission-issue-fix)




# GitHub Version Notes

GlobalNET is designed as a platform for:

1. Scheduling and conducting events and training among members of collaborating organizations/think-tanks dealing with confidential information.
2. Sharing news and publication reviews of interest to participants.
3. Strengthening human relationships between event/class participants once the events have ended through online forums delivered within the context of information relevant to diverse groups.

The interface and management ideas are build around the observation that busy professionals don't have much time to interact for interaction's sake: They interact best around content that is of common interest. GlobalNET supports the workflow of people submitting ideas in private forums, building on those ideas through conversation, and then formalizing and propagating those ideas through more public events and trainings as the ideas mature and gain traction. 

GlobalNET supports the creation of multiple organizational landing pages, each one customizable by each organization's owners. It facilitates the public/private display of content based on user roles and is designed to provide an environment to promote collaboration between organizations while still maintaining unique organizational identities, goals, and missions.

CivicActions is releasing this codebase for review and comment by people in organizations who may benefit from this kind of platform. 

We are releasing this code and test database "as is" with the [attached license](/LICENSE.txt). 

This code base supports nearly 800 user stories/business rules, some of which are unique to the GlobalNET organization. Many, however, are shared by all cases of collaborative activity between organizations. It will most likely require significant work to make it match your use case.

This is a inital public release of this code, and it is not part of the active GlobalNET build/release process. This version of the code base has not been updated with the most recent Drupal security patches. Further, we will not be updating this version with security patches. Our intention is to update this code annually until we are able to integrate our active build with the public build once we have automated the process of removing proprietary account information from code and the associated test database.

This code base also includes a suite of 500+ behat tests which are run against the codebase with each commit. You can also use/reuses these tests if you wish to customize this code.

All of these caveats make contributing back to the GlobalNET project a bit problematic. Because this code is not part of our standard build, it is out of date. If you wish to submit a pull request and have it included in the code base, it will probably take a bit of tweaking to get it into the live build. If you are interested in submitting a pull request, let us know and we'll figure out some way to get it reviewed, get it into the live build, and get this code updated.



# Security Prologue

CivicActions Employees and Contractors have read and agreed to abide by the [CivicActions Security Policy](https://github.com/CivicActions/security-policy)

CivicActions Developers are expected to know, understand and integrate into your work:
- [Drupal coding standards and best practices](https://www.drupal.org/developing/best-practices).
- [How to write secure code in Drupal](https://www.drupal.org/writing-secure-code)

## Security Requirements of GlobalNET

GlobalNET has defined a set of security requirements to ensure the security of the code produced by the CivicActions developers. Most of these requirements are defined in the [CivicActions Security Policy](https://github.com/CivicActions/security-policy) but they are repeated here for clarity:
- Maintain up-to-date versions of software on all systems (sandbox, development, staging and production). This includes:
- Drupal
- Operating System (GNU/Linux; some developers may use Mac OSX)
- Editors, debuggers, and other tools
- Always apply relevant CVE patches within 30 days of their release, usually within two weeks
- Limit live data on development machines. In particular:
- no GlobalNET user PII (other than test PII created by developers)
- no copyrighted content
- no access restricted files
- Custom code must conform to Drupal coding and security standards
- Before being integrated into the development branch, all GlobalNET code updates must:
- have an associated ticket in JIRA
- undergo static code analysis with PHP_CodeSniffer (exceptions for CSS, features, perhaps others)
- peer review
- full automated testing 

_**If you have questions about any of the above or the linked documents, ask your Project Manager or Tech Lead.**_


# Using Drush Outside the Containers
These commands must be performed outside of your GlobalNET v2 sandbox, or else the `bowline` version of drush will be invoked and attempt to run these commands inside a container.

## Install GlobalNET v2 Drush Aliases
- `ln -s ~/workspace/gn2/scripts/gn2.aliases.drushrc.php ~/.drush`  # your path to the gn2 workspace may be different

## Drush usage examples:

### Login as admin on the GlobalNET v2 Development server
`drush @gn2.dev uli`

### Login to the GlobalNET v2 Development server via ssh (as globalnet user)
`drush @gn2.dev ssh`

### Drush usage notes:
- Connection to the Production and Staging servers is limited for security compliance reasons, and so you may only be able to connect to the Development server.
- *Hint:* Create an alias for your locally installed drush, e.g., `alias drush6=$HOME/src/drush/drush` so that you can access your local drush from your sandbox.

# Migration

Run this:

``` bash
migrate
```

# Module Updates

Our practice has been to update modules individually. The process is to

1. Add the new module version to the `./scripts/contrib.make` file,
2. Test that `contrib.make` actually runs your module download and related patches

Example workflow:

```bash
$EDITOR ./workspace/gn2/scripts/contrib.make

#then make module version changes to the contrib.make file

.workspace/gn2/make-contrib
#Compiles the contib.make file, downloading copies of the correct version of each module and applying relevant patches either from drupal.org OR from .workspace/gn2/patches
```

## Patch management

Our module patching practice is to identify how a module should be patched, and to create a patch. Ideally, we contribute the patch back to the Drupal.org community by creating an issue against the module, describing our use case in as broad a context as possible so it can help others locate the fix, and then submit the patch on the issue on Drupal.org

Then, inside contrib.make, we add the patch in this format:

```bash
projects[anonymous_publishing][version] = "1.0"
projects[anonymous_publishing][patch][] = https://www.drupal.org/files/issues/anonymous_publishing-2492359-01.patch
```

Note that `contrib.make` pulls the patch from drupal.org.

If you determine that the patch is too specific to be of use to anyone else, OR the patch represents a tweak that may reveal a sensitive technique, you can put the patch in ./workspace/gn2/patches, and call it out this way in `contrib-make`:

```bash
projects[ctools][version] = "1.9"
projects[ctools][patch][] = ../patches/merge-assist/ctools_includes_export.inc.patch
```

## Marking modules NOT to be updated

If you do not want a module to be updated, don't. Just note in the `config.make` file that the module should not be updated in an annotation, e.g.:

```bash
projects[admin_menu][version] = "3.0-rc5"
#DO NOT UPDATE: See ticket RD-1476 for why this module should not be updated, unless it's replaced with similar functionality from another module
```

# Miscellaneous Troubleshooting Notes


## Server Permission Issue Fix:

Use the commands below to update server permissions if images start not showing up:

```
cd prod
find . ! -perm -g+r -exec chmod -v g+r {} \;
find . -type d ! -perm -g+x -exec chmod -v g+x {} \;
find files-private -type d -exec chmod g+rw {} \;
```

