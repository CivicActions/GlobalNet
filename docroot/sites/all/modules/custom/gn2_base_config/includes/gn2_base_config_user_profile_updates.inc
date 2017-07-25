<?php
/**
 * @file
 * gn2_base_config_user_profile_updates.inc
 */

/**
 * Helper function to get updated fields.
 */
function _gn2_base_config_compare_init($type, $entity, $original) {
  $fields_updated = '';

  $fields = array();

  switch ($type) {
    case 'user':
      $fields = array('name', 'mail', 'timezone', 'og_user_node', 'picture', 'field_user_rank_prefix',
        'field_name_first', 'field_name_middle', 'field_name_last', 'field_user_suffix', 'field_user_title',
        'field_user_organization', 'field_country_of_residence', 'field_nationality', 'field_country_of_representation',
        'field_date_of_birth', 'field_linkedin', 'field_facebook', 'field_twitter', 'field_website',
        'field_bio_short', 'field_biography', 'field_countries_of_interest', 'field_topics_of_interest',
        'field_org_role', 'field_crm_id', 'field_crm_source', 'field_cocom_region', 'field_date_of_death',
      );
      break;

    case 'field_education':
      $fields = array('field_education_degree', 'field_education_school', 'field_education_school_website',
        'field_education_dates_attended', 'field_education_description',
      );
      break;

    case 'field_employers':
      $fields = array('field_employers_company', 'field_employers_company_website', 'field_employers_location',
        'field_employers_position', 'field_employment_dates', 'field_job_description',
      );
      break;

    case 'field_expertise':
      $fields = array('field_expertise_level', 'field_expertise_topic', 'field_expertise_experience',
        'field_expertise_availability', 'field_organization',
      );
      break;

    case 'field_telephone':
      $fields = array('field_telephone_country_code', 'field_telephone_number', 'field_telephone_extension',
        'field_telephone_type',
      );
      break;

    case 'field_training':
      $fields = array('field_training_title', 'field_training_institution', 'field_training_website', 'field_training_year',
        'field_training_description',
      );
      break;

  }

  $uid = 0;

  if ($type == 'user') {
    $etype = $bundle = 'user';
    $uid = empty($entity->uid) ? 0 : $entity->uid;

    $label = 'User';
  }
  else {
    $etype = 'field_collection_item';
    $bundle = $type;
    $e_user = $entity->hostEntity();

    $label = $type;
    $uid = empty($e_user->uid) ? 0 : $e_user->uid;
  }

  foreach ($fields as $field) {
    if (empty($entity->$field)) {
      continue;
    }
    if (is_null($original)) {
      $fields_updated .= _gn2_base_config_compare_values($field, NULL, $entity->$field, $entity->is_new, $etype, $bundle);
    }
    else {
      $fields_updated .= _gn2_base_config_compare_values($field, $original->$field, $entity->$field, $entity->is_new, $etype, $bundle);
    }
  }

  if ($fields_updated != '') {
    $fields_updated = '<b>' . $label . '</b><ul>' . $fields_updated . '</ul>';
    _gn2_base_config_save_updates($uid, $fields_updated);
  }
}

/**
 * Save updated fields.
 * @param $uid
 * @param $changes
 */
function _gn2_base_config_save_updates($uid, $changes) {
  global $user;

  $values = array(
    'type' => 'userprofileupdates',
    'uid' => $user->uid,
    'created' => time(),
    'changed' => time(),
    'language' => LANGUAGE_NONE,
  );

  $entity = entity_create('entityform', $values);
  $ewrapper = entity_metadata_wrapper('entityform', $entity);

  $entity->field_updated_date[LANGUAGE_NONE][0] = array(
    'value' => date('Y-m-d H:i:s', time()),
    'timezone' => 'UTC',
    'timezone_db' => 'UTC',
  );
  $entity->field_updated_fields[LANGUAGE_NONE][0] = array(
    'value' => $changes,
    'format' => 'filtered_html',
  );
  $entity->field_user[LANGUAGE_NONE][0] = array(
    'target_id' => $uid,
  );

  $ewrapper->save();
}

/**
 * Implements helper function to compare values.
 */
function _gn2_base_config_compare_values($field, $orig, $new, $is_new = FALSE, $etype = 'user', $bundle = 'user') {
  $response = '';
  $value = '';
  $is_diff = FALSE;

  if (!is_null($new) && is_array($new)) {
    if (!$is_new && (!isset($orig[LANGUAGE_NONE]) && count($new[LANGUAGE_NONE]) == 0) ||
      (!$is_new && isset($orig[LANGUAGE_NONE]) && count($orig[LANGUAGE_NONE]) > count($new[LANGUAGE_NONE]))) {
      return $response;

    }
    elseif (count($new[LANGUAGE_NONE]) > 0 || count($orig[LANGUAGE_NONE]) > 0 || $is_new) {

      foreach ($new[LANGUAGE_NONE] as $nval) {
        $match = FALSE;

        if (!$is_new && isset($orig[LANGUAGE_NONE])) {
          foreach ($orig[LANGUAGE_NONE] as $oval) {

            if ((isset($nval['value']) && $nval['value'] == $oval['value']) ||
              (isset($nval['target_id']) && $nval['target_id'] == $oval['target_id'])||
              (isset($nval['tid'])  && $nval['tid'] == $oval['tid'])) {

              $match = TRUE;
            }
          }
        }

        if (!$match) {

          if (isset($nval['value'])) {
            $value = $nval['value'];
          }
          elseif (isset($nval['target_id'])) {
            $value = $nval['target_id'];
          }
          elseif (isset($nval['tid'])) {
            $term = taxonomy_term_load($nval['tid']);
            $value .= ' - ' . $term->name;
          }
          $is_diff = TRUE;
        }
      }
    }
  }
  elseif (is_object($new)) {
    if ($field == 'picture' && $new->fid !== $orig->fid) {
      $value = 'Picture has been changed';
      $is_diff = TRUE;
    }
  }
  elseif ($new !== $orig) {

    if (is_null($new)) {
      $value = 'No value';
    }
    else {
      $value = $new;
    }

    $is_diff = TRUE;
  }

  if ($is_diff) {
    if ($field == 'picture') {
      $label = 'Picture';
    }
    else {
      $label = $field;
      $info = field_info_instance($etype, $field, $bundle);

      if ($info) {
        $label = $info['label'];
      }
    }

    $response = '<li><b>' . $label . ': </b> ' . $value . '</li>';
  }

  return $response;
}
