(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.gn2_sessions_fc = {
    attach: function (context, settings) {
      $('.view-session-level-1-title-links > a').each(function () {
        if (Drupal.settings.gn2_sessions_fc.gn2_sessions_fc_og_admin && $(this).attr('href') != undefined) {
          var urlArg = $(this).attr('href').split('/');
          $(this).append('<span data-nid="' + urlArg[2] + '" data-level="level1" data-id="' + urlArg[3] + '" class="updateatron handle handle-group-level1">+</span>');
        }
      })
      // Here's for level 2 items.
      $('.handle-group-level1').mousedown(function () {
        var brake = dragula({
          isContainer: function (el) {
            return el.classList.contains('view-content');
          },
        });
        brake.on('dragend', function () {
          $('#updateatron-holder').addClass('show-updateatron');
          $('.updateatron').addClass('show-updateatron');
          // Release the container when we drop the element.
          brake.destroy();
        });
      })


      // Function used to update session order.
      $('.updateatron').click(function () {
        var sortKeys = {};

        if ($('#gn2-sessions-fc-toggle').hasClass('clicked')) {
          $('.weight-input-toggle-item').each(function () {
            var id4 = $(this).attr('data-input');
            var weightVal = $(this).val().length ? $(this).val() : $(this).attr('placeholder');
            sortKeys[id4] = weightVal;
          });
        }
        else {
          var h = 1;
          $('.handle-group-level1').each(function () {
            var id1 = $(this).attr('data-id');
            sortKeys[id1] = h;
            h++;
          });

          var i = 1;
          $('.group-ind-items-level2').each(function () {
            var id2 = $(this).attr('data-id');
            sortKeys[id2] = i;
            i++;
          });

          var j = 1;
          $('.group-ind-items-level3').each(function () {
            var id3 = $(this).attr('data-id');
            sortKeys[id3] = j;
            j++;
          });
        }

        $.ajax({
          url: Drupal.settings.basePath + 'gn2_sessions_fc/order/' + Drupal.settings.gn2_sessions_fc.subject_node + '/' + Drupal.settings.gn2_sessions_fc.gn2_sessions_fc_token,
          type: 'GET',
          data: sortKeys,
          success: function (ajaxData) {
            $('.loader').addClass('loader-hidden');
            $('.updateatron').removeClass('show-updateatron');
            $('#cancelatron-holder').removeClass('show-updateatron');
            $('#updateatron-holder').removeClass('show-updateatron');
            $('#page').prepend('<div id="gn2-session-alert">Session Order Updated</div>');
            setTimeout(function () {
              $('#gn2-session-alert').fadeOut('slow');
            }, 500);
            location.reload();
          },
          error: function () {
            console.log('Ajax delivery failed');
          }
        });

        return false;

      });

      $(document).ajaxStop(function () {

        // First we make our fieldsets clickable.
        $('fieldset.collapsible').once('collapse', function () {
          var $fieldset = $(this);
          // Expand fieldset if there are errors inside, or if it contains an
          // element that is targeted by the URI fragment identifier.
          var anchor = location.hash && location.hash != '#' ? ', ' + location.hash : '';
          if ($fieldset.find('.error' + anchor).length) {
            $fieldset.removeClass('collapsed');
          }

          // Turn the legend into a clickable link, but retain span.fieldset-legend
          // for CSS positioning.
          var $legend = $('> legend .fieldset-legend', this);

          $('<span class="fieldset-legend-prefix element-invisible"></span>')
            .append($fieldset.hasClass('collapsed') ? Drupal.t('Show') : Drupal.t('Hide'))
            .prependTo($legend)
            .after(' ');

          // .wrapInner() does not retain bound events.
          var $link = $('<a class="fieldset-title" href="#"></a>')
            .prepend($legend.contents())
            .appendTo($legend)
            .click(function () {
              var fieldset = $fieldset.get(0);
              // Don't animate multiple times.
              if (!fieldset.animating) {
                fieldset.animating = true;
                Drupal.toggleFieldset(fieldset);
              }
              return false;
            });
        });


        // Here's for level 2 items.
        $('.handle-group-ind-items-level2').mousedown(function () {
          var blake = dragula({
            isContainer: function (el) {
              return el.classList.contains('fieldset-wrapper');
            },
          });
          blake.on('dragend', function () {
            $('#updateatron-holder').addClass('show-updateatron');
            $('.updateatron').addClass('show-updateatron');
            // Release the container when we drop the element.
            blake.destroy();
          });
        })
        // Here's for level 3 items.
        $('.handle-group-ind-items-level3').mousedown(function () {
          var snake = dragula({
            isContainer: function (el) {
              return el.classList.contains('fieldset-wrapper');
            },
          });
          snake.on('dragend', function () {
            $('#updateatron-holder').addClass('show-updateatron');
            $('.updateatron').addClass('show-updateatron');
            // Release the container when we drop the element.
            snake.destroy();
          });
        });

        // When a weight field is clicked, show update button.
        $('.weight-input-toggle-item').click(function () {
          $('.updateatron').addClass('show-updateatron');
          $('#updateatron-holder').addClass('show-updateatron');
          $('#cancelatron-holder').addClass('show-updateatron');
        });

        // Check if we are using weights or drag and drop.
        $('#gn2-sessions-fc-toggle').click(function () {
          $('#gn2-sessions-fc-toggle').toggleClass('clicked');
          $('.weight-input-toggle-item').toggleClass('clicked');
          $('.handle-group-level1, .handle-group-ind-items-level2, .handle-group-ind-items-level3').toggleClass('hidden');
          if ($('#gn2-sessions-fc-toggle').hasClass('clicked')) {
            $('#gn2-sessions-fc-toggle--show').hide();
            $('#gn2-sessions-fc-toggle--hide').show();
          }
          else {
            $('#gn2-sessions-fc-toggle--show').show();
            $('#gn2-sessions-fc-toggle--hide').hide();
          }
        });


        $('.deleteatron').click(function () {

          if ($(this).parent().parent('.group-level1')) {
            $(this).parent().parent('.group-level1').remove();
          }

          if ($(this).parent().parent('.field-type-field-collection')) {
            $(this).parent().parent('.field-type-field-collection').remove();
          }

          var urlArg = $(this).attr('data-id');
          var nid = $(this).attr('data-nid');
          var token = $(this).attr('data-token');
          $.ajax({
            url: Drupal.settings.basePath + 'gn2_sessions_fc/delete/' + urlArg + '/' + nid + '/' + token,
            type: 'GET',
            success: function (ajaxData) {
            },
            error: function () {
              console.log('Ajax delivery failed');
            }
          });
        });

        // Base function for loading session add/edit form.
        $('.ajaxatron').each(function (index, value) {
          var str = $(this).attr('id');
          var level = $(this).attr('data-level');
          var nid = $(this).attr('data-nid');
          var urlArg = str.split('-');
          $(this).click(function () {
            $('.loader').removeClass('loader-hidden');

            $(this).siblings().children('.sessions-ajax-form').addClass('loading');
            $.ajaxSetup({
              beforeSend: function (xhr) {
                xhr.overrideMimeType('text/html; charset=utf-8');
              }
            });
            $('.ajaxatron-' + urlArg[1]).load('/admin/non-modal/add/' + urlArg[1] + '/' + level + '/' + nid, function () {
              $(this).siblings().children('.sessions-ajax-form').removeClass('loading');
              $('.loader').addClass('loader-hidden');

            });
            // This is what we do to naughty elements that won't go to bed when modals appear.
            if ($(this).attr('data-level') !== 'level3') {
              $('#footer-container,#header-wrapper').css('display', 'none');
            }
          });
        });

        // Fired when session edit button clicked.
        $('.editatron').each(function (index, value) {
          var urlArg = $(this).attr('data-id');
          var level = $(this).attr('data-level');
          var nid = $(this).attr('data-nid');
          $(this).click(function (event) {
            // This is what we do to naughty elements that won't go to bed when modals appear.
            $('#footer-container,#header-wrapper').css('display', 'none');

            $('.loader').removeClass('loader-hidden');
            if ($('.loading').length < 1) {
              if (level == 'level1') {
                $(this).parent().siblings('.field-group-fieldset').removeClass('collapsed');
                $(this).parent().siblings('.session-edit-container').addClass('loading');
                $(this).parent().siblings('.session-edit-container').load('/admin/non-modal/edit/' + urlArg + '/' + level + '/' + nid, function () {
                  $(this).parent().siblings('.session-edit-container').removeClass('loading');
                  $('.loading').css({'background': 'none'});
                  $('.loader').addClass('loader-hidden');
                });
              }
              else {
                $(this).parent().parent().children('.session-edit-container').addClass('loading');
                $(this).parent().parent().children('.session-edit-container').load('/admin/non-modal/edit/' + urlArg + '/' + level + '/' + nid, function () {
                  $(this).parent().parent().children('.session-edit-container').removeClass('loading');
                  $('.loading').css({'background': 'none'});
                  $('.loader').addClass('loader-hidden');
                });
              }
            }

          });
        });


        // Just reload the page.
        $('.cancelatron').click(function () {
          location.reload();
        })

        // Simple js form validation for title field.
        $('#gn2-sessions-fc-add-form #edit-submit').click(function () {
          if (!$('#edit-field-title-und-0-value').val()) {
            alert('Title field can not be empty!');
            return false;
          }
        })
      })
    }
  };

  $(document).ready(function () {

    function getQueryString(n) {
      var half = location.search.split(n + '=')[1];
      return half !== undefined ? decodeURIComponent(half.split('&')[0]) : null;
    }

    // Load the session from the view link click.
    $('.view-session-level-1-title-links a').each(function () {

      if (window.location.hash.substr(1)) {
        if ($(this).attr('href') != undefined) {
          var urlArg = $(this).attr('href').split('/');
          var loadArg = window.location.hash.substr(1).split('-');
          var parent = getQueryString('parent');

          if (parent == urlArg[3]) {
            $(this).parent().parent().load($(this).attr('href') + ' #block-gn2-sessions-fc-session-form', function () {
              $('html, body').animate({
                scrollTop: $(this).offset().top
              }, 2000);
            });
          }
          else {
            var el = $('a[href="/course-session-form/"' + urlArg[2] + '/' + parent + '"]');
            el.parent().load($(this).attr('href') + ' #block-gn2-sessions-fc-session-form', function () {
              $('html, body').animate({
                scrollTop: $(this).offset().top
              }, 500);
            });
          }
        }
      }
      $(this).click(function (e) {
        if (!$('#updateatron-holder').hasClass('show-updateatron')) {
          $('.loader').removeClass('loader-hidden');
          $(this).parent().load($(this).attr('href') + ' #block-gn2-sessions-fc-session-form', function () {
            $('.loader').addClass('loader-hidden');
            $('.handle-group-level1').remove();
          });
        }
        e.preventDefault();
      })
    })

    // Load tabs on courses.
    function ajaxyTabs(text, nid, div, path) {
      $('a:contains("' + text + '")').click(function () {
        var sessionsMemberNid = $(nid).attr('data-nid');
        $.ajaxSetup({
          beforeSend: function (xhr) {
            xhr.overrideMimeType('text/html; charset=utf-8');
          }
        });
        if (!$(div).hasClass('already-ajaxed')) {
          $(div).load(path + '/' + sessionsMemberNid, function () {
            $(div).addClass('already-ajaxed');
          });
        }
      })

    }

    if ($('.ui-tabs-anchor')) {

      ajaxyTabs('Participants', '.memberatron', '.memberatron-ajax', '/gn2_sessions_fc/members');
      ajaxyTabs('Presenters', '.presenteratron', '.presenteratron-ajax', '/gn2_sessions_fc/presenters');
      ajaxyTabs('Files', '.resourceatron', '.resourceatron-ajax', '/gn2_sessions_fc/resources');
      ajaxyTabs('Course Groups', '.subgroupatron', '.subgroupatron-ajax', '/gn2_sessions_fc/subgroups');
      ajaxyTabs('Syllabus', '.minipanelatron', '.minipanelatron-ajax', '/gn2_sessions_fc-minipanel');
    }
  })
})(jQuery, Drupal, this, this.document);
