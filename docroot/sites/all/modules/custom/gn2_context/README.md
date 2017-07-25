GlobalNET Context
=================

Provides definitive API functions and plugins to identify the group and organization context and hierarchy for a page.

What does GlobalNET Context do?
---------------------------

 1. It provides API functions gn2_context_get_group_id() and gn2_context_get_org_id() to retrieve the group and organization of a page from the user and page path/alias alone.
 2. Provides 2 API classes GN2PathToOrganization and GN2GroupIDExtractor to navigate the group hierarchy or retrieve the organization given a specific starting node.
 3. It provides tokens to more easily access the parent of a node *[node:parent]*, the top level organization a node belongs too *[node:organization]*, and the group below the organization group, in the line between the node and the topmost organization *[node:org-child]*.
 4. It provides 2 views handlers to retrieve the organization ID and organization title for a node from within a view.

## Tokens
GlobalNET Context also provides a number of tokens to allow easy access to information up the hierarchy group chain. Explaining which tokens are provided might be easiest through example. Lets say that we have a nesting of groups and content that looks like this:

> Organization -> Org Group -> Event -> Event Description (Post)

As we can see, we have an organization that contains a group. This group inside of the organization has planned an event group, and in the event group there is a post describing the event.
The tokens provided are the following:

    [node:parent]

    [node:organization]

    [node:org-child]

If we are making use of the tokens at the post level, there tokens will work as follows. The `[node:parent]` token will make the even group accessible. For example `[node:parent:created]` should give is the date in which the event group was created.
The organization token goes all the way up the hierarchy of groups chain until if find an organization node. In our case the group titled "Organization". `[node:organization:title]` should effectively give us the string "Organization" as that is the title of our organization group. 
The org-child token give us access to the group immediately below the organization. So `[node:org-child:uid]` should give us the user id of the creator of the "Org Group" group.

To implement the tokens we use the API provided by the tokens module: `gn2_context_tokens_info()`, and `gn2_context_tokens()`.
