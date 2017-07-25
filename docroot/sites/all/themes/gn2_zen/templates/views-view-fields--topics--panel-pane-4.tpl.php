<?php foreach ($fields as $id => $field): ?>
  
  <?php if($id == 'title'){?>
        <div class="inner">   
            <?php
              print $field->content;
              
              $node = node_load($row->node_og_membership_nid);
              if ($node) {
                $obj = new GN2PathToOrganization($node);
                $org = $obj->getOrganization();
              }
            ?>
                <p class="author-date">
                    <?php 
                    if(isset($org->field_org_short_title)){
                      print $fields['field_course_dates']->content . ', ' . $org->title; 
                    }
                    ?>
                </p>
            <div class="trimmed-text">
                <?php
                  print $fields['body']->content;
                ?>
            </div>
        </div>
    <?php }?>

<?php endforeach; ?>
