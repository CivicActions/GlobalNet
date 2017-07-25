<?php
/**
 * @file
 * gn2_reports.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gn2_reports_default_panels_mini() {
  $export = array();

   /* metrics */ $mini = new stdClass();
   /* metrics */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* metrics */ $mini->api_version = 1;
   /* metrics */ $mini->name = 'metrics';
   /* metrics */ $mini->category = 'Reporting';
   /* metrics */ $mini->admin_title = 'Metrics';
   /* metrics */ $mini->admin_description = '';
   /* metrics */ $mini->requiredcontexts = array();
   /* metrics */ $mini->contexts = array();
   /* metrics */ $mini->relationships = array();
   /* metrics 588bea79 */ $display = new panels_display();
   /* metrics 588bea79 */ $display->layout = 'gn2-3col';
   /* metrics 588bea79 */ $display->layout_settings = array();
   /* metrics 588bea79 */ $display->panel_settings = array(
   /* metrics 588bea79 */   'style_settings' => array(
   /* metrics 588bea79 */     'default' => NULL,
   /* metrics 588bea79 */     'gn2-3col--header' => NULL,
   /* metrics 588bea79 */     'gn2-3col--col1' => NULL,
   /* metrics 588bea79 */     'gn2-3col--col2' => NULL,
   /* metrics 588bea79 */     'gn2-3col--col3' => NULL,
   /* metrics 588bea79 */     'gn2-3col--footer' => NULL,
   /* metrics 588bea79 */   ),
   /* metrics 588bea79 */ );
   /* metrics 588bea79 */ $display->cache = array();
   /* metrics 588bea79 */ $display->title = '';
   /* metrics 588bea79 */ $display->uuid = '588bea79-08f8-4b49-9d5f-7fc20882e111';
   /* metrics 588bea79 */ $display->storage_type = 'panels_mini';
   /* metrics 588bea79 */ $display->storage_id = 'metrics';
  $display->content = array();
  $display->panels = array();
   /* metrics 8192fe61 */ $pane = new stdClass();
   /* metrics 8192fe61 */ $pane->pid = 'new-8192fe61-58b2-4363-80fc-1dbe515d62dc';
   /* metrics 8192fe61 */ $pane->panel = 'gn2-3col--col1';
   /* metrics 8192fe61 */ $pane->type = 'views_panes';
   /* metrics 8192fe61 */ $pane->subtype = 'group_statistics-panel_pane_1';
   /* metrics 8192fe61 */ $pane->shown = TRUE;
   /* metrics 8192fe61 */ $pane->access = array();
   /* metrics 8192fe61 */ $pane->configuration = array();
   /* metrics 8192fe61 */ $pane->cache = array();
   /* metrics 8192fe61 */ $pane->style = array(
   /* metrics 8192fe61 */   'settings' => array(
   /* metrics 8192fe61 */     'clean_markup' => array(
   /* metrics 8192fe61 */       'pane_wrapper' => 'div',
   /* metrics 8192fe61 */       'additional_pane_classes' => 'panel-pane',
   /* metrics 8192fe61 */       'additional_pane_attributes' => '',
   /* metrics 8192fe61 */       'enable_inner_div' => 0,
   /* metrics 8192fe61 */       'title_wrapper' => 'h2',
   /* metrics 8192fe61 */       'title_hide' => 0,
   /* metrics 8192fe61 */       'content_wrapper' => 'none',
   /* metrics 8192fe61 */     ),
   /* metrics 8192fe61 */   ),
   /* metrics 8192fe61 */   'style' => 'clean_element',
   /* metrics 8192fe61 */ );
   /* metrics 8192fe61 */ $pane->css = array();
   /* metrics 8192fe61 */ $pane->extras = array();
   /* metrics 8192fe61 */ $pane->position = 0;
   /* metrics 8192fe61 */ $pane->locks = array();
   /* metrics 8192fe61 */ $pane->uuid = '8192fe61-58b2-4363-80fc-1dbe515d62dc';
  $display->content['new-8192fe61-58b2-4363-80fc-1dbe515d62dc'] = $pane;
  $display->panels['gn2-3col--col1'][0] = 'new-8192fe61-58b2-4363-80fc-1dbe515d62dc';
   /* metrics 73b2dd29 */ $pane = new stdClass();
   /* metrics 73b2dd29 */ $pane->pid = 'new-73b2dd29-197f-4717-803a-3cebece5e8ac';
   /* metrics 73b2dd29 */ $pane->panel = 'gn2-3col--col1';
   /* metrics 73b2dd29 */ $pane->type = 'views_panes';
   /* metrics 73b2dd29 */ $pane->subtype = 'group_statistics-panel_pane_3';
   /* metrics 73b2dd29 */ $pane->shown = TRUE;
   /* metrics 73b2dd29 */ $pane->access = array();
   /* metrics 73b2dd29 */ $pane->configuration = array();
   /* metrics 73b2dd29 */ $pane->cache = array();
   /* metrics 73b2dd29 */ $pane->style = array(
   /* metrics 73b2dd29 */   'settings' => array(
   /* metrics 73b2dd29 */     'clean_markup' => array(
   /* metrics 73b2dd29 */       'pane_wrapper' => 'div',
   /* metrics 73b2dd29 */       'additional_pane_classes' => 'panel-pane',
   /* metrics 73b2dd29 */       'additional_pane_attributes' => '',
   /* metrics 73b2dd29 */       'enable_inner_div' => 0,
   /* metrics 73b2dd29 */       'title_wrapper' => 'h4',
   /* metrics 73b2dd29 */       'title_hide' => 0,
   /* metrics 73b2dd29 */       'content_wrapper' => 'none',
   /* metrics 73b2dd29 */     ),
   /* metrics 73b2dd29 */   ),
   /* metrics 73b2dd29 */   'style' => 'clean_element',
   /* metrics 73b2dd29 */ );
   /* metrics 73b2dd29 */ $pane->css = array();
   /* metrics 73b2dd29 */ $pane->extras = array();
   /* metrics 73b2dd29 */ $pane->position = 1;
   /* metrics 73b2dd29 */ $pane->locks = array();
   /* metrics 73b2dd29 */ $pane->uuid = '73b2dd29-197f-4717-803a-3cebece5e8ac';
  $display->content['new-73b2dd29-197f-4717-803a-3cebece5e8ac'] = $pane;
  $display->panels['gn2-3col--col1'][1] = 'new-73b2dd29-197f-4717-803a-3cebece5e8ac';
   /* metrics dbdf6b9b */ $pane = new stdClass();
   /* metrics dbdf6b9b */ $pane->pid = 'new-dbdf6b9b-9532-486b-985d-f79dbe656463';
   /* metrics dbdf6b9b */ $pane->panel = 'gn2-3col--col2';
   /* metrics dbdf6b9b */ $pane->type = 'views_panes';
   /* metrics dbdf6b9b */ $pane->subtype = 'group_statistics-panel_pane_2';
   /* metrics dbdf6b9b */ $pane->shown = TRUE;
   /* metrics dbdf6b9b */ $pane->access = array();
   /* metrics dbdf6b9b */ $pane->configuration = array();
   /* metrics dbdf6b9b */ $pane->cache = array();
   /* metrics dbdf6b9b */ $pane->style = array(
   /* metrics dbdf6b9b */   'settings' => array(
   /* metrics dbdf6b9b */     'clean_markup' => array(
   /* metrics dbdf6b9b */       'pane_wrapper' => 'div',
   /* metrics dbdf6b9b */       'additional_pane_classes' => 'panel-pane',
   /* metrics dbdf6b9b */       'additional_pane_attributes' => '',
   /* metrics dbdf6b9b */       'enable_inner_div' => 0,
   /* metrics dbdf6b9b */       'title_wrapper' => 'h4',
   /* metrics dbdf6b9b */       'title_hide' => 0,
   /* metrics dbdf6b9b */       'content_wrapper' => 'none',
   /* metrics dbdf6b9b */     ),
   /* metrics dbdf6b9b */   ),
   /* metrics dbdf6b9b */   'style' => 'clean_element',
   /* metrics dbdf6b9b */ );
   /* metrics dbdf6b9b */ $pane->css = array();
   /* metrics dbdf6b9b */ $pane->extras = array();
   /* metrics dbdf6b9b */ $pane->position = 0;
   /* metrics dbdf6b9b */ $pane->locks = array();
   /* metrics dbdf6b9b */ $pane->uuid = 'dbdf6b9b-9532-486b-985d-f79dbe656463';
  $display->content['new-dbdf6b9b-9532-486b-985d-f79dbe656463'] = $pane;
  $display->panels['gn2-3col--col2'][0] = 'new-dbdf6b9b-9532-486b-985d-f79dbe656463';
   /* metrics 668c59a8 */ $pane = new stdClass();
   /* metrics 668c59a8 */ $pane->pid = 'new-668c59a8-07d6-434b-986e-97aefc51f118';
   /* metrics 668c59a8 */ $pane->panel = 'gn2-3col--footer';
   /* metrics 668c59a8 */ $pane->type = 'block';
   /* metrics 668c59a8 */ $pane->subtype = 'gn2_metrics-group_metrics_chart';
   /* metrics 668c59a8 */ $pane->shown = TRUE;
   /* metrics 668c59a8 */ $pane->access = array();
   /* metrics 668c59a8 */ $pane->configuration = array(
   /* metrics 668c59a8 */   'override_title' => 1,
   /* metrics 668c59a8 */   'override_title_text' => 'Content created in the last 30 days',
   /* metrics 668c59a8 */   'override_title_heading' => 'h4',
   /* metrics 668c59a8 */ );
   /* metrics 668c59a8 */ $pane->cache = array();
   /* metrics 668c59a8 */ $pane->style = array(
   /* metrics 668c59a8 */   'settings' => array(
   /* metrics 668c59a8 */     'clean_markup' => array(
   /* metrics 668c59a8 */       'pane_wrapper' => 'div',
   /* metrics 668c59a8 */       'additional_pane_classes' => 'panel-pane',
   /* metrics 668c59a8 */       'additional_pane_attributes' => '',
   /* metrics 668c59a8 */       'enable_inner_div' => 0,
   /* metrics 668c59a8 */       'title_wrapper' => 'h4',
   /* metrics 668c59a8 */       'title_hide' => 0,
   /* metrics 668c59a8 */       'content_wrapper' => 'none',
   /* metrics 668c59a8 */     ),
   /* metrics 668c59a8 */   ),
   /* metrics 668c59a8 */   'style' => 'clean_element',
   /* metrics 668c59a8 */ );
   /* metrics 668c59a8 */ $pane->css = array();
   /* metrics 668c59a8 */ $pane->extras = array();
   /* metrics 668c59a8 */ $pane->position = 0;
   /* metrics 668c59a8 */ $pane->locks = array();
   /* metrics 668c59a8 */ $pane->uuid = '668c59a8-07d6-434b-986e-97aefc51f118';
  $display->content['new-668c59a8-07d6-434b-986e-97aefc51f118'] = $pane;
  $display->panels['gn2-3col--footer'][0] = 'new-668c59a8-07d6-434b-986e-97aefc51f118';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['metrics'] = $mini;

  return $export;
}
