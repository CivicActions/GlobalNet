<div class="panel-pane upcoming-events-block custom-upcoming-events-block block__highlighted--lightbg sidebar-subheading">
  <h3 class="pane-title">Upcoming Events</h3>
  <div class="pane-content">
    <?php if ($variables['toggler'] === TRUE) { ?>
    <div class="event-toggler" style="text-align: right; margin-bottom: 10px;"><a href="#" class="toggler-open active">Open</a> | <a href="#" class="toggler-all">All</a></div>
    <?php } ?>
    <div class="view-content open">
      <?php
        foreach ($variables['results'] as $data) { ?>
      <div class="sidebar-node-list--item <?php print $data['grouptype']; ?>">
        <div class="sidebar-node-list--item--title"><?php print $data['title']; ?></div>    
        <div class="sidebar-node-list--item--text"><span class="date-display-single"><?php print $data['date']; ?></span></div>
      </div>
      <?php } ?>
    </div>
  </div>    
</div>
