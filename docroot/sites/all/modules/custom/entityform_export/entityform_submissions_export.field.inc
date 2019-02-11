<?php

/**
 * @file
 * Provide callback function for field type.
 */

/**
 * Export field type Text default.
 *
 * Callback must return data in next structure:
 *
 * [
 *   Header [
 *      field name [
 *          label -> name
 *      ]
 *   ]
 *   rows [
 *      field name [
 *        data -> value
 *      ]
 *   ]
 * ]
 *
 * @param $field_instance
 *   array field instance
 * @param $value
 *   EntityMetaFieldWrapper object.
 *
 * @return array
 */
function entityform_submissions_export_field_type_text_default($field_instance, $value) {
  $text = '';
  try {
    $text = $value->value();
  } catch (Exception $e) {
  }
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => $text),
    ),
  );
}

/**
 * Callback for email field type.
 *
 */
function entityform_submissions_export_field_type_email_default($field_instance, $value) {
  $text = '';
  try {
    $text = $value->value();
  } catch (Exception $e) {
  }
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => $text)
    ),
  );
}

/**
 * Callback for empty field type.
 *
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_default($field_instance, $value) {
  $content = array();
  switch($field_instance['name']) {
    case 'entityform_id':
      $content = array(
        'header' => array(
          $field_instance['name'] => array('label' => 'Submission ID')
        ),
        'rows' => array(
          $field_instance['name'] => array('data' => $value->value()),
        ),
      );
      break;
    case 'created':
    case 'changed':
    $content = array(
      'header' => array(
        $field_instance['name'] => array('label' => $field_instance['name'])
      ),
      'rows' => array(
        $field_instance['name'] => array('data' => date('d.m.Y H:i', $value->value())),
      ),
    );
      break;
    case 'uid':
      $content = array(
        'header' => array(
          $field_instance['name'] => array('label' => 'User ID')
        ),
        'rows' => array(
          $field_instance['name'] => array('data' => $value->value()),
        ),
      );
      break;
    case 'user':
      $content = array(
        'header' => array(
          $field_instance['name'] => array('label' => 'User name')
        ),
        'rows' => array(
          $field_instance['name'] => array('data' => $value->name->value()),
        ),
      );
     break;
    default:
      $content = array(
        'header' => array(
          $field_instance['name'] => array('label' => $field_instance['label'])
        ),
        'rows' => array(
          $field_instance['name'] => array('data' => ''),
        ),
      );
  }
  return $content;
}

/**
 * Callback for node reference field type.
 *
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_node_reference_default($field_instance, $value) {
  $node = new stdClass();
  $node->title = '';
  try {
    $node = $value->value();
  } catch (Exception $e) {
  }
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => $node->title),
    ),
  );
}

/**
 * Callback for FieldCollectionItem field type.
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_field_collection_view($field_instance, $value) {
  $content = array();
  foreach($value->getIterator() as $field_name=>$field_value) {
    if (strpos($field_name, 'field_') === FALSE || $field_name == 'field_name') {
      continue;
    }

    $field_collection_instance = _helper_entityform_submissions_export_field_instance('field_collection_item', $field_instance['name'], $field_name);

    $field_type_callback_result = _helper_entityform_submissions_export_field_type_callback($field_collection_instance, $field_name, $field_value);

    if ($field_type_callback_result) {
      // Header information
      foreach($field_type_callback_result['header'] as $cname=>$cvalue) {
        $content['header'][$cname] = $cvalue;
      }

      // Rows information
      foreach($field_type_callback_result['rows'] as $cname=>$cvalue) {
        $content['rows'][$cname] = $cvalue;
      }
    }
  }
 return $content;
}

/**
 * Callback for list type field.
 *
 */
function entityform_submissions_export_field_type_list_default($field_instance, $value) {
  $field_info = field_info_field_by_id($field_instance['info']['field_id']);
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => $field_info['settings']['allowed_values'][$value->value()]),
    ),
  );
}

/**
 * Callback for date type field.
 *
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_date_default($field_instance, $value) {
  $text = '';
  try {
    $text = date('d.m.Y H:i',$value->value());
  } catch (Exception $e) {
  }
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' =>$text),
    ),
  );
}

/**
 * Callback for taxonomy term reference field.
 *
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_taxonomy_term_reference_link($field_instance, $value) {
  $text = '';
  try {
    $text = $value->name->value();
  } catch (Exception $e) {
  }

  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => $text),
    ),
  );
}

/**
 * Callback for boolean type field.
 *
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_boolean_yes_no($field_instance, $value) {
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => ($value->value()) ? t('Yes') : t('No')),
    ),
  );
}

/**
 * Callback for integer field type.
 *
 * @param $field_instance
 * @param $value
 * @return array
 */
function entityform_submissions_export_field_type_number_integer($field_instance, $value) {
  $text = '';
  try {
    $text = $value->value();
  } catch (Exception $e) {
  }
  return array(
    'header' => array(
      $field_instance['name'] => array('label' => $field_instance['label']),
    ),
    'rows' => array(
      $field_instance['name'] => array('data' => $text),
    ),
  );
}