<?php
/**
 * @file
 * Definition of gn2_notifications_handler_notification_message.
 */

/**
 * Description of what my handler does.
 */
class gn2_notifications_handler_notification extends views_handler_field {
  function construct() {
    parent::construct();
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    // Gets the notification type.
    $type = $values->subscriptions_notifications_messages_type;

    // Gets the user that performs the action.
    if ($values->subscriptions_notifications_messages_initiator !== 0) {
      $initiator = user_load($values->subscriptions_notifications_messages_initiator);
      if ($initiator) {
        $name = $initiator->name;
        if (!empty($initiator->field_name_first[LANGUAGE_NONE][0]['value']) && !empty($initiator->field_name_last[LANGUAGE_NONE][0]['value'])) {
          $name = $initiator->field_name_first[LANGUAGE_NONE][0]['value'] . ' ' . $initiator->field_name_last[LANGUAGE_NONE][0]['value'];
        }
        $user_link = !empty($initiator->uid) ? l($name, 'user/' . $initiator->uid) : 'An anonymous user';
      }
    }
    else {
      $user_link = 'An anonymous user';
    }
    // Gets the updated node.
    $node = node_load($values->subscriptions_notifications_messages_nid);
    $node_link = '';
    if ($node) {
      $node_type = l(ucfirst($node->type), 'node/' . $node->nid);
      if ($node->type === "media_gallery") {
        $node_type = l('Folder', 'node/' . $node->nid);
      }
      $node_link = l($node->title, 'node/' . $node->nid);
      if (!empty($node->og_group_ref[LANGUAGE_NONE][0]['target_id'])) {
        $parent_load = node_load($node->og_group_ref[LANGUAGE_NONE][0]['target_id']);
        $parent_link = l($parent_load->title, 'node/' . $parent_load->nid);
      }
      else {
        $parent_load = '';
        $parent_link = '';
      }
    }

    $text = '';
    $parameters = array();
    $contact_request = l(t('contact request'), 'relationships/received');

    switch ($type) {
      case GN2_NOTIFICATIONS_NODE_CREATED:
        $text = '@name created a @node_type in @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_type' => $node_type,
          '@node_link' => $parent_link,
        );
        break;

      case GN2_NOTIFICATIONS_NODE_UPDATED:
        $text = '@name updated a @node_type in @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_type' => $node_type,
          '@node_link' => $parent_link,
        );
        break;

      case GN2_NOTIFICATIONS_SUPPORT:
        $text = '@name created a @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_type' => $node_type,
          '@node_link' => l(t('Support Request'), 'node/' . $node->nid),
        );
        break;

      case GN2_NOTIFICATIONS_SUPPORT_UPDATE:
        $text = 'A @node_link has been updated.';
        $parameters = array(
          '@node_link' => l(t('Support Request'), 'node/' . $node->nid),
        );
        break;

      case GN2_NOTIFICATIONS_OG_MEM_CREATED:
        $user_link = !empty($initiator->uid) ? l($name, 'user/' . $initiator->uid) : 'A user';
        $node = node_load($values->subscriptions_notifications_messages_nid);
        $text = '@name requested to join Group @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => l($node->title, 'group/node/' . $node->nid . '/admin/people'),
        );
        break;

      case GN2_NOTIFICATIONS_OG_EVENT_JOIN:
        $user_link = !empty($initiator->uid) ? l($name, 'user/' . $initiator->uid) : 'A user';
        $node = node_load($values->subscriptions_notifications_messages_nid);
        $text = '@name registered for @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => l($node->title, 'group/node/' . $node->nid . '/admin/people'),
        );
        break;

      case GN2_NOTIFICATIONS_OG_MEM_ACTIVATED:
        $user_link = !empty($initiator->uid) ? l($name, 'user/' . $initiator->uid) : 'A user';
        $node = node_load($values->subscriptions_notifications_messages_nid);
        $text = 'Your membership has been activated in @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => l($node->title, 'node/' . $node->nid),
        );
        break;

      case GN2_NOTIFICATIONS_COMMENT:
        $text = '@name commented on @node_type @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_type' => $node_type,
          '@node_link' => $node_link,
        );
        break;

      case GN2_NOTIFICATIONS_COMMENT_UPDATED:
        $text = '@name updated a comment on @node_type @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_type' => $node_type,
          '@node_link' => $node_link,
        );
        break;

      case GN2_NOTIFICATIONS_CONTACT_REQUEST:
      case GN2_NOTIFICATIONS_CONTACT_BULK_REQUEST:
        global $user;

        $status = db_query("SELECT rid FROM user_relationships WHERE requester_id = :requester_id AND requestee_id = :requestee_id AND approved = :approved",
          array(
            ':requester_id' => intval($values->subscriptions_notifications_messages_initiator),
            ':requestee_id' => $user->uid,
            ':approved' => 1,
          ))->fetchColumn();

        $text = '@name is your newest contact.';
        if ($status === FALSE) {
          $text = '@name sent you a @contact_request';
        }
        $parameters = array(
          '@name' => $user_link,
          '@contact_request' => $contact_request,
        );
        break;

      case GN2_NOTIFICATIONS_RATING:
        $text = '@name liked @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => $node_link,
        );
        break;

      case GN2_NOTIFICATIONS_GROUP_INVITE:
        $text = '@name added you to @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => $node_link,
        );
        break;

      case GN2_NOTIFICATIONS_FEEDBACK:
        $text = "@name has submitted some feedback in @node_link.";
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => $node_link,
          '@$node_type' => $node_type,
        );
        break;

      default:
        $text = 'There was recent activity in @node_link.';
        $parameters = array(
          '@name' => $user_link,
          '@node_link' => $node_link,
        );
        break;
    }

    $message = t($text, $parameters);
    return html_entity_decode($message);
  }

}
