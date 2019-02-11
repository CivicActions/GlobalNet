<?php
/**
 * @file
 * gn2_og.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function gn2_og_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:course:Content Specialist'.
  $roles['node:course:Content Specialist'] = array(
  /* node:course:Content Specialist */   'gid' => 0,
  /* node:course:Content Specialist */   'group_type' => 'node',
  /* node:course:Content Specialist */   'group_bundle' => 'course',
  /* node:course:Content Specialist */   'name' => 'Content Specialist',
  /* node:course:Content Specialist */ );

  // Exported OG Role: 'node:course:course_presenter'.
  $roles['node:course:course_presenter'] = array(
  /* node:course:course_presenter */   'gid' => 0,
  /* node:course:course_presenter */   'group_type' => 'node',
  /* node:course:course_presenter */   'group_bundle' => 'course',
  /* node:course:course_presenter */   'name' => 'course_presenter',
  /* node:course:course_presenter */ );

  // Exported OG Role: 'node:course:org_manager'.
  $roles['node:course:org_manager'] = array(
  /* node:course:org_manager */   'gid' => 0,
  /* node:course:org_manager */   'group_type' => 'node',
  /* node:course:org_manager */   'group_bundle' => 'course',
  /* node:course:org_manager */   'name' => 'org_manager',
  /* node:course:org_manager */ );

  // Exported OG Role: 'node:course_group:Content Specialist'.
  $roles['node:course_group:Content Specialist'] = array(
  /* node:course_group:Content Specialist */   'gid' => 0,
  /* node:course_group:Content Specialist */   'group_type' => 'node',
  /* node:course_group:Content Specialist */   'group_bundle' => 'course_group',
  /* node:course_group:Content Specialist */   'name' => 'Content Specialist',
  /* node:course_group:Content Specialist */ );

  // Exported OG Role: 'node:course_group:org_manager'.
  $roles['node:course_group:org_manager'] = array(
  /* node:course_group:org_manager */   'gid' => 0,
  /* node:course_group:org_manager */   'group_type' => 'node',
  /* node:course_group:org_manager */   'group_bundle' => 'course_group',
  /* node:course_group:org_manager */   'name' => 'org_manager',
  /* node:course_group:org_manager */ );

  // Exported OG Role: 'node:event:Content Specialist'.
  $roles['node:event:Content Specialist'] = array(
  /* node:event:Content Specialist */   'gid' => 0,
  /* node:event:Content Specialist */   'group_type' => 'node',
  /* node:event:Content Specialist */   'group_bundle' => 'event',
  /* node:event:Content Specialist */   'name' => 'Content Specialist',
  /* node:event:Content Specialist */ );

  // Exported OG Role: 'node:event:org_manager'.
  $roles['node:event:org_manager'] = array(
  /* node:event:org_manager */   'gid' => 0,
  /* node:event:org_manager */   'group_type' => 'node',
  /* node:event:org_manager */   'group_bundle' => 'event',
  /* node:event:org_manager */   'name' => 'org_manager',
  /* node:event:org_manager */ );

  // Exported OG Role: 'node:group:Content Specialist'.
  $roles['node:group:Content Specialist'] = array(
  /* node:group:Content Specialist */   'gid' => 0,
  /* node:group:Content Specialist */   'group_type' => 'node',
  /* node:group:Content Specialist */   'group_bundle' => 'group',
  /* node:group:Content Specialist */   'name' => 'Content Specialist',
  /* node:group:Content Specialist */ );

  // Exported OG Role: 'node:group:org_manager'.
  $roles['node:group:org_manager'] = array(
  /* node:group:org_manager */   'gid' => 0,
  /* node:group:org_manager */   'group_type' => 'node',
  /* node:group:org_manager */   'group_bundle' => 'group',
  /* node:group:org_manager */   'name' => 'org_manager',
  /* node:group:org_manager */ );

  // Exported OG Role: 'node:organization:Content Specialist'.
  $roles['node:organization:Content Specialist'] = array(
  /* node:organization:Content Specialist */   'gid' => 0,
  /* node:organization:Content Specialist */   'group_type' => 'node',
  /* node:organization:Content Specialist */   'group_bundle' => 'organization',
  /* node:organization:Content Specialist */   'name' => 'Content Specialist',
  /* node:organization:Content Specialist */ );

  // Exported OG Role: 'node:organization:PA Specialist'.
  $roles['node:organization:PA Specialist'] = array(
  /* node:organization:PA Specialist */   'gid' => 0,
  /* node:organization:PA Specialist */   'group_type' => 'node',
  /* node:organization:PA Specialist */   'group_bundle' => 'organization',
  /* node:organization:PA Specialist */   'name' => 'PA Specialist',
  /* node:organization:PA Specialist */ );

  // Exported OG Role: 'node:organization:faculty'.
  $roles['node:organization:faculty'] = array(
  /* node:organization:faculty */   'gid' => 0,
  /* node:organization:faculty */   'group_type' => 'node',
  /* node:organization:faculty */   'group_bundle' => 'organization',
  /* node:organization:faculty */   'name' => 'faculty',
  /* node:organization:faculty */ );

  // Exported OG Role: 'node:organization:hr_manager'.
  $roles['node:organization:hr_manager'] = array(
  /* node:organization:hr_manager */   'gid' => 0,
  /* node:organization:hr_manager */   'group_type' => 'node',
  /* node:organization:hr_manager */   'group_bundle' => 'organization',
  /* node:organization:hr_manager */   'name' => 'hr_manager',
  /* node:organization:hr_manager */ );

  // Exported OG Role: 'node:organization:org_manager'.
  $roles['node:organization:org_manager'] = array(
  /* node:organization:org_manager */   'gid' => 0,
  /* node:organization:org_manager */   'group_type' => 'node',
  /* node:organization:org_manager */   'group_bundle' => 'organization',
  /* node:organization:org_manager */   'name' => 'org_manager',
  /* node:organization:org_manager */ );

  // Exported OG Role: 'node:organization:staff'.
  $roles['node:organization:staff'] = array(
  /* node:organization:staff */   'gid' => 0,
  /* node:organization:staff */   'group_type' => 'node',
  /* node:organization:staff */   'group_bundle' => 'organization',
  /* node:organization:staff */   'name' => 'staff',
  /* node:organization:staff */ );

  // Exported OG Role: 'node:program:Content Specialist'.
  $roles['node:program:Content Specialist'] = array(
  /* node:program:Content Specialist */   'gid' => 0,
  /* node:program:Content Specialist */   'group_type' => 'node',
  /* node:program:Content Specialist */   'group_bundle' => 'program',
  /* node:program:Content Specialist */   'name' => 'Content Specialist',
  /* node:program:Content Specialist */ );

  // Exported OG Role: 'node:program:org_manager'.
  $roles['node:program:org_manager'] = array(
  /* node:program:org_manager */   'gid' => 0,
  /* node:program:org_manager */   'group_type' => 'node',
  /* node:program:org_manager */   'group_bundle' => 'program',
  /* node:program:org_manager */   'name' => 'org_manager',
  /* node:program:org_manager */ );

  return $roles;
}
