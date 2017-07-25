/**
 * @file 
 * Suppresses display of all primary tabs containing 'Forms' and 'Group'.
 *
 * This bit of code supports the task contained in RD-1558.
 */

(function ($) {

  $(document).ready(function(){
   // $(".tabs-primary__tab:contains(Forms)").css("display", "none");
   // $(".tabs-primary__tab:contains(Group)").css("display", "none");
    $(".tabs-primary__tab:contains(Voting results)").css("display", "none");
    $(".tabs-primary__tab:contains(Voting Results)").css("display", "none");
    if ($('.page-group .view-og-members-admin.view-id-og_members_admin').length > 0) {
      if ($('.page-group .view-og-members-admin.view-id-og_members_admin .vbo-views-form').length == 0) {
        $('.page-group .view-og-members-admin.view-id-og_members_admin .attachment-after').remove();
      }
    }
  });

})(jQuery);
