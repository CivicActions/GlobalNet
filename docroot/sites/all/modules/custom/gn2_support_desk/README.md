# GN2 Support Desk module
#### This module is a*Feature* that provides the Support content type and helper functions for integrating the Support Desk content with JIRA.

The **Support content type** provides an interface for users to submit requests for support for issues ranging from password issues to scheduling specific training.

* [Jira Integration](docs/JIRA_integration.md)
* [Email / Notification Workflow](docs/email_notification_integration.md)

As well as housing Drupal hook functions, the **gn2_support.module** file provides functions which create the **gn2_support_desk_form** form that interacts with the *Jira REST module*. The Support Desk form is accessible to users via the **Help Desk** link in the footer. As with all of the links in that block, the link is created in a *content type Page* node, **GlobalNET Support** (node/34195 on *Prod*) and the **Footer Elements** View.
