GN2 Field Collection Course Sessions
----------------

CONTENTS OF THIS FILE
---------------------

 * About
 * Implementation


ABOUT
------------

This module is used to build user created sessions using nested field_collections


Implementation
--------------------------

Sessions field_collection logic is defined in this module.
Previous implementation relied on entityform module, and was cumbersome. The approach taken by this module is to attach one field collection to the course
node content type (a level 1), and then have a nested level 2 field collection within level 1, and a third nested field collection in the level 2 fc.
There is no limit to the number of field collections that may be added to a course, and to that end, courses can become unwieldy. This module remedies this
by ajaxing heavy content found on the course page, to include the sessions minipanel where sessions output resides, groups search block, group presenter block,
associated files, and associated posts.

Special handling is invoked for long courses, as they will typically contain several sessions. When the start and end date for a course exceeds 7 days, a list view
of all level 1's will replace the default sessions view of collapsed fieldsets. The list view will link to a path that will hold the linked level 1 as well as all
nested items (level 2 and level 3 items) associated with the top level item.
