# Jira Integration 

The Jira integration is provided by the **Jira REST module**. After a user creates a **Help Desk request**, a **Support** node is created and an *administrator* is notified. When the *admin* views the **Support** node, there is a form with a submit button, **_ADD NEW JIRA TICKET_** . The submit handler for the form calls the *jira_rest_issue_create()* function which takes care of creating the ticket in jira.

### Jira REST Configuration 
* **URL of the Jira instance:** https://globalnet.atlassian.net:443 
* See **local.settings.php** for *Jira credentials*

NOTE: You should not need to update these configuration settings as they are in code in this *Feature* via **Strongarm**
