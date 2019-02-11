# GN2 Bulk Delete module
## version 0.1

#### The GN2 Bulk Delete module provides an interface for _Org Managers_ to request that multiple files be deleted from _Folder_ content types.

The module provides a _Bulk Delete_ tab where the _Org Manager_ can view a list of all of the files in a _Folder_ and check a checkbox for the ones that he would like to request be deleted. Once he submits the form, an email will be sent to and administrator designated in the admin section for this module. The adminstrator can follow a link in the email and will be taken to a View listing all of the files in the _Folder_ with the ones requested to be deleted prechecked. The administrator can then use the Views Bulk Operation to delete the files.

Of note:  
Admin page for this moudule is found at /admin/config/media/bulk-delete  
The View associated with this module is the **Folder bulk delete** View located at /admin/structure/views/view/folder_bulk_delete/edit
