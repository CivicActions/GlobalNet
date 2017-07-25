<?php
  global $user;
  if ($user->uid != arg(1)) :
    print $output;
  endif;
?>