<?php
/**
 * @file
 * gn2_guide.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gn2_guide_default_page_manager_pages() {
   /* globalnet_guide */ $page = new stdClass();
   /* globalnet_guide */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* globalnet_guide */ $page->api_version = 1;
   /* globalnet_guide */ $page->name = 'globalnet_guide';
   /* globalnet_guide */ $page->task = 'page';
   /* globalnet_guide */ $page->admin_title = 'GlobalNET Guide';
   /* globalnet_guide */ $page->admin_description = 'Main help page.';
   /* globalnet_guide */ $page->path = 'guide/!term/!node';
   /* globalnet_guide */ $page->access = array(
   /* globalnet_guide */   'type' => 'none',
   /* globalnet_guide */   'settings' => NULL,
   /* globalnet_guide */ );
   /* globalnet_guide */ $page->menu = array();
   /* globalnet_guide */ $page->arguments = array(
   /* globalnet_guide */   'term' => array(
   /* globalnet_guide */     'id' => 1,
   /* globalnet_guide */     'identifier' => 'Taxonomy term: ID',
   /* globalnet_guide */     'name' => 'term',
   /* globalnet_guide */     'settings' => array(
   /* globalnet_guide */       'input_form' => 'term',
   /* globalnet_guide */       'vids' => array(
   /* globalnet_guide */         4 => '4',
   /* globalnet_guide */         7 => 0,
   /* globalnet_guide */         1 => 0,
   /* globalnet_guide */         5 => 0,
   /* globalnet_guide */         2 => 0,
   /* globalnet_guide */         6 => 0,
   /* globalnet_guide */         3 => 0,
   /* globalnet_guide */       ),
   /* globalnet_guide */       'breadcrumb' => 1,
   /* globalnet_guide */       'transform' => 1,
   /* globalnet_guide */     ),
   /* globalnet_guide */   ),
   /* globalnet_guide */   'node' => array(
   /* globalnet_guide */     'id' => 1,
   /* globalnet_guide */     'identifier' => 'Node: ID',
   /* globalnet_guide */     'name' => 'entity_id:node',
   /* globalnet_guide */     'settings' => array(),
   /* globalnet_guide */   ),
   /* globalnet_guide */ );
   /* globalnet_guide */ $page->conf = array(
   /* globalnet_guide */   'admin_paths' => FALSE,
   /* globalnet_guide */ );
  $page->default_handlers = array();
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler = new stdClass();
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->api_version = 1;
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->name = 'page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f';
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->task = 'page';
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->subtask = 'globalnet_guide';
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->handler = 'panel_context';
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->weight = 0;
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ $handler->conf = array(
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'title' => 'Panel',
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'no_blocks' => 0,
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'pipeline' => 'standard',
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'body_classes_to_remove' => '',
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'body_classes_to_add' => '',
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'css_id' => '',
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'css' => '',
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'contexts' => array(),
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */   'relationships' => array(),
   /* page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f */ );
   /* globalnet_guide dafaa417 */ $display = new panels_display();
   /* globalnet_guide dafaa417 */ $display->layout = 'gn2_2colstacked_page';
   /* globalnet_guide dafaa417 */ $display->layout_settings = array();
   /* globalnet_guide dafaa417 */ $display->panel_settings = array(
   /* globalnet_guide dafaa417 */   'style_settings' => array(
   /* globalnet_guide dafaa417 */     'default' => NULL,
   /* globalnet_guide dafaa417 */     'top' => NULL,
   /* globalnet_guide dafaa417 */     'sidebar' => NULL,
   /* globalnet_guide dafaa417 */     'main_top' => NULL,
   /* globalnet_guide dafaa417 */     'main_bottom' => NULL,
   /* globalnet_guide dafaa417 */     'footer' => NULL,
   /* globalnet_guide dafaa417 */   ),
   /* globalnet_guide dafaa417 */ );
   /* globalnet_guide dafaa417 */ $display->cache = array();
   /* globalnet_guide dafaa417 */ $display->title = '%node:title';
   /* globalnet_guide dafaa417 */ $display->uuid = 'dafaa417-7c90-42c3-b670-7f30c279fcf5';
   /* globalnet_guide dafaa417 */ $display->storage_type = 'page_manager';
   /* globalnet_guide dafaa417 */ $display->storage_id = 'page_globalnet_guide__panel_context_86e635ad-57be-44c1-af77-9fc33b39fa7f';
  $display->content = array();
  $display->panels = array();
   /* globalnet_guide 4e1f9ba4 */ $pane = new stdClass();
   /* globalnet_guide 4e1f9ba4 */ $pane->pid = 'new-4e1f9ba4-256f-4dd1-9349-dd3b03b716f9';
   /* globalnet_guide 4e1f9ba4 */ $pane->panel = 'main_top';
   /* globalnet_guide 4e1f9ba4 */ $pane->type = 'custom';
   /* globalnet_guide 4e1f9ba4 */ $pane->subtype = 'custom';
   /* globalnet_guide 4e1f9ba4 */ $pane->shown = TRUE;
   /* globalnet_guide 4e1f9ba4 */ $pane->access = array();
   /* globalnet_guide 4e1f9ba4 */ $pane->configuration = array(
   /* globalnet_guide 4e1f9ba4 */   'admin_title' => 'Search Results',
   /* globalnet_guide 4e1f9ba4 */   'title' => 'Search Results',
   /* globalnet_guide 4e1f9ba4 */   'body' => '<div class="results-container"></div>',
   /* globalnet_guide 4e1f9ba4 */   'format' => 'full_html',
   /* globalnet_guide 4e1f9ba4 */   'substitute' => 1,
   /* globalnet_guide 4e1f9ba4 */ );
   /* globalnet_guide 4e1f9ba4 */ $pane->cache = array();
   /* globalnet_guide 4e1f9ba4 */ $pane->style = array(
   /* globalnet_guide 4e1f9ba4 */   'settings' => NULL,
   /* globalnet_guide 4e1f9ba4 */ );
   /* globalnet_guide 4e1f9ba4 */ $pane->css = array(
   /* globalnet_guide 4e1f9ba4 */   'css_id' => 'pane-search-results-container',
   /* globalnet_guide 4e1f9ba4 */   'css_class' => '',
   /* globalnet_guide 4e1f9ba4 */ );
   /* globalnet_guide 4e1f9ba4 */ $pane->extras = array();
   /* globalnet_guide 4e1f9ba4 */ $pane->position = 0;
   /* globalnet_guide 4e1f9ba4 */ $pane->locks = array();
   /* globalnet_guide 4e1f9ba4 */ $pane->uuid = '4e1f9ba4-256f-4dd1-9349-dd3b03b716f9';
  $display->content['new-4e1f9ba4-256f-4dd1-9349-dd3b03b716f9'] = $pane;
  $display->panels['main_top'][0] = 'new-4e1f9ba4-256f-4dd1-9349-dd3b03b716f9';
   /* globalnet_guide 53178291 */ $pane = new stdClass();
   /* globalnet_guide 53178291 */ $pane->pid = 'new-53178291-f1af-4004-87bc-9463ffb1aeb7';
   /* globalnet_guide 53178291 */ $pane->panel = 'main_top';
   /* globalnet_guide 53178291 */ $pane->type = 'views_panes';
   /* globalnet_guide 53178291 */ $pane->subtype = 'guide_content-panel_pane_3';
   /* globalnet_guide 53178291 */ $pane->shown = TRUE;
   /* globalnet_guide 53178291 */ $pane->access = array(
   /* globalnet_guide 53178291 */   'plugins' => array(
   /* globalnet_guide 53178291 */     0 => array(
   /* globalnet_guide 53178291 */       'name' => 'context_exists',
   /* globalnet_guide 53178291 */       'settings' => array(
   /* globalnet_guide 53178291 */         'exists' => '0',
   /* globalnet_guide 53178291 */       ),
   /* globalnet_guide 53178291 */       'context' => 'argument_term_1',
   /* globalnet_guide 53178291 */       'not' => FALSE,
   /* globalnet_guide 53178291 */     ),
   /* globalnet_guide 53178291 */   ),
   /* globalnet_guide 53178291 */ );
   /* globalnet_guide 53178291 */ $pane->configuration = array();
   /* globalnet_guide 53178291 */ $pane->cache = array();
   /* globalnet_guide 53178291 */ $pane->style = array(
   /* globalnet_guide 53178291 */   'settings' => NULL,
   /* globalnet_guide 53178291 */ );
   /* globalnet_guide 53178291 */ $pane->css = array();
   /* globalnet_guide 53178291 */ $pane->extras = array();
   /* globalnet_guide 53178291 */ $pane->position = 1;
   /* globalnet_guide 53178291 */ $pane->locks = array();
   /* globalnet_guide 53178291 */ $pane->uuid = '53178291-f1af-4004-87bc-9463ffb1aeb7';
  $display->content['new-53178291-f1af-4004-87bc-9463ffb1aeb7'] = $pane;
  $display->panels['main_top'][1] = 'new-53178291-f1af-4004-87bc-9463ffb1aeb7';
   /* globalnet_guide ba8a76f5 */ $pane = new stdClass();
   /* globalnet_guide ba8a76f5 */ $pane->pid = 'new-ba8a76f5-8bdf-4774-b9e1-f71fdb9ae599';
   /* globalnet_guide ba8a76f5 */ $pane->panel = 'main_top';
   /* globalnet_guide ba8a76f5 */ $pane->type = 'views_panes';
   /* globalnet_guide ba8a76f5 */ $pane->subtype = 'guide_terms-panel_pane_2';
   /* globalnet_guide ba8a76f5 */ $pane->shown = TRUE;
   /* globalnet_guide ba8a76f5 */ $pane->access = array();
   /* globalnet_guide ba8a76f5 */ $pane->configuration = array();
   /* globalnet_guide ba8a76f5 */ $pane->cache = array();
   /* globalnet_guide ba8a76f5 */ $pane->style = array(
   /* globalnet_guide ba8a76f5 */   'settings' => NULL,
   /* globalnet_guide ba8a76f5 */ );
   /* globalnet_guide ba8a76f5 */ $pane->css = array();
   /* globalnet_guide ba8a76f5 */ $pane->extras = array();
   /* globalnet_guide ba8a76f5 */ $pane->position = 2;
   /* globalnet_guide ba8a76f5 */ $pane->locks = array();
   /* globalnet_guide ba8a76f5 */ $pane->uuid = 'ba8a76f5-8bdf-4774-b9e1-f71fdb9ae599';
  $display->content['new-ba8a76f5-8bdf-4774-b9e1-f71fdb9ae599'] = $pane;
  $display->panels['main_top'][2] = 'new-ba8a76f5-8bdf-4774-b9e1-f71fdb9ae599';
   /* globalnet_guide 2faf9526 */ $pane = new stdClass();
   /* globalnet_guide 2faf9526 */ $pane->pid = 'new-2faf9526-a284-4d2b-aaa6-d3e0ed09b47c';
   /* globalnet_guide 2faf9526 */ $pane->panel = 'main_top';
   /* globalnet_guide 2faf9526 */ $pane->type = 'views_panes';
   /* globalnet_guide 2faf9526 */ $pane->subtype = 'guide_content-panel_pane_1';
   /* globalnet_guide 2faf9526 */ $pane->shown = TRUE;
   /* globalnet_guide 2faf9526 */ $pane->access = array(
   /* globalnet_guide 2faf9526 */   'plugins' => array(),
   /* globalnet_guide 2faf9526 */ );
   /* globalnet_guide 2faf9526 */ $pane->configuration = array();
   /* globalnet_guide 2faf9526 */ $pane->cache = array();
   /* globalnet_guide 2faf9526 */ $pane->style = array(
   /* globalnet_guide 2faf9526 */   'settings' => NULL,
   /* globalnet_guide 2faf9526 */ );
   /* globalnet_guide 2faf9526 */ $pane->css = array();
   /* globalnet_guide 2faf9526 */ $pane->extras = array();
   /* globalnet_guide 2faf9526 */ $pane->position = 3;
   /* globalnet_guide 2faf9526 */ $pane->locks = array();
   /* globalnet_guide 2faf9526 */ $pane->uuid = '2faf9526-a284-4d2b-aaa6-d3e0ed09b47c';
  $display->content['new-2faf9526-a284-4d2b-aaa6-d3e0ed09b47c'] = $pane;
  $display->panels['main_top'][3] = 'new-2faf9526-a284-4d2b-aaa6-d3e0ed09b47c';
   /* globalnet_guide c8b3bc29 */ $pane = new stdClass();
   /* globalnet_guide c8b3bc29 */ $pane->pid = 'new-c8b3bc29-2b79-4b13-8bde-4938d8eca194';
   /* globalnet_guide c8b3bc29 */ $pane->panel = 'main_top';
   /* globalnet_guide c8b3bc29 */ $pane->type = 'views_panes';
   /* globalnet_guide c8b3bc29 */ $pane->subtype = 'guide_content-panel_pane_2';
   /* globalnet_guide c8b3bc29 */ $pane->shown = TRUE;
   /* globalnet_guide c8b3bc29 */ $pane->access = array();
   /* globalnet_guide c8b3bc29 */ $pane->configuration = array();
   /* globalnet_guide c8b3bc29 */ $pane->cache = array();
   /* globalnet_guide c8b3bc29 */ $pane->style = array(
   /* globalnet_guide c8b3bc29 */   'settings' => NULL,
   /* globalnet_guide c8b3bc29 */ );
   /* globalnet_guide c8b3bc29 */ $pane->css = array();
   /* globalnet_guide c8b3bc29 */ $pane->extras = array();
   /* globalnet_guide c8b3bc29 */ $pane->position = 4;
   /* globalnet_guide c8b3bc29 */ $pane->locks = array();
   /* globalnet_guide c8b3bc29 */ $pane->uuid = 'c8b3bc29-2b79-4b13-8bde-4938d8eca194';
  $display->content['new-c8b3bc29-2b79-4b13-8bde-4938d8eca194'] = $pane;
  $display->panels['main_top'][4] = 'new-c8b3bc29-2b79-4b13-8bde-4938d8eca194';
   /* globalnet_guide 6ebb5761 */ $pane = new stdClass();
   /* globalnet_guide 6ebb5761 */ $pane->pid = 'new-6ebb5761-26f4-40b4-9357-4b5c45acd1ff';
   /* globalnet_guide 6ebb5761 */ $pane->panel = 'sidebar';
   /* globalnet_guide 6ebb5761 */ $pane->type = 'views_panes';
   /* globalnet_guide 6ebb5761 */ $pane->subtype = 'guide_terms-panel_pane_1';
   /* globalnet_guide 6ebb5761 */ $pane->shown = TRUE;
   /* globalnet_guide 6ebb5761 */ $pane->access = array();
   /* globalnet_guide 6ebb5761 */ $pane->configuration = array();
   /* globalnet_guide 6ebb5761 */ $pane->cache = array();
   /* globalnet_guide 6ebb5761 */ $pane->style = array(
   /* globalnet_guide 6ebb5761 */   'settings' => NULL,
   /* globalnet_guide 6ebb5761 */ );
   /* globalnet_guide 6ebb5761 */ $pane->css = array();
   /* globalnet_guide 6ebb5761 */ $pane->extras = array();
   /* globalnet_guide 6ebb5761 */ $pane->position = 0;
   /* globalnet_guide 6ebb5761 */ $pane->locks = array();
   /* globalnet_guide 6ebb5761 */ $pane->uuid = '6ebb5761-26f4-40b4-9357-4b5c45acd1ff';
  $display->content['new-6ebb5761-26f4-40b4-9357-4b5c45acd1ff'] = $pane;
  $display->panels['sidebar'][0] = 'new-6ebb5761-26f4-40b4-9357-4b5c45acd1ff';
   /* globalnet_guide 6a71acbe */ $pane = new stdClass();
   /* globalnet_guide 6a71acbe */ $pane->pid = 'new-6a71acbe-6d93-4150-a38d-38cbbd3969ce';
   /* globalnet_guide 6a71acbe */ $pane->panel = 'top';
   /* globalnet_guide 6a71acbe */ $pane->type = 'custom';
   /* globalnet_guide 6a71acbe */ $pane->subtype = 'custom';
   /* globalnet_guide 6a71acbe */ $pane->shown = TRUE;
   /* globalnet_guide 6a71acbe */ $pane->access = array();
   /* globalnet_guide 6a71acbe */ $pane->configuration = array(
   /* globalnet_guide 6a71acbe */   'admin_title' => '',
   /* globalnet_guide 6a71acbe */   'title' => '',
   /* globalnet_guide 6a71acbe */   'body' => '<h1 class="custom-title">GlobalNET Help Guide</h1>
',
   /* globalnet_guide 6a71acbe */   'format' => 'filtered_html',
   /* globalnet_guide 6a71acbe */   'substitute' => 1,
   /* globalnet_guide 6a71acbe */ );
   /* globalnet_guide 6a71acbe */ $pane->cache = array();
   /* globalnet_guide 6a71acbe */ $pane->style = array(
   /* globalnet_guide 6a71acbe */   'settings' => NULL,
   /* globalnet_guide 6a71acbe */ );
   /* globalnet_guide 6a71acbe */ $pane->css = array();
   /* globalnet_guide 6a71acbe */ $pane->extras = array();
   /* globalnet_guide 6a71acbe */ $pane->position = 0;
   /* globalnet_guide 6a71acbe */ $pane->locks = array();
   /* globalnet_guide 6a71acbe */ $pane->uuid = '6a71acbe-6d93-4150-a38d-38cbbd3969ce';
  $display->content['new-6a71acbe-6d93-4150-a38d-38cbbd3969ce'] = $pane;
  $display->panels['top'][0] = 'new-6a71acbe-6d93-4150-a38d-38cbbd3969ce';
   /* globalnet_guide 9dc78ac7 */ $pane = new stdClass();
   /* globalnet_guide 9dc78ac7 */ $pane->pid = 'new-9dc78ac7-c396-4f79-81ae-29c96490bece';
   /* globalnet_guide 9dc78ac7 */ $pane->panel = 'top';
   /* globalnet_guide 9dc78ac7 */ $pane->type = 'block';
   /* globalnet_guide 9dc78ac7 */ $pane->subtype = 'gn2_guide-gn2_guide_search';
   /* globalnet_guide 9dc78ac7 */ $pane->shown = TRUE;
   /* globalnet_guide 9dc78ac7 */ $pane->access = array();
   /* globalnet_guide 9dc78ac7 */ $pane->configuration = array(
   /* globalnet_guide 9dc78ac7 */   'override_title' => 0,
   /* globalnet_guide 9dc78ac7 */   'override_title_text' => '',
   /* globalnet_guide 9dc78ac7 */   'override_title_heading' => 'h2',
   /* globalnet_guide 9dc78ac7 */ );
   /* globalnet_guide 9dc78ac7 */ $pane->cache = array();
   /* globalnet_guide 9dc78ac7 */ $pane->style = array(
   /* globalnet_guide 9dc78ac7 */   'settings' => NULL,
   /* globalnet_guide 9dc78ac7 */ );
   /* globalnet_guide 9dc78ac7 */ $pane->css = array();
   /* globalnet_guide 9dc78ac7 */ $pane->extras = array();
   /* globalnet_guide 9dc78ac7 */ $pane->position = 1;
   /* globalnet_guide 9dc78ac7 */ $pane->locks = array();
   /* globalnet_guide 9dc78ac7 */ $pane->uuid = '9dc78ac7-c396-4f79-81ae-29c96490bece';
  $display->content['new-9dc78ac7-c396-4f79-81ae-29c96490bece'] = $pane;
  $display->panels['top'][1] = 'new-9dc78ac7-c396-4f79-81ae-29c96490bece';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['globalnet_guide'] = $page;

  return $pages;

}
