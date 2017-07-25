/**
 * @file
 * Changing form selects to ulli.
 */

(function ($) {
  Drupal.behaviors.things_recently_viewed = {
    attach: function (context, settings) {

      $changeSelect = '#block-things-recently-viewed-things-recently-viewed-header select.ctools-jump-menu-select';
      $changeSelectOption = $changeSelect + ' option';
      $($changeSelect).parent().append('<ul id="things-recently-viewed--items" name="recentlyvisited"></ul>');

      $($changeSelectOption).each(function(index){
        valu = $(this).val();
        text = $(this).text();
        if (index == 0) {
          link = '<div class="inner"><span>' + text + '</span></div>';
          classes = 'selector';
        } else {
          link = '<div class="inner"><a href="' + valu + '">' + text + '</a></div>';
          classes = 'item';
        }
        $('#things-recently-viewed--items').append('<li class="' + classes + '">' + link + '</li>');
      });

      $($changeSelect).remove();

      //
      // ul-select
      // https://github.com/zgreen/ul-select
      //
      $.fn.ulSelect = function(){
        var ul = $(this);

        if (!ul.hasClass('zg-ul-select')) {
          ul.addClass('zg-ul-select');
        }
        $('li:first-of-type', this).addClass('active');
        $(this).on('click', 'li', function(event){

          // Remove div#selected if it exists
          if ($('#selected--zg-ul-select').length) {
            $('#selected--zg-ul-select').remove();
          }

          // ul.before('<div id="selected--zg-ul-select">');

          var selected = $('#selected--zg-ul-select');

          // $('li #ul-arrow', ul).remove();
          ul.toggleClass('active');
          // Remove active class from any <li> that has it...
          ul.children().removeClass('active');
          // And add the class to the <li> that gets clicked
          $(this).toggleClass('active');

          var selectedText = $(this).text();
          if (ul.hasClass('active')) {
            selected.text(selectedText).addClass('active');
          }
          else {
            selected.text('').removeClass('active');
          }
        });

        // Close the faux select menu when clicking outside it
        $(document).on('click', function(event){
          if($('ul.zg-ul-select').length) {
            if(!$('ul.zg-ul-select').has(event.target).length == 0) {
              return;
            }
            else {
              $('ul.zg-ul-select').removeClass('active');
              $('#selected--zg-ul-select').removeClass('active').text('');
            }
          }
        });
      }

      // Run
      $('#things-recently-viewed--items').ulSelect();

    }
  };
})(jQuery);
