

# Creating a bug report

Debugging a problem can be a time-consuming and troublesome process. The first step requires validatation that the bug actually exists. To do that, a troubleshooter needs to be able to replicate your problem. To do this, it's best not to rely on assumptions about conditions or variables. Therefore we present this list of minimum bug reporting criteria to assist people trying to solve your problem.

**Start by specifing a starting location:**    Login to v2-stage.globalnetplatform.org

**Specify user/role conditions:**  

- As qa-member1 pw: CivicActions3#  

- As group_member1 in closed group: ThisIsMyClosedGroup

**Validate user/role condition:**  Ensure that qa-member1 is member of GCMC, subgroup-of-gcmc and is an active user (or has a required role)

**Go to specific piece of content:** Navigate to: http://v2-stage.globalnetplatform.org/gcmc/new_course

**Consider server/service state:** Consider whether the server is in transition or not, e.g. are you testing during a time when the server data is being rebuild, or there is automated testing/updating going on?

**Validate the content you are working with:** Example: If an Event, is the date valid? Does the content have data in all the currently required fields? Is that data clean (e.g. includes only valid characters/formatting commands?)

**Validate the content condition or state:** E.G. is the Course viewable by organizational members

**Describe how to perform specific actions:**  eg.  "Click on sessions to view file"

**Specify Result:**  Can’t see file

**Specify Expected result:** Can see file

**Finally, triage the bug report in terms of:**

- Blocker: Stop everything and fix this now.

- Critical: Work this into the current sprint
- Major: Work this into the dev cycle
- Minor: Work this into the dev cycle as a pickup ticket
- Nice to have: Improvement for the backlog 



## Example

**Bug report**

**To replicate:**

1. As user tom.jones, pw: mypassword, login to https://globalnetplatform.org
2. Navigate to  https://globalnetplatform.org/singersoftheworld
3. Click on "Add Post" button in the middle of the landing page
4. Fill in all the fields and save

**Expected result: T**he post is saved and I'm returned to where I started

**Actual result:** Nothing happens. I'm kept on the the entry form.

**Note:** This happened at 10pm my time. I was unable to navigate anywhere except by hitting the back button on my browser. I was using Chrome on a Windows machine.

