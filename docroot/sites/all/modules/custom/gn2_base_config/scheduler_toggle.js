jQuery(document).ready(function() {
  
  var togglerValue = jQuery("input[name^='field_release_date_toggle']:checked").val();
  
  if (togglerValue=="Now") {
    jQuery("#edit-scheduler-settings").hide();
    jQuery('#edit-scheduler-settings .form-text').val("");
  }
  else {
    jQuery("#edit-scheduler-settings").show();
  }    
  
  jQuery('input[name^="field_release_date_toggle"]').click(function() {
    if(jQuery(this).attr("value")=="Now") {
      jQuery("#edit-scheduler-settings").hide();
      jQuery('#edit-scheduler-settings .form-text').val("");
    }
    if(jQuery(this).attr("value")=="Later") {
      jQuery("#edit-scheduler-settings").show();
    }
  });
  
});