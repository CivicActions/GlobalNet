<?php
/**
 * @file
 * gn2_privatemsg.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_privatemsg_views_default_views() {
  $export = array();

  /* inbox */ $view = new view();
  /* inbox */ $view->name = 'inbox';
  /* inbox */ $view->description = '';
  /* inbox */ $view->tag = 'default';
  /* inbox */ $view->base_table = 'pm_message';
  /* inbox */ $view->human_name = 'Inbox';
  /* inbox */ $view->core = 7;
  /* inbox */ $view->api_version = '3.0';
  /* inbox */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* inbox */ /* Display: Master */
  /* inbox */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* inbox */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* inbox */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* inbox */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* inbox */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* inbox */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* inbox */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* inbox */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* inbox */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* inbox */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* inbox */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* inbox */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* inbox */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* inbox */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* inbox */  /* Master */ /* Header: Global: Text area */
  /* inbox */  /* Master */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* inbox */  /* Master */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* inbox */  /* Master */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* inbox */  /* Master */ $handler->display->display_options['header']['area']['content'] = '<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class = "read-messages">Read</a>
</div>';
  /* inbox */  /* Master */ $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* inbox */  /* Master */ /* No results behavior: Global: Text area */
  /* inbox */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* inbox */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* inbox */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* inbox */  /* Master */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* inbox */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'No messages.';
  /* inbox */  /* Master */ $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* inbox */  /* Master */ /* Relationship: Privatemsg: Author */
  /* inbox */  /* Master */ $handler->display->display_options['relationships']['author']['id'] = 'author';
  /* inbox */  /* Master */ $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  /* inbox */  /* Master */ $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* inbox */  /* Master */ /* Field: Privatemsg: Message ID */
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['id'] = 'mid';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['label'] = '';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  /* inbox */  /* Master */ $handler->display->display_options['fields']['mid']['separator'] = '';
  /* inbox */  /* Master */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Master */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* inbox */  /* Master */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Master */ /* Field: Privatemsg: Message */
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* inbox */  /* Master */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Master */ /* Field: Custom: Author */
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>
<span class="message-author-name">[name] </span>';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* inbox */  /* Master */ /* Field: Custom: Message */
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['label'] = '';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="message-date">[timestamp]</span>
<span class="message-body">[body] <a href="/messages/view/[mid]">Read more</a></span>';
  /* inbox */  /* Master */ $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* inbox */  /* Master */ /* Sort criterion: Privatemsg: Send date */
  /* inbox */  /* Master */ $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Master */ $handler->display->display_options['sorts']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Master */ $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Master */ $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* inbox */ /* Display: Messages */
  /* inbox */  /* Messages */ $handler = $view->new_display('block', 'Messages', 'block');
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['group_by'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['query']['type'] = 'views_query';
  /* inbox */  /* Messages */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['pager']['type'] = 'full';
  /* inbox */  /* Messages */ $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  /* inbox */  /* Messages */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* inbox */  /* Messages */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* inbox */  /* Messages */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['style_plugin'] = 'table';
  /* inbox */  /* Messages */ $handler->display->display_options['style_options']['columns'] = array(
  /* inbox */  /* Messages */   'name' => 'name',
  /* inbox */  /* Messages */   'field_name_last' => 'field_name_last',
  /* inbox */  /* Messages */   'field_name_first' => 'field_name_first',
  /* inbox */  /* Messages */   'uid' => 'uid',
  /* inbox */  /* Messages */   'subject' => 'subject',
  /* inbox */  /* Messages */   'timestamp' => 'timestamp',
  /* inbox */  /* Messages */   'body' => 'body',
  /* inbox */  /* Messages */   'mid' => 'mid',
  /* inbox */  /* Messages */   'thread_id' => 'thread_id',
  /* inbox */  /* Messages */   'is_new' => 'is_new',
  /* inbox */  /* Messages */   'nothing_1' => 'nothing_1',
  /* inbox */  /* Messages */ );
  /* inbox */  /* Messages */ $handler->display->display_options['style_options']['default'] = '-1';
  /* inbox */  /* Messages */ $handler->display->display_options['style_options']['info'] = array(
  /* inbox */  /* Messages */   'name' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'field_name_last' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'field_name_first' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'uid' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'subject' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'timestamp' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'body' => array(
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'mid' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'thread_id' => array(
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'is_new' => array(
  /* inbox */  /* Messages */     'sortable' => 0,
  /* inbox */  /* Messages */     'default_sort_order' => 'asc',
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */   'nothing_1' => array(
  /* inbox */  /* Messages */     'align' => '',
  /* inbox */  /* Messages */     'separator' => '',
  /* inbox */  /* Messages */     'empty_column' => 0,
  /* inbox */  /* Messages */   ),
  /* inbox */  /* Messages */ );
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* inbox */  /* Messages */ /* Header: Global: Text area */
  /* inbox */  /* Messages */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* inbox */  /* Messages */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* inbox */  /* Messages */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* inbox */  /* Messages */ $handler->display->display_options['header']['area']['empty'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['header']['area']['content'] = '<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class = "read-messages">Read</a>
</div>';
  /* inbox */  /* Messages */ $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['empty'] = FALSE;
  /* inbox */  /* Messages */ /* No results behavior: Global: Text area */
  /* inbox */  /* Messages */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* inbox */  /* Messages */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* inbox */  /* Messages */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* inbox */  /* Messages */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['empty']['area']['content'] = 'No unread messages.';
  /* inbox */  /* Messages */ $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* inbox */  /* Messages */ /* Relationship: Privatemsg: Author */
  /* inbox */  /* Messages */ $handler->display->display_options['relationships']['author']['id'] = 'author';
  /* inbox */  /* Messages */ $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  /* inbox */  /* Messages */ $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* inbox */  /* Messages */ /* Relationship: Privatemsg: Recipient */
  /* inbox */  /* Messages */ $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  /* inbox */  /* Messages */ $handler->display->display_options['relationships']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* inbox */  /* Messages */ /* Field: Privatemsg: Thread ID */
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['label'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['format_plural_singular'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['thread_id']['format_plural_plural'] = '';
  /* inbox */  /* Messages */ /* Field: Privatemsg: Is new */
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['id'] = 'is_new';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['field'] = 'is_new';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['label'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['exclude'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['element_label_colon'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['element_default_classes'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['type'] = 'custom';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['type_custom_true'] = 'new-message';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['is_new']['not'] = 0;
  /* inbox */  /* Messages */ /* Field: Privatemsg: Recipient */
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['recipient']['id'] = 'recipient';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['recipient']['field'] = 'recipient';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['recipient']['label'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['recipient']['exclude'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['recipient']['element_label_colon'] = FALSE;
  /* inbox */  /* Messages */ /* Field: Privatemsg: Subject */
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['id'] = 'subject';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['label'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['alter']['make_link'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['alter']['path'] = 'messages/view/[thread_id]';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['alter']['alt'] = 'Read full message';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['alter']['max_length'] = '40';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['alter']['trim'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* inbox */  /* Messages */ /* Field: Privatemsg: Message */
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['text'] = '<span class="[is_new]"></span>[body]';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '60';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<span>';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Messages */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  /* inbox */  /* Messages */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* inbox */  /* Messages */ /* Sort criterion: Privatemsg: Send date */
  /* inbox */  /* Messages */ $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Messages */ $handler->display->display_options['sorts']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Messages */ $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Messages */ $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* inbox */  /* Messages */ /* Contextual filter: Privatemsg: Recipient */
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Messages */ /* Contextual filter: User: Uid */
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['table'] = 'users';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Messages */ $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* inbox */  /* Messages */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* inbox */  /* Messages */ /* Filter criterion: Privatemsg: Is deleted */
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['deleted']['value'] = '0';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['deleted']['group'] = 1;
  /* inbox */  /* Messages */ /* Filter criterion: Privatemsg: Notification (field_notification) */
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['field_notification_value']['value'] = array(
  /* inbox */  /* Messages */   0 => '0',
  /* inbox */  /* Messages */ );
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['field_notification_value']['group'] = 1;
  /* inbox */  /* Messages */ /* Filter criterion: Privatemsg: Is new */
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['id'] = 'is_new';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['table'] = 'pm_index';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['field'] = 'is_new';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['value'] = 'All';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['group'] = 1;
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['exposed'] = TRUE;
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['expose']['operator_id'] = '';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['expose']['label'] = 'Show new';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['expose']['operator'] = 'is_new_op';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['expose']['identifier'] = 'is_new';
  /* inbox */  /* Messages */ $handler->display->display_options['filters']['is_new']['expose']['remember_roles'] = array(
  /* inbox */  /* Messages */   2 => '2',
  /* inbox */  /* Messages */   1 => 0,
  /* inbox */  /* Messages */   9 => 0,
  /* inbox */  /* Messages */   10 => 0,
  /* inbox */  /* Messages */ );

  /* inbox */ /* Display: Notifications */
  /* inbox */  /* Notifications */ $handler = $view->new_display('block', 'Notifications', 'block_1');
  /* inbox */  /* Notifications */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* inbox */  /* Notifications */ /* Header: Global: Text area */
  /* inbox */  /* Notifications */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* inbox */  /* Notifications */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* inbox */  /* Notifications */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* inbox */  /* Notifications */ $handler->display->display_options['header']['area']['content'] = '<div class="inbox-unread-filter">
<a href="/inbox/notifications">All Messages</a> | <a href="/inbox/notifications/unread">Unread</a> | <a href="/inbox/notifications/read">Read</a>
</div>';
  /* inbox */  /* Notifications */ $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* inbox */  /* Notifications */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* inbox */  /* Notifications */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* inbox */  /* Notifications */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Notifications */ /* Field: Privatemsg: Thread ID */
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['label'] = '';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* inbox */  /* Notifications */ /* Field: Privatemsg: Message */
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Notifications */ /* Field: Custom: Message */
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['label'] = '';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body] <a href="/inbox/notification/[thread_id]">Read more</a></span>';
  /* inbox */  /* Notifications */ $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* inbox */  /* Notifications */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* inbox */  /* Notifications */ /* Contextual filter: Privatemsg: Recipient */
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  /* inbox */  /* Notifications */ $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Notifications */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* inbox */  /* Notifications */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* inbox */  /* Notifications */ /* Filter criterion: Privatemsg: Is deleted */
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['deleted']['value'] = '0';
  /* inbox */  /* Notifications */ /* Filter criterion: Privatemsg: Notification (field_notification) */
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['field_notification_value']['value'] = array(
  /* inbox */  /* Notifications */   1 => '1',
  /* inbox */  /* Notifications */ );
  /* inbox */  /* Notifications */ /* Filter criterion: Privatemsg: Is new */
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['id'] = 'is_new';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['table'] = 'pm_index';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['field'] = 'is_new';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['value'] = 'All';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['exposed'] = TRUE;
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['expose']['operator_id'] = '';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['expose']['label'] = 'Show new';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['expose']['operator'] = 'is_new_op';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['expose']['identifier'] = 'is_new';
  /* inbox */  /* Notifications */ $handler->display->display_options['filters']['is_new']['expose']['remember_roles'] = array(
  /* inbox */  /* Notifications */   2 => '2',
  /* inbox */  /* Notifications */   1 => 0,
  /* inbox */  /* Notifications */   9 => 0,
  /* inbox */  /* Notifications */ );

  /* inbox */ /* Display: Sent */
  /* inbox */  /* Sent */ $handler = $view->new_display('block', 'Sent', 'block_3');
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['pager']['type'] = 'full';
  /* inbox */  /* Sent */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* inbox */  /* Sent */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* inbox */  /* Sent */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* inbox */  /* Sent */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['style_plugin'] = 'views_accordion';
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['grouping'] = array(
  /* inbox */  /* Sent */   0 => array(
  /* inbox */  /* Sent */     'field' => 'subject',
  /* inbox */  /* Sent */     'rendered' => 1,
  /* inbox */  /* Sent */     'rendered_strip' => 0,
  /* inbox */  /* Sent */   ),
  /* inbox */  /* Sent */ );
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['row_class'] = 'message--list';
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['collapsible'] = 1;
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['row-start-open'] = '0';
  /* inbox */  /* Sent */ $handler->display->display_options['style_options']['autoheight'] = 0;
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['row_plugin'] = 'fields';
  /* inbox */  /* Sent */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* inbox */  /* Sent */ /* Relationship: Privatemsg: Author */
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['author']['id'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['author']['required'] = TRUE;
  /* inbox */  /* Sent */ /* Relationship: Privatemsg: Recipient */
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Sent */ $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* inbox */  /* Sent */ /* Field: User: Picture */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['id'] = 'picture';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['table'] = 'users';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['relationship'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['picture']['image_style'] = 'tiny50x50';
  /* inbox */  /* Sent */ /* Field: Field: Family Name */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* inbox */  /* Sent */   'field_formatter_class' => '',
  /* inbox */  /* Sent */ );
  /* inbox */  /* Sent */ /* Field: Field: Given Name */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* inbox */  /* Sent */   'field_formatter_class' => '',
  /* inbox */  /* Sent */ );
  /* inbox */  /* Sent */ /* Field: User: Uid */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['relationship'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* inbox */  /* Sent */ /* Field: Privatemsg: Message ID */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['id'] = 'mid';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['mid']['separator'] = '';
  /* inbox */  /* Sent */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'medium';
  /* inbox */  /* Sent */ /* Field: Privatemsg: Subject */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['id'] = 'subject';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['subject']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ /* Field: Privatemsg: Message */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ /* Field: Privatemsg: Thread ID */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['thread_id']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* inbox */  /* Sent */ /* Field: Custom: Author */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ /* Field: Custom: Message */
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['label'] = '';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first]  [field_name_last]</a></span>
  <span class="message-date">[timestamp]</span>
  <span class="message-body"><a href="/inbox/message/[thread_id]">[body]</a></span>
</div>';
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* inbox */  /* Sent */ /* Contextual filter: User: Uid */
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['table'] = 'users';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Sent */ /* Contextual filter: Privatemsg: Recipient */
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  /* inbox */  /* Sent */ $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* inbox */  /* Sent */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* inbox */  /* Sent */ /* Filter criterion: Privatemsg: Is deleted */
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['deleted']['value'] = '0';
  /* inbox */  /* Sent */ /* Filter criterion: Privatemsg: Notification (field_notification) */
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  /* inbox */  /* Sent */ $handler->display->display_options['filters']['field_notification_value']['value'] = array(
  /* inbox */  /* Sent */   0 => '0',
  /* inbox */  /* Sent */ );

  /* inbox */ /* Display: Trash */
  /* inbox */  /* Trash */ $handler = $view->new_display('block', 'Trash', 'block_4');
  /* inbox */  /* Trash */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* inbox */  /* Trash */ /* Field: Field: Family Name */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'author';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* inbox */  /* Trash */   'field_formatter_class' => '',
  /* inbox */  /* Trash */ );
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* inbox */  /* Trash */ /* Field: Field: Given Name */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'author';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* inbox */  /* Trash */   'field_formatter_class' => '',
  /* inbox */  /* Trash */ );
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* inbox */  /* Trash */ /* Field: Privatemsg: Message ID */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['id'] = 'mid';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['mid']['separator'] = '';
  /* inbox */  /* Trash */ /* Field: User: Picture */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['id'] = 'picture';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['table'] = 'users';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['relationship'] = 'author';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ /* Field: User: Uid */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['relationship'] = 'author';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* inbox */  /* Trash */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* inbox */  /* Trash */ /* Field: Privatemsg: Subject */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['subject']['id'] = 'subject';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['subject']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ /* Field: Privatemsg: Message */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ /* Field: Custom: Author */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>
<span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ /* Field: Custom: Message */
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['label'] = '';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body]</span>';
  /* inbox */  /* Trash */ $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* inbox */  /* Trash */ /* Contextual filter: Privatemsg: Recipient */
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Trash */ /* Contextual filter: User: Uid */
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['table'] = 'users';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Trash */ $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  /* inbox */  /* Trash */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* inbox */  /* Trash */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* inbox */  /* Trash */ /* Filter criterion: Privatemsg: Is deleted */
  /* inbox */  /* Trash */ $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  /* inbox */  /* Trash */ $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  /* inbox */  /* Trash */ $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  /* inbox */  /* Trash */ $handler->display->display_options['filters']['deleted']['value'] = '1';

  /* inbox */ /* Display: Message */
  /* inbox */  /* Message */ $handler = $view->new_display('block', 'Message', 'block_5');
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['css_class'] = 'message--thread';
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['pager']['type'] = 'none';
  /* inbox */  /* Message */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['style_plugin'] = 'default';
  /* inbox */  /* Message */ $handler->display->display_options['style_options']['row_class'] = 'message--list';
  /* inbox */  /* Message */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['row_plugin'] = 'fields';
  /* inbox */  /* Message */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['footer'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* inbox */  /* Message */ /* Field: Privatemsg: Message ID */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['id'] = 'mid';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['element_default_classes'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['mid']['separator'] = '';
  /* inbox */  /* Message */ /* Field: Privatemsg: Message */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ /* Field: User: Picture */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['id'] = 'picture';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['table'] = 'users';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['relationship'] = 'author';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['empty'] = '<img src ="/sites/all/themes/gn2_zen/images/generic-head.jpg" alt = "anonymous user ">';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['picture']['image_style'] = 'tiny50x50';
  /* inbox */  /* Message */ /* Field: Field: Family Name */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'author';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* inbox */  /* Message */   'field_formatter_class' => '',
  /* inbox */  /* Message */ );
  /* inbox */  /* Message */ /* Field: Field: Given Name */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'author';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* inbox */  /* Message */   'field_formatter_class' => '',
  /* inbox */  /* Message */ );
  /* inbox */  /* Message */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* inbox */  /* Message */ /* Field: User: Uid */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['relationship'] = 'author';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* inbox */  /* Message */ /* Field: Privatemsg: Thread ID */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* inbox */  /* Message */ /* Field: Privatemsg: Subject */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['subject']['id'] = 'subject';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['subject']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* inbox */  /* Message */ /* Field: Custom: Author */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>
';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ /* Field: Custom: Message */
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['label'] = '';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class = "message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>
  <span class="message-timestamp">[timestamp] </span>
  <div class="message-body">[body] </div>
  <!--@WIP <a class="message-delete" href="/messages/delete/[mid]">Delete</a>-->
</div>
';
  /* inbox */  /* Message */ $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* inbox */  /* Message */ /* Sort criterion: Privatemsg: Send date */
  /* inbox */  /* Message */ $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Message */ $handler->display->display_options['sorts']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Message */ $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* inbox */  /* Message */ /* Contextual filter: Privatemsg: Thread ID */
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['default_action'] = 'default';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['default_argument_type'] = 'raw';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['default_argument_options']['index'] = '2';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['summary']['number_of_records'] = '0';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['summary']['format'] = 'default_summary';
  /* inbox */  /* Message */ $handler->display->display_options['arguments']['thread_id']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* inbox */  /* Message */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* inbox */  /* Message */ /* Filter criterion: Privatemsg: Notification (field_notification) */
  /* inbox */  /* Message */ $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  /* inbox */  /* Message */ $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  /* inbox */  /* Message */ $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  /* inbox */  /* Message */ $handler->display->display_options['filters']['field_notification_value']['value'] = array(
  /* inbox */  /* Message */   0 => '0',
  /* inbox */  /* Message */ );

  /* inbox */ /* Display: Notification */
  /* inbox */  /* Notification */ $handler = $view->new_display('block', 'Notification', 'block_6');
  /* inbox */  /* Notification */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* inbox */  /* Notification */ $handler->display->display_options['pager']['type'] = 'some';
  /* inbox */  /* Notification */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* inbox */  /* Notification */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* inbox */  /* Notification */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* inbox */  /* Notification */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* inbox */  /* Notification */ /* Field: Privatemsg: Message */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ /* Field: Privatemsg: Thread ID */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* inbox */  /* Notification */ /* Field: Privatemsg: Message ID */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['id'] = 'mid';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['mid']['separator'] = '';
  /* inbox */  /* Notification */ /* Field: Privatemsg: Subject */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['subject']['id'] = 'subject';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['subject']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ /* Field: Privatemsg: Send date */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ /* Field: Custom: Subject */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Custom: Subject';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<span class="message-subject">[subject] </span>
<span class="message-timestamp">[timestamp] </span>
';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ /* Field: Custom: Message */
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['label'] = '';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="message-body">[body] </span>
<div class="message-actions">
<a class="message-reply" href="messages/view/[mid]">Reply</a>
<a class="message-delete" href="messages/delete/[thread_id]/[mid]">Delete</a>
</div>';
  /* inbox */  /* Notification */ $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* inbox */  /* Notification */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* inbox */  /* Notification */ /* Contextual filter: Privatemsg: Thread ID */
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['id'] = 'thread_id';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['table'] = 'pm_index';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['field'] = 'thread_id';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['default_action'] = 'default';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['default_argument_type'] = 'raw';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['default_argument_options']['index'] = '2';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['summary']['number_of_records'] = '0';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['summary']['format'] = 'default_summary';
  /* inbox */  /* Notification */ $handler->display->display_options['arguments']['thread_id']['summary_options']['items_per_page'] = '25';
  /* inbox */  /* Notification */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* inbox */  /* Notification */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* inbox */  /* Notification */ /* Filter criterion: Privatemsg: Notification (field_notification) */
  /* inbox */  /* Notification */ $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  /* inbox */  /* Notification */ $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  /* inbox */  /* Notification */ $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  /* inbox */  /* Notification */ $handler->display->display_options['filters']['field_notification_value']['value'] = array(
  /* inbox */  /* Notification */   0 => '0',
  /* inbox */  /* Notification */ );
  /* inbox */ $translatables['inbox'] = array(
  /* inbox */   t('Master'),
  /* inbox */   t('more'),
  /* inbox */   t('Apply'),
  /* inbox */   t('Reset'),
  /* inbox */   t('Sort by'),
  /* inbox */   t('Asc'),
  /* inbox */   t('Desc'),
  /* inbox */   t('Items per page'),
  /* inbox */   t('- All -'),
  /* inbox */   t('Offset'),
  /* inbox */   t('« first'),
  /* inbox */   t('‹ previous'),
  /* inbox */   t('next ›'),
  /* inbox */   t('last »'),
  /* inbox */   t('<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class = "read-messages">Read</a>
</div>'),
  /* inbox */   t('No messages.'),
  /* inbox */   t('Author'),
  /* inbox */   t('.'),
  /* inbox */   t('Read more'),
  /* inbox */   t('<span class="message-author-image">[picture]</span>
<span class="message-author-name">[name] </span>'),
  /* inbox */   t('<span class="message-date">[timestamp]</span>
<span class="message-body">[body] <a href="/messages/view/[mid]">Read more</a></span>'),
  /* inbox */   t('Messages'),
  /* inbox */   t('No unread messages.'),
  /* inbox */   t('Recipient'),
  /* inbox */   t('new-message'),
  /* inbox */   t(','),
  /* inbox */   t('Read full message'),
  /* inbox */   t('<span class="[is_new]"></span>[body]'),
  /* inbox */   t('All'),
  /* inbox */   t('Show new'),
  /* inbox */   t('Notifications'),
  /* inbox */   t('<div class="inbox-unread-filter">
<a href="/inbox/notifications">All Messages</a> | <a href="/inbox/notifications/unread">Unread</a> | <a href="/inbox/notifications/read">Read</a>
</div>'),
  /* inbox */   t('<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body] <a href="/inbox/notification/[thread_id]">Read more</a></span>'),
  /* inbox */   t('Sent'),
  /* inbox */   t('Thread ID'),
  /* inbox */   t('<span class="message-author-image">[picture]</span>'),
  /* inbox */   t('<div class="message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first]  [field_name_last]</a></span>
  <span class="message-date">[timestamp]</span>
  <span class="message-body"><a href="/inbox/message/[thread_id]">[body]</a></span>
</div>'),
  /* inbox */   t('Trash'),
  /* inbox */   t('<span class="message-author-image">[picture]</span>
<span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>'),
  /* inbox */   t('<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body]</span>'),
  /* inbox */   t('Message'),
  /* inbox */   t('<img src ="/sites/all/themes/gn2_zen/images/generic-head.jpg" alt = "anonymous user ">'),
  /* inbox */   t('<span class="message-author-image">[picture]</span>
'),
  /* inbox */   t('<div class = "message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>
  <span class="message-timestamp">[timestamp] </span>
  <div class="message-body">[body] </div>
  <!--@WIP <a class="message-delete" href="/messages/delete/[mid]">Delete</a>-->
</div>
'),
  /* inbox */   t('Notification'),
  /* inbox */   t('<span class="message-subject">[subject] </span>
<span class="message-timestamp">[timestamp] </span>
'),
  /* inbox */   t('<div class="message-body">[body] </span>
<div class="message-actions">
<a class="message-reply" href="messages/view/[mid]">Reply</a>
<a class="message-delete" href="messages/delete/[thread_id]/[mid]">Delete</a>
</div>'),
  /* inbox */ );
  $export['inbox'] = $view;

  return $export;
}
