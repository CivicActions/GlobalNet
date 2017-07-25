jQuery(document).ready(function() {
 jQuery("#gn2-search-default-form #edit-submit").click(function(){
   jQuery(this).toggleClass('engaged');
   if (jQuery('#gn2-search-default-form .form-item #edit-search').val().length == 0) {
     jQuery('#gn2-search-default-form .form-item').css({
    'visibility': 'hidden'
     })
   }
   if(jQuery(this).hasClass('engaged')) {
     jQuery('#gn2-search-default-form .form-item').css({
    'visibility': 'visible'
     })
   }
   if (jQuery('#gn2-search-default-form .form-item #edit-search').val().length == 0) {
     return false;
   }
 })
});