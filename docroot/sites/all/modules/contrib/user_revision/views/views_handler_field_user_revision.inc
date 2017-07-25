<?php

/**
 * @file
 * Contains the basic 'user_revision' field handler.
 */

class views_handler_field_user_revision extends views_handler_field_user {
  /**
   * {@inheritdoc}
   */
  public function init(&$view, &$options) {
    parent::init($view, $options);
    if (!empty($this->options['link_to_user_revision'])) {
      $this->additional_fields['vid'] = 'vid';
      $this->additional_fields['uid'] = 'uid';
    }
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['link_to_user_revision'] = array('default' => FALSE);
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_to_user_revision'] = array(
      '#title' => t('Link this field to its user revision'),
      '#description' => t('This will override any other link you have set.'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_to_user_revision']),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function render_link($data, $values) {
    if (!empty($this->options['link_to_user_revision']) && $data !== NULL && $data !== '') {
      $this->options['alter']['make_link'] = TRUE;
      $this->options['alter']['path'] = "user/" . $values->{$this->aliases['uid']} . '/revisions/' . $values->{$this->aliases['vid']} . '/view';
    }
    else {
      return parent::render_link($data, $values);
    }
    return $data;
  }
}
