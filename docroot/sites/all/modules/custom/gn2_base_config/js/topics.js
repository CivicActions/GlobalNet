(function ($) {

    Drupal.behaviors.topics = {
        attach: function (context, settings) {
            $(window).load(function () {
                $('.view-topics .views-exposed-widgets input#edit-name,\n\
.page-node .pane-group-members-panel-pane-6 .view-group-members .views-exposed-widgets #edit-combine-wrapper #edit-combine').attr('placeholder', 'Keyword search');
            });

        }
    };
    $(document).ready(function () {
        
    });
})(jQuery);