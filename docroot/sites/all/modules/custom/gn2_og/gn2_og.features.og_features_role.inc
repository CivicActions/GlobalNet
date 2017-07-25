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

  // Exported OG Role: 'node:alumni_group:org_manager'.
  $roles['node:alumni_group:org_manager'] = array(
  /* node:alumni_group:org_manager */   'gid' => 0,
  /* node:alumni_group:org_manager */   'group_type' => 'node',
  /* node:alumni_group:org_manager */   'group_bundle' => 'alumni_group',
  /* node:alumni_group:org_manager */   'name' => 'org_manager',
  /* node:alumni_group:org_manager */ );

  // Exported OG Role: 'node:coi:org_manager'.
  $roles['node:coi:org_manager'] = array(
  /* node:coi:org_manager */   'gid' => 0,
  /* node:coi:org_manager */   'group_type' => 'node',
  /* node:coi:org_manager */   'group_bundle' => 'coi',
  /* node:coi:org_manager */   'name' => 'org_manager',
  /* node:coi:org_manager */ );

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

  // Exported OG Role: 'node:course_group:org_manager'.
  $roles['node:course_group:org_manager'] = array(
  /* node:course_group:org_manager */   'gid' => 0,
  /* node:course_group:org_manager */   'group_type' => 'node',
  /* node:course_group:org_manager */   'group_bundle' => 'course_group',
  /* node:course_group:org_manager */   'name' => 'org_manager',
  /* node:course_group:org_manager */ );

  // Exported OG Role: 'node:event:org_manager'.
  $roles['node:event:org_manager'] = array(
  /* node:event:org_manager */   'gid' => 0,
  /* node:event:org_manager */   'group_type' => 'node',
  /* node:event:org_manager */   'group_bundle' => 'event',
  /* node:event:org_manager */   'name' => 'org_manager',
  /* node:event:org_manager */ );

  // Exported OG Role: 'node:group:org_manager'.
  $roles['node:group:org_manager'] = array(
  /* node:group:org_manager */   'gid' => 0,
  /* node:group:org_manager */   'group_type' => 'node',
  /* node:group:org_manager */   'group_bundle' => 'group',
  /* node:group:org_manager */   'name' => 'org_manager',
  /* node:group:org_manager */ );

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

  // Exported OG Role: 'node:program:org_manager'.
  $roles['node:program:org_manager'] = array(
  /* node:program:org_manager */   'gid' => 0,
  /* node:program:org_manager */   'group_type' => 'node',
  /* node:program:org_manager */   'group_bundle' => 'program',
  /* node:program:org_manager */   'name' => 'org_manager',
  /* node:program:org_manager */ );

  return $roles;
}
