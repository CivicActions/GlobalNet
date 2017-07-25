<?php
/**
 * @file
 * Template for a 1 column panel layout for general purposes.
 */
?>

<div class="gn2-1col <?php print $classes; ?>" <?php if (!empty($css_id)) : print "id=\"$css_id\""; endif; ?>>
  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
    </div>
  </div>
</div><!-- /.gn2-1col -->
