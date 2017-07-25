<?php

/**
 * @file
 * A custom two-part date field handler for Views.
 */

/**
 * A handler to allow an smart daily custom format for dates.
 *
 * @ingroup views_field_handlers
 */
class views_smartdate_handler_field_date extends views_handler_field_date {
  // Views handlers options form.
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    // Add the new format.
    $form['date_format']['#options']['views_smartdate'] = t('Smart date');
  }

  // Views handlers render.
  function render($values) {
    $value = $values->{$this->field_alias};
    $format = $this->options['date_format'];
    // Check for our custom format.
    if ($format == 'views_smartdate') {
      // Check for user timezone.
      $timezone = drupal_get_user_timezone();
      $date = new DateTime();
      $date->setTimezone(new DateTimeZone($timezone));
      $today = strtotime($date->format('Y-m-d 00:00:00'));
      $yesterday = strtotime("-1 day", $today);

      if ($value >= $today) {
        // This value is still within today.
        return t('Today');
      }
      if ($value >= $yesterday && $value < $today) {
        // This value.
        return t('Yesterday');
      }
      else {
        // This value is older than today.
        return format_date($value, 'custom', 'j F');
      }
    }
    // Otherwise render the date using the normal date handler.
    else {
      return parent::render($values);
    }
  }

}
