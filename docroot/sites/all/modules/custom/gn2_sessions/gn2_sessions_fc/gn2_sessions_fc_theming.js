(function ($) {

  Drupal.behaviors.gn2_sessions_fc_theming = {
    attach: function (context, settings) {
      $(document).ajaxStop(function () {
        // Setting classes for session containers.
        $("fieldset.group-level1").addClass("session-container level1");
        $(".pane-gn2-sessions-fc .field-name-field-session-day").addClass("session-container level2");
        $(".pane-gn2-sessions-fc .field-name-field-unit").addClass("session-container level3");

        $(".session-container.level1 > .fieldset-wrapper > .sessions-buttons-wrap").each(function () {
          $(this).prependTo($(this).closest(".session-container.level1"));
        });

        // Setting 'hover' class for level 1 container objects while hovering over new session button.
        $(".session-container .level1.ajaxatron").hover(
          function () {
            $(this).closest(".session-container").addClass("ajaxatron-hover");
          },
          function () {
            $(this).closest(".session-container").removeClass("ajaxatron-hover");
          }
        );

        // Setting 'hover' class for level 2 container objects while hovering over new session button.
        $(".session-container .level2.ajaxatron").hover(
          function () {
            $(this).closest(".session-container").addClass("ajaxatron-hover");
          },
          function () {
            $(this).closest(".session-container").removeClass("ajaxatron-hover");
          }
        );

        // Setting 'hover' class for level 3 container objects while hovering over new session button.
        $(".session-container .level3.ajaxatron").hover(
          function () {
            $(this).closest(".session-container").addClass("ajaxatron-hover");
          },
          function () {
            $(this).closest(".session-container").removeClass("ajaxatron-hover");
          }
        );
      });
    }
  };

}(jQuery));
