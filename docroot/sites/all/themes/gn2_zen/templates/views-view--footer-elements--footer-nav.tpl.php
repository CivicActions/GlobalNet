<?php

/**
 * @file
 * Main view template for footer elements footer nav view display.
 */
?>

<?php if ($rows): ?>
  <nav class="footer-communities-dropdown">
    <select>
      <option>GlobalNET Partners</option>
      <?php print $rows; ?>
    </select>
  </nav>
<?php endif; ?>
