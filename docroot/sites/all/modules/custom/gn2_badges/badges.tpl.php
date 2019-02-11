<section id="gn2-badges">
  <?php
    foreach ($badges as $key => $data) {
      $class = ($data['active']) ? ' ' . strtolower($key) : NULL;
      echo '<span class="badge' . $class . '" title="' . $key . '" rel="By ' . $key . '_medal_world_centered.svg by Maix derivative work: Mboro [CC BY-SA 1.0 (https://creativecommons.org/licenses/by-sa/1.0)], via Wikimedia Commons" href="https://commons.wikimedia.org/wiki/File:' . $key . '_medal_world_centered-2.svg"></span>';
    }
  ?>
</section>