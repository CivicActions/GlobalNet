<?php
/**
 * @file
 * gn2_privatemsg.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gn2_privatemsg_default_page_manager_pages() {
   /* inbox_message */ $page = new stdClass();
   /* inbox_message */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* inbox_message */ $page->api_version = 1;
   /* inbox_message */ $page->name = 'inbox_message';
   /* inbox_message */ $page->task = 'page';
   /* inbox_message */ $page->admin_title = 'Inbox: Message';
   /* inbox_message */ $page->admin_description = '';
   /* inbox_message */ $page->path = 'inbox/message/%message_id';
   /* inbox_message */ $page->access = array(
   /* inbox_message */   'type' => 'none',
   /* inbox_message */   'settings' => NULL,
   /* inbox_message */   'plugins' => array(
   /* inbox_message */     0 => array(
   /* inbox_message */       'name' => 'role',
   /* inbox_message */       'settings' => array(
   /* inbox_message */         'rids' => array(
   /* inbox_message */           0 => 2,
   /* inbox_message */         ),
   /* inbox_message */       ),
   /* inbox_message */       'context' => 'logged-in-user',
   /* inbox_message */       'not' => FALSE,
   /* inbox_message */     ),
   /* inbox_message */   ),
   /* inbox_message */   'logic' => 'and',
   /* inbox_message */ );
   /* inbox_message */ $page->menu = array(
   /* inbox_message */   'type' => 'none',
   /* inbox_message */   'title' => '',
   /* inbox_message */   'name' => 'navigation',
   /* inbox_message */   'weight' => '0',
   /* inbox_message */   'parent' => array(
   /* inbox_message */     'type' => 'none',
   /* inbox_message */     'title' => '',
   /* inbox_message */     'name' => 'navigation',
   /* inbox_message */     'weight' => '0',
   /* inbox_message */   ),
   /* inbox_message */ );
   /* inbox_message */ $page->arguments = array(
   /* inbox_message */   'message_id' => array(
   /* inbox_message */     'id' => 1,
   /* inbox_message */     'identifier' => 'Privatemsg: ID',
   /* inbox_message */     'name' => 'entity_id:privatemsg_message',
   /* inbox_message */     'settings' => array(),
   /* inbox_message */   ),
   /* inbox_message */ );
   /* inbox_message */ $page->conf = array(
   /* inbox_message */   'admin_paths' => FALSE,
   /* inbox_message */ );
  $page->default_handlers = array();
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler = new stdClass();
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->api_version = 1;
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->name = 'page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd';
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->task = 'page';
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->subtask = 'inbox_message';
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->handler = 'panel_context';
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->weight = 0;
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ $handler->conf = array(
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'title' => 'Panel',
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'no_blocks' => 0,
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'pipeline' => 'standard',
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'body_classes_to_remove' => '',
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'body_classes_to_add' => '',
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'css_id' => '',
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'css' => '',
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'contexts' => array(),
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */   'relationships' => array(),
   /* page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd */ );
   /* inbox_message a56cfda1 */ $display = new panels_display();
   /* inbox_message a56cfda1 */ $display->layout = 'gn2_2colstacked_page';
   /* inbox_message a56cfda1 */ $display->layout_settings = array();
   /* inbox_message a56cfda1 */ $display->panel_settings = array(
   /* inbox_message a56cfda1 */   'style_settings' => array(
   /* inbox_message a56cfda1 */     'default' => NULL,
   /* inbox_message a56cfda1 */     'sidebar' => NULL,
   /* inbox_message a56cfda1 */     'main_content' => NULL,
   /* inbox_message a56cfda1 */     'top' => NULL,
   /* inbox_message a56cfda1 */     'main_top' => NULL,
   /* inbox_message a56cfda1 */     'main_bottom' => NULL,
   /* inbox_message a56cfda1 */     'footer' => NULL,
   /* inbox_message a56cfda1 */   ),
   /* inbox_message a56cfda1 */ );
   /* inbox_message a56cfda1 */ $display->cache = array();
   /* inbox_message a56cfda1 */ $display->title = '';
   /* inbox_message a56cfda1 */ $display->uuid = 'a56cfda1-4f6d-4092-987d-c820bcc7adb2';
   /* inbox_message a56cfda1 */ $display->storage_type = 'page_manager';
   /* inbox_message a56cfda1 */ $display->storage_id = 'page_inbox_message__panel_context_022daaaa-fcb1-4b1d-8d5f-13b80375f4cd';
  $display->content = array();
  $display->panels = array();
   /* inbox_message 2c1de751 */ $pane = new stdClass();
   /* inbox_message 2c1de751 */ $pane->pid = 'new-2c1de751-0d23-454e-808b-6650e0fa721b';
   /* inbox_message 2c1de751 */ $pane->panel = 'main_top';
   /* inbox_message 2c1de751 */ $pane->type = 'views';
   /* inbox_message 2c1de751 */ $pane->subtype = 'inbox';
   /* inbox_message 2c1de751 */ $pane->shown = TRUE;
   /* inbox_message 2c1de751 */ $pane->access = array();
   /* inbox_message 2c1de751 */ $pane->configuration = array(
   /* inbox_message 2c1de751 */   'override_pager_settings' => 0,
   /* inbox_message 2c1de751 */   'use_pager' => 0,
   /* inbox_message 2c1de751 */   'nodes_per_page' => '10',
   /* inbox_message 2c1de751 */   'pager_id' => '0',
   /* inbox_message 2c1de751 */   'offset' => '0',
   /* inbox_message 2c1de751 */   'more_link' => 0,
   /* inbox_message 2c1de751 */   'feed_icons' => 0,
   /* inbox_message 2c1de751 */   'panel_args' => 0,
   /* inbox_message 2c1de751 */   'link_to_view' => 0,
   /* inbox_message 2c1de751 */   'args' => '',
   /* inbox_message 2c1de751 */   'url' => '',
   /* inbox_message 2c1de751 */   'display' => 'block_5',
   /* inbox_message 2c1de751 */   'context' => array(
   /* inbox_message 2c1de751 */     0 => 'argument_entity_id:privatemsg_message_1.original',
   /* inbox_message 2c1de751 */   ),
   /* inbox_message 2c1de751 */   'override_title' => 0,
   /* inbox_message 2c1de751 */   'override_title_text' => '',
   /* inbox_message 2c1de751 */   'override_title_heading' => 'h2',
   /* inbox_message 2c1de751 */ );
   /* inbox_message 2c1de751 */ $pane->cache = array();
   /* inbox_message 2c1de751 */ $pane->style = array(
   /* inbox_message 2c1de751 */   'settings' => NULL,
   /* inbox_message 2c1de751 */ );
   /* inbox_message 2c1de751 */ $pane->css = array();
   /* inbox_message 2c1de751 */ $pane->extras = array();
   /* inbox_message 2c1de751 */ $pane->position = 0;
   /* inbox_message 2c1de751 */ $pane->locks = array();
   /* inbox_message 2c1de751 */ $pane->uuid = '2c1de751-0d23-454e-808b-6650e0fa721b';
  $display->content['new-2c1de751-0d23-454e-808b-6650e0fa721b'] = $pane;
  $display->panels['main_top'][0] = 'new-2c1de751-0d23-454e-808b-6650e0fa721b';
   /* inbox_message b86104cd */ $pane = new stdClass();
   /* inbox_message b86104cd */ $pane->pid = 'new-b86104cd-74e5-45c0-8367-e443cc6fd1fa';
   /* inbox_message b86104cd */ $pane->panel = 'sidebar';
   /* inbox_message b86104cd */ $pane->type = 'block';
   /* inbox_message b86104cd */ $pane->subtype = 'gn2_privatemsg-inbox-menu';
   /* inbox_message b86104cd */ $pane->shown = TRUE;
   /* inbox_message b86104cd */ $pane->access = array();
   /* inbox_message b86104cd */ $pane->configuration = array(
   /* inbox_message b86104cd */   'override_title' => 0,
   /* inbox_message b86104cd */   'override_title_text' => '',
   /* inbox_message b86104cd */   'override_title_heading' => 'h2',
   /* inbox_message b86104cd */ );
   /* inbox_message b86104cd */ $pane->cache = array();
   /* inbox_message b86104cd */ $pane->style = array(
   /* inbox_message b86104cd */   'settings' => NULL,
   /* inbox_message b86104cd */ );
   /* inbox_message b86104cd */ $pane->css = array(
   /* inbox_message b86104cd */   'css_id' => '',
   /* inbox_message b86104cd */   'css_class' => 'inbox-menu',
   /* inbox_message b86104cd */ );
   /* inbox_message b86104cd */ $pane->extras = array();
   /* inbox_message b86104cd */ $pane->position = 0;
   /* inbox_message b86104cd */ $pane->locks = array();
   /* inbox_message b86104cd */ $pane->uuid = 'b86104cd-74e5-45c0-8367-e443cc6fd1fa';
  $display->content['new-b86104cd-74e5-45c0-8367-e443cc6fd1fa'] = $pane;
  $display->panels['sidebar'][0] = 'new-b86104cd-74e5-45c0-8367-e443cc6fd1fa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2c1de751-0d23-454e-808b-6650e0fa721b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inbox_message'] = $page;

   /* inbox_messages */ $page = new stdClass();
   /* inbox_messages */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* inbox_messages */ $page->api_version = 1;
   /* inbox_messages */ $page->name = 'inbox_messages';
   /* inbox_messages */ $page->task = 'page';
   /* inbox_messages */ $page->admin_title = 'Inbox: messages';
   /* inbox_messages */ $page->admin_description = '';
   /* inbox_messages */ $page->path = 'inbox/messages/!flag';
   /* inbox_messages */ $page->access = array(
   /* inbox_messages */   'plugins' => array(
   /* inbox_messages */     0 => array(
   /* inbox_messages */       'name' => 'perm',
   /* inbox_messages */       'settings' => array(
   /* inbox_messages */         'perm' => 'read privatemsg',
   /* inbox_messages */       ),
   /* inbox_messages */       'context' => 'logged-in-user',
   /* inbox_messages */       'not' => FALSE,
   /* inbox_messages */     ),
   /* inbox_messages */   ),
   /* inbox_messages */   'logic' => 'and',
   /* inbox_messages */   'type' => 'none',
   /* inbox_messages */   'settings' => NULL,
   /* inbox_messages */ );
   /* inbox_messages */ $page->menu = array();
   /* inbox_messages */ $page->arguments = array(
   /* inbox_messages */   'flag' => array(
   /* inbox_messages */     'id' => '',
   /* inbox_messages */     'identifier' => '',
   /* inbox_messages */     'argument' => '',
   /* inbox_messages */     'settings' => array(),
   /* inbox_messages */   ),
   /* inbox_messages */ );
   /* inbox_messages */ $page->conf = array(
   /* inbox_messages */   'admin_paths' => FALSE,
   /* inbox_messages */ );
  $page->default_handlers = array();
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler = new stdClass();
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->api_version = 1;
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->name = 'page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6';
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->task = 'page';
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->subtask = 'inbox_messages';
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->handler = 'panel_context';
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->weight = 0;
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ $handler->conf = array(
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'title' => 'Panel',
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'no_blocks' => 0,
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'pipeline' => 'standard',
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'body_classes_to_remove' => '',
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'body_classes_to_add' => 'inbox',
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'css_id' => '',
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'css' => '',
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'contexts' => array(),
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */   'relationships' => array(),
   /* page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6 */ );
   /* inbox_messages 0a7d6010 */ $display = new panels_display();
   /* inbox_messages 0a7d6010 */ $display->layout = 'gn2_2colstacked_page';
   /* inbox_messages 0a7d6010 */ $display->layout_settings = array();
   /* inbox_messages 0a7d6010 */ $display->panel_settings = array(
   /* inbox_messages 0a7d6010 */   'style_settings' => array(
   /* inbox_messages 0a7d6010 */     'default' => NULL,
   /* inbox_messages 0a7d6010 */     'sidebar' => NULL,
   /* inbox_messages 0a7d6010 */     'main_content' => NULL,
   /* inbox_messages 0a7d6010 */     'top' => NULL,
   /* inbox_messages 0a7d6010 */     'main_top' => NULL,
   /* inbox_messages 0a7d6010 */     'main_bottom' => NULL,
   /* inbox_messages 0a7d6010 */     'footer' => NULL,
   /* inbox_messages 0a7d6010 */   ),
   /* inbox_messages 0a7d6010 */ );
   /* inbox_messages 0a7d6010 */ $display->cache = array();
   /* inbox_messages 0a7d6010 */ $display->title = 'Inbox';
   /* inbox_messages 0a7d6010 */ $display->uuid = '0a7d6010-e314-498b-b27e-01c95dd02c4c';
   /* inbox_messages 0a7d6010 */ $display->storage_type = 'page_manager';
   /* inbox_messages 0a7d6010 */ $display->storage_id = 'page_inbox_messages__panel_context_aa27096b-6a32-495b-863a-ada1397997e6';
  $display->content = array();
  $display->panels = array();
   /* inbox_messages 1531d660 */ $pane = new stdClass();
   /* inbox_messages 1531d660 */ $pane->pid = 'new-1531d660-266e-4f64-94f5-94f93b6d27cd';
   /* inbox_messages 1531d660 */ $pane->panel = 'main_top';
   /* inbox_messages 1531d660 */ $pane->type = 'views';
   /* inbox_messages 1531d660 */ $pane->subtype = 'inbox';
   /* inbox_messages 1531d660 */ $pane->shown = TRUE;
   /* inbox_messages 1531d660 */ $pane->access = array();
   /* inbox_messages 1531d660 */ $pane->configuration = array(
   /* inbox_messages 1531d660 */   'override_pager_settings' => 0,
   /* inbox_messages 1531d660 */   'use_pager' => 0,
   /* inbox_messages 1531d660 */   'nodes_per_page' => '10',
   /* inbox_messages 1531d660 */   'pager_id' => '0',
   /* inbox_messages 1531d660 */   'offset' => '0',
   /* inbox_messages 1531d660 */   'more_link' => 0,
   /* inbox_messages 1531d660 */   'feed_icons' => 0,
   /* inbox_messages 1531d660 */   'panel_args' => 0,
   /* inbox_messages 1531d660 */   'link_to_view' => 0,
   /* inbox_messages 1531d660 */   'args' => '',
   /* inbox_messages 1531d660 */   'url' => '',
   /* inbox_messages 1531d660 */   'display' => 'block',
   /* inbox_messages 1531d660 */   'override_title' => 0,
   /* inbox_messages 1531d660 */   'override_title_text' => '',
   /* inbox_messages 1531d660 */   'override_title_heading' => 'h2',
   /* inbox_messages 1531d660 */ );
   /* inbox_messages 1531d660 */ $pane->cache = array();
   /* inbox_messages 1531d660 */ $pane->style = array(
   /* inbox_messages 1531d660 */   'settings' => NULL,
   /* inbox_messages 1531d660 */ );
   /* inbox_messages 1531d660 */ $pane->css = array();
   /* inbox_messages 1531d660 */ $pane->extras = array();
   /* inbox_messages 1531d660 */ $pane->position = 0;
   /* inbox_messages 1531d660 */ $pane->locks = array();
   /* inbox_messages 1531d660 */ $pane->uuid = '1531d660-266e-4f64-94f5-94f93b6d27cd';
  $display->content['new-1531d660-266e-4f64-94f5-94f93b6d27cd'] = $pane;
  $display->panels['main_top'][0] = 'new-1531d660-266e-4f64-94f5-94f93b6d27cd';
   /* inbox_messages 4bcfecec */ $pane = new stdClass();
   /* inbox_messages 4bcfecec */ $pane->pid = 'new-4bcfecec-749a-4e72-aa19-725602e72ca5';
   /* inbox_messages 4bcfecec */ $pane->panel = 'sidebar';
   /* inbox_messages 4bcfecec */ $pane->type = 'block';
   /* inbox_messages 4bcfecec */ $pane->subtype = 'gn2_privatemsg-inbox-menu';
   /* inbox_messages 4bcfecec */ $pane->shown = TRUE;
   /* inbox_messages 4bcfecec */ $pane->access = array();
   /* inbox_messages 4bcfecec */ $pane->configuration = array(
   /* inbox_messages 4bcfecec */   'override_title' => 0,
   /* inbox_messages 4bcfecec */   'override_title_text' => '',
   /* inbox_messages 4bcfecec */   'override_title_heading' => 'h2',
   /* inbox_messages 4bcfecec */ );
   /* inbox_messages 4bcfecec */ $pane->cache = array();
   /* inbox_messages 4bcfecec */ $pane->style = array(
   /* inbox_messages 4bcfecec */   'settings' => NULL,
   /* inbox_messages 4bcfecec */ );
   /* inbox_messages 4bcfecec */ $pane->css = array(
   /* inbox_messages 4bcfecec */   'css_id' => '',
   /* inbox_messages 4bcfecec */   'css_class' => 'inbox-menu',
   /* inbox_messages 4bcfecec */ );
   /* inbox_messages 4bcfecec */ $pane->extras = array();
   /* inbox_messages 4bcfecec */ $pane->position = 0;
   /* inbox_messages 4bcfecec */ $pane->locks = array();
   /* inbox_messages 4bcfecec */ $pane->uuid = '4bcfecec-749a-4e72-aa19-725602e72ca5';
  $display->content['new-4bcfecec-749a-4e72-aa19-725602e72ca5'] = $pane;
  $display->panels['sidebar'][0] = 'new-4bcfecec-749a-4e72-aa19-725602e72ca5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1531d660-266e-4f64-94f5-94f93b6d27cd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inbox_messages'] = $page;

   /* inbox_notification */ $page = new stdClass();
   /* inbox_notification */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* inbox_notification */ $page->api_version = 1;
   /* inbox_notification */ $page->name = 'inbox_notification';
   /* inbox_notification */ $page->task = 'page';
   /* inbox_notification */ $page->admin_title = 'Inbox: Notification';
   /* inbox_notification */ $page->admin_description = '';
   /* inbox_notification */ $page->path = 'inbox/notification/%message_id';
   /* inbox_notification */ $page->access = array(
   /* inbox_notification */   'type' => 'none',
   /* inbox_notification */   'settings' => NULL,
   /* inbox_notification */ );
   /* inbox_notification */ $page->menu = array(
   /* inbox_notification */   'type' => 'none',
   /* inbox_notification */   'title' => '',
   /* inbox_notification */   'name' => 'navigation',
   /* inbox_notification */   'weight' => '0',
   /* inbox_notification */   'parent' => array(
   /* inbox_notification */     'type' => 'none',
   /* inbox_notification */     'title' => '',
   /* inbox_notification */     'name' => 'navigation',
   /* inbox_notification */     'weight' => '0',
   /* inbox_notification */   ),
   /* inbox_notification */ );
   /* inbox_notification */ $page->arguments = array(
   /* inbox_notification */   'message_id' => array(
   /* inbox_notification */     'id' => 1,
   /* inbox_notification */     'identifier' => 'Privatemsg: ID',
   /* inbox_notification */     'name' => 'entity_id:privatemsg_message',
   /* inbox_notification */     'settings' => array(),
   /* inbox_notification */   ),
   /* inbox_notification */ );
   /* inbox_notification */ $page->conf = array(
   /* inbox_notification */   'admin_paths' => FALSE,
   /* inbox_notification */ );
  $page->default_handlers = array();
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler = new stdClass();
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->api_version = 1;
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->name = 'page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696';
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->task = 'page';
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->subtask = 'inbox_notification';
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->handler = 'panel_context';
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->weight = 0;
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ $handler->conf = array(
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'title' => 'Panel',
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'no_blocks' => 0,
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'pipeline' => 'standard',
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'body_classes_to_remove' => '',
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'body_classes_to_add' => '',
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'css_id' => '',
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'css' => '',
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'contexts' => array(),
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */   'relationships' => array(),
   /* page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696 */ );
   /* inbox_notification a56cfda1 */ $display = new panels_display();
   /* inbox_notification a56cfda1 */ $display->layout = 'gn2_2colstacked_page';
   /* inbox_notification a56cfda1 */ $display->layout_settings = array();
   /* inbox_notification a56cfda1 */ $display->panel_settings = array(
   /* inbox_notification a56cfda1 */   'style_settings' => array(
   /* inbox_notification a56cfda1 */     'default' => NULL,
   /* inbox_notification a56cfda1 */     'sidebar' => NULL,
   /* inbox_notification a56cfda1 */     'main_content' => NULL,
   /* inbox_notification a56cfda1 */     'top' => NULL,
   /* inbox_notification a56cfda1 */     'main_top' => NULL,
   /* inbox_notification a56cfda1 */     'main_bottom' => NULL,
   /* inbox_notification a56cfda1 */     'footer' => NULL,
   /* inbox_notification a56cfda1 */   ),
   /* inbox_notification a56cfda1 */ );
   /* inbox_notification a56cfda1 */ $display->cache = array();
   /* inbox_notification a56cfda1 */ $display->title = '';
   /* inbox_notification a56cfda1 */ $display->uuid = 'a56cfda1-4f6d-4092-987d-c820bcc7adb2';
   /* inbox_notification a56cfda1 */ $display->storage_type = 'page_manager';
   /* inbox_notification a56cfda1 */ $display->storage_id = 'page_inbox_notification__panel_context_7b7c65de-b683-4df0-9d71-4897bcc72696';
  $display->content = array();
  $display->panels = array();
   /* inbox_notification b581061b */ $pane = new stdClass();
   /* inbox_notification b581061b */ $pane->pid = 'new-b581061b-1d14-48a0-9f9c-4ecfde184aa3';
   /* inbox_notification b581061b */ $pane->panel = 'main_top';
   /* inbox_notification b581061b */ $pane->type = 'views';
   /* inbox_notification b581061b */ $pane->subtype = 'inbox';
   /* inbox_notification b581061b */ $pane->shown = TRUE;
   /* inbox_notification b581061b */ $pane->access = array();
   /* inbox_notification b581061b */ $pane->configuration = array(
   /* inbox_notification b581061b */   'override_pager_settings' => 0,
   /* inbox_notification b581061b */   'use_pager' => 0,
   /* inbox_notification b581061b */   'nodes_per_page' => '10',
   /* inbox_notification b581061b */   'pager_id' => '0',
   /* inbox_notification b581061b */   'offset' => '0',
   /* inbox_notification b581061b */   'more_link' => 0,
   /* inbox_notification b581061b */   'feed_icons' => 0,
   /* inbox_notification b581061b */   'panel_args' => 0,
   /* inbox_notification b581061b */   'link_to_view' => 0,
   /* inbox_notification b581061b */   'args' => '',
   /* inbox_notification b581061b */   'url' => '',
   /* inbox_notification b581061b */   'display' => 'block_6',
   /* inbox_notification b581061b */   'context' => array(
   /* inbox_notification b581061b */     0 => 'argument_entity_id:privatemsg_message_1.original',
   /* inbox_notification b581061b */   ),
   /* inbox_notification b581061b */   'override_title' => 0,
   /* inbox_notification b581061b */   'override_title_text' => '',
   /* inbox_notification b581061b */   'override_title_heading' => 'h2',
   /* inbox_notification b581061b */ );
   /* inbox_notification b581061b */ $pane->cache = array();
   /* inbox_notification b581061b */ $pane->style = array(
   /* inbox_notification b581061b */   'settings' => NULL,
   /* inbox_notification b581061b */ );
   /* inbox_notification b581061b */ $pane->css = array();
   /* inbox_notification b581061b */ $pane->extras = array();
   /* inbox_notification b581061b */ $pane->position = 0;
   /* inbox_notification b581061b */ $pane->locks = array();
   /* inbox_notification b581061b */ $pane->uuid = 'b581061b-1d14-48a0-9f9c-4ecfde184aa3';
  $display->content['new-b581061b-1d14-48a0-9f9c-4ecfde184aa3'] = $pane;
  $display->panels['main_top'][0] = 'new-b581061b-1d14-48a0-9f9c-4ecfde184aa3';
   /* inbox_notification 03a8f9c3 */ $pane = new stdClass();
   /* inbox_notification 03a8f9c3 */ $pane->pid = 'new-03a8f9c3-820d-452d-918d-2d717ec99572';
   /* inbox_notification 03a8f9c3 */ $pane->panel = 'sidebar';
   /* inbox_notification 03a8f9c3 */ $pane->type = 'block';
   /* inbox_notification 03a8f9c3 */ $pane->subtype = 'gn2_base_config-inbox-menu';
   /* inbox_notification 03a8f9c3 */ $pane->shown = TRUE;
   /* inbox_notification 03a8f9c3 */ $pane->access = array();
   /* inbox_notification 03a8f9c3 */ $pane->configuration = array(
   /* inbox_notification 03a8f9c3 */   'override_title' => 0,
   /* inbox_notification 03a8f9c3 */   'override_title_text' => '',
   /* inbox_notification 03a8f9c3 */   'override_title_heading' => 'h2',
   /* inbox_notification 03a8f9c3 */ );
   /* inbox_notification 03a8f9c3 */ $pane->cache = array();
   /* inbox_notification 03a8f9c3 */ $pane->style = array(
   /* inbox_notification 03a8f9c3 */   'settings' => NULL,
   /* inbox_notification 03a8f9c3 */ );
   /* inbox_notification 03a8f9c3 */ $pane->css = array(
   /* inbox_notification 03a8f9c3 */   'css_id' => '',
   /* inbox_notification 03a8f9c3 */   'css_class' => 'inbox-menu',
   /* inbox_notification 03a8f9c3 */ );
   /* inbox_notification 03a8f9c3 */ $pane->extras = array();
   /* inbox_notification 03a8f9c3 */ $pane->position = 0;
   /* inbox_notification 03a8f9c3 */ $pane->locks = array();
   /* inbox_notification 03a8f9c3 */ $pane->uuid = '03a8f9c3-820d-452d-918d-2d717ec99572';
  $display->content['new-03a8f9c3-820d-452d-918d-2d717ec99572'] = $pane;
  $display->panels['sidebar'][0] = 'new-03a8f9c3-820d-452d-918d-2d717ec99572';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inbox_notification'] = $page;

   /* inbox_notifications */ $page = new stdClass();
   /* inbox_notifications */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* inbox_notifications */ $page->api_version = 1;
   /* inbox_notifications */ $page->name = 'inbox_notifications';
   /* inbox_notifications */ $page->task = 'page';
   /* inbox_notifications */ $page->admin_title = 'Inbox: notifications';
   /* inbox_notifications */ $page->admin_description = '';
   /* inbox_notifications */ $page->path = 'inbox/notifications/!flag';
   /* inbox_notifications */ $page->access = array(
   /* inbox_notifications */   'plugins' => array(
   /* inbox_notifications */     0 => array(
   /* inbox_notifications */       'name' => 'perm',
   /* inbox_notifications */       'settings' => array(
   /* inbox_notifications */         'perm' => 'read privatemsg',
   /* inbox_notifications */       ),
   /* inbox_notifications */       'context' => 'logged-in-user',
   /* inbox_notifications */       'not' => FALSE,
   /* inbox_notifications */     ),
   /* inbox_notifications */   ),
   /* inbox_notifications */   'logic' => 'and',
   /* inbox_notifications */   'type' => 'none',
   /* inbox_notifications */   'settings' => NULL,
   /* inbox_notifications */ );
   /* inbox_notifications */ $page->menu = array();
   /* inbox_notifications */ $page->arguments = array(
   /* inbox_notifications */   'flag' => array(
   /* inbox_notifications */     'id' => '',
   /* inbox_notifications */     'identifier' => '',
   /* inbox_notifications */     'argument' => '',
   /* inbox_notifications */     'settings' => array(),
   /* inbox_notifications */   ),
   /* inbox_notifications */ );
   /* inbox_notifications */ $page->conf = array(
   /* inbox_notifications */   'admin_paths' => FALSE,
   /* inbox_notifications */ );
  $page->default_handlers = array();
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler = new stdClass();
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->api_version = 1;
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->name = 'page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c';
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->task = 'page';
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->subtask = 'inbox_notifications';
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->handler = 'panel_context';
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->weight = 0;
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ $handler->conf = array(
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'title' => 'Panel',
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'no_blocks' => 0,
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'pipeline' => 'standard',
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'body_classes_to_remove' => '',
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'body_classes_to_add' => 'inbox',
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'css_id' => '',
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'css' => '',
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'contexts' => array(),
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */   'relationships' => array(),
   /* page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c */ );
   /* inbox_notifications aeb92950 */ $display = new panels_display();
   /* inbox_notifications aeb92950 */ $display->layout = 'gn2_2colstacked_page';
   /* inbox_notifications aeb92950 */ $display->layout_settings = array();
   /* inbox_notifications aeb92950 */ $display->panel_settings = array(
   /* inbox_notifications aeb92950 */   'style_settings' => array(
   /* inbox_notifications aeb92950 */     'default' => NULL,
   /* inbox_notifications aeb92950 */     'sidebar' => NULL,
   /* inbox_notifications aeb92950 */     'main_content' => NULL,
   /* inbox_notifications aeb92950 */     'top' => NULL,
   /* inbox_notifications aeb92950 */     'main_top' => NULL,
   /* inbox_notifications aeb92950 */     'main_bottom' => NULL,
   /* inbox_notifications aeb92950 */     'footer' => NULL,
   /* inbox_notifications aeb92950 */   ),
   /* inbox_notifications aeb92950 */ );
   /* inbox_notifications aeb92950 */ $display->cache = array();
   /* inbox_notifications aeb92950 */ $display->title = 'Inbox: Notifications';
   /* inbox_notifications aeb92950 */ $display->uuid = 'aeb92950-185d-4df0-b662-dc88ff079b4f';
   /* inbox_notifications aeb92950 */ $display->storage_type = 'page_manager';
   /* inbox_notifications aeb92950 */ $display->storage_id = 'page_inbox_notifications__panel_context_ee7b8820-f28b-4e93-b1b7-22f5f3d9c79c';
  $display->content = array();
  $display->panels = array();
   /* inbox_notifications d13ab75e */ $pane = new stdClass();
   /* inbox_notifications d13ab75e */ $pane->pid = 'new-d13ab75e-92e4-4fdc-b19d-2b42f7fc22fb';
   /* inbox_notifications d13ab75e */ $pane->panel = 'main_top';
   /* inbox_notifications d13ab75e */ $pane->type = 'views_panes';
   /* inbox_notifications d13ab75e */ $pane->subtype = 'gn2_notifications-panel_pane_1';
   /* inbox_notifications d13ab75e */ $pane->shown = TRUE;
   /* inbox_notifications d13ab75e */ $pane->access = array();
   /* inbox_notifications d13ab75e */ $pane->configuration = array();
   /* inbox_notifications d13ab75e */ $pane->cache = array();
   /* inbox_notifications d13ab75e */ $pane->style = array(
   /* inbox_notifications d13ab75e */   'settings' => NULL,
   /* inbox_notifications d13ab75e */ );
   /* inbox_notifications d13ab75e */ $pane->css = array();
   /* inbox_notifications d13ab75e */ $pane->extras = array();
   /* inbox_notifications d13ab75e */ $pane->position = 0;
   /* inbox_notifications d13ab75e */ $pane->locks = array();
   /* inbox_notifications d13ab75e */ $pane->uuid = 'd13ab75e-92e4-4fdc-b19d-2b42f7fc22fb';
  $display->content['new-d13ab75e-92e4-4fdc-b19d-2b42f7fc22fb'] = $pane;
  $display->panels['main_top'][0] = 'new-d13ab75e-92e4-4fdc-b19d-2b42f7fc22fb';
   /* inbox_notifications 4743c120 */ $pane = new stdClass();
   /* inbox_notifications 4743c120 */ $pane->pid = 'new-4743c120-c251-492e-bd61-224161bd64f6';
   /* inbox_notifications 4743c120 */ $pane->panel = 'sidebar';
   /* inbox_notifications 4743c120 */ $pane->type = 'block';
   /* inbox_notifications 4743c120 */ $pane->subtype = 'gn2_privatemsg-inbox-menu';
   /* inbox_notifications 4743c120 */ $pane->shown = TRUE;
   /* inbox_notifications 4743c120 */ $pane->access = array();
   /* inbox_notifications 4743c120 */ $pane->configuration = array(
   /* inbox_notifications 4743c120 */   'override_title' => 0,
   /* inbox_notifications 4743c120 */   'override_title_text' => '',
   /* inbox_notifications 4743c120 */   'override_title_heading' => 'h2',
   /* inbox_notifications 4743c120 */ );
   /* inbox_notifications 4743c120 */ $pane->cache = array();
   /* inbox_notifications 4743c120 */ $pane->style = array(
   /* inbox_notifications 4743c120 */   'settings' => NULL,
   /* inbox_notifications 4743c120 */ );
   /* inbox_notifications 4743c120 */ $pane->css = array(
   /* inbox_notifications 4743c120 */   'css_id' => '',
   /* inbox_notifications 4743c120 */   'css_class' => 'inbox-menu',
   /* inbox_notifications 4743c120 */ );
   /* inbox_notifications 4743c120 */ $pane->extras = array();
   /* inbox_notifications 4743c120 */ $pane->position = 0;
   /* inbox_notifications 4743c120 */ $pane->locks = array();
   /* inbox_notifications 4743c120 */ $pane->uuid = '4743c120-c251-492e-bd61-224161bd64f6';
  $display->content['new-4743c120-c251-492e-bd61-224161bd64f6'] = $pane;
  $display->panels['sidebar'][0] = 'new-4743c120-c251-492e-bd61-224161bd64f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inbox_notifications'] = $page;

   /* inbox_sent */ $page = new stdClass();
   /* inbox_sent */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* inbox_sent */ $page->api_version = 1;
   /* inbox_sent */ $page->name = 'inbox_sent';
   /* inbox_sent */ $page->task = 'page';
   /* inbox_sent */ $page->admin_title = 'Inbox: sent';
   /* inbox_sent */ $page->admin_description = '';
   /* inbox_sent */ $page->path = 'inbox/sent';
   /* inbox_sent */ $page->access = array(
   /* inbox_sent */   'plugins' => array(
   /* inbox_sent */     0 => array(
   /* inbox_sent */       'name' => 'perm',
   /* inbox_sent */       'settings' => array(
   /* inbox_sent */         'perm' => 'read privatemsg',
   /* inbox_sent */       ),
   /* inbox_sent */       'context' => 'logged-in-user',
   /* inbox_sent */       'not' => FALSE,
   /* inbox_sent */     ),
   /* inbox_sent */   ),
   /* inbox_sent */   'logic' => 'and',
   /* inbox_sent */   'type' => 'none',
   /* inbox_sent */   'settings' => NULL,
   /* inbox_sent */ );
   /* inbox_sent */ $page->menu = array();
   /* inbox_sent */ $page->arguments = array();
   /* inbox_sent */ $page->conf = array(
   /* inbox_sent */   'admin_paths' => FALSE,
   /* inbox_sent */ );
  $page->default_handlers = array();
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler = new stdClass();
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->api_version = 1;
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->name = 'page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee';
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->task = 'page';
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->subtask = 'inbox_sent';
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->handler = 'panel_context';
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->weight = 0;
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ $handler->conf = array(
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'title' => 'Panel',
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'no_blocks' => 0,
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'pipeline' => 'standard',
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'body_classes_to_remove' => '',
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'body_classes_to_add' => 'inbox',
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'css_id' => '',
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'css' => '',
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'contexts' => array(),
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */   'relationships' => array(),
   /* page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee */ );
   /* inbox_sent 32e7094e */ $display = new panels_display();
   /* inbox_sent 32e7094e */ $display->layout = 'gn2_2colstacked_page';
   /* inbox_sent 32e7094e */ $display->layout_settings = array();
   /* inbox_sent 32e7094e */ $display->panel_settings = array(
   /* inbox_sent 32e7094e */   'style_settings' => array(
   /* inbox_sent 32e7094e */     'default' => NULL,
   /* inbox_sent 32e7094e */     'sidebar' => NULL,
   /* inbox_sent 32e7094e */     'main_content' => NULL,
   /* inbox_sent 32e7094e */     'top' => NULL,
   /* inbox_sent 32e7094e */     'main_top' => NULL,
   /* inbox_sent 32e7094e */     'main_bottom' => NULL,
   /* inbox_sent 32e7094e */     'footer' => NULL,
   /* inbox_sent 32e7094e */   ),
   /* inbox_sent 32e7094e */ );
   /* inbox_sent 32e7094e */ $display->cache = array();
   /* inbox_sent 32e7094e */ $display->title = 'Inbox: Sent';
   /* inbox_sent 32e7094e */ $display->uuid = '32e7094e-644c-42b0-a0e3-5072eb8fc3f5';
   /* inbox_sent 32e7094e */ $display->storage_type = 'page_manager';
   /* inbox_sent 32e7094e */ $display->storage_id = 'page_inbox_sent__panel_context_e4f4dd76-40ae-4eef-a19e-ea629b2c0bee';
  $display->content = array();
  $display->panels = array();
   /* inbox_sent aeb78b89 */ $pane = new stdClass();
   /* inbox_sent aeb78b89 */ $pane->pid = 'new-aeb78b89-60bb-491c-a385-bdb9a1a23b9d';
   /* inbox_sent aeb78b89 */ $pane->panel = 'main_top';
   /* inbox_sent aeb78b89 */ $pane->type = 'views';
   /* inbox_sent aeb78b89 */ $pane->subtype = 'inbox';
   /* inbox_sent aeb78b89 */ $pane->shown = TRUE;
   /* inbox_sent aeb78b89 */ $pane->access = array();
   /* inbox_sent aeb78b89 */ $pane->configuration = array(
   /* inbox_sent aeb78b89 */   'override_pager_settings' => 0,
   /* inbox_sent aeb78b89 */   'use_pager' => 0,
   /* inbox_sent aeb78b89 */   'nodes_per_page' => '10',
   /* inbox_sent aeb78b89 */   'pager_id' => '0',
   /* inbox_sent aeb78b89 */   'offset' => '0',
   /* inbox_sent aeb78b89 */   'more_link' => 0,
   /* inbox_sent aeb78b89 */   'feed_icons' => 0,
   /* inbox_sent aeb78b89 */   'panel_args' => 0,
   /* inbox_sent aeb78b89 */   'link_to_view' => 0,
   /* inbox_sent aeb78b89 */   'args' => '',
   /* inbox_sent aeb78b89 */   'url' => '',
   /* inbox_sent aeb78b89 */   'display' => 'block_3',
   /* inbox_sent aeb78b89 */   'override_title' => 0,
   /* inbox_sent aeb78b89 */   'override_title_text' => '',
   /* inbox_sent aeb78b89 */   'override_title_heading' => 'h2',
   /* inbox_sent aeb78b89 */ );
   /* inbox_sent aeb78b89 */ $pane->cache = array();
   /* inbox_sent aeb78b89 */ $pane->style = array(
   /* inbox_sent aeb78b89 */   'settings' => NULL,
   /* inbox_sent aeb78b89 */ );
   /* inbox_sent aeb78b89 */ $pane->css = array();
   /* inbox_sent aeb78b89 */ $pane->extras = array();
   /* inbox_sent aeb78b89 */ $pane->position = 0;
   /* inbox_sent aeb78b89 */ $pane->locks = array();
   /* inbox_sent aeb78b89 */ $pane->uuid = 'aeb78b89-60bb-491c-a385-bdb9a1a23b9d';
  $display->content['new-aeb78b89-60bb-491c-a385-bdb9a1a23b9d'] = $pane;
  $display->panels['main_top'][0] = 'new-aeb78b89-60bb-491c-a385-bdb9a1a23b9d';
   /* inbox_sent 257ab0eb */ $pane = new stdClass();
   /* inbox_sent 257ab0eb */ $pane->pid = 'new-257ab0eb-eae4-49bc-a8c5-b50dbe6e91d8';
   /* inbox_sent 257ab0eb */ $pane->panel = 'sidebar';
   /* inbox_sent 257ab0eb */ $pane->type = 'block';
   /* inbox_sent 257ab0eb */ $pane->subtype = 'gn2_privatemsg-inbox-menu';
   /* inbox_sent 257ab0eb */ $pane->shown = TRUE;
   /* inbox_sent 257ab0eb */ $pane->access = array();
   /* inbox_sent 257ab0eb */ $pane->configuration = array(
   /* inbox_sent 257ab0eb */   'override_title' => 0,
   /* inbox_sent 257ab0eb */   'override_title_text' => '',
   /* inbox_sent 257ab0eb */   'override_title_heading' => 'h2',
   /* inbox_sent 257ab0eb */ );
   /* inbox_sent 257ab0eb */ $pane->cache = array();
   /* inbox_sent 257ab0eb */ $pane->style = array(
   /* inbox_sent 257ab0eb */   'settings' => NULL,
   /* inbox_sent 257ab0eb */ );
   /* inbox_sent 257ab0eb */ $pane->css = array(
   /* inbox_sent 257ab0eb */   'css_id' => '',
   /* inbox_sent 257ab0eb */   'css_class' => 'inbox-menu',
   /* inbox_sent 257ab0eb */ );
   /* inbox_sent 257ab0eb */ $pane->extras = array();
   /* inbox_sent 257ab0eb */ $pane->position = 0;
   /* inbox_sent 257ab0eb */ $pane->locks = array();
   /* inbox_sent 257ab0eb */ $pane->uuid = '257ab0eb-eae4-49bc-a8c5-b50dbe6e91d8';
  $display->content['new-257ab0eb-eae4-49bc-a8c5-b50dbe6e91d8'] = $pane;
  $display->panels['sidebar'][0] = 'new-257ab0eb-eae4-49bc-a8c5-b50dbe6e91d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inbox_sent'] = $page;

   /* inbox_trash */ $page = new stdClass();
   /* inbox_trash */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* inbox_trash */ $page->api_version = 1;
   /* inbox_trash */ $page->name = 'inbox_trash';
   /* inbox_trash */ $page->task = 'page';
   /* inbox_trash */ $page->admin_title = 'Inbox: trash';
   /* inbox_trash */ $page->admin_description = '';
   /* inbox_trash */ $page->path = 'inbox/trash';
   /* inbox_trash */ $page->access = array(
   /* inbox_trash */   'plugins' => array(
   /* inbox_trash */     0 => array(
   /* inbox_trash */       'name' => 'perm',
   /* inbox_trash */       'settings' => array(
   /* inbox_trash */         'perm' => 'read privatemsg',
   /* inbox_trash */       ),
   /* inbox_trash */       'context' => 'logged-in-user',
   /* inbox_trash */       'not' => FALSE,
   /* inbox_trash */     ),
   /* inbox_trash */   ),
   /* inbox_trash */   'logic' => 'and',
   /* inbox_trash */   'type' => 'none',
   /* inbox_trash */   'settings' => NULL,
   /* inbox_trash */ );
   /* inbox_trash */ $page->menu = array();
   /* inbox_trash */ $page->arguments = array();
   /* inbox_trash */ $page->conf = array(
   /* inbox_trash */   'admin_paths' => FALSE,
   /* inbox_trash */ );
  $page->default_handlers = array();
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler = new stdClass();
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->api_version = 1;
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->name = 'page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881';
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->task = 'page';
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->subtask = 'inbox_trash';
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->handler = 'panel_context';
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->weight = 0;
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ $handler->conf = array(
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'title' => 'Panel',
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'no_blocks' => 0,
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'pipeline' => 'standard',
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'body_classes_to_remove' => '',
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'body_classes_to_add' => 'inbox',
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'css_id' => '',
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'css' => '',
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'contexts' => array(),
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */   'relationships' => array(),
   /* page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881 */ );
   /* inbox_trash dfc81ed8 */ $display = new panels_display();
   /* inbox_trash dfc81ed8 */ $display->layout = 'gn2_2colstacked_page';
   /* inbox_trash dfc81ed8 */ $display->layout_settings = array();
   /* inbox_trash dfc81ed8 */ $display->panel_settings = array(
   /* inbox_trash dfc81ed8 */   'style_settings' => array(
   /* inbox_trash dfc81ed8 */     'default' => NULL,
   /* inbox_trash dfc81ed8 */     'sidebar' => NULL,
   /* inbox_trash dfc81ed8 */     'main_content' => NULL,
   /* inbox_trash dfc81ed8 */     'top' => NULL,
   /* inbox_trash dfc81ed8 */     'main_top' => NULL,
   /* inbox_trash dfc81ed8 */     'main_bottom' => NULL,
   /* inbox_trash dfc81ed8 */     'footer' => NULL,
   /* inbox_trash dfc81ed8 */   ),
   /* inbox_trash dfc81ed8 */ );
   /* inbox_trash dfc81ed8 */ $display->cache = array();
   /* inbox_trash dfc81ed8 */ $display->title = 'Inbox: Trash';
   /* inbox_trash dfc81ed8 */ $display->uuid = 'dfc81ed8-9afc-40d2-9ed9-983e7c1e3402';
   /* inbox_trash dfc81ed8 */ $display->storage_type = 'page_manager';
   /* inbox_trash dfc81ed8 */ $display->storage_id = 'page_inbox_trash__panel_context_625c30a8-1bc8-4317-9d20-5037a79e6881';
  $display->content = array();
  $display->panels = array();
   /* inbox_trash 93162663 */ $pane = new stdClass();
   /* inbox_trash 93162663 */ $pane->pid = 'new-93162663-3203-4a7a-8ed6-16f314516ea2';
   /* inbox_trash 93162663 */ $pane->panel = 'main_top';
   /* inbox_trash 93162663 */ $pane->type = 'views';
   /* inbox_trash 93162663 */ $pane->subtype = 'inbox';
   /* inbox_trash 93162663 */ $pane->shown = TRUE;
   /* inbox_trash 93162663 */ $pane->access = array();
   /* inbox_trash 93162663 */ $pane->configuration = array(
   /* inbox_trash 93162663 */   'override_pager_settings' => 0,
   /* inbox_trash 93162663 */   'use_pager' => 0,
   /* inbox_trash 93162663 */   'nodes_per_page' => '10',
   /* inbox_trash 93162663 */   'pager_id' => '0',
   /* inbox_trash 93162663 */   'offset' => '0',
   /* inbox_trash 93162663 */   'more_link' => 0,
   /* inbox_trash 93162663 */   'feed_icons' => 0,
   /* inbox_trash 93162663 */   'panel_args' => 0,
   /* inbox_trash 93162663 */   'link_to_view' => 0,
   /* inbox_trash 93162663 */   'args' => '',
   /* inbox_trash 93162663 */   'url' => '',
   /* inbox_trash 93162663 */   'display' => 'block_4',
   /* inbox_trash 93162663 */   'override_title' => 0,
   /* inbox_trash 93162663 */   'override_title_text' => '',
   /* inbox_trash 93162663 */   'override_title_heading' => 'h2',
   /* inbox_trash 93162663 */ );
   /* inbox_trash 93162663 */ $pane->cache = array();
   /* inbox_trash 93162663 */ $pane->style = array(
   /* inbox_trash 93162663 */   'settings' => NULL,
   /* inbox_trash 93162663 */ );
   /* inbox_trash 93162663 */ $pane->css = array();
   /* inbox_trash 93162663 */ $pane->extras = array();
   /* inbox_trash 93162663 */ $pane->position = 0;
   /* inbox_trash 93162663 */ $pane->locks = array();
   /* inbox_trash 93162663 */ $pane->uuid = '93162663-3203-4a7a-8ed6-16f314516ea2';
  $display->content['new-93162663-3203-4a7a-8ed6-16f314516ea2'] = $pane;
  $display->panels['main_top'][0] = 'new-93162663-3203-4a7a-8ed6-16f314516ea2';
   /* inbox_trash 72fef2ea */ $pane = new stdClass();
   /* inbox_trash 72fef2ea */ $pane->pid = 'new-72fef2ea-f714-42f8-ad2c-8e3acd8b3c5b';
   /* inbox_trash 72fef2ea */ $pane->panel = 'sidebar';
   /* inbox_trash 72fef2ea */ $pane->type = 'block';
   /* inbox_trash 72fef2ea */ $pane->subtype = 'gn2_privatemsg-inbox-menu';
   /* inbox_trash 72fef2ea */ $pane->shown = TRUE;
   /* inbox_trash 72fef2ea */ $pane->access = array();
   /* inbox_trash 72fef2ea */ $pane->configuration = array(
   /* inbox_trash 72fef2ea */   'override_title' => 0,
   /* inbox_trash 72fef2ea */   'override_title_text' => '',
   /* inbox_trash 72fef2ea */   'override_title_heading' => 'h2',
   /* inbox_trash 72fef2ea */ );
   /* inbox_trash 72fef2ea */ $pane->cache = array();
   /* inbox_trash 72fef2ea */ $pane->style = array(
   /* inbox_trash 72fef2ea */   'settings' => NULL,
   /* inbox_trash 72fef2ea */ );
   /* inbox_trash 72fef2ea */ $pane->css = array(
   /* inbox_trash 72fef2ea */   'css_id' => '',
   /* inbox_trash 72fef2ea */   'css_class' => 'inbox-menu',
   /* inbox_trash 72fef2ea */ );
   /* inbox_trash 72fef2ea */ $pane->extras = array();
   /* inbox_trash 72fef2ea */ $pane->position = 0;
   /* inbox_trash 72fef2ea */ $pane->locks = array();
   /* inbox_trash 72fef2ea */ $pane->uuid = '72fef2ea-f714-42f8-ad2c-8e3acd8b3c5b';
  $display->content['new-72fef2ea-f714-42f8-ad2c-8e3acd8b3c5b'] = $pane;
  $display->panels['sidebar'][0] = 'new-72fef2ea-f714-42f8-ad2c-8e3acd8b3c5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inbox_trash'] = $page;

  return $pages;

}
