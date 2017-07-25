/**
 * @file
 * A JavaScript file for the module.
 */

(function ($, Drupal, window, document, undefined) {
  
  $(document).change(function() {

    selectItem1 = $('select#edit-gn2-og-form-options').val();
    selectItem2 = $('input#edit-field-gn2-simple-access-und-private:checked').length > 0;
    
    if (selectItem1 === 'closed' || selectItem2) {
      $('.group-registration').hide();      
    }
    else{
      $('.group-registration').show(); 
    }
  });


})(jQuery, Drupal, this, this.document);
