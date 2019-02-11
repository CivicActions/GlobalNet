INTRODUCTION
------------
And UserPoints, OG, Rules integration.
Each og has own's userpoints branding.
When workflows changes with rules module,
updating points to the og by og_group_ref.

FEATURES
--------
If og node create, automatic create term in userpoints category,
and related to this og node.

Have a batch page, batch the old og node.

At the config page, you can customize userpoints category term 'name,
this is userpoints branding in this og.
Rules integration, create actions in the rules,
the new data selector is 'node:userpoints-og-tid',
When workflows changes with rules module,
points is add to the og userpoints category term tid.
...

INSTALLATION
------------
1. Extract module into /sites/all/modules folder.
2. Enable module on /admin/modules page.

REQUIREMENTS
------------
This module requires the following modules:
 * Userpoints (https://drupal.org/project/userpoints)
 * Rules (https://drupal.org/project/rules)
 * Organic groups (https://drupal.org/project/og)

EXAMPLE
-------
Add a news(og content nodetype) to the og1, user in og1 points increase 100.

1)Go to admin/config/workflow/rules/reaction/add, add rules.
2)React on event, select optgroup of Node(After deleting content,
After saving new content, After updating existing content...).
3)Add actions, Select the action is "grant points to a user".
4)Data selector is "site:current-user", Points category is click
the "Switch to data selection", input "node:userpoints-og-tid".
5)Other settings according to your needs.

If action execute, points is add to the og userpoints category term tid.
