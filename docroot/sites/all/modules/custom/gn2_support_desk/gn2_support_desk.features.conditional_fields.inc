<?php
/**
 * @file
 * gn2_support_desk.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function gn2_support_desk_conditional_fields_default_fields() {
  $items = array();

  /* field_which_course */
  $items[] = array(
    /* field_which_course */
    'entity'    => 'entityform',
    /* field_which_course */
    'bundle'    => 'join_org',
    /* field_which_course */
    'dependent' => 'field_which_course',
    /* field_which_course */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_course */
    'options'   => array(
      /* field_which_course */
      'state'                 => 'visible',
      /* field_which_course */
      'condition'             => 'value',
      /* field_which_course */
      'grouping'              => 'AND',
      /* field_which_course */
      'effect'                => 'show',
      /* field_which_course */
      'effect_options'        => array(),
      /* field_which_course */
      'element_view'          => array(
        /* field_which_course */
        1 => 1,
        /* field_which_course */
        2 => 2,
        /* field_which_course */
        5 => 0,
        /* field_which_course */
        3 => 0,
        /* field_which_course */
        4 => 0,
        /* field_which_course */
      ),
      /* field_which_course */
      'element_view_per_role' => 0,
      /* field_which_course */
      'element_view_roles'    => array(
        /* field_which_course */
        1 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          2 => 2,
          /* field_which_course */
          5 => 0,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
          4 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        2 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          2 => 2,
          /* field_which_course */
          5 => 0,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
          4 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        9 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          2 => 2,
          /* field_which_course */
          5 => 0,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
          4 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
      ),
      /* field_which_course */
      'element_edit'          => array(
        /* field_which_course */
        1 => 1,
        /* field_which_course */
        3 => 0,
        /* field_which_course */
      ),
      /* field_which_course */
      'element_edit_per_role' => 0,
      /* field_which_course */
      'element_edit_roles'    => array(
        /* field_which_course */
        1 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        2 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        9 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
      ),
      /* field_which_course */
      'selector'              => '',
      /* field_which_course */
      'values_set'            => 1,
      /* field_which_course */
      'value_form'            => 1,
      /* field_which_course */
      'value'                 => array(
        /* field_which_course */
        0 => array(
          /* field_which_course */
          'value' => 1,
          /* field_which_course */
        ),
        /* field_which_course */
      ),
      /* field_which_course */
      'values'                => array(),
      /* field_which_course */
    ),
    /* field_which_course */
  );

  /* field_which_course_did_you */
  $items[] = array(
    /* field_which_course_did_you */
    'entity'    => 'entityform',
    /* field_which_course_did_you */
    'bundle'    => 'join_org',
    /* field_which_course_did_you */
    'dependent' => 'field_which_course_did_you',
    /* field_which_course_did_you */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_course_did_you */
    'options'   => array(
      /* field_which_course_did_you */
      'state'                 => 'visible',
      /* field_which_course_did_you */
      'condition'             => 'value',
      /* field_which_course_did_you */
      'grouping'              => 'AND',
      /* field_which_course_did_you */
      'effect'                => 'show',
      /* field_which_course_did_you */
      'effect_options'        => array(),
      /* field_which_course_did_you */
      'element_view'          => array(
        /* field_which_course_did_you */
        1 => 1,
        /* field_which_course_did_you */
        2 => 2,
        /* field_which_course_did_you */
        5 => 0,
        /* field_which_course_did_you */
        3 => 0,
        /* field_which_course_did_you */
        4 => 0,
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'element_view_per_role' => 0,
      /* field_which_course_did_you */
      'element_view_roles'    => array(
        /* field_which_course_did_you */
        1 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          2 => 2,
          /* field_which_course_did_you */
          5 => 0,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
          4 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        2 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          2 => 2,
          /* field_which_course_did_you */
          5 => 0,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
          4 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        9 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          2 => 2,
          /* field_which_course_did_you */
          5 => 0,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
          4 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'element_edit'          => array(
        /* field_which_course_did_you */
        1 => 1,
        /* field_which_course_did_you */
        3 => 0,
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'element_edit_per_role' => 0,
      /* field_which_course_did_you */
      'element_edit_roles'    => array(
        /* field_which_course_did_you */
        1 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        2 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        9 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'selector'              => '',
      /* field_which_course_did_you */
      'values_set'            => 1,
      /* field_which_course_did_you */
      'value_form'            => 4,
      /* field_which_course_did_you */
      'value'                 => array(
        /* field_which_course_did_you */
        0 => array(
          /* field_which_course_did_you */
          'value' => 4,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'values'                => array(),
      /* field_which_course_did_you */
    ),
    /* field_which_course_did_you */
  );

  /* field_which_course_teach */
  $items[] = array(
    /* field_which_course_teach */
    'entity'    => 'entityform',
    /* field_which_course_teach */
    'bundle'    => 'join_org',
    /* field_which_course_teach */
    'dependent' => 'field_which_course_teach',
    /* field_which_course_teach */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_course_teach */
    'options'   => array(
      /* field_which_course_teach */
      'state'                 => 'visible',
      /* field_which_course_teach */
      'condition'             => 'value',
      /* field_which_course_teach */
      'grouping'              => 'AND',
      /* field_which_course_teach */
      'effect'                => 'show',
      /* field_which_course_teach */
      'effect_options'        => array(),
      /* field_which_course_teach */
      'element_view'          => array(
        /* field_which_course_teach */
        1 => 1,
        /* field_which_course_teach */
        2 => 2,
        /* field_which_course_teach */
        5 => 0,
        /* field_which_course_teach */
        3 => 0,
        /* field_which_course_teach */
        4 => 0,
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'element_view_per_role' => 0,
      /* field_which_course_teach */
      'element_view_roles'    => array(
        /* field_which_course_teach */
        1 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          2 => 2,
          /* field_which_course_teach */
          5 => 0,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
          4 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        2 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          2 => 2,
          /* field_which_course_teach */
          5 => 0,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
          4 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        9 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          2 => 2,
          /* field_which_course_teach */
          5 => 0,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
          4 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'element_edit'          => array(
        /* field_which_course_teach */
        1 => 1,
        /* field_which_course_teach */
        3 => 0,
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'element_edit_per_role' => 0,
      /* field_which_course_teach */
      'element_edit_roles'    => array(
        /* field_which_course_teach */
        1 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        2 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        9 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'selector'              => '',
      /* field_which_course_teach */
      'values_set'            => 1,
      /* field_which_course_teach */
      'value_form'            => 2,
      /* field_which_course_teach */
      'value'                 => array(
        /* field_which_course_teach */
        0 => array(
          /* field_which_course_teach */
          'value' => 2,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'values'                => array(),
      /* field_which_course_teach */
    ),
    /* field_which_course_teach */
  );

  /* field_which_event_attend */
  $items[] = array(
    /* field_which_event_attend */
    'entity'    => 'entityform',
    /* field_which_event_attend */
    'bundle'    => 'join_org',
    /* field_which_event_attend */
    'dependent' => 'field_which_event_attend',
    /* field_which_event_attend */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_event_attend */
    'options'   => array(
      /* field_which_event_attend */
      'state'                 => 'visible',
      /* field_which_event_attend */
      'condition'             => 'value',
      /* field_which_event_attend */
      'grouping'              => 'AND',
      /* field_which_event_attend */
      'effect'                => 'show',
      /* field_which_event_attend */
      'effect_options'        => array(),
      /* field_which_event_attend */
      'element_view'          => array(
        /* field_which_event_attend */
        1 => 1,
        /* field_which_event_attend */
        2 => 2,
        /* field_which_event_attend */
        5 => 0,
        /* field_which_event_attend */
        3 => 0,
        /* field_which_event_attend */
        4 => 0,
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'element_view_per_role' => 0,
      /* field_which_event_attend */
      'element_view_roles'    => array(
        /* field_which_event_attend */
        1 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          2 => 2,
          /* field_which_event_attend */
          5 => 0,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
          4 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        2 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          2 => 2,
          /* field_which_event_attend */
          5 => 0,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
          4 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        9 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          2 => 2,
          /* field_which_event_attend */
          5 => 0,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
          4 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'element_edit'          => array(
        /* field_which_event_attend */
        1 => 1,
        /* field_which_event_attend */
        3 => 0,
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'element_edit_per_role' => 0,
      /* field_which_event_attend */
      'element_edit_roles'    => array(
        /* field_which_event_attend */
        1 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        2 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        9 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'selector'              => '',
      /* field_which_event_attend */
      'values_set'            => 1,
      /* field_which_event_attend */
      'value_form'            => 3,
      /* field_which_event_attend */
      'value'                 => array(
        /* field_which_event_attend */
        0 => array(
          /* field_which_event_attend */
          'value' => 3,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'values'                => array(),
      /* field_which_event_attend */
    ),
    /* field_which_event_attend */
  );

  /* field_who_teaches */
  $items[] = array(
    /* field_who_teaches */
    'entity'    => 'entityform',
    /* field_who_teaches */
    'bundle'    => 'join_org',
    /* field_who_teaches */
    'dependent' => 'field_who_teaches',
    /* field_who_teaches */
    'dependee'  => 'field_why_do_you_want',
    /* field_who_teaches */
    'options'   => array(
      /* field_who_teaches */
      'state'                 => 'visible',
      /* field_who_teaches */
      'condition'             => 'value',
      /* field_who_teaches */
      'grouping'              => 'AND',
      /* field_who_teaches */
      'effect'                => 'show',
      /* field_who_teaches */
      'effect_options'        => array(),
      /* field_who_teaches */
      'element_view'          => array(
        /* field_who_teaches */
        1 => 1,
        /* field_who_teaches */
        2 => 2,
        /* field_who_teaches */
        5 => 0,
        /* field_who_teaches */
        3 => 0,
        /* field_who_teaches */
        4 => 0,
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'element_view_per_role' => 0,
      /* field_who_teaches */
      'element_view_roles'    => array(
        /* field_who_teaches */
        1 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          2 => 2,
          /* field_who_teaches */
          5 => 0,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
          4 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        2 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          2 => 2,
          /* field_who_teaches */
          5 => 0,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
          4 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        9 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          2 => 2,
          /* field_who_teaches */
          5 => 0,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
          4 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'element_edit'          => array(
        /* field_who_teaches */
        1 => 1,
        /* field_who_teaches */
        3 => 0,
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'element_edit_per_role' => 0,
      /* field_who_teaches */
      'element_edit_roles'    => array(
        /* field_who_teaches */
        1 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        2 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        9 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'selector'              => '',
      /* field_who_teaches */
      'values_set'            => 1,
      /* field_who_teaches */
      'value_form'            => 1,
      /* field_who_teaches */
      'value'                 => array(
        /* field_who_teaches */
        0 => array(
          /* field_who_teaches */
          'value' => 1,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'values'                => array(),
      /* field_who_teaches */
    ),
    /* field_who_teaches */
  );

  /* field_day_association */
  $items[] = array(
    /* field_day_association */
    'entity'    => 'entityform',
    /* field_day_association */
    'bundle'    => 'session',
    /* field_day_association */
    'dependent' => 'field_day_association',
    /* field_day_association */
    'dependee'  => 'field_type',
    /* field_day_association */
    'options'   => array(
      /* field_day_association */
      'state'                 => 'visible',
      /* field_day_association */
      'condition'             => 'value',
      /* field_day_association */
      'grouping'              => 'AND',
      /* field_day_association */
      'effect'                => 'show',
      /* field_day_association */
      'effect_options'        => array(),
      /* field_day_association */
      'element_view'          => array(
        /* field_day_association */
        1 => 1,
        /* field_day_association */
        2 => 2,
        /* field_day_association */
        5 => 0,
        /* field_day_association */
        3 => 0,
        /* field_day_association */
        4 => 0,
        /* field_day_association */
      ),
      /* field_day_association */
      'element_view_per_role' => 0,
      /* field_day_association */
      'element_view_roles'    => array(
        /* field_day_association */
        1 => array(
          /* field_day_association */
          1 => 1,
          /* field_day_association */
          2 => 2,
          /* field_day_association */
          5 => 0,
          /* field_day_association */
          3 => 0,
          /* field_day_association */
          4 => 0,
          /* field_day_association */
        ),
        /* field_day_association */
        2 => array(
          /* field_day_association */
          1 => 1,
          /* field_day_association */
          2 => 2,
          /* field_day_association */
          5 => 0,
          /* field_day_association */
          3 => 0,
          /* field_day_association */
          4 => 0,
          /* field_day_association */
        ),
        /* field_day_association */
        9 => array(
          /* field_day_association */
          1 => 1,
          /* field_day_association */
          2 => 2,
          /* field_day_association */
          5 => 0,
          /* field_day_association */
          3 => 0,
          /* field_day_association */
          4 => 0,
          /* field_day_association */
        ),
        /* field_day_association */
      ),
      /* field_day_association */
      'element_edit'          => array(
        /* field_day_association */
        1 => 1,
        /* field_day_association */
        3 => 0,
        /* field_day_association */
      ),
      /* field_day_association */
      'element_edit_per_role' => 0,
      /* field_day_association */
      'element_edit_roles'    => array(
        /* field_day_association */
        1 => array(
          /* field_day_association */
          1 => 1,
          /* field_day_association */
          3 => 0,
          /* field_day_association */
        ),
        /* field_day_association */
        2 => array(
          /* field_day_association */
          1 => 1,
          /* field_day_association */
          3 => 0,
          /* field_day_association */
        ),
        /* field_day_association */
        9 => array(
          /* field_day_association */
          1 => 1,
          /* field_day_association */
          3 => 0,
          /* field_day_association */
        ),
        /* field_day_association */
      ),
      /* field_day_association */
      'selector'              => '',
      /* field_day_association */
      'values_set'            => 3,
      /* field_day_association */
      'value_form'            => '_none',
      /* field_day_association */
      'values'                => array(
        /* field_day_association */
        0 => 'Unit',
        /* field_day_association */
      ),
      /* field_day_association */
      'value'                 => array(),
      /* field_day_association */
    ),
    /* field_day_association */
  );

  /* field_media */
  $items[] = array(
    /* field_media */
    'entity'    => 'entityform',
    /* field_media */
    'bundle'    => 'session',
    /* field_media */
    'dependent' => 'field_media',
    /* field_media */
    'dependee'  => 'field_type',
    /* field_media */
    'options'   => array(
      /* field_media */
      'state'                 => 'visible',
      /* field_media */
      'condition'             => 'value',
      /* field_media */
      'grouping'              => 'AND',
      /* field_media */
      'effect'                => 'show',
      /* field_media */
      'effect_options'        => array(),
      /* field_media */
      'element_view'          => array(
        /* field_media */
        1 => 1,
        /* field_media */
        2 => 2,
        /* field_media */
        5 => 0,
        /* field_media */
        3 => 0,
        /* field_media */
        4 => 0,
        /* field_media */
      ),
      /* field_media */
      'element_view_per_role' => 0,
      /* field_media */
      'element_view_roles'    => array(
        /* field_media */
        1 => array(
          /* field_media */
          1 => 1,
          /* field_media */
          2 => 2,
          /* field_media */
          5 => 0,
          /* field_media */
          3 => 0,
          /* field_media */
          4 => 0,
          /* field_media */
        ),
        /* field_media */
        2 => array(
          /* field_media */
          1 => 1,
          /* field_media */
          2 => 2,
          /* field_media */
          5 => 0,
          /* field_media */
          3 => 0,
          /* field_media */
          4 => 0,
          /* field_media */
        ),
        /* field_media */
        9 => array(
          /* field_media */
          1 => 1,
          /* field_media */
          2 => 2,
          /* field_media */
          5 => 0,
          /* field_media */
          3 => 0,
          /* field_media */
          4 => 0,
          /* field_media */
        ),
        /* field_media */
      ),
      /* field_media */
      'element_edit'          => array(
        /* field_media */
        1 => 1,
        /* field_media */
        3 => 0,
        /* field_media */
      ),
      /* field_media */
      'element_edit_per_role' => 0,
      /* field_media */
      'element_edit_roles'    => array(
        /* field_media */
        1 => array(
          /* field_media */
          1 => 1,
          /* field_media */
          3 => 0,
          /* field_media */
        ),
        /* field_media */
        2 => array(
          /* field_media */
          1 => 1,
          /* field_media */
          3 => 0,
          /* field_media */
        ),
        /* field_media */
        9 => array(
          /* field_media */
          1 => 1,
          /* field_media */
          3 => 0,
          /* field_media */
        ),
        /* field_media */
      ),
      /* field_media */
      'selector'              => '',
      /* field_media */
      'values_set'            => 3,
      /* field_media */
      'value_form'            => '_none',
      /* field_media */
      'values'                => array(
        /* field_media */
        0 => 'Day',
        /* field_media */
        1 => 'Unit',
        /* field_media */
      ),
      /* field_media */
      'value'                 => array(),
      /* field_media */
    ),
    /* field_media */
  );

  /* field_node_association */
  $items[] = array(
    /* field_node_association */
    'entity'    => 'entityform',
    /* field_node_association */
    'bundle'    => 'session',
    /* field_node_association */
    'dependent' => 'field_node_association',
    /* field_node_association */
    'dependee'  => 'field_type',
    /* field_node_association */
    'options'   => array(
      /* field_node_association */
      'state'                 => 'visible',
      /* field_node_association */
      'condition'             => 'value',
      /* field_node_association */
      'grouping'              => 'AND',
      /* field_node_association */
      'effect'                => 'show',
      /* field_node_association */
      'effect_options'        => array(),
      /* field_node_association */
      'element_view'          => array(
        /* field_node_association */
        1 => 1,
        /* field_node_association */
        2 => 2,
        /* field_node_association */
        5 => 0,
        /* field_node_association */
        3 => 0,
        /* field_node_association */
        4 => 0,
        /* field_node_association */
      ),
      /* field_node_association */
      'element_view_per_role' => 0,
      /* field_node_association */
      'element_view_roles'    => array(
        /* field_node_association */
        1 => array(
          /* field_node_association */
          1 => 1,
          /* field_node_association */
          2 => 2,
          /* field_node_association */
          5 => 0,
          /* field_node_association */
          3 => 0,
          /* field_node_association */
          4 => 0,
          /* field_node_association */
        ),
        /* field_node_association */
        2 => array(
          /* field_node_association */
          1 => 1,
          /* field_node_association */
          2 => 2,
          /* field_node_association */
          5 => 0,
          /* field_node_association */
          3 => 0,
          /* field_node_association */
          4 => 0,
          /* field_node_association */
        ),
        /* field_node_association */
        9 => array(
          /* field_node_association */
          1 => 1,
          /* field_node_association */
          2 => 2,
          /* field_node_association */
          5 => 0,
          /* field_node_association */
          3 => 0,
          /* field_node_association */
          4 => 0,
          /* field_node_association */
        ),
        /* field_node_association */
      ),
      /* field_node_association */
      'element_edit'          => array(
        /* field_node_association */
        1 => 1,
        /* field_node_association */
        3 => 0,
        /* field_node_association */
      ),
      /* field_node_association */
      'element_edit_per_role' => 0,
      /* field_node_association */
      'element_edit_roles'    => array(
        /* field_node_association */
        1 => array(
          /* field_node_association */
          1 => 1,
          /* field_node_association */
          3 => 0,
          /* field_node_association */
        ),
        /* field_node_association */
        2 => array(
          /* field_node_association */
          1 => 1,
          /* field_node_association */
          3 => 0,
          /* field_node_association */
        ),
        /* field_node_association */
        9 => array(
          /* field_node_association */
          1 => 1,
          /* field_node_association */
          3 => 0,
          /* field_node_association */
        ),
        /* field_node_association */
      ),
      /* field_node_association */
      'selector'              => '',
      /* field_node_association */
      'values_set'            => 3,
      /* field_node_association */
      'value_form'            => '_none',
      /* field_node_association */
      'values'                => array(
        /* field_node_association */
        0 => 'Day',
        /* field_node_association */
        1 => 'Unit',
        /* field_node_association */
      ),
      /* field_node_association */
      'value'                 => array(),
      /* field_node_association */
    ),
    /* field_node_association */
  );

  /* field_session_association */
  $items[] = array(
    /* field_session_association */
    'entity'    => 'entityform',
    /* field_session_association */
    'bundle'    => 'session',
    /* field_session_association */
    'dependent' => 'field_session_association',
    /* field_session_association */
    'dependee'  => 'field_type',
    /* field_session_association */
    'options'   => array(
      /* field_session_association */
      'state'                 => 'visible',
      /* field_session_association */
      'condition'             => 'value',
      /* field_session_association */
      'grouping'              => 'AND',
      /* field_session_association */
      'effect'                => 'show',
      /* field_session_association */
      'effect_options'        => array(),
      /* field_session_association */
      'element_view'          => array(
        /* field_session_association */
        1 => 1,
        /* field_session_association */
        2 => 2,
        /* field_session_association */
        5 => 0,
        /* field_session_association */
        3 => 0,
        /* field_session_association */
        4 => 0,
        /* field_session_association */
      ),
      /* field_session_association */
      'element_view_per_role' => 0,
      /* field_session_association */
      'element_view_roles'    => array(
        /* field_session_association */
        1 => array(
          /* field_session_association */
          1 => 1,
          /* field_session_association */
          2 => 2,
          /* field_session_association */
          5 => 0,
          /* field_session_association */
          3 => 0,
          /* field_session_association */
          4 => 0,
          /* field_session_association */
        ),
        /* field_session_association */
        2 => array(
          /* field_session_association */
          1 => 1,
          /* field_session_association */
          2 => 2,
          /* field_session_association */
          5 => 0,
          /* field_session_association */
          3 => 0,
          /* field_session_association */
          4 => 0,
          /* field_session_association */
        ),
        /* field_session_association */
        9 => array(
          /* field_session_association */
          1 => 1,
          /* field_session_association */
          2 => 2,
          /* field_session_association */
          5 => 0,
          /* field_session_association */
          3 => 0,
          /* field_session_association */
          4 => 0,
          /* field_session_association */
        ),
        /* field_session_association */
      ),
      /* field_session_association */
      'element_edit'          => array(
        /* field_session_association */
        1 => 1,
        /* field_session_association */
        3 => 0,
        /* field_session_association */
      ),
      /* field_session_association */
      'element_edit_per_role' => 0,
      /* field_session_association */
      'element_edit_roles'    => array(
        /* field_session_association */
        1 => array(
          /* field_session_association */
          1 => 1,
          /* field_session_association */
          3 => 0,
          /* field_session_association */
        ),
        /* field_session_association */
        2 => array(
          /* field_session_association */
          1 => 1,
          /* field_session_association */
          3 => 0,
          /* field_session_association */
        ),
        /* field_session_association */
        9 => array(
          /* field_session_association */
          1 => 1,
          /* field_session_association */
          3 => 0,
          /* field_session_association */
        ),
        /* field_session_association */
      ),
      /* field_session_association */
      'selector'              => '',
      /* field_session_association */
      'values_set'            => 3,
      /* field_session_association */
      'value_form'            => '_none',
      /* field_session_association */
      'values'                => array(
        /* field_session_association */
        0 => 'Day',
        /* field_session_association */
      ),
      /* field_session_association */
      'value'                 => array(),
      /* field_session_association */
    ),
    /* field_session_association */
  );

  /* field_session_presenter */
  $items[] = array(
    /* field_session_presenter */
    'entity'    => 'entityform',
    /* field_session_presenter */
    'bundle'    => 'session',
    /* field_session_presenter */
    'dependent' => 'field_session_presenter',
    /* field_session_presenter */
    'dependee'  => 'field_type',
    /* field_session_presenter */
    'options'   => array(
      /* field_session_presenter */
      'state'                 => 'visible',
      /* field_session_presenter */
      'condition'             => 'value',
      /* field_session_presenter */
      'grouping'              => 'AND',
      /* field_session_presenter */
      'effect'                => 'show',
      /* field_session_presenter */
      'effect_options'        => array(),
      /* field_session_presenter */
      'element_view'          => array(
        /* field_session_presenter */
        1 => 1,
        /* field_session_presenter */
        2 => 2,
        /* field_session_presenter */
        5 => 0,
        /* field_session_presenter */
        3 => 0,
        /* field_session_presenter */
        4 => 0,
        /* field_session_presenter */
      ),
      /* field_session_presenter */
      'element_view_per_role' => 0,
      /* field_session_presenter */
      'element_view_roles'    => array(
        /* field_session_presenter */
        1 => array(
          /* field_session_presenter */
          1 => 1,
          /* field_session_presenter */
          2 => 2,
          /* field_session_presenter */
          5 => 0,
          /* field_session_presenter */
          3 => 0,
          /* field_session_presenter */
          4 => 0,
          /* field_session_presenter */
        ),
        /* field_session_presenter */
        2 => array(
          /* field_session_presenter */
          1 => 1,
          /* field_session_presenter */
          2 => 2,
          /* field_session_presenter */
          5 => 0,
          /* field_session_presenter */
          3 => 0,
          /* field_session_presenter */
          4 => 0,
          /* field_session_presenter */
        ),
        /* field_session_presenter */
        9 => array(
          /* field_session_presenter */
          1 => 1,
          /* field_session_presenter */
          2 => 2,
          /* field_session_presenter */
          5 => 0,
          /* field_session_presenter */
          3 => 0,
          /* field_session_presenter */
          4 => 0,
          /* field_session_presenter */
        ),
        /* field_session_presenter */
      ),
      /* field_session_presenter */
      'element_edit'          => array(
        /* field_session_presenter */
        1 => 1,
        /* field_session_presenter */
        3 => 0,
        /* field_session_presenter */
      ),
      /* field_session_presenter */
      'element_edit_per_role' => 0,
      /* field_session_presenter */
      'element_edit_roles'    => array(
        /* field_session_presenter */
        1 => array(
          /* field_session_presenter */
          1 => 1,
          /* field_session_presenter */
          3 => 0,
          /* field_session_presenter */
        ),
        /* field_session_presenter */
        2 => array(
          /* field_session_presenter */
          1 => 1,
          /* field_session_presenter */
          3 => 0,
          /* field_session_presenter */
        ),
        /* field_session_presenter */
        9 => array(
          /* field_session_presenter */
          1 => 1,
          /* field_session_presenter */
          3 => 0,
          /* field_session_presenter */
        ),
        /* field_session_presenter */
      ),
      /* field_session_presenter */
      'selector'              => '',
      /* field_session_presenter */
      'values_set'            => 3,
      /* field_session_presenter */
      'value_form'            => '_none',
      /* field_session_presenter */
      'values'                => array(
        /* field_session_presenter */
        0 => 'Day',
        /* field_session_presenter */
        1 => 'Unit',
        /* field_session_presenter */
      ),
      /* field_session_presenter */
      'value'                 => array(),
      /* field_session_presenter */
    ),
    /* field_session_presenter */
  );

  /* field_weight */
  $items[] = array(
    /* field_weight */
    'entity'    => 'entityform',
    /* field_weight */
    'bundle'    => 'session',
    /* field_weight */
    'dependent' => 'field_weight',
    /* field_weight */
    'dependee'  => 'field_type',
    /* field_weight */
    'options'   => array(
      /* field_weight */
      'state'                 => 'visible',
      /* field_weight */
      'condition'             => 'value',
      /* field_weight */
      'grouping'              => 'AND',
      /* field_weight */
      'effect'                => 'show',
      /* field_weight */
      'effect_options'        => array(),
      /* field_weight */
      'element_view'          => array(
        /* field_weight */
        1 => 1,
        /* field_weight */
        2 => 2,
        /* field_weight */
        5 => 0,
        /* field_weight */
        3 => 0,
        /* field_weight */
        4 => 0,
        /* field_weight */
      ),
      /* field_weight */
      'element_view_per_role' => 0,
      /* field_weight */
      'element_view_roles'    => array(
        /* field_weight */
        1 => array(
          /* field_weight */
          1 => 1,
          /* field_weight */
          2 => 2,
          /* field_weight */
          5 => 0,
          /* field_weight */
          3 => 0,
          /* field_weight */
          4 => 0,
          /* field_weight */
        ),
        /* field_weight */
        2 => array(
          /* field_weight */
          1 => 1,
          /* field_weight */
          2 => 2,
          /* field_weight */
          5 => 0,
          /* field_weight */
          3 => 0,
          /* field_weight */
          4 => 0,
          /* field_weight */
        ),
        /* field_weight */
        9 => array(
          /* field_weight */
          1 => 1,
          /* field_weight */
          2 => 2,
          /* field_weight */
          5 => 0,
          /* field_weight */
          3 => 0,
          /* field_weight */
          4 => 0,
          /* field_weight */
        ),
        /* field_weight */
      ),
      /* field_weight */
      'element_edit'          => array(
        /* field_weight */
        1 => 1,
        /* field_weight */
        3 => 0,
        /* field_weight */
      ),
      /* field_weight */
      'element_edit_per_role' => 0,
      /* field_weight */
      'element_edit_roles'    => array(
        /* field_weight */
        1 => array(
          /* field_weight */
          1 => 1,
          /* field_weight */
          3 => 0,
          /* field_weight */
        ),
        /* field_weight */
        2 => array(
          /* field_weight */
          1 => 1,
          /* field_weight */
          3 => 0,
          /* field_weight */
        ),
        /* field_weight */
        9 => array(
          /* field_weight */
          1 => 1,
          /* field_weight */
          3 => 0,
          /* field_weight */
        ),
        /* field_weight */
      ),
      /* field_weight */
      'selector'              => '',
      /* field_weight */
      'values_set'            => 3,
      /* field_weight */
      'value_form'            => '_none',
      /* field_weight */
      'values'                => array(
        /* field_weight */
        0 => 'Unit',
        /* field_weight */
      ),
      /* field_weight */
      'value'                 => array(),
      /* field_weight */
    ),
    /* field_weight */
  );

  /* field_date2 */
  $items[] = array(
    /* field_date2 */
    'entity'    => 'entityform',
    /* field_date2 */
    'bundle'    => 'session',
    /* field_date2 */
    'dependent' => 'field_date2',
    /* field_date2 */
    'dependee'  => 'field_type',
    /* field_date2 */
    'options'   => array(
      /* field_date2 */
      'state'                 => 'visible',
      /* field_date2 */
      'condition'             => 'value',
      /* field_date2 */
      'grouping'              => 'AND',
      /* field_date2 */
      'effect'                => 'show',
      /* field_date2 */
      'effect_options'        => array(),
      /* field_date2 */
      'element_view'          => array(
        /* field_date2 */
        1 => 1,
        /* field_date2 */
        2 => 2,
        /* field_date2 */
        5 => 0,
        /* field_date2 */
        3 => 0,
        /* field_date2 */
        4 => 0,
        /* field_date2 */
      ),
      /* field_date2 */
      'element_view_per_role' => 0,
      /* field_date2 */
      'element_view_roles'    => array(
        /* field_date2 */
        1  => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          2 => 2,
          /* field_date2 */
          5 => 0,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
          4 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
        2  => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          2 => 2,
          /* field_date2 */
          5 => 0,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
          4 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
        9  => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          2 => 2,
          /* field_date2 */
          5 => 0,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
          4 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
        10 => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          2 => 2,
          /* field_date2 */
          5 => 0,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
          4 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
      ),
      /* field_date2 */
      'element_edit'          => array(
        /* field_date2 */
        1 => 1,
        /* field_date2 */
        3 => 0,
        /* field_date2 */
      ),
      /* field_date2 */
      'element_edit_per_role' => 0,
      /* field_date2 */
      'element_edit_roles'    => array(
        /* field_date2 */
        1  => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
        2  => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
        9  => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
        10 => array(
          /* field_date2 */
          1 => 1,
          /* field_date2 */
          3 => 0,
          /* field_date2 */
        ),
        /* field_date2 */
      ),
      /* field_date2 */
      'selector'              => '',
      /* field_date2 */
      'values_set'            => 2,
      /* field_date2 */
      'value_form'            => '_none',
      /* field_date2 */
      'values'                => array(
        /* field_date2 */
        0 => 'Week',
        /* field_date2 */
      ),
      /* field_date2 */
      'value'                 => array(),
      /* field_date2 */
    ),
    /* field_date2 */
  );

  /* field_day_number */
  $items[] = array(
    /* field_day_number */
    'entity'    => 'entityform',
    /* field_day_number */
    'bundle'    => 'session',
    /* field_day_number */
    'dependent' => 'field_day_number',
    /* field_day_number */
    'dependee'  => 'field_type',
    /* field_day_number */
    'options'   => array(
      /* field_day_number */
      'state'                 => 'visible',
      /* field_day_number */
      'condition'             => 'value',
      /* field_day_number */
      'grouping'              => 'AND',
      /* field_day_number */
      'effect'                => 'show',
      /* field_day_number */
      'effect_options'        => array(),
      /* field_day_number */
      'element_view'          => array(
        /* field_day_number */
        1 => 1,
        /* field_day_number */
        2 => 2,
        /* field_day_number */
        5 => 0,
        /* field_day_number */
        3 => 0,
        /* field_day_number */
        4 => 0,
        /* field_day_number */
      ),
      /* field_day_number */
      'element_view_per_role' => 0,
      /* field_day_number */
      'element_view_roles'    => array(
        /* field_day_number */
        1  => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          2 => 2,
          /* field_day_number */
          5 => 0,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
          4 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
        2  => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          2 => 2,
          /* field_day_number */
          5 => 0,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
          4 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
        9  => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          2 => 2,
          /* field_day_number */
          5 => 0,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
          4 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
        10 => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          2 => 2,
          /* field_day_number */
          5 => 0,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
          4 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
      ),
      /* field_day_number */
      'element_edit'          => array(
        /* field_day_number */
        1 => 1,
        /* field_day_number */
        3 => 0,
        /* field_day_number */
      ),
      /* field_day_number */
      'element_edit_per_role' => 0,
      /* field_day_number */
      'element_edit_roles'    => array(
        /* field_day_number */
        1  => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
        2  => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
        9  => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
        10 => array(
          /* field_day_number */
          1 => 1,
          /* field_day_number */
          3 => 0,
          /* field_day_number */
        ),
        /* field_day_number */
      ),
      /* field_day_number */
      'selector'              => '',
      /* field_day_number */
      'values_set'            => 2,
      /* field_day_number */
      'value_form'            => '_none',
      /* field_day_number */
      'values'                => array(
        /* field_day_number */
        0 => 'Day',
        /* field_day_number */
      ),
      /* field_day_number */
      'value'                 => array(),
      /* field_day_number */
    ),
    /* field_day_number */
  );

  /* field_which_course */
  $items[] = array(
    /* field_which_course */
    'entity'    => 'entityform',
    /* field_which_course */
    'bundle'    => 'userreg',
    /* field_which_course */
    'dependent' => 'field_which_course',
    /* field_which_course */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_course */
    'options'   => array(
      /* field_which_course */
      'state'                 => 'visible',
      /* field_which_course */
      'condition'             => 'value',
      /* field_which_course */
      'grouping'              => 'AND',
      /* field_which_course */
      'effect'                => 'show',
      /* field_which_course */
      'effect_options'        => array(),
      /* field_which_course */
      'element_view'          => array(
        /* field_which_course */
        1 => 1,
        /* field_which_course */
        2 => 2,
        /* field_which_course */
        5 => 0,
        /* field_which_course */
        3 => 0,
        /* field_which_course */
        4 => 0,
        /* field_which_course */
      ),
      /* field_which_course */
      'element_view_per_role' => 0,
      /* field_which_course */
      'element_view_roles'    => array(
        /* field_which_course */
        1 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          2 => 2,
          /* field_which_course */
          5 => 0,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
          4 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        2 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          2 => 2,
          /* field_which_course */
          5 => 0,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
          4 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        9 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          2 => 2,
          /* field_which_course */
          5 => 0,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
          4 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
      ),
      /* field_which_course */
      'element_edit'          => array(
        /* field_which_course */
        1 => 1,
        /* field_which_course */
        3 => 0,
        /* field_which_course */
      ),
      /* field_which_course */
      'element_edit_per_role' => 0,
      /* field_which_course */
      'element_edit_roles'    => array(
        /* field_which_course */
        1 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        2 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
        9 => array(
          /* field_which_course */
          1 => 1,
          /* field_which_course */
          3 => 0,
          /* field_which_course */
        ),
        /* field_which_course */
      ),
      /* field_which_course */
      'selector'              => '',
      /* field_which_course */
      'values_set'            => 1,
      /* field_which_course */
      'value_form'            => 1,
      /* field_which_course */
      'value'                 => array(
        /* field_which_course */
        0 => array(
          /* field_which_course */
          'value' => 1,
          /* field_which_course */
        ),
        /* field_which_course */
      ),
      /* field_which_course */
      'values'                => array(),
      /* field_which_course */
    ),
    /* field_which_course */
  );

  /* field_which_course_did_you */
  $items[] = array(
    /* field_which_course_did_you */
    'entity'    => 'entityform',
    /* field_which_course_did_you */
    'bundle'    => 'userreg',
    /* field_which_course_did_you */
    'dependent' => 'field_which_course_did_you',
    /* field_which_course_did_you */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_course_did_you */
    'options'   => array(
      /* field_which_course_did_you */
      'state'                 => 'visible',
      /* field_which_course_did_you */
      'condition'             => 'value',
      /* field_which_course_did_you */
      'grouping'              => 'AND',
      /* field_which_course_did_you */
      'effect'                => 'show',
      /* field_which_course_did_you */
      'effect_options'        => array(),
      /* field_which_course_did_you */
      'element_view'          => array(
        /* field_which_course_did_you */
        1 => 1,
        /* field_which_course_did_you */
        2 => 2,
        /* field_which_course_did_you */
        5 => 0,
        /* field_which_course_did_you */
        3 => 0,
        /* field_which_course_did_you */
        4 => 0,
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'element_view_per_role' => 0,
      /* field_which_course_did_you */
      'element_view_roles'    => array(
        /* field_which_course_did_you */
        1 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          2 => 2,
          /* field_which_course_did_you */
          5 => 0,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
          4 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        2 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          2 => 2,
          /* field_which_course_did_you */
          5 => 0,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
          4 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        9 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          2 => 2,
          /* field_which_course_did_you */
          5 => 0,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
          4 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'element_edit'          => array(
        /* field_which_course_did_you */
        1 => 1,
        /* field_which_course_did_you */
        3 => 0,
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'element_edit_per_role' => 0,
      /* field_which_course_did_you */
      'element_edit_roles'    => array(
        /* field_which_course_did_you */
        1 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        2 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
        9 => array(
          /* field_which_course_did_you */
          1 => 1,
          /* field_which_course_did_you */
          3 => 0,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'selector'              => '',
      /* field_which_course_did_you */
      'values_set'            => 1,
      /* field_which_course_did_you */
      'value_form'            => 4,
      /* field_which_course_did_you */
      'value'                 => array(
        /* field_which_course_did_you */
        0 => array(
          /* field_which_course_did_you */
          'value' => 4,
          /* field_which_course_did_you */
        ),
        /* field_which_course_did_you */
      ),
      /* field_which_course_did_you */
      'values'                => array(),
      /* field_which_course_did_you */
    ),
    /* field_which_course_did_you */
  );

  /* field_which_course_teach */
  $items[] = array(
    /* field_which_course_teach */
    'entity'    => 'entityform',
    /* field_which_course_teach */
    'bundle'    => 'userreg',
    /* field_which_course_teach */
    'dependent' => 'field_which_course_teach',
    /* field_which_course_teach */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_course_teach */
    'options'   => array(
      /* field_which_course_teach */
      'state'                 => 'visible',
      /* field_which_course_teach */
      'condition'             => 'value',
      /* field_which_course_teach */
      'grouping'              => 'AND',
      /* field_which_course_teach */
      'effect'                => 'show',
      /* field_which_course_teach */
      'effect_options'        => array(),
      /* field_which_course_teach */
      'element_view'          => array(
        /* field_which_course_teach */
        1 => 1,
        /* field_which_course_teach */
        2 => 2,
        /* field_which_course_teach */
        5 => 0,
        /* field_which_course_teach */
        3 => 0,
        /* field_which_course_teach */
        4 => 0,
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'element_view_per_role' => 0,
      /* field_which_course_teach */
      'element_view_roles'    => array(
        /* field_which_course_teach */
        1 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          2 => 2,
          /* field_which_course_teach */
          5 => 0,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
          4 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        2 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          2 => 2,
          /* field_which_course_teach */
          5 => 0,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
          4 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        9 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          2 => 2,
          /* field_which_course_teach */
          5 => 0,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
          4 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'element_edit'          => array(
        /* field_which_course_teach */
        1 => 1,
        /* field_which_course_teach */
        3 => 0,
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'element_edit_per_role' => 0,
      /* field_which_course_teach */
      'element_edit_roles'    => array(
        /* field_which_course_teach */
        1 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        2 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
        9 => array(
          /* field_which_course_teach */
          1 => 1,
          /* field_which_course_teach */
          3 => 0,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'selector'              => '',
      /* field_which_course_teach */
      'values_set'            => 1,
      /* field_which_course_teach */
      'value_form'            => 2,
      /* field_which_course_teach */
      'value'                 => array(
        /* field_which_course_teach */
        0 => array(
          /* field_which_course_teach */
          'value' => 2,
          /* field_which_course_teach */
        ),
        /* field_which_course_teach */
      ),
      /* field_which_course_teach */
      'values'                => array(),
      /* field_which_course_teach */
    ),
    /* field_which_course_teach */
  );

  /* field_which_event_attend */
  $items[] = array(
    /* field_which_event_attend */
    'entity'    => 'entityform',
    /* field_which_event_attend */
    'bundle'    => 'userreg',
    /* field_which_event_attend */
    'dependent' => 'field_which_event_attend',
    /* field_which_event_attend */
    'dependee'  => 'field_why_do_you_want',
    /* field_which_event_attend */
    'options'   => array(
      /* field_which_event_attend */
      'state'                 => 'visible',
      /* field_which_event_attend */
      'condition'             => 'value',
      /* field_which_event_attend */
      'grouping'              => 'AND',
      /* field_which_event_attend */
      'effect'                => 'show',
      /* field_which_event_attend */
      'effect_options'        => array(),
      /* field_which_event_attend */
      'element_view'          => array(
        /* field_which_event_attend */
        1 => 1,
        /* field_which_event_attend */
        2 => 2,
        /* field_which_event_attend */
        5 => 0,
        /* field_which_event_attend */
        3 => 0,
        /* field_which_event_attend */
        4 => 0,
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'element_view_per_role' => 0,
      /* field_which_event_attend */
      'element_view_roles'    => array(
        /* field_which_event_attend */
        1 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          2 => 2,
          /* field_which_event_attend */
          5 => 0,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
          4 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        2 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          2 => 2,
          /* field_which_event_attend */
          5 => 0,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
          4 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        9 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          2 => 2,
          /* field_which_event_attend */
          5 => 0,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
          4 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'element_edit'          => array(
        /* field_which_event_attend */
        1 => 1,
        /* field_which_event_attend */
        3 => 0,
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'element_edit_per_role' => 0,
      /* field_which_event_attend */
      'element_edit_roles'    => array(
        /* field_which_event_attend */
        1 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        2 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
        9 => array(
          /* field_which_event_attend */
          1 => 1,
          /* field_which_event_attend */
          3 => 0,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'selector'              => '',
      /* field_which_event_attend */
      'values_set'            => 1,
      /* field_which_event_attend */
      'value_form'            => 3,
      /* field_which_event_attend */
      'value'                 => array(
        /* field_which_event_attend */
        0 => array(
          /* field_which_event_attend */
          'value' => 3,
          /* field_which_event_attend */
        ),
        /* field_which_event_attend */
      ),
      /* field_which_event_attend */
      'values'                => array(),
      /* field_which_event_attend */
    ),
    /* field_which_event_attend */
  );

  /* field_who_teaches */
  $items[] = array(
    /* field_who_teaches */
    'entity'    => 'entityform',
    /* field_who_teaches */
    'bundle'    => 'userreg',
    /* field_who_teaches */
    'dependent' => 'field_who_teaches',
    /* field_who_teaches */
    'dependee'  => 'field_why_do_you_want',
    /* field_who_teaches */
    'options'   => array(
      /* field_who_teaches */
      'state'                 => 'visible',
      /* field_who_teaches */
      'condition'             => 'value',
      /* field_who_teaches */
      'grouping'              => 'AND',
      /* field_who_teaches */
      'effect'                => 'show',
      /* field_who_teaches */
      'effect_options'        => array(),
      /* field_who_teaches */
      'element_view'          => array(
        /* field_who_teaches */
        1 => 1,
        /* field_who_teaches */
        2 => 2,
        /* field_who_teaches */
        5 => 0,
        /* field_who_teaches */
        3 => 0,
        /* field_who_teaches */
        4 => 0,
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'element_view_per_role' => 0,
      /* field_who_teaches */
      'element_view_roles'    => array(
        /* field_who_teaches */
        1 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          2 => 2,
          /* field_who_teaches */
          5 => 0,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
          4 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        2 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          2 => 2,
          /* field_who_teaches */
          5 => 0,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
          4 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        9 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          2 => 2,
          /* field_who_teaches */
          5 => 0,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
          4 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'element_edit'          => array(
        /* field_who_teaches */
        1 => 1,
        /* field_who_teaches */
        3 => 0,
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'element_edit_per_role' => 0,
      /* field_who_teaches */
      'element_edit_roles'    => array(
        /* field_who_teaches */
        1 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        2 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
        9 => array(
          /* field_who_teaches */
          1 => 1,
          /* field_who_teaches */
          3 => 0,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'selector'              => '',
      /* field_who_teaches */
      'values_set'            => 1,
      /* field_who_teaches */
      'value_form'            => 1,
      /* field_who_teaches */
      'value'                 => array(
        /* field_who_teaches */
        0 => array(
          /* field_who_teaches */
          'value' => 1,
          /* field_who_teaches */
        ),
        /* field_who_teaches */
      ),
      /* field_who_teaches */
      'values'                => array(),
      /* field_who_teaches */
    ),
    /* field_who_teaches */
  );

  /* field_building_floor_room */
  $items[] = array(
    /* field_building_floor_room */
    'entity'    => 'node',
    /* field_building_floor_room */
    'bundle'    => 'event',
    /* field_building_floor_room */
    'dependent' => 'field_building_floor_room',
    /* field_building_floor_room */
    'dependee'  => 'field_event_location',
    /* field_building_floor_room */
    'options'   => array(
      /* field_building_floor_room */
      'state'                 => 'visible',
      /* field_building_floor_room */
      'condition'             => 'value',
      /* field_building_floor_room */
      'grouping'              => 'AND',
      /* field_building_floor_room */
      'effect'                => 'show',
      /* field_building_floor_room */
      'effect_options'        => array(),
      /* field_building_floor_room */
      'element_view'          => array(
        /* field_building_floor_room */
        1 => 1,
        /* field_building_floor_room */
        2 => 2,
        /* field_building_floor_room */
        5 => 0,
        /* field_building_floor_room */
        3 => 0,
        /* field_building_floor_room */
        4 => 0,
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'element_view_per_role' => 0,
      /* field_building_floor_room */
      'element_view_roles'    => array(
        /* field_building_floor_room */
        1 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          2 => 2,
          /* field_building_floor_room */
          5 => 0,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
          4 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        2 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          2 => 2,
          /* field_building_floor_room */
          5 => 0,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
          4 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        9 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          2 => 2,
          /* field_building_floor_room */
          5 => 0,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
          4 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'element_edit'          => array(
        /* field_building_floor_room */
        1 => 1,
        /* field_building_floor_room */
        3 => 3,
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'element_edit_per_role' => 0,
      /* field_building_floor_room */
      'element_edit_roles'    => array(
        /* field_building_floor_room */
        1 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        2 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        9 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'selector'              => '',
      /* field_building_floor_room */
      'values_set'            => 1,
      /* field_building_floor_room */
      'value_form'            => 'in_person',
      /* field_building_floor_room */
      'value'                 => array(
        /* field_building_floor_room */
        0 => array(
          /* field_building_floor_room */
          'value' => 'in_person',
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'values'                => array(),
      /* field_building_floor_room */
    ),
    /* field_building_floor_room */
  );

  /* field_building_floor_room */
  $items[] = array(
    /* field_building_floor_room */
    'entity'    => 'node',
    /* field_building_floor_room */
    'bundle'    => 'event',
    /* field_building_floor_room */
    'dependent' => 'field_building_floor_room',
    /* field_building_floor_room */
    'dependee'  => 'field_event_location',
    /* field_building_floor_room */
    'options'   => array(
      /* field_building_floor_room */
      'state'                 => 'visible',
      /* field_building_floor_room */
      'condition'             => 'value',
      /* field_building_floor_room */
      'grouping'              => 'AND',
      /* field_building_floor_room */
      'effect'                => 'show',
      /* field_building_floor_room */
      'effect_options'        => array(),
      /* field_building_floor_room */
      'element_view'          => array(
        /* field_building_floor_room */
        1 => 1,
        /* field_building_floor_room */
        2 => 2,
        /* field_building_floor_room */
        5 => 0,
        /* field_building_floor_room */
        3 => 0,
        /* field_building_floor_room */
        4 => 0,
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'element_view_per_role' => 0,
      /* field_building_floor_room */
      'element_view_roles'    => array(
        /* field_building_floor_room */
        1 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          2 => 2,
          /* field_building_floor_room */
          5 => 0,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
          4 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        2 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          2 => 2,
          /* field_building_floor_room */
          5 => 0,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
          4 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        9 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          2 => 2,
          /* field_building_floor_room */
          5 => 0,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
          4 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'element_edit'          => array(
        /* field_building_floor_room */
        1 => 1,
        /* field_building_floor_room */
        3 => 3,
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'element_edit_per_role' => 0,
      /* field_building_floor_room */
      'element_edit_roles'    => array(
        /* field_building_floor_room */
        1 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        2 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
        9 => array(
          /* field_building_floor_room */
          1 => 1,
          /* field_building_floor_room */
          3 => 0,
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'selector'              => '',
      /* field_building_floor_room */
      'values_set'            => 1,
      /* field_building_floor_room */
      'value_form'            => 'in_person',
      /* field_building_floor_room */
      'value'                 => array(
        /* field_building_floor_room */
        0 => array(
          /* field_building_floor_room */
          'value' => 'in_person',
          /* field_building_floor_room */
        ),
        /* field_building_floor_room */
      ),
      /* field_building_floor_room */
      'values'                => array(),
      /* field_building_floor_room */
    ),
    /* field_building_floor_room */
  );

  /* field_event_address */
  $items[] = array(
    /* field_event_address */
    'entity'    => 'node',
    /* field_event_address */
    'bundle'    => 'event',
    /* field_event_address */
    'dependent' => 'field_event_address',
    /* field_event_address */
    'dependee'  => 'field_event_location',
    /* field_event_address */
    'options'   => array(
      /* field_event_address */
      'state'                 => 'visible',
      /* field_event_address */
      'condition'             => 'value',
      /* field_event_address */
      'grouping'              => 'AND',
      /* field_event_address */
      'effect'                => 'show',
      /* field_event_address */
      'effect_options'        => array(),
      /* field_event_address */
      'element_view'          => array(
        /* field_event_address */
        1 => 1,
        /* field_event_address */
        2 => 2,
        /* field_event_address */
        5 => 0,
        /* field_event_address */
        3 => 0,
        /* field_event_address */
        4 => 0,
        /* field_event_address */
      ),
      /* field_event_address */
      'element_view_per_role' => 0,
      /* field_event_address */
      'element_view_roles'    => array(
        /* field_event_address */
        1 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          2 => 2,
          /* field_event_address */
          5 => 0,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
          4 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        2 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          2 => 2,
          /* field_event_address */
          5 => 0,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
          4 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        9 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          2 => 2,
          /* field_event_address */
          5 => 0,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
          4 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
      ),
      /* field_event_address */
      'element_edit'          => array(
        /* field_event_address */
        1 => 1,
        /* field_event_address */
        3 => 3,
        /* field_event_address */
      ),
      /* field_event_address */
      'element_edit_per_role' => 0,
      /* field_event_address */
      'element_edit_roles'    => array(
        /* field_event_address */
        1 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        2 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        9 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
      ),
      /* field_event_address */
      'selector'              => '',
      /* field_event_address */
      'values_set'            => 1,
      /* field_event_address */
      'value_form'            => 'in_person',
      /* field_event_address */
      'value'                 => array(
        /* field_event_address */
        0 => array(
          /* field_event_address */
          'value' => 'in_person',
          /* field_event_address */
        ),
        /* field_event_address */
      ),
      /* field_event_address */
      'values'                => array(),
      /* field_event_address */
    ),
    /* field_event_address */
  );

  /* field_event_address */
  $items[] = array(
    /* field_event_address */
    'entity'    => 'node',
    /* field_event_address */
    'bundle'    => 'event',
    /* field_event_address */
    'dependent' => 'field_event_address',
    /* field_event_address */
    'dependee'  => 'field_event_location',
    /* field_event_address */
    'options'   => array(
      /* field_event_address */
      'state'                 => 'visible',
      /* field_event_address */
      'condition'             => 'value',
      /* field_event_address */
      'grouping'              => 'AND',
      /* field_event_address */
      'effect'                => 'show',
      /* field_event_address */
      'effect_options'        => array(),
      /* field_event_address */
      'element_view'          => array(
        /* field_event_address */
        1 => 1,
        /* field_event_address */
        2 => 2,
        /* field_event_address */
        5 => 0,
        /* field_event_address */
        3 => 0,
        /* field_event_address */
        4 => 0,
        /* field_event_address */
      ),
      /* field_event_address */
      'element_view_per_role' => 0,
      /* field_event_address */
      'element_view_roles'    => array(
        /* field_event_address */
        1 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          2 => 2,
          /* field_event_address */
          5 => 0,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
          4 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        2 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          2 => 2,
          /* field_event_address */
          5 => 0,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
          4 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        9 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          2 => 2,
          /* field_event_address */
          5 => 0,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
          4 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
      ),
      /* field_event_address */
      'element_edit'          => array(
        /* field_event_address */
        1 => 1,
        /* field_event_address */
        3 => 3,
        /* field_event_address */
      ),
      /* field_event_address */
      'element_edit_per_role' => 0,
      /* field_event_address */
      'element_edit_roles'    => array(
        /* field_event_address */
        1 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        2 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
        9 => array(
          /* field_event_address */
          1 => 1,
          /* field_event_address */
          3 => 0,
          /* field_event_address */
        ),
        /* field_event_address */
      ),
      /* field_event_address */
      'selector'              => '',
      /* field_event_address */
      'values_set'            => 1,
      /* field_event_address */
      'value_form'            => 'in_person',
      /* field_event_address */
      'value'                 => array(
        /* field_event_address */
        0 => array(
          /* field_event_address */
          'value' => 'in_person',
          /* field_event_address */
        ),
        /* field_event_address */
      ),
      /* field_event_address */
      'values'                => array(),
      /* field_event_address */
    ),
    /* field_event_address */
  );

  /* field_event_telephone_number */
  $items[] = array(
    /* field_event_telephone_number */
    'entity'    => 'node',
    /* field_event_telephone_number */
    'bundle'    => 'event',
    /* field_event_telephone_number */
    'dependent' => 'field_event_telephone_number',
    /* field_event_telephone_number */
    'dependee'  => 'field_event_location',
    /* field_event_telephone_number */
    'options'   => array(
      /* field_event_telephone_number */
      'state'                 => 'visible',
      /* field_event_telephone_number */
      'condition'             => 'value',
      /* field_event_telephone_number */
      'grouping'              => 'AND',
      /* field_event_telephone_number */
      'effect'                => 'fade',
      /* field_event_telephone_number */
      'effect_options'        => array(
        /* field_event_telephone_number */
        'speed' => 400,
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_view'          => array(
        /* field_event_telephone_number */
        1 => 1,
        /* field_event_telephone_number */
        2 => 2,
        /* field_event_telephone_number */
        5 => 0,
        /* field_event_telephone_number */
        3 => 0,
        /* field_event_telephone_number */
        4 => 0,
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_view_per_role' => 0,
      /* field_event_telephone_number */
      'element_view_roles'    => array(
        /* field_event_telephone_number */
        1  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        2  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        9  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        10 => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_edit'          => array(
        /* field_event_telephone_number */
        1 => 1,
        /* field_event_telephone_number */
        3 => 3,
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_edit_per_role' => 0,
      /* field_event_telephone_number */
      'element_edit_roles'    => array(
        /* field_event_telephone_number */
        1  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        2  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        9  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        10 => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 3,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'selector'              => '',
      /* field_event_telephone_number */
      'values_set'            => 3,
      /* field_event_telephone_number */
      'value_form'            => '_none',
      /* field_event_telephone_number */
      'values'                => array(
        /* field_event_telephone_number */
        0 => 'online',
        /* field_event_telephone_number */
        1 => 'telephone',
        /* field_event_telephone_number */
        2 => 'adobe_moderated',
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'value'                 => array(),
      /* field_event_telephone_number */
    ),
    /* field_event_telephone_number */
  );

  /* field_event_telephone_number */
  $items[] = array(
    /* field_event_telephone_number */
    'entity'    => 'node',
    /* field_event_telephone_number */
    'bundle'    => 'event',
    /* field_event_telephone_number */
    'dependent' => 'field_event_telephone_number',
    /* field_event_telephone_number */
    'dependee'  => 'field_event_location',
    /* field_event_telephone_number */
    'options'   => array(
      /* field_event_telephone_number */
      'state'                 => 'visible',
      /* field_event_telephone_number */
      'condition'             => 'value',
      /* field_event_telephone_number */
      'grouping'              => 'AND',
      /* field_event_telephone_number */
      'effect'                => 'fade',
      /* field_event_telephone_number */
      'effect_options'        => array(
        /* field_event_telephone_number */
        'speed' => 400,
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_view'          => array(
        /* field_event_telephone_number */
        1 => 1,
        /* field_event_telephone_number */
        2 => 2,
        /* field_event_telephone_number */
        5 => 0,
        /* field_event_telephone_number */
        3 => 0,
        /* field_event_telephone_number */
        4 => 0,
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_view_per_role' => 0,
      /* field_event_telephone_number */
      'element_view_roles'    => array(
        /* field_event_telephone_number */
        1  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        2  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        9  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        10 => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          2 => 2,
          /* field_event_telephone_number */
          5 => 0,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
          4 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_edit'          => array(
        /* field_event_telephone_number */
        1 => 1,
        /* field_event_telephone_number */
        3 => 3,
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'element_edit_per_role' => 0,
      /* field_event_telephone_number */
      'element_edit_roles'    => array(
        /* field_event_telephone_number */
        1  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        2  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        9  => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 0,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
        10 => array(
          /* field_event_telephone_number */
          1 => 1,
          /* field_event_telephone_number */
          3 => 3,
          /* field_event_telephone_number */
        ),
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'selector'              => '',
      /* field_event_telephone_number */
      'values_set'            => 3,
      /* field_event_telephone_number */
      'value_form'            => '_none',
      /* field_event_telephone_number */
      'values'                => array(
        /* field_event_telephone_number */
        0 => 'online',
        /* field_event_telephone_number */
        1 => 'telephone',
        /* field_event_telephone_number */
        2 => 'adobe_moderated',
        /* field_event_telephone_number */
      ),
      /* field_event_telephone_number */
      'value'                 => array(),
      /* field_event_telephone_number */
    ),
    /* field_event_telephone_number */
  );

  /* field_event_telephone_pin */
  $items[] = array(
    /* field_event_telephone_pin */
    'entity'    => 'node',
    /* field_event_telephone_pin */
    'bundle'    => 'event',
    /* field_event_telephone_pin */
    'dependent' => 'field_event_telephone_pin',
    /* field_event_telephone_pin */
    'dependee'  => 'field_event_location',
    /* field_event_telephone_pin */
    'options'   => array(
      /* field_event_telephone_pin */
      'state'                 => 'visible',
      /* field_event_telephone_pin */
      'condition'             => 'value',
      /* field_event_telephone_pin */
      'grouping'              => 'AND',
      /* field_event_telephone_pin */
      'effect'                => 'fade',
      /* field_event_telephone_pin */
      'effect_options'        => array(
        /* field_event_telephone_pin */
        'speed' => 400,
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_view'          => array(
        /* field_event_telephone_pin */
        1 => 1,
        /* field_event_telephone_pin */
        2 => 2,
        /* field_event_telephone_pin */
        5 => 0,
        /* field_event_telephone_pin */
        3 => 0,
        /* field_event_telephone_pin */
        4 => 0,
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_view_per_role' => 0,
      /* field_event_telephone_pin */
      'element_view_roles'    => array(
        /* field_event_telephone_pin */
        1  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        2  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        9  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        10 => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_edit'          => array(
        /* field_event_telephone_pin */
        1 => 1,
        /* field_event_telephone_pin */
        3 => 3,
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_edit_per_role' => 0,
      /* field_event_telephone_pin */
      'element_edit_roles'    => array(
        /* field_event_telephone_pin */
        1  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        2  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        9  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        10 => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 3,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'selector'              => '',
      /* field_event_telephone_pin */
      'values_set'            => 3,
      /* field_event_telephone_pin */
      'value_form'            => '_none',
      /* field_event_telephone_pin */
      'values'                => array(
        /* field_event_telephone_pin */
        0 => 'online',
        /* field_event_telephone_pin */
        1 => 'telephone',
        /* field_event_telephone_pin */
        2 => 'adobe_moderated',
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'value'                 => array(),
      /* field_event_telephone_pin */
    ),
    /* field_event_telephone_pin */
  );

  /* field_event_telephone_pin */
  $items[] = array(
    /* field_event_telephone_pin */
    'entity'    => 'node',
    /* field_event_telephone_pin */
    'bundle'    => 'event',
    /* field_event_telephone_pin */
    'dependent' => 'field_event_telephone_pin',
    /* field_event_telephone_pin */
    'dependee'  => 'field_event_location',
    /* field_event_telephone_pin */
    'options'   => array(
      /* field_event_telephone_pin */
      'state'                 => 'visible',
      /* field_event_telephone_pin */
      'condition'             => 'value',
      /* field_event_telephone_pin */
      'grouping'              => 'AND',
      /* field_event_telephone_pin */
      'effect'                => 'fade',
      /* field_event_telephone_pin */
      'effect_options'        => array(
        /* field_event_telephone_pin */
        'speed' => 400,
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_view'          => array(
        /* field_event_telephone_pin */
        1 => 1,
        /* field_event_telephone_pin */
        2 => 2,
        /* field_event_telephone_pin */
        5 => 0,
        /* field_event_telephone_pin */
        3 => 0,
        /* field_event_telephone_pin */
        4 => 0,
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_view_per_role' => 0,
      /* field_event_telephone_pin */
      'element_view_roles'    => array(
        /* field_event_telephone_pin */
        1  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        2  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        9  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        10 => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          2 => 2,
          /* field_event_telephone_pin */
          5 => 0,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
          4 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_edit'          => array(
        /* field_event_telephone_pin */
        1 => 1,
        /* field_event_telephone_pin */
        3 => 3,
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'element_edit_per_role' => 0,
      /* field_event_telephone_pin */
      'element_edit_roles'    => array(
        /* field_event_telephone_pin */
        1  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        2  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        9  => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 0,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
        10 => array(
          /* field_event_telephone_pin */
          1 => 1,
          /* field_event_telephone_pin */
          3 => 3,
          /* field_event_telephone_pin */
        ),
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'selector'              => '',
      /* field_event_telephone_pin */
      'values_set'            => 3,
      /* field_event_telephone_pin */
      'value_form'            => '_none',
      /* field_event_telephone_pin */
      'values'                => array(
        /* field_event_telephone_pin */
        0 => 'online',
        /* field_event_telephone_pin */
        1 => 'telephone',
        /* field_event_telephone_pin */
        2 => 'adobe_moderated',
        /* field_event_telephone_pin */
      ),
      /* field_event_telephone_pin */
      'value'                 => array(),
      /* field_event_telephone_pin */
    ),
    /* field_event_telephone_pin */
  );

  /* field_location_venue_name */
  $items[] = array(
    /* field_location_venue_name */
    'entity'    => 'node',
    /* field_location_venue_name */
    'bundle'    => 'event',
    /* field_location_venue_name */
    'dependent' => 'field_location_venue_name',
    /* field_location_venue_name */
    'dependee'  => 'field_event_location',
    /* field_location_venue_name */
    'options'   => array(
      /* field_location_venue_name */
      'state'                 => 'visible',
      /* field_location_venue_name */
      'condition'             => 'value',
      /* field_location_venue_name */
      'grouping'              => 'AND',
      /* field_location_venue_name */
      'effect'                => 'show',
      /* field_location_venue_name */
      'effect_options'        => array(),
      /* field_location_venue_name */
      'element_view'          => array(
        /* field_location_venue_name */
        1 => 1,
        /* field_location_venue_name */
        2 => 2,
        /* field_location_venue_name */
        5 => 0,
        /* field_location_venue_name */
        3 => 0,
        /* field_location_venue_name */
        4 => 0,
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'element_view_per_role' => 0,
      /* field_location_venue_name */
      'element_view_roles'    => array(
        /* field_location_venue_name */
        1 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          2 => 2,
          /* field_location_venue_name */
          5 => 0,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
          4 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        2 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          2 => 2,
          /* field_location_venue_name */
          5 => 0,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
          4 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        9 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          2 => 2,
          /* field_location_venue_name */
          5 => 0,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
          4 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'element_edit'          => array(
        /* field_location_venue_name */
        1 => 1,
        /* field_location_venue_name */
        3 => 3,
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'element_edit_per_role' => 0,
      /* field_location_venue_name */
      'element_edit_roles'    => array(
        /* field_location_venue_name */
        1 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        2 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        9 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'selector'              => '',
      /* field_location_venue_name */
      'values_set'            => 1,
      /* field_location_venue_name */
      'value_form'            => 'in_person',
      /* field_location_venue_name */
      'value'                 => array(
        /* field_location_venue_name */
        0 => array(
          /* field_location_venue_name */
          'value' => 'in_person',
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'values'                => array(),
      /* field_location_venue_name */
    ),
    /* field_location_venue_name */
  );

  /* field_location_venue_name */
  $items[] = array(
    /* field_location_venue_name */
    'entity'    => 'node',
    /* field_location_venue_name */
    'bundle'    => 'event',
    /* field_location_venue_name */
    'dependent' => 'field_location_venue_name',
    /* field_location_venue_name */
    'dependee'  => 'field_event_location',
    /* field_location_venue_name */
    'options'   => array(
      /* field_location_venue_name */
      'state'                 => 'visible',
      /* field_location_venue_name */
      'condition'             => 'value',
      /* field_location_venue_name */
      'grouping'              => 'AND',
      /* field_location_venue_name */
      'effect'                => 'show',
      /* field_location_venue_name */
      'effect_options'        => array(),
      /* field_location_venue_name */
      'element_view'          => array(
        /* field_location_venue_name */
        1 => 1,
        /* field_location_venue_name */
        2 => 2,
        /* field_location_venue_name */
        5 => 0,
        /* field_location_venue_name */
        3 => 0,
        /* field_location_venue_name */
        4 => 0,
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'element_view_per_role' => 0,
      /* field_location_venue_name */
      'element_view_roles'    => array(
        /* field_location_venue_name */
        1 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          2 => 2,
          /* field_location_venue_name */
          5 => 0,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
          4 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        2 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          2 => 2,
          /* field_location_venue_name */
          5 => 0,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
          4 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        9 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          2 => 2,
          /* field_location_venue_name */
          5 => 0,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
          4 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'element_edit'          => array(
        /* field_location_venue_name */
        1 => 1,
        /* field_location_venue_name */
        3 => 3,
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'element_edit_per_role' => 0,
      /* field_location_venue_name */
      'element_edit_roles'    => array(
        /* field_location_venue_name */
        1 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        2 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
        9 => array(
          /* field_location_venue_name */
          1 => 1,
          /* field_location_venue_name */
          3 => 0,
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'selector'              => '',
      /* field_location_venue_name */
      'values_set'            => 1,
      /* field_location_venue_name */
      'value_form'            => 'in_person',
      /* field_location_venue_name */
      'value'                 => array(
        /* field_location_venue_name */
        0 => array(
          /* field_location_venue_name */
          'value' => 'in_person',
          /* field_location_venue_name */
        ),
        /* field_location_venue_name */
      ),
      /* field_location_venue_name */
      'values'                => array(),
      /* field_location_venue_name */
    ),
    /* field_location_venue_name */
  );

  /* field_other_location_details */
  $items[] = array(
    /* field_other_location_details */
    'entity'    => 'node',
    /* field_other_location_details */
    'bundle'    => 'event',
    /* field_other_location_details */
    'dependent' => 'field_other_location_details',
    /* field_other_location_details */
    'dependee'  => 'field_event_location',
    /* field_other_location_details */
    'options'   => array(
      /* field_other_location_details */
      'state'                 => 'visible',
      /* field_other_location_details */
      'condition'             => 'value',
      /* field_other_location_details */
      'grouping'              => 'AND',
      /* field_other_location_details */
      'effect'                => 'show',
      /* field_other_location_details */
      'effect_options'        => array(),
      /* field_other_location_details */
      'element_view'          => array(
        /* field_other_location_details */
        1 => 1,
        /* field_other_location_details */
        2 => 2,
        /* field_other_location_details */
        5 => 0,
        /* field_other_location_details */
        3 => 0,
        /* field_other_location_details */
        4 => 0,
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'element_view_per_role' => 0,
      /* field_other_location_details */
      'element_view_roles'    => array(
        /* field_other_location_details */
        1 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          2 => 2,
          /* field_other_location_details */
          5 => 0,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
          4 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        2 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          2 => 2,
          /* field_other_location_details */
          5 => 0,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
          4 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        9 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          2 => 2,
          /* field_other_location_details */
          5 => 0,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
          4 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'element_edit'          => array(
        /* field_other_location_details */
        1 => 1,
        /* field_other_location_details */
        3 => 3,
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'element_edit_per_role' => 0,
      /* field_other_location_details */
      'element_edit_roles'    => array(
        /* field_other_location_details */
        1 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        2 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        9 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'selector'              => '',
      /* field_other_location_details */
      'values_set'            => 1,
      /* field_other_location_details */
      'value_form'            => 'in_person',
      /* field_other_location_details */
      'value'                 => array(
        /* field_other_location_details */
        0 => array(
          /* field_other_location_details */
          'value' => 'in_person',
          /* field_other_location_details */
        ),
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'values'                => array(),
      /* field_other_location_details */
    ),
    /* field_other_location_details */
  );

  /* field_other_location_details */
  $items[] = array(
    /* field_other_location_details */
    'entity'    => 'node',
    /* field_other_location_details */
    'bundle'    => 'event',
    /* field_other_location_details */
    'dependent' => 'field_other_location_details',
    /* field_other_location_details */
    'dependee'  => 'field_event_location',
    /* field_other_location_details */
    'options'   => array(
      /* field_other_location_details */
      'state'                 => 'visible',
      /* field_other_location_details */
      'condition'             => 'value',
      /* field_other_location_details */
      'grouping'              => 'AND',
      /* field_other_location_details */
      'effect'                => 'show',
      /* field_other_location_details */
      'effect_options'        => array(),
      /* field_other_location_details */
      'element_view'          => array(
        /* field_other_location_details */
        1 => 1,
        /* field_other_location_details */
        2 => 2,
        /* field_other_location_details */
        5 => 0,
        /* field_other_location_details */
        3 => 0,
        /* field_other_location_details */
        4 => 0,
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'element_view_per_role' => 0,
      /* field_other_location_details */
      'element_view_roles'    => array(
        /* field_other_location_details */
        1 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          2 => 2,
          /* field_other_location_details */
          5 => 0,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
          4 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        2 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          2 => 2,
          /* field_other_location_details */
          5 => 0,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
          4 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        9 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          2 => 2,
          /* field_other_location_details */
          5 => 0,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
          4 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'element_edit'          => array(
        /* field_other_location_details */
        1 => 1,
        /* field_other_location_details */
        3 => 3,
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'element_edit_per_role' => 0,
      /* field_other_location_details */
      'element_edit_roles'    => array(
        /* field_other_location_details */
        1 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        2 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
        9 => array(
          /* field_other_location_details */
          1 => 1,
          /* field_other_location_details */
          3 => 0,
          /* field_other_location_details */
        ),
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'selector'              => '',
      /* field_other_location_details */
      'values_set'            => 1,
      /* field_other_location_details */
      'value_form'            => 'in_person',
      /* field_other_location_details */
      'value'                 => array(
        /* field_other_location_details */
        0 => array(
          /* field_other_location_details */
          'value' => 'in_person',
          /* field_other_location_details */
        ),
        /* field_other_location_details */
      ),
      /* field_other_location_details */
      'values'                => array(),
      /* field_other_location_details */
    ),
    /* field_other_location_details */
  );

  /* field_web_conference_detail */
  $items[] = array(
    /* field_web_conference_detail */
    'entity'    => 'node',
    /* field_web_conference_detail */
    'bundle'    => 'event',
    /* field_web_conference_detail */
    'dependent' => 'field_web_conference_detail',
    /* field_web_conference_detail */
    'dependee'  => 'field_event_location',
    /* field_web_conference_detail */
    'options'   => array(
      /* field_web_conference_detail */
      'state'                 => 'visible',
      /* field_web_conference_detail */
      'condition'             => 'value',
      /* field_web_conference_detail */
      'grouping'              => 'AND',
      /* field_web_conference_detail */
      'effect'                => 'show',
      /* field_web_conference_detail */
      'effect_options'        => array(),
      /* field_web_conference_detail */
      'element_view'          => array(
        /* field_web_conference_detail */
        1 => 1,
        /* field_web_conference_detail */
        2 => 2,
        /* field_web_conference_detail */
        5 => 0,
        /* field_web_conference_detail */
        3 => 0,
        /* field_web_conference_detail */
        4 => 0,
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'element_view_per_role' => 0,
      /* field_web_conference_detail */
      'element_view_roles'    => array(
        /* field_web_conference_detail */
        1 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          2 => 2,
          /* field_web_conference_detail */
          5 => 0,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
          4 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        2 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          2 => 2,
          /* field_web_conference_detail */
          5 => 0,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
          4 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        9 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          2 => 2,
          /* field_web_conference_detail */
          5 => 0,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
          4 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'element_edit'          => array(
        /* field_web_conference_detail */
        1 => 1,
        /* field_web_conference_detail */
        3 => 3,
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'element_edit_per_role' => 0,
      /* field_web_conference_detail */
      'element_edit_roles'    => array(
        /* field_web_conference_detail */
        1 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        2 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        9 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'selector'              => '',
      /* field_web_conference_detail */
      'values_set'            => 1,
      /* field_web_conference_detail */
      'value_form'            => 'online',
      /* field_web_conference_detail */
      'value'                 => array(
        /* field_web_conference_detail */
        0 => array(
          /* field_web_conference_detail */
          'value' => 'online',
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'values'                => array(),
      /* field_web_conference_detail */
    ),
    /* field_web_conference_detail */
  );

  /* field_web_conference_detail */
  $items[] = array(
    /* field_web_conference_detail */
    'entity'    => 'node',
    /* field_web_conference_detail */
    'bundle'    => 'event',
    /* field_web_conference_detail */
    'dependent' => 'field_web_conference_detail',
    /* field_web_conference_detail */
    'dependee'  => 'field_event_location',
    /* field_web_conference_detail */
    'options'   => array(
      /* field_web_conference_detail */
      'state'                 => 'visible',
      /* field_web_conference_detail */
      'condition'             => 'value',
      /* field_web_conference_detail */
      'grouping'              => 'AND',
      /* field_web_conference_detail */
      'effect'                => 'show',
      /* field_web_conference_detail */
      'effect_options'        => array(),
      /* field_web_conference_detail */
      'element_view'          => array(
        /* field_web_conference_detail */
        1 => 1,
        /* field_web_conference_detail */
        2 => 2,
        /* field_web_conference_detail */
        5 => 0,
        /* field_web_conference_detail */
        3 => 0,
        /* field_web_conference_detail */
        4 => 0,
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'element_view_per_role' => 0,
      /* field_web_conference_detail */
      'element_view_roles'    => array(
        /* field_web_conference_detail */
        1 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          2 => 2,
          /* field_web_conference_detail */
          5 => 0,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
          4 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        2 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          2 => 2,
          /* field_web_conference_detail */
          5 => 0,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
          4 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        9 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          2 => 2,
          /* field_web_conference_detail */
          5 => 0,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
          4 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'element_edit'          => array(
        /* field_web_conference_detail */
        1 => 1,
        /* field_web_conference_detail */
        3 => 3,
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'element_edit_per_role' => 0,
      /* field_web_conference_detail */
      'element_edit_roles'    => array(
        /* field_web_conference_detail */
        1 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        2 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
        9 => array(
          /* field_web_conference_detail */
          1 => 1,
          /* field_web_conference_detail */
          3 => 0,
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'selector'              => '',
      /* field_web_conference_detail */
      'values_set'            => 1,
      /* field_web_conference_detail */
      'value_form'            => 'online',
      /* field_web_conference_detail */
      'value'                 => array(
        /* field_web_conference_detail */
        0 => array(
          /* field_web_conference_detail */
          'value' => 'online',
          /* field_web_conference_detail */
        ),
        /* field_web_conference_detail */
      ),
      /* field_web_conference_detail */
      'values'                => array(),
      /* field_web_conference_detail */
    ),
    /* field_web_conference_detail */
  );

  /* field_notification_recipients */
  $items[] = array(
    /* field_notification_recipients */
    'entity'    => 'node',
    /* field_notification_recipients */
    'bundle'    => 'event',
    /* field_notification_recipients */
    'dependent' => 'field_notification_recipients',
    /* field_notification_recipients */
    'dependee'  => 'field_registration',
    /* field_notification_recipients */
    'options'   => array(
      /* field_notification_recipients */
      'state'                 => 'visible',
      /* field_notification_recipients */
      'condition'             => 'value',
      /* field_notification_recipients */
      'grouping'              => 'AND',
      /* field_notification_recipients */
      'effect'                => 'show',
      /* field_notification_recipients */
      'effect_options'        => array(),
      /* field_notification_recipients */
      'element_view'          => array(
        /* field_notification_recipients */
        1 => 1,
        /* field_notification_recipients */
        2 => 2,
        /* field_notification_recipients */
        5 => 0,
        /* field_notification_recipients */
        3 => 0,
        /* field_notification_recipients */
        4 => 0,
        /* field_notification_recipients */
      ),
      /* field_notification_recipients */
      'element_view_per_role' => 0,
      /* field_notification_recipients */
      'element_view_roles'    => array(
        /* field_notification_recipients */
        1 => array(
          /* field_notification_recipients */
          1 => 1,
          /* field_notification_recipients */
          2 => 2,
          /* field_notification_recipients */
          5 => 0,
          /* field_notification_recipients */
          3 => 0,
          /* field_notification_recipients */
          4 => 0,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
        2 => array(
          /* field_notification_recipients */
          1 => 1,
          /* field_notification_recipients */
          2 => 2,
          /* field_notification_recipients */
          5 => 0,
          /* field_notification_recipients */
          3 => 0,
          /* field_notification_recipients */
          4 => 0,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
        9 => array(
          /* field_notification_recipients */
          1 => 1,
          /* field_notification_recipients */
          2 => 2,
          /* field_notification_recipients */
          5 => 0,
          /* field_notification_recipients */
          3 => 0,
          /* field_notification_recipients */
          4 => 0,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
      ),
      /* field_notification_recipients */
      'element_edit'          => array(
        /* field_notification_recipients */
        1 => 1,
        /* field_notification_recipients */
        3 => 0,
        /* field_notification_recipients */
      ),
      /* field_notification_recipients */
      'element_edit_per_role' => 0,
      /* field_notification_recipients */
      'element_edit_roles'    => array(
        /* field_notification_recipients */
        1 => array(
          /* field_notification_recipients */
          1 => 1,
          /* field_notification_recipients */
          3 => 0,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
        2 => array(
          /* field_notification_recipients */
          1 => 1,
          /* field_notification_recipients */
          3 => 0,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
        9 => array(
          /* field_notification_recipients */
          1 => 1,
          /* field_notification_recipients */
          3 => 0,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
      ),
      /* field_notification_recipients */
      'selector'              => '',
      /* field_notification_recipients */
      'values_set'            => 1,
      /* field_notification_recipients */
      'value_form'            => 1,
      /* field_notification_recipients */
      'value'                 => array(
        /* field_notification_recipients */
        0 => array(
          /* field_notification_recipients */
          'value' => 1,
          /* field_notification_recipients */
        ),
        /* field_notification_recipients */
      ),
      /* field_notification_recipients */
      'values'                => array(),
      /* field_notification_recipients */
    ),
    /* field_notification_recipients */
  );

  /* field_registration_limit */
  $items[] = array(
    /* field_registration_limit */
    'entity'    => 'node',
    /* field_registration_limit */
    'bundle'    => 'event',
    /* field_registration_limit */
    'dependent' => 'field_registration_limit',
    /* field_registration_limit */
    'dependee'  => 'field_registration',
    /* field_registration_limit */
    'options'   => array(
      /* field_registration_limit */
      'state'                 => 'visible',
      /* field_registration_limit */
      'condition'             => 'value',
      /* field_registration_limit */
      'grouping'              => 'AND',
      /* field_registration_limit */
      'effect'                => 'show',
      /* field_registration_limit */
      'effect_options'        => array(),
      /* field_registration_limit */
      'element_view'          => array(
        /* field_registration_limit */
        1 => 1,
        /* field_registration_limit */
        2 => 2,
        /* field_registration_limit */
        5 => 0,
        /* field_registration_limit */
        3 => 0,
        /* field_registration_limit */
        4 => 0,
        /* field_registration_limit */
      ),
      /* field_registration_limit */
      'element_view_per_role' => 0,
      /* field_registration_limit */
      'element_view_roles'    => array(
        /* field_registration_limit */
        1 => array(
          /* field_registration_limit */
          1 => 1,
          /* field_registration_limit */
          2 => 2,
          /* field_registration_limit */
          5 => 0,
          /* field_registration_limit */
          3 => 0,
          /* field_registration_limit */
          4 => 0,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
        2 => array(
          /* field_registration_limit */
          1 => 1,
          /* field_registration_limit */
          2 => 2,
          /* field_registration_limit */
          5 => 0,
          /* field_registration_limit */
          3 => 0,
          /* field_registration_limit */
          4 => 0,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
        9 => array(
          /* field_registration_limit */
          1 => 1,
          /* field_registration_limit */
          2 => 2,
          /* field_registration_limit */
          5 => 0,
          /* field_registration_limit */
          3 => 0,
          /* field_registration_limit */
          4 => 0,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
      ),
      /* field_registration_limit */
      'element_edit'          => array(
        /* field_registration_limit */
        1 => 1,
        /* field_registration_limit */
        3 => 0,
        /* field_registration_limit */
      ),
      /* field_registration_limit */
      'element_edit_per_role' => 0,
      /* field_registration_limit */
      'element_edit_roles'    => array(
        /* field_registration_limit */
        1 => array(
          /* field_registration_limit */
          1 => 1,
          /* field_registration_limit */
          3 => 0,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
        2 => array(
          /* field_registration_limit */
          1 => 1,
          /* field_registration_limit */
          3 => 0,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
        9 => array(
          /* field_registration_limit */
          1 => 1,
          /* field_registration_limit */
          3 => 0,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
      ),
      /* field_registration_limit */
      'selector'              => '',
      /* field_registration_limit */
      'values_set'            => 1,
      /* field_registration_limit */
      'value_form'            => 1,
      /* field_registration_limit */
      'value'                 => array(
        /* field_registration_limit */
        0 => array(
          /* field_registration_limit */
          'value' => 1,
          /* field_registration_limit */
        ),
        /* field_registration_limit */
      ),
      /* field_registration_limit */
      'values'                => array(),
      /* field_registration_limit */
    ),
    /* field_registration_limit */
  );

  /* field_registration_limit_number */
  $items[] = array(
    /* field_registration_limit_number */
    'entity'    => 'node',
    /* field_registration_limit_number */
    'bundle'    => 'event',
    /* field_registration_limit_number */
    'dependent' => 'field_registration_limit_number',
    /* field_registration_limit_number */
    'dependee'  => 'field_registration',
    /* field_registration_limit_number */
    'options'   => array(
      /* field_registration_limit_number */
      'state'                 => 'visible',
      /* field_registration_limit_number */
      'condition'             => 'value',
      /* field_registration_limit_number */
      'grouping'              => 'AND',
      /* field_registration_limit_number */
      'effect'                => 'show',
      /* field_registration_limit_number */
      'effect_options'        => array(),
      /* field_registration_limit_number */
      'element_view'          => array(
        /* field_registration_limit_number */
        1 => 1,
        /* field_registration_limit_number */
        2 => 2,
        /* field_registration_limit_number */
        5 => 0,
        /* field_registration_limit_number */
        3 => 0,
        /* field_registration_limit_number */
        4 => 0,
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'element_view_per_role' => 0,
      /* field_registration_limit_number */
      'element_view_roles'    => array(
        /* field_registration_limit_number */
        1 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          2 => 2,
          /* field_registration_limit_number */
          5 => 0,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
          4 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        2 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          2 => 2,
          /* field_registration_limit_number */
          5 => 0,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
          4 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        9 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          2 => 2,
          /* field_registration_limit_number */
          5 => 0,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
          4 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'element_edit'          => array(
        /* field_registration_limit_number */
        1 => 1,
        /* field_registration_limit_number */
        3 => 0,
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'element_edit_per_role' => 0,
      /* field_registration_limit_number */
      'element_edit_roles'    => array(
        /* field_registration_limit_number */
        1 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        2 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        9 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'selector'              => '',
      /* field_registration_limit_number */
      'values_set'            => 1,
      /* field_registration_limit_number */
      'value_form'            => 1,
      /* field_registration_limit_number */
      'value'                 => array(
        /* field_registration_limit_number */
        0 => array(
          /* field_registration_limit_number */
          'value' => 1,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'values'                => array(),
      /* field_registration_limit_number */
    ),
    /* field_registration_limit_number */
  );

  /* field_registration_limit_number */
  $items[] = array(
    /* field_registration_limit_number */
    'entity'    => 'node',
    /* field_registration_limit_number */
    'bundle'    => 'event',
    /* field_registration_limit_number */
    'dependent' => 'field_registration_limit_number',
    /* field_registration_limit_number */
    'dependee'  => 'field_registration_limit',
    /* field_registration_limit_number */
    'options'   => array(
      /* field_registration_limit_number */
      'state'                 => 'visible',
      /* field_registration_limit_number */
      'condition'             => 'value',
      /* field_registration_limit_number */
      'grouping'              => 'AND',
      /* field_registration_limit_number */
      'effect'                => 'show',
      /* field_registration_limit_number */
      'effect_options'        => array(),
      /* field_registration_limit_number */
      'element_view'          => array(
        /* field_registration_limit_number */
        1 => 1,
        /* field_registration_limit_number */
        2 => 2,
        /* field_registration_limit_number */
        5 => 0,
        /* field_registration_limit_number */
        3 => 0,
        /* field_registration_limit_number */
        4 => 0,
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'element_view_per_role' => 0,
      /* field_registration_limit_number */
      'element_view_roles'    => array(
        /* field_registration_limit_number */
        1 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          2 => 2,
          /* field_registration_limit_number */
          5 => 0,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
          4 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        2 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          2 => 2,
          /* field_registration_limit_number */
          5 => 0,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
          4 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        9 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          2 => 2,
          /* field_registration_limit_number */
          5 => 0,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
          4 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'element_edit'          => array(
        /* field_registration_limit_number */
        1 => 1,
        /* field_registration_limit_number */
        3 => 0,
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'element_edit_per_role' => 0,
      /* field_registration_limit_number */
      'element_edit_roles'    => array(
        /* field_registration_limit_number */
        1 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        2 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
        9 => array(
          /* field_registration_limit_number */
          1 => 1,
          /* field_registration_limit_number */
          3 => 0,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'selector'              => '',
      /* field_registration_limit_number */
      'values_set'            => 1,
      /* field_registration_limit_number */
      'value_form'            => 1,
      /* field_registration_limit_number */
      'value'                 => array(
        /* field_registration_limit_number */
        0 => array(
          /* field_registration_limit_number */
          'value' => 1,
          /* field_registration_limit_number */
        ),
        /* field_registration_limit_number */
      ),
      /* field_registration_limit_number */
      'values'                => array(),
      /* field_registration_limit_number */
    ),
    /* field_registration_limit_number */
  );

  /* field_registration_list_visibili */
  $items[] = array(
    /* field_registration_list_visibili */
    'entity'    => 'node',
    /* field_registration_list_visibili */
    'bundle'    => 'event',
    /* field_registration_list_visibili */
    'dependent' => 'field_registration_list_visibili',
    /* field_registration_list_visibili */
    'dependee'  => 'field_registration',
    /* field_registration_list_visibili */
    'options'   => array(
      /* field_registration_list_visibili */
      'state'                 => 'visible',
      /* field_registration_list_visibili */
      'condition'             => 'value',
      /* field_registration_list_visibili */
      'grouping'              => 'AND',
      /* field_registration_list_visibili */
      'effect'                => 'show',
      /* field_registration_list_visibili */
      'effect_options'        => array(),
      /* field_registration_list_visibili */
      'element_view'          => array(
        /* field_registration_list_visibili */
        1 => 1,
        /* field_registration_list_visibili */
        2 => 2,
        /* field_registration_list_visibili */
        5 => 0,
        /* field_registration_list_visibili */
        3 => 0,
        /* field_registration_list_visibili */
        4 => 0,
        /* field_registration_list_visibili */
      ),
      /* field_registration_list_visibili */
      'element_view_per_role' => 0,
      /* field_registration_list_visibili */
      'element_view_roles'    => array(
        /* field_registration_list_visibili */
        1 => array(
          /* field_registration_list_visibili */
          1 => 1,
          /* field_registration_list_visibili */
          2 => 2,
          /* field_registration_list_visibili */
          5 => 0,
          /* field_registration_list_visibili */
          3 => 0,
          /* field_registration_list_visibili */
          4 => 0,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
        2 => array(
          /* field_registration_list_visibili */
          1 => 1,
          /* field_registration_list_visibili */
          2 => 2,
          /* field_registration_list_visibili */
          5 => 0,
          /* field_registration_list_visibili */
          3 => 0,
          /* field_registration_list_visibili */
          4 => 0,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
        9 => array(
          /* field_registration_list_visibili */
          1 => 1,
          /* field_registration_list_visibili */
          2 => 2,
          /* field_registration_list_visibili */
          5 => 0,
          /* field_registration_list_visibili */
          3 => 0,
          /* field_registration_list_visibili */
          4 => 0,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
      ),
      /* field_registration_list_visibili */
      'element_edit'          => array(
        /* field_registration_list_visibili */
        1 => 1,
        /* field_registration_list_visibili */
        3 => 0,
        /* field_registration_list_visibili */
      ),
      /* field_registration_list_visibili */
      'element_edit_per_role' => 0,
      /* field_registration_list_visibili */
      'element_edit_roles'    => array(
        /* field_registration_list_visibili */
        1 => array(
          /* field_registration_list_visibili */
          1 => 1,
          /* field_registration_list_visibili */
          3 => 0,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
        2 => array(
          /* field_registration_list_visibili */
          1 => 1,
          /* field_registration_list_visibili */
          3 => 0,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
        9 => array(
          /* field_registration_list_visibili */
          1 => 1,
          /* field_registration_list_visibili */
          3 => 0,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
      ),
      /* field_registration_list_visibili */
      'selector'              => '',
      /* field_registration_list_visibili */
      'values_set'            => 1,
      /* field_registration_list_visibili */
      'value_form'            => 1,
      /* field_registration_list_visibili */
      'value'                 => array(
        /* field_registration_list_visibili */
        0 => array(
          /* field_registration_list_visibili */
          'value' => 1,
          /* field_registration_list_visibili */
        ),
        /* field_registration_list_visibili */
      ),
      /* field_registration_list_visibili */
      'values'                => array(),
      /* field_registration_list_visibili */
    ),
    /* field_registration_list_visibili */
  );

  /* field_actual_functionality */
  $items[] = array(
    /* field_actual_functionality */
    'entity'    => 'node',
    /* field_actual_functionality */
    'bundle'    => 'support',
    /* field_actual_functionality */
    'dependent' => 'field_actual_functionality',
    /* field_actual_functionality */
    'dependee'  => 'field_support_category',
    /* field_actual_functionality */
    'options'   => array(
      /* field_actual_functionality */
      'state'                 => 'visible',
      /* field_actual_functionality */
      'condition'             => 'value',
      /* field_actual_functionality */
      'grouping'              => 'AND',
      /* field_actual_functionality */
      'effect'                => 'show',
      /* field_actual_functionality */
      'effect_options'        => array(),
      /* field_actual_functionality */
      'element_view'          => array(
        /* field_actual_functionality */
        1 => 1,
        /* field_actual_functionality */
        2 => 2,
        /* field_actual_functionality */
        5 => 0,
        /* field_actual_functionality */
        3 => 0,
        /* field_actual_functionality */
        4 => 0,
        /* field_actual_functionality */
      ),
      /* field_actual_functionality */
      'element_view_per_role' => 0,
      /* field_actual_functionality */
      'element_view_roles'    => array(
        /* field_actual_functionality */
        1  => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          2 => 2,
          /* field_actual_functionality */
          5 => 0,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
          4 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
        2  => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          2 => 2,
          /* field_actual_functionality */
          5 => 0,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
          4 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
        9  => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          2 => 2,
          /* field_actual_functionality */
          5 => 0,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
          4 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
        10 => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          2 => 2,
          /* field_actual_functionality */
          5 => 0,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
          4 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
      ),
      /* field_actual_functionality */
      'element_edit'          => array(
        /* field_actual_functionality */
        1 => 1,
        /* field_actual_functionality */
        3 => 0,
        /* field_actual_functionality */
      ),
      /* field_actual_functionality */
      'element_edit_per_role' => 0,
      /* field_actual_functionality */
      'element_edit_roles'    => array(
        /* field_actual_functionality */
        1  => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
        2  => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
        9  => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
        10 => array(
          /* field_actual_functionality */
          1 => 1,
          /* field_actual_functionality */
          3 => 0,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
      ),
      /* field_actual_functionality */
      'selector'              => '',
      /* field_actual_functionality */
      'values_set'            => 1,
      /* field_actual_functionality */
      'value_form'            => 6,
      /* field_actual_functionality */
      'value'                 => array(
        /* field_actual_functionality */
        0 => array(
          /* field_actual_functionality */
          'value' => 6,
          /* field_actual_functionality */
        ),
        /* field_actual_functionality */
      ),
      /* field_actual_functionality */
      'values'                => array(),
      /* field_actual_functionality */
    ),
    /* field_actual_functionality */
  );

  /* field_attach_files */
  $items[] = array(
    /* field_attach_files */
    'entity'    => 'node',
    /* field_attach_files */
    'bundle'    => 'support',
    /* field_attach_files */
    'dependent' => 'field_attach_files',
    /* field_attach_files */
    'dependee'  => 'field_support_category',
    /* field_attach_files */
    'options'   => array(
      /* field_attach_files */
      'state'                 => 'visible',
      /* field_attach_files */
      'condition'             => 'value',
      /* field_attach_files */
      'grouping'              => 'AND',
      /* field_attach_files */
      'effect'                => 'show',
      /* field_attach_files */
      'effect_options'        => array(),
      /* field_attach_files */
      'element_view'          => array(
        /* field_attach_files */
        1 => 1,
        /* field_attach_files */
        2 => 2,
        /* field_attach_files */
        5 => 0,
        /* field_attach_files */
        3 => 0,
        /* field_attach_files */
        4 => 0,
        /* field_attach_files */
      ),
      /* field_attach_files */
      'element_view_per_role' => 0,
      /* field_attach_files */
      'element_view_roles'    => array(
        /* field_attach_files */
        1  => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          2 => 2,
          /* field_attach_files */
          5 => 0,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
          4 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
        2  => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          2 => 2,
          /* field_attach_files */
          5 => 0,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
          4 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
        9  => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          2 => 2,
          /* field_attach_files */
          5 => 0,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
          4 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
        10 => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          2 => 2,
          /* field_attach_files */
          5 => 0,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
          4 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
      ),
      /* field_attach_files */
      'element_edit'          => array(
        /* field_attach_files */
        1 => 1,
        /* field_attach_files */
        3 => 0,
        /* field_attach_files */
      ),
      /* field_attach_files */
      'element_edit_per_role' => 0,
      /* field_attach_files */
      'element_edit_roles'    => array(
        /* field_attach_files */
        1  => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
        2  => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
        9  => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
        10 => array(
          /* field_attach_files */
          1 => 1,
          /* field_attach_files */
          3 => 0,
          /* field_attach_files */
        ),
        /* field_attach_files */
      ),
      /* field_attach_files */
      'selector'              => '',
      /* field_attach_files */
      'values_set'            => 1,
      /* field_attach_files */
      'value_form'            => 6,
      /* field_attach_files */
      'value'                 => array(
        /* field_attach_files */
        0 => array(
          /* field_attach_files */
          'value' => 6,
          /* field_attach_files */
        ),
        /* field_attach_files */
      ),
      /* field_attach_files */
      'values'                => array(),
      /* field_attach_files */
    ),
    /* field_attach_files */
  );

  /* field_expected_functionality */
  $items[] = array(
    /* field_expected_functionality */
    'entity'    => 'node',
    /* field_expected_functionality */
    'bundle'    => 'support',
    /* field_expected_functionality */
    'dependent' => 'field_expected_functionality',
    /* field_expected_functionality */
    'dependee'  => 'field_support_category',
    /* field_expected_functionality */
    'options'   => array(
      /* field_expected_functionality */
      'state'                 => 'visible',
      /* field_expected_functionality */
      'condition'             => 'value',
      /* field_expected_functionality */
      'grouping'              => 'AND',
      /* field_expected_functionality */
      'effect'                => 'show',
      /* field_expected_functionality */
      'effect_options'        => array(),
      /* field_expected_functionality */
      'element_view'          => array(
        /* field_expected_functionality */
        1 => 1,
        /* field_expected_functionality */
        2 => 2,
        /* field_expected_functionality */
        5 => 0,
        /* field_expected_functionality */
        3 => 0,
        /* field_expected_functionality */
        4 => 0,
        /* field_expected_functionality */
      ),
      /* field_expected_functionality */
      'element_view_per_role' => 0,
      /* field_expected_functionality */
      'element_view_roles'    => array(
        /* field_expected_functionality */
        1  => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          2 => 2,
          /* field_expected_functionality */
          5 => 0,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
          4 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
        2  => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          2 => 2,
          /* field_expected_functionality */
          5 => 0,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
          4 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
        9  => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          2 => 2,
          /* field_expected_functionality */
          5 => 0,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
          4 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
        10 => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          2 => 2,
          /* field_expected_functionality */
          5 => 0,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
          4 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
      ),
      /* field_expected_functionality */
      'element_edit'          => array(
        /* field_expected_functionality */
        1 => 1,
        /* field_expected_functionality */
        3 => 0,
        /* field_expected_functionality */
      ),
      /* field_expected_functionality */
      'element_edit_per_role' => 0,
      /* field_expected_functionality */
      'element_edit_roles'    => array(
        /* field_expected_functionality */
        1  => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
        2  => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
        9  => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
        10 => array(
          /* field_expected_functionality */
          1 => 1,
          /* field_expected_functionality */
          3 => 0,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
      ),
      /* field_expected_functionality */
      'selector'              => '',
      /* field_expected_functionality */
      'values_set'            => 1,
      /* field_expected_functionality */
      'value_form'            => 6,
      /* field_expected_functionality */
      'value'                 => array(
        /* field_expected_functionality */
        0 => array(
          /* field_expected_functionality */
          'value' => 6,
          /* field_expected_functionality */
        ),
        /* field_expected_functionality */
      ),
      /* field_expected_functionality */
      'values'                => array(),
      /* field_expected_functionality */
    ),
    /* field_expected_functionality */
  );

  return $items;
}
