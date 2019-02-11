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

  $view = new view();
  $view->name = 'inbox';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'pm_message';
  $view->human_name = 'Inbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class="read-messages">Read</a> | <a href="/messages/view">Manage Inbox</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No messages.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Privatemsg: Author */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* Field: Privatemsg: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Custom: Author */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>
<span class="message-author-name">[name] </span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom: Message */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="message-date">[timestamp]</span>
<span class="message-body">[body] <a href="/messages/view/[mid]">Read more</a></span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Privatemsg: Send date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: Messages */
  $handler = $view->new_display('block', 'Messages', 'block');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_name_last' => 'field_name_last',
    'field_name_first' => 'field_name_first',
    'uid' => 'uid',
    'subject' => 'subject',
    'timestamp' => 'timestamp',
    'body' => 'body',
    'mid' => 'mid',
    'thread_id' => 'thread_id',
    'is_new' => 'is_new',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_last' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_first' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'thread_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'is_new' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class = "read-messages">Read</a> | <a href="/messages/view">Manage Inbox</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No unread messages.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Privatemsg: Author */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* Relationship: Privatemsg: Recipient */
  $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['label'] = '';
  $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  $handler->display->display_options['fields']['thread_id']['format_plural_singular'] = '';
  $handler->display->display_options['fields']['thread_id']['format_plural_plural'] = '';
  /* Field: Privatemsg: Is new */
  $handler->display->display_options['fields']['is_new']['id'] = 'is_new';
  $handler->display->display_options['fields']['is_new']['table'] = 'pm_index';
  $handler->display->display_options['fields']['is_new']['field'] = 'is_new';
  $handler->display->display_options['fields']['is_new']['label'] = '';
  $handler->display->display_options['fields']['is_new']['exclude'] = TRUE;
  $handler->display->display_options['fields']['is_new']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['is_new']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['is_new']['type'] = 'custom';
  $handler->display->display_options['fields']['is_new']['type_custom_true'] = 'new-message';
  $handler->display->display_options['fields']['is_new']['not'] = 0;
  /* Field: Privatemsg: Recipient */
  $handler->display->display_options['fields']['recipient']['id'] = 'recipient';
  $handler->display->display_options['fields']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['fields']['recipient']['field'] = 'recipient';
  $handler->display->display_options['fields']['recipient']['label'] = '';
  $handler->display->display_options['fields']['recipient']['exclude'] = TRUE;
  $handler->display->display_options['fields']['recipient']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['path'] = 'messages/view/[thread_id]';
  $handler->display->display_options['fields']['subject']['alter']['alt'] = 'Read full message';
  $handler->display->display_options['fields']['subject']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['subject']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<span class="[is_new]"></span>[body]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<span>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Privatemsg: Send date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Privatemsg: Recipient */
  $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Privatemsg: Is deleted */
  $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['value'] = '0';
  $handler->display->display_options['filters']['deleted']['group'] = 1;
  /* Filter criterion: Privatemsg: Notification (field_notification) */
  $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_notification_value']['group'] = 1;
  /* Filter criterion: Privatemsg: Is new */
  $handler->display->display_options['filters']['is_new']['id'] = 'is_new';
  $handler->display->display_options['filters']['is_new']['table'] = 'pm_index';
  $handler->display->display_options['filters']['is_new']['field'] = 'is_new';
  $handler->display->display_options['filters']['is_new']['value'] = 'All';
  $handler->display->display_options['filters']['is_new']['group'] = 1;
  $handler->display->display_options['filters']['is_new']['exposed'] = TRUE;
  $handler->display->display_options['filters']['is_new']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['is_new']['expose']['label'] = 'Show new';
  $handler->display->display_options['filters']['is_new']['expose']['operator'] = 'is_new_op';
  $handler->display->display_options['filters']['is_new']['expose']['identifier'] = 'is_new';
  $handler->display->display_options['filters']['is_new']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Notifications */
  $handler = $view->new_display('block', 'Notifications', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="inbox-unread-filter">
<a href="/inbox/notifications">All Messages</a> | <a href="/inbox/notifications/unread">Unread</a> | <a href="/inbox/notifications/read">Read</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['label'] = '';
  $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Custom: Message */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body] <a href="/inbox/notification/[thread_id]">Read more</a></span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Privatemsg: Recipient */
  $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Privatemsg: Is deleted */
  $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['value'] = '0';
  /* Filter criterion: Privatemsg: Notification (field_notification) */
  $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Privatemsg: Is new */
  $handler->display->display_options['filters']['is_new']['id'] = 'is_new';
  $handler->display->display_options['filters']['is_new']['table'] = 'pm_index';
  $handler->display->display_options['filters']['is_new']['field'] = 'is_new';
  $handler->display->display_options['filters']['is_new']['value'] = 'All';
  $handler->display->display_options['filters']['is_new']['exposed'] = TRUE;
  $handler->display->display_options['filters']['is_new']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['is_new']['expose']['label'] = 'Show new';
  $handler->display->display_options['filters']['is_new']['expose']['operator'] = 'is_new_op';
  $handler->display->display_options['filters']['is_new']['expose']['identifier'] = 'is_new';
  $handler->display->display_options['filters']['is_new']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
  );

  /* Display: Sent */
  $handler = $view->new_display('block', 'Sent', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'subject',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'message--list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Privatemsg: Author */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['relationships']['author']['required'] = TRUE;
  /* Relationship: Privatemsg: Recipient */
  $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'author';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'tiny50x50';
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['relationship'] = 'author';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['relationship'] = 'author';
  $handler->display->display_options['fields']['field_name_first']['label'] = '';
  $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'author';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Privatemsg: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'medium';
  /* Field: Privatemsg: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = FALSE;
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['thread_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* Field: Custom: Author */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Custom: Message */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first]  [field_name_last]</a></span>
  <span class="message-date">[timestamp]</span>
  <span class="message-body"><a href="/inbox/message/[thread_id]">[body]</a></span>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Privatemsg: Recipient */
  $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Privatemsg: Is deleted */
  $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['value'] = '0';
  /* Filter criterion: Privatemsg: Notification (field_notification) */
  $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['value'] = array(
    0 => '0',
  );

  /* Display: Trash */
  $handler = $view->new_display('block', 'Trash', 'block_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['relationship'] = 'author';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['relationship'] = 'author';
  $handler->display->display_options['fields']['field_name_first']['label'] = '';
  $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* Field: Privatemsg: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'author';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'author';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Privatemsg: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Custom: Author */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>
<span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom: Message */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body]</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Privatemsg: Recipient */
  $handler->display->display_options['arguments']['recipient']['id'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['table'] = 'pm_index';
  $handler->display->display_options['arguments']['recipient']['field'] = 'recipient';
  $handler->display->display_options['arguments']['recipient']['default_action'] = 'default';
  $handler->display->display_options['arguments']['recipient']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['recipient']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['recipient']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['recipient']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Privatemsg: Is deleted */
  $handler->display->display_options['filters']['deleted']['id'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['table'] = 'pm_index';
  $handler->display->display_options['filters']['deleted']['field'] = 'deleted';
  $handler->display->display_options['filters']['deleted']['value'] = '1';

  /* Display: Message */
  $handler = $view->new_display('block', 'Message', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'message--thread';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'message--list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Privatemsg: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'author';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src ="/sites/all/themes/gn2_zen/images/generic-head.jpg" alt = "anonymous user ">';
  $handler->display->display_options['fields']['picture']['image_style'] = 'tiny50x50';
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['relationship'] = 'author';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['relationship'] = 'author';
  $handler->display->display_options['fields']['field_name_first']['label'] = '';
  $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'author';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['label'] = '';
  $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* Field: Privatemsg: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Custom: Author */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Author';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="message-author-image">[picture]</span>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom: Message */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class = "message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>
  <span class="message-timestamp">[timestamp] </span>
  <div class="message-body">[body] </div>
  <!--@WIP <a class="message-delete" href="/messages/delete/[mid]">Delete</a>-->
</div>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Privatemsg: Send date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Privatemsg: Thread ID */
  $handler->display->display_options['arguments']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['arguments']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['arguments']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['arguments']['thread_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['thread_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['thread_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['thread_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['thread_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['thread_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Privatemsg: Notification (field_notification) */
  $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['value'] = array(
    0 => '0',
  );

  /* Display: Notification */
  $handler = $view->new_display('block', 'Notification', 'block_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Privatemsg: Message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'pm_message';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['label'] = '';
  $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* Field: Privatemsg: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'pm_message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Privatemsg: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'pm_message';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Send date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'pm_message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Custom: Subject */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Custom: Subject';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<span class="message-subject">[subject] </span>
<span class="message-timestamp">[timestamp] </span>
';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Custom: Message */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Message';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="message-body">[body] </span>
<div class="message-actions">
<a class="message-reply" href="messages/view/[mid]">Reply</a>
<a class="message-delete" href="messages/delete/[thread_id]/[mid]">Delete</a>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Privatemsg: Thread ID */
  $handler->display->display_options['arguments']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['arguments']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['arguments']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['arguments']['thread_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['thread_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['thread_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['thread_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['thread_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['thread_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Privatemsg: Notification (field_notification) */
  $handler->display->display_options['filters']['field_notification_value']['id'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['table'] = 'field_data_field_notification';
  $handler->display->display_options['filters']['field_notification_value']['field'] = 'field_notification_value';
  $handler->display->display_options['filters']['field_notification_value']['value'] = array(
    0 => '0',
  );
  $translatables['inbox'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class="read-messages">Read</a> | <a href="/messages/view">Manage Inbox</a>
</div>'),
    t('No messages.'),
    t('Author'),
    t('.'),
    t('Read more'),
    t('<span class="message-author-image">[picture]</span>
<span class="message-author-name">[name] </span>'),
    t('<span class="message-date">[timestamp]</span>
<span class="message-body">[body] <a href="/messages/view/[mid]">Read more</a></span>'),
    t('Messages'),
    t('<div class="inbox-unread-filter">
<a href="/inbox/messages" class = "all-messages">All Messages</a> | <a href="/inbox/messages/unread" class = "unread-messages">Unread</a> | <a href="/inbox/messages/read" class = "read-messages">Read</a> | <a href="/messages/view">Manage Inbox</a>
</div>'),
    t('No unread messages.'),
    t('Recipient'),
    t('new-message'),
    t(','),
    t('Read full message'),
    t('<span class="[is_new]"></span>[body]'),
    t('All'),
    t('Show new'),
    t('Notifications'),
    t('<div class="inbox-unread-filter">
<a href="/inbox/notifications">All Messages</a> | <a href="/inbox/notifications/unread">Unread</a> | <a href="/inbox/notifications/read">Read</a>
</div>'),
    t('<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body] <a href="/inbox/notification/[thread_id]">Read more</a></span>'),
    t('Sent'),
    t('Thread ID'),
    t('<span class="message-author-image">[picture]</span>'),
    t('<div class="message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first]  [field_name_last]</a></span>
  <span class="message-date">[timestamp]</span>
  <span class="message-body"><a href="/inbox/message/[thread_id]">[body]</a></span>
</div>'),
    t('Trash'),
    t('<span class="message-author-image">[picture]</span>
<span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>'),
    t('<span class="message-date">[timestamp]</span>
<span class="message-subject">[subject]</span>
<span class="message-body">[body]</span>'),
    t('Message'),
    t('<img src ="/sites/all/themes/gn2_zen/images/generic-head.jpg" alt = "anonymous user ">'),
    t('<span class="message-author-image">[picture]</span>
'),
    t('<div class = "message--content-wrapper">
  <span class="message-author-name"><a href="/user/[uid]">[field_name_first] [field_name_last]</a></span>
  <span class="message-timestamp">[timestamp] </span>
  <div class="message-body">[body] </div>
  <!--@WIP <a class="message-delete" href="/messages/delete/[mid]">Delete</a>-->
</div>
'),
    t('Notification'),
    t('<span class="message-subject">[subject] </span>
<span class="message-timestamp">[timestamp] </span>
'),
    t('<div class="message-body">[body] </span>
<div class="message-actions">
<a class="message-reply" href="messages/view/[mid]">Reply</a>
<a class="message-delete" href="messages/delete/[thread_id]/[mid]">Delete</a>
</div>'),
  );
  $export['inbox'] = $view;

  return $export;
}
