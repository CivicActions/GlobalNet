<?php
/**
 * @file
 * Panel pane that displays the polls a user has been part of.
 */

// Content plugin for user basic account settings form.
$plugin = array(
  'category' => t('Node'),
  'single' => TRUE,
  'title' => t('About Page Social Media Links'),
  'description' => t('List of social media links for the contact page.'),
  'admin info' => 'gn2_about_social_media_admin_info',
  'edit form' => 'gn2_about_social_media_edit_form',
  'render callback' => 'gn2_about_social_media_render',
  'all contexts' => TRUE,
);

/**
 * Admin users info.
 */
function gn2_about_social_media_admin_info() {

  $block = new stdClass();
  $block->title = t('About Page Social Media Links');
  $block->content = t('Social media links');
  return $block;

}

/**
 * Admin form definition.
 */
function gn2_about_social_media_edit_form($form, &$form_state) {

  return $form;

}

/**
 * Renders social media links.
 */
function gn2_about_social_media_render($subtype, $conf, $args, $contexts) {

  // Empty by default.
  $block = new stdClass();

  // If an about page is being displayed...
  if (($node = menu_get_object()) && $node->type == 'about_page') {

    // Render array.
    $content = array();

    // Wrapper.
    $about = entity_metadata_wrapper('node', $node);

    // Loops over services.
    $services = array(
      'twitter' => t('Twitter'),
      'facebook' => t('Facebook'),
      'linkedin' => t('LinkedIn'),
      'google_plus' => t('Google Plus'),
      'youtube' => t('YouTube'),
      'instagram' => t('Instagram'),
    );
    foreach ($services as $sn => $name) {
      $field = $about->{"field_$sn"};
      $sn = str_replace('_', '-', $sn);
      if (trim($field->value())) {
        $content[$sn] = array(
          '#markup' => l('', $field->value(), array(
            'external' => TRUE,
            'attributes' => array(
              'class' => array('class' => "icon-{$sn}"),
              'target' => '_blank',
              'title' => $name,
              'rel' => [
                'noopener',
                'noreferrer',
              ],
            ),
          )),
        );
      }
    }

    $block->title = t('Find us on Social Media');
    $block->content = '<div class="social-icons">' . drupal_render($content) . '</div>';

  }

  // Returns rendered content.
  return $block;

}
