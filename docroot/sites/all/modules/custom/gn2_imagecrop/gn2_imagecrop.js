(function ($) {

  Drupal.behaviors.gn2_imagecrop = {
    attach: function (context, settings) {
      // Get images in the body field.
      var img = document.querySelectorAll('.main .field-name-body img');

      /**
       * @TODO Allow for multiple images to be cropped.
       * At present, we can only fire if one pic is in body.
       */
      if (img.length === 1) {

        if (Drupal.settings.gn2_imagecrop.nid) {
          $('.main .field-name-body').append('<span class="cropperjs-help">To crop image in body, tap picture once. When finished cropping, tap outside of image twice.</span>');
        }
        // Instantiate the cropper for any image clicked.
        img.forEach(function (el) {
          $(el).click(function () {
            var cropper = new Cropper(el);

            // Grab the image path to pass for comparison.
            var str = $(el).attr('src');
            var n = str.lastIndexOf('/');
            var s = str.substring(n + 1);
            var result = s.substring(0, s.indexOf('.'));
            var instance = $(img).length;

            // Body clicked, so close the cropper and pass data.
            $('body').dblclick(function () {
              var canvasImg = el.cropper.getCroppedCanvas();
              var photo = canvasImg.toDataURL('image/png');
              $.ajax({
                type: 'POST',
                url: Drupal.settings.basePath + 'gn2-imagecrop/imagecrop/' + Drupal.settings.gn2_imagecrop.nid,
                data: {
                  pngimageData: photo,
                  filename: result + '.png',
                  node: Drupal.settings.gn2_imagecrop.nid,
                  token: Drupal.settings.gn2_imagecrop.token,
                  instance: instance
                },

                // Reload the page if successful, or just kill the cropper if POST fails.
                success: function () {
                  console.log('success');
                  location.reload();
                },
                error: function () {
                  console.log('failure');
                  cropper.destroy();
                }
              });
            })
          })
        })
      }
    }
  };

})(jQuery);
