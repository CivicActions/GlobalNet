<?php
/**
 * @file
 * This is a custom template file for the group_teaser view mode.
 */

$link = l('<div class="title">' . $node->title . '</div>', 'node/' . $node->nid, array('html' => TRUE));
$body = t('!node', array('!node' => $node->body[LANGUAGE_NONE][0]['safe_summary']));

?>

<div class="group-teaser--item">
  <div class="group-teaser--item--header">
    <div class="group-title">
      <?php print $link; ?>
    </div>
    <div class="group-membercount">
      <?php
        $membercount = $content['og_simplestats_user_count'][0]['#markup'];
        if ($membercount == 0) :
          $mbrcountmsg = 'No members';
        elseif ($membercount == 1) :
          $mbrcountmsg = '1 member';
        else :
          $mbrcountmsg = $membercount . ' members';
        endif;
        print $mbrcountmsg;
      ?>
    </div>
  </div>
  <div class="group-teaser--item--body">
    <?php print $body; ?>
  </div>
</div>

<?php
  // RD-1741/1923: yields recursion by rendering this view mode for each group.
  // print render($subgroups);
?>
