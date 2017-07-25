SimpleAccess
===========
The purpose of simple access is to provide a simplified workflow for choosing content scope/visibility for content editors and creators.

GlobalNet Group's Structure
---------------------------------
GlobalNet makes heavy use of of the Organic Groups (OG) module, and it also relies upon specific configurations of the module to accomplish the desire usability and access restrictions. 

At the top level of the OG groups hierarchy are **Organizations**. Under each organization there can be an unrestricted hierarchy of other group types: *Courses, Events, Group (A generic group), Alumni Groups, etc*.

Each group can have different types of content as part of the group: *Posts, News, Publications, Announcements, etc.*

Content Visibility
--------------------
In GlobalNet there are 5 levels of visibility: *Private, Group, Organization, Sitewide, and Public.*
**Private** content can only be seen by the author, and by administrators.
**Group** content can be seen by all the members of the group the content belongs to.
**Organization** content can be seen by the group in which it was created and by all the members of the top level organization the group the content is in belong to.
**Sitewide** content can be seen by all authenticated users.
**Public** content can be seen by anyone.

What does Simple Access do?
-----------------------------------
Drupal's global permissions system in conjunction with the permissions system provided by OG can accomplish the levels of access described previously by carefully configuring different pieces of both permissions systems. Too many moving pieces can end up in errors, and when it comes to access that is not acceptable. Simple Access provides a simple widget on the content and group creation/editing forms that gives you the 5 access options and manages the configuration for the user behind the scenes. 

Activating Simple Access on a new Content Type
---------------------------------------------------------
Simple access manages OG fields to give the correct access to the correct users. Before activating simple access on a content type, add the OG field related to visibility, and the one that enable us to connect to a group: **og_group_ref** *(Groups audience)*, **group_content_access** *(Group content visibility)*.
Simple Access will manage the validation of the OG group fields so **set the OG fields as NOT REQUIRED.**
After the OG fields are in place, add the already provided, by the gn2_simple_access module, field **field_gn2_simple_access** from the "Add existing field" section in the "Manage fields" tab for your content type.

How does Simple Access work?
-------------------------------------
Simple Access does a handful of things:

 1. It allows a group context to be provided through the URL instead of     managing OG fields directly.
 2. It restricts access to the content creation pages so that only members of     a given group can add content to that group. 
 3. It takes over node access to provide the Public, Private, and Sitewide levels of visibility. 
 4. It manages the "Groups audience" and  "Group content visibility" OG fields to provide appropriate access when the Group or Organization visibility are chosen. 

**NOTE:** All Drupal hook implementations are provided in `gn2_simple_access.module`, all other helper functions are in `include/gn2_simple_access.inc`. A few helper classes have also been provided, those are also in `include`.

### Group Context, OG fields Management, and Content Creation Restrictions
Group context is only necessary when creating new content (as at that point we don't know which group a piece of content needs to belong too). The mechanism Simple Access uses to provide group context is through a URL query parameter. If a user belonging to a group with node-id 2, would like to add a Post to the group he/she can do so by going to `/node/add/post?gid=2`. GID stands for group-id.

The GID context provided is used to restrict access to the node creation page. The entry point for node access logic is the hook `hook_node_access()`. In `gn2_simple_access.module` we can look at `gn2_simple_access_node_access()`. When access to the creation form is being negotiated `(if ($op == "create") { ... }`) we call the function `gn2_simple_access_node_creation_access()` located in `includes/gn2_simple_access.inc`. To see the logic implementing access refer to `gn2_simple_access_node_creation_access()`

The GID context provided through the URL is also used to manage the OG fields for the user. 

Since we are managing the fields, there is no need to let the user see them. The logic hiding the fields is provided in `hook_form_alter()`. Refer to `gn2_simple_access_form_alter()` in `gn2_simple_access.module` for more details on how and when the OG fields are hidden.

Finally, since the user is not setting the OG fields directly we have to do it for them. For this we provide some logic in `hook_entity_presave()`. 
In `gn2_simple_access_entity_presave()` we use 2 functions to set the fields correctly depending on what level of visibility was chosen: `gn2_simple_access_set_og_perms_for_group`, and `gn2_simple_access_set_og_perms_for_organization`. Refer to this function for more details on how OG fields are being managed by Simple Access.

### Node Access
Simple access takes over node access to the view pages when it comes to the Public, Private, and Sitewide visibility settings.
To control whom can view a node managed by Simple Access we implement `hook_node_access()`. In `gn2_simple_access_node_access()` one can find the logic checking the conditions under which different levels of visibility should be granted (Public nodes can be seen by everyone for example).

## Permissions
Simple access provides permissions at the global and organic group levels to manage whom is capable of setting a content to a certain visibility. In our case we want all group members to be able to set a piece of content to be viewed by the group, but only group_managers can set content to be visible by the organization.
The following permissions are provided:

    gn2_simple_access_private
    gn2_simple_access_group
    gn2_simple_access_organization
    gn2_simple_access_sitewide
    gn2_simple_access_public

These are provided globally through `hook_permissions()` (`gn2_simple_access_permissions()`) and to organic groups through `hook_og_permissions()` (`gn2_simple_access_og_permissions()`)

These permissions are checked in function `gn2_simple_access_field_widget_form_alter()` where we enable/disable the Simple Access widget options depending on the access of the current user.

Simple Access provides one last permission that gives a user access to the og_group_ref OG field (Group Audience). This is mainly for administrative purposes: `gn2_simple_access_bypass_group_edit_restriction`

This permission is checked when hiding the OG fields in `gn2_simple_access_form_alter()`.






