<?php  if (count($output) > 0) { ?>
<ul>
  <?php for ($i = 0; $i < count($output); $i++) { ?>
    <li><?php print $output[$i];?></li>
  <?php }?>
</ul>
  <?php }else{?>
<div class="no-result">
  No results found.
</div>
  <?php }?>