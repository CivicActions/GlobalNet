<?php
/**
 * @file
 * gn2_notifications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_notifications_views_default_views() {
  $export = array();

  /* gn2_notifications */ $view = new view();
  /* gn2_notifications */ $view->name = 'gn2_notifications';
  /* gn2_notifications */ $view->description = '';
  /* gn2_notifications */ $view->tag = 'default';
  /* gn2_notifications */ $view->base_table = 'subscriptions_notifications_messages';
  /* gn2_notifications */ $view->human_name = 'Gn2 Notifications';
  /* gn2_notifications */ $view->core = 7;
  /* gn2_notifications */ $view->api_version = '3.0';
  /* gn2_notifications */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* gn2_notifications */ /* Display: Master */
  /* gn2_notifications */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* gn2_notifications */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* gn2_notifications */  /* Master */   'delta' => 'delta',
  /* gn2_notifications */  /* Master */   'type' => 'type',
  /* gn2_notifications */  /* Master */   'initiator' => 'initiator',
  /* gn2_notifications */  /* Master */   'text' => 'text',
  /* gn2_notifications */  /* Master */   'nid' => 'nid',
  /* gn2_notifications */  /* Master */   'timestamp' => 'timestamp',
  /* gn2_notifications */  /* Master */ );
  /* gn2_notifications */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* gn2_notifications */  /* Master */   'delta' => array(
  /* gn2_notifications */  /* Master */     'align' => 'views-align-left',
  /* gn2_notifications */  /* Master */     'separator' => '',
  /* gn2_notifications */  /* Master */     'empty_column' => 0,
  /* gn2_notifications */  /* Master */   ),
  /* gn2_notifications */  /* Master */   'type' => array(
  /* gn2_notifications */  /* Master */     'align' => 'views-align-left',
  /* gn2_notifications */  /* Master */     'separator' => '',
  /* gn2_notifications */  /* Master */     'empty_column' => 0,
  /* gn2_notifications */  /* Master */   ),
  /* gn2_notifications */  /* Master */   'initiator' => array(
  /* gn2_notifications */  /* Master */     'align' => 'views-align-left',
  /* gn2_notifications */  /* Master */     'separator' => '',
  /* gn2_notifications */  /* Master */     'empty_column' => 0,
  /* gn2_notifications */  /* Master */   ),
  /* gn2_notifications */  /* Master */   'text' => array(
  /* gn2_notifications */  /* Master */     'align' => 'views-align-left',
  /* gn2_notifications */  /* Master */     'separator' => '',
  /* gn2_notifications */  /* Master */     'empty_column' => 0,
  /* gn2_notifications */  /* Master */   ),
  /* gn2_notifications */  /* Master */   'nid' => array(
  /* gn2_notifications */  /* Master */     'align' => 'views-align-left',
  /* gn2_notifications */  /* Master */     'separator' => '',
  /* gn2_notifications */  /* Master */     'empty_column' => 0,
  /* gn2_notifications */  /* Master */   ),
  /* gn2_notifications */  /* Master */   'timestamp' => array(
  /* gn2_notifications */  /* Master */     'align' => 'views-align-left',
  /* gn2_notifications */  /* Master */     'separator' => '',
  /* gn2_notifications */  /* Master */     'empty_column' => 0,
  /* gn2_notifications */  /* Master */   ),
  /* gn2_notifications */  /* Master */ );
  /* gn2_notifications */  /* Master */ /* Relationship: GN2 Notifications: GN2 Notifications Initiator */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['relationships']['initiator']['id'] = 'initiator';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['relationships']['initiator']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['relationships']['initiator']['field'] = 'initiator';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['relationships']['initiator']['required'] = TRUE;
  /* gn2_notifications */  /* Master */ /* Field: GN2 Notifications: GN2 Notifications Delta */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['delta']['id'] = 'delta';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['delta']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  /* gn2_notifications */  /* Master */ /* Field: GN2 Notifications: GN2 Notifications Type */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['type']['label'] = 'Notification Type';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* gn2_notifications */  /* Master */ /* Field: GN2 Notifications: GN2 Notifications Initiator */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['id'] = 'initiator';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['field'] = 'initiator';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['label'] = 'User ID';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['exclude'] = TRUE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['alter']['text'] = 'User ID <a href';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['alter']['make_link'] = TRUE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['initiator']['alter']['path'] = 'user/[initiator]';
  /* gn2_notifications */  /* Master */ /* Field: GN2 Notifications: GN2 Notifications Text */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['text']['id'] = 'text';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['text']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['text']['field'] = 'text';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['text']['label'] = '';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  /* gn2_notifications */  /* Master */ /* Field: GN2 Notifications: GN2 Notifications NID */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = 'Entity ID';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* gn2_notifications */  /* Master */ /* Field: GN2 Notifications: GN2 Notifications Time created */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'j M Y,  H:i';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* gn2_notifications */  /* Master */ /* Sort criterion: GN2 Notifications: GN2 Notifications Time created */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['sorts']['timestamp']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* gn2_notifications */  /* Master */ /* Contextual filter: User: Uid */
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['table'] = 'users';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['relationship'] = 'initiator';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* gn2_notifications */  /* Master */ $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* gn2_notifications */ /* Display: Block */
  /* gn2_notifications */  /* Block */ $handler = $view->new_display('block', 'Block', 'block');

  /* gn2_notifications */ /* Display: Content pane */
  /* gn2_notifications */  /* Content pane */ $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['exposed_block'] = TRUE;
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* gn2_notifications */  /* Content pane */ /* Field: GN2 Notifications: GN2 Notifications Delta */
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['delta']['id'] = 'delta';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['delta']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  /* gn2_notifications */  /* Content pane */ /* Field: GN2 Notifications: GN2 Notifications Type */
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['type']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['type']['label'] = 'Notification Type';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* gn2_notifications */  /* Content pane */ /* Field: GN2 Notifications: GN2 Notifications Initiator */
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['id'] = 'initiator';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['field'] = 'initiator';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['label'] = 'User ID';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['exclude'] = TRUE;
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['alter']['text'] = 'User ID <a href';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['alter']['make_link'] = TRUE;
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['initiator']['alter']['path'] = 'user/[initiator]';
  /* gn2_notifications */  /* Content pane */ /* Field: GN2 Notifications: GN2 Notifications Text */
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['text']['id'] = 'text';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['text']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['text']['field'] = 'text';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['text']['label'] = '';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  /* gn2_notifications */  /* Content pane */ /* Field: GN2 Notifications: GN2 Notifications NID */
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['label'] = 'Entity ID';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* gn2_notifications */  /* Content pane */ /* Field: GN2 Notifications: GN2 Notifications Time created */
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['table'] = 'subscriptions_notifications_messages';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd M Y H:i';
  /* gn2_notifications */  /* Content pane */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* gn2_notifications */ $translatables['gn2_notifications'] = array(
  /* gn2_notifications */   t('Master'),
  /* gn2_notifications */   t('more'),
  /* gn2_notifications */   t('Apply'),
  /* gn2_notifications */   t('Reset'),
  /* gn2_notifications */   t('Sort by'),
  /* gn2_notifications */   t('Asc'),
  /* gn2_notifications */   t('Desc'),
  /* gn2_notifications */   t('Items per page'),
  /* gn2_notifications */   t('- All -'),
  /* gn2_notifications */   t('Offset'),
  /* gn2_notifications */   t('« first'),
  /* gn2_notifications */   t('‹'),
  /* gn2_notifications */   t('›'),
  /* gn2_notifications */   t('last »'),
  /* gn2_notifications */   t('GN2 Notifications User Relationship for Initiator'),
  /* gn2_notifications */   t('GN2 Notifications Delta'),
  /* gn2_notifications */   t('.'),
  /* gn2_notifications */   t(','),
  /* gn2_notifications */   t('Notification Type'),
  /* gn2_notifications */   t('User ID'),
  /* gn2_notifications */   t('User ID <a href'),
  /* gn2_notifications */   t('Entity ID'),
  /* gn2_notifications */   t('All'),
  /* gn2_notifications */   t('Block'),
  /* gn2_notifications */   t('Content pane'),
  /* gn2_notifications */   t('View panes'),
  /* gn2_notifications */ );
  $export['gn2_notifications'] = $view;

  return $export;
}
