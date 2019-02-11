<?php
/**
 * @file
 * gn2_og.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gn2_og_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:course:add user'
  $permissions['node:course:add user'] = array(
  /* 'node:course:add user' */   'roles' => array(
  /* 'node:course:add user' */     'group_manager' => 'group_manager',
  /* 'node:course:add user' */     'org_manager' => 'org_manager',
  /* 'node:course:add user' */   ),
  /* 'node:course:add user' */ );

  // Exported og permission: 'node:course:administer group'
  $permissions['node:course:administer group'] = array(
  /* 'node:course:administer group' */   'roles' => array(
  /* 'node:course:administer group' */     'group_manager' => 'group_manager',
  /* 'node:course:administer group' */     'org_manager' => 'org_manager',
  /* 'node:course:administer group' */   ),
  /* 'node:course:administer group' */ );

  // Exported og permission: 'node:course:administer og menu'
  $permissions['node:course:administer og menu'] = array(
  /* 'node:course:administer og menu' */   'roles' => array(
  /* 'node:course:administer og menu' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:administer og menu' */     'org_manager' => 'org_manager',
  /* 'node:course:administer og menu' */   ),
  /* 'node:course:administer og menu' */ );

  // Exported og permission: 'node:course:approve and deny subscription'
  $permissions['node:course:approve and deny subscription'] = array(
  /* 'node:course:approve and deny subscription' */   'roles' => array(
  /* 'node:course:approve and deny subscription' */     'group_manager' => 'group_manager',
  /* 'node:course:approve and deny subscription' */     'org_manager' => 'org_manager',
  /* 'node:course:approve and deny subscription' */   ),
  /* 'node:course:approve and deny subscription' */ );

  // Exported og permission: 'node:course:create about_page content'
  $permissions['node:course:create about_page content'] = array(
  /* 'node:course:create about_page content' */   'roles' => array(),
  /* 'node:course:create about_page content' */ );

  // Exported og permission: 'node:course:create announcement content'
  $permissions['node:course:create announcement content'] = array(
  /* 'node:course:create announcement content' */   'roles' => array(
  /* 'node:course:create announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:create announcement content' */     'group_manager' => 'group_manager',
  /* 'node:course:create announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course:create announcement content' */   ),
  /* 'node:course:create announcement content' */ );

  // Exported og permission: 'node:course:create course content'
  $permissions['node:course:create course content'] = array(
  /* 'node:course:create course content' */   'roles' => array(),
  /* 'node:course:create course content' */ );

  // Exported og permission: 'node:course:create course_group content'
  $permissions['node:course:create course_group content'] = array(
  /* 'node:course:create course_group content' */   'roles' => array(
  /* 'node:course:create course_group content' */     'group_manager' => 'group_manager',
  /* 'node:course:create course_group content' */     'org_manager' => 'org_manager',
  /* 'node:course:create course_group content' */   ),
  /* 'node:course:create course_group content' */ );

  // Exported og permission: 'node:course:create event content'
  $permissions['node:course:create event content'] = array(
  /* 'node:course:create event content' */   'roles' => array(
  /* 'node:course:create event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:create event content' */     'group_manager' => 'group_manager',
  /* 'node:course:create event content' */     'org_manager' => 'org_manager',
  /* 'node:course:create event content' */   ),
  /* 'node:course:create event content' */ );

  // Exported og permission: 'node:course:create group content'
  $permissions['node:course:create group content'] = array(
  /* 'node:course:create group content' */   'roles' => array(),
  /* 'node:course:create group content' */ );

  // Exported og permission: 'node:course:create media_gallery content'
  $permissions['node:course:create media_gallery content'] = array(
  /* 'node:course:create media_gallery content' */   'roles' => array(
  /* 'node:course:create media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:create media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:course:create media_gallery content' */     'member' => 'member',
  /* 'node:course:create media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course:create media_gallery content' */   ),
  /* 'node:course:create media_gallery content' */ );

  // Exported og permission: 'node:course:create news content'
  $permissions['node:course:create news content'] = array(
  /* 'node:course:create news content' */   'roles' => array(
  /* 'node:course:create news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:create news content' */   ),
  /* 'node:course:create news content' */ );

  // Exported og permission: 'node:course:create poll content'
  $permissions['node:course:create poll content'] = array(
  /* 'node:course:create poll content' */   'roles' => array(
  /* 'node:course:create poll content' */     'group_manager' => 'group_manager',
  /* 'node:course:create poll content' */     'org_manager' => 'org_manager',
  /* 'node:course:create poll content' */   ),
  /* 'node:course:create poll content' */ );

  // Exported og permission: 'node:course:create post content'
  $permissions['node:course:create post content'] = array(
  /* 'node:course:create post content' */   'roles' => array(
  /* 'node:course:create post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:create post content' */     'group_manager' => 'group_manager',
  /* 'node:course:create post content' */     'member' => 'member',
  /* 'node:course:create post content' */     'org_manager' => 'org_manager',
  /* 'node:course:create post content' */   ),
  /* 'node:course:create post content' */ );

  // Exported og permission: 'node:course:create program content'
  $permissions['node:course:create program content'] = array(
  /* 'node:course:create program content' */   'roles' => array(),
  /* 'node:course:create program content' */ );

  // Exported og permission: 'node:course:create publication content'
  $permissions['node:course:create publication content'] = array(
  /* 'node:course:create publication content' */   'roles' => array(
  /* 'node:course:create publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:create publication content' */     'group_manager' => 'group_manager',
  /* 'node:course:create publication content' */     'org_manager' => 'org_manager',
  /* 'node:course:create publication content' */   ),
  /* 'node:course:create publication content' */ );

  // Exported og permission: 'node:course:delete any about_page content'
  $permissions['node:course:delete any about_page content'] = array(
  /* 'node:course:delete any about_page content' */   'roles' => array(),
  /* 'node:course:delete any about_page content' */ );

  // Exported og permission: 'node:course:delete any announcement content'
  $permissions['node:course:delete any announcement content'] = array(
  /* 'node:course:delete any announcement content' */   'roles' => array(
  /* 'node:course:delete any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any announcement content' */   ),
  /* 'node:course:delete any announcement content' */ );

  // Exported og permission: 'node:course:delete any course content'
  $permissions['node:course:delete any course content'] = array(
  /* 'node:course:delete any course content' */   'roles' => array(),
  /* 'node:course:delete any course content' */ );

  // Exported og permission: 'node:course:delete any course_group content'
  $permissions['node:course:delete any course_group content'] = array(
  /* 'node:course:delete any course_group content' */   'roles' => array(
  /* 'node:course:delete any course_group content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any course_group content' */   ),
  /* 'node:course:delete any course_group content' */ );

  // Exported og permission: 'node:course:delete any event content'
  $permissions['node:course:delete any event content'] = array(
  /* 'node:course:delete any event content' */   'roles' => array(
  /* 'node:course:delete any event content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any event content' */   ),
  /* 'node:course:delete any event content' */ );

  // Exported og permission: 'node:course:delete any group content'
  $permissions['node:course:delete any group content'] = array(
  /* 'node:course:delete any group content' */   'roles' => array(),
  /* 'node:course:delete any group content' */ );

  // Exported og permission: 'node:course:delete any media_gallery content'
  $permissions['node:course:delete any media_gallery content'] = array(
  /* 'node:course:delete any media_gallery content' */   'roles' => array(
  /* 'node:course:delete any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any media_gallery content' */   ),
  /* 'node:course:delete any media_gallery content' */ );

  // Exported og permission: 'node:course:delete any news content'
  $permissions['node:course:delete any news content'] = array(
  /* 'node:course:delete any news content' */   'roles' => array(),
  /* 'node:course:delete any news content' */ );

  // Exported og permission: 'node:course:delete any poll content'
  $permissions['node:course:delete any poll content'] = array(
  /* 'node:course:delete any poll content' */   'roles' => array(
  /* 'node:course:delete any poll content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any poll content' */   ),
  /* 'node:course:delete any poll content' */ );

  // Exported og permission: 'node:course:delete any post content'
  $permissions['node:course:delete any post content'] = array(
  /* 'node:course:delete any post content' */   'roles' => array(
  /* 'node:course:delete any post content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any post content' */   ),
  /* 'node:course:delete any post content' */ );

  // Exported og permission: 'node:course:delete any program content'
  $permissions['node:course:delete any program content'] = array(
  /* 'node:course:delete any program content' */   'roles' => array(),
  /* 'node:course:delete any program content' */ );

  // Exported og permission: 'node:course:delete any publication content'
  $permissions['node:course:delete any publication content'] = array(
  /* 'node:course:delete any publication content' */   'roles' => array(
  /* 'node:course:delete any publication content' */     'group_manager' => 'group_manager',
  /* 'node:course:delete any publication content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete any publication content' */   ),
  /* 'node:course:delete any publication content' */ );

  // Exported og permission: 'node:course:delete og entityform submissions'
  $permissions['node:course:delete og entityform submissions'] = array(
  /* 'node:course:delete og entityform submissions' */   'roles' => array(),
  /* 'node:course:delete og entityform submissions' */ );

  // Exported og permission: 'node:course:delete own about_page content'
  $permissions['node:course:delete own about_page content'] = array(
  /* 'node:course:delete own about_page content' */   'roles' => array(),
  /* 'node:course:delete own about_page content' */ );

  // Exported og permission: 'node:course:delete own announcement content'
  $permissions['node:course:delete own announcement content'] = array(
  /* 'node:course:delete own announcement content' */   'roles' => array(
  /* 'node:course:delete own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:delete own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own announcement content' */   ),
  /* 'node:course:delete own announcement content' */ );

  // Exported og permission: 'node:course:delete own course content'
  $permissions['node:course:delete own course content'] = array(
  /* 'node:course:delete own course content' */   'roles' => array(),
  /* 'node:course:delete own course content' */ );

  // Exported og permission: 'node:course:delete own course_group content'
  $permissions['node:course:delete own course_group content'] = array(
  /* 'node:course:delete own course_group content' */   'roles' => array(
  /* 'node:course:delete own course_group content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own course_group content' */   ),
  /* 'node:course:delete own course_group content' */ );

  // Exported og permission: 'node:course:delete own event content'
  $permissions['node:course:delete own event content'] = array(
  /* 'node:course:delete own event content' */   'roles' => array(
  /* 'node:course:delete own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:delete own event content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own event content' */   ),
  /* 'node:course:delete own event content' */ );

  // Exported og permission: 'node:course:delete own group content'
  $permissions['node:course:delete own group content'] = array(
  /* 'node:course:delete own group content' */   'roles' => array(),
  /* 'node:course:delete own group content' */ );

  // Exported og permission: 'node:course:delete own media_gallery content'
  $permissions['node:course:delete own media_gallery content'] = array(
  /* 'node:course:delete own media_gallery content' */   'roles' => array(
  /* 'node:course:delete own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:delete own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own media_gallery content' */   ),
  /* 'node:course:delete own media_gallery content' */ );

  // Exported og permission: 'node:course:delete own news content'
  $permissions['node:course:delete own news content'] = array(
  /* 'node:course:delete own news content' */   'roles' => array(
  /* 'node:course:delete own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:delete own news content' */   ),
  /* 'node:course:delete own news content' */ );

  // Exported og permission: 'node:course:delete own poll content'
  $permissions['node:course:delete own poll content'] = array(
  /* 'node:course:delete own poll content' */   'roles' => array(
  /* 'node:course:delete own poll content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own poll content' */   ),
  /* 'node:course:delete own poll content' */ );

  // Exported og permission: 'node:course:delete own post content'
  $permissions['node:course:delete own post content'] = array(
  /* 'node:course:delete own post content' */   'roles' => array(
  /* 'node:course:delete own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:delete own post content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own post content' */   ),
  /* 'node:course:delete own post content' */ );

  // Exported og permission: 'node:course:delete own program content'
  $permissions['node:course:delete own program content'] = array(
  /* 'node:course:delete own program content' */   'roles' => array(),
  /* 'node:course:delete own program content' */ );

  // Exported og permission: 'node:course:delete own publication content'
  $permissions['node:course:delete own publication content'] = array(
  /* 'node:course:delete own publication content' */   'roles' => array(
  /* 'node:course:delete own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:delete own publication content' */     'group_manager' => 'group_manager',
  /* 'node:course:delete own publication content' */     'org_manager' => 'org_manager',
  /* 'node:course:delete own publication content' */   ),
  /* 'node:course:delete own publication content' */ );

  // Exported og permission: 'node:course:edit og entityform submissions'
  $permissions['node:course:edit og entityform submissions'] = array(
  /* 'node:course:edit og entityform submissions' */   'roles' => array(
  /* 'node:course:edit og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:course:edit og entityform submissions' */   ),
  /* 'node:course:edit og entityform submissions' */ );

  // Exported og permission: 'node:course:gn2_simple_access_group'
  $permissions['node:course:gn2_simple_access_group'] = array(
  /* 'node:course:gn2_simple_access_group' */   'roles' => array(
  /* 'node:course:gn2_simple_access_group' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:gn2_simple_access_group' */     'group_manager' => 'group_manager',
  /* 'node:course:gn2_simple_access_group' */     'member' => 'member',
  /* 'node:course:gn2_simple_access_group' */     'org_manager' => 'org_manager',
  /* 'node:course:gn2_simple_access_group' */   ),
  /* 'node:course:gn2_simple_access_group' */ );

  // Exported og permission: 'node:course:gn2_simple_access_organization'
  $permissions['node:course:gn2_simple_access_organization'] = array(
  /* 'node:course:gn2_simple_access_organization' */   'roles' => array(
  /* 'node:course:gn2_simple_access_organization' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:gn2_simple_access_organization' */     'group_manager' => 'group_manager',
  /* 'node:course:gn2_simple_access_organization' */     'org_manager' => 'org_manager',
  /* 'node:course:gn2_simple_access_organization' */   ),
  /* 'node:course:gn2_simple_access_organization' */ );

  // Exported og permission: 'node:course:gn2_simple_access_public'
  $permissions['node:course:gn2_simple_access_public'] = array(
  /* 'node:course:gn2_simple_access_public' */   'roles' => array(
  /* 'node:course:gn2_simple_access_public' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:gn2_simple_access_public' */     'org_manager' => 'org_manager',
  /* 'node:course:gn2_simple_access_public' */   ),
  /* 'node:course:gn2_simple_access_public' */ );

  // Exported og permission: 'node:course:gn2_simple_access_sitewide'
  $permissions['node:course:gn2_simple_access_sitewide'] = array(
  /* 'node:course:gn2_simple_access_sitewide' */   'roles' => array(
  /* 'node:course:gn2_simple_access_sitewide' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:gn2_simple_access_sitewide' */     'org_manager' => 'org_manager',
  /* 'node:course:gn2_simple_access_sitewide' */   ),
  /* 'node:course:gn2_simple_access_sitewide' */ );

  // Exported og permission: 'node:course:invite related user'
  $permissions['node:course:invite related user'] = array(
  /* 'node:course:invite related user' */   'roles' => array(),
  /* 'node:course:invite related user' */ );

  // Exported og permission: 'node:course:manage members'
  $permissions['node:course:manage members'] = array(
  /* 'node:course:manage members' */   'roles' => array(
  /* 'node:course:manage members' */     'group_manager' => 'group_manager',
  /* 'node:course:manage members' */     'org_manager' => 'org_manager',
  /* 'node:course:manage members' */   ),
  /* 'node:course:manage members' */ );

  // Exported og permission: 'node:course:manage permissions'
  $permissions['node:course:manage permissions'] = array(
  /* 'node:course:manage permissions' */   'roles' => array(
  /* 'node:course:manage permissions' */     'group_manager' => 'group_manager',
  /* 'node:course:manage permissions' */     'org_manager' => 'org_manager',
  /* 'node:course:manage permissions' */   ),
  /* 'node:course:manage permissions' */ );

  // Exported og permission: 'node:course:manage roles'
  $permissions['node:course:manage roles'] = array(
  /* 'node:course:manage roles' */   'roles' => array(
  /* 'node:course:manage roles' */     'group_manager' => 'group_manager',
  /* 'node:course:manage roles' */     'org_manager' => 'org_manager',
  /* 'node:course:manage roles' */   ),
  /* 'node:course:manage roles' */ );

  // Exported og permission: 'node:course:receive og entityform notifications'
  $permissions['node:course:receive og entityform notifications'] = array(
  /* 'node:course:receive og entityform notifications' */   'roles' => array(
  /* 'node:course:receive og entityform notifications' */     'group_manager' => 'group_manager',
  /* 'node:course:receive og entityform notifications' */     'org_manager' => 'org_manager',
  /* 'node:course:receive og entityform notifications' */   ),
  /* 'node:course:receive og entityform notifications' */ );

  // Exported og permission: 'node:course:subscribe'
  $permissions['node:course:subscribe'] = array(
  /* 'node:course:subscribe' */   'roles' => array(
  /* 'node:course:subscribe' */     'non-member' => 'non-member',
  /* 'node:course:subscribe' */   ),
  /* 'node:course:subscribe' */ );

  // Exported og permission: 'node:course:subscribe without approval'
  $permissions['node:course:subscribe without approval'] = array(
  /* 'node:course:subscribe without approval' */   'roles' => array(
  /* 'node:course:subscribe without approval' */     'non-member' => 'non-member',
  /* 'node:course:subscribe without approval' */   ),
  /* 'node:course:subscribe without approval' */ );

  // Exported og permission: 'node:course:unsubscribe'
  $permissions['node:course:unsubscribe'] = array(
  /* 'node:course:unsubscribe' */   'roles' => array(
  /* 'node:course:unsubscribe' */     'course_presenter' => 'course_presenter',
  /* 'node:course:unsubscribe' */     'member' => 'member',
  /* 'node:course:unsubscribe' */   ),
  /* 'node:course:unsubscribe' */ );

  // Exported og permission: 'node:course:update any about_page content'
  $permissions['node:course:update any about_page content'] = array(
  /* 'node:course:update any about_page content' */   'roles' => array(),
  /* 'node:course:update any about_page content' */ );

  // Exported og permission: 'node:course:update any announcement content'
  $permissions['node:course:update any announcement content'] = array(
  /* 'node:course:update any announcement content' */   'roles' => array(
  /* 'node:course:update any announcement content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any announcement content' */   ),
  /* 'node:course:update any announcement content' */ );

  // Exported og permission: 'node:course:update any course content'
  $permissions['node:course:update any course content'] = array(
  /* 'node:course:update any course content' */   'roles' => array(),
  /* 'node:course:update any course content' */ );

  // Exported og permission: 'node:course:update any course_group content'
  $permissions['node:course:update any course_group content'] = array(
  /* 'node:course:update any course_group content' */   'roles' => array(
  /* 'node:course:update any course_group content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any course_group content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any course_group content' */   ),
  /* 'node:course:update any course_group content' */ );

  // Exported og permission: 'node:course:update any event content'
  $permissions['node:course:update any event content'] = array(
  /* 'node:course:update any event content' */   'roles' => array(
  /* 'node:course:update any event content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any event content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any event content' */   ),
  /* 'node:course:update any event content' */ );

  // Exported og permission: 'node:course:update any group content'
  $permissions['node:course:update any group content'] = array(
  /* 'node:course:update any group content' */   'roles' => array(),
  /* 'node:course:update any group content' */ );

  // Exported og permission: 'node:course:update any media_gallery content'
  $permissions['node:course:update any media_gallery content'] = array(
  /* 'node:course:update any media_gallery content' */   'roles' => array(
  /* 'node:course:update any media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any media_gallery content' */   ),
  /* 'node:course:update any media_gallery content' */ );

  // Exported og permission: 'node:course:update any news content'
  $permissions['node:course:update any news content'] = array(
  /* 'node:course:update any news content' */   'roles' => array(),
  /* 'node:course:update any news content' */ );

  // Exported og permission: 'node:course:update any poll content'
  $permissions['node:course:update any poll content'] = array(
  /* 'node:course:update any poll content' */   'roles' => array(
  /* 'node:course:update any poll content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any poll content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any poll content' */   ),
  /* 'node:course:update any poll content' */ );

  // Exported og permission: 'node:course:update any post content'
  $permissions['node:course:update any post content'] = array(
  /* 'node:course:update any post content' */   'roles' => array(
  /* 'node:course:update any post content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any post content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any post content' */   ),
  /* 'node:course:update any post content' */ );

  // Exported og permission: 'node:course:update any program content'
  $permissions['node:course:update any program content'] = array(
  /* 'node:course:update any program content' */   'roles' => array(),
  /* 'node:course:update any program content' */ );

  // Exported og permission: 'node:course:update any publication content'
  $permissions['node:course:update any publication content'] = array(
  /* 'node:course:update any publication content' */   'roles' => array(
  /* 'node:course:update any publication content' */     'group_manager' => 'group_manager',
  /* 'node:course:update any publication content' */     'org_manager' => 'org_manager',
  /* 'node:course:update any publication content' */   ),
  /* 'node:course:update any publication content' */ );

  // Exported og permission: 'node:course:update group'
  $permissions['node:course:update group'] = array(
  /* 'node:course:update group' */   'roles' => array(
  /* 'node:course:update group' */     'group_manager' => 'group_manager',
  /* 'node:course:update group' */     'org_manager' => 'org_manager',
  /* 'node:course:update group' */   ),
  /* 'node:course:update group' */ );

  // Exported og permission: 'node:course:update own about_page content'
  $permissions['node:course:update own about_page content'] = array(
  /* 'node:course:update own about_page content' */   'roles' => array(),
  /* 'node:course:update own about_page content' */ );

  // Exported og permission: 'node:course:update own announcement content'
  $permissions['node:course:update own announcement content'] = array(
  /* 'node:course:update own announcement content' */   'roles' => array(
  /* 'node:course:update own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:update own announcement content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own announcement content' */   ),
  /* 'node:course:update own announcement content' */ );

  // Exported og permission: 'node:course:update own course content'
  $permissions['node:course:update own course content'] = array(
  /* 'node:course:update own course content' */   'roles' => array(),
  /* 'node:course:update own course content' */ );

  // Exported og permission: 'node:course:update own course_group content'
  $permissions['node:course:update own course_group content'] = array(
  /* 'node:course:update own course_group content' */   'roles' => array(
  /* 'node:course:update own course_group content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own course_group content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own course_group content' */   ),
  /* 'node:course:update own course_group content' */ );

  // Exported og permission: 'node:course:update own event content'
  $permissions['node:course:update own event content'] = array(
  /* 'node:course:update own event content' */   'roles' => array(
  /* 'node:course:update own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:update own event content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own event content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own event content' */   ),
  /* 'node:course:update own event content' */ );

  // Exported og permission: 'node:course:update own group content'
  $permissions['node:course:update own group content'] = array(
  /* 'node:course:update own group content' */   'roles' => array(),
  /* 'node:course:update own group content' */ );

  // Exported og permission: 'node:course:update own media_gallery content'
  $permissions['node:course:update own media_gallery content'] = array(
  /* 'node:course:update own media_gallery content' */   'roles' => array(
  /* 'node:course:update own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:update own media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own media_gallery content' */     'member' => 'member',
  /* 'node:course:update own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own media_gallery content' */   ),
  /* 'node:course:update own media_gallery content' */ );

  // Exported og permission: 'node:course:update own news content'
  $permissions['node:course:update own news content'] = array(
  /* 'node:course:update own news content' */   'roles' => array(
  /* 'node:course:update own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:update own news content' */   ),
  /* 'node:course:update own news content' */ );

  // Exported og permission: 'node:course:update own poll content'
  $permissions['node:course:update own poll content'] = array(
  /* 'node:course:update own poll content' */   'roles' => array(
  /* 'node:course:update own poll content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own poll content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own poll content' */   ),
  /* 'node:course:update own poll content' */ );

  // Exported og permission: 'node:course:update own post content'
  $permissions['node:course:update own post content'] = array(
  /* 'node:course:update own post content' */   'roles' => array(
  /* 'node:course:update own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:update own post content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own post content' */     'member' => 'member',
  /* 'node:course:update own post content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own post content' */   ),
  /* 'node:course:update own post content' */ );

  // Exported og permission: 'node:course:update own program content'
  $permissions['node:course:update own program content'] = array(
  /* 'node:course:update own program content' */   'roles' => array(),
  /* 'node:course:update own program content' */ );

  // Exported og permission: 'node:course:update own publication content'
  $permissions['node:course:update own publication content'] = array(
  /* 'node:course:update own publication content' */   'roles' => array(
  /* 'node:course:update own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course:update own publication content' */     'group_manager' => 'group_manager',
  /* 'node:course:update own publication content' */     'org_manager' => 'org_manager',
  /* 'node:course:update own publication content' */   ),
  /* 'node:course:update own publication content' */ );

  // Exported og permission: 'node:course:user admin'
  $permissions['node:course:user admin'] = array(
  /* 'node:course:user admin' */   'roles' => array(),
  /* 'node:course:user admin' */ );

  // Exported og permission: 'node:course:view og entityform submissions'
  $permissions['node:course:view og entityform submissions'] = array(
  /* 'node:course:view og entityform submissions' */   'roles' => array(
  /* 'node:course:view og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:course:view og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:course:view og entityform submissions' */   ),
  /* 'node:course:view og entityform submissions' */ );

  // Exported og permission: 'node:course:view og entityforms'
  $permissions['node:course:view og entityforms'] = array(
  /* 'node:course:view og entityforms' */   'roles' => array(
  /* 'node:course:view og entityforms' */     'group_manager' => 'group_manager',
  /* 'node:course:view og entityforms' */     'org_manager' => 'org_manager',
  /* 'node:course:view og entityforms' */   ),
  /* 'node:course:view og entityforms' */ );

  // Exported og permission: 'node:course:view og entityforms list'
  $permissions['node:course:view og entityforms list'] = array(
  /* 'node:course:view og entityforms list' */   'roles' => array(
  /* 'node:course:view og entityforms list' */     'group_manager' => 'group_manager',
  /* 'node:course:view og entityforms list' */     'org_manager' => 'org_manager',
  /* 'node:course:view og entityforms list' */   ),
  /* 'node:course:view og entityforms list' */ );

  // Exported og permission: 'node:course:write privatemsg to group'
  $permissions['node:course:write privatemsg to group'] = array(
  /* 'node:course:write privatemsg to group' */   'roles' => array(
  /* 'node:course:write privatemsg to group' */     'group_manager' => 'group_manager',
  /* 'node:course:write privatemsg to group' */     'org_manager' => 'org_manager',
  /* 'node:course:write privatemsg to group' */   ),
  /* 'node:course:write privatemsg to group' */ );

  // Exported og permission: 'node:course_group:add user'
  $permissions['node:course_group:add user'] = array(
  /* 'node:course_group:add user' */   'roles' => array(
  /* 'node:course_group:add user' */     'group_manager' => 'group_manager',
  /* 'node:course_group:add user' */     'org_manager' => 'org_manager',
  /* 'node:course_group:add user' */   ),
  /* 'node:course_group:add user' */ );

  // Exported og permission: 'node:course_group:administer group'
  $permissions['node:course_group:administer group'] = array(
  /* 'node:course_group:administer group' */   'roles' => array(
  /* 'node:course_group:administer group' */     'group_manager' => 'group_manager',
  /* 'node:course_group:administer group' */     'org_manager' => 'org_manager',
  /* 'node:course_group:administer group' */   ),
  /* 'node:course_group:administer group' */ );

  // Exported og permission: 'node:course_group:administer og menu'
  $permissions['node:course_group:administer og menu'] = array(
  /* 'node:course_group:administer og menu' */   'roles' => array(
  /* 'node:course_group:administer og menu' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:administer og menu' */     'org_manager' => 'org_manager',
  /* 'node:course_group:administer og menu' */   ),
  /* 'node:course_group:administer og menu' */ );

  // Exported og permission: 'node:course_group:approve and deny subscription'
  $permissions['node:course_group:approve and deny subscription'] = array(
  /* 'node:course_group:approve and deny subscription' */   'roles' => array(
  /* 'node:course_group:approve and deny subscription' */     'group_manager' => 'group_manager',
  /* 'node:course_group:approve and deny subscription' */     'org_manager' => 'org_manager',
  /* 'node:course_group:approve and deny subscription' */   ),
  /* 'node:course_group:approve and deny subscription' */ );

  // Exported og permission: 'node:course_group:create about_page content'
  $permissions['node:course_group:create about_page content'] = array(
  /* 'node:course_group:create about_page content' */   'roles' => array(),
  /* 'node:course_group:create about_page content' */ );

  // Exported og permission: 'node:course_group:create announcement content'
  $permissions['node:course_group:create announcement content'] = array(
  /* 'node:course_group:create announcement content' */   'roles' => array(
  /* 'node:course_group:create announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:create announcement content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:create announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:create announcement content' */   ),
  /* 'node:course_group:create announcement content' */ );

  // Exported og permission: 'node:course_group:create course content'
  $permissions['node:course_group:create course content'] = array(
  /* 'node:course_group:create course content' */   'roles' => array(),
  /* 'node:course_group:create course content' */ );

  // Exported og permission: 'node:course_group:create course_group content'
  $permissions['node:course_group:create course_group content'] = array(
  /* 'node:course_group:create course_group content' */   'roles' => array(),
  /* 'node:course_group:create course_group content' */ );

  // Exported og permission: 'node:course_group:create event content'
  $permissions['node:course_group:create event content'] = array(
  /* 'node:course_group:create event content' */   'roles' => array(
  /* 'node:course_group:create event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:create event content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:create event content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:create event content' */   ),
  /* 'node:course_group:create event content' */ );

  // Exported og permission: 'node:course_group:create group content'
  $permissions['node:course_group:create group content'] = array(
  /* 'node:course_group:create group content' */   'roles' => array(),
  /* 'node:course_group:create group content' */ );

  // Exported og permission: 'node:course_group:create media_gallery content'
  $permissions['node:course_group:create media_gallery content'] = array(
  /* 'node:course_group:create media_gallery content' */   'roles' => array(
  /* 'node:course_group:create media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:create media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:create media_gallery content' */     'member' => 'member',
  /* 'node:course_group:create media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:create media_gallery content' */   ),
  /* 'node:course_group:create media_gallery content' */ );

  // Exported og permission: 'node:course_group:create news content'
  $permissions['node:course_group:create news content'] = array(
  /* 'node:course_group:create news content' */   'roles' => array(),
  /* 'node:course_group:create news content' */ );

  // Exported og permission: 'node:course_group:create poll content'
  $permissions['node:course_group:create poll content'] = array(
  /* 'node:course_group:create poll content' */   'roles' => array(
  /* 'node:course_group:create poll content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:create poll content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:create poll content' */   ),
  /* 'node:course_group:create poll content' */ );

  // Exported og permission: 'node:course_group:create post content'
  $permissions['node:course_group:create post content'] = array(
  /* 'node:course_group:create post content' */   'roles' => array(
  /* 'node:course_group:create post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:create post content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:create post content' */     'member' => 'member',
  /* 'node:course_group:create post content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:create post content' */   ),
  /* 'node:course_group:create post content' */ );

  // Exported og permission: 'node:course_group:create program content'
  $permissions['node:course_group:create program content'] = array(
  /* 'node:course_group:create program content' */   'roles' => array(),
  /* 'node:course_group:create program content' */ );

  // Exported og permission: 'node:course_group:create publication content'
  $permissions['node:course_group:create publication content'] = array(
  /* 'node:course_group:create publication content' */   'roles' => array(
  /* 'node:course_group:create publication content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:create publication content' */   ),
  /* 'node:course_group:create publication content' */ );

  // Exported og permission: 'node:course_group:delete any about_page content'
  $permissions['node:course_group:delete any about_page content'] = array(
  /* 'node:course_group:delete any about_page content' */   'roles' => array(),
  /* 'node:course_group:delete any about_page content' */ );

  // Exported og permission: 'node:course_group:delete any announcement content'
  $permissions['node:course_group:delete any announcement content'] = array(
  /* 'node:course_group:delete any announcement content' */   'roles' => array(
  /* 'node:course_group:delete any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete any announcement content' */   ),
  /* 'node:course_group:delete any announcement content' */ );

  // Exported og permission: 'node:course_group:delete any course content'
  $permissions['node:course_group:delete any course content'] = array(
  /* 'node:course_group:delete any course content' */   'roles' => array(),
  /* 'node:course_group:delete any course content' */ );

  // Exported og permission: 'node:course_group:delete any course_group content'
  $permissions['node:course_group:delete any course_group content'] = array(
  /* 'node:course_group:delete any course_group content' */   'roles' => array(),
  /* 'node:course_group:delete any course_group content' */ );

  // Exported og permission: 'node:course_group:delete any event content'
  $permissions['node:course_group:delete any event content'] = array(
  /* 'node:course_group:delete any event content' */   'roles' => array(
  /* 'node:course_group:delete any event content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete any event content' */   ),
  /* 'node:course_group:delete any event content' */ );

  // Exported og permission: 'node:course_group:delete any group content'
  $permissions['node:course_group:delete any group content'] = array(
  /* 'node:course_group:delete any group content' */   'roles' => array(),
  /* 'node:course_group:delete any group content' */ );

  // Exported og permission: 'node:course_group:delete any media_gallery content'
  $permissions['node:course_group:delete any media_gallery content'] = array(
  /* 'node:course_group:delete any media_gallery content' */   'roles' => array(
  /* 'node:course_group:delete any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete any media_gallery content' */   ),
  /* 'node:course_group:delete any media_gallery content' */ );

  // Exported og permission: 'node:course_group:delete any news content'
  $permissions['node:course_group:delete any news content'] = array(
  /* 'node:course_group:delete any news content' */   'roles' => array(),
  /* 'node:course_group:delete any news content' */ );

  // Exported og permission: 'node:course_group:delete any poll content'
  $permissions['node:course_group:delete any poll content'] = array(
  /* 'node:course_group:delete any poll content' */   'roles' => array(
  /* 'node:course_group:delete any poll content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete any poll content' */   ),
  /* 'node:course_group:delete any poll content' */ );

  // Exported og permission: 'node:course_group:delete any post content'
  $permissions['node:course_group:delete any post content'] = array(
  /* 'node:course_group:delete any post content' */   'roles' => array(
  /* 'node:course_group:delete any post content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete any post content' */   ),
  /* 'node:course_group:delete any post content' */ );

  // Exported og permission: 'node:course_group:delete any program content'
  $permissions['node:course_group:delete any program content'] = array(
  /* 'node:course_group:delete any program content' */   'roles' => array(),
  /* 'node:course_group:delete any program content' */ );

  // Exported og permission: 'node:course_group:delete any publication content'
  $permissions['node:course_group:delete any publication content'] = array(
  /* 'node:course_group:delete any publication content' */   'roles' => array(
  /* 'node:course_group:delete any publication content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:delete any publication content' */   ),
  /* 'node:course_group:delete any publication content' */ );

  // Exported og permission: 'node:course_group:delete og entityform submissions'
  $permissions['node:course_group:delete og entityform submissions'] = array(
  /* 'node:course_group:delete og entityform submissions' */   'roles' => array(),
  /* 'node:course_group:delete og entityform submissions' */ );

  // Exported og permission: 'node:course_group:delete own about_page content'
  $permissions['node:course_group:delete own about_page content'] = array(
  /* 'node:course_group:delete own about_page content' */   'roles' => array(),
  /* 'node:course_group:delete own about_page content' */ );

  // Exported og permission: 'node:course_group:delete own announcement content'
  $permissions['node:course_group:delete own announcement content'] = array(
  /* 'node:course_group:delete own announcement content' */   'roles' => array(
  /* 'node:course_group:delete own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:delete own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete own announcement content' */   ),
  /* 'node:course_group:delete own announcement content' */ );

  // Exported og permission: 'node:course_group:delete own course content'
  $permissions['node:course_group:delete own course content'] = array(
  /* 'node:course_group:delete own course content' */   'roles' => array(),
  /* 'node:course_group:delete own course content' */ );

  // Exported og permission: 'node:course_group:delete own course_group content'
  $permissions['node:course_group:delete own course_group content'] = array(
  /* 'node:course_group:delete own course_group content' */   'roles' => array(),
  /* 'node:course_group:delete own course_group content' */ );

  // Exported og permission: 'node:course_group:delete own event content'
  $permissions['node:course_group:delete own event content'] = array(
  /* 'node:course_group:delete own event content' */   'roles' => array(
  /* 'node:course_group:delete own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:delete own event content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete own event content' */   ),
  /* 'node:course_group:delete own event content' */ );

  // Exported og permission: 'node:course_group:delete own group content'
  $permissions['node:course_group:delete own group content'] = array(
  /* 'node:course_group:delete own group content' */   'roles' => array(),
  /* 'node:course_group:delete own group content' */ );

  // Exported og permission: 'node:course_group:delete own media_gallery content'
  $permissions['node:course_group:delete own media_gallery content'] = array(
  /* 'node:course_group:delete own media_gallery content' */   'roles' => array(
  /* 'node:course_group:delete own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:delete own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete own media_gallery content' */   ),
  /* 'node:course_group:delete own media_gallery content' */ );

  // Exported og permission: 'node:course_group:delete own news content'
  $permissions['node:course_group:delete own news content'] = array(
  /* 'node:course_group:delete own news content' */   'roles' => array(),
  /* 'node:course_group:delete own news content' */ );

  // Exported og permission: 'node:course_group:delete own poll content'
  $permissions['node:course_group:delete own poll content'] = array(
  /* 'node:course_group:delete own poll content' */   'roles' => array(
  /* 'node:course_group:delete own poll content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete own poll content' */   ),
  /* 'node:course_group:delete own poll content' */ );

  // Exported og permission: 'node:course_group:delete own post content'
  $permissions['node:course_group:delete own post content'] = array(
  /* 'node:course_group:delete own post content' */   'roles' => array(
  /* 'node:course_group:delete own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:delete own post content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:delete own post content' */   ),
  /* 'node:course_group:delete own post content' */ );

  // Exported og permission: 'node:course_group:delete own program content'
  $permissions['node:course_group:delete own program content'] = array(
  /* 'node:course_group:delete own program content' */   'roles' => array(),
  /* 'node:course_group:delete own program content' */ );

  // Exported og permission: 'node:course_group:delete own publication content'
  $permissions['node:course_group:delete own publication content'] = array(
  /* 'node:course_group:delete own publication content' */   'roles' => array(
  /* 'node:course_group:delete own publication content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:delete own publication content' */   ),
  /* 'node:course_group:delete own publication content' */ );

  // Exported og permission: 'node:course_group:edit og entityform submissions'
  $permissions['node:course_group:edit og entityform submissions'] = array(
  /* 'node:course_group:edit og entityform submissions' */   'roles' => array(),
  /* 'node:course_group:edit og entityform submissions' */ );

  // Exported og permission: 'node:course_group:gn2_simple_access_group'
  $permissions['node:course_group:gn2_simple_access_group'] = array(
  /* 'node:course_group:gn2_simple_access_group' */   'roles' => array(
  /* 'node:course_group:gn2_simple_access_group' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:gn2_simple_access_group' */     'group_manager' => 'group_manager',
  /* 'node:course_group:gn2_simple_access_group' */     'member' => 'member',
  /* 'node:course_group:gn2_simple_access_group' */     'org_manager' => 'org_manager',
  /* 'node:course_group:gn2_simple_access_group' */   ),
  /* 'node:course_group:gn2_simple_access_group' */ );

  // Exported og permission: 'node:course_group:gn2_simple_access_organization'
  $permissions['node:course_group:gn2_simple_access_organization'] = array(
  /* 'node:course_group:gn2_simple_access_organization' */   'roles' => array(
  /* 'node:course_group:gn2_simple_access_organization' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:gn2_simple_access_organization' */     'group_manager' => 'group_manager',
  /* 'node:course_group:gn2_simple_access_organization' */     'org_manager' => 'org_manager',
  /* 'node:course_group:gn2_simple_access_organization' */   ),
  /* 'node:course_group:gn2_simple_access_organization' */ );

  // Exported og permission: 'node:course_group:gn2_simple_access_public'
  $permissions['node:course_group:gn2_simple_access_public'] = array(
  /* 'node:course_group:gn2_simple_access_public' */   'roles' => array(
  /* 'node:course_group:gn2_simple_access_public' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:gn2_simple_access_public' */     'org_manager' => 'org_manager',
  /* 'node:course_group:gn2_simple_access_public' */   ),
  /* 'node:course_group:gn2_simple_access_public' */ );

  // Exported og permission: 'node:course_group:gn2_simple_access_sitewide'
  $permissions['node:course_group:gn2_simple_access_sitewide'] = array(
  /* 'node:course_group:gn2_simple_access_sitewide' */   'roles' => array(
  /* 'node:course_group:gn2_simple_access_sitewide' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:gn2_simple_access_sitewide' */     'org_manager' => 'org_manager',
  /* 'node:course_group:gn2_simple_access_sitewide' */   ),
  /* 'node:course_group:gn2_simple_access_sitewide' */ );

  // Exported og permission: 'node:course_group:invite any user'
  $permissions['node:course_group:invite any user'] = array(
  /* 'node:course_group:invite any user' */   'roles' => array(
  /* 'node:course_group:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:course_group:invite any user' */     'org_manager' => 'org_manager',
  /* 'node:course_group:invite any user' */   ),
  /* 'node:course_group:invite any user' */ );

  // Exported og permission: 'node:course_group:invite related user'
  $permissions['node:course_group:invite related user'] = array(
  /* 'node:course_group:invite related user' */   'roles' => array(
  /* 'node:course_group:invite related user' */     'group_manager' => 'group_manager',
  /* 'node:course_group:invite related user' */     'org_manager' => 'org_manager',
  /* 'node:course_group:invite related user' */   ),
  /* 'node:course_group:invite related user' */ );

  // Exported og permission: 'node:course_group:manage members'
  $permissions['node:course_group:manage members'] = array(
  /* 'node:course_group:manage members' */   'roles' => array(
  /* 'node:course_group:manage members' */     'group_manager' => 'group_manager',
  /* 'node:course_group:manage members' */     'org_manager' => 'org_manager',
  /* 'node:course_group:manage members' */   ),
  /* 'node:course_group:manage members' */ );

  // Exported og permission: 'node:course_group:manage permissions'
  $permissions['node:course_group:manage permissions'] = array(
  /* 'node:course_group:manage permissions' */   'roles' => array(
  /* 'node:course_group:manage permissions' */     'group_manager' => 'group_manager',
  /* 'node:course_group:manage permissions' */     'org_manager' => 'org_manager',
  /* 'node:course_group:manage permissions' */   ),
  /* 'node:course_group:manage permissions' */ );

  // Exported og permission: 'node:course_group:manage roles'
  $permissions['node:course_group:manage roles'] = array(
  /* 'node:course_group:manage roles' */   'roles' => array(
  /* 'node:course_group:manage roles' */     'group_manager' => 'group_manager',
  /* 'node:course_group:manage roles' */     'org_manager' => 'org_manager',
  /* 'node:course_group:manage roles' */   ),
  /* 'node:course_group:manage roles' */ );

  // Exported og permission: 'node:course_group:receive og entityform notifications'
  $permissions['node:course_group:receive og entityform notifications'] = array(
  /* 'node:course_group:receive og entityform notifications' */   'roles' => array(
  /* 'node:course_group:receive og entityform notifications' */     'group_manager' => 'group_manager',
  /* 'node:course_group:receive og entityform notifications' */     'org_manager' => 'org_manager',
  /* 'node:course_group:receive og entityform notifications' */   ),
  /* 'node:course_group:receive og entityform notifications' */ );

  // Exported og permission: 'node:course_group:subscribe'
  $permissions['node:course_group:subscribe'] = array(
  /* 'node:course_group:subscribe' */   'roles' => array(
  /* 'node:course_group:subscribe' */     'non-member' => 'non-member',
  /* 'node:course_group:subscribe' */   ),
  /* 'node:course_group:subscribe' */ );

  // Exported og permission: 'node:course_group:subscribe without approval'
  $permissions['node:course_group:subscribe without approval'] = array(
  /* 'node:course_group:subscribe without approval' */   'roles' => array(
  /* 'node:course_group:subscribe without approval' */     'non-member' => 'non-member',
  /* 'node:course_group:subscribe without approval' */   ),
  /* 'node:course_group:subscribe without approval' */ );

  // Exported og permission: 'node:course_group:unsubscribe'
  $permissions['node:course_group:unsubscribe'] = array(
  /* 'node:course_group:unsubscribe' */   'roles' => array(
  /* 'node:course_group:unsubscribe' */     'group_manager' => 'group_manager',
  /* 'node:course_group:unsubscribe' */     'member' => 'member',
  /* 'node:course_group:unsubscribe' */     'org_manager' => 'org_manager',
  /* 'node:course_group:unsubscribe' */   ),
  /* 'node:course_group:unsubscribe' */ );

  // Exported og permission: 'node:course_group:update any about_page content'
  $permissions['node:course_group:update any about_page content'] = array(
  /* 'node:course_group:update any about_page content' */   'roles' => array(),
  /* 'node:course_group:update any about_page content' */ );

  // Exported og permission: 'node:course_group:update any announcement content'
  $permissions['node:course_group:update any announcement content'] = array(
  /* 'node:course_group:update any announcement content' */   'roles' => array(
  /* 'node:course_group:update any announcement content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update any announcement content' */   ),
  /* 'node:course_group:update any announcement content' */ );

  // Exported og permission: 'node:course_group:update any course content'
  $permissions['node:course_group:update any course content'] = array(
  /* 'node:course_group:update any course content' */   'roles' => array(),
  /* 'node:course_group:update any course content' */ );

  // Exported og permission: 'node:course_group:update any course_group content'
  $permissions['node:course_group:update any course_group content'] = array(
  /* 'node:course_group:update any course_group content' */   'roles' => array(),
  /* 'node:course_group:update any course_group content' */ );

  // Exported og permission: 'node:course_group:update any event content'
  $permissions['node:course_group:update any event content'] = array(
  /* 'node:course_group:update any event content' */   'roles' => array(
  /* 'node:course_group:update any event content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update any event content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update any event content' */   ),
  /* 'node:course_group:update any event content' */ );

  // Exported og permission: 'node:course_group:update any group content'
  $permissions['node:course_group:update any group content'] = array(
  /* 'node:course_group:update any group content' */   'roles' => array(),
  /* 'node:course_group:update any group content' */ );

  // Exported og permission: 'node:course_group:update any media_gallery content'
  $permissions['node:course_group:update any media_gallery content'] = array(
  /* 'node:course_group:update any media_gallery content' */   'roles' => array(
  /* 'node:course_group:update any media_gallery content' */     'member' => 'member',
  /* 'node:course_group:update any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update any media_gallery content' */   ),
  /* 'node:course_group:update any media_gallery content' */ );

  // Exported og permission: 'node:course_group:update any news content'
  $permissions['node:course_group:update any news content'] = array(
  /* 'node:course_group:update any news content' */   'roles' => array(),
  /* 'node:course_group:update any news content' */ );

  // Exported og permission: 'node:course_group:update any poll content'
  $permissions['node:course_group:update any poll content'] = array(
  /* 'node:course_group:update any poll content' */   'roles' => array(
  /* 'node:course_group:update any poll content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update any poll content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update any poll content' */   ),
  /* 'node:course_group:update any poll content' */ );

  // Exported og permission: 'node:course_group:update any post content'
  $permissions['node:course_group:update any post content'] = array(
  /* 'node:course_group:update any post content' */   'roles' => array(
  /* 'node:course_group:update any post content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update any post content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update any post content' */   ),
  /* 'node:course_group:update any post content' */ );

  // Exported og permission: 'node:course_group:update any program content'
  $permissions['node:course_group:update any program content'] = array(
  /* 'node:course_group:update any program content' */   'roles' => array(),
  /* 'node:course_group:update any program content' */ );

  // Exported og permission: 'node:course_group:update any publication content'
  $permissions['node:course_group:update any publication content'] = array(
  /* 'node:course_group:update any publication content' */   'roles' => array(
  /* 'node:course_group:update any publication content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update any publication content' */   ),
  /* 'node:course_group:update any publication content' */ );

  // Exported og permission: 'node:course_group:update group'
  $permissions['node:course_group:update group'] = array(
  /* 'node:course_group:update group' */   'roles' => array(
  /* 'node:course_group:update group' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update group' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update group' */   ),
  /* 'node:course_group:update group' */ );

  // Exported og permission: 'node:course_group:update own about_page content'
  $permissions['node:course_group:update own about_page content'] = array(
  /* 'node:course_group:update own about_page content' */   'roles' => array(),
  /* 'node:course_group:update own about_page content' */ );

  // Exported og permission: 'node:course_group:update own announcement content'
  $permissions['node:course_group:update own announcement content'] = array(
  /* 'node:course_group:update own announcement content' */   'roles' => array(
  /* 'node:course_group:update own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:update own announcement content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update own announcement content' */   ),
  /* 'node:course_group:update own announcement content' */ );

  // Exported og permission: 'node:course_group:update own course content'
  $permissions['node:course_group:update own course content'] = array(
  /* 'node:course_group:update own course content' */   'roles' => array(),
  /* 'node:course_group:update own course content' */ );

  // Exported og permission: 'node:course_group:update own course_group content'
  $permissions['node:course_group:update own course_group content'] = array(
  /* 'node:course_group:update own course_group content' */   'roles' => array(),
  /* 'node:course_group:update own course_group content' */ );

  // Exported og permission: 'node:course_group:update own event content'
  $permissions['node:course_group:update own event content'] = array(
  /* 'node:course_group:update own event content' */   'roles' => array(
  /* 'node:course_group:update own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:update own event content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update own event content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update own event content' */   ),
  /* 'node:course_group:update own event content' */ );

  // Exported og permission: 'node:course_group:update own group content'
  $permissions['node:course_group:update own group content'] = array(
  /* 'node:course_group:update own group content' */   'roles' => array(),
  /* 'node:course_group:update own group content' */ );

  // Exported og permission: 'node:course_group:update own media_gallery content'
  $permissions['node:course_group:update own media_gallery content'] = array(
  /* 'node:course_group:update own media_gallery content' */   'roles' => array(
  /* 'node:course_group:update own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:update own media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update own media_gallery content' */     'member' => 'member',
  /* 'node:course_group:update own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update own media_gallery content' */   ),
  /* 'node:course_group:update own media_gallery content' */ );

  // Exported og permission: 'node:course_group:update own news content'
  $permissions['node:course_group:update own news content'] = array(
  /* 'node:course_group:update own news content' */   'roles' => array(),
  /* 'node:course_group:update own news content' */ );

  // Exported og permission: 'node:course_group:update own poll content'
  $permissions['node:course_group:update own poll content'] = array(
  /* 'node:course_group:update own poll content' */   'roles' => array(
  /* 'node:course_group:update own poll content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update own poll content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update own poll content' */   ),
  /* 'node:course_group:update own poll content' */ );

  // Exported og permission: 'node:course_group:update own post content'
  $permissions['node:course_group:update own post content'] = array(
  /* 'node:course_group:update own post content' */   'roles' => array(
  /* 'node:course_group:update own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:course_group:update own post content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update own post content' */     'member' => 'member',
  /* 'node:course_group:update own post content' */     'org_manager' => 'org_manager',
  /* 'node:course_group:update own post content' */   ),
  /* 'node:course_group:update own post content' */ );

  // Exported og permission: 'node:course_group:update own program content'
  $permissions['node:course_group:update own program content'] = array(
  /* 'node:course_group:update own program content' */   'roles' => array(),
  /* 'node:course_group:update own program content' */ );

  // Exported og permission: 'node:course_group:update own publication content'
  $permissions['node:course_group:update own publication content'] = array(
  /* 'node:course_group:update own publication content' */   'roles' => array(
  /* 'node:course_group:update own publication content' */     'group_manager' => 'group_manager',
  /* 'node:course_group:update own publication content' */   ),
  /* 'node:course_group:update own publication content' */ );

  // Exported og permission: 'node:course_group:user admin'
  $permissions['node:course_group:user admin'] = array(
  /* 'node:course_group:user admin' */   'roles' => array(
  /* 'node:course_group:user admin' */     'org_manager' => 'org_manager',
  /* 'node:course_group:user admin' */   ),
  /* 'node:course_group:user admin' */ );

  // Exported og permission: 'node:course_group:view og entityform submissions'
  $permissions['node:course_group:view og entityform submissions'] = array(
  /* 'node:course_group:view og entityform submissions' */   'roles' => array(
  /* 'node:course_group:view og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:course_group:view og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:course_group:view og entityform submissions' */   ),
  /* 'node:course_group:view og entityform submissions' */ );

  // Exported og permission: 'node:course_group:view og entityforms'
  $permissions['node:course_group:view og entityforms'] = array(
  /* 'node:course_group:view og entityforms' */   'roles' => array(
  /* 'node:course_group:view og entityforms' */     'group_manager' => 'group_manager',
  /* 'node:course_group:view og entityforms' */     'org_manager' => 'org_manager',
  /* 'node:course_group:view og entityforms' */   ),
  /* 'node:course_group:view og entityforms' */ );

  // Exported og permission: 'node:course_group:view og entityforms list'
  $permissions['node:course_group:view og entityforms list'] = array(
  /* 'node:course_group:view og entityforms list' */   'roles' => array(
  /* 'node:course_group:view og entityforms list' */     'group_manager' => 'group_manager',
  /* 'node:course_group:view og entityforms list' */     'org_manager' => 'org_manager',
  /* 'node:course_group:view og entityforms list' */   ),
  /* 'node:course_group:view og entityforms list' */ );

  // Exported og permission: 'node:course_group:write privatemsg to group'
  $permissions['node:course_group:write privatemsg to group'] = array(
  /* 'node:course_group:write privatemsg to group' */   'roles' => array(
  /* 'node:course_group:write privatemsg to group' */     'group_manager' => 'group_manager',
  /* 'node:course_group:write privatemsg to group' */     'org_manager' => 'org_manager',
  /* 'node:course_group:write privatemsg to group' */   ),
  /* 'node:course_group:write privatemsg to group' */ );

  // Exported og permission: 'node:event:add user'
  $permissions['node:event:add user'] = array(
  /* 'node:event:add user' */   'roles' => array(
  /* 'node:event:add user' */     'group_manager' => 'group_manager',
  /* 'node:event:add user' */     'org_manager' => 'org_manager',
  /* 'node:event:add user' */   ),
  /* 'node:event:add user' */ );

  // Exported og permission: 'node:event:administer group'
  $permissions['node:event:administer group'] = array(
  /* 'node:event:administer group' */   'roles' => array(
  /* 'node:event:administer group' */     'group_manager' => 'group_manager',
  /* 'node:event:administer group' */     'org_manager' => 'org_manager',
  /* 'node:event:administer group' */   ),
  /* 'node:event:administer group' */ );

  // Exported og permission: 'node:event:administer og menu'
  $permissions['node:event:administer og menu'] = array(
  /* 'node:event:administer og menu' */   'roles' => array(
  /* 'node:event:administer og menu' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:administer og menu' */     'org_manager' => 'org_manager',
  /* 'node:event:administer og menu' */   ),
  /* 'node:event:administer og menu' */ );

  // Exported og permission: 'node:event:approve and deny subscription'
  $permissions['node:event:approve and deny subscription'] = array(
  /* 'node:event:approve and deny subscription' */   'roles' => array(
  /* 'node:event:approve and deny subscription' */     'group_manager' => 'group_manager',
  /* 'node:event:approve and deny subscription' */     'org_manager' => 'org_manager',
  /* 'node:event:approve and deny subscription' */   ),
  /* 'node:event:approve and deny subscription' */ );

  // Exported og permission: 'node:event:create about_page content'
  $permissions['node:event:create about_page content'] = array(
  /* 'node:event:create about_page content' */   'roles' => array(
  /* 'node:event:create about_page content' */     'group_manager' => 'group_manager',
  /* 'node:event:create about_page content' */     'org_manager' => 'org_manager',
  /* 'node:event:create about_page content' */   ),
  /* 'node:event:create about_page content' */ );

  // Exported og permission: 'node:event:create announcement content'
  $permissions['node:event:create announcement content'] = array(
  /* 'node:event:create announcement content' */   'roles' => array(
  /* 'node:event:create announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:create announcement content' */     'group_manager' => 'group_manager',
  /* 'node:event:create announcement content' */     'org_manager' => 'org_manager',
  /* 'node:event:create announcement content' */   ),
  /* 'node:event:create announcement content' */ );

  // Exported og permission: 'node:event:create course content'
  $permissions['node:event:create course content'] = array(
  /* 'node:event:create course content' */   'roles' => array(
  /* 'node:event:create course content' */     'group_manager' => 'group_manager',
  /* 'node:event:create course content' */     'org_manager' => 'org_manager',
  /* 'node:event:create course content' */   ),
  /* 'node:event:create course content' */ );

  // Exported og permission: 'node:event:create course_group content'
  $permissions['node:event:create course_group content'] = array(
  /* 'node:event:create course_group content' */   'roles' => array(),
  /* 'node:event:create course_group content' */ );

  // Exported og permission: 'node:event:create event content'
  $permissions['node:event:create event content'] = array(
  /* 'node:event:create event content' */   'roles' => array(
  /* 'node:event:create event content' */     'group_manager' => 'group_manager',
  /* 'node:event:create event content' */     'org_manager' => 'org_manager',
  /* 'node:event:create event content' */   ),
  /* 'node:event:create event content' */ );

  // Exported og permission: 'node:event:create group content'
  $permissions['node:event:create group content'] = array(
  /* 'node:event:create group content' */   'roles' => array(
  /* 'node:event:create group content' */     'group_manager' => 'group_manager',
  /* 'node:event:create group content' */     'org_manager' => 'org_manager',
  /* 'node:event:create group content' */   ),
  /* 'node:event:create group content' */ );

  // Exported og permission: 'node:event:create media_gallery content'
  $permissions['node:event:create media_gallery content'] = array(
  /* 'node:event:create media_gallery content' */   'roles' => array(
  /* 'node:event:create media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:create media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:event:create media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:event:create media_gallery content' */   ),
  /* 'node:event:create media_gallery content' */ );

  // Exported og permission: 'node:event:create news content'
  $permissions['node:event:create news content'] = array(
  /* 'node:event:create news content' */   'roles' => array(
  /* 'node:event:create news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:create news content' */     'org_manager' => 'org_manager',
  /* 'node:event:create news content' */   ),
  /* 'node:event:create news content' */ );

  // Exported og permission: 'node:event:create poll content'
  $permissions['node:event:create poll content'] = array(
  /* 'node:event:create poll content' */   'roles' => array(
  /* 'node:event:create poll content' */     'group_manager' => 'group_manager',
  /* 'node:event:create poll content' */     'org_manager' => 'org_manager',
  /* 'node:event:create poll content' */   ),
  /* 'node:event:create poll content' */ );

  // Exported og permission: 'node:event:create post content'
  $permissions['node:event:create post content'] = array(
  /* 'node:event:create post content' */   'roles' => array(
  /* 'node:event:create post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:create post content' */     'group_manager' => 'group_manager',
  /* 'node:event:create post content' */     'org_manager' => 'org_manager',
  /* 'node:event:create post content' */   ),
  /* 'node:event:create post content' */ );

  // Exported og permission: 'node:event:create program content'
  $permissions['node:event:create program content'] = array(
  /* 'node:event:create program content' */   'roles' => array(
  /* 'node:event:create program content' */     'group_manager' => 'group_manager',
  /* 'node:event:create program content' */     'org_manager' => 'org_manager',
  /* 'node:event:create program content' */   ),
  /* 'node:event:create program content' */ );

  // Exported og permission: 'node:event:create publication content'
  $permissions['node:event:create publication content'] = array(
  /* 'node:event:create publication content' */   'roles' => array(
  /* 'node:event:create publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:create publication content' */     'group_manager' => 'group_manager',
  /* 'node:event:create publication content' */     'org_manager' => 'org_manager',
  /* 'node:event:create publication content' */   ),
  /* 'node:event:create publication content' */ );

  // Exported og permission: 'node:event:delete any about_page content'
  $permissions['node:event:delete any about_page content'] = array(
  /* 'node:event:delete any about_page content' */   'roles' => array(
  /* 'node:event:delete any about_page content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any about_page content' */   ),
  /* 'node:event:delete any about_page content' */ );

  // Exported og permission: 'node:event:delete any announcement content'
  $permissions['node:event:delete any announcement content'] = array(
  /* 'node:event:delete any announcement content' */   'roles' => array(
  /* 'node:event:delete any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any announcement content' */   ),
  /* 'node:event:delete any announcement content' */ );

  // Exported og permission: 'node:event:delete any course content'
  $permissions['node:event:delete any course content'] = array(
  /* 'node:event:delete any course content' */   'roles' => array(
  /* 'node:event:delete any course content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any course content' */   ),
  /* 'node:event:delete any course content' */ );

  // Exported og permission: 'node:event:delete any course_group content'
  $permissions['node:event:delete any course_group content'] = array(
  /* 'node:event:delete any course_group content' */   'roles' => array(),
  /* 'node:event:delete any course_group content' */ );

  // Exported og permission: 'node:event:delete any event content'
  $permissions['node:event:delete any event content'] = array(
  /* 'node:event:delete any event content' */   'roles' => array(
  /* 'node:event:delete any event content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any event content' */   ),
  /* 'node:event:delete any event content' */ );

  // Exported og permission: 'node:event:delete any group content'
  $permissions['node:event:delete any group content'] = array(
  /* 'node:event:delete any group content' */   'roles' => array(
  /* 'node:event:delete any group content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any group content' */   ),
  /* 'node:event:delete any group content' */ );

  // Exported og permission: 'node:event:delete any media_gallery content'
  $permissions['node:event:delete any media_gallery content'] = array(
  /* 'node:event:delete any media_gallery content' */   'roles' => array(
  /* 'node:event:delete any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any media_gallery content' */   ),
  /* 'node:event:delete any media_gallery content' */ );

  // Exported og permission: 'node:event:delete any news content'
  $permissions['node:event:delete any news content'] = array(
  /* 'node:event:delete any news content' */   'roles' => array(
  /* 'node:event:delete any news content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any news content' */   ),
  /* 'node:event:delete any news content' */ );

  // Exported og permission: 'node:event:delete any poll content'
  $permissions['node:event:delete any poll content'] = array(
  /* 'node:event:delete any poll content' */   'roles' => array(
  /* 'node:event:delete any poll content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any poll content' */   ),
  /* 'node:event:delete any poll content' */ );

  // Exported og permission: 'node:event:delete any post content'
  $permissions['node:event:delete any post content'] = array(
  /* 'node:event:delete any post content' */   'roles' => array(
  /* 'node:event:delete any post content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any post content' */   ),
  /* 'node:event:delete any post content' */ );

  // Exported og permission: 'node:event:delete any program content'
  $permissions['node:event:delete any program content'] = array(
  /* 'node:event:delete any program content' */   'roles' => array(
  /* 'node:event:delete any program content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any program content' */   ),
  /* 'node:event:delete any program content' */ );

  // Exported og permission: 'node:event:delete any publication content'
  $permissions['node:event:delete any publication content'] = array(
  /* 'node:event:delete any publication content' */   'roles' => array(
  /* 'node:event:delete any publication content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete any publication content' */   ),
  /* 'node:event:delete any publication content' */ );

  // Exported og permission: 'node:event:delete og entityform submissions'
  $permissions['node:event:delete og entityform submissions'] = array(
  /* 'node:event:delete og entityform submissions' */   'roles' => array(),
  /* 'node:event:delete og entityform submissions' */ );

  // Exported og permission: 'node:event:delete own about_page content'
  $permissions['node:event:delete own about_page content'] = array(
  /* 'node:event:delete own about_page content' */   'roles' => array(
  /* 'node:event:delete own about_page content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own about_page content' */   ),
  /* 'node:event:delete own about_page content' */ );

  // Exported og permission: 'node:event:delete own announcement content'
  $permissions['node:event:delete own announcement content'] = array(
  /* 'node:event:delete own announcement content' */   'roles' => array(
  /* 'node:event:delete own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:delete own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own announcement content' */   ),
  /* 'node:event:delete own announcement content' */ );

  // Exported og permission: 'node:event:delete own course content'
  $permissions['node:event:delete own course content'] = array(
  /* 'node:event:delete own course content' */   'roles' => array(
  /* 'node:event:delete own course content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own course content' */   ),
  /* 'node:event:delete own course content' */ );

  // Exported og permission: 'node:event:delete own course_group content'
  $permissions['node:event:delete own course_group content'] = array(
  /* 'node:event:delete own course_group content' */   'roles' => array(),
  /* 'node:event:delete own course_group content' */ );

  // Exported og permission: 'node:event:delete own event content'
  $permissions['node:event:delete own event content'] = array(
  /* 'node:event:delete own event content' */   'roles' => array(
  /* 'node:event:delete own event content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own event content' */   ),
  /* 'node:event:delete own event content' */ );

  // Exported og permission: 'node:event:delete own group content'
  $permissions['node:event:delete own group content'] = array(
  /* 'node:event:delete own group content' */   'roles' => array(
  /* 'node:event:delete own group content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own group content' */   ),
  /* 'node:event:delete own group content' */ );

  // Exported og permission: 'node:event:delete own media_gallery content'
  $permissions['node:event:delete own media_gallery content'] = array(
  /* 'node:event:delete own media_gallery content' */   'roles' => array(
  /* 'node:event:delete own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:delete own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own media_gallery content' */   ),
  /* 'node:event:delete own media_gallery content' */ );

  // Exported og permission: 'node:event:delete own news content'
  $permissions['node:event:delete own news content'] = array(
  /* 'node:event:delete own news content' */   'roles' => array(
  /* 'node:event:delete own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:delete own news content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own news content' */   ),
  /* 'node:event:delete own news content' */ );

  // Exported og permission: 'node:event:delete own poll content'
  $permissions['node:event:delete own poll content'] = array(
  /* 'node:event:delete own poll content' */   'roles' => array(
  /* 'node:event:delete own poll content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own poll content' */   ),
  /* 'node:event:delete own poll content' */ );

  // Exported og permission: 'node:event:delete own post content'
  $permissions['node:event:delete own post content'] = array(
  /* 'node:event:delete own post content' */   'roles' => array(
  /* 'node:event:delete own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:delete own post content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own post content' */   ),
  /* 'node:event:delete own post content' */ );

  // Exported og permission: 'node:event:delete own program content'
  $permissions['node:event:delete own program content'] = array(
  /* 'node:event:delete own program content' */   'roles' => array(
  /* 'node:event:delete own program content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own program content' */   ),
  /* 'node:event:delete own program content' */ );

  // Exported og permission: 'node:event:delete own publication content'
  $permissions['node:event:delete own publication content'] = array(
  /* 'node:event:delete own publication content' */   'roles' => array(
  /* 'node:event:delete own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:delete own publication content' */     'org_manager' => 'org_manager',
  /* 'node:event:delete own publication content' */   ),
  /* 'node:event:delete own publication content' */ );

  // Exported og permission: 'node:event:edit og entityform submissions'
  $permissions['node:event:edit og entityform submissions'] = array(
  /* 'node:event:edit og entityform submissions' */   'roles' => array(
  /* 'node:event:edit og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:event:edit og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:event:edit og entityform submissions' */   ),
  /* 'node:event:edit og entityform submissions' */ );

  // Exported og permission: 'node:event:gn2_simple_access_group'
  $permissions['node:event:gn2_simple_access_group'] = array(
  /* 'node:event:gn2_simple_access_group' */   'roles' => array(
  /* 'node:event:gn2_simple_access_group' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:gn2_simple_access_group' */     'group_manager' => 'group_manager',
  /* 'node:event:gn2_simple_access_group' */     'org_manager' => 'org_manager',
  /* 'node:event:gn2_simple_access_group' */   ),
  /* 'node:event:gn2_simple_access_group' */ );

  // Exported og permission: 'node:event:gn2_simple_access_organization'
  $permissions['node:event:gn2_simple_access_organization'] = array(
  /* 'node:event:gn2_simple_access_organization' */   'roles' => array(
  /* 'node:event:gn2_simple_access_organization' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:gn2_simple_access_organization' */     'group_manager' => 'group_manager',
  /* 'node:event:gn2_simple_access_organization' */     'org_manager' => 'org_manager',
  /* 'node:event:gn2_simple_access_organization' */   ),
  /* 'node:event:gn2_simple_access_organization' */ );

  // Exported og permission: 'node:event:gn2_simple_access_public'
  $permissions['node:event:gn2_simple_access_public'] = array(
  /* 'node:event:gn2_simple_access_public' */   'roles' => array(
  /* 'node:event:gn2_simple_access_public' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:gn2_simple_access_public' */     'org_manager' => 'org_manager',
  /* 'node:event:gn2_simple_access_public' */   ),
  /* 'node:event:gn2_simple_access_public' */ );

  // Exported og permission: 'node:event:gn2_simple_access_sitewide'
  $permissions['node:event:gn2_simple_access_sitewide'] = array(
  /* 'node:event:gn2_simple_access_sitewide' */   'roles' => array(
  /* 'node:event:gn2_simple_access_sitewide' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:gn2_simple_access_sitewide' */     'org_manager' => 'org_manager',
  /* 'node:event:gn2_simple_access_sitewide' */   ),
  /* 'node:event:gn2_simple_access_sitewide' */ );

  // Exported og permission: 'node:event:invite related user'
  $permissions['node:event:invite related user'] = array(
  /* 'node:event:invite related user' */   'roles' => array(),
  /* 'node:event:invite related user' */ );

  // Exported og permission: 'node:event:manage members'
  $permissions['node:event:manage members'] = array(
  /* 'node:event:manage members' */   'roles' => array(
  /* 'node:event:manage members' */     'group_manager' => 'group_manager',
  /* 'node:event:manage members' */     'org_manager' => 'org_manager',
  /* 'node:event:manage members' */   ),
  /* 'node:event:manage members' */ );

  // Exported og permission: 'node:event:manage permissions'
  $permissions['node:event:manage permissions'] = array(
  /* 'node:event:manage permissions' */   'roles' => array(
  /* 'node:event:manage permissions' */     'group_manager' => 'group_manager',
  /* 'node:event:manage permissions' */     'org_manager' => 'org_manager',
  /* 'node:event:manage permissions' */   ),
  /* 'node:event:manage permissions' */ );

  // Exported og permission: 'node:event:manage roles'
  $permissions['node:event:manage roles'] = array(
  /* 'node:event:manage roles' */   'roles' => array(
  /* 'node:event:manage roles' */     'group_manager' => 'group_manager',
  /* 'node:event:manage roles' */     'org_manager' => 'org_manager',
  /* 'node:event:manage roles' */   ),
  /* 'node:event:manage roles' */ );

  // Exported og permission: 'node:event:receive og entityform notifications'
  $permissions['node:event:receive og entityform notifications'] = array(
  /* 'node:event:receive og entityform notifications' */   'roles' => array(
  /* 'node:event:receive og entityform notifications' */     'group_manager' => 'group_manager',
  /* 'node:event:receive og entityform notifications' */     'org_manager' => 'org_manager',
  /* 'node:event:receive og entityform notifications' */   ),
  /* 'node:event:receive og entityform notifications' */ );

  // Exported og permission: 'node:event:subscribe'
  $permissions['node:event:subscribe'] = array(
  /* 'node:event:subscribe' */   'roles' => array(
  /* 'node:event:subscribe' */     'non-member' => 'non-member',
  /* 'node:event:subscribe' */   ),
  /* 'node:event:subscribe' */ );

  // Exported og permission: 'node:event:subscribe without approval'
  $permissions['node:event:subscribe without approval'] = array(
  /* 'node:event:subscribe without approval' */   'roles' => array(
  /* 'node:event:subscribe without approval' */     'non-member' => 'non-member',
  /* 'node:event:subscribe without approval' */   ),
  /* 'node:event:subscribe without approval' */ );

  // Exported og permission: 'node:event:unsubscribe'
  $permissions['node:event:unsubscribe'] = array(
  /* 'node:event:unsubscribe' */   'roles' => array(
  /* 'node:event:unsubscribe' */     'member' => 'member',
  /* 'node:event:unsubscribe' */   ),
  /* 'node:event:unsubscribe' */ );

  // Exported og permission: 'node:event:update any about_page content'
  $permissions['node:event:update any about_page content'] = array(
  /* 'node:event:update any about_page content' */   'roles' => array(
  /* 'node:event:update any about_page content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any about_page content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any about_page content' */   ),
  /* 'node:event:update any about_page content' */ );

  // Exported og permission: 'node:event:update any announcement content'
  $permissions['node:event:update any announcement content'] = array(
  /* 'node:event:update any announcement content' */   'roles' => array(
  /* 'node:event:update any announcement content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any announcement content' */   ),
  /* 'node:event:update any announcement content' */ );

  // Exported og permission: 'node:event:update any course content'
  $permissions['node:event:update any course content'] = array(
  /* 'node:event:update any course content' */   'roles' => array(
  /* 'node:event:update any course content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any course content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any course content' */   ),
  /* 'node:event:update any course content' */ );

  // Exported og permission: 'node:event:update any course_group content'
  $permissions['node:event:update any course_group content'] = array(
  /* 'node:event:update any course_group content' */   'roles' => array(),
  /* 'node:event:update any course_group content' */ );

  // Exported og permission: 'node:event:update any event content'
  $permissions['node:event:update any event content'] = array(
  /* 'node:event:update any event content' */   'roles' => array(
  /* 'node:event:update any event content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any event content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any event content' */   ),
  /* 'node:event:update any event content' */ );

  // Exported og permission: 'node:event:update any group content'
  $permissions['node:event:update any group content'] = array(
  /* 'node:event:update any group content' */   'roles' => array(
  /* 'node:event:update any group content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any group content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any group content' */   ),
  /* 'node:event:update any group content' */ );

  // Exported og permission: 'node:event:update any media_gallery content'
  $permissions['node:event:update any media_gallery content'] = array(
  /* 'node:event:update any media_gallery content' */   'roles' => array(
  /* 'node:event:update any media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any media_gallery content' */   ),
  /* 'node:event:update any media_gallery content' */ );

  // Exported og permission: 'node:event:update any news content'
  $permissions['node:event:update any news content'] = array(
  /* 'node:event:update any news content' */   'roles' => array(
  /* 'node:event:update any news content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any news content' */   ),
  /* 'node:event:update any news content' */ );

  // Exported og permission: 'node:event:update any poll content'
  $permissions['node:event:update any poll content'] = array(
  /* 'node:event:update any poll content' */   'roles' => array(
  /* 'node:event:update any poll content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any poll content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any poll content' */   ),
  /* 'node:event:update any poll content' */ );

  // Exported og permission: 'node:event:update any post content'
  $permissions['node:event:update any post content'] = array(
  /* 'node:event:update any post content' */   'roles' => array(
  /* 'node:event:update any post content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any post content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any post content' */   ),
  /* 'node:event:update any post content' */ );

  // Exported og permission: 'node:event:update any program content'
  $permissions['node:event:update any program content'] = array(
  /* 'node:event:update any program content' */   'roles' => array(
  /* 'node:event:update any program content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any program content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any program content' */   ),
  /* 'node:event:update any program content' */ );

  // Exported og permission: 'node:event:update any publication content'
  $permissions['node:event:update any publication content'] = array(
  /* 'node:event:update any publication content' */   'roles' => array(
  /* 'node:event:update any publication content' */     'group_manager' => 'group_manager',
  /* 'node:event:update any publication content' */     'org_manager' => 'org_manager',
  /* 'node:event:update any publication content' */   ),
  /* 'node:event:update any publication content' */ );

  // Exported og permission: 'node:event:update group'
  $permissions['node:event:update group'] = array(
  /* 'node:event:update group' */   'roles' => array(
  /* 'node:event:update group' */     'group_manager' => 'group_manager',
  /* 'node:event:update group' */     'org_manager' => 'org_manager',
  /* 'node:event:update group' */   ),
  /* 'node:event:update group' */ );

  // Exported og permission: 'node:event:update own about_page content'
  $permissions['node:event:update own about_page content'] = array(
  /* 'node:event:update own about_page content' */   'roles' => array(
  /* 'node:event:update own about_page content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own about_page content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own about_page content' */   ),
  /* 'node:event:update own about_page content' */ );

  // Exported og permission: 'node:event:update own announcement content'
  $permissions['node:event:update own announcement content'] = array(
  /* 'node:event:update own announcement content' */   'roles' => array(
  /* 'node:event:update own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:update own announcement content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own announcement content' */   ),
  /* 'node:event:update own announcement content' */ );

  // Exported og permission: 'node:event:update own course content'
  $permissions['node:event:update own course content'] = array(
  /* 'node:event:update own course content' */   'roles' => array(
  /* 'node:event:update own course content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own course content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own course content' */   ),
  /* 'node:event:update own course content' */ );

  // Exported og permission: 'node:event:update own course_group content'
  $permissions['node:event:update own course_group content'] = array(
  /* 'node:event:update own course_group content' */   'roles' => array(),
  /* 'node:event:update own course_group content' */ );

  // Exported og permission: 'node:event:update own event content'
  $permissions['node:event:update own event content'] = array(
  /* 'node:event:update own event content' */   'roles' => array(
  /* 'node:event:update own event content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own event content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own event content' */   ),
  /* 'node:event:update own event content' */ );

  // Exported og permission: 'node:event:update own group content'
  $permissions['node:event:update own group content'] = array(
  /* 'node:event:update own group content' */   'roles' => array(
  /* 'node:event:update own group content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own group content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own group content' */   ),
  /* 'node:event:update own group content' */ );

  // Exported og permission: 'node:event:update own media_gallery content'
  $permissions['node:event:update own media_gallery content'] = array(
  /* 'node:event:update own media_gallery content' */   'roles' => array(
  /* 'node:event:update own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:update own media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own media_gallery content' */   ),
  /* 'node:event:update own media_gallery content' */ );

  // Exported og permission: 'node:event:update own news content'
  $permissions['node:event:update own news content'] = array(
  /* 'node:event:update own news content' */   'roles' => array(
  /* 'node:event:update own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:update own news content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own news content' */   ),
  /* 'node:event:update own news content' */ );

  // Exported og permission: 'node:event:update own poll content'
  $permissions['node:event:update own poll content'] = array(
  /* 'node:event:update own poll content' */   'roles' => array(
  /* 'node:event:update own poll content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own poll content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own poll content' */   ),
  /* 'node:event:update own poll content' */ );

  // Exported og permission: 'node:event:update own post content'
  $permissions['node:event:update own post content'] = array(
  /* 'node:event:update own post content' */   'roles' => array(
  /* 'node:event:update own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:update own post content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own post content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own post content' */   ),
  /* 'node:event:update own post content' */ );

  // Exported og permission: 'node:event:update own program content'
  $permissions['node:event:update own program content'] = array(
  /* 'node:event:update own program content' */   'roles' => array(
  /* 'node:event:update own program content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own program content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own program content' */   ),
  /* 'node:event:update own program content' */ );

  // Exported og permission: 'node:event:update own publication content'
  $permissions['node:event:update own publication content'] = array(
  /* 'node:event:update own publication content' */   'roles' => array(
  /* 'node:event:update own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:event:update own publication content' */     'group_manager' => 'group_manager',
  /* 'node:event:update own publication content' */     'org_manager' => 'org_manager',
  /* 'node:event:update own publication content' */   ),
  /* 'node:event:update own publication content' */ );

  // Exported og permission: 'node:event:user admin'
  $permissions['node:event:user admin'] = array(
  /* 'node:event:user admin' */   'roles' => array(),
  /* 'node:event:user admin' */ );

  // Exported og permission: 'node:event:view og entityform submissions'
  $permissions['node:event:view og entityform submissions'] = array(
  /* 'node:event:view og entityform submissions' */   'roles' => array(
  /* 'node:event:view og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:event:view og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:event:view og entityform submissions' */   ),
  /* 'node:event:view og entityform submissions' */ );

  // Exported og permission: 'node:event:view og entityforms'
  $permissions['node:event:view og entityforms'] = array(
  /* 'node:event:view og entityforms' */   'roles' => array(
  /* 'node:event:view og entityforms' */     'group_manager' => 'group_manager',
  /* 'node:event:view og entityforms' */     'org_manager' => 'org_manager',
  /* 'node:event:view og entityforms' */   ),
  /* 'node:event:view og entityforms' */ );

  // Exported og permission: 'node:event:view og entityforms list'
  $permissions['node:event:view og entityforms list'] = array(
  /* 'node:event:view og entityforms list' */   'roles' => array(
  /* 'node:event:view og entityforms list' */     'group_manager' => 'group_manager',
  /* 'node:event:view og entityforms list' */     'org_manager' => 'org_manager',
  /* 'node:event:view og entityforms list' */   ),
  /* 'node:event:view og entityforms list' */ );

  // Exported og permission: 'node:event:write privatemsg to group'
  $permissions['node:event:write privatemsg to group'] = array(
  /* 'node:event:write privatemsg to group' */   'roles' => array(
  /* 'node:event:write privatemsg to group' */     'group_manager' => 'group_manager',
  /* 'node:event:write privatemsg to group' */     'org_manager' => 'org_manager',
  /* 'node:event:write privatemsg to group' */   ),
  /* 'node:event:write privatemsg to group' */ );

  // Exported og permission: 'node:group:add user'
  $permissions['node:group:add user'] = array(
  /* 'node:group:add user' */   'roles' => array(
  /* 'node:group:add user' */     'group_manager' => 'group_manager',
  /* 'node:group:add user' */     'org_manager' => 'org_manager',
  /* 'node:group:add user' */   ),
  /* 'node:group:add user' */ );

  // Exported og permission: 'node:group:administer group'
  $permissions['node:group:administer group'] = array(
  /* 'node:group:administer group' */   'roles' => array(
  /* 'node:group:administer group' */     'group_manager' => 'group_manager',
  /* 'node:group:administer group' */     'org_manager' => 'org_manager',
  /* 'node:group:administer group' */   ),
  /* 'node:group:administer group' */ );

  // Exported og permission: 'node:group:administer og menu'
  $permissions['node:group:administer og menu'] = array(
  /* 'node:group:administer og menu' */   'roles' => array(
  /* 'node:group:administer og menu' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:administer og menu' */     'org_manager' => 'org_manager',
  /* 'node:group:administer og menu' */   ),
  /* 'node:group:administer og menu' */ );

  // Exported og permission: 'node:group:approve and deny subscription'
  $permissions['node:group:approve and deny subscription'] = array(
  /* 'node:group:approve and deny subscription' */   'roles' => array(
  /* 'node:group:approve and deny subscription' */     'group_manager' => 'group_manager',
  /* 'node:group:approve and deny subscription' */     'org_manager' => 'org_manager',
  /* 'node:group:approve and deny subscription' */   ),
  /* 'node:group:approve and deny subscription' */ );

  // Exported og permission: 'node:group:create about_page content'
  $permissions['node:group:create about_page content'] = array(
  /* 'node:group:create about_page content' */   'roles' => array(),
  /* 'node:group:create about_page content' */ );

  // Exported og permission: 'node:group:create announcement content'
  $permissions['node:group:create announcement content'] = array(
  /* 'node:group:create announcement content' */   'roles' => array(
  /* 'node:group:create announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:create announcement content' */     'group_manager' => 'group_manager',
  /* 'node:group:create announcement content' */     'org_manager' => 'org_manager',
  /* 'node:group:create announcement content' */   ),
  /* 'node:group:create announcement content' */ );

  // Exported og permission: 'node:group:create course content'
  $permissions['node:group:create course content'] = array(
  /* 'node:group:create course content' */   'roles' => array(
  /* 'node:group:create course content' */     'group_manager' => 'group_manager',
  /* 'node:group:create course content' */     'org_manager' => 'org_manager',
  /* 'node:group:create course content' */   ),
  /* 'node:group:create course content' */ );

  // Exported og permission: 'node:group:create course_group content'
  $permissions['node:group:create course_group content'] = array(
  /* 'node:group:create course_group content' */   'roles' => array(),
  /* 'node:group:create course_group content' */ );

  // Exported og permission: 'node:group:create event content'
  $permissions['node:group:create event content'] = array(
  /* 'node:group:create event content' */   'roles' => array(
  /* 'node:group:create event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:create event content' */     'group_manager' => 'group_manager',
  /* 'node:group:create event content' */     'org_manager' => 'org_manager',
  /* 'node:group:create event content' */   ),
  /* 'node:group:create event content' */ );

  // Exported og permission: 'node:group:create group content'
  $permissions['node:group:create group content'] = array(
  /* 'node:group:create group content' */   'roles' => array(
  /* 'node:group:create group content' */     'group_manager' => 'group_manager',
  /* 'node:group:create group content' */     'org_manager' => 'org_manager',
  /* 'node:group:create group content' */   ),
  /* 'node:group:create group content' */ );

  // Exported og permission: 'node:group:create media_gallery content'
  $permissions['node:group:create media_gallery content'] = array(
  /* 'node:group:create media_gallery content' */   'roles' => array(
  /* 'node:group:create media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:create media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:group:create media_gallery content' */     'member' => 'member',
  /* 'node:group:create media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:group:create media_gallery content' */   ),
  /* 'node:group:create media_gallery content' */ );

  // Exported og permission: 'node:group:create news content'
  $permissions['node:group:create news content'] = array(
  /* 'node:group:create news content' */   'roles' => array(
  /* 'node:group:create news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:create news content' */     'org_manager' => 'org_manager',
  /* 'node:group:create news content' */   ),
  /* 'node:group:create news content' */ );

  // Exported og permission: 'node:group:create poll content'
  $permissions['node:group:create poll content'] = array(
  /* 'node:group:create poll content' */   'roles' => array(
  /* 'node:group:create poll content' */     'group_manager' => 'group_manager',
  /* 'node:group:create poll content' */     'org_manager' => 'org_manager',
  /* 'node:group:create poll content' */   ),
  /* 'node:group:create poll content' */ );

  // Exported og permission: 'node:group:create post content'
  $permissions['node:group:create post content'] = array(
  /* 'node:group:create post content' */   'roles' => array(
  /* 'node:group:create post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:create post content' */     'group_manager' => 'group_manager',
  /* 'node:group:create post content' */     'member' => 'member',
  /* 'node:group:create post content' */     'org_manager' => 'org_manager',
  /* 'node:group:create post content' */   ),
  /* 'node:group:create post content' */ );

  // Exported og permission: 'node:group:create program content'
  $permissions['node:group:create program content'] = array(
  /* 'node:group:create program content' */   'roles' => array(),
  /* 'node:group:create program content' */ );

  // Exported og permission: 'node:group:create publication content'
  $permissions['node:group:create publication content'] = array(
  /* 'node:group:create publication content' */   'roles' => array(
  /* 'node:group:create publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:create publication content' */     'group_manager' => 'group_manager',
  /* 'node:group:create publication content' */     'org_manager' => 'org_manager',
  /* 'node:group:create publication content' */   ),
  /* 'node:group:create publication content' */ );

  // Exported og permission: 'node:group:delete any about_page content'
  $permissions['node:group:delete any about_page content'] = array(
  /* 'node:group:delete any about_page content' */   'roles' => array(),
  /* 'node:group:delete any about_page content' */ );

  // Exported og permission: 'node:group:delete any announcement content'
  $permissions['node:group:delete any announcement content'] = array(
  /* 'node:group:delete any announcement content' */   'roles' => array(
  /* 'node:group:delete any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any announcement content' */   ),
  /* 'node:group:delete any announcement content' */ );

  // Exported og permission: 'node:group:delete any course content'
  $permissions['node:group:delete any course content'] = array(
  /* 'node:group:delete any course content' */   'roles' => array(
  /* 'node:group:delete any course content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any course content' */   ),
  /* 'node:group:delete any course content' */ );

  // Exported og permission: 'node:group:delete any course_group content'
  $permissions['node:group:delete any course_group content'] = array(
  /* 'node:group:delete any course_group content' */   'roles' => array(),
  /* 'node:group:delete any course_group content' */ );

  // Exported og permission: 'node:group:delete any event content'
  $permissions['node:group:delete any event content'] = array(
  /* 'node:group:delete any event content' */   'roles' => array(
  /* 'node:group:delete any event content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any event content' */   ),
  /* 'node:group:delete any event content' */ );

  // Exported og permission: 'node:group:delete any group content'
  $permissions['node:group:delete any group content'] = array(
  /* 'node:group:delete any group content' */   'roles' => array(
  /* 'node:group:delete any group content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any group content' */   ),
  /* 'node:group:delete any group content' */ );

  // Exported og permission: 'node:group:delete any media_gallery content'
  $permissions['node:group:delete any media_gallery content'] = array(
  /* 'node:group:delete any media_gallery content' */   'roles' => array(
  /* 'node:group:delete any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any media_gallery content' */   ),
  /* 'node:group:delete any media_gallery content' */ );

  // Exported og permission: 'node:group:delete any news content'
  $permissions['node:group:delete any news content'] = array(
  /* 'node:group:delete any news content' */   'roles' => array(),
  /* 'node:group:delete any news content' */ );

  // Exported og permission: 'node:group:delete any poll content'
  $permissions['node:group:delete any poll content'] = array(
  /* 'node:group:delete any poll content' */   'roles' => array(
  /* 'node:group:delete any poll content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any poll content' */   ),
  /* 'node:group:delete any poll content' */ );

  // Exported og permission: 'node:group:delete any post content'
  $permissions['node:group:delete any post content'] = array(
  /* 'node:group:delete any post content' */   'roles' => array(
  /* 'node:group:delete any post content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any post content' */   ),
  /* 'node:group:delete any post content' */ );

  // Exported og permission: 'node:group:delete any program content'
  $permissions['node:group:delete any program content'] = array(
  /* 'node:group:delete any program content' */   'roles' => array(),
  /* 'node:group:delete any program content' */ );

  // Exported og permission: 'node:group:delete any publication content'
  $permissions['node:group:delete any publication content'] = array(
  /* 'node:group:delete any publication content' */   'roles' => array(
  /* 'node:group:delete any publication content' */     'group_manager' => 'group_manager',
  /* 'node:group:delete any publication content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete any publication content' */   ),
  /* 'node:group:delete any publication content' */ );

  // Exported og permission: 'node:group:delete og entityform submissions'
  $permissions['node:group:delete og entityform submissions'] = array(
  /* 'node:group:delete og entityform submissions' */   'roles' => array(),
  /* 'node:group:delete og entityform submissions' */ );

  // Exported og permission: 'node:group:delete own about_page content'
  $permissions['node:group:delete own about_page content'] = array(
  /* 'node:group:delete own about_page content' */   'roles' => array(),
  /* 'node:group:delete own about_page content' */ );

  // Exported og permission: 'node:group:delete own announcement content'
  $permissions['node:group:delete own announcement content'] = array(
  /* 'node:group:delete own announcement content' */   'roles' => array(
  /* 'node:group:delete own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:delete own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own announcement content' */   ),
  /* 'node:group:delete own announcement content' */ );

  // Exported og permission: 'node:group:delete own course content'
  $permissions['node:group:delete own course content'] = array(
  /* 'node:group:delete own course content' */   'roles' => array(
  /* 'node:group:delete own course content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own course content' */   ),
  /* 'node:group:delete own course content' */ );

  // Exported og permission: 'node:group:delete own course_group content'
  $permissions['node:group:delete own course_group content'] = array(
  /* 'node:group:delete own course_group content' */   'roles' => array(),
  /* 'node:group:delete own course_group content' */ );

  // Exported og permission: 'node:group:delete own event content'
  $permissions['node:group:delete own event content'] = array(
  /* 'node:group:delete own event content' */   'roles' => array(
  /* 'node:group:delete own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:delete own event content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own event content' */   ),
  /* 'node:group:delete own event content' */ );

  // Exported og permission: 'node:group:delete own group content'
  $permissions['node:group:delete own group content'] = array(
  /* 'node:group:delete own group content' */   'roles' => array(
  /* 'node:group:delete own group content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own group content' */   ),
  /* 'node:group:delete own group content' */ );

  // Exported og permission: 'node:group:delete own media_gallery content'
  $permissions['node:group:delete own media_gallery content'] = array(
  /* 'node:group:delete own media_gallery content' */   'roles' => array(
  /* 'node:group:delete own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:delete own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own media_gallery content' */   ),
  /* 'node:group:delete own media_gallery content' */ );

  // Exported og permission: 'node:group:delete own news content'
  $permissions['node:group:delete own news content'] = array(
  /* 'node:group:delete own news content' */   'roles' => array(
  /* 'node:group:delete own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:delete own news content' */   ),
  /* 'node:group:delete own news content' */ );

  // Exported og permission: 'node:group:delete own poll content'
  $permissions['node:group:delete own poll content'] = array(
  /* 'node:group:delete own poll content' */   'roles' => array(
  /* 'node:group:delete own poll content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own poll content' */   ),
  /* 'node:group:delete own poll content' */ );

  // Exported og permission: 'node:group:delete own post content'
  $permissions['node:group:delete own post content'] = array(
  /* 'node:group:delete own post content' */   'roles' => array(
  /* 'node:group:delete own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:delete own post content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own post content' */   ),
  /* 'node:group:delete own post content' */ );

  // Exported og permission: 'node:group:delete own program content'
  $permissions['node:group:delete own program content'] = array(
  /* 'node:group:delete own program content' */   'roles' => array(),
  /* 'node:group:delete own program content' */ );

  // Exported og permission: 'node:group:delete own publication content'
  $permissions['node:group:delete own publication content'] = array(
  /* 'node:group:delete own publication content' */   'roles' => array(
  /* 'node:group:delete own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:delete own publication content' */     'group_manager' => 'group_manager',
  /* 'node:group:delete own publication content' */     'org_manager' => 'org_manager',
  /* 'node:group:delete own publication content' */   ),
  /* 'node:group:delete own publication content' */ );

  // Exported og permission: 'node:group:edit og entityform submissions'
  $permissions['node:group:edit og entityform submissions'] = array(
  /* 'node:group:edit og entityform submissions' */   'roles' => array(
  /* 'node:group:edit og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:group:edit og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:group:edit og entityform submissions' */   ),
  /* 'node:group:edit og entityform submissions' */ );

  // Exported og permission: 'node:group:gn2_simple_access_group'
  $permissions['node:group:gn2_simple_access_group'] = array(
  /* 'node:group:gn2_simple_access_group' */   'roles' => array(
  /* 'node:group:gn2_simple_access_group' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:gn2_simple_access_group' */     'group_manager' => 'group_manager',
  /* 'node:group:gn2_simple_access_group' */     'member' => 'member',
  /* 'node:group:gn2_simple_access_group' */     'org_manager' => 'org_manager',
  /* 'node:group:gn2_simple_access_group' */   ),
  /* 'node:group:gn2_simple_access_group' */ );

  // Exported og permission: 'node:group:gn2_simple_access_organization'
  $permissions['node:group:gn2_simple_access_organization'] = array(
  /* 'node:group:gn2_simple_access_organization' */   'roles' => array(
  /* 'node:group:gn2_simple_access_organization' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:gn2_simple_access_organization' */     'group_manager' => 'group_manager',
  /* 'node:group:gn2_simple_access_organization' */     'org_manager' => 'org_manager',
  /* 'node:group:gn2_simple_access_organization' */   ),
  /* 'node:group:gn2_simple_access_organization' */ );

  // Exported og permission: 'node:group:gn2_simple_access_public'
  $permissions['node:group:gn2_simple_access_public'] = array(
  /* 'node:group:gn2_simple_access_public' */   'roles' => array(
  /* 'node:group:gn2_simple_access_public' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:gn2_simple_access_public' */     'org_manager' => 'org_manager',
  /* 'node:group:gn2_simple_access_public' */   ),
  /* 'node:group:gn2_simple_access_public' */ );

  // Exported og permission: 'node:group:gn2_simple_access_sitewide'
  $permissions['node:group:gn2_simple_access_sitewide'] = array(
  /* 'node:group:gn2_simple_access_sitewide' */   'roles' => array(
  /* 'node:group:gn2_simple_access_sitewide' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:gn2_simple_access_sitewide' */     'org_manager' => 'org_manager',
  /* 'node:group:gn2_simple_access_sitewide' */   ),
  /* 'node:group:gn2_simple_access_sitewide' */ );

  // Exported og permission: 'node:group:invite related user'
  $permissions['node:group:invite related user'] = array(
  /* 'node:group:invite related user' */   'roles' => array(),
  /* 'node:group:invite related user' */ );

  // Exported og permission: 'node:group:manage members'
  $permissions['node:group:manage members'] = array(
  /* 'node:group:manage members' */   'roles' => array(
  /* 'node:group:manage members' */     'group_manager' => 'group_manager',
  /* 'node:group:manage members' */     'org_manager' => 'org_manager',
  /* 'node:group:manage members' */   ),
  /* 'node:group:manage members' */ );

  // Exported og permission: 'node:group:manage permissions'
  $permissions['node:group:manage permissions'] = array(
  /* 'node:group:manage permissions' */   'roles' => array(
  /* 'node:group:manage permissions' */     'group_manager' => 'group_manager',
  /* 'node:group:manage permissions' */     'org_manager' => 'org_manager',
  /* 'node:group:manage permissions' */   ),
  /* 'node:group:manage permissions' */ );

  // Exported og permission: 'node:group:manage roles'
  $permissions['node:group:manage roles'] = array(
  /* 'node:group:manage roles' */   'roles' => array(
  /* 'node:group:manage roles' */     'group_manager' => 'group_manager',
  /* 'node:group:manage roles' */     'org_manager' => 'org_manager',
  /* 'node:group:manage roles' */   ),
  /* 'node:group:manage roles' */ );

  // Exported og permission: 'node:group:receive og entityform notifications'
  $permissions['node:group:receive og entityform notifications'] = array(
  /* 'node:group:receive og entityform notifications' */   'roles' => array(
  /* 'node:group:receive og entityform notifications' */     'group_manager' => 'group_manager',
  /* 'node:group:receive og entityform notifications' */     'org_manager' => 'org_manager',
  /* 'node:group:receive og entityform notifications' */   ),
  /* 'node:group:receive og entityform notifications' */ );

  // Exported og permission: 'node:group:subscribe'
  $permissions['node:group:subscribe'] = array(
  /* 'node:group:subscribe' */   'roles' => array(
  /* 'node:group:subscribe' */     'non-member' => 'non-member',
  /* 'node:group:subscribe' */   ),
  /* 'node:group:subscribe' */ );

  // Exported og permission: 'node:group:subscribe without approval'
  $permissions['node:group:subscribe without approval'] = array(
  /* 'node:group:subscribe without approval' */   'roles' => array(
  /* 'node:group:subscribe without approval' */     'non-member' => 'non-member',
  /* 'node:group:subscribe without approval' */   ),
  /* 'node:group:subscribe without approval' */ );

  // Exported og permission: 'node:group:unsubscribe'
  $permissions['node:group:unsubscribe'] = array(
  /* 'node:group:unsubscribe' */   'roles' => array(
  /* 'node:group:unsubscribe' */     'group_manager' => 'group_manager',
  /* 'node:group:unsubscribe' */     'member' => 'member',
  /* 'node:group:unsubscribe' */     'org_manager' => 'org_manager',
  /* 'node:group:unsubscribe' */   ),
  /* 'node:group:unsubscribe' */ );

  // Exported og permission: 'node:group:update any about_page content'
  $permissions['node:group:update any about_page content'] = array(
  /* 'node:group:update any about_page content' */   'roles' => array(),
  /* 'node:group:update any about_page content' */ );

  // Exported og permission: 'node:group:update any announcement content'
  $permissions['node:group:update any announcement content'] = array(
  /* 'node:group:update any announcement content' */   'roles' => array(
  /* 'node:group:update any announcement content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any announcement content' */   ),
  /* 'node:group:update any announcement content' */ );

  // Exported og permission: 'node:group:update any course content'
  $permissions['node:group:update any course content'] = array(
  /* 'node:group:update any course content' */   'roles' => array(
  /* 'node:group:update any course content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any course content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any course content' */   ),
  /* 'node:group:update any course content' */ );

  // Exported og permission: 'node:group:update any course_group content'
  $permissions['node:group:update any course_group content'] = array(
  /* 'node:group:update any course_group content' */   'roles' => array(),
  /* 'node:group:update any course_group content' */ );

  // Exported og permission: 'node:group:update any event content'
  $permissions['node:group:update any event content'] = array(
  /* 'node:group:update any event content' */   'roles' => array(
  /* 'node:group:update any event content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any event content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any event content' */   ),
  /* 'node:group:update any event content' */ );

  // Exported og permission: 'node:group:update any group content'
  $permissions['node:group:update any group content'] = array(
  /* 'node:group:update any group content' */   'roles' => array(
  /* 'node:group:update any group content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any group content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any group content' */   ),
  /* 'node:group:update any group content' */ );

  // Exported og permission: 'node:group:update any media_gallery content'
  $permissions['node:group:update any media_gallery content'] = array(
  /* 'node:group:update any media_gallery content' */   'roles' => array(
  /* 'node:group:update any media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any media_gallery content' */   ),
  /* 'node:group:update any media_gallery content' */ );

  // Exported og permission: 'node:group:update any news content'
  $permissions['node:group:update any news content'] = array(
  /* 'node:group:update any news content' */   'roles' => array(
  /* 'node:group:update any news content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any news content' */   ),
  /* 'node:group:update any news content' */ );

  // Exported og permission: 'node:group:update any poll content'
  $permissions['node:group:update any poll content'] = array(
  /* 'node:group:update any poll content' */   'roles' => array(
  /* 'node:group:update any poll content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any poll content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any poll content' */   ),
  /* 'node:group:update any poll content' */ );

  // Exported og permission: 'node:group:update any post content'
  $permissions['node:group:update any post content'] = array(
  /* 'node:group:update any post content' */   'roles' => array(
  /* 'node:group:update any post content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any post content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any post content' */   ),
  /* 'node:group:update any post content' */ );

  // Exported og permission: 'node:group:update any program content'
  $permissions['node:group:update any program content'] = array(
  /* 'node:group:update any program content' */   'roles' => array(),
  /* 'node:group:update any program content' */ );

  // Exported og permission: 'node:group:update any publication content'
  $permissions['node:group:update any publication content'] = array(
  /* 'node:group:update any publication content' */   'roles' => array(
  /* 'node:group:update any publication content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any publication content' */     'org_manager' => 'org_manager',
  /* 'node:group:update any publication content' */   ),
  /* 'node:group:update any publication content' */ );

  // Exported og permission: 'node:group:update group'
  $permissions['node:group:update group'] = array(
  /* 'node:group:update group' */   'roles' => array(
  /* 'node:group:update group' */     'group_manager' => 'group_manager',
  /* 'node:group:update group' */     'org_manager' => 'org_manager',
  /* 'node:group:update group' */   ),
  /* 'node:group:update group' */ );

  // Exported og permission: 'node:group:update own about_page content'
  $permissions['node:group:update own about_page content'] = array(
  /* 'node:group:update own about_page content' */   'roles' => array(),
  /* 'node:group:update own about_page content' */ );

  // Exported og permission: 'node:group:update own announcement content'
  $permissions['node:group:update own announcement content'] = array(
  /* 'node:group:update own announcement content' */   'roles' => array(
  /* 'node:group:update own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:update own announcement content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own announcement content' */   ),
  /* 'node:group:update own announcement content' */ );

  // Exported og permission: 'node:group:update own course content'
  $permissions['node:group:update own course content'] = array(
  /* 'node:group:update own course content' */   'roles' => array(
  /* 'node:group:update own course content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own course content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own course content' */   ),
  /* 'node:group:update own course content' */ );

  // Exported og permission: 'node:group:update own course_group content'
  $permissions['node:group:update own course_group content'] = array(
  /* 'node:group:update own course_group content' */   'roles' => array(),
  /* 'node:group:update own course_group content' */ );

  // Exported og permission: 'node:group:update own event content'
  $permissions['node:group:update own event content'] = array(
  /* 'node:group:update own event content' */   'roles' => array(
  /* 'node:group:update own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:update own event content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own event content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own event content' */   ),
  /* 'node:group:update own event content' */ );

  // Exported og permission: 'node:group:update own group content'
  $permissions['node:group:update own group content'] = array(
  /* 'node:group:update own group content' */   'roles' => array(
  /* 'node:group:update own group content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own group content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own group content' */   ),
  /* 'node:group:update own group content' */ );

  // Exported og permission: 'node:group:update own media_gallery content'
  $permissions['node:group:update own media_gallery content'] = array(
  /* 'node:group:update own media_gallery content' */   'roles' => array(
  /* 'node:group:update own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:update own media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own media_gallery content' */     'member' => 'member',
  /* 'node:group:update own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own media_gallery content' */   ),
  /* 'node:group:update own media_gallery content' */ );

  // Exported og permission: 'node:group:update own news content'
  $permissions['node:group:update own news content'] = array(
  /* 'node:group:update own news content' */   'roles' => array(
  /* 'node:group:update own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:update own news content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own news content' */   ),
  /* 'node:group:update own news content' */ );

  // Exported og permission: 'node:group:update own poll content'
  $permissions['node:group:update own poll content'] = array(
  /* 'node:group:update own poll content' */   'roles' => array(
  /* 'node:group:update own poll content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own poll content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own poll content' */   ),
  /* 'node:group:update own poll content' */ );

  // Exported og permission: 'node:group:update own post content'
  $permissions['node:group:update own post content'] = array(
  /* 'node:group:update own post content' */   'roles' => array(
  /* 'node:group:update own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:update own post content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own post content' */     'member' => 'member',
  /* 'node:group:update own post content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own post content' */   ),
  /* 'node:group:update own post content' */ );

  // Exported og permission: 'node:group:update own program content'
  $permissions['node:group:update own program content'] = array(
  /* 'node:group:update own program content' */   'roles' => array(),
  /* 'node:group:update own program content' */ );

  // Exported og permission: 'node:group:update own publication content'
  $permissions['node:group:update own publication content'] = array(
  /* 'node:group:update own publication content' */   'roles' => array(
  /* 'node:group:update own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:group:update own publication content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own publication content' */     'org_manager' => 'org_manager',
  /* 'node:group:update own publication content' */   ),
  /* 'node:group:update own publication content' */ );

  // Exported og permission: 'node:group:user admin'
  $permissions['node:group:user admin'] = array(
  /* 'node:group:user admin' */   'roles' => array(),
  /* 'node:group:user admin' */ );

  // Exported og permission: 'node:group:view og entityform submissions'
  $permissions['node:group:view og entityform submissions'] = array(
  /* 'node:group:view og entityform submissions' */   'roles' => array(
  /* 'node:group:view og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:group:view og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:group:view og entityform submissions' */   ),
  /* 'node:group:view og entityform submissions' */ );

  // Exported og permission: 'node:group:view og entityforms'
  $permissions['node:group:view og entityforms'] = array(
  /* 'node:group:view og entityforms' */   'roles' => array(
  /* 'node:group:view og entityforms' */     'group_manager' => 'group_manager',
  /* 'node:group:view og entityforms' */     'org_manager' => 'org_manager',
  /* 'node:group:view og entityforms' */   ),
  /* 'node:group:view og entityforms' */ );

  // Exported og permission: 'node:group:view og entityforms list'
  $permissions['node:group:view og entityforms list'] = array(
  /* 'node:group:view og entityforms list' */   'roles' => array(
  /* 'node:group:view og entityforms list' */     'group_manager' => 'group_manager',
  /* 'node:group:view og entityforms list' */     'org_manager' => 'org_manager',
  /* 'node:group:view og entityforms list' */   ),
  /* 'node:group:view og entityforms list' */ );

  // Exported og permission: 'node:group:write privatemsg to group'
  $permissions['node:group:write privatemsg to group'] = array(
  /* 'node:group:write privatemsg to group' */   'roles' => array(
  /* 'node:group:write privatemsg to group' */     'group_manager' => 'group_manager',
  /* 'node:group:write privatemsg to group' */     'org_manager' => 'org_manager',
  /* 'node:group:write privatemsg to group' */   ),
  /* 'node:group:write privatemsg to group' */ );

  // Exported og permission: 'node:organization:add user'
  $permissions['node:organization:add user'] = array(
  /* 'node:organization:add user' */   'roles' => array(
  /* 'node:organization:add user' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:add user' */     'org_manager' => 'org_manager',
  /* 'node:organization:add user' */   ),
  /* 'node:organization:add user' */ );

  // Exported og permission: 'node:organization:administer group'
  $permissions['node:organization:administer group'] = array(
  /* 'node:organization:administer group' */   'roles' => array(
  /* 'node:organization:administer group' */     'org_manager' => 'org_manager',
  /* 'node:organization:administer group' */   ),
  /* 'node:organization:administer group' */ );

  // Exported og permission: 'node:organization:administer og menu'
  $permissions['node:organization:administer og menu'] = array(
  /* 'node:organization:administer og menu' */   'roles' => array(
  /* 'node:organization:administer og menu' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:administer og menu' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:administer og menu' */     'org_manager' => 'org_manager',
  /* 'node:organization:administer og menu' */   ),
  /* 'node:organization:administer og menu' */ );

  // Exported og permission: 'node:organization:approve and deny subscription'
  $permissions['node:organization:approve and deny subscription'] = array(
  /* 'node:organization:approve and deny subscription' */   'roles' => array(
  /* 'node:organization:approve and deny subscription' */     'org_manager' => 'org_manager',
  /* 'node:organization:approve and deny subscription' */   ),
  /* 'node:organization:approve and deny subscription' */ );

  // Exported og permission: 'node:organization:create about_page content'
  $permissions['node:organization:create about_page content'] = array(
  /* 'node:organization:create about_page content' */   'roles' => array(
  /* 'node:organization:create about_page content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create about_page content' */   ),
  /* 'node:organization:create about_page content' */ );

  // Exported og permission: 'node:organization:create announcement content'
  $permissions['node:organization:create announcement content'] = array(
  /* 'node:organization:create announcement content' */   'roles' => array(
  /* 'node:organization:create announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:create announcement content' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:create announcement content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create announcement content' */   ),
  /* 'node:organization:create announcement content' */ );

  // Exported og permission: 'node:organization:create course content'
  $permissions['node:organization:create course content'] = array(
  /* 'node:organization:create course content' */   'roles' => array(
  /* 'node:organization:create course content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create course content' */   ),
  /* 'node:organization:create course content' */ );

  // Exported og permission: 'node:organization:create course_group content'
  $permissions['node:organization:create course_group content'] = array(
  /* 'node:organization:create course_group content' */   'roles' => array(),
  /* 'node:organization:create course_group content' */ );

  // Exported og permission: 'node:organization:create event content'
  $permissions['node:organization:create event content'] = array(
  /* 'node:organization:create event content' */   'roles' => array(
  /* 'node:organization:create event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:create event content' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:create event content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create event content' */   ),
  /* 'node:organization:create event content' */ );

  // Exported og permission: 'node:organization:create group content'
  $permissions['node:organization:create group content'] = array(
  /* 'node:organization:create group content' */   'roles' => array(
  /* 'node:organization:create group content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create group content' */   ),
  /* 'node:organization:create group content' */ );

  // Exported og permission: 'node:organization:create media_gallery content'
  $permissions['node:organization:create media_gallery content'] = array(
  /* 'node:organization:create media_gallery content' */   'roles' => array(
  /* 'node:organization:create media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:create media_gallery content' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:create media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create media_gallery content' */   ),
  /* 'node:organization:create media_gallery content' */ );

  // Exported og permission: 'node:organization:create news content'
  $permissions['node:organization:create news content'] = array(
  /* 'node:organization:create news content' */   'roles' => array(
  /* 'node:organization:create news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:create news content' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:create news content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create news content' */   ),
  /* 'node:organization:create news content' */ );

  // Exported og permission: 'node:organization:create poll content'
  $permissions['node:organization:create poll content'] = array(
  /* 'node:organization:create poll content' */   'roles' => array(
  /* 'node:organization:create poll content' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:create poll content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create poll content' */   ),
  /* 'node:organization:create poll content' */ );

  // Exported og permission: 'node:organization:create post content'
  $permissions['node:organization:create post content'] = array(
  /* 'node:organization:create post content' */   'roles' => array(
  /* 'node:organization:create post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:create post content' */     'faculty' => 'faculty',
  /* 'node:organization:create post content' */     'member' => 'member',
  /* 'node:organization:create post content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create post content' */   ),
  /* 'node:organization:create post content' */ );

  // Exported og permission: 'node:organization:create program content'
  $permissions['node:organization:create program content'] = array(
  /* 'node:organization:create program content' */   'roles' => array(
  /* 'node:organization:create program content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create program content' */   ),
  /* 'node:organization:create program content' */ );

  // Exported og permission: 'node:organization:create publication content'
  $permissions['node:organization:create publication content'] = array(
  /* 'node:organization:create publication content' */   'roles' => array(
  /* 'node:organization:create publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:create publication content' */     'org_manager' => 'org_manager',
  /* 'node:organization:create publication content' */   ),
  /* 'node:organization:create publication content' */ );

  // Exported og permission: 'node:organization:delete any about_page content'
  $permissions['node:organization:delete any about_page content'] = array(
  /* 'node:organization:delete any about_page content' */   'roles' => array(
  /* 'node:organization:delete any about_page content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any about_page content' */   ),
  /* 'node:organization:delete any about_page content' */ );

  // Exported og permission: 'node:organization:delete any announcement content'
  $permissions['node:organization:delete any announcement content'] = array(
  /* 'node:organization:delete any announcement content' */   'roles' => array(
  /* 'node:organization:delete any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any announcement content' */   ),
  /* 'node:organization:delete any announcement content' */ );

  // Exported og permission: 'node:organization:delete any course content'
  $permissions['node:organization:delete any course content'] = array(
  /* 'node:organization:delete any course content' */   'roles' => array(
  /* 'node:organization:delete any course content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any course content' */   ),
  /* 'node:organization:delete any course content' */ );

  // Exported og permission: 'node:organization:delete any course_group content'
  $permissions['node:organization:delete any course_group content'] = array(
  /* 'node:organization:delete any course_group content' */   'roles' => array(),
  /* 'node:organization:delete any course_group content' */ );

  // Exported og permission: 'node:organization:delete any event content'
  $permissions['node:organization:delete any event content'] = array(
  /* 'node:organization:delete any event content' */   'roles' => array(
  /* 'node:organization:delete any event content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any event content' */   ),
  /* 'node:organization:delete any event content' */ );

  // Exported og permission: 'node:organization:delete any group content'
  $permissions['node:organization:delete any group content'] = array(
  /* 'node:organization:delete any group content' */   'roles' => array(
  /* 'node:organization:delete any group content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any group content' */   ),
  /* 'node:organization:delete any group content' */ );

  // Exported og permission: 'node:organization:delete any media_gallery content'
  $permissions['node:organization:delete any media_gallery content'] = array(
  /* 'node:organization:delete any media_gallery content' */   'roles' => array(
  /* 'node:organization:delete any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any media_gallery content' */   ),
  /* 'node:organization:delete any media_gallery content' */ );

  // Exported og permission: 'node:organization:delete any news content'
  $permissions['node:organization:delete any news content'] = array(
  /* 'node:organization:delete any news content' */   'roles' => array(
  /* 'node:organization:delete any news content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any news content' */   ),
  /* 'node:organization:delete any news content' */ );

  // Exported og permission: 'node:organization:delete any poll content'
  $permissions['node:organization:delete any poll content'] = array(
  /* 'node:organization:delete any poll content' */   'roles' => array(
  /* 'node:organization:delete any poll content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any poll content' */   ),
  /* 'node:organization:delete any poll content' */ );

  // Exported og permission: 'node:organization:delete any post content'
  $permissions['node:organization:delete any post content'] = array(
  /* 'node:organization:delete any post content' */   'roles' => array(
  /* 'node:organization:delete any post content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any post content' */   ),
  /* 'node:organization:delete any post content' */ );

  // Exported og permission: 'node:organization:delete any program content'
  $permissions['node:organization:delete any program content'] = array(
  /* 'node:organization:delete any program content' */   'roles' => array(
  /* 'node:organization:delete any program content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any program content' */   ),
  /* 'node:organization:delete any program content' */ );

  // Exported og permission: 'node:organization:delete any publication content'
  $permissions['node:organization:delete any publication content'] = array(
  /* 'node:organization:delete any publication content' */   'roles' => array(
  /* 'node:organization:delete any publication content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete any publication content' */   ),
  /* 'node:organization:delete any publication content' */ );

  // Exported og permission: 'node:organization:delete og entityform submissions'
  $permissions['node:organization:delete og entityform submissions'] = array(
  /* 'node:organization:delete og entityform submissions' */   'roles' => array(),
  /* 'node:organization:delete og entityform submissions' */ );

  // Exported og permission: 'node:organization:delete own about_page content'
  $permissions['node:organization:delete own about_page content'] = array(
  /* 'node:organization:delete own about_page content' */   'roles' => array(
  /* 'node:organization:delete own about_page content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own about_page content' */   ),
  /* 'node:organization:delete own about_page content' */ );

  // Exported og permission: 'node:organization:delete own announcement content'
  $permissions['node:organization:delete own announcement content'] = array(
  /* 'node:organization:delete own announcement content' */   'roles' => array(
  /* 'node:organization:delete own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:delete own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own announcement content' */   ),
  /* 'node:organization:delete own announcement content' */ );

  // Exported og permission: 'node:organization:delete own course content'
  $permissions['node:organization:delete own course content'] = array(
  /* 'node:organization:delete own course content' */   'roles' => array(
  /* 'node:organization:delete own course content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own course content' */   ),
  /* 'node:organization:delete own course content' */ );

  // Exported og permission: 'node:organization:delete own course_group content'
  $permissions['node:organization:delete own course_group content'] = array(
  /* 'node:organization:delete own course_group content' */   'roles' => array(),
  /* 'node:organization:delete own course_group content' */ );

  // Exported og permission: 'node:organization:delete own event content'
  $permissions['node:organization:delete own event content'] = array(
  /* 'node:organization:delete own event content' */   'roles' => array(
  /* 'node:organization:delete own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:delete own event content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own event content' */   ),
  /* 'node:organization:delete own event content' */ );

  // Exported og permission: 'node:organization:delete own group content'
  $permissions['node:organization:delete own group content'] = array(
  /* 'node:organization:delete own group content' */   'roles' => array(
  /* 'node:organization:delete own group content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own group content' */   ),
  /* 'node:organization:delete own group content' */ );

  // Exported og permission: 'node:organization:delete own media_gallery content'
  $permissions['node:organization:delete own media_gallery content'] = array(
  /* 'node:organization:delete own media_gallery content' */   'roles' => array(
  /* 'node:organization:delete own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:delete own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own media_gallery content' */   ),
  /* 'node:organization:delete own media_gallery content' */ );

  // Exported og permission: 'node:organization:delete own news content'
  $permissions['node:organization:delete own news content'] = array(
  /* 'node:organization:delete own news content' */   'roles' => array(
  /* 'node:organization:delete own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:delete own news content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own news content' */   ),
  /* 'node:organization:delete own news content' */ );

  // Exported og permission: 'node:organization:delete own poll content'
  $permissions['node:organization:delete own poll content'] = array(
  /* 'node:organization:delete own poll content' */   'roles' => array(
  /* 'node:organization:delete own poll content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own poll content' */   ),
  /* 'node:organization:delete own poll content' */ );

  // Exported og permission: 'node:organization:delete own post content'
  $permissions['node:organization:delete own post content'] = array(
  /* 'node:organization:delete own post content' */   'roles' => array(
  /* 'node:organization:delete own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:delete own post content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own post content' */   ),
  /* 'node:organization:delete own post content' */ );

  // Exported og permission: 'node:organization:delete own program content'
  $permissions['node:organization:delete own program content'] = array(
  /* 'node:organization:delete own program content' */   'roles' => array(
  /* 'node:organization:delete own program content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own program content' */   ),
  /* 'node:organization:delete own program content' */ );

  // Exported og permission: 'node:organization:delete own publication content'
  $permissions['node:organization:delete own publication content'] = array(
  /* 'node:organization:delete own publication content' */   'roles' => array(
  /* 'node:organization:delete own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:delete own publication content' */     'org_manager' => 'org_manager',
  /* 'node:organization:delete own publication content' */   ),
  /* 'node:organization:delete own publication content' */ );

  // Exported og permission: 'node:organization:edit og entityform submissions'
  $permissions['node:organization:edit og entityform submissions'] = array(
  /* 'node:organization:edit og entityform submissions' */   'roles' => array(
  /* 'node:organization:edit og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:organization:edit og entityform submissions' */   ),
  /* 'node:organization:edit og entityform submissions' */ );

  // Exported og permission: 'node:organization:gn2_simple_access_group'
  $permissions['node:organization:gn2_simple_access_group'] = array(
  /* 'node:organization:gn2_simple_access_group' */   'roles' => array(
  /* 'node:organization:gn2_simple_access_group' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:gn2_simple_access_group' */     'member' => 'member',
  /* 'node:organization:gn2_simple_access_group' */     'org_manager' => 'org_manager',
  /* 'node:organization:gn2_simple_access_group' */   ),
  /* 'node:organization:gn2_simple_access_group' */ );

  // Exported og permission: 'node:organization:gn2_simple_access_organization'
  $permissions['node:organization:gn2_simple_access_organization'] = array(
  /* 'node:organization:gn2_simple_access_organization' */   'roles' => array(
  /* 'node:organization:gn2_simple_access_organization' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:gn2_simple_access_organization' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:gn2_simple_access_organization' */     'faculty' => 'faculty',
  /* 'node:organization:gn2_simple_access_organization' */     'org_manager' => 'org_manager',
  /* 'node:organization:gn2_simple_access_organization' */   ),
  /* 'node:organization:gn2_simple_access_organization' */ );

  // Exported og permission: 'node:organization:gn2_simple_access_public'
  $permissions['node:organization:gn2_simple_access_public'] = array(
  /* 'node:organization:gn2_simple_access_public' */   'roles' => array(
  /* 'node:organization:gn2_simple_access_public' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:gn2_simple_access_public' */     'org_manager' => 'org_manager',
  /* 'node:organization:gn2_simple_access_public' */   ),
  /* 'node:organization:gn2_simple_access_public' */ );

  // Exported og permission: 'node:organization:gn2_simple_access_sitewide'
  $permissions['node:organization:gn2_simple_access_sitewide'] = array(
  /* 'node:organization:gn2_simple_access_sitewide' */   'roles' => array(
  /* 'node:organization:gn2_simple_access_sitewide' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:gn2_simple_access_sitewide' */     'org_manager' => 'org_manager',
  /* 'node:organization:gn2_simple_access_sitewide' */   ),
  /* 'node:organization:gn2_simple_access_sitewide' */ );

  // Exported og permission: 'node:organization:invite any user'
  $permissions['node:organization:invite any user'] = array(
  /* 'node:organization:invite any user' */   'roles' => array(
  /* 'node:organization:invite any user' */     'org_manager' => 'org_manager',
  /* 'node:organization:invite any user' */   ),
  /* 'node:organization:invite any user' */ );

  // Exported og permission: 'node:organization:invite related user'
  $permissions['node:organization:invite related user'] = array(
  /* 'node:organization:invite related user' */   'roles' => array(
  /* 'node:organization:invite related user' */     'org_manager' => 'org_manager',
  /* 'node:organization:invite related user' */   ),
  /* 'node:organization:invite related user' */ );

  // Exported og permission: 'node:organization:manage members'
  $permissions['node:organization:manage members'] = array(
  /* 'node:organization:manage members' */   'roles' => array(
  /* 'node:organization:manage members' */     'org_manager' => 'org_manager',
  /* 'node:organization:manage members' */   ),
  /* 'node:organization:manage members' */ );

  // Exported og permission: 'node:organization:manage permissions'
  $permissions['node:organization:manage permissions'] = array(
  /* 'node:organization:manage permissions' */   'roles' => array(
  /* 'node:organization:manage permissions' */     'org_manager' => 'org_manager',
  /* 'node:organization:manage permissions' */   ),
  /* 'node:organization:manage permissions' */ );

  // Exported og permission: 'node:organization:manage roles'
  $permissions['node:organization:manage roles'] = array(
  /* 'node:organization:manage roles' */   'roles' => array(
  /* 'node:organization:manage roles' */     'org_manager' => 'org_manager',
  /* 'node:organization:manage roles' */   ),
  /* 'node:organization:manage roles' */ );

  // Exported og permission: 'node:organization:receive og entityform notifications'
  $permissions['node:organization:receive og entityform notifications'] = array(
  /* 'node:organization:receive og entityform notifications' */   'roles' => array(
  /* 'node:organization:receive og entityform notifications' */     'org_manager' => 'org_manager',
  /* 'node:organization:receive og entityform notifications' */   ),
  /* 'node:organization:receive og entityform notifications' */ );

  // Exported og permission: 'node:organization:subscribe'
  $permissions['node:organization:subscribe'] = array(
  /* 'node:organization:subscribe' */   'roles' => array(
  /* 'node:organization:subscribe' */     'non-member' => 'non-member',
  /* 'node:organization:subscribe' */   ),
  /* 'node:organization:subscribe' */ );

  // Exported og permission: 'node:organization:subscribe without approval'
  $permissions['node:organization:subscribe without approval'] = array(
  /* 'node:organization:subscribe without approval' */   'roles' => array(
  /* 'node:organization:subscribe without approval' */     'non-member' => 'non-member',
  /* 'node:organization:subscribe without approval' */   ),
  /* 'node:organization:subscribe without approval' */ );

  // Exported og permission: 'node:organization:unsubscribe'
  $permissions['node:organization:unsubscribe'] = array(
  /* 'node:organization:unsubscribe' */   'roles' => array(
  /* 'node:organization:unsubscribe' */     'faculty' => 'faculty',
  /* 'node:organization:unsubscribe' */     'member' => 'member',
  /* 'node:organization:unsubscribe' */     'org_manager' => 'org_manager',
  /* 'node:organization:unsubscribe' */   ),
  /* 'node:organization:unsubscribe' */ );

  // Exported og permission: 'node:organization:update any about_page content'
  $permissions['node:organization:update any about_page content'] = array(
  /* 'node:organization:update any about_page content' */   'roles' => array(
  /* 'node:organization:update any about_page content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any about_page content' */   ),
  /* 'node:organization:update any about_page content' */ );

  // Exported og permission: 'node:organization:update any announcement content'
  $permissions['node:organization:update any announcement content'] = array(
  /* 'node:organization:update any announcement content' */   'roles' => array(
  /* 'node:organization:update any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any announcement content' */   ),
  /* 'node:organization:update any announcement content' */ );

  // Exported og permission: 'node:organization:update any course content'
  $permissions['node:organization:update any course content'] = array(
  /* 'node:organization:update any course content' */   'roles' => array(
  /* 'node:organization:update any course content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any course content' */   ),
  /* 'node:organization:update any course content' */ );

  // Exported og permission: 'node:organization:update any course_group content'
  $permissions['node:organization:update any course_group content'] = array(
  /* 'node:organization:update any course_group content' */   'roles' => array(),
  /* 'node:organization:update any course_group content' */ );

  // Exported og permission: 'node:organization:update any event content'
  $permissions['node:organization:update any event content'] = array(
  /* 'node:organization:update any event content' */   'roles' => array(
  /* 'node:organization:update any event content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any event content' */   ),
  /* 'node:organization:update any event content' */ );

  // Exported og permission: 'node:organization:update any group content'
  $permissions['node:organization:update any group content'] = array(
  /* 'node:organization:update any group content' */   'roles' => array(
  /* 'node:organization:update any group content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any group content' */   ),
  /* 'node:organization:update any group content' */ );

  // Exported og permission: 'node:organization:update any media_gallery content'
  $permissions['node:organization:update any media_gallery content'] = array(
  /* 'node:organization:update any media_gallery content' */   'roles' => array(
  /* 'node:organization:update any media_gallery content' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:update any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any media_gallery content' */   ),
  /* 'node:organization:update any media_gallery content' */ );

  // Exported og permission: 'node:organization:update any news content'
  $permissions['node:organization:update any news content'] = array(
  /* 'node:organization:update any news content' */   'roles' => array(
  /* 'node:organization:update any news content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any news content' */   ),
  /* 'node:organization:update any news content' */ );

  // Exported og permission: 'node:organization:update any poll content'
  $permissions['node:organization:update any poll content'] = array(
  /* 'node:organization:update any poll content' */   'roles' => array(
  /* 'node:organization:update any poll content' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:update any poll content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any poll content' */   ),
  /* 'node:organization:update any poll content' */ );

  // Exported og permission: 'node:organization:update any post content'
  $permissions['node:organization:update any post content'] = array(
  /* 'node:organization:update any post content' */   'roles' => array(
  /* 'node:organization:update any post content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any post content' */   ),
  /* 'node:organization:update any post content' */ );

  // Exported og permission: 'node:organization:update any program content'
  $permissions['node:organization:update any program content'] = array(
  /* 'node:organization:update any program content' */   'roles' => array(
  /* 'node:organization:update any program content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any program content' */   ),
  /* 'node:organization:update any program content' */ );

  // Exported og permission: 'node:organization:update any publication content'
  $permissions['node:organization:update any publication content'] = array(
  /* 'node:organization:update any publication content' */   'roles' => array(
  /* 'node:organization:update any publication content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update any publication content' */   ),
  /* 'node:organization:update any publication content' */ );

  // Exported og permission: 'node:organization:update group'
  $permissions['node:organization:update group'] = array(
  /* 'node:organization:update group' */   'roles' => array(
  /* 'node:organization:update group' */     'org_manager' => 'org_manager',
  /* 'node:organization:update group' */   ),
  /* 'node:organization:update group' */ );

  // Exported og permission: 'node:organization:update own about_page content'
  $permissions['node:organization:update own about_page content'] = array(
  /* 'node:organization:update own about_page content' */   'roles' => array(
  /* 'node:organization:update own about_page content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own about_page content' */   ),
  /* 'node:organization:update own about_page content' */ );

  // Exported og permission: 'node:organization:update own announcement content'
  $permissions['node:organization:update own announcement content'] = array(
  /* 'node:organization:update own announcement content' */   'roles' => array(
  /* 'node:organization:update own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:update own announcement content' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:update own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own announcement content' */   ),
  /* 'node:organization:update own announcement content' */ );

  // Exported og permission: 'node:organization:update own course content'
  $permissions['node:organization:update own course content'] = array(
  /* 'node:organization:update own course content' */   'roles' => array(
  /* 'node:organization:update own course content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own course content' */   ),
  /* 'node:organization:update own course content' */ );

  // Exported og permission: 'node:organization:update own course_group content'
  $permissions['node:organization:update own course_group content'] = array(
  /* 'node:organization:update own course_group content' */   'roles' => array(),
  /* 'node:organization:update own course_group content' */ );

  // Exported og permission: 'node:organization:update own event content'
  $permissions['node:organization:update own event content'] = array(
  /* 'node:organization:update own event content' */   'roles' => array(
  /* 'node:organization:update own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:update own event content' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:update own event content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own event content' */   ),
  /* 'node:organization:update own event content' */ );

  // Exported og permission: 'node:organization:update own group content'
  $permissions['node:organization:update own group content'] = array(
  /* 'node:organization:update own group content' */   'roles' => array(
  /* 'node:organization:update own group content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own group content' */   ),
  /* 'node:organization:update own group content' */ );

  // Exported og permission: 'node:organization:update own media_gallery content'
  $permissions['node:organization:update own media_gallery content'] = array(
  /* 'node:organization:update own media_gallery content' */   'roles' => array(
  /* 'node:organization:update own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:update own media_gallery content' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:update own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own media_gallery content' */   ),
  /* 'node:organization:update own media_gallery content' */ );

  // Exported og permission: 'node:organization:update own news content'
  $permissions['node:organization:update own news content'] = array(
  /* 'node:organization:update own news content' */   'roles' => array(
  /* 'node:organization:update own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:update own news content' */     'PA Specialist' => 'PA Specialist',
  /* 'node:organization:update own news content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own news content' */   ),
  /* 'node:organization:update own news content' */ );

  // Exported og permission: 'node:organization:update own poll content'
  $permissions['node:organization:update own poll content'] = array(
  /* 'node:organization:update own poll content' */   'roles' => array(
  /* 'node:organization:update own poll content' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:update own poll content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own poll content' */   ),
  /* 'node:organization:update own poll content' */ );

  // Exported og permission: 'node:organization:update own post content'
  $permissions['node:organization:update own post content'] = array(
  /* 'node:organization:update own post content' */   'roles' => array(
  /* 'node:organization:update own post content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:update own post content' */     'faculty' => 'faculty',
  /* 'node:organization:update own post content' */     'member' => 'member',
  /* 'node:organization:update own post content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own post content' */   ),
  /* 'node:organization:update own post content' */ );

  // Exported og permission: 'node:organization:update own program content'
  $permissions['node:organization:update own program content'] = array(
  /* 'node:organization:update own program content' */   'roles' => array(
  /* 'node:organization:update own program content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own program content' */   ),
  /* 'node:organization:update own program content' */ );

  // Exported og permission: 'node:organization:update own publication content'
  $permissions['node:organization:update own publication content'] = array(
  /* 'node:organization:update own publication content' */   'roles' => array(
  /* 'node:organization:update own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:organization:update own publication content' */     'org_manager' => 'org_manager',
  /* 'node:organization:update own publication content' */   ),
  /* 'node:organization:update own publication content' */ );

  // Exported og permission: 'node:organization:user admin'
  $permissions['node:organization:user admin'] = array(
  /* 'node:organization:user admin' */   'roles' => array(
  /* 'node:organization:user admin' */     'hr_manager' => 'hr_manager',
  /* 'node:organization:user admin' */   ),
  /* 'node:organization:user admin' */ );

  // Exported og permission: 'node:organization:view og entityform submissions'
  $permissions['node:organization:view og entityform submissions'] = array(
  /* 'node:organization:view og entityform submissions' */   'roles' => array(
  /* 'node:organization:view og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:organization:view og entityform submissions' */   ),
  /* 'node:organization:view og entityform submissions' */ );

  // Exported og permission: 'node:organization:view og entityforms'
  $permissions['node:organization:view og entityforms'] = array(
  /* 'node:organization:view og entityforms' */   'roles' => array(
  /* 'node:organization:view og entityforms' */     'org_manager' => 'org_manager',
  /* 'node:organization:view og entityforms' */   ),
  /* 'node:organization:view og entityforms' */ );

  // Exported og permission: 'node:organization:view og entityforms list'
  $permissions['node:organization:view og entityforms list'] = array(
  /* 'node:organization:view og entityforms list' */   'roles' => array(
  /* 'node:organization:view og entityforms list' */     'org_manager' => 'org_manager',
  /* 'node:organization:view og entityforms list' */   ),
  /* 'node:organization:view og entityforms list' */ );

  // Exported og permission: 'node:organization:write privatemsg to group'
  $permissions['node:organization:write privatemsg to group'] = array(
  /* 'node:organization:write privatemsg to group' */   'roles' => array(
  /* 'node:organization:write privatemsg to group' */     'org_manager' => 'org_manager',
  /* 'node:organization:write privatemsg to group' */   ),
  /* 'node:organization:write privatemsg to group' */ );

  // Exported og permission: 'node:program:add user'
  $permissions['node:program:add user'] = array(
  /* 'node:program:add user' */   'roles' => array(
  /* 'node:program:add user' */     'group_manager' => 'group_manager',
  /* 'node:program:add user' */     'org_manager' => 'org_manager',
  /* 'node:program:add user' */   ),
  /* 'node:program:add user' */ );

  // Exported og permission: 'node:program:administer group'
  $permissions['node:program:administer group'] = array(
  /* 'node:program:administer group' */   'roles' => array(
  /* 'node:program:administer group' */     'group_manager' => 'group_manager',
  /* 'node:program:administer group' */     'org_manager' => 'org_manager',
  /* 'node:program:administer group' */   ),
  /* 'node:program:administer group' */ );

  // Exported og permission: 'node:program:administer og menu'
  $permissions['node:program:administer og menu'] = array(
  /* 'node:program:administer og menu' */   'roles' => array(),
  /* 'node:program:administer og menu' */ );

  // Exported og permission: 'node:program:approve and deny subscription'
  $permissions['node:program:approve and deny subscription'] = array(
  /* 'node:program:approve and deny subscription' */   'roles' => array(
  /* 'node:program:approve and deny subscription' */     'group_manager' => 'group_manager',
  /* 'node:program:approve and deny subscription' */     'org_manager' => 'org_manager',
  /* 'node:program:approve and deny subscription' */   ),
  /* 'node:program:approve and deny subscription' */ );

  // Exported og permission: 'node:program:create about_page content'
  $permissions['node:program:create about_page content'] = array(
  /* 'node:program:create about_page content' */   'roles' => array(),
  /* 'node:program:create about_page content' */ );

  // Exported og permission: 'node:program:create announcement content'
  $permissions['node:program:create announcement content'] = array(
  /* 'node:program:create announcement content' */   'roles' => array(
  /* 'node:program:create announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:create announcement content' */     'group_manager' => 'group_manager',
  /* 'node:program:create announcement content' */     'org_manager' => 'org_manager',
  /* 'node:program:create announcement content' */   ),
  /* 'node:program:create announcement content' */ );

  // Exported og permission: 'node:program:create course content'
  $permissions['node:program:create course content'] = array(
  /* 'node:program:create course content' */   'roles' => array(),
  /* 'node:program:create course content' */ );

  // Exported og permission: 'node:program:create course_group content'
  $permissions['node:program:create course_group content'] = array(
  /* 'node:program:create course_group content' */   'roles' => array(),
  /* 'node:program:create course_group content' */ );

  // Exported og permission: 'node:program:create event content'
  $permissions['node:program:create event content'] = array(
  /* 'node:program:create event content' */   'roles' => array(
  /* 'node:program:create event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:create event content' */     'group_manager' => 'group_manager',
  /* 'node:program:create event content' */     'org_manager' => 'org_manager',
  /* 'node:program:create event content' */   ),
  /* 'node:program:create event content' */ );

  // Exported og permission: 'node:program:create group content'
  $permissions['node:program:create group content'] = array(
  /* 'node:program:create group content' */   'roles' => array(),
  /* 'node:program:create group content' */ );

  // Exported og permission: 'node:program:create media_gallery content'
  $permissions['node:program:create media_gallery content'] = array(
  /* 'node:program:create media_gallery content' */   'roles' => array(
  /* 'node:program:create media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:create media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:program:create media_gallery content' */     'non-member' => 'non-member',
  /* 'node:program:create media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:program:create media_gallery content' */   ),
  /* 'node:program:create media_gallery content' */ );

  // Exported og permission: 'node:program:create news content'
  $permissions['node:program:create news content'] = array(
  /* 'node:program:create news content' */   'roles' => array(
  /* 'node:program:create news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:create news content' */     'group_manager' => 'group_manager',
  /* 'node:program:create news content' */     'org_manager' => 'org_manager',
  /* 'node:program:create news content' */   ),
  /* 'node:program:create news content' */ );

  // Exported og permission: 'node:program:create poll content'
  $permissions['node:program:create poll content'] = array(
  /* 'node:program:create poll content' */   'roles' => array(),
  /* 'node:program:create poll content' */ );

  // Exported og permission: 'node:program:create post content'
  $permissions['node:program:create post content'] = array(
  /* 'node:program:create post content' */   'roles' => array(),
  /* 'node:program:create post content' */ );

  // Exported og permission: 'node:program:create program content'
  $permissions['node:program:create program content'] = array(
  /* 'node:program:create program content' */   'roles' => array(),
  /* 'node:program:create program content' */ );

  // Exported og permission: 'node:program:create publication content'
  $permissions['node:program:create publication content'] = array(
  /* 'node:program:create publication content' */   'roles' => array(
  /* 'node:program:create publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:create publication content' */     'group_manager' => 'group_manager',
  /* 'node:program:create publication content' */     'org_manager' => 'org_manager',
  /* 'node:program:create publication content' */   ),
  /* 'node:program:create publication content' */ );

  // Exported og permission: 'node:program:delete any about_page content'
  $permissions['node:program:delete any about_page content'] = array(
  /* 'node:program:delete any about_page content' */   'roles' => array(),
  /* 'node:program:delete any about_page content' */ );

  // Exported og permission: 'node:program:delete any announcement content'
  $permissions['node:program:delete any announcement content'] = array(
  /* 'node:program:delete any announcement content' */   'roles' => array(
  /* 'node:program:delete any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete any announcement content' */   ),
  /* 'node:program:delete any announcement content' */ );

  // Exported og permission: 'node:program:delete any course content'
  $permissions['node:program:delete any course content'] = array(
  /* 'node:program:delete any course content' */   'roles' => array(),
  /* 'node:program:delete any course content' */ );

  // Exported og permission: 'node:program:delete any course_group content'
  $permissions['node:program:delete any course_group content'] = array(
  /* 'node:program:delete any course_group content' */   'roles' => array(),
  /* 'node:program:delete any course_group content' */ );

  // Exported og permission: 'node:program:delete any event content'
  $permissions['node:program:delete any event content'] = array(
  /* 'node:program:delete any event content' */   'roles' => array(
  /* 'node:program:delete any event content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete any event content' */   ),
  /* 'node:program:delete any event content' */ );

  // Exported og permission: 'node:program:delete any group content'
  $permissions['node:program:delete any group content'] = array(
  /* 'node:program:delete any group content' */   'roles' => array(),
  /* 'node:program:delete any group content' */ );

  // Exported og permission: 'node:program:delete any media_gallery content'
  $permissions['node:program:delete any media_gallery content'] = array(
  /* 'node:program:delete any media_gallery content' */   'roles' => array(
  /* 'node:program:delete any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete any media_gallery content' */   ),
  /* 'node:program:delete any media_gallery content' */ );

  // Exported og permission: 'node:program:delete any news content'
  $permissions['node:program:delete any news content'] = array(
  /* 'node:program:delete any news content' */   'roles' => array(
  /* 'node:program:delete any news content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete any news content' */   ),
  /* 'node:program:delete any news content' */ );

  // Exported og permission: 'node:program:delete any poll content'
  $permissions['node:program:delete any poll content'] = array(
  /* 'node:program:delete any poll content' */   'roles' => array(),
  /* 'node:program:delete any poll content' */ );

  // Exported og permission: 'node:program:delete any post content'
  $permissions['node:program:delete any post content'] = array(
  /* 'node:program:delete any post content' */   'roles' => array(),
  /* 'node:program:delete any post content' */ );

  // Exported og permission: 'node:program:delete any program content'
  $permissions['node:program:delete any program content'] = array(
  /* 'node:program:delete any program content' */   'roles' => array(),
  /* 'node:program:delete any program content' */ );

  // Exported og permission: 'node:program:delete any publication content'
  $permissions['node:program:delete any publication content'] = array(
  /* 'node:program:delete any publication content' */   'roles' => array(
  /* 'node:program:delete any publication content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete any publication content' */   ),
  /* 'node:program:delete any publication content' */ );

  // Exported og permission: 'node:program:delete og entityform submissions'
  $permissions['node:program:delete og entityform submissions'] = array(
  /* 'node:program:delete og entityform submissions' */   'roles' => array(
  /* 'node:program:delete og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:program:delete og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:program:delete og entityform submissions' */   ),
  /* 'node:program:delete og entityform submissions' */ );

  // Exported og permission: 'node:program:delete own about_page content'
  $permissions['node:program:delete own about_page content'] = array(
  /* 'node:program:delete own about_page content' */   'roles' => array(),
  /* 'node:program:delete own about_page content' */ );

  // Exported og permission: 'node:program:delete own announcement content'
  $permissions['node:program:delete own announcement content'] = array(
  /* 'node:program:delete own announcement content' */   'roles' => array(
  /* 'node:program:delete own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:delete own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete own announcement content' */   ),
  /* 'node:program:delete own announcement content' */ );

  // Exported og permission: 'node:program:delete own course content'
  $permissions['node:program:delete own course content'] = array(
  /* 'node:program:delete own course content' */   'roles' => array(),
  /* 'node:program:delete own course content' */ );

  // Exported og permission: 'node:program:delete own course_group content'
  $permissions['node:program:delete own course_group content'] = array(
  /* 'node:program:delete own course_group content' */   'roles' => array(),
  /* 'node:program:delete own course_group content' */ );

  // Exported og permission: 'node:program:delete own event content'
  $permissions['node:program:delete own event content'] = array(
  /* 'node:program:delete own event content' */   'roles' => array(
  /* 'node:program:delete own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:delete own event content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete own event content' */   ),
  /* 'node:program:delete own event content' */ );

  // Exported og permission: 'node:program:delete own group content'
  $permissions['node:program:delete own group content'] = array(
  /* 'node:program:delete own group content' */   'roles' => array(),
  /* 'node:program:delete own group content' */ );

  // Exported og permission: 'node:program:delete own media_gallery content'
  $permissions['node:program:delete own media_gallery content'] = array(
  /* 'node:program:delete own media_gallery content' */   'roles' => array(
  /* 'node:program:delete own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:delete own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete own media_gallery content' */   ),
  /* 'node:program:delete own media_gallery content' */ );

  // Exported og permission: 'node:program:delete own news content'
  $permissions['node:program:delete own news content'] = array(
  /* 'node:program:delete own news content' */   'roles' => array(
  /* 'node:program:delete own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:delete own news content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete own news content' */   ),
  /* 'node:program:delete own news content' */ );

  // Exported og permission: 'node:program:delete own poll content'
  $permissions['node:program:delete own poll content'] = array(
  /* 'node:program:delete own poll content' */   'roles' => array(),
  /* 'node:program:delete own poll content' */ );

  // Exported og permission: 'node:program:delete own post content'
  $permissions['node:program:delete own post content'] = array(
  /* 'node:program:delete own post content' */   'roles' => array(),
  /* 'node:program:delete own post content' */ );

  // Exported og permission: 'node:program:delete own program content'
  $permissions['node:program:delete own program content'] = array(
  /* 'node:program:delete own program content' */   'roles' => array(),
  /* 'node:program:delete own program content' */ );

  // Exported og permission: 'node:program:delete own publication content'
  $permissions['node:program:delete own publication content'] = array(
  /* 'node:program:delete own publication content' */   'roles' => array(
  /* 'node:program:delete own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:delete own publication content' */     'org_manager' => 'org_manager',
  /* 'node:program:delete own publication content' */   ),
  /* 'node:program:delete own publication content' */ );

  // Exported og permission: 'node:program:edit og entityform submissions'
  $permissions['node:program:edit og entityform submissions'] = array(
  /* 'node:program:edit og entityform submissions' */   'roles' => array(
  /* 'node:program:edit og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:program:edit og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:program:edit og entityform submissions' */   ),
  /* 'node:program:edit og entityform submissions' */ );

  // Exported og permission: 'node:program:gn2_simple_access_group'
  $permissions['node:program:gn2_simple_access_group'] = array(
  /* 'node:program:gn2_simple_access_group' */   'roles' => array(
  /* 'node:program:gn2_simple_access_group' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:gn2_simple_access_group' */     'group_manager' => 'group_manager',
  /* 'node:program:gn2_simple_access_group' */     'org_manager' => 'org_manager',
  /* 'node:program:gn2_simple_access_group' */   ),
  /* 'node:program:gn2_simple_access_group' */ );

  // Exported og permission: 'node:program:gn2_simple_access_organization'
  $permissions['node:program:gn2_simple_access_organization'] = array(
  /* 'node:program:gn2_simple_access_organization' */   'roles' => array(
  /* 'node:program:gn2_simple_access_organization' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:gn2_simple_access_organization' */     'group_manager' => 'group_manager',
  /* 'node:program:gn2_simple_access_organization' */     'org_manager' => 'org_manager',
  /* 'node:program:gn2_simple_access_organization' */   ),
  /* 'node:program:gn2_simple_access_organization' */ );

  // Exported og permission: 'node:program:gn2_simple_access_public'
  $permissions['node:program:gn2_simple_access_public'] = array(
  /* 'node:program:gn2_simple_access_public' */   'roles' => array(
  /* 'node:program:gn2_simple_access_public' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:gn2_simple_access_public' */     'org_manager' => 'org_manager',
  /* 'node:program:gn2_simple_access_public' */   ),
  /* 'node:program:gn2_simple_access_public' */ );

  // Exported og permission: 'node:program:gn2_simple_access_sitewide'
  $permissions['node:program:gn2_simple_access_sitewide'] = array(
  /* 'node:program:gn2_simple_access_sitewide' */   'roles' => array(
  /* 'node:program:gn2_simple_access_sitewide' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:gn2_simple_access_sitewide' */     'org_manager' => 'org_manager',
  /* 'node:program:gn2_simple_access_sitewide' */   ),
  /* 'node:program:gn2_simple_access_sitewide' */ );

  // Exported og permission: 'node:program:invite related user'
  $permissions['node:program:invite related user'] = array(
  /* 'node:program:invite related user' */   'roles' => array(),
  /* 'node:program:invite related user' */ );

  // Exported og permission: 'node:program:manage members'
  $permissions['node:program:manage members'] = array(
  /* 'node:program:manage members' */   'roles' => array(
  /* 'node:program:manage members' */     'group_manager' => 'group_manager',
  /* 'node:program:manage members' */     'org_manager' => 'org_manager',
  /* 'node:program:manage members' */   ),
  /* 'node:program:manage members' */ );

  // Exported og permission: 'node:program:manage permissions'
  $permissions['node:program:manage permissions'] = array(
  /* 'node:program:manage permissions' */   'roles' => array(
  /* 'node:program:manage permissions' */     'group_manager' => 'group_manager',
  /* 'node:program:manage permissions' */     'org_manager' => 'org_manager',
  /* 'node:program:manage permissions' */   ),
  /* 'node:program:manage permissions' */ );

  // Exported og permission: 'node:program:manage roles'
  $permissions['node:program:manage roles'] = array(
  /* 'node:program:manage roles' */   'roles' => array(
  /* 'node:program:manage roles' */     'group_manager' => 'group_manager',
  /* 'node:program:manage roles' */     'org_manager' => 'org_manager',
  /* 'node:program:manage roles' */   ),
  /* 'node:program:manage roles' */ );

  // Exported og permission: 'node:program:receive og entityform notifications'
  $permissions['node:program:receive og entityform notifications'] = array(
  /* 'node:program:receive og entityform notifications' */   'roles' => array(
  /* 'node:program:receive og entityform notifications' */     'group_manager' => 'group_manager',
  /* 'node:program:receive og entityform notifications' */     'org_manager' => 'org_manager',
  /* 'node:program:receive og entityform notifications' */   ),
  /* 'node:program:receive og entityform notifications' */ );

  // Exported og permission: 'node:program:subscribe'
  $permissions['node:program:subscribe'] = array(
  /* 'node:program:subscribe' */   'roles' => array(
  /* 'node:program:subscribe' */     'non-member' => 'non-member',
  /* 'node:program:subscribe' */   ),
  /* 'node:program:subscribe' */ );

  // Exported og permission: 'node:program:subscribe without approval'
  $permissions['node:program:subscribe without approval'] = array(
  /* 'node:program:subscribe without approval' */   'roles' => array(
  /* 'node:program:subscribe without approval' */     'non-member' => 'non-member',
  /* 'node:program:subscribe without approval' */   ),
  /* 'node:program:subscribe without approval' */ );

  // Exported og permission: 'node:program:unsubscribe'
  $permissions['node:program:unsubscribe'] = array(
  /* 'node:program:unsubscribe' */   'roles' => array(
  /* 'node:program:unsubscribe' */     'member' => 'member',
  /* 'node:program:unsubscribe' */   ),
  /* 'node:program:unsubscribe' */ );

  // Exported og permission: 'node:program:update any about_page content'
  $permissions['node:program:update any about_page content'] = array(
  /* 'node:program:update any about_page content' */   'roles' => array(),
  /* 'node:program:update any about_page content' */ );

  // Exported og permission: 'node:program:update any announcement content'
  $permissions['node:program:update any announcement content'] = array(
  /* 'node:program:update any announcement content' */   'roles' => array(
  /* 'node:program:update any announcement content' */     'group_manager' => 'group_manager',
  /* 'node:program:update any announcement content' */     'org_manager' => 'org_manager',
  /* 'node:program:update any announcement content' */   ),
  /* 'node:program:update any announcement content' */ );

  // Exported og permission: 'node:program:update any course content'
  $permissions['node:program:update any course content'] = array(
  /* 'node:program:update any course content' */   'roles' => array(),
  /* 'node:program:update any course content' */ );

  // Exported og permission: 'node:program:update any course_group content'
  $permissions['node:program:update any course_group content'] = array(
  /* 'node:program:update any course_group content' */   'roles' => array(),
  /* 'node:program:update any course_group content' */ );

  // Exported og permission: 'node:program:update any event content'
  $permissions['node:program:update any event content'] = array(
  /* 'node:program:update any event content' */   'roles' => array(
  /* 'node:program:update any event content' */     'group_manager' => 'group_manager',
  /* 'node:program:update any event content' */     'org_manager' => 'org_manager',
  /* 'node:program:update any event content' */   ),
  /* 'node:program:update any event content' */ );

  // Exported og permission: 'node:program:update any group content'
  $permissions['node:program:update any group content'] = array(
  /* 'node:program:update any group content' */   'roles' => array(),
  /* 'node:program:update any group content' */ );

  // Exported og permission: 'node:program:update any media_gallery content'
  $permissions['node:program:update any media_gallery content'] = array(
  /* 'node:program:update any media_gallery content' */   'roles' => array(
  /* 'node:program:update any media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:program:update any media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:program:update any media_gallery content' */   ),
  /* 'node:program:update any media_gallery content' */ );

  // Exported og permission: 'node:program:update any news content'
  $permissions['node:program:update any news content'] = array(
  /* 'node:program:update any news content' */   'roles' => array(
  /* 'node:program:update any news content' */     'group_manager' => 'group_manager',
  /* 'node:program:update any news content' */     'org_manager' => 'org_manager',
  /* 'node:program:update any news content' */   ),
  /* 'node:program:update any news content' */ );

  // Exported og permission: 'node:program:update any poll content'
  $permissions['node:program:update any poll content'] = array(
  /* 'node:program:update any poll content' */   'roles' => array(),
  /* 'node:program:update any poll content' */ );

  // Exported og permission: 'node:program:update any post content'
  $permissions['node:program:update any post content'] = array(
  /* 'node:program:update any post content' */   'roles' => array(),
  /* 'node:program:update any post content' */ );

  // Exported og permission: 'node:program:update any program content'
  $permissions['node:program:update any program content'] = array(
  /* 'node:program:update any program content' */   'roles' => array(),
  /* 'node:program:update any program content' */ );

  // Exported og permission: 'node:program:update any publication content'
  $permissions['node:program:update any publication content'] = array(
  /* 'node:program:update any publication content' */   'roles' => array(
  /* 'node:program:update any publication content' */     'group_manager' => 'group_manager',
  /* 'node:program:update any publication content' */     'org_manager' => 'org_manager',
  /* 'node:program:update any publication content' */   ),
  /* 'node:program:update any publication content' */ );

  // Exported og permission: 'node:program:update group'
  $permissions['node:program:update group'] = array(
  /* 'node:program:update group' */   'roles' => array(
  /* 'node:program:update group' */     'group_manager' => 'group_manager',
  /* 'node:program:update group' */   ),
  /* 'node:program:update group' */ );

  // Exported og permission: 'node:program:update own about_page content'
  $permissions['node:program:update own about_page content'] = array(
  /* 'node:program:update own about_page content' */   'roles' => array(),
  /* 'node:program:update own about_page content' */ );

  // Exported og permission: 'node:program:update own announcement content'
  $permissions['node:program:update own announcement content'] = array(
  /* 'node:program:update own announcement content' */   'roles' => array(
  /* 'node:program:update own announcement content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:update own announcement content' */     'group_manager' => 'group_manager',
  /* 'node:program:update own announcement content' */     'org_manager' => 'org_manager',
  /* 'node:program:update own announcement content' */   ),
  /* 'node:program:update own announcement content' */ );

  // Exported og permission: 'node:program:update own course content'
  $permissions['node:program:update own course content'] = array(
  /* 'node:program:update own course content' */   'roles' => array(),
  /* 'node:program:update own course content' */ );

  // Exported og permission: 'node:program:update own course_group content'
  $permissions['node:program:update own course_group content'] = array(
  /* 'node:program:update own course_group content' */   'roles' => array(),
  /* 'node:program:update own course_group content' */ );

  // Exported og permission: 'node:program:update own event content'
  $permissions['node:program:update own event content'] = array(
  /* 'node:program:update own event content' */   'roles' => array(
  /* 'node:program:update own event content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:update own event content' */     'group_manager' => 'group_manager',
  /* 'node:program:update own event content' */     'org_manager' => 'org_manager',
  /* 'node:program:update own event content' */   ),
  /* 'node:program:update own event content' */ );

  // Exported og permission: 'node:program:update own group content'
  $permissions['node:program:update own group content'] = array(
  /* 'node:program:update own group content' */   'roles' => array(),
  /* 'node:program:update own group content' */ );

  // Exported og permission: 'node:program:update own media_gallery content'
  $permissions['node:program:update own media_gallery content'] = array(
  /* 'node:program:update own media_gallery content' */   'roles' => array(
  /* 'node:program:update own media_gallery content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:update own media_gallery content' */     'group_manager' => 'group_manager',
  /* 'node:program:update own media_gallery content' */     'non-member' => 'non-member',
  /* 'node:program:update own media_gallery content' */     'org_manager' => 'org_manager',
  /* 'node:program:update own media_gallery content' */   ),
  /* 'node:program:update own media_gallery content' */ );

  // Exported og permission: 'node:program:update own news content'
  $permissions['node:program:update own news content'] = array(
  /* 'node:program:update own news content' */   'roles' => array(
  /* 'node:program:update own news content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:update own news content' */     'group_manager' => 'group_manager',
  /* 'node:program:update own news content' */     'org_manager' => 'org_manager',
  /* 'node:program:update own news content' */   ),
  /* 'node:program:update own news content' */ );

  // Exported og permission: 'node:program:update own poll content'
  $permissions['node:program:update own poll content'] = array(
  /* 'node:program:update own poll content' */   'roles' => array(),
  /* 'node:program:update own poll content' */ );

  // Exported og permission: 'node:program:update own post content'
  $permissions['node:program:update own post content'] = array(
  /* 'node:program:update own post content' */   'roles' => array(),
  /* 'node:program:update own post content' */ );

  // Exported og permission: 'node:program:update own program content'
  $permissions['node:program:update own program content'] = array(
  /* 'node:program:update own program content' */   'roles' => array(),
  /* 'node:program:update own program content' */ );

  // Exported og permission: 'node:program:update own publication content'
  $permissions['node:program:update own publication content'] = array(
  /* 'node:program:update own publication content' */   'roles' => array(
  /* 'node:program:update own publication content' */     'Content Specialist' => 'Content Specialist',
  /* 'node:program:update own publication content' */     'group_manager' => 'group_manager',
  /* 'node:program:update own publication content' */     'org_manager' => 'org_manager',
  /* 'node:program:update own publication content' */   ),
  /* 'node:program:update own publication content' */ );

  // Exported og permission: 'node:program:user admin'
  $permissions['node:program:user admin'] = array(
  /* 'node:program:user admin' */   'roles' => array(),
  /* 'node:program:user admin' */ );

  // Exported og permission: 'node:program:view og entityform submissions'
  $permissions['node:program:view og entityform submissions'] = array(
  /* 'node:program:view og entityform submissions' */   'roles' => array(
  /* 'node:program:view og entityform submissions' */     'group_manager' => 'group_manager',
  /* 'node:program:view og entityform submissions' */     'org_manager' => 'org_manager',
  /* 'node:program:view og entityform submissions' */   ),
  /* 'node:program:view og entityform submissions' */ );

  // Exported og permission: 'node:program:view og entityforms'
  $permissions['node:program:view og entityforms'] = array(
  /* 'node:program:view og entityforms' */   'roles' => array(
  /* 'node:program:view og entityforms' */     'group_manager' => 'group_manager',
  /* 'node:program:view og entityforms' */     'org_manager' => 'org_manager',
  /* 'node:program:view og entityforms' */   ),
  /* 'node:program:view og entityforms' */ );

  // Exported og permission: 'node:program:view og entityforms list'
  $permissions['node:program:view og entityforms list'] = array(
  /* 'node:program:view og entityforms list' */   'roles' => array(
  /* 'node:program:view og entityforms list' */     'group_manager' => 'group_manager',
  /* 'node:program:view og entityforms list' */     'org_manager' => 'org_manager',
  /* 'node:program:view og entityforms list' */   ),
  /* 'node:program:view og entityforms list' */ );

  // Exported og permission: 'node:program:write privatemsg to group'
  $permissions['node:program:write privatemsg to group'] = array(
  /* 'node:program:write privatemsg to group' */   'roles' => array(
  /* 'node:program:write privatemsg to group' */     'group_manager' => 'group_manager',
  /* 'node:program:write privatemsg to group' */     'org_manager' => 'org_manager',
  /* 'node:program:write privatemsg to group' */   ),
  /* 'node:program:write privatemsg to group' */ );

  return $permissions;
}
