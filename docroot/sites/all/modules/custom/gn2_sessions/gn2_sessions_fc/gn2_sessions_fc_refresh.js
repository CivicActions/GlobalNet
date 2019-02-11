(function ($) {

  Drupal.behaviors.gn2SessionsRefresh = {
    attach: function (context, settings) {
      $(document).ajaxStop(function () {

        // Get count of level 1 sessions.
        var level1FieldsetClasses = document.getElementsByClassName("group-level1");
        // If there are any, loop through them, giving each a unique ID value.
        if (level1FieldsetClasses.length) {
          var level1FieldsetIdRoot,
              level1FieldsetId;

          for (var i = 0; i < level1FieldsetClasses.length; i++) {
            level1FieldsetIdRoot = "level1Fieldset";
            level1FieldsetId = level1FieldsetIdRoot + i;
            level1FieldsetClasses[i].id = level1FieldsetId;
          }
          // Find all level 1 sets of edit/delete/move handles.
          var level1ButtonsClasses = document.querySelectorAll(".group-level1 > .fieldset-wrapper > .sessions-buttons-wrap");
          // If there are any, loop through them, giving each a unique ID value.
          if (level1ButtonsClasses.length) {
            var level1ButtonsIdRoot,
                level1ButtonsId;

            for (var x = 0; x < level1ButtonsClasses.length; x++) {
              level1ButtonsIdRoot = "level1Buttons";
              level1ButtonsId = level1ButtonsIdRoot + x;
              level1ButtonsClasses[x].id = level1ButtonsId;
            }
            // Now, loop through the level 1 sessions again, appending the handles to those fieldsets.
            var theseButtons,
              thisFieldset,
              getButtons,
              getFieldset;

            for (var n = 0; n < level1FieldsetClasses.length; n++) {
              theseButtons = 'level1Buttons' + n;
              thisFieldset = 'level1Fieldset' + n;
              getButtons = document.getElementById(theseButtons);
              getFieldset = document.getElementById(thisFieldset);
              getFieldset.className += ' level1Fieldset';
              getButtons.className += ' level1Buttons';
              getFieldset.appendChild(getButtons);
            }
          }
        }

        function getParameterByName(name) {
          var match = RegExp('[?&]' + name + '=([^&]*)').exec(window.location.search);
          return match && decodeURIComponent(match[1].replace(/\+/g, ' '));
        }

        var parent = getParameterByName('parent');
        var child = getParameterByName('child');
        var scrollTo;

        if (child !== null) {
          // Open last created / edited fieldsets.
          $('.collapsible').each(function () {
            if ($(this).attr('data-id') === child) {
              scrollTo = $(this);
            }
            if ($(this).attr('data-id') === parent || $(this).attr('data-id') === child) {
              $(this).removeClass('collapsed');
            }
          });

          $(document.body).animate({
            scrollTop: scrollTo.offset().top - 100
          }, 200);
        }

      });
    }
  };

}(jQuery));
