<?php
/**
 * @file
 * gn2_roles_perms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gn2_roles_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'accept translation jobs'.
  $permissions['accept translation jobs'] = array(
  /* accept translation jobs */   'name' => 'accept translation jobs',
  /* accept translation jobs */   'roles' => array(
  /* accept translation jobs */     'administrator' => 'administrator',
  /* accept translation jobs */     'translator' => 'translator',
  /* accept translation jobs */   ),
  /* accept translation jobs */   'module' => 'tmgmt',
  /* accept translation jobs */ );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
  /* access administration menu */   'name' => 'access administration menu',
  /* access administration menu */   'roles' => array(
  /* access administration menu */     'administrator' => 'administrator',
  /* access administration menu */     'translator' => 'translator',
  /* access administration menu */   ),
  /* access administration menu */   'module' => 'admin_menu',
  /* access administration menu */ );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
  /* access administration pages */   'name' => 'access administration pages',
  /* access administration pages */   'roles' => array(
  /* access administration pages */     'administrator' => 'administrator',
  /* access administration pages */     'translator' => 'translator',
  /* access administration pages */   ),
  /* access administration pages */   'module' => 'system',
  /* access administration pages */ );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
  /* access all views */   'name' => 'access all views',
  /* access all views */   'roles' => array(
  /* access all views */     'administrator' => 'administrator',
  /* access all views */   ),
  /* access all views */   'module' => 'views',
  /* access all views */ );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
  /* access comments */   'name' => 'access comments',
  /* access comments */   'roles' => array(
  /* access comments */     'administrator' => 'administrator',
  /* access comments */     'authenticated user' => 'authenticated user',
  /* access comments */   ),
  /* access comments */   'module' => 'comment',
  /* access comments */ );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
  /* access content */   'name' => 'access content',
  /* access content */   'roles' => array(
  /* access content */     'administrator' => 'administrator',
  /* access content */     'anonymous user' => 'anonymous user',
  /* access content */     'authenticated user' => 'authenticated user',
  /* access content */   ),
  /* access content */   'module' => 'node',
  /* access content */ );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
  /* access content overview */   'name' => 'access content overview',
  /* access content overview */   'roles' => array(
  /* access content overview */     'administrator' => 'administrator',
  /* access content overview */   ),
  /* access content overview */   'module' => 'node',
  /* access content overview */ );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
  /* access contextual links */   'name' => 'access contextual links',
  /* access contextual links */   'roles' => array(
  /* access contextual links */     'administrator' => 'administrator',
  /* access contextual links */   ),
  /* access contextual links */   'module' => 'contextual',
  /* access contextual links */ );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
  /* access media browser */   'name' => 'access media browser',
  /* access media browser */   'roles' => array(
  /* access media browser */     'administrator' => 'administrator',
  /* access media browser */     'authenticated user' => 'authenticated user',
  /* access media browser */   ),
  /* access media browser */   'module' => 'media',
  /* access media browser */ );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
  /* access rules debug */   'name' => 'access rules debug',
  /* access rules debug */   'roles' => array(
  /* access rules debug */     'administrator' => 'administrator',
  /* access rules debug */   ),
  /* access rules debug */   'module' => 'rules',
  /* access rules debug */ );

  // Exported permission: 'access rules link approve_anonymous'.
  $permissions['access rules link approve_anonymous'] = array(
  /* access rules link approve_anonymous */   'name' => 'access rules link approve_anonymous',
  /* access rules link approve_anonymous */   'roles' => array(
  /* access rules link approve_anonymous */     'administrator' => 'administrator',
  /* access rules link approve_anonymous */     'authenticated user' => 'authenticated user',
  /* access rules link approve_anonymous */   ),
  /* access rules link approve_anonymous */   'module' => 'rules_link',
  /* access rules link approve_anonymous */ );

  // Exported permission: 'access rules link approve_member'.
  $permissions['access rules link approve_member'] = array(
  /* access rules link approve_member */   'name' => 'access rules link approve_member',
  /* access rules link approve_member */   'roles' => array(
  /* access rules link approve_member */     'administrator' => 'administrator',
  /* access rules link approve_member */     'authenticated user' => 'authenticated user',
  /* access rules link approve_member */   ),
  /* access rules link approve_member */   'module' => 'rules_link',
  /* access rules link approve_member */ );

  // Exported permission: 'access rules link deny_anonymous'.
  $permissions['access rules link deny_anonymous'] = array(
  /* access rules link deny_anonymous */   'name' => 'access rules link deny_anonymous',
  /* access rules link deny_anonymous */   'roles' => array(
  /* access rules link deny_anonymous */     'administrator' => 'administrator',
  /* access rules link deny_anonymous */     'authenticated user' => 'authenticated user',
  /* access rules link deny_anonymous */   ),
  /* access rules link deny_anonymous */   'module' => 'rules_link',
  /* access rules link deny_anonymous */ );

  // Exported permission: 'access rules link deny_member'.
  $permissions['access rules link deny_member'] = array(
  /* access rules link deny_member */   'name' => 'access rules link deny_member',
  /* access rules link deny_member */   'roles' => array(
  /* access rules link deny_member */     'administrator' => 'administrator',
  /* access rules link deny_member */     'authenticated user' => 'authenticated user',
  /* access rules link deny_member */   ),
  /* access rules link deny_member */   'module' => 'rules_link',
  /* access rules link deny_member */ );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
  /* access site in maintenance mode */   'name' => 'access site in maintenance mode',
  /* access site in maintenance mode */   'roles' => array(
  /* access site in maintenance mode */     'administrator' => 'administrator',
  /* access site in maintenance mode */   ),
  /* access site in maintenance mode */   'module' => 'system',
  /* access site in maintenance mode */ );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
  /* access site reports */   'name' => 'access site reports',
  /* access site reports */   'roles' => array(
  /* access site reports */     'administrator' => 'administrator',
  /* access site reports */   ),
  /* access site reports */   'module' => 'system',
  /* access site reports */ );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
  /* access statistics */   'name' => 'access statistics',
  /* access statistics */   'roles' => array(
  /* access statistics */     'administrator' => 'administrator',
  /* access statistics */     'authenticated user' => 'authenticated user',
  /* access statistics */   ),
  /* access statistics */   'module' => 'statistics',
  /* access statistics */ );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
  /* access user profiles */   'name' => 'access user profiles',
  /* access user profiles */   'roles' => array(
  /* access user profiles */     'administrator' => 'administrator',
  /* access user profiles */     'authenticated user' => 'authenticated user',
  /* access user profiles */   ),
  /* access user profiles */   'module' => 'user',
  /* access user profiles */ );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
  /* add media from remote sources */   'name' => 'add media from remote sources',
  /* add media from remote sources */   'roles' => array(
  /* add media from remote sources */     'administrator' => 'administrator',
  /* add media from remote sources */     'authenticated user' => 'authenticated user',
  /* add media from remote sources */   ),
  /* add media from remote sources */   'module' => 'media_internet',
  /* add media from remote sources */ );

  // Exported permission: 'add userpoints'.
  $permissions['add userpoints'] = array(
  /* add userpoints */   'name' => 'add userpoints',
  /* add userpoints */   'roles' => array(
  /* add userpoints */     'administrator' => 'administrator',
  /* add userpoints */   ),
  /* add userpoints */   'module' => 'userpoints',
  /* add userpoints */ );

  // Exported permission: 'administer Terms and Conditions'.
  $permissions['administer Terms and Conditions'] = array(
  /* administer Terms and Conditions */   'name' => 'administer Terms and Conditions',
  /* administer Terms and Conditions */   'roles' => array(
  /* administer Terms and Conditions */     'administrator' => 'administrator',
  /* administer Terms and Conditions */   ),
  /* administer Terms and Conditions */   'module' => 'legal',
  /* administer Terms and Conditions */ );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
  /* administer actions */   'name' => 'administer actions',
  /* administer actions */   'roles' => array(
  /* administer actions */     'administrator' => 'administrator',
  /* administer actions */   ),
  /* administer actions */   'module' => 'system',
  /* administer actions */ );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
  /* administer advanced pane settings */   'name' => 'administer advanced pane settings',
  /* administer advanced pane settings */   'roles' => array(
  /* administer advanced pane settings */     'administrator' => 'administrator',
  /* administer advanced pane settings */   ),
  /* administer advanced pane settings */   'module' => 'panels',
  /* administer advanced pane settings */ );

  // Exported permission: 'administer anonymous_publishing'.
  $permissions['administer anonymous_publishing'] = array(
  /* administer anonymous_publishing */   'name' => 'administer anonymous_publishing',
  /* administer anonymous_publishing */   'roles' => array(
  /* administer anonymous_publishing */     'administrator' => 'administrator',
  /* administer anonymous_publishing */   ),
  /* administer anonymous_publishing */   'module' => 'anonymous_publishing',
  /* administer anonymous_publishing */ );

  // Exported permission: 'administer autologout'.
  $permissions['administer autologout'] = array(
  /* administer autologout */   'name' => 'administer autologout',
  /* administer autologout */   'roles' => array(
  /* administer autologout */     'administrator' => 'administrator',
  /* administer autologout */   ),
  /* administer autologout */   'module' => 'autologout',
  /* administer autologout */ );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
  /* administer block classes */   'name' => 'administer block classes',
  /* administer block classes */   'roles' => array(
  /* administer block classes */     'administrator' => 'administrator',
  /* administer block classes */   ),
  /* administer block classes */   'module' => 'block_class',
  /* administer block classes */ );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
  /* administer blocks */   'name' => 'administer blocks',
  /* administer blocks */   'roles' => array(
  /* administer blocks */     'administrator' => 'administrator',
  /* administer blocks */   ),
  /* administer blocks */   'module' => 'block',
  /* administer blocks */ );

  // Exported permission: 'administer clean markup panel pane settings'.
  $permissions['administer clean markup panel pane settings'] = array(
  /* administer clean markup panel pane settings */   'name' => 'administer clean markup panel pane settings',
  /* administer clean markup panel pane settings */   'roles' => array(
  /* administer clean markup panel pane settings */     'administrator' => 'administrator',
  /* administer clean markup panel pane settings */   ),
  /* administer clean markup panel pane settings */   'module' => 'clean_markup_panels',
  /* administer clean markup panel pane settings */ );

  // Exported permission: 'administer clean markup panel region settings'.
  $permissions['administer clean markup panel region settings'] = array(
  /* administer clean markup panel region settings */   'name' => 'administer clean markup panel region settings',
  /* administer clean markup panel region settings */   'roles' => array(
  /* administer clean markup panel region settings */     'administrator' => 'administrator',
  /* administer clean markup panel region settings */   ),
  /* administer clean markup panel region settings */   'module' => 'clean_markup_panels',
  /* administer clean markup panel region settings */ );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
  /* administer comments */   'name' => 'administer comments',
  /* administer comments */   'roles' => array(
  /* administer comments */     'administrator' => 'administrator',
  /* administer comments */     'authenticated user' => 'authenticated user',
  /* administer comments */   ),
  /* administer comments */   'module' => 'comment',
  /* administer comments */ );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
  /* administer content translations */   'name' => 'administer content translations',
  /* administer content translations */   'roles' => array(
  /* administer content translations */     'administrator' => 'administrator',
  /* administer content translations */     'translator' => 'translator',
  /* administer content translations */   ),
  /* administer content translations */   'module' => 'i18n_node',
  /* administer content translations */ );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
  /* administer content types */   'name' => 'administer content types',
  /* administer content types */   'roles' => array(
  /* administer content types */     'administrator' => 'administrator',
  /* administer content types */   ),
  /* administer content types */   'module' => 'node',
  /* administer content types */ );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
  /* administer ctools access ruleset */   'name' => 'administer ctools access ruleset',
  /* administer ctools access ruleset */   'roles' => array(
  /* administer ctools access ruleset */     'administrator' => 'administrator',
  /* administer ctools access ruleset */   ),
  /* administer ctools access ruleset */   'module' => 'ctools_access_ruleset',
  /* administer ctools access ruleset */ );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
  /* administer custom content */   'name' => 'administer custom content',
  /* administer custom content */   'roles' => array(
  /* administer custom content */     'administrator' => 'administrator',
  /* administer custom content */   ),
  /* administer custom content */   'module' => 'ctools_custom_content',
  /* administer custom content */ );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
  /* administer dependencies */   'name' => 'administer dependencies',
  /* administer dependencies */   'roles' => array(
  /* administer dependencies */     'administrator' => 'administrator',
  /* administer dependencies */   ),
  /* administer dependencies */   'module' => 'conditional_fields',
  /* administer dependencies */ );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
  /* administer entity view modes */   'name' => 'administer entity view modes',
  /* administer entity view modes */   'roles' => array(
  /* administer entity view modes */     'administrator' => 'administrator',
  /* administer entity view modes */   ),
  /* administer entity view modes */   'module' => 'entity_view_mode',
  /* administer entity view modes */ );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
  /* administer entityform types */   'name' => 'administer entityform types',
  /* administer entityform types */   'roles' => array(
  /* administer entityform types */     'administrator' => 'administrator',
  /* administer entityform types */   ),
  /* administer entityform types */   'module' => 'entityform',
  /* administer entityform types */ );

  // Exported permission: 'administer ezproxy'.
  $permissions['administer ezproxy'] = array(
  /* administer ezproxy */   'name' => 'administer ezproxy',
  /* administer ezproxy */   'roles' => array(
  /* administer ezproxy */     'administrator' => 'administrator',
  /* administer ezproxy */   ),
  /* administer ezproxy */   'module' => 'gn2_ezproxy',
  /* administer ezproxy */ );

  // Exported permission: 'administer facetapi pretty paths'.
  $permissions['administer facetapi pretty paths'] = array(
  /* administer facetapi pretty paths */   'name' => 'administer facetapi pretty paths',
  /* administer facetapi pretty paths */   'roles' => array(
  /* administer facetapi pretty paths */     'administrator' => 'administrator',
  /* administer facetapi pretty paths */   ),
  /* administer facetapi pretty paths */   'module' => 'facetapi_pretty_paths',
  /* administer facetapi pretty paths */ );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
  /* administer facets */   'name' => 'administer facets',
  /* administer facets */   'roles' => array(
  /* administer facets */     'administrator' => 'administrator',
  /* administer facets */   ),
  /* administer facets */   'module' => 'facetapi',
  /* administer facets */ );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
  /* administer features */   'name' => 'administer features',
  /* administer features */   'roles' => array(
  /* administer features */     'administrator' => 'administrator',
  /* administer features */   ),
  /* administer features */   'module' => 'features',
  /* administer features */ );

  // Exported permission: 'administer federal google analytics'.
  $permissions['administer federal google analytics'] = array(
  /* administer federal google analytics */   'name' => 'administer federal google analytics',
  /* administer federal google analytics */   'roles' => array(
  /* administer federal google analytics */     'administrator' => 'administrator',
  /* administer federal google analytics */   ),
  /* administer federal google analytics */   'module' => 'usfedgov_google_analytics',
  /* administer federal google analytics */ );

  // Exported permission: 'administer feedback simple'.
  $permissions['administer feedback simple'] = array(
  /* administer feedback simple */   'name' => 'administer feedback simple',
  /* administer feedback simple */   'roles' => array(
  /* administer feedback simple */     'administrator' => 'administrator',
  /* administer feedback simple */   ),
  /* administer feedback simple */   'module' => 'feedback_simple',
  /* administer feedback simple */ );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
  /* administer feeds */   'name' => 'administer feeds',
  /* administer feeds */   'roles' => array(
  /* administer feeds */     'administrator' => 'administrator',
  /* administer feeds */   ),
  /* administer feeds */   'module' => 'feeds',
  /* administer feeds */ );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
  /* administer field collections */   'name' => 'administer field collections',
  /* administer field collections */   'roles' => array(
  /* administer field collections */     'administrator' => 'administrator',
  /* administer field collections */   ),
  /* administer field collections */   'module' => 'field_collection',
  /* administer field collections */ );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
  /* administer fieldgroups */   'name' => 'administer fieldgroups',
  /* administer fieldgroups */   'roles' => array(
  /* administer fieldgroups */     'administrator' => 'administrator',
  /* administer fieldgroups */   ),
  /* administer fieldgroups */   'module' => 'field_group',
  /* administer fieldgroups */ );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
  /* administer file types */   'name' => 'administer file types',
  /* administer file types */   'roles' => array(
  /* administer file types */     'administrator' => 'administrator',
  /* administer file types */   ),
  /* administer file types */   'module' => 'file_entity',
  /* administer file types */ );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
  /* administer files */   'name' => 'administer files',
  /* administer files */   'roles' => array(
  /* administer files */     'administrator' => 'administrator',
  /* administer files */   ),
  /* administer files */   'module' => 'file_entity',
  /* administer files */ );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
  /* administer filters */   'name' => 'administer filters',
  /* administer filters */   'roles' => array(
  /* administer filters */     'administrator' => 'administrator',
  /* administer filters */   ),
  /* administer filters */   'module' => 'filter',
  /* administer filters */ );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
  /* administer flags */   'name' => 'administer flags',
  /* administer flags */   'roles' => array(
  /* administer flags */     'administrator' => 'administrator',
  /* administer flags */   ),
  /* administer flags */   'module' => 'flag',
  /* administer flags */ );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
  /* administer flexslider */   'name' => 'administer flexslider',
  /* administer flexslider */   'roles' => array(
  /* administer flexslider */     'administrator' => 'administrator',
  /* administer flexslider */   ),
  /* administer flexslider */   'module' => 'flexslider',
  /* administer flexslider */ );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
  /* administer group */   'name' => 'administer group',
  /* administer group */   'roles' => array(
  /* administer group */     'administrator' => 'administrator',
  /* administer group */   ),
  /* administer group */   'module' => 'og',
  /* administer group */ );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
  /* administer image styles */   'name' => 'administer image styles',
  /* administer image styles */   'roles' => array(
  /* administer image styles */     'administrator' => 'administrator',
  /* administer image styles */   ),
  /* administer image styles */   'module' => 'image',
  /* administer image styles */ );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
  /* administer languages */   'name' => 'administer languages',
  /* administer languages */   'roles' => array(
  /* administer languages */     'administrator' => 'administrator',
  /* administer languages */   ),
  /* administer languages */   'module' => 'locale',
  /* administer languages */ );

  // Exported permission: 'administer mail templates'.
  $permissions['administer mail templates'] = array(
  /* administer mail templates */   'name' => 'administer mail templates',
  /* administer mail templates */   'roles' => array(
  /* administer mail templates */     'administrator' => 'administrator',
  /* administer mail templates */   ),
  /* administer mail templates */   'module' => 'mail_edit',
  /* administer mail templates */ );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
  /* administer masquerade */   'name' => 'administer masquerade',
  /* administer masquerade */   'roles' => array(
  /* administer masquerade */     'administrator' => 'administrator',
  /* administer masquerade */   ),
  /* administer masquerade */   'module' => 'masquerade',
  /* administer masquerade */ );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
  /* administer media browser */   'name' => 'administer media browser',
  /* administer media browser */   'roles' => array(
  /* administer media browser */     'administrator' => 'administrator',
  /* administer media browser */   ),
  /* administer media browser */   'module' => 'media',
  /* administer media browser */ );

  // Exported permission: 'administer media galleries'.
  $permissions['administer media galleries'] = array(
  /* administer media galleries */   'name' => 'administer media galleries',
  /* administer media galleries */   'roles' => array(
  /* administer media galleries */     'administrator' => 'administrator',
  /* administer media galleries */   ),
  /* administer media galleries */   'module' => 'media_gallery',
  /* administer media galleries */ );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
  /* administer menu */   'name' => 'administer menu',
  /* administer menu */   'roles' => array(
  /* administer menu */     'administrator' => 'administrator',
  /* administer menu */   ),
  /* administer menu */   'module' => 'menu',
  /* administer menu */ );

  // Exported permission: 'administer menu_token'.
  $permissions['administer menu_token'] = array(
  /* administer menu_token */   'name' => 'administer menu_token',
  /* administer menu_token */   'roles' => array(
  /* administer menu_token */     'administrator' => 'administrator',
  /* administer menu_token */   ),
  /* administer menu_token */   'module' => 'menu_token',
  /* administer menu_token */ );

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
  /* administer message types */   'name' => 'administer message types',
  /* administer message types */   'roles' => array(
  /* administer message types */     'administrator' => 'administrator',
  /* administer message types */   ),
  /* administer message types */   'module' => 'message',
  /* administer message types */ );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
  /* administer mini panels */   'name' => 'administer mini panels',
  /* administer mini panels */   'roles' => array(
  /* administer mini panels */     'administrator' => 'administrator',
  /* administer mini panels */   ),
  /* administer mini panels */   'module' => 'panels_mini',
  /* administer mini panels */ );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
  /* administer module filter */   'name' => 'administer module filter',
  /* administer module filter */   'roles' => array(
  /* administer module filter */     'administrator' => 'administrator',
  /* administer module filter */   ),
  /* administer module filter */   'module' => 'module_filter',
  /* administer module filter */ );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
  /* administer modules */   'name' => 'administer modules',
  /* administer modules */   'roles' => array(
  /* administer modules */     'administrator' => 'administrator',
  /* administer modules */   ),
  /* administer modules */   'module' => 'system',
  /* administer modules */ );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
  /* administer nodes */   'name' => 'administer nodes',
  /* administer nodes */   'roles' => array(
  /* administer nodes */     'administrator' => 'administrator',
  /* administer nodes */   ),
  /* administer nodes */   'module' => 'node',
  /* administer nodes */ );

  // Exported permission: 'administer og menu'.
  $permissions['administer og menu'] = array(
  /* administer og menu */   'name' => 'administer og menu',
  /* administer og menu */   'roles' => array(
  /* administer og menu */     'administrator' => 'administrator',
  /* administer og menu */   ),
  /* administer og menu */   'module' => 'og_menu',
  /* administer og menu */ );

  // Exported permission: 'administer og menu configuration'.
  $permissions['administer og menu configuration'] = array(
  /* administer og menu configuration */   'name' => 'administer og menu configuration',
  /* administer og menu configuration */   'roles' => array(
  /* administer og menu configuration */     'administrator' => 'administrator',
  /* administer og menu configuration */   ),
  /* administer og menu configuration */   'module' => 'og_menu',
  /* administer og menu configuration */ );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
  /* administer page manager */   'name' => 'administer page manager',
  /* administer page manager */   'roles' => array(
  /* administer page manager */     'administrator' => 'administrator',
  /* administer page manager */   ),
  /* administer page manager */   'module' => 'page_manager',
  /* administer page manager */ );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
  /* administer pane access */   'name' => 'administer pane access',
  /* administer pane access */   'roles' => array(
  /* administer pane access */     'administrator' => 'administrator',
  /* administer pane access */   ),
  /* administer pane access */   'module' => 'panels',
  /* administer pane access */ );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
  /* administer panel-nodes */   'name' => 'administer panel-nodes',
  /* administer panel-nodes */   'roles' => array(
  /* administer panel-nodes */     'administrator' => 'administrator',
  /* administer panel-nodes */   ),
  /* administer panel-nodes */   'module' => 'panels_node',
  /* administer panel-nodes */ );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
  /* administer panelizer */   'name' => 'administer panelizer',
  /* administer panelizer */   'roles' => array(
  /* administer panelizer */     'administrator' => 'administrator',
  /* administer panelizer */   ),
  /* administer panelizer */   'module' => 'panelizer',
  /* administer panelizer */ );

  // Exported permission: 'administer panelizer node alumni_group content'.
  $permissions['administer panelizer node alumni_group content'] = array(
  /* administer panelizer node alumni_group content */   'name' => 'administer panelizer node alumni_group content',
  /* administer panelizer node alumni_group content */   'roles' => array(
  /* administer panelizer node alumni_group content */     'administrator' => 'administrator',
  /* administer panelizer node alumni_group content */   ),
  /* administer panelizer node alumni_group content */   'module' => 'panelizer',
  /* administer panelizer node alumni_group content */ );

  // Exported permission: 'administer panelizer node alumni_group context'.
  $permissions['administer panelizer node alumni_group context'] = array(
  /* administer panelizer node alumni_group context */   'name' => 'administer panelizer node alumni_group context',
  /* administer panelizer node alumni_group context */   'roles' => array(
  /* administer panelizer node alumni_group context */     'administrator' => 'administrator',
  /* administer panelizer node alumni_group context */   ),
  /* administer panelizer node alumni_group context */   'module' => 'panelizer',
  /* administer panelizer node alumni_group context */ );

  // Exported permission: 'administer panelizer node alumni_group defaults'.
  $permissions['administer panelizer node alumni_group defaults'] = array(
  /* administer panelizer node alumni_group defaults */   'name' => 'administer panelizer node alumni_group defaults',
  /* administer panelizer node alumni_group defaults */   'roles' => array(
  /* administer panelizer node alumni_group defaults */     'administrator' => 'administrator',
  /* administer panelizer node alumni_group defaults */   ),
  /* administer panelizer node alumni_group defaults */   'module' => 'panelizer',
  /* administer panelizer node alumni_group defaults */ );

  // Exported permission: 'administer panelizer node alumni_group layout'.
  $permissions['administer panelizer node alumni_group layout'] = array(
  /* administer panelizer node alumni_group layout */   'name' => 'administer panelizer node alumni_group layout',
  /* administer panelizer node alumni_group layout */   'roles' => array(
  /* administer panelizer node alumni_group layout */     'administrator' => 'administrator',
  /* administer panelizer node alumni_group layout */   ),
  /* administer panelizer node alumni_group layout */   'module' => 'panelizer',
  /* administer panelizer node alumni_group layout */ );

  // Exported permission: 'administer panelizer node alumni_group overview'.
  $permissions['administer panelizer node alumni_group overview'] = array(
  /* administer panelizer node alumni_group overview */   'name' => 'administer panelizer node alumni_group overview',
  /* administer panelizer node alumni_group overview */   'roles' => array(
  /* administer panelizer node alumni_group overview */     'administrator' => 'administrator',
  /* administer panelizer node alumni_group overview */   ),
  /* administer panelizer node alumni_group overview */   'module' => 'panelizer',
  /* administer panelizer node alumni_group overview */ );

  // Exported permission: 'administer panelizer node alumni_group settings'.
  $permissions['administer panelizer node alumni_group settings'] = array(
  /* administer panelizer node alumni_group settings */   'name' => 'administer panelizer node alumni_group settings',
  /* administer panelizer node alumni_group settings */   'roles' => array(
  /* administer panelizer node alumni_group settings */     'administrator' => 'administrator',
  /* administer panelizer node alumni_group settings */   ),
  /* administer panelizer node alumni_group settings */   'module' => 'panelizer',
  /* administer panelizer node alumni_group settings */ );

  // Exported permission: 'administer panelizer node announcement content'.
  $permissions['administer panelizer node announcement content'] = array(
  /* administer panelizer node announcement content */   'name' => 'administer panelizer node announcement content',
  /* administer panelizer node announcement content */   'roles' => array(
  /* administer panelizer node announcement content */     'administrator' => 'administrator',
  /* administer panelizer node announcement content */   ),
  /* administer panelizer node announcement content */   'module' => 'panelizer',
  /* administer panelizer node announcement content */ );

  // Exported permission: 'administer panelizer node announcement context'.
  $permissions['administer panelizer node announcement context'] = array(
  /* administer panelizer node announcement context */   'name' => 'administer panelizer node announcement context',
  /* administer panelizer node announcement context */   'roles' => array(
  /* administer panelizer node announcement context */     'administrator' => 'administrator',
  /* administer panelizer node announcement context */   ),
  /* administer panelizer node announcement context */   'module' => 'panelizer',
  /* administer panelizer node announcement context */ );

  // Exported permission: 'administer panelizer node announcement defaults'.
  $permissions['administer panelizer node announcement defaults'] = array(
  /* administer panelizer node announcement defaults */   'name' => 'administer panelizer node announcement defaults',
  /* administer panelizer node announcement defaults */   'roles' => array(
  /* administer panelizer node announcement defaults */     'administrator' => 'administrator',
  /* administer panelizer node announcement defaults */   ),
  /* administer panelizer node announcement defaults */   'module' => 'panelizer',
  /* administer panelizer node announcement defaults */ );

  // Exported permission: 'administer panelizer node announcement layout'.
  $permissions['administer panelizer node announcement layout'] = array(
  /* administer panelizer node announcement layout */   'name' => 'administer panelizer node announcement layout',
  /* administer panelizer node announcement layout */   'roles' => array(
  /* administer panelizer node announcement layout */     'administrator' => 'administrator',
  /* administer panelizer node announcement layout */   ),
  /* administer panelizer node announcement layout */   'module' => 'panelizer',
  /* administer panelizer node announcement layout */ );

  // Exported permission: 'administer panelizer node announcement overview'.
  $permissions['administer panelizer node announcement overview'] = array(
  /* administer panelizer node announcement overview */   'name' => 'administer panelizer node announcement overview',
  /* administer panelizer node announcement overview */   'roles' => array(
  /* administer panelizer node announcement overview */     'administrator' => 'administrator',
  /* administer panelizer node announcement overview */   ),
  /* administer panelizer node announcement overview */   'module' => 'panelizer',
  /* administer panelizer node announcement overview */ );

  // Exported permission: 'administer panelizer node announcement settings'.
  $permissions['administer panelizer node announcement settings'] = array(
  /* administer panelizer node announcement settings */   'name' => 'administer panelizer node announcement settings',
  /* administer panelizer node announcement settings */   'roles' => array(
  /* administer panelizer node announcement settings */     'administrator' => 'administrator',
  /* administer panelizer node announcement settings */   ),
  /* administer panelizer node announcement settings */   'module' => 'panelizer',
  /* administer panelizer node announcement settings */ );

  // Exported permission: 'administer panelizer node course content'.
  $permissions['administer panelizer node course content'] = array(
  /* administer panelizer node course content */   'name' => 'administer panelizer node course content',
  /* administer panelizer node course content */   'roles' => array(
  /* administer panelizer node course content */     'administrator' => 'administrator',
  /* administer panelizer node course content */   ),
  /* administer panelizer node course content */   'module' => 'panelizer',
  /* administer panelizer node course content */ );

  // Exported permission: 'administer panelizer node course context'.
  $permissions['administer panelizer node course context'] = array(
  /* administer panelizer node course context */   'name' => 'administer panelizer node course context',
  /* administer panelizer node course context */   'roles' => array(
  /* administer panelizer node course context */     'administrator' => 'administrator',
  /* administer panelizer node course context */   ),
  /* administer panelizer node course context */   'module' => 'panelizer',
  /* administer panelizer node course context */ );

  // Exported permission: 'administer panelizer node course defaults'.
  $permissions['administer panelizer node course defaults'] = array(
  /* administer panelizer node course defaults */   'name' => 'administer panelizer node course defaults',
  /* administer panelizer node course defaults */   'roles' => array(
  /* administer panelizer node course defaults */     'administrator' => 'administrator',
  /* administer panelizer node course defaults */   ),
  /* administer panelizer node course defaults */   'module' => 'panelizer',
  /* administer panelizer node course defaults */ );

  // Exported permission: 'administer panelizer node course layout'.
  $permissions['administer panelizer node course layout'] = array(
  /* administer panelizer node course layout */   'name' => 'administer panelizer node course layout',
  /* administer panelizer node course layout */   'roles' => array(
  /* administer panelizer node course layout */     'administrator' => 'administrator',
  /* administer panelizer node course layout */   ),
  /* administer panelizer node course layout */   'module' => 'panelizer',
  /* administer panelizer node course layout */ );

  // Exported permission: 'administer panelizer node course overview'.
  $permissions['administer panelizer node course overview'] = array(
  /* administer panelizer node course overview */   'name' => 'administer panelizer node course overview',
  /* administer panelizer node course overview */   'roles' => array(
  /* administer panelizer node course overview */     'administrator' => 'administrator',
  /* administer panelizer node course overview */   ),
  /* administer panelizer node course overview */   'module' => 'panelizer',
  /* administer panelizer node course overview */ );

  // Exported permission: 'administer panelizer node course settings'.
  $permissions['administer panelizer node course settings'] = array(
  /* administer panelizer node course settings */   'name' => 'administer panelizer node course settings',
  /* administer panelizer node course settings */   'roles' => array(
  /* administer panelizer node course settings */     'administrator' => 'administrator',
  /* administer panelizer node course settings */   ),
  /* administer panelizer node course settings */   'module' => 'panelizer',
  /* administer panelizer node course settings */ );

  // Exported permission: 'administer panelizer node event content'.
  $permissions['administer panelizer node event content'] = array(
  /* administer panelizer node event content */   'name' => 'administer panelizer node event content',
  /* administer panelizer node event content */   'roles' => array(
  /* administer panelizer node event content */     'administrator' => 'administrator',
  /* administer panelizer node event content */   ),
  /* administer panelizer node event content */   'module' => 'panelizer',
  /* administer panelizer node event content */ );

  // Exported permission: 'administer panelizer node event context'.
  $permissions['administer panelizer node event context'] = array(
  /* administer panelizer node event context */   'name' => 'administer panelizer node event context',
  /* administer panelizer node event context */   'roles' => array(
  /* administer panelizer node event context */     'administrator' => 'administrator',
  /* administer panelizer node event context */   ),
  /* administer panelizer node event context */   'module' => 'panelizer',
  /* administer panelizer node event context */ );

  // Exported permission: 'administer panelizer node event defaults'.
  $permissions['administer panelizer node event defaults'] = array(
  /* administer panelizer node event defaults */   'name' => 'administer panelizer node event defaults',
  /* administer panelizer node event defaults */   'roles' => array(
  /* administer panelizer node event defaults */     'administrator' => 'administrator',
  /* administer panelizer node event defaults */   ),
  /* administer panelizer node event defaults */   'module' => 'panelizer',
  /* administer panelizer node event defaults */ );

  // Exported permission: 'administer panelizer node event layout'.
  $permissions['administer panelizer node event layout'] = array(
  /* administer panelizer node event layout */   'name' => 'administer panelizer node event layout',
  /* administer panelizer node event layout */   'roles' => array(
  /* administer panelizer node event layout */     'administrator' => 'administrator',
  /* administer panelizer node event layout */   ),
  /* administer panelizer node event layout */   'module' => 'panelizer',
  /* administer panelizer node event layout */ );

  // Exported permission: 'administer panelizer node event overview'.
  $permissions['administer panelizer node event overview'] = array(
  /* administer panelizer node event overview */   'name' => 'administer panelizer node event overview',
  /* administer panelizer node event overview */   'roles' => array(
  /* administer panelizer node event overview */     'administrator' => 'administrator',
  /* administer panelizer node event overview */   ),
  /* administer panelizer node event overview */   'module' => 'panelizer',
  /* administer panelizer node event overview */ );

  // Exported permission: 'administer panelizer node event settings'.
  $permissions['administer panelizer node event settings'] = array(
  /* administer panelizer node event settings */   'name' => 'administer panelizer node event settings',
  /* administer panelizer node event settings */   'roles' => array(
  /* administer panelizer node event settings */     'administrator' => 'administrator',
  /* administer panelizer node event settings */   ),
  /* administer panelizer node event settings */   'module' => 'panelizer',
  /* administer panelizer node event settings */ );

  // Exported permission: 'administer panelizer node group content'.
  $permissions['administer panelizer node group content'] = array(
  /* administer panelizer node group content */   'name' => 'administer panelizer node group content',
  /* administer panelizer node group content */   'roles' => array(
  /* administer panelizer node group content */     'administrator' => 'administrator',
  /* administer panelizer node group content */   ),
  /* administer panelizer node group content */   'module' => 'panelizer',
  /* administer panelizer node group content */ );

  // Exported permission: 'administer panelizer node group context'.
  $permissions['administer panelizer node group context'] = array(
  /* administer panelizer node group context */   'name' => 'administer panelizer node group context',
  /* administer panelizer node group context */   'roles' => array(
  /* administer panelizer node group context */     'administrator' => 'administrator',
  /* administer panelizer node group context */   ),
  /* administer panelizer node group context */   'module' => 'panelizer',
  /* administer panelizer node group context */ );

  // Exported permission: 'administer panelizer node group defaults'.
  $permissions['administer panelizer node group defaults'] = array(
  /* administer panelizer node group defaults */   'name' => 'administer panelizer node group defaults',
  /* administer panelizer node group defaults */   'roles' => array(
  /* administer panelizer node group defaults */     'administrator' => 'administrator',
  /* administer panelizer node group defaults */   ),
  /* administer panelizer node group defaults */   'module' => 'panelizer',
  /* administer panelizer node group defaults */ );

  // Exported permission: 'administer panelizer node group layout'.
  $permissions['administer panelizer node group layout'] = array(
  /* administer panelizer node group layout */   'name' => 'administer panelizer node group layout',
  /* administer panelizer node group layout */   'roles' => array(
  /* administer panelizer node group layout */     'administrator' => 'administrator',
  /* administer panelizer node group layout */   ),
  /* administer panelizer node group layout */   'module' => 'panelizer',
  /* administer panelizer node group layout */ );

  // Exported permission: 'administer panelizer node group overview'.
  $permissions['administer panelizer node group overview'] = array(
  /* administer panelizer node group overview */   'name' => 'administer panelizer node group overview',
  /* administer panelizer node group overview */   'roles' => array(
  /* administer panelizer node group overview */     'administrator' => 'administrator',
  /* administer panelizer node group overview */   ),
  /* administer panelizer node group overview */   'module' => 'panelizer',
  /* administer panelizer node group overview */ );

  // Exported permission: 'administer panelizer node group settings'.
  $permissions['administer panelizer node group settings'] = array(
  /* administer panelizer node group settings */   'name' => 'administer panelizer node group settings',
  /* administer panelizer node group settings */   'roles' => array(
  /* administer panelizer node group settings */     'administrator' => 'administrator',
  /* administer panelizer node group settings */   ),
  /* administer panelizer node group settings */   'module' => 'panelizer',
  /* administer panelizer node group settings */ );

  // Exported permission: 'administer panelizer node help defaults'.
  $permissions['administer panelizer node help defaults'] = array(
  /* administer panelizer node help defaults */   'name' => 'administer panelizer node help defaults',
  /* administer panelizer node help defaults */   'roles' => array(
  /* administer panelizer node help defaults */     'administrator' => 'administrator',
  /* administer panelizer node help defaults */   ),
  /* administer panelizer node help defaults */   'module' => 'panelizer',
  /* administer panelizer node help defaults */ );

  // Exported permission: 'administer panelizer node media_gallery content'.
  $permissions['administer panelizer node media_gallery content'] = array(
  /* administer panelizer node media_gallery content */   'name' => 'administer panelizer node media_gallery content',
  /* administer panelizer node media_gallery content */   'roles' => array(
  /* administer panelizer node media_gallery content */     'administrator' => 'administrator',
  /* administer panelizer node media_gallery content */   ),
  /* administer panelizer node media_gallery content */   'module' => 'panelizer',
  /* administer panelizer node media_gallery content */ );

  // Exported permission: 'administer panelizer node media_gallery context'.
  $permissions['administer panelizer node media_gallery context'] = array(
  /* administer panelizer node media_gallery context */   'name' => 'administer panelizer node media_gallery context',
  /* administer panelizer node media_gallery context */   'roles' => array(
  /* administer panelizer node media_gallery context */     'administrator' => 'administrator',
  /* administer panelizer node media_gallery context */   ),
  /* administer panelizer node media_gallery context */   'module' => 'panelizer',
  /* administer panelizer node media_gallery context */ );

  // Exported permission: 'administer panelizer node media_gallery defaults'.
  $permissions['administer panelizer node media_gallery defaults'] = array(
  /* administer panelizer node media_gallery defaults */   'name' => 'administer panelizer node media_gallery defaults',
  /* administer panelizer node media_gallery defaults */   'roles' => array(
  /* administer panelizer node media_gallery defaults */     'administrator' => 'administrator',
  /* administer panelizer node media_gallery defaults */   ),
  /* administer panelizer node media_gallery defaults */   'module' => 'panelizer',
  /* administer panelizer node media_gallery defaults */ );

  // Exported permission: 'administer panelizer node media_gallery layout'.
  $permissions['administer panelizer node media_gallery layout'] = array(
  /* administer panelizer node media_gallery layout */   'name' => 'administer panelizer node media_gallery layout',
  /* administer panelizer node media_gallery layout */   'roles' => array(
  /* administer panelizer node media_gallery layout */     'administrator' => 'administrator',
  /* administer panelizer node media_gallery layout */   ),
  /* administer panelizer node media_gallery layout */   'module' => 'panelizer',
  /* administer panelizer node media_gallery layout */ );

  // Exported permission: 'administer panelizer node media_gallery overview'.
  $permissions['administer panelizer node media_gallery overview'] = array(
  /* administer panelizer node media_gallery overview */   'name' => 'administer panelizer node media_gallery overview',
  /* administer panelizer node media_gallery overview */   'roles' => array(
  /* administer panelizer node media_gallery overview */     'administrator' => 'administrator',
  /* administer panelizer node media_gallery overview */   ),
  /* administer panelizer node media_gallery overview */   'module' => 'panelizer',
  /* administer panelizer node media_gallery overview */ );

  // Exported permission: 'administer panelizer node media_gallery settings'.
  $permissions['administer panelizer node media_gallery settings'] = array(
  /* administer panelizer node media_gallery settings */   'name' => 'administer panelizer node media_gallery settings',
  /* administer panelizer node media_gallery settings */   'roles' => array(
  /* administer panelizer node media_gallery settings */     'administrator' => 'administrator',
  /* administer panelizer node media_gallery settings */   ),
  /* administer panelizer node media_gallery settings */   'module' => 'panelizer',
  /* administer panelizer node media_gallery settings */ );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
  /* administer panelizer node news content */   'name' => 'administer panelizer node news content',
  /* administer panelizer node news content */   'roles' => array(
  /* administer panelizer node news content */     'administrator' => 'administrator',
  /* administer panelizer node news content */   ),
  /* administer panelizer node news content */   'module' => 'panelizer',
  /* administer panelizer node news content */ );

  // Exported permission: 'administer panelizer node news context'.
  $permissions['administer panelizer node news context'] = array(
  /* administer panelizer node news context */   'name' => 'administer panelizer node news context',
  /* administer panelizer node news context */   'roles' => array(
  /* administer panelizer node news context */     'administrator' => 'administrator',
  /* administer panelizer node news context */   ),
  /* administer panelizer node news context */   'module' => 'panelizer',
  /* administer panelizer node news context */ );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
  /* administer panelizer node news defaults */   'name' => 'administer panelizer node news defaults',
  /* administer panelizer node news defaults */   'roles' => array(
  /* administer panelizer node news defaults */     'administrator' => 'administrator',
  /* administer panelizer node news defaults */   ),
  /* administer panelizer node news defaults */   'module' => 'panelizer',
  /* administer panelizer node news defaults */ );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
  /* administer panelizer node news layout */   'name' => 'administer panelizer node news layout',
  /* administer panelizer node news layout */   'roles' => array(
  /* administer panelizer node news layout */     'administrator' => 'administrator',
  /* administer panelizer node news layout */   ),
  /* administer panelizer node news layout */   'module' => 'panelizer',
  /* administer panelizer node news layout */ );

  // Exported permission: 'administer panelizer node news overview'.
  $permissions['administer panelizer node news overview'] = array(
  /* administer panelizer node news overview */   'name' => 'administer panelizer node news overview',
  /* administer panelizer node news overview */   'roles' => array(
  /* administer panelizer node news overview */     'administrator' => 'administrator',
  /* administer panelizer node news overview */   ),
  /* administer panelizer node news overview */   'module' => 'panelizer',
  /* administer panelizer node news overview */ );

  // Exported permission: 'administer panelizer node news settings'.
  $permissions['administer panelizer node news settings'] = array(
  /* administer panelizer node news settings */   'name' => 'administer panelizer node news settings',
  /* administer panelizer node news settings */   'roles' => array(
  /* administer panelizer node news settings */     'administrator' => 'administrator',
  /* administer panelizer node news settings */   ),
  /* administer panelizer node news settings */   'module' => 'panelizer',
  /* administer panelizer node news settings */ );

  // Exported permission: 'administer panelizer node organization content'.
  $permissions['administer panelizer node organization content'] = array(
  /* administer panelizer node organization content */   'name' => 'administer panelizer node organization content',
  /* administer panelizer node organization content */   'roles' => array(
  /* administer panelizer node organization content */     'administrator' => 'administrator',
  /* administer panelizer node organization content */   ),
  /* administer panelizer node organization content */   'module' => 'panelizer',
  /* administer panelizer node organization content */ );

  // Exported permission: 'administer panelizer node organization context'.
  $permissions['administer panelizer node organization context'] = array(
  /* administer panelizer node organization context */   'name' => 'administer panelizer node organization context',
  /* administer panelizer node organization context */   'roles' => array(
  /* administer panelizer node organization context */     'administrator' => 'administrator',
  /* administer panelizer node organization context */   ),
  /* administer panelizer node organization context */   'module' => 'panelizer',
  /* administer panelizer node organization context */ );

  // Exported permission: 'administer panelizer node organization defaults'.
  $permissions['administer panelizer node organization defaults'] = array(
  /* administer panelizer node organization defaults */   'name' => 'administer panelizer node organization defaults',
  /* administer panelizer node organization defaults */   'roles' => array(
  /* administer panelizer node organization defaults */     'administrator' => 'administrator',
  /* administer panelizer node organization defaults */   ),
  /* administer panelizer node organization defaults */   'module' => 'panelizer',
  /* administer panelizer node organization defaults */ );

  // Exported permission: 'administer panelizer node organization layout'.
  $permissions['administer panelizer node organization layout'] = array(
  /* administer panelizer node organization layout */   'name' => 'administer panelizer node organization layout',
  /* administer panelizer node organization layout */   'roles' => array(
  /* administer panelizer node organization layout */     'administrator' => 'administrator',
  /* administer panelizer node organization layout */   ),
  /* administer panelizer node organization layout */   'module' => 'panelizer',
  /* administer panelizer node organization layout */ );

  // Exported permission: 'administer panelizer node organization overview'.
  $permissions['administer panelizer node organization overview'] = array(
  /* administer panelizer node organization overview */   'name' => 'administer panelizer node organization overview',
  /* administer panelizer node organization overview */   'roles' => array(
  /* administer panelizer node organization overview */     'administrator' => 'administrator',
  /* administer panelizer node organization overview */   ),
  /* administer panelizer node organization overview */   'module' => 'panelizer',
  /* administer panelizer node organization overview */ );

  // Exported permission: 'administer panelizer node organization settings'.
  $permissions['administer panelizer node organization settings'] = array(
  /* administer panelizer node organization settings */   'name' => 'administer panelizer node organization settings',
  /* administer panelizer node organization settings */   'roles' => array(
  /* administer panelizer node organization settings */     'administrator' => 'administrator',
  /* administer panelizer node organization settings */   ),
  /* administer panelizer node organization settings */   'module' => 'panelizer',
  /* administer panelizer node organization settings */ );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
  /* administer panelizer node page defaults */   'name' => 'administer panelizer node page defaults',
  /* administer panelizer node page defaults */   'roles' => array(
  /* administer panelizer node page defaults */     'administrator' => 'administrator',
  /* administer panelizer node page defaults */   ),
  /* administer panelizer node page defaults */   'module' => 'panelizer',
  /* administer panelizer node page defaults */ );

  // Exported permission: 'administer panelizer node poll defaults'.
  $permissions['administer panelizer node poll defaults'] = array(
  /* administer panelizer node poll defaults */   'name' => 'administer panelizer node poll defaults',
  /* administer panelizer node poll defaults */   'roles' => array(
  /* administer panelizer node poll defaults */     'administrator' => 'administrator',
  /* administer panelizer node poll defaults */   ),
  /* administer panelizer node poll defaults */   'module' => 'panelizer',
  /* administer panelizer node poll defaults */ );

  // Exported permission: 'administer panelizer node post content'.
  $permissions['administer panelizer node post content'] = array(
  /* administer panelizer node post content */   'name' => 'administer panelizer node post content',
  /* administer panelizer node post content */   'roles' => array(
  /* administer panelizer node post content */     'administrator' => 'administrator',
  /* administer panelizer node post content */   ),
  /* administer panelizer node post content */   'module' => 'panelizer',
  /* administer panelizer node post content */ );

  // Exported permission: 'administer panelizer node post context'.
  $permissions['administer panelizer node post context'] = array(
  /* administer panelizer node post context */   'name' => 'administer panelizer node post context',
  /* administer panelizer node post context */   'roles' => array(
  /* administer panelizer node post context */     'administrator' => 'administrator',
  /* administer panelizer node post context */   ),
  /* administer panelizer node post context */   'module' => 'panelizer',
  /* administer panelizer node post context */ );

  // Exported permission: 'administer panelizer node post defaults'.
  $permissions['administer panelizer node post defaults'] = array(
  /* administer panelizer node post defaults */   'name' => 'administer panelizer node post defaults',
  /* administer panelizer node post defaults */   'roles' => array(
  /* administer panelizer node post defaults */     'administrator' => 'administrator',
  /* administer panelizer node post defaults */   ),
  /* administer panelizer node post defaults */   'module' => 'panelizer',
  /* administer panelizer node post defaults */ );

  // Exported permission: 'administer panelizer node post layout'.
  $permissions['administer panelizer node post layout'] = array(
  /* administer panelizer node post layout */   'name' => 'administer panelizer node post layout',
  /* administer panelizer node post layout */   'roles' => array(
  /* administer panelizer node post layout */     'administrator' => 'administrator',
  /* administer panelizer node post layout */   ),
  /* administer panelizer node post layout */   'module' => 'panelizer',
  /* administer panelizer node post layout */ );

  // Exported permission: 'administer panelizer node post overview'.
  $permissions['administer panelizer node post overview'] = array(
  /* administer panelizer node post overview */   'name' => 'administer panelizer node post overview',
  /* administer panelizer node post overview */   'roles' => array(
  /* administer panelizer node post overview */     'administrator' => 'administrator',
  /* administer panelizer node post overview */   ),
  /* administer panelizer node post overview */   'module' => 'panelizer',
  /* administer panelizer node post overview */ );

  // Exported permission: 'administer panelizer node post settings'.
  $permissions['administer panelizer node post settings'] = array(
  /* administer panelizer node post settings */   'name' => 'administer panelizer node post settings',
  /* administer panelizer node post settings */   'roles' => array(
  /* administer panelizer node post settings */     'administrator' => 'administrator',
  /* administer panelizer node post settings */   ),
  /* administer panelizer node post settings */   'module' => 'panelizer',
  /* administer panelizer node post settings */ );

  // Exported permission: 'administer panelizer node program content'.
  $permissions['administer panelizer node program content'] = array(
  /* administer panelizer node program content */   'name' => 'administer panelizer node program content',
  /* administer panelizer node program content */   'roles' => array(
  /* administer panelizer node program content */     'administrator' => 'administrator',
  /* administer panelizer node program content */   ),
  /* administer panelizer node program content */   'module' => 'panelizer',
  /* administer panelizer node program content */ );

  // Exported permission: 'administer panelizer node program context'.
  $permissions['administer panelizer node program context'] = array(
  /* administer panelizer node program context */   'name' => 'administer panelizer node program context',
  /* administer panelizer node program context */   'roles' => array(
  /* administer panelizer node program context */     'administrator' => 'administrator',
  /* administer panelizer node program context */   ),
  /* administer panelizer node program context */   'module' => 'panelizer',
  /* administer panelizer node program context */ );

  // Exported permission: 'administer panelizer node program defaults'.
  $permissions['administer panelizer node program defaults'] = array(
  /* administer panelizer node program defaults */   'name' => 'administer panelizer node program defaults',
  /* administer panelizer node program defaults */   'roles' => array(
  /* administer panelizer node program defaults */     'administrator' => 'administrator',
  /* administer panelizer node program defaults */   ),
  /* administer panelizer node program defaults */   'module' => 'panelizer',
  /* administer panelizer node program defaults */ );

  // Exported permission: 'administer panelizer node program layout'.
  $permissions['administer panelizer node program layout'] = array(
  /* administer panelizer node program layout */   'name' => 'administer panelizer node program layout',
  /* administer panelizer node program layout */   'roles' => array(
  /* administer panelizer node program layout */     'administrator' => 'administrator',
  /* administer panelizer node program layout */   ),
  /* administer panelizer node program layout */   'module' => 'panelizer',
  /* administer panelizer node program layout */ );

  // Exported permission: 'administer panelizer node program overview'.
  $permissions['administer panelizer node program overview'] = array(
  /* administer panelizer node program overview */   'name' => 'administer panelizer node program overview',
  /* administer panelizer node program overview */   'roles' => array(
  /* administer panelizer node program overview */     'administrator' => 'administrator',
  /* administer panelizer node program overview */   ),
  /* administer panelizer node program overview */   'module' => 'panelizer',
  /* administer panelizer node program overview */ );

  // Exported permission: 'administer panelizer node program settings'.
  $permissions['administer panelizer node program settings'] = array(
  /* administer panelizer node program settings */   'name' => 'administer panelizer node program settings',
  /* administer panelizer node program settings */   'roles' => array(
  /* administer panelizer node program settings */     'administrator' => 'administrator',
  /* administer panelizer node program settings */   ),
  /* administer panelizer node program settings */   'module' => 'panelizer',
  /* administer panelizer node program settings */ );

  // Exported permission: 'administer panelizer node publication defaults'.
  $permissions['administer panelizer node publication defaults'] = array(
  /* administer panelizer node publication defaults */   'name' => 'administer panelizer node publication defaults',
  /* administer panelizer node publication defaults */   'roles' => array(
  /* administer panelizer node publication defaults */     'administrator' => 'administrator',
  /* administer panelizer node publication defaults */   ),
  /* administer panelizer node publication defaults */   'module' => 'panelizer',
  /* administer panelizer node publication defaults */ );

  // Exported permission: 'administer panelizer taxonomy_term countries defaults'.
  $permissions['administer panelizer taxonomy_term countries defaults'] = array(
  /* administer panelizer taxonomy_term countries defaults */   'name' => 'administer panelizer taxonomy_term countries defaults',
  /* administer panelizer taxonomy_term countries defaults */   'roles' => array(
  /* administer panelizer taxonomy_term countries defaults */     'administrator' => 'administrator',
  /* administer panelizer taxonomy_term countries defaults */   ),
  /* administer panelizer taxonomy_term countries defaults */   'module' => 'panelizer',
  /* administer panelizer taxonomy_term countries defaults */ );

  // Exported permission: 'administer panelizer taxonomy_term gallery_collections defaults'.
  $permissions['administer panelizer taxonomy_term gallery_collections defaults'] = array(
  /* administer panelizer taxonomy_term gallery_collections defaults */   'name' => 'administer panelizer taxonomy_term gallery_collections defaults',
  /* administer panelizer taxonomy_term gallery_collections defaults */   'roles' => array(
  /* administer panelizer taxonomy_term gallery_collections defaults */     'administrator' => 'administrator',
  /* administer panelizer taxonomy_term gallery_collections defaults */   ),
  /* administer panelizer taxonomy_term gallery_collections defaults */   'module' => 'panelizer',
  /* administer panelizer taxonomy_term gallery_collections defaults */ );

  // Exported permission: 'administer panelizer taxonomy_term help defaults'.
  $permissions['administer panelizer taxonomy_term help defaults'] = array(
  /* administer panelizer taxonomy_term help defaults */   'name' => 'administer panelizer taxonomy_term help defaults',
  /* administer panelizer taxonomy_term help defaults */   'roles' => array(
  /* administer panelizer taxonomy_term help defaults */     'administrator' => 'administrator',
  /* administer panelizer taxonomy_term help defaults */   ),
  /* administer panelizer taxonomy_term help defaults */   'module' => 'panelizer',
  /* administer panelizer taxonomy_term help defaults */ );

  // Exported permission: 'administer panelizer taxonomy_term regions defaults'.
  $permissions['administer panelizer taxonomy_term regions defaults'] = array(
  /* administer panelizer taxonomy_term regions defaults */   'name' => 'administer panelizer taxonomy_term regions defaults',
  /* administer panelizer taxonomy_term regions defaults */   'roles' => array(
  /* administer panelizer taxonomy_term regions defaults */     'administrator' => 'administrator',
  /* administer panelizer taxonomy_term regions defaults */   ),
  /* administer panelizer taxonomy_term regions defaults */   'module' => 'panelizer',
  /* administer panelizer taxonomy_term regions defaults */ );

  // Exported permission: 'administer panelizer taxonomy_term tags defaults'.
  $permissions['administer panelizer taxonomy_term tags defaults'] = array(
  /* administer panelizer taxonomy_term tags defaults */   'name' => 'administer panelizer taxonomy_term tags defaults',
  /* administer panelizer taxonomy_term tags defaults */   'roles' => array(
  /* administer panelizer taxonomy_term tags defaults */     'administrator' => 'administrator',
  /* administer panelizer taxonomy_term tags defaults */   ),
  /* administer panelizer taxonomy_term tags defaults */   'module' => 'panelizer',
  /* administer panelizer taxonomy_term tags defaults */ );

  // Exported permission: 'administer panelizer taxonomy_term topics defaults'.
  $permissions['administer panelizer taxonomy_term topics defaults'] = array(
  /* administer panelizer taxonomy_term topics defaults */   'name' => 'administer panelizer taxonomy_term topics defaults',
  /* administer panelizer taxonomy_term topics defaults */   'roles' => array(
  /* administer panelizer taxonomy_term topics defaults */     'administrator' => 'administrator',
  /* administer panelizer taxonomy_term topics defaults */   ),
  /* administer panelizer taxonomy_term topics defaults */   'module' => 'panelizer',
  /* administer panelizer taxonomy_term topics defaults */ );

  // Exported permission: 'administer panelizer user user content'.
  $permissions['administer panelizer user user content'] = array(
  /* administer panelizer user user content */   'name' => 'administer panelizer user user content',
  /* administer panelizer user user content */   'roles' => array(
  /* administer panelizer user user content */     'administrator' => 'administrator',
  /* administer panelizer user user content */   ),
  /* administer panelizer user user content */   'module' => 'panelizer',
  /* administer panelizer user user content */ );

  // Exported permission: 'administer panelizer user user context'.
  $permissions['administer panelizer user user context'] = array(
  /* administer panelizer user user context */   'name' => 'administer panelizer user user context',
  /* administer panelizer user user context */   'roles' => array(
  /* administer panelizer user user context */     'administrator' => 'administrator',
  /* administer panelizer user user context */   ),
  /* administer panelizer user user context */   'module' => 'panelizer',
  /* administer panelizer user user context */ );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
  /* administer panelizer user user defaults */   'name' => 'administer panelizer user user defaults',
  /* administer panelizer user user defaults */   'roles' => array(
  /* administer panelizer user user defaults */     'administrator' => 'administrator',
  /* administer panelizer user user defaults */   ),
  /* administer panelizer user user defaults */   'module' => 'panelizer',
  /* administer panelizer user user defaults */ );

  // Exported permission: 'administer panelizer user user layout'.
  $permissions['administer panelizer user user layout'] = array(
  /* administer panelizer user user layout */   'name' => 'administer panelizer user user layout',
  /* administer panelizer user user layout */   'roles' => array(
  /* administer panelizer user user layout */     'administrator' => 'administrator',
  /* administer panelizer user user layout */   ),
  /* administer panelizer user user layout */   'module' => 'panelizer',
  /* administer panelizer user user layout */ );

  // Exported permission: 'administer panelizer user user overview'.
  $permissions['administer panelizer user user overview'] = array(
  /* administer panelizer user user overview */   'name' => 'administer panelizer user user overview',
  /* administer panelizer user user overview */   'roles' => array(
  /* administer panelizer user user overview */     'administrator' => 'administrator',
  /* administer panelizer user user overview */   ),
  /* administer panelizer user user overview */   'module' => 'panelizer',
  /* administer panelizer user user overview */ );

  // Exported permission: 'administer panelizer user user settings'.
  $permissions['administer panelizer user user settings'] = array(
  /* administer panelizer user user settings */   'name' => 'administer panelizer user user settings',
  /* administer panelizer user user settings */   'roles' => array(
  /* administer panelizer user user settings */     'administrator' => 'administrator',
  /* administer panelizer user user settings */   ),
  /* administer panelizer user user settings */   'module' => 'panelizer',
  /* administer panelizer user user settings */ );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
  /* administer panels layouts */   'name' => 'administer panels layouts',
  /* administer panels layouts */   'roles' => array(
  /* administer panels layouts */     'administrator' => 'administrator',
  /* administer panels layouts */   ),
  /* administer panels layouts */   'module' => 'panels',
  /* administer panels layouts */ );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
  /* administer panels styles */   'name' => 'administer panels styles',
  /* administer panels styles */   'roles' => array(
  /* administer panels styles */     'administrator' => 'administrator',
  /* administer panels styles */   ),
  /* administer panels styles */   'module' => 'panels',
  /* administer panels styles */ );

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
  /* administer password policies */   'name' => 'administer password policies',
  /* administer password policies */   'roles' => array(
  /* administer password policies */     'administrator' => 'administrator',
  /* administer password policies */   ),
  /* administer password policies */   'module' => 'password_policy',
  /* administer password policies */ );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
  /* administer pathauto */   'name' => 'administer pathauto',
  /* administer pathauto */   'roles' => array(
  /* administer pathauto */     'administrator' => 'administrator',
  /* administer pathauto */   ),
  /* administer pathauto */   'module' => 'pathauto',
  /* administer pathauto */ );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
  /* administer permissions */   'name' => 'administer permissions',
  /* administer permissions */   'roles' => array(
  /* administer permissions */     'administrator' => 'administrator',
  /* administer permissions */   ),
  /* administer permissions */   'module' => 'user',
  /* administer permissions */ );

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
  /* administer privatemsg settings */   'name' => 'administer privatemsg settings',
  /* administer privatemsg settings */   'roles' => array(
  /* administer privatemsg settings */     'administrator' => 'administrator',
  /* administer privatemsg settings */   ),
  /* administer privatemsg settings */   'module' => 'privatemsg',
  /* administer privatemsg settings */ );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
  /* administer redirects */   'name' => 'administer redirects',
  /* administer redirects */   'roles' => array(
  /* administer redirects */     'administrator' => 'administrator',
  /* administer redirects */   ),
  /* administer redirects */   'module' => 'redirect',
  /* administer redirects */ );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
  /* administer rules */   'name' => 'administer rules',
  /* administer rules */   'roles' => array(
  /* administer rules */     'administrator' => 'administrator',
  /* administer rules */   ),
  /* administer rules */   'module' => 'rules',
  /* administer rules */ );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
  /* administer scheduler */   'name' => 'administer scheduler',
  /* administer scheduler */   'roles' => array(
  /* administer scheduler */     'administrator' => 'administrator',
  /* administer scheduler */   ),
  /* administer scheduler */   'module' => 'scheduler',
  /* administer scheduler */ );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
  /* administer search_api */   'name' => 'administer search_api',
  /* administer search_api */   'roles' => array(
  /* administer search_api */     'administrator' => 'administrator',
  /* administer search_api */   ),
  /* administer search_api */   'module' => 'search_api',
  /* administer search_api */ );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
  /* administer site configuration */   'name' => 'administer site configuration',
  /* administer site configuration */   'roles' => array(
  /* administer site configuration */     'administrator' => 'administrator',
  /* administer site configuration */   ),
  /* administer site configuration */   'module' => 'system',
  /* administer site configuration */ );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
  /* administer software updates */   'name' => 'administer software updates',
  /* administer software updates */   'roles' => array(
  /* administer software updates */     'administrator' => 'administrator',
  /* administer software updates */   ),
  /* administer software updates */   'module' => 'system',
  /* administer software updates */ );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
  /* administer statistics */   'name' => 'administer statistics',
  /* administer statistics */   'roles' => array(
  /* administer statistics */     'administrator' => 'administrator',
  /* administer statistics */   ),
  /* administer statistics */   'module' => 'statistics',
  /* administer statistics */ );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
  /* administer taxonomy */   'name' => 'administer taxonomy',
  /* administer taxonomy */   'roles' => array(
  /* administer taxonomy */     'administrator' => 'administrator',
  /* administer taxonomy */   ),
  /* administer taxonomy */   'module' => 'taxonomy',
  /* administer taxonomy */ );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
  /* administer themes */   'name' => 'administer themes',
  /* administer themes */   'roles' => array(
  /* administer themes */     'administrator' => 'administrator',
  /* administer themes */   ),
  /* administer themes */   'module' => 'system',
  /* administer themes */ );

  // Exported permission: 'administer tmgmt'.
  $permissions['administer tmgmt'] = array(
  /* administer tmgmt */   'name' => 'administer tmgmt',
  /* administer tmgmt */   'roles' => array(
  /* administer tmgmt */     'administrator' => 'administrator',
  /* administer tmgmt */   ),
  /* administer tmgmt */   'module' => 'tmgmt',
  /* administer tmgmt */ );

  // Exported permission: 'administer translation tasks'.
  $permissions['administer translation tasks'] = array(
  /* administer translation tasks */   'name' => 'administer translation tasks',
  /* administer translation tasks */   'roles' => array(
  /* administer translation tasks */     'administrator' => 'administrator',
  /* administer translation tasks */     'translator' => 'translator',
  /* administer translation tasks */   ),
  /* administer translation tasks */   'module' => 'tmgmt_local',
  /* administer translation tasks */ );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
  /* administer url aliases */   'name' => 'administer url aliases',
  /* administer url aliases */   'roles' => array(
  /* administer url aliases */     'administrator' => 'administrator',
  /* administer url aliases */   ),
  /* administer url aliases */   'module' => 'path',
  /* administer url aliases */ );

  // Exported permission: 'administer user relationships'.
  $permissions['administer user relationships'] = array(
  /* administer user relationships */   'name' => 'administer user relationships',
  /* administer user relationships */   'roles' => array(
  /* administer user relationships */     'administrator' => 'administrator',
  /* administer user relationships */   ),
  /* administer user relationships */   'module' => 'user_relationships',
  /* administer user relationships */ );

  // Exported permission: 'administer user subscriptions'.
  $permissions['administer user subscriptions'] = array(
  /* administer user subscriptions */   'name' => 'administer user subscriptions',
  /* administer user subscriptions */   'roles' => array(
  /* administer user subscriptions */     'administrator' => 'administrator',
  /* administer user subscriptions */   ),
  /* administer user subscriptions */   'module' => 'subscriptions',
  /* administer user subscriptions */ );

  // Exported permission: 'administer userpoints'.
  $permissions['administer userpoints'] = array(
  /* administer userpoints */   'name' => 'administer userpoints',
  /* administer userpoints */   'roles' => array(
  /* administer userpoints */     'administrator' => 'administrator',
  /* administer userpoints */   ),
  /* administer userpoints */   'module' => 'userpoints',
  /* administer userpoints */ );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
  /* administer users */   'name' => 'administer users',
  /* administer users */   'roles' => array(
  /* administer users */     'administrator' => 'administrator',
  /* administer users */   ),
  /* administer users */   'module' => 'user',
  /* administer users */ );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
  /* administer views */   'name' => 'administer views',
  /* administer views */   'roles' => array(
  /* administer views */     'administrator' => 'administrator',
  /* administer views */   ),
  /* administer views */   'module' => 'views',
  /* administer views */ );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
  /* administer voting api */   'name' => 'administer voting api',
  /* administer voting api */   'roles' => array(
  /* administer voting api */     'administrator' => 'administrator',
  /* administer voting api */   ),
  /* administer voting api */   'module' => 'votingapi',
  /* administer voting api */ );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
  /* advanced migration information */   'name' => 'advanced migration information',
  /* advanced migration information */   'roles' => array(
  /* advanced migration information */     'administrator' => 'administrator',
  /* advanced migration information */   ),
  /* advanced migration information */   'module' => 'migrate',
  /* advanced migration information */ );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
  /* allow disabling privatemsg */   'name' => 'allow disabling privatemsg',
  /* allow disabling privatemsg */   'roles' => array(
  /* allow disabling privatemsg */     'administrator' => 'administrator',
  /* allow disabling privatemsg */     'authenticated user' => 'authenticated user',
  /* allow disabling privatemsg */   ),
  /* allow disabling privatemsg */   'module' => 'privatemsg',
  /* allow disabling privatemsg */ );

  // Exported permission: 'answer any organic group invitation'.
  $permissions['answer any organic group invitation'] = array(
  /* answer any organic group invitation */   'name' => 'answer any organic group invitation',
  /* answer any organic group invitation */   'roles' => array(
  /* answer any organic group invitation */     'administrator' => 'administrator',
  /* answer any organic group invitation */     'authenticated user' => 'authenticated user',
  /* answer any organic group invitation */   ),
  /* answer any organic group invitation */   'module' => 'og_invite',
  /* answer any organic group invitation */ );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
  /* block IP addresses */   'name' => 'block IP addresses',
  /* block IP addresses */   'roles' => array(
  /* block IP addresses */     'administrator' => 'administrator',
  /* block IP addresses */   ),
  /* block IP addresses */   'module' => 'system',
  /* block IP addresses */ );

  // Exported permission: 'bulk-administer user subscriptions'.
  $permissions['bulk-administer user subscriptions'] = array(
  /* bulk-administer user subscriptions */   'name' => 'bulk-administer user subscriptions',
  /* bulk-administer user subscriptions */   'roles' => array(
  /* bulk-administer user subscriptions */     'administrator' => 'administrator',
  /* bulk-administer user subscriptions */   ),
  /* bulk-administer user subscriptions */   'module' => 'subscriptions',
  /* bulk-administer user subscriptions */ );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
  /* bypass file access */   'name' => 'bypass file access',
  /* bypass file access */   'roles' => array(
  /* bypass file access */     'administrator' => 'administrator',
  /* bypass file access */     'file admin' => 'file admin',
  /* bypass file access */   ),
  /* bypass file access */   'module' => 'file_entity',
  /* bypass file access */ );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
  /* bypass node access */   'name' => 'bypass node access',
  /* bypass node access */   'roles' => array(
  /* bypass node access */     'administrator' => 'administrator',
  /* bypass node access */   ),
  /* bypass node access */   'module' => 'node',
  /* bypass node access */ );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
  /* bypass rules access */   'name' => 'bypass rules access',
  /* bypass rules access */   'roles' => array(
  /* bypass rules access */     'administrator' => 'administrator',
  /* bypass rules access */   ),
  /* bypass rules access */   'module' => 'rules',
  /* bypass rules access */ );

  // Exported permission: 'can have 1 relationships'.
  $permissions['can have 1 relationships'] = array(
  /* can have 1 relationships */   'name' => 'can have 1 relationships',
  /* can have 1 relationships */   'roles' => array(
  /* can have 1 relationships */     'administrator' => 'administrator',
  /* can have 1 relationships */     'authenticated user' => 'authenticated user',
  /* can have 1 relationships */   ),
  /* can have 1 relationships */   'module' => 'user_relationships',
  /* can have 1 relationships */ );

  // Exported permission: 'can request 1 relationships'.
  $permissions['can request 1 relationships'] = array(
  /* can request 1 relationships */   'name' => 'can request 1 relationships',
  /* can request 1 relationships */   'roles' => array(
  /* can request 1 relationships */     'administrator' => 'administrator',
  /* can request 1 relationships */     'authenticated user' => 'authenticated user',
  /* can request 1 relationships */   ),
  /* can request 1 relationships */   'module' => 'user_relationships',
  /* can request 1 relationships */ );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
  /* cancel account */   'name' => 'cancel account',
  /* cancel account */   'roles' => array(
  /* cancel account */     'administrator' => 'administrator',
  /* cancel account */   ),
  /* cancel account */   'module' => 'user',
  /* cancel account */ );

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
  /* cancel own vote */   'name' => 'cancel own vote',
  /* cancel own vote */   'roles' => array(
  /* cancel own vote */     'administrator' => 'administrator',
  /* cancel own vote */     'authenticated user' => 'authenticated user',
  /* cancel own vote */   ),
  /* cancel own vote */   'module' => 'poll',
  /* cancel own vote */ );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
  /* change layouts in place editing */   'name' => 'change layouts in place editing',
  /* change layouts in place editing */   'roles' => array(
  /* change layouts in place editing */     'administrator' => 'administrator',
  /* change layouts in place editing */   ),
  /* change layouts in place editing */   'module' => 'panels',
  /* change layouts in place editing */ );

  // Exported permission: 'change own logout threshold'.
  $permissions['change own logout threshold'] = array(
  /* change own logout threshold */   'name' => 'change own logout threshold',
  /* change own logout threshold */   'roles' => array(
  /* change own logout threshold */     'administrator' => 'administrator',
  /* change own logout threshold */   ),
  /* change own logout threshold */   'module' => 'autologout',
  /* change own logout threshold */ );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
  /* change own username */   'name' => 'change own username',
  /* change own username */   'roles' => array(
  /* change own username */     'administrator' => 'administrator',
  /* change own username */   ),
  /* change own username */   'module' => 'user',
  /* change own username */ );

  // Exported permission: 'clear topics feeds'.
  $permissions['clear topics feeds'] = array(
  /* clear topics feeds */   'name' => 'clear topics feeds',
  /* clear topics feeds */   'roles' => array(
  /* clear topics feeds */     'administrator' => 'administrator',
  /* clear topics feeds */   ),
  /* clear topics feeds */   'module' => 'feeds',
  /* clear topics feeds */ );

  // Exported permission: 'create alumni_group content'.
  $permissions['create alumni_group content'] = array(
  /* create alumni_group content */   'name' => 'create alumni_group content',
  /* create alumni_group content */   'roles' => array(
  /* create alumni_group content */     'administrator' => 'administrator',
  /* create alumni_group content */   ),
  /* create alumni_group content */   'module' => 'node',
  /* create alumni_group content */ );

  // Exported permission: 'create announcement content'.
  $permissions['create announcement content'] = array(
  /* create announcement content */   'name' => 'create announcement content',
  /* create announcement content */   'roles' => array(
  /* create announcement content */     'administrator' => 'administrator',
  /* create announcement content */   ),
  /* create announcement content */   'module' => 'node',
  /* create announcement content */ );

  // Exported permission: 'create coi content'.
  $permissions['create coi content'] = array(
  /* create coi content */   'name' => 'create coi content',
  /* create coi content */   'roles' => array(
  /* create coi content */     'administrator' => 'administrator',
  /* create coi content */   ),
  /* create coi content */   'module' => 'node',
  /* create coi content */ );

  // Exported permission: 'create course content'.
  $permissions['create course content'] = array(
  /* create course content */   'name' => 'create course content',
  /* create course content */   'roles' => array(
  /* create course content */     'administrator' => 'administrator',
  /* create course content */   ),
  /* create course content */   'module' => 'node',
  /* create course content */ );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
  /* create event content */   'name' => 'create event content',
  /* create event content */   'roles' => array(
  /* create event content */     'administrator' => 'administrator',
  /* create event content */   ),
  /* create event content */   'module' => 'node',
  /* create event content */ );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
  /* create files */   'name' => 'create files',
  /* create files */   'roles' => array(
  /* create files */     'administrator' => 'administrator',
  /* create files */     'authenticated user' => 'authenticated user',
  /* create files */   ),
  /* create files */   'module' => 'file_entity',
  /* create files */ );

  // Exported permission: 'create group content'.
  $permissions['create group content'] = array(
  /* create group content */   'name' => 'create group content',
  /* create group content */   'roles' => array(
  /* create group content */     'administrator' => 'administrator',
  /* create group content */   ),
  /* create group content */   'module' => 'node',
  /* create group content */ );

  // Exported permission: 'create help content'.
  $permissions['create help content'] = array(
  /* create help content */   'name' => 'create help content',
  /* create help content */   'roles' => array(
  /* create help content */     'administrator' => 'administrator',
  /* create help content */   ),
  /* create help content */   'module' => 'node',
  /* create help content */ );

  // Exported permission: 'create media_gallery content'.
  $permissions['create media_gallery content'] = array(
  /* create media_gallery content */   'name' => 'create media_gallery content',
  /* create media_gallery content */   'roles' => array(
  /* create media_gallery content */     'administrator' => 'administrator',
  /* create media_gallery content */   ),
  /* create media_gallery content */   'module' => 'node',
  /* create media_gallery content */ );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
  /* create messages */   'name' => 'create messages',
  /* create messages */   'roles' => array(
  /* create messages */     'administrator' => 'administrator',
  /* create messages */   ),
  /* create messages */   'module' => 'message',
  /* create messages */ );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
  /* create mini panels */   'name' => 'create mini panels',
  /* create mini panels */   'roles' => array(
  /* create mini panels */     'administrator' => 'administrator',
  /* create mini panels */   ),
  /* create mini panels */   'module' => 'panels_mini',
  /* create mini panels */ );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
  /* create news content */   'name' => 'create news content',
  /* create news content */   'roles' => array(
  /* create news content */     'administrator' => 'administrator',
  /* create news content */   ),
  /* create news content */   'module' => 'node',
  /* create news content */ );

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
  /* create organization content */   'name' => 'create organization content',
  /* create organization content */   'roles' => array(
  /* create organization content */     'administrator' => 'administrator',
  /* create organization content */   ),
  /* create organization content */   'module' => 'node',
  /* create organization content */ );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
  /* create page content */   'name' => 'create page content',
  /* create page content */   'roles' => array(
  /* create page content */     'administrator' => 'administrator',
  /* create page content */   ),
  /* create page content */   'module' => 'node',
  /* create page content */ );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
  /* create panel content */   'name' => 'create panel content',
  /* create panel content */   'roles' => array(
  /* create panel content */     'administrator' => 'administrator',
  /* create panel content */   ),
  /* create panel content */   'module' => 'node',
  /* create panel content */ );

  // Exported permission: 'create poll content'.
  $permissions['create poll content'] = array(
  /* create poll content */   'name' => 'create poll content',
  /* create poll content */   'roles' => array(
  /* create poll content */     'administrator' => 'administrator',
  /* create poll content */   ),
  /* create poll content */   'module' => 'node',
  /* create poll content */ );

  // Exported permission: 'create post content'.
  $permissions['create post content'] = array(
  /* create post content */   'name' => 'create post content',
  /* create post content */   'roles' => array(
  /* create post content */     'administrator' => 'administrator',
  /* create post content */   ),
  /* create post content */   'module' => 'node',
  /* create post content */ );

  // Exported permission: 'create private message tags'.
  $permissions['create private message tags'] = array(
  /* create private message tags */   'name' => 'create private message tags',
  /* create private message tags */   'roles' => array(
  /* create private message tags */     'administrator' => 'administrator',
  /* create private message tags */   ),
  /* create private message tags */   'module' => 'privatemsg_filter',
  /* create private message tags */ );

  // Exported permission: 'create program content'.
  $permissions['create program content'] = array(
  /* create program content */   'name' => 'create program content',
  /* create program content */   'roles' => array(
  /* create program content */     'administrator' => 'administrator',
  /* create program content */   ),
  /* create program content */   'module' => 'node',
  /* create program content */ );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
  /* create publication content */   'name' => 'create publication content',
  /* create publication content */   'roles' => array(
  /* create publication content */     'administrator' => 'administrator',
  /* create publication content */   ),
  /* create publication content */   'module' => 'node',
  /* create publication content */ );

  // Exported permission: 'create translation jobs'.
  $permissions['create translation jobs'] = array(
  /* create translation jobs */   'name' => 'create translation jobs',
  /* create translation jobs */   'roles' => array(
  /* create translation jobs */     'administrator' => 'administrator',
  /* create translation jobs */     'translator' => 'translator',
  /* create translation jobs */   ),
  /* create translation jobs */   'module' => 'tmgmt',
  /* create translation jobs */ );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
  /* create url aliases */   'name' => 'create url aliases',
  /* create url aliases */   'roles' => array(
  /* create url aliases */     'administrator' => 'administrator',
  /* create url aliases */   ),
  /* create url aliases */   'module' => 'path',
  /* create url aliases */ );

  // Exported permission: 'delete 1 relationships'.
  $permissions['delete 1 relationships'] = array(
  /* delete 1 relationships */   'name' => 'delete 1 relationships',
  /* delete 1 relationships */   'roles' => array(
  /* delete 1 relationships */     'administrator' => 'administrator',
  /* delete 1 relationships */     'authenticated user' => 'authenticated user',
  /* delete 1 relationships */   ),
  /* delete 1 relationships */   'module' => 'user_relationships',
  /* delete 1 relationships */ );

  // Exported permission: 'delete any alumni_group content'.
  $permissions['delete any alumni_group content'] = array(
  /* delete any alumni_group content */   'name' => 'delete any alumni_group content',
  /* delete any alumni_group content */   'roles' => array(
  /* delete any alumni_group content */     'administrator' => 'administrator',
  /* delete any alumni_group content */   ),
  /* delete any alumni_group content */   'module' => 'node',
  /* delete any alumni_group content */ );

  // Exported permission: 'delete any announcement content'.
  $permissions['delete any announcement content'] = array(
  /* delete any announcement content */   'name' => 'delete any announcement content',
  /* delete any announcement content */   'roles' => array(
  /* delete any announcement content */     'administrator' => 'administrator',
  /* delete any announcement content */   ),
  /* delete any announcement content */   'module' => 'node',
  /* delete any announcement content */ );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
  /* delete any audio files */   'name' => 'delete any audio files',
  /* delete any audio files */   'roles' => array(
  /* delete any audio files */     'administrator' => 'administrator',
  /* delete any audio files */   ),
  /* delete any audio files */   'module' => 'file_entity',
  /* delete any audio files */ );

  // Exported permission: 'delete any coi content'.
  $permissions['delete any coi content'] = array(
  /* delete any coi content */   'name' => 'delete any coi content',
  /* delete any coi content */   'roles' => array(
  /* delete any coi content */     'administrator' => 'administrator',
  /* delete any coi content */   ),
  /* delete any coi content */   'module' => 'node',
  /* delete any coi content */ );

  // Exported permission: 'delete any course content'.
  $permissions['delete any course content'] = array(
  /* delete any course content */   'name' => 'delete any course content',
  /* delete any course content */   'roles' => array(
  /* delete any course content */     'administrator' => 'administrator',
  /* delete any course content */   ),
  /* delete any course content */   'module' => 'node',
  /* delete any course content */ );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
  /* delete any document files */   'name' => 'delete any document files',
  /* delete any document files */   'roles' => array(
  /* delete any document files */     'administrator' => 'administrator',
  /* delete any document files */   ),
  /* delete any document files */   'module' => 'file_entity',
  /* delete any document files */ );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
  /* delete any entityform */   'name' => 'delete any entityform',
  /* delete any entityform */   'roles' => array(
  /* delete any entityform */     'administrator' => 'administrator',
  /* delete any entityform */   ),
  /* delete any entityform */   'module' => 'entityform',
  /* delete any entityform */ );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
  /* delete any event content */   'name' => 'delete any event content',
  /* delete any event content */   'roles' => array(
  /* delete any event content */     'administrator' => 'administrator',
  /* delete any event content */   ),
  /* delete any event content */   'module' => 'node',
  /* delete any event content */ );

  // Exported permission: 'delete any group content'.
  $permissions['delete any group content'] = array(
  /* delete any group content */   'name' => 'delete any group content',
  /* delete any group content */   'roles' => array(
  /* delete any group content */     'administrator' => 'administrator',
  /* delete any group content */   ),
  /* delete any group content */   'module' => 'node',
  /* delete any group content */ );

  // Exported permission: 'delete any help content'.
  $permissions['delete any help content'] = array(
  /* delete any help content */   'name' => 'delete any help content',
  /* delete any help content */   'roles' => array(
  /* delete any help content */     'administrator' => 'administrator',
  /* delete any help content */   ),
  /* delete any help content */   'module' => 'node',
  /* delete any help content */ );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
  /* delete any image files */   'name' => 'delete any image files',
  /* delete any image files */   'roles' => array(
  /* delete any image files */     'administrator' => 'administrator',
  /* delete any image files */   ),
  /* delete any image files */   'module' => 'file_entity',
  /* delete any image files */ );

  // Exported permission: 'delete any media_gallery content'.
  $permissions['delete any media_gallery content'] = array(
  /* delete any media_gallery content */   'name' => 'delete any media_gallery content',
  /* delete any media_gallery content */   'roles' => array(
  /* delete any media_gallery content */     'administrator' => 'administrator',
  /* delete any media_gallery content */   ),
  /* delete any media_gallery content */   'module' => 'node',
  /* delete any media_gallery content */ );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
  /* delete any news content */   'name' => 'delete any news content',
  /* delete any news content */   'roles' => array(
  /* delete any news content */     'administrator' => 'administrator',
  /* delete any news content */   ),
  /* delete any news content */   'module' => 'node',
  /* delete any news content */ );

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
  /* delete any organization content */   'name' => 'delete any organization content',
  /* delete any organization content */   'roles' => array(
  /* delete any organization content */     'administrator' => 'administrator',
  /* delete any organization content */   ),
  /* delete any organization content */   'module' => 'node',
  /* delete any organization content */ );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
  /* delete any page content */   'name' => 'delete any page content',
  /* delete any page content */   'roles' => array(
  /* delete any page content */     'administrator' => 'administrator',
  /* delete any page content */   ),
  /* delete any page content */   'module' => 'node',
  /* delete any page content */ );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
  /* delete any panel content */   'name' => 'delete any panel content',
  /* delete any panel content */   'roles' => array(
  /* delete any panel content */     'administrator' => 'administrator',
  /* delete any panel content */   ),
  /* delete any panel content */   'module' => 'node',
  /* delete any panel content */ );

  // Exported permission: 'delete any poll content'.
  $permissions['delete any poll content'] = array(
  /* delete any poll content */   'name' => 'delete any poll content',
  /* delete any poll content */   'roles' => array(
  /* delete any poll content */     'administrator' => 'administrator',
  /* delete any poll content */   ),
  /* delete any poll content */   'module' => 'node',
  /* delete any poll content */ );

  // Exported permission: 'delete any post content'.
  $permissions['delete any post content'] = array(
  /* delete any post content */   'name' => 'delete any post content',
  /* delete any post content */   'roles' => array(
  /* delete any post content */     'administrator' => 'administrator',
  /* delete any post content */   ),
  /* delete any post content */   'module' => 'node',
  /* delete any post content */ );

  // Exported permission: 'delete any program content'.
  $permissions['delete any program content'] = array(
  /* delete any program content */   'name' => 'delete any program content',
  /* delete any program content */   'roles' => array(
  /* delete any program content */     'administrator' => 'administrator',
  /* delete any program content */   ),
  /* delete any program content */   'module' => 'node',
  /* delete any program content */ );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
  /* delete any publication content */   'name' => 'delete any publication content',
  /* delete any publication content */   'roles' => array(
  /* delete any publication content */     'administrator' => 'administrator',
  /* delete any publication content */   ),
  /* delete any publication content */   'module' => 'node',
  /* delete any publication content */ );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
  /* delete any video files */   'name' => 'delete any video files',
  /* delete any video files */   'roles' => array(
  /* delete any video files */     'administrator' => 'administrator',
  /* delete any video files */   ),
  /* delete any video files */   'module' => 'file_entity',
  /* delete any video files */ );

  // Exported permission: 'delete own alumni_group content'.
  $permissions['delete own alumni_group content'] = array(
  /* delete own alumni_group content */   'name' => 'delete own alumni_group content',
  /* delete own alumni_group content */   'roles' => array(
  /* delete own alumni_group content */     'administrator' => 'administrator',
  /* delete own alumni_group content */   ),
  /* delete own alumni_group content */   'module' => 'node',
  /* delete own alumni_group content */ );

  // Exported permission: 'delete own announcement content'.
  $permissions['delete own announcement content'] = array(
  /* delete own announcement content */   'name' => 'delete own announcement content',
  /* delete own announcement content */   'roles' => array(
  /* delete own announcement content */     'administrator' => 'administrator',
  /* delete own announcement content */   ),
  /* delete own announcement content */   'module' => 'node',
  /* delete own announcement content */ );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
  /* delete own audio files */   'name' => 'delete own audio files',
  /* delete own audio files */   'roles' => array(
  /* delete own audio files */     'administrator' => 'administrator',
  /* delete own audio files */   ),
  /* delete own audio files */   'module' => 'file_entity',
  /* delete own audio files */ );

  // Exported permission: 'delete own coi content'.
  $permissions['delete own coi content'] = array(
  /* delete own coi content */   'name' => 'delete own coi content',
  /* delete own coi content */   'roles' => array(
  /* delete own coi content */     'administrator' => 'administrator',
  /* delete own coi content */   ),
  /* delete own coi content */   'module' => 'node',
  /* delete own coi content */ );

  // Exported permission: 'delete own course content'.
  $permissions['delete own course content'] = array(
  /* delete own course content */   'name' => 'delete own course content',
  /* delete own course content */   'roles' => array(
  /* delete own course content */     'administrator' => 'administrator',
  /* delete own course content */   ),
  /* delete own course content */   'module' => 'node',
  /* delete own course content */ );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
  /* delete own document files */   'name' => 'delete own document files',
  /* delete own document files */   'roles' => array(
  /* delete own document files */     'administrator' => 'administrator',
  /* delete own document files */   ),
  /* delete own document files */   'module' => 'file_entity',
  /* delete own document files */ );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
  /* delete own entityform */   'name' => 'delete own entityform',
  /* delete own entityform */   'roles' => array(
  /* delete own entityform */     'administrator' => 'administrator',
  /* delete own entityform */   ),
  /* delete own entityform */   'module' => 'entityform',
  /* delete own entityform */ );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
  /* delete own event content */   'name' => 'delete own event content',
  /* delete own event content */   'roles' => array(
  /* delete own event content */     'administrator' => 'administrator',
  /* delete own event content */   ),
  /* delete own event content */   'module' => 'node',
  /* delete own event content */ );

  // Exported permission: 'delete own group content'.
  $permissions['delete own group content'] = array(
  /* delete own group content */   'name' => 'delete own group content',
  /* delete own group content */   'roles' => array(
  /* delete own group content */     'administrator' => 'administrator',
  /* delete own group content */   ),
  /* delete own group content */   'module' => 'node',
  /* delete own group content */ );

  // Exported permission: 'delete own help content'.
  $permissions['delete own help content'] = array(
  /* delete own help content */   'name' => 'delete own help content',
  /* delete own help content */   'roles' => array(
  /* delete own help content */     'administrator' => 'administrator',
  /* delete own help content */   ),
  /* delete own help content */   'module' => 'node',
  /* delete own help content */ );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
  /* delete own image files */   'name' => 'delete own image files',
  /* delete own image files */   'roles' => array(
  /* delete own image files */     'administrator' => 'administrator',
  /* delete own image files */   ),
  /* delete own image files */   'module' => 'file_entity',
  /* delete own image files */ );

  // Exported permission: 'delete own media_gallery content'.
  $permissions['delete own media_gallery content'] = array(
  /* delete own media_gallery content */   'name' => 'delete own media_gallery content',
  /* delete own media_gallery content */   'roles' => array(
  /* delete own media_gallery content */     'administrator' => 'administrator',
  /* delete own media_gallery content */   ),
  /* delete own media_gallery content */   'module' => 'node',
  /* delete own media_gallery content */ );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
  /* delete own news content */   'name' => 'delete own news content',
  /* delete own news content */   'roles' => array(
  /* delete own news content */     'administrator' => 'administrator',
  /* delete own news content */   ),
  /* delete own news content */   'module' => 'node',
  /* delete own news content */ );

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
  /* delete own organization content */   'name' => 'delete own organization content',
  /* delete own organization content */   'roles' => array(
  /* delete own organization content */     'administrator' => 'administrator',
  /* delete own organization content */   ),
  /* delete own organization content */   'module' => 'node',
  /* delete own organization content */ );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
  /* delete own page content */   'name' => 'delete own page content',
  /* delete own page content */   'roles' => array(
  /* delete own page content */     'administrator' => 'administrator',
  /* delete own page content */   ),
  /* delete own page content */   'module' => 'node',
  /* delete own page content */ );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
  /* delete own panel content */   'name' => 'delete own panel content',
  /* delete own panel content */   'roles' => array(
  /* delete own panel content */     'administrator' => 'administrator',
  /* delete own panel content */   ),
  /* delete own panel content */   'module' => 'node',
  /* delete own panel content */ );

  // Exported permission: 'delete own poll content'.
  $permissions['delete own poll content'] = array(
  /* delete own poll content */   'name' => 'delete own poll content',
  /* delete own poll content */   'roles' => array(
  /* delete own poll content */     'administrator' => 'administrator',
  /* delete own poll content */   ),
  /* delete own poll content */   'module' => 'node',
  /* delete own poll content */ );

  // Exported permission: 'delete own post content'.
  $permissions['delete own post content'] = array(
  /* delete own post content */   'name' => 'delete own post content',
  /* delete own post content */   'roles' => array(
  /* delete own post content */     'administrator' => 'administrator',
  /* delete own post content */   ),
  /* delete own post content */   'module' => 'node',
  /* delete own post content */ );

  // Exported permission: 'delete own program content'.
  $permissions['delete own program content'] = array(
  /* delete own program content */   'name' => 'delete own program content',
  /* delete own program content */   'roles' => array(
  /* delete own program content */     'administrator' => 'administrator',
  /* delete own program content */   ),
  /* delete own program content */   'module' => 'node',
  /* delete own program content */ );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
  /* delete own publication content */   'name' => 'delete own publication content',
  /* delete own publication content */   'roles' => array(
  /* delete own publication content */     'administrator' => 'administrator',
  /* delete own publication content */   ),
  /* delete own publication content */   'module' => 'node',
  /* delete own publication content */ );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
  /* delete own video files */   'name' => 'delete own video files',
  /* delete own video files */   'roles' => array(
  /* delete own video files */     'administrator' => 'administrator',
  /* delete own video files */   ),
  /* delete own video files */   'module' => 'file_entity',
  /* delete own video files */ );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
  /* delete privatemsg */   'name' => 'delete privatemsg',
  /* delete privatemsg */   'roles' => array(
  /* delete privatemsg */     'administrator' => 'administrator',
  /* delete privatemsg */     'authenticated user' => 'authenticated user',
  /* delete privatemsg */   ),
  /* delete privatemsg */   'module' => 'privatemsg',
  /* delete privatemsg */ );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
  /* delete revisions */   'name' => 'delete revisions',
  /* delete revisions */   'roles' => array(
  /* delete revisions */     'administrator' => 'administrator',
  /* delete revisions */   ),
  /* delete revisions */   'module' => 'node',
  /* delete revisions */ );

  // Exported permission: 'delete terms in admin_content'.
  $permissions['delete terms in admin_content'] = array(
  /* delete terms in 7 */   'name' => 'delete terms in admin_content',
  /* delete terms in 7 */   'roles' => array(
  /* delete terms in 7 */     'administrator' => 'administrator',
  /* delete terms in 7 */   ),
  /* delete terms in 7 */   'module' => 'taxonomy',
  /* delete terms in 7 */ );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
  /* delete terms in 1 */   'name' => 'delete terms in countries',
  /* delete terms in 1 */   'roles' => array(
  /* delete terms in 1 */     'administrator' => 'administrator',
  /* delete terms in 1 */   ),
  /* delete terms in 1 */   'module' => 'taxonomy',
  /* delete terms in 1 */ );

  // Exported permission: 'delete terms in gallery_collections'.
  $permissions['delete terms in gallery_collections'] = array(
  /* delete terms in 5 */   'name' => 'delete terms in gallery_collections',
  /* delete terms in 5 */   'roles' => array(
  /* delete terms in 5 */     'administrator' => 'administrator',
  /* delete terms in 5 */   ),
  /* delete terms in 5 */   'module' => 'taxonomy',
  /* delete terms in 5 */ );

  // Exported permission: 'delete terms in help'.
  $permissions['delete terms in help'] = array(
  /* delete terms in 4 */   'name' => 'delete terms in help',
  /* delete terms in 4 */   'roles' => array(
  /* delete terms in 4 */     'administrator' => 'administrator',
  /* delete terms in 4 */   ),
  /* delete terms in 4 */   'module' => 'taxonomy',
  /* delete terms in 4 */ );

  // Exported permission: 'delete terms in regions'.
  $permissions['delete terms in regions'] = array(
  /* delete terms in 2 */   'name' => 'delete terms in regions',
  /* delete terms in 2 */   'roles' => array(
  /* delete terms in 2 */     'administrator' => 'administrator',
  /* delete terms in 2 */   ),
  /* delete terms in 2 */   'module' => 'taxonomy',
  /* delete terms in 2 */ );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
  /* delete terms in 6 */   'name' => 'delete terms in tags',
  /* delete terms in 6 */   'roles' => array(
  /* delete terms in 6 */     'administrator' => 'administrator',
  /* delete terms in 6 */   ),
  /* delete terms in 6 */   'module' => 'taxonomy',
  /* delete terms in 6 */ );

  // Exported permission: 'delete terms in topics'.
  $permissions['delete terms in topics'] = array(
  /* delete terms in 3 */   'name' => 'delete terms in topics',
  /* delete terms in 3 */   'roles' => array(
  /* delete terms in 3 */     'administrator' => 'administrator',
  /* delete terms in 3 */   ),
  /* delete terms in 3 */   'module' => 'taxonomy',
  /* delete terms in 3 */ );

  // Exported permission: 'delete terms in userpoints'.
  $permissions['delete terms in userpoints'] = array(
  /* delete terms in 8 */   'name' => 'delete terms in userpoints',
  /* delete terms in 8 */   'roles' => array(
  /* delete terms in 8 */     'administrator' => 'administrator',
  /* delete terms in 8 */   ),
  /* delete terms in 8 */   'module' => 'taxonomy',
  /* delete terms in 8 */ );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
  /* display drupal links */   'name' => 'display drupal links',
  /* display drupal links */   'roles' => array(
  /* display drupal links */     'administrator' => 'administrator',
  /* display drupal links */   ),
  /* display drupal links */   'module' => 'admin_menu',
  /* display drupal links */ );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
  /* download any audio files */   'name' => 'download any audio files',
  /* download any audio files */   'roles' => array(
  /* download any audio files */     'administrator' => 'administrator',
  /* download any audio files */     'authenticated user' => 'authenticated user',
  /* download any audio files */   ),
  /* download any audio files */   'module' => 'file_entity',
  /* download any audio files */ );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
  /* download any document files */   'name' => 'download any document files',
  /* download any document files */   'roles' => array(
  /* download any document files */     'administrator' => 'administrator',
  /* download any document files */     'authenticated user' => 'authenticated user',
  /* download any document files */   ),
  /* download any document files */   'module' => 'file_entity',
  /* download any document files */ );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
  /* download any image files */   'name' => 'download any image files',
  /* download any image files */   'roles' => array(
  /* download any image files */     'administrator' => 'administrator',
  /* download any image files */     'authenticated user' => 'authenticated user',
  /* download any image files */   ),
  /* download any image files */   'module' => 'file_entity',
  /* download any image files */ );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
  /* download any video files */   'name' => 'download any video files',
  /* download any video files */   'roles' => array(
  /* download any video files */     'administrator' => 'administrator',
  /* download any video files */     'authenticated user' => 'authenticated user',
  /* download any video files */   ),
  /* download any video files */   'module' => 'file_entity',
  /* download any video files */ );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
  /* download own audio files */   'name' => 'download own audio files',
  /* download own audio files */   'roles' => array(
  /* download own audio files */     'administrator' => 'administrator',
  /* download own audio files */     'authenticated user' => 'authenticated user',
  /* download own audio files */   ),
  /* download own audio files */   'module' => 'file_entity',
  /* download own audio files */ );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
  /* download own document files */   'name' => 'download own document files',
  /* download own document files */   'roles' => array(
  /* download own document files */     'administrator' => 'administrator',
  /* download own document files */     'authenticated user' => 'authenticated user',
  /* download own document files */   ),
  /* download own document files */   'module' => 'file_entity',
  /* download own document files */ );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
  /* download own image files */   'name' => 'download own image files',
  /* download own image files */   'roles' => array(
  /* download own image files */     'administrator' => 'administrator',
  /* download own image files */     'authenticated user' => 'authenticated user',
  /* download own image files */   ),
  /* download own image files */   'module' => 'file_entity',
  /* download own image files */ );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
  /* download own video files */   'name' => 'download own video files',
  /* download own video files */   'roles' => array(
  /* download own video files */     'administrator' => 'administrator',
  /* download own video files */     'authenticated user' => 'authenticated user',
  /* download own video files */   ),
  /* download own video files */   'module' => 'file_entity',
  /* download own video files */ );

  // Exported permission: 'edit any alumni_group content'.
  $permissions['edit any alumni_group content'] = array(
  /* edit any alumni_group content */   'name' => 'edit any alumni_group content',
  /* edit any alumni_group content */   'roles' => array(
  /* edit any alumni_group content */     'administrator' => 'administrator',
  /* edit any alumni_group content */   ),
  /* edit any alumni_group content */   'module' => 'node',
  /* edit any alumni_group content */ );

  // Exported permission: 'edit any announcement content'.
  $permissions['edit any announcement content'] = array(
  /* edit any announcement content */   'name' => 'edit any announcement content',
  /* edit any announcement content */   'roles' => array(
  /* edit any announcement content */     'administrator' => 'administrator',
  /* edit any announcement content */   ),
  /* edit any announcement content */   'module' => 'node',
  /* edit any announcement content */ );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
  /* edit any audio files */   'name' => 'edit any audio files',
  /* edit any audio files */   'roles' => array(
  /* edit any audio files */     'administrator' => 'administrator',
  /* edit any audio files */   ),
  /* edit any audio files */   'module' => 'file_entity',
  /* edit any audio files */ );

  // Exported permission: 'edit any coi content'.
  $permissions['edit any coi content'] = array(
  /* edit any coi content */   'name' => 'edit any coi content',
  /* edit any coi content */   'roles' => array(
  /* edit any coi content */     'administrator' => 'administrator',
  /* edit any coi content */   ),
  /* edit any coi content */   'module' => 'node',
  /* edit any coi content */ );

  // Exported permission: 'edit any course content'.
  $permissions['edit any course content'] = array(
  /* edit any course content */   'name' => 'edit any course content',
  /* edit any course content */   'roles' => array(
  /* edit any course content */     'administrator' => 'administrator',
  /* edit any course content */   ),
  /* edit any course content */   'module' => 'node',
  /* edit any course content */ );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
  /* edit any document files */   'name' => 'edit any document files',
  /* edit any document files */   'roles' => array(
  /* edit any document files */     'administrator' => 'administrator',
  /* edit any document files */   ),
  /* edit any document files */   'module' => 'file_entity',
  /* edit any document files */ );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
  /* edit any entityform */   'name' => 'edit any entityform',
  /* edit any entityform */   'roles' => array(
  /* edit any entityform */     'administrator' => 'administrator',
  /* edit any entityform */   ),
  /* edit any entityform */   'module' => 'entityform',
  /* edit any entityform */ );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
  /* edit any event content */   'name' => 'edit any event content',
  /* edit any event content */   'roles' => array(
  /* edit any event content */     'administrator' => 'administrator',
  /* edit any event content */   ),
  /* edit any event content */   'module' => 'node',
  /* edit any event content */ );

  // Exported permission: 'edit any group content'.
  $permissions['edit any group content'] = array(
  /* edit any group content */   'name' => 'edit any group content',
  /* edit any group content */   'roles' => array(
  /* edit any group content */     'administrator' => 'administrator',
  /* edit any group content */   ),
  /* edit any group content */   'module' => 'node',
  /* edit any group content */ );

  // Exported permission: 'edit any help content'.
  $permissions['edit any help content'] = array(
  /* edit any help content */   'name' => 'edit any help content',
  /* edit any help content */   'roles' => array(
  /* edit any help content */     'administrator' => 'administrator',
  /* edit any help content */   ),
  /* edit any help content */   'module' => 'node',
  /* edit any help content */ );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
  /* edit any image files */   'name' => 'edit any image files',
  /* edit any image files */   'roles' => array(
  /* edit any image files */     'administrator' => 'administrator',
  /* edit any image files */   ),
  /* edit any image files */   'module' => 'file_entity',
  /* edit any image files */ );

  // Exported permission: 'edit any media_gallery content'.
  $permissions['edit any media_gallery content'] = array(
  /* edit any media_gallery content */   'name' => 'edit any media_gallery content',
  /* edit any media_gallery content */   'roles' => array(
  /* edit any media_gallery content */     'administrator' => 'administrator',
  /* edit any media_gallery content */   ),
  /* edit any media_gallery content */   'module' => 'node',
  /* edit any media_gallery content */ );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
  /* edit any news content */   'name' => 'edit any news content',
  /* edit any news content */   'roles' => array(
  /* edit any news content */     'administrator' => 'administrator',
  /* edit any news content */   ),
  /* edit any news content */   'module' => 'node',
  /* edit any news content */ );

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
  /* edit any organization content */   'name' => 'edit any organization content',
  /* edit any organization content */   'roles' => array(
  /* edit any organization content */     'administrator' => 'administrator',
  /* edit any organization content */   ),
  /* edit any organization content */   'module' => 'node',
  /* edit any organization content */ );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
  /* edit any page content */   'name' => 'edit any page content',
  /* edit any page content */   'roles' => array(
  /* edit any page content */     'administrator' => 'administrator',
  /* edit any page content */   ),
  /* edit any page content */   'module' => 'node',
  /* edit any page content */ );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
  /* edit any panel content */   'name' => 'edit any panel content',
  /* edit any panel content */   'roles' => array(
  /* edit any panel content */     'administrator' => 'administrator',
  /* edit any panel content */   ),
  /* edit any panel content */   'module' => 'node',
  /* edit any panel content */ );

  // Exported permission: 'edit any poll content'.
  $permissions['edit any poll content'] = array(
  /* edit any poll content */   'name' => 'edit any poll content',
  /* edit any poll content */   'roles' => array(
  /* edit any poll content */     'administrator' => 'administrator',
  /* edit any poll content */   ),
  /* edit any poll content */   'module' => 'node',
  /* edit any poll content */ );

  // Exported permission: 'edit any post content'.
  $permissions['edit any post content'] = array(
  /* edit any post content */   'name' => 'edit any post content',
  /* edit any post content */   'roles' => array(
  /* edit any post content */     'administrator' => 'administrator',
  /* edit any post content */   ),
  /* edit any post content */   'module' => 'node',
  /* edit any post content */ );

  // Exported permission: 'edit any program content'.
  $permissions['edit any program content'] = array(
  /* edit any program content */   'name' => 'edit any program content',
  /* edit any program content */   'roles' => array(
  /* edit any program content */     'administrator' => 'administrator',
  /* edit any program content */   ),
  /* edit any program content */   'module' => 'node',
  /* edit any program content */ );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
  /* edit any publication content */   'name' => 'edit any publication content',
  /* edit any publication content */   'roles' => array(
  /* edit any publication content */     'administrator' => 'administrator',
  /* edit any publication content */   ),
  /* edit any publication content */   'module' => 'node',
  /* edit any publication content */ );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
  /* edit any video files */   'name' => 'edit any video files',
  /* edit any video files */   'roles' => array(
  /* edit any video files */     'administrator' => 'administrator',
  /* edit any video files */   ),
  /* edit any video files */   'module' => 'file_entity',
  /* edit any video files */ );

  // Exported permission: 'edit own alumni_group content'.
  $permissions['edit own alumni_group content'] = array(
  /* edit own alumni_group content */   'name' => 'edit own alumni_group content',
  /* edit own alumni_group content */   'roles' => array(
  /* edit own alumni_group content */     'administrator' => 'administrator',
  /* edit own alumni_group content */   ),
  /* edit own alumni_group content */   'module' => 'node',
  /* edit own alumni_group content */ );

  // Exported permission: 'edit own announcement content'.
  $permissions['edit own announcement content'] = array(
  /* edit own announcement content */   'name' => 'edit own announcement content',
  /* edit own announcement content */   'roles' => array(
  /* edit own announcement content */     'administrator' => 'administrator',
  /* edit own announcement content */   ),
  /* edit own announcement content */   'module' => 'node',
  /* edit own announcement content */ );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
  /* edit own audio files */   'name' => 'edit own audio files',
  /* edit own audio files */   'roles' => array(
  /* edit own audio files */     'administrator' => 'administrator',
  /* edit own audio files */     'authenticated user' => 'authenticated user',
  /* edit own audio files */   ),
  /* edit own audio files */   'module' => 'file_entity',
  /* edit own audio files */ );

  // Exported permission: 'edit own coi content'.
  $permissions['edit own coi content'] = array(
  /* edit own coi content */   'name' => 'edit own coi content',
  /* edit own coi content */   'roles' => array(
  /* edit own coi content */     'administrator' => 'administrator',
  /* edit own coi content */   ),
  /* edit own coi content */   'module' => 'node',
  /* edit own coi content */ );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
  /* edit own comments */   'name' => 'edit own comments',
  /* edit own comments */   'roles' => array(
  /* edit own comments */     'administrator' => 'administrator',
  /* edit own comments */     'authenticated user' => 'authenticated user',
  /* edit own comments */   ),
  /* edit own comments */   'module' => 'comment',
  /* edit own comments */ );

  // Exported permission: 'edit own course content'.
  $permissions['edit own course content'] = array(
  /* edit own course content */   'name' => 'edit own course content',
  /* edit own course content */   'roles' => array(
  /* edit own course content */     'administrator' => 'administrator',
  /* edit own course content */   ),
  /* edit own course content */   'module' => 'node',
  /* edit own course content */ );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
  /* edit own document files */   'name' => 'edit own document files',
  /* edit own document files */   'roles' => array(
  /* edit own document files */     'administrator' => 'administrator',
  /* edit own document files */     'authenticated user' => 'authenticated user',
  /* edit own document files */   ),
  /* edit own document files */   'module' => 'file_entity',
  /* edit own document files */ );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
  /* edit own entityform */   'name' => 'edit own entityform',
  /* edit own entityform */   'roles' => array(
  /* edit own entityform */     'administrator' => 'administrator',
  /* edit own entityform */   ),
  /* edit own entityform */   'module' => 'entityform',
  /* edit own entityform */ );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
  /* edit own event content */   'name' => 'edit own event content',
  /* edit own event content */   'roles' => array(
  /* edit own event content */     'administrator' => 'administrator',
  /* edit own event content */   ),
  /* edit own event content */   'module' => 'node',
  /* edit own event content */ );

  // Exported permission: 'edit own group content'.
  $permissions['edit own group content'] = array(
  /* edit own group content */   'name' => 'edit own group content',
  /* edit own group content */   'roles' => array(
  /* edit own group content */     'administrator' => 'administrator',
  /* edit own group content */   ),
  /* edit own group content */   'module' => 'node',
  /* edit own group content */ );

  // Exported permission: 'edit own help content'.
  $permissions['edit own help content'] = array(
  /* edit own help content */   'name' => 'edit own help content',
  /* edit own help content */   'roles' => array(
  /* edit own help content */     'administrator' => 'administrator',
  /* edit own help content */   ),
  /* edit own help content */   'module' => 'node',
  /* edit own help content */ );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
  /* edit own image files */   'name' => 'edit own image files',
  /* edit own image files */   'roles' => array(
  /* edit own image files */     'administrator' => 'administrator',
  /* edit own image files */     'authenticated user' => 'authenticated user',
  /* edit own image files */   ),
  /* edit own image files */   'module' => 'file_entity',
  /* edit own image files */ );

  // Exported permission: 'edit own media_gallery content'.
  $permissions['edit own media_gallery content'] = array(
  /* edit own media_gallery content */   'name' => 'edit own media_gallery content',
  /* edit own media_gallery content */   'roles' => array(
  /* edit own media_gallery content */     'administrator' => 'administrator',
  /* edit own media_gallery content */   ),
  /* edit own media_gallery content */   'module' => 'node',
  /* edit own media_gallery content */ );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
  /* edit own news content */   'name' => 'edit own news content',
  /* edit own news content */   'roles' => array(
  /* edit own news content */     'administrator' => 'administrator',
  /* edit own news content */   ),
  /* edit own news content */   'module' => 'node',
  /* edit own news content */ );

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
  /* edit own organization content */   'name' => 'edit own organization content',
  /* edit own organization content */   'roles' => array(
  /* edit own organization content */     'administrator' => 'administrator',
  /* edit own organization content */   ),
  /* edit own organization content */   'module' => 'node',
  /* edit own organization content */ );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
  /* edit own page content */   'name' => 'edit own page content',
  /* edit own page content */   'roles' => array(
  /* edit own page content */     'administrator' => 'administrator',
  /* edit own page content */   ),
  /* edit own page content */   'module' => 'node',
  /* edit own page content */ );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
  /* edit own panel content */   'name' => 'edit own panel content',
  /* edit own panel content */   'roles' => array(
  /* edit own panel content */     'administrator' => 'administrator',
  /* edit own panel content */   ),
  /* edit own panel content */   'module' => 'node',
  /* edit own panel content */ );

  // Exported permission: 'edit own poll content'.
  $permissions['edit own poll content'] = array(
  /* edit own poll content */   'name' => 'edit own poll content',
  /* edit own poll content */   'roles' => array(
  /* edit own poll content */     'administrator' => 'administrator',
  /* edit own poll content */   ),
  /* edit own poll content */   'module' => 'node',
  /* edit own poll content */ );

  // Exported permission: 'edit own post content'.
  $permissions['edit own post content'] = array(
  /* edit own post content */   'name' => 'edit own post content',
  /* edit own post content */   'roles' => array(
  /* edit own post content */     'administrator' => 'administrator',
  /* edit own post content */   ),
  /* edit own post content */   'module' => 'node',
  /* edit own post content */ );

  // Exported permission: 'edit own program content'.
  $permissions['edit own program content'] = array(
  /* edit own program content */   'name' => 'edit own program content',
  /* edit own program content */   'roles' => array(
  /* edit own program content */     'administrator' => 'administrator',
  /* edit own program content */   ),
  /* edit own program content */   'module' => 'node',
  /* edit own program content */ );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
  /* edit own publication content */   'name' => 'edit own publication content',
  /* edit own publication content */   'roles' => array(
  /* edit own publication content */     'administrator' => 'administrator',
  /* edit own publication content */   ),
  /* edit own publication content */   'module' => 'node',
  /* edit own publication content */ );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
  /* edit own video files */   'name' => 'edit own video files',
  /* edit own video files */   'roles' => array(
  /* edit own video files */     'administrator' => 'administrator',
  /* edit own video files */     'authenticated user' => 'authenticated user',
  /* edit own video files */   ),
  /* edit own video files */   'module' => 'file_entity',
  /* edit own video files */ );

  // Exported permission: 'edit terms in admin_content'.
  $permissions['edit terms in admin_content'] = array(
  /* edit terms in 7 */   'name' => 'edit terms in admin_content',
  /* edit terms in 7 */   'roles' => array(
  /* edit terms in 7 */     'administrator' => 'administrator',
  /* edit terms in 7 */   ),
  /* edit terms in 7 */   'module' => 'taxonomy',
  /* edit terms in 7 */ );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
  /* edit terms in 1 */   'name' => 'edit terms in countries',
  /* edit terms in 1 */   'roles' => array(
  /* edit terms in 1 */     'administrator' => 'administrator',
  /* edit terms in 1 */   ),
  /* edit terms in 1 */   'module' => 'taxonomy',
  /* edit terms in 1 */ );

  // Exported permission: 'edit terms in gallery_collections'.
  $permissions['edit terms in gallery_collections'] = array(
  /* edit terms in 5 */   'name' => 'edit terms in gallery_collections',
  /* edit terms in 5 */   'roles' => array(
  /* edit terms in 5 */     'administrator' => 'administrator',
  /* edit terms in 5 */   ),
  /* edit terms in 5 */   'module' => 'taxonomy',
  /* edit terms in 5 */ );

  // Exported permission: 'edit terms in help'.
  $permissions['edit terms in help'] = array(
  /* edit terms in 4 */   'name' => 'edit terms in help',
  /* edit terms in 4 */   'roles' => array(
  /* edit terms in 4 */     'administrator' => 'administrator',
  /* edit terms in 4 */   ),
  /* edit terms in 4 */   'module' => 'taxonomy',
  /* edit terms in 4 */ );

  // Exported permission: 'edit terms in regions'.
  $permissions['edit terms in regions'] = array(
  /* edit terms in 2 */   'name' => 'edit terms in regions',
  /* edit terms in 2 */   'roles' => array(
  /* edit terms in 2 */     'administrator' => 'administrator',
  /* edit terms in 2 */   ),
  /* edit terms in 2 */   'module' => 'taxonomy',
  /* edit terms in 2 */ );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
  /* edit terms in 6 */   'name' => 'edit terms in tags',
  /* edit terms in 6 */   'roles' => array(
  /* edit terms in 6 */     'administrator' => 'administrator',
  /* edit terms in 6 */   ),
  /* edit terms in 6 */   'module' => 'taxonomy',
  /* edit terms in 6 */ );

  // Exported permission: 'edit terms in topics'.
  $permissions['edit terms in topics'] = array(
  /* edit terms in 3 */   'name' => 'edit terms in topics',
  /* edit terms in 3 */   'roles' => array(
  /* edit terms in 3 */     'administrator' => 'administrator',
  /* edit terms in 3 */   ),
  /* edit terms in 3 */   'module' => 'taxonomy',
  /* edit terms in 3 */ );

  // Exported permission: 'edit terms in userpoints'.
  $permissions['edit terms in userpoints'] = array(
  /* edit terms in 8 */   'name' => 'edit terms in userpoints',
  /* edit terms in 8 */   'roles' => array(
  /* edit terms in 8 */     'administrator' => 'administrator',
  /* edit terms in 8 */   ),
  /* edit terms in 8 */   'module' => 'taxonomy',
  /* edit terms in 8 */ );

  // Exported permission: 'edit userpoints'.
  $permissions['edit userpoints'] = array(
  /* edit userpoints */   'name' => 'edit userpoints',
  /* edit userpoints */   'roles' => array(
  /* edit userpoints */     'administrator' => 'administrator',
  /* edit userpoints */   ),
  /* edit userpoints */   'module' => 'userpoints',
  /* edit userpoints */ );

  // Exported permission: 'execute comment_publish_action'.
  $permissions['execute comment_publish_action'] = array(
  /* execute comment_publish_action */   'name' => 'execute comment_publish_action',
  /* execute comment_publish_action */   'roles' => array(
  /* execute comment_publish_action */     'administrator' => 'administrator',
  /* execute comment_publish_action */     'authenticated user' => 'authenticated user',
  /* execute comment_publish_action */   ),
  /* execute comment_publish_action */   'module' => 'actions_permissions',
  /* execute comment_publish_action */ );

  // Exported permission: 'execute comment_save_action'.
  $permissions['execute comment_save_action'] = array(
  /* execute comment_save_action */   'name' => 'execute comment_save_action',
  /* execute comment_save_action */   'roles' => array(
  /* execute comment_save_action */     'administrator' => 'administrator',
  /* execute comment_save_action */   ),
  /* execute comment_save_action */   'module' => 'actions_permissions',
  /* execute comment_save_action */ );

  // Exported permission: 'execute comment_unpublish_action'.
  $permissions['execute comment_unpublish_action'] = array(
  /* execute comment_unpublish_action */   'name' => 'execute comment_unpublish_action',
  /* execute comment_unpublish_action */   'roles' => array(
  /* execute comment_unpublish_action */     'administrator' => 'administrator',
  /* execute comment_unpublish_action */   ),
  /* execute comment_unpublish_action */   'module' => 'actions_permissions',
  /* execute comment_unpublish_action */ );

  // Exported permission: 'execute comment_unpublish_by_keyword_action'.
  $permissions['execute comment_unpublish_by_keyword_action'] = array(
  /* execute comment_unpublish_by_keyword_action */   'name' => 'execute comment_unpublish_by_keyword_action',
  /* execute comment_unpublish_by_keyword_action */   'roles' => array(
  /* execute comment_unpublish_by_keyword_action */     'administrator' => 'administrator',
  /* execute comment_unpublish_by_keyword_action */   ),
  /* execute comment_unpublish_by_keyword_action */   'module' => 'actions_permissions',
  /* execute comment_unpublish_by_keyword_action */ );

  // Exported permission: 'execute flag_comment_action'.
  $permissions['execute flag_comment_action'] = array(
  /* execute flag_comment_action */   'name' => 'execute flag_comment_action',
  /* execute flag_comment_action */   'roles' => array(
  /* execute flag_comment_action */     'administrator' => 'administrator',
  /* execute flag_comment_action */   ),
  /* execute flag_comment_action */   'module' => 'actions_permissions',
  /* execute flag_comment_action */ );

  // Exported permission: 'execute flag_node_action'.
  $permissions['execute flag_node_action'] = array(
  /* execute flag_node_action */   'name' => 'execute flag_node_action',
  /* execute flag_node_action */   'roles' => array(
  /* execute flag_node_action */     'administrator' => 'administrator',
  /* execute flag_node_action */   ),
  /* execute flag_node_action */   'module' => 'actions_permissions',
  /* execute flag_node_action */ );

  // Exported permission: 'execute flag_user_action'.
  $permissions['execute flag_user_action'] = array(
  /* execute flag_user_action */   'name' => 'execute flag_user_action',
  /* execute flag_user_action */   'roles' => array(
  /* execute flag_user_action */     'administrator' => 'administrator',
  /* execute flag_user_action */   ),
  /* execute flag_user_action */   'module' => 'actions_permissions',
  /* execute flag_user_action */ );

  // Exported permission: 'execute gn2_og_unblock_user_action'.
  $permissions['execute gn2_og_unblock_user_action'] = array(
  /* execute gn2_og_unblock_user_action */   'name' => 'execute gn2_og_unblock_user_action',
  /* execute gn2_og_unblock_user_action */   'roles' => array(
  /* execute gn2_og_unblock_user_action */     'administrator' => 'administrator',
  /* execute gn2_og_unblock_user_action */     'authenticated user' => 'authenticated user',
  /* execute gn2_og_unblock_user_action */   ),
  /* execute gn2_og_unblock_user_action */   'module' => 'actions_permissions',
  /* execute gn2_og_unblock_user_action */ );

  // Exported permission: 'execute node_assign_owner_action'.
  $permissions['execute node_assign_owner_action'] = array(
  /* execute node_assign_owner_action */   'name' => 'execute node_assign_owner_action',
  /* execute node_assign_owner_action */   'roles' => array(
  /* execute node_assign_owner_action */     'administrator' => 'administrator',
  /* execute node_assign_owner_action */   ),
  /* execute node_assign_owner_action */   'module' => 'actions_permissions',
  /* execute node_assign_owner_action */ );

  // Exported permission: 'execute node_make_sticky_action'.
  $permissions['execute node_make_sticky_action'] = array(
  /* execute node_make_sticky_action */   'name' => 'execute node_make_sticky_action',
  /* execute node_make_sticky_action */   'roles' => array(
  /* execute node_make_sticky_action */     'administrator' => 'administrator',
  /* execute node_make_sticky_action */   ),
  /* execute node_make_sticky_action */   'module' => 'actions_permissions',
  /* execute node_make_sticky_action */ );

  // Exported permission: 'execute node_make_unsticky_action'.
  $permissions['execute node_make_unsticky_action'] = array(
  /* execute node_make_unsticky_action */   'name' => 'execute node_make_unsticky_action',
  /* execute node_make_unsticky_action */   'roles' => array(
  /* execute node_make_unsticky_action */     'administrator' => 'administrator',
  /* execute node_make_unsticky_action */   ),
  /* execute node_make_unsticky_action */   'module' => 'actions_permissions',
  /* execute node_make_unsticky_action */ );

  // Exported permission: 'execute node_promote_action'.
  $permissions['execute node_promote_action'] = array(
  /* execute node_promote_action */   'name' => 'execute node_promote_action',
  /* execute node_promote_action */   'roles' => array(
  /* execute node_promote_action */     'administrator' => 'administrator',
  /* execute node_promote_action */   ),
  /* execute node_promote_action */   'module' => 'actions_permissions',
  /* execute node_promote_action */ );

  // Exported permission: 'execute node_publish_action'.
  $permissions['execute node_publish_action'] = array(
  /* execute node_publish_action */   'name' => 'execute node_publish_action',
  /* execute node_publish_action */   'roles' => array(
  /* execute node_publish_action */     'administrator' => 'administrator',
  /* execute node_publish_action */     'authenticated user' => 'authenticated user',
  /* execute node_publish_action */   ),
  /* execute node_publish_action */   'module' => 'actions_permissions',
  /* execute node_publish_action */ );

  // Exported permission: 'execute node_save_action'.
  $permissions['execute node_save_action'] = array(
  /* execute node_save_action */   'name' => 'execute node_save_action',
  /* execute node_save_action */   'roles' => array(
  /* execute node_save_action */     'administrator' => 'administrator',
  /* execute node_save_action */   ),
  /* execute node_save_action */   'module' => 'actions_permissions',
  /* execute node_save_action */ );

  // Exported permission: 'execute node_unpromote_action'.
  $permissions['execute node_unpromote_action'] = array(
  /* execute node_unpromote_action */   'name' => 'execute node_unpromote_action',
  /* execute node_unpromote_action */   'roles' => array(
  /* execute node_unpromote_action */     'administrator' => 'administrator',
  /* execute node_unpromote_action */   ),
  /* execute node_unpromote_action */   'module' => 'actions_permissions',
  /* execute node_unpromote_action */ );

  // Exported permission: 'execute node_unpublish_action'.
  $permissions['execute node_unpublish_action'] = array(
  /* execute node_unpublish_action */   'name' => 'execute node_unpublish_action',
  /* execute node_unpublish_action */   'roles' => array(
  /* execute node_unpublish_action */     'administrator' => 'administrator',
  /* execute node_unpublish_action */     'authenticated user' => 'authenticated user',
  /* execute node_unpublish_action */   ),
  /* execute node_unpublish_action */   'module' => 'actions_permissions',
  /* execute node_unpublish_action */ );

  // Exported permission: 'execute node_unpublish_by_keyword_action'.
  $permissions['execute node_unpublish_by_keyword_action'] = array(
  /* execute node_unpublish_by_keyword_action */   'name' => 'execute node_unpublish_by_keyword_action',
  /* execute node_unpublish_by_keyword_action */   'roles' => array(
  /* execute node_unpublish_by_keyword_action */     'administrator' => 'administrator',
  /* execute node_unpublish_by_keyword_action */   ),
  /* execute node_unpublish_by_keyword_action */   'module' => 'actions_permissions',
  /* execute node_unpublish_by_keyword_action */ );

  // Exported permission: 'execute og_membership_delete_action'.
  $permissions['execute og_membership_delete_action'] = array(
  /* execute og_membership_delete_action */   'name' => 'execute og_membership_delete_action',
  /* execute og_membership_delete_action */   'roles' => array(
  /* execute og_membership_delete_action */     'administrator' => 'administrator',
  /* execute og_membership_delete_action */     'authenticated user' => 'authenticated user',
  /* execute og_membership_delete_action */   ),
  /* execute og_membership_delete_action */   'module' => 'actions_permissions',
  /* execute og_membership_delete_action */ );

  // Exported permission: 'execute og_set_state_action'.
  $permissions['execute og_set_state_action'] = array(
  /* execute og_set_state_action */   'name' => 'execute og_set_state_action',
  /* execute og_set_state_action */   'roles' => array(
  /* execute og_set_state_action */     'administrator' => 'administrator',
  /* execute og_set_state_action */     'authenticated user' => 'authenticated user',
  /* execute og_set_state_action */   ),
  /* execute og_set_state_action */   'module' => 'actions_permissions',
  /* execute og_set_state_action */ );

  // Exported permission: 'execute og_user_roles_action'.
  $permissions['execute og_user_roles_action'] = array(
  /* execute og_user_roles_action */   'name' => 'execute og_user_roles_action',
  /* execute og_user_roles_action */   'roles' => array(
  /* execute og_user_roles_action */     'administrator' => 'administrator',
  /* execute og_user_roles_action */     'authenticated user' => 'authenticated user',
  /* execute og_user_roles_action */   ),
  /* execute og_user_roles_action */   'module' => 'actions_permissions',
  /* execute og_user_roles_action */ );

  // Exported permission: 'execute one_time_login_send_action'.
  $permissions['execute one_time_login_send_action'] = array(
  /* execute one_time_login_send_action */   'name' => 'execute one_time_login_send_action',
  /* execute one_time_login_send_action */   'roles' => array(
  /* execute one_time_login_send_action */     'administrator' => 'administrator',
  /* execute one_time_login_send_action */     'authenticated user' => 'authenticated user',
  /* execute one_time_login_send_action */   ),
  /* execute one_time_login_send_action */   'module' => 'actions_permissions',
  /* execute one_time_login_send_action */ );

  // Exported permission: 'execute panelizer_set_status_action'.
  $permissions['execute panelizer_set_status_action'] = array(
  /* execute panelizer_set_status_action */   'name' => 'execute panelizer_set_status_action',
  /* execute panelizer_set_status_action */   'roles' => array(
  /* execute panelizer_set_status_action */     'administrator' => 'administrator',
  /* execute panelizer_set_status_action */   ),
  /* execute panelizer_set_status_action */   'module' => 'actions_permissions',
  /* execute panelizer_set_status_action */ );

  // Exported permission: 'execute pathauto_file_update_action'.
  $permissions['execute pathauto_file_update_action'] = array(
  /* execute pathauto_file_update_action */   'name' => 'execute pathauto_file_update_action',
  /* execute pathauto_file_update_action */   'roles' => array(
  /* execute pathauto_file_update_action */     'administrator' => 'administrator',
  /* execute pathauto_file_update_action */   ),
  /* execute pathauto_file_update_action */   'module' => 'actions_permissions',
  /* execute pathauto_file_update_action */ );

  // Exported permission: 'execute pathauto_node_update_action'.
  $permissions['execute pathauto_node_update_action'] = array(
  /* execute pathauto_node_update_action */   'name' => 'execute pathauto_node_update_action',
  /* execute pathauto_node_update_action */   'roles' => array(
  /* execute pathauto_node_update_action */     'administrator' => 'administrator',
  /* execute pathauto_node_update_action */   ),
  /* execute pathauto_node_update_action */   'module' => 'actions_permissions',
  /* execute pathauto_node_update_action */ );

  // Exported permission: 'execute pathauto_taxonomy_term_update_action'.
  $permissions['execute pathauto_taxonomy_term_update_action'] = array(
  /* execute pathauto_taxonomy_term_update_action */   'name' => 'execute pathauto_taxonomy_term_update_action',
  /* execute pathauto_taxonomy_term_update_action */   'roles' => array(
  /* execute pathauto_taxonomy_term_update_action */     'administrator' => 'administrator',
  /* execute pathauto_taxonomy_term_update_action */   ),
  /* execute pathauto_taxonomy_term_update_action */   'module' => 'actions_permissions',
  /* execute pathauto_taxonomy_term_update_action */ );

  // Exported permission: 'execute pathauto_user_update_action'.
  $permissions['execute pathauto_user_update_action'] = array(
  /* execute pathauto_user_update_action */   'name' => 'execute pathauto_user_update_action',
  /* execute pathauto_user_update_action */   'roles' => array(
  /* execute pathauto_user_update_action */     'administrator' => 'administrator',
  /* execute pathauto_user_update_action */   ),
  /* execute pathauto_user_update_action */   'module' => 'actions_permissions',
  /* execute pathauto_user_update_action */ );

  // Exported permission: 'execute system_block_ip_action'.
  $permissions['execute system_block_ip_action'] = array(
  /* execute system_block_ip_action */   'name' => 'execute system_block_ip_action',
  /* execute system_block_ip_action */   'roles' => array(
  /* execute system_block_ip_action */     'administrator' => 'administrator',
  /* execute system_block_ip_action */   ),
  /* execute system_block_ip_action */   'module' => 'actions_permissions',
  /* execute system_block_ip_action */ );

  // Exported permission: 'execute system_goto_action'.
  $permissions['execute system_goto_action'] = array(
  /* execute system_goto_action */   'name' => 'execute system_goto_action',
  /* execute system_goto_action */   'roles' => array(
  /* execute system_goto_action */     'administrator' => 'administrator',
  /* execute system_goto_action */   ),
  /* execute system_goto_action */   'module' => 'actions_permissions',
  /* execute system_goto_action */ );

  // Exported permission: 'execute system_message_action'.
  $permissions['execute system_message_action'] = array(
  /* execute system_message_action */   'name' => 'execute system_message_action',
  /* execute system_message_action */   'roles' => array(
  /* execute system_message_action */     'administrator' => 'administrator',
  /* execute system_message_action */   ),
  /* execute system_message_action */   'module' => 'actions_permissions',
  /* execute system_message_action */ );

  // Exported permission: 'execute system_send_email_action'.
  $permissions['execute system_send_email_action'] = array(
  /* execute system_send_email_action */   'name' => 'execute system_send_email_action',
  /* execute system_send_email_action */   'roles' => array(
  /* execute system_send_email_action */     'administrator' => 'administrator',
  /* execute system_send_email_action */   ),
  /* execute system_send_email_action */   'module' => 'actions_permissions',
  /* execute system_send_email_action */ );

  // Exported permission: 'execute user_block_user_action'.
  $permissions['execute user_block_user_action'] = array(
  /* execute user_block_user_action */   'name' => 'execute user_block_user_action',
  /* execute user_block_user_action */   'roles' => array(
  /* execute user_block_user_action */     'administrator' => 'administrator',
  /* execute user_block_user_action */     'authenticated user' => 'authenticated user',
  /* execute user_block_user_action */   ),
  /* execute user_block_user_action */   'module' => 'actions_permissions',
  /* execute user_block_user_action */ );

  // Exported permission: 'execute views_bulk_operations_archive_action'.
  $permissions['execute views_bulk_operations_archive_action'] = array(
  /* execute views_bulk_operations_archive_action */   'name' => 'execute views_bulk_operations_archive_action',
  /* execute views_bulk_operations_archive_action */   'roles' => array(
  /* execute views_bulk_operations_archive_action */     'administrator' => 'administrator',
  /* execute views_bulk_operations_archive_action */   ),
  /* execute views_bulk_operations_archive_action */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_archive_action */ );

  // Exported permission: 'execute views_bulk_operations_argument_selector_action'.
  $permissions['execute views_bulk_operations_argument_selector_action'] = array(
  /* execute views_bulk_operations_argument_selector_action */   'name' => 'execute views_bulk_operations_argument_selector_action',
  /* execute views_bulk_operations_argument_selector_action */   'roles' => array(
  /* execute views_bulk_operations_argument_selector_action */     'administrator' => 'administrator',
  /* execute views_bulk_operations_argument_selector_action */   ),
  /* execute views_bulk_operations_argument_selector_action */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_argument_selector_action */ );

  // Exported permission: 'execute views_bulk_operations_delete_item'.
  $permissions['execute views_bulk_operations_delete_item'] = array(
  /* execute views_bulk_operations_delete_item */   'name' => 'execute views_bulk_operations_delete_item',
  /* execute views_bulk_operations_delete_item */   'roles' => array(
  /* execute views_bulk_operations_delete_item */     'administrator' => 'administrator',
  /* execute views_bulk_operations_delete_item */   ),
  /* execute views_bulk_operations_delete_item */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_delete_item */ );

  // Exported permission: 'execute views_bulk_operations_delete_revision'.
  $permissions['execute views_bulk_operations_delete_revision'] = array(
  /* execute views_bulk_operations_delete_revision */   'name' => 'execute views_bulk_operations_delete_revision',
  /* execute views_bulk_operations_delete_revision */   'roles' => array(
  /* execute views_bulk_operations_delete_revision */     'administrator' => 'administrator',
  /* execute views_bulk_operations_delete_revision */   ),
  /* execute views_bulk_operations_delete_revision */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_delete_revision */ );

  // Exported permission: 'execute views_bulk_operations_modify_action'.
  $permissions['execute views_bulk_operations_modify_action'] = array(
  /* execute views_bulk_operations_modify_action */   'name' => 'execute views_bulk_operations_modify_action',
  /* execute views_bulk_operations_modify_action */   'roles' => array(
  /* execute views_bulk_operations_modify_action */     'administrator' => 'administrator',
  /* execute views_bulk_operations_modify_action */   ),
  /* execute views_bulk_operations_modify_action */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_modify_action */ );

  // Exported permission: 'execute views_bulk_operations_script_action'.
  $permissions['execute views_bulk_operations_script_action'] = array(
  /* execute views_bulk_operations_script_action */   'name' => 'execute views_bulk_operations_script_action',
  /* execute views_bulk_operations_script_action */   'roles' => array(
  /* execute views_bulk_operations_script_action */     'administrator' => 'administrator',
  /* execute views_bulk_operations_script_action */   ),
  /* execute views_bulk_operations_script_action */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_script_action */ );

  // Exported permission: 'execute views_bulk_operations_user_cancel_action'.
  $permissions['execute views_bulk_operations_user_cancel_action'] = array(
  /* execute views_bulk_operations_user_cancel_action */   'name' => 'execute views_bulk_operations_user_cancel_action',
  /* execute views_bulk_operations_user_cancel_action */   'roles' => array(
  /* execute views_bulk_operations_user_cancel_action */     'administrator' => 'administrator',
  /* execute views_bulk_operations_user_cancel_action */   ),
  /* execute views_bulk_operations_user_cancel_action */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_user_cancel_action */ );

  // Exported permission: 'execute views_bulk_operations_user_roles_action'.
  $permissions['execute views_bulk_operations_user_roles_action'] = array(
  /* execute views_bulk_operations_user_roles_action */   'name' => 'execute views_bulk_operations_user_roles_action',
  /* execute views_bulk_operations_user_roles_action */   'roles' => array(
  /* execute views_bulk_operations_user_roles_action */     'administrator' => 'administrator',
  /* execute views_bulk_operations_user_roles_action */   ),
  /* execute views_bulk_operations_user_roles_action */   'module' => 'actions_permissions',
  /* execute views_bulk_operations_user_roles_action */ );

  // Exported permission: 'ezproxy access'.
  $permissions['ezproxy access'] = array(
  /* ezproxy access */   'name' => 'ezproxy access',
  /* ezproxy access */   'roles' => array(
  /* ezproxy access */     'administrator' => 'administrator',
  /* ezproxy access */     'authenticated user' => 'authenticated user',
  /* ezproxy access */   ),
  /* ezproxy access */   'module' => 'gn2_ezproxy',
  /* ezproxy access */ );

  // Exported permission: 'filter private messages'.
  $permissions['filter private messages'] = array(
  /* filter private messages */   'name' => 'filter private messages',
  /* filter private messages */   'roles' => array(
  /* filter private messages */     'administrator' => 'administrator',
  /* filter private messages */     'authenticated user' => 'authenticated user',
  /* filter private messages */   ),
  /* filter private messages */   'module' => 'privatemsg_filter',
  /* filter private messages */ );

  // Exported permission: 'flag favorite'.
  $permissions['flag favorite'] = array(
  /* flag favorite */   'name' => 'flag favorite',
  /* flag favorite */   'roles' => array(
  /* flag favorite */     'administrator' => 'administrator',
  /* flag favorite */     'authenticated user' => 'authenticated user',
  /* flag favorite */   ),
  /* flag favorite */   'module' => 'flag',
  /* flag favorite */ );

  // Exported permission: 'flag report_comment_as_inappropriate'.
  $permissions['flag report_comment_as_inappropriate'] = array(
  /* flag report_comment_as_inappropriate */   'name' => 'flag report_comment_as_inappropriate',
  /* flag report_comment_as_inappropriate */   'roles' => array(
  /* flag report_comment_as_inappropriate */     'administrator' => 'administrator',
  /* flag report_comment_as_inappropriate */   ),
  /* flag report_comment_as_inappropriate */   'module' => 'flag',
  /* flag report_comment_as_inappropriate */ );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
  /* flush caches */   'name' => 'flush caches',
  /* flush caches */   'roles' => array(
  /* flush caches */     'administrator' => 'administrator',
  /* flush caches */   ),
  /* flush caches */   'module' => 'admin_menu',
  /* flush caches */ );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
  /* force password change */   'name' => 'force password change',
  /* force password change */   'roles' => array(
  /* force password change */     'administrator' => 'administrator',
  /* force password change */     'authenticated user' => 'authenticated user',
  /* force password change */   ),
  /* force password change */   'module' => 'password_policy',
  /* force password change */ );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
  /* generate features */   'name' => 'generate features',
  /* generate features */   'roles' => array(
  /* generate features */     'administrator' => 'administrator',
  /* generate features */   ),
  /* generate features */   'module' => 'features',
  /* generate features */ );

  // Exported permission: 'gn2_simple_access_bypass_group_edit_restriction'.
  $permissions['gn2_simple_access_bypass_group_edit_restriction'] = array(
  /* gn2_simple_access_bypass_group_edit_restriction */   'name' => 'gn2_simple_access_bypass_group_edit_restriction',
  /* gn2_simple_access_bypass_group_edit_restriction */   'roles' => array(
  /* gn2_simple_access_bypass_group_edit_restriction */     'administrator' => 'administrator',
  /* gn2_simple_access_bypass_group_edit_restriction */   ),
  /* gn2_simple_access_bypass_group_edit_restriction */   'module' => 'gn2_simple_access',
  /* gn2_simple_access_bypass_group_edit_restriction */ );

  // Exported permission: 'gn2_simple_access_group'.
  $permissions['gn2_simple_access_group'] = array(
  /* gn2_simple_access_group */   'name' => 'gn2_simple_access_group',
  /* gn2_simple_access_group */   'roles' => array(
  /* gn2_simple_access_group */     'administrator' => 'administrator',
  /* gn2_simple_access_group */   ),
  /* gn2_simple_access_group */   'module' => 'gn2_simple_access',
  /* gn2_simple_access_group */ );

  // Exported permission: 'gn2_simple_access_organization'.
  $permissions['gn2_simple_access_organization'] = array(
  /* gn2_simple_access_organization */   'name' => 'gn2_simple_access_organization',
  /* gn2_simple_access_organization */   'roles' => array(
  /* gn2_simple_access_organization */     'administrator' => 'administrator',
  /* gn2_simple_access_organization */   ),
  /* gn2_simple_access_organization */   'module' => 'gn2_simple_access',
  /* gn2_simple_access_organization */ );

  // Exported permission: 'gn2_simple_access_public'.
  $permissions['gn2_simple_access_public'] = array(
  /* gn2_simple_access_public */   'name' => 'gn2_simple_access_public',
  /* gn2_simple_access_public */   'roles' => array(
  /* gn2_simple_access_public */     'administrator' => 'administrator',
  /* gn2_simple_access_public */   ),
  /* gn2_simple_access_public */   'module' => 'gn2_simple_access',
  /* gn2_simple_access_public */ );

  // Exported permission: 'gn2_simple_access_sitewide'.
  $permissions['gn2_simple_access_sitewide'] = array(
  /* gn2_simple_access_sitewide */   'name' => 'gn2_simple_access_sitewide',
  /* gn2_simple_access_sitewide */   'roles' => array(
  /* gn2_simple_access_sitewide */     'administrator' => 'administrator',
  /* gn2_simple_access_sitewide */   ),
  /* gn2_simple_access_sitewide */   'module' => 'gn2_simple_access',
  /* gn2_simple_access_sitewide */ );

  // Exported permission: 'import import_users feeds'.
  $permissions['import import_users feeds'] = array(
  /* import import_users feeds */   'name' => 'import import_users feeds',
  /* import import_users feeds */   'roles' => array(
  /* import import_users feeds */     'administrator' => 'administrator',
  /* import import_users feeds */   ),
  /* import import_users feeds */   'module' => 'feeds',
  /* import import_users feeds */ );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
  /* import media */   'name' => 'import media',
  /* import media */   'roles' => array(
  /* import media */     'administrator' => 'administrator',
  /* import media */   ),
  /* import media */   'module' => 'media_bulk_upload',
  /* import media */ );

  // Exported permission: 'import topics feeds'.
  $permissions['import topics feeds'] = array(
  /* import topics feeds */   'name' => 'import topics feeds',
  /* import topics feeds */   'roles' => array(
  /* import topics feeds */     'administrator' => 'administrator',
  /* import topics feeds */   ),
  /* import topics feeds */   'module' => 'feeds',
  /* import topics feeds */ );

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
  /* inspect all votes */   'name' => 'inspect all votes',
  /* inspect all votes */   'roles' => array(
  /* inspect all votes */     'administrator' => 'administrator',
  /* inspect all votes */   ),
  /* inspect all votes */   'module' => 'poll',
  /* inspect all votes */ );

  // Exported permission: 'maintain 1 relationships'.
  $permissions['maintain 1 relationships'] = array(
  /* maintain 1 relationships */   'name' => 'maintain 1 relationships',
  /* maintain 1 relationships */   'roles' => array(
  /* maintain 1 relationships */     'administrator' => 'administrator',
  /* maintain 1 relationships */     'authenticated user' => 'authenticated user',
  /* maintain 1 relationships */   ),
  /* maintain 1 relationships */   'module' => 'user_relationships',
  /* maintain 1 relationships */ );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
  /* manage features */   'name' => 'manage features',
  /* manage features */   'roles' => array(
  /* manage features */     'administrator' => 'administrator',
  /* manage features */   ),
  /* manage features */   'module' => 'features',
  /* manage features */ );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
  /* masquerade as admin */   'name' => 'masquerade as admin',
  /* masquerade as admin */   'roles' => array(
  /* masquerade as admin */     'administrator' => 'administrator',
  /* masquerade as admin */   ),
  /* masquerade as admin */   'module' => 'masquerade',
  /* masquerade as admin */ );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
  /* masquerade as any user */   'name' => 'masquerade as any user',
  /* masquerade as any user */   'roles' => array(
  /* masquerade as any user */     'administrator' => 'administrator',
  /* masquerade as any user */   ),
  /* masquerade as any user */   'module' => 'masquerade',
  /* masquerade as any user */ );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
  /* masquerade as user */   'name' => 'masquerade as user',
  /* masquerade as user */   'roles' => array(
  /* masquerade as user */     'administrator' => 'administrator',
  /* masquerade as user */   ),
  /* masquerade as user */   'module' => 'masquerade',
  /* masquerade as user */ );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
  /* migration information */   'name' => 'migration information',
  /* migration information */   'roles' => array(
  /* migration information */     'administrator' => 'administrator',
  /* migration information */   ),
  /* migration information */   'module' => 'migrate',
  /* migration information */ );

  // Exported permission: 'moderate userpoints'.
  $permissions['moderate userpoints'] = array(
  /* moderate userpoints */   'name' => 'moderate userpoints',
  /* moderate userpoints */   'roles' => array(
  /* moderate userpoints */     'administrator' => 'administrator',
  /* moderate userpoints */   ),
  /* moderate userpoints */   'module' => 'userpoints',
  /* moderate userpoints */ );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
  /* notify of path changes */   'name' => 'notify of path changes',
  /* notify of path changes */   'roles' => array(
  /* notify of path changes */     'administrator' => 'administrator',
  /* notify of path changes */   ),
  /* notify of path changes */   'module' => 'pathauto',
  /* notify of path changes */ );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
  /* post comments */   'name' => 'post comments',
  /* post comments */   'roles' => array(
  /* post comments */     'administrator' => 'administrator',
  /* post comments */     'authenticated user' => 'authenticated user',
  /* post comments */   ),
  /* post comments */   'module' => 'comment',
  /* post comments */ );

  // Exported permission: 'provide translation services'.
  $permissions['provide translation services'] = array(
  /* provide translation services */   'name' => 'provide translation services',
  /* provide translation services */   'roles' => array(
  /* provide translation services */     'administrator' => 'administrator',
  /* provide translation services */     'translator' => 'translator',
  /* provide translation services */   ),
  /* provide translation services */   'module' => 'tmgmt_local',
  /* provide translation services */ );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
  /* read all private messages */   'name' => 'read all private messages',
  /* read all private messages */   'roles' => array(
  /* read all private messages */     'administrator' => 'administrator',
  /* read all private messages */   ),
  /* read all private messages */   'module' => 'privatemsg',
  /* read all private messages */ );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
  /* read privatemsg */   'name' => 'read privatemsg',
  /* read privatemsg */   'roles' => array(
  /* read privatemsg */     'administrator' => 'administrator',
  /* read privatemsg */     'authenticated user' => 'authenticated user',
  /* read privatemsg */   ),
  /* read privatemsg */   'module' => 'privatemsg',
  /* read privatemsg */ );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
  /* rename features */   'name' => 'rename features',
  /* rename features */   'roles' => array(
  /* rename features */     'administrator' => 'administrator',
  /* rename features */   ),
  /* rename features */   'module' => 'features',
  /* rename features */ );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
  /* reply only privatemsg */   'name' => 'reply only privatemsg',
  /* reply only privatemsg */   'roles' => array(
  /* reply only privatemsg */     'administrator' => 'administrator',
  /* reply only privatemsg */     'authenticated user' => 'authenticated user',
  /* reply only privatemsg */   ),
  /* reply only privatemsg */   'module' => 'privatemsg',
  /* reply only privatemsg */ );

  // Exported permission: 'report private messages to mollom'.
  $permissions['report private messages to mollom'] = array(
  /* report private messages to mollom */   'name' => 'report private messages to mollom',
  /* report private messages to mollom */   'roles' => array(
  /* report private messages to mollom */     'administrator' => 'administrator',
  /* report private messages to mollom */   ),
  /* report private messages to mollom */   'module' => 'privatemsg',
  /* report private messages to mollom */ );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
  /* revert revisions */   'name' => 'revert revisions',
  /* revert revisions */   'roles' => array(
  /* revert revisions */     'administrator' => 'administrator',
  /* revert revisions */   ),
  /* revert revisions */   'module' => 'node',
  /* revert revisions */ );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
  /* save draft */   'name' => 'save draft',
  /* save draft */   'roles' => array(
  /* save draft */     'administrator' => 'administrator',
  /* save draft */   ),
  /* save draft */   'module' => 'save_draft',
  /* save draft */ );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
  /* schedule (un)publishing of nodes */   'name' => 'schedule (un)publishing of nodes',
  /* schedule (un)publishing of nodes */   'roles' => array(
  /* schedule (un)publishing of nodes */     'administrator' => 'administrator',
  /* schedule (un)publishing of nodes */     'authenticated user' => 'authenticated user',
  /* schedule (un)publishing of nodes */   ),
  /* schedule (un)publishing of nodes */   'module' => 'scheduler',
  /* schedule (un)publishing of nodes */ );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
  /* select account cancellation method */   'name' => 'select account cancellation method',
  /* select account cancellation method */   'roles' => array(
  /* select account cancellation method */     'administrator' => 'administrator',
  /* select account cancellation method */   ),
  /* select account cancellation method */   'module' => 'user',
  /* select account cancellation method */ );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
  /* select text format for privatemsg */   'name' => 'select text format for privatemsg',
  /* select text format for privatemsg */   'roles' => array(
  /* select text format for privatemsg */     'administrator' => 'administrator',
  /* select text format for privatemsg */     'authenticated user' => 'authenticated user',
  /* select text format for privatemsg */   ),
  /* select text format for privatemsg */   'module' => 'privatemsg',
  /* select text format for privatemsg */ );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
  /* show format selection for comment */   'name' => 'show format selection for comment',
  /* show format selection for comment */   'roles' => array(
  /* show format selection for comment */     'administrator' => 'administrator',
  /* show format selection for comment */   ),
  /* show format selection for comment */   'module' => 'better_formats',
  /* show format selection for comment */ );

  // Exported permission: 'show format selection for entityform'.
  $permissions['show format selection for entityform'] = array(
  /* show format selection for entityform */   'name' => 'show format selection for entityform',
  /* show format selection for entityform */   'roles' => array(
  /* show format selection for entityform */     'administrator' => 'administrator',
  /* show format selection for entityform */   ),
  /* show format selection for entityform */   'module' => 'better_formats',
  /* show format selection for entityform */ );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
  /* show format selection for field_collection_item */   'name' => 'show format selection for field_collection_item',
  /* show format selection for field_collection_item */   'roles' => array(
  /* show format selection for field_collection_item */     'administrator' => 'administrator',
  /* show format selection for field_collection_item */   ),
  /* show format selection for field_collection_item */   'module' => 'better_formats',
  /* show format selection for field_collection_item */ );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
  /* show format selection for file */   'name' => 'show format selection for file',
  /* show format selection for file */   'roles' => array(
  /* show format selection for file */     'administrator' => 'administrator',
  /* show format selection for file */   ),
  /* show format selection for file */   'module' => 'better_formats',
  /* show format selection for file */ );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
  /* show format selection for flagging */   'name' => 'show format selection for flagging',
  /* show format selection for flagging */   'roles' => array(
  /* show format selection for flagging */     'administrator' => 'administrator',
  /* show format selection for flagging */   ),
  /* show format selection for flagging */   'module' => 'better_formats',
  /* show format selection for flagging */ );

  // Exported permission: 'show format selection for message'.
  $permissions['show format selection for message'] = array(
  /* show format selection for message */   'name' => 'show format selection for message',
  /* show format selection for message */   'roles' => array(
  /* show format selection for message */     'administrator' => 'administrator',
  /* show format selection for message */   ),
  /* show format selection for message */   'module' => 'better_formats',
  /* show format selection for message */ );

  // Exported permission: 'show format selection for message_type'.
  $permissions['show format selection for message_type'] = array(
  /* show format selection for message_type */   'name' => 'show format selection for message_type',
  /* show format selection for message_type */   'roles' => array(
  /* show format selection for message_type */     'administrator' => 'administrator',
  /* show format selection for message_type */   ),
  /* show format selection for message_type */   'module' => 'better_formats',
  /* show format selection for message_type */ );

  // Exported permission: 'show format selection for message_type_category'.
  $permissions['show format selection for message_type_category'] = array(
  /* show format selection for message_type_category */   'name' => 'show format selection for message_type_category',
  /* show format selection for message_type_category */   'roles' => array(
  /* show format selection for message_type_category */     'administrator' => 'administrator',
  /* show format selection for message_type_category */   ),
  /* show format selection for message_type_category */   'module' => 'better_formats',
  /* show format selection for message_type_category */ );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
  /* show format selection for node */   'name' => 'show format selection for node',
  /* show format selection for node */   'roles' => array(
  /* show format selection for node */     'administrator' => 'administrator',
  /* show format selection for node */   ),
  /* show format selection for node */   'module' => 'better_formats',
  /* show format selection for node */ );

  // Exported permission: 'show format selection for og_membership'.
  $permissions['show format selection for og_membership'] = array(
  /* show format selection for og_membership */   'name' => 'show format selection for og_membership',
  /* show format selection for og_membership */   'roles' => array(
  /* show format selection for og_membership */     'administrator' => 'administrator',
  /* show format selection for og_membership */   ),
  /* show format selection for og_membership */   'module' => 'better_formats',
  /* show format selection for og_membership */ );

  // Exported permission: 'show format selection for og_membership_type'.
  $permissions['show format selection for og_membership_type'] = array(
  /* show format selection for og_membership_type */   'name' => 'show format selection for og_membership_type',
  /* show format selection for og_membership_type */   'roles' => array(
  /* show format selection for og_membership_type */     'administrator' => 'administrator',
  /* show format selection for og_membership_type */   ),
  /* show format selection for og_membership_type */   'module' => 'better_formats',
  /* show format selection for og_membership_type */ );

  // Exported permission: 'show format selection for privatemsg_message'.
  $permissions['show format selection for privatemsg_message'] = array(
  /* show format selection for privatemsg_message */   'name' => 'show format selection for privatemsg_message',
  /* show format selection for privatemsg_message */   'roles' => array(
  /* show format selection for privatemsg_message */     'administrator' => 'administrator',
  /* show format selection for privatemsg_message */   ),
  /* show format selection for privatemsg_message */   'module' => 'better_formats',
  /* show format selection for privatemsg_message */ );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
  /* show format selection for rules_config */   'name' => 'show format selection for rules_config',
  /* show format selection for rules_config */   'roles' => array(
  /* show format selection for rules_config */     'administrator' => 'administrator',
  /* show format selection for rules_config */   ),
  /* show format selection for rules_config */   'module' => 'better_formats',
  /* show format selection for rules_config */ );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
  /* show format selection for taxonomy_term */   'name' => 'show format selection for taxonomy_term',
  /* show format selection for taxonomy_term */   'roles' => array(
  /* show format selection for taxonomy_term */     'administrator' => 'administrator',
  /* show format selection for taxonomy_term */   ),
  /* show format selection for taxonomy_term */   'module' => 'better_formats',
  /* show format selection for taxonomy_term */ );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
  /* show format selection for user */   'name' => 'show format selection for user',
  /* show format selection for user */   'roles' => array(
  /* show format selection for user */     'administrator' => 'administrator',
  /* show format selection for user */   ),
  /* show format selection for user */   'module' => 'better_formats',
  /* show format selection for user */ );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
  /* show format tips */   'name' => 'show format tips',
  /* show format tips */   'roles' => array(
  /* show format tips */     'administrator' => 'administrator',
  /* show format tips */   ),
  /* show format tips */   'module' => 'better_formats',
  /* show format tips */ );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
  /* show more format tips link */   'name' => 'show more format tips link',
  /* show more format tips link */   'roles' => array(
  /* show more format tips link */     'administrator' => 'administrator',
  /* show more format tips link */   ),
  /* show more format tips link */   'module' => 'better_formats',
  /* show more format tips link */ );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
  /* skip comment approval */   'name' => 'skip comment approval',
  /* skip comment approval */   'roles' => array(
  /* skip comment approval */     'administrator' => 'administrator',
  /* skip comment approval */     'authenticated user' => 'authenticated user',
  /* skip comment approval */   ),
  /* skip comment approval */   'module' => 'comment',
  /* skip comment approval */ );

  // Exported permission: 'submit translation jobs'.
  $permissions['submit translation jobs'] = array(
  /* submit translation jobs */   'name' => 'submit translation jobs',
  /* submit translation jobs */   'roles' => array(
  /* submit translation jobs */     'administrator' => 'administrator',
  /* submit translation jobs */     'translator' => 'translator',
  /* submit translation jobs */   ),
  /* submit translation jobs */   'module' => 'tmgmt',
  /* submit translation jobs */ );

  // Exported permission: 'subscribe to all content types'.
  $permissions['subscribe to all content types'] = array(
  /* subscribe to all content types */   'name' => 'subscribe to all content types',
  /* subscribe to all content types */   'roles' => array(
  /* subscribe to all content types */     'administrator' => 'administrator',
  /* subscribe to all content types */   ),
  /* subscribe to all content types */   'module' => 'subscriptions',
  /* subscribe to all content types */ );

  // Exported permission: 'subscribe to content'.
  $permissions['subscribe to content'] = array(
  /* subscribe to content */   'name' => 'subscribe to content',
  /* subscribe to content */   'roles' => array(
  /* subscribe to content */     'administrator' => 'administrator',
  /* subscribe to content */     'authenticated user' => 'authenticated user',
  /* subscribe to content */   ),
  /* subscribe to content */   'module' => 'subscriptions',
  /* subscribe to content */ );

  // Exported permission: 'subscribe to content types'.
  $permissions['subscribe to content types'] = array(
  /* subscribe to content types */   'name' => 'subscribe to content types',
  /* subscribe to content types */   'roles' => array(
  /* subscribe to content types */     'administrator' => 'administrator',
  /* subscribe to content types */   ),
  /* subscribe to content types */   'module' => 'subscriptions',
  /* subscribe to content types */ );

  // Exported permission: 'suspend own subscriptions'.
  $permissions['suspend own subscriptions'] = array(
  /* suspend own subscriptions */   'name' => 'suspend own subscriptions',
  /* suspend own subscriptions */   'roles' => array(
  /* suspend own subscriptions */     'administrator' => 'administrator',
  /* suspend own subscriptions */     'authenticated user' => 'authenticated user',
  /* suspend own subscriptions */   ),
  /* suspend own subscriptions */   'module' => 'subscriptions',
  /* suspend own subscriptions */ );

  // Exported permission: 'tag private messages'.
  $permissions['tag private messages'] = array(
  /* tag private messages */   'name' => 'tag private messages',
  /* tag private messages */   'roles' => array(
  /* tag private messages */     'administrator' => 'administrator',
  /* tag private messages */     'authenticated user' => 'authenticated user',
  /* tag private messages */   ),
  /* tag private messages */   'module' => 'privatemsg_filter',
  /* tag private messages */ );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
  /* translate admin strings */   'name' => 'translate admin strings',
  /* translate admin strings */   'roles' => array(
  /* translate admin strings */     'administrator' => 'administrator',
  /* translate admin strings */     'translator' => 'translator',
  /* translate admin strings */   ),
  /* translate admin strings */   'module' => 'i18n_string',
  /* translate admin strings */ );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
  /* translate content */   'name' => 'translate content',
  /* translate content */   'roles' => array(
  /* translate content */     'administrator' => 'administrator',
  /* translate content */     'translator' => 'translator',
  /* translate content */   ),
  /* translate content */   'module' => 'translation',
  /* translate content */ );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
  /* translate interface */   'name' => 'translate interface',
  /* translate interface */   'roles' => array(
  /* translate interface */     'administrator' => 'administrator',
  /* translate interface */     'translator' => 'translator',
  /* translate interface */   ),
  /* translate interface */   'module' => 'locale',
  /* translate interface */ );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
  /* translate user-defined strings */   'name' => 'translate user-defined strings',
  /* translate user-defined strings */   'roles' => array(
  /* translate user-defined strings */     'administrator' => 'administrator',
  /* translate user-defined strings */     'translator' => 'translator',
  /* translate user-defined strings */   ),
  /* translate user-defined strings */   'module' => 'i18n_string',
  /* translate user-defined strings */ );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
  /* unblock expired accounts */   'name' => 'unblock expired accounts',
  /* unblock expired accounts */   'roles' => array(
  /* unblock expired accounts */     'administrator' => 'administrator',
  /* unblock expired accounts */   ),
  /* unblock expired accounts */   'module' => 'password_policy',
  /* unblock expired accounts */ );

  // Exported permission: 'unflag favorite'.
  $permissions['unflag favorite'] = array(
  /* unflag favorite */   'name' => 'unflag favorite',
  /* unflag favorite */   'roles' => array(
  /* unflag favorite */     'administrator' => 'administrator',
  /* unflag favorite */     'authenticated user' => 'authenticated user',
  /* unflag favorite */   ),
  /* unflag favorite */   'module' => 'flag',
  /* unflag favorite */ );

  // Exported permission: 'unflag report_comment_as_inappropriate'.
  $permissions['unflag report_comment_as_inappropriate'] = array(
  /* unflag report_comment_as_inappropriate */   'name' => 'unflag report_comment_as_inappropriate',
  /* unflag report_comment_as_inappropriate */   'roles' => array(
  /* unflag report_comment_as_inappropriate */     'administrator' => 'administrator',
  /* unflag report_comment_as_inappropriate */   ),
  /* unflag report_comment_as_inappropriate */   'module' => 'flag',
  /* unflag report_comment_as_inappropriate */ );

  // Exported permission: 'unlock topics feeds'.
  $permissions['unlock topics feeds'] = array(
  /* unlock topics feeds */   'name' => 'unlock topics feeds',
  /* unlock topics feeds */   'roles' => array(
  /* unlock topics feeds */     'administrator' => 'administrator',
  /* unlock topics feeds */   ),
  /* unlock topics feeds */   'module' => 'feeds',
  /* unlock topics feeds */ );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
  /* use PHP for settings */   'name' => 'use PHP for settings',
  /* use PHP for settings */   'roles' => array(
  /* use PHP for settings */     'administrator' => 'administrator',
  /* use PHP for settings */   ),
  /* use PHP for settings */   'module' => 'php',
  /* use PHP for settings */ );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
  /* use bulk exporter */   'name' => 'use bulk exporter',
  /* use bulk exporter */   'roles' => array(
  /* use bulk exporter */     'administrator' => 'administrator',
  /* use bulk exporter */   ),
  /* use bulk exporter */   'module' => 'bulk_export',
  /* use bulk exporter */ );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
  /* use ctools import */   'name' => 'use ctools import',
  /* use ctools import */   'roles' => array(
  /* use ctools import */     'administrator' => 'administrator',
  /* use ctools import */   ),
  /* use ctools import */   'module' => 'ctools',
  /* use ctools import */ );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
  /* use flag import */   'name' => 'use flag import',
  /* use flag import */   'roles' => array(
  /* use flag import */     'administrator' => 'administrator',
  /* use flag import */   ),
  /* use flag import */   'module' => 'flag',
  /* use flag import */ );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
  /* use ipe with page manager */   'name' => 'use ipe with page manager',
  /* use ipe with page manager */   'roles' => array(
  /* use ipe with page manager */     'administrator' => 'administrator',
  /* use ipe with page manager */   ),
  /* use ipe with page manager */   'module' => 'panels',
  /* use ipe with page manager */ );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
  /* use page manager */   'name' => 'use page manager',
  /* use page manager */   'roles' => array(
  /* use page manager */     'administrator' => 'administrator',
  /* use page manager */   ),
  /* use page manager */   'module' => 'page_manager',
  /* use page manager */ );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
  /* use panels caching features */   'name' => 'use panels caching features',
  /* use panels caching features */   'roles' => array(
  /* use panels caching features */     'administrator' => 'administrator',
  /* use panels caching features */   ),
  /* use panels caching features */   'module' => 'panels',
  /* use panels caching features */ );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
  /* use panels dashboard */   'name' => 'use panels dashboard',
  /* use panels dashboard */   'roles' => array(
  /* use panels dashboard */     'administrator' => 'administrator',
  /* use panels dashboard */   ),
  /* use panels dashboard */   'module' => 'panels',
  /* use panels dashboard */ );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
  /* use panels in place editing */   'name' => 'use panels in place editing',
  /* use panels in place editing */   'roles' => array(
  /* use panels in place editing */     'administrator' => 'administrator',
  /* use panels in place editing */   ),
  /* use panels in place editing */   'module' => 'panels',
  /* use panels in place editing */ );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
  /* use panels locks */   'name' => 'use panels locks',
  /* use panels locks */   'roles' => array(
  /* use panels locks */     'administrator' => 'administrator',
  /* use panels locks */   ),
  /* use panels locks */   'module' => 'panels',
  /* use panels locks */ );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
  /* use text format filtered_html */   'name' => 'use text format filtered_html',
  /* use text format filtered_html */   'roles' => array(
  /* use text format filtered_html */     'administrator' => 'administrator',
  /* use text format filtered_html */     'authenticated user' => 'authenticated user',
  /* use text format filtered_html */   ),
  /* use text format filtered_html */   'module' => 'filter',
  /* use text format filtered_html */ );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
  /* use text format full_html */   'name' => 'use text format full_html',
  /* use text format full_html */   'roles' => array(
  /* use text format full_html */     'administrator' => 'administrator',
  /* use text format full_html */   ),
  /* use text format full_html */   'module' => 'filter',
  /* use text format full_html */ );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
  /* use text format php_code */   'name' => 'use text format php_code',
  /* use text format php_code */   'roles' => array(
  /* use text format php_code */     'administrator' => 'administrator',
  /* use text format php_code */   ),
  /* use text format php_code */   'module' => 'filter',
  /* use text format php_code */ );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
  /* use tokens in privatemsg */   'name' => 'use tokens in privatemsg',
  /* use tokens in privatemsg */   'roles' => array(
  /* use tokens in privatemsg */     'administrator' => 'administrator',
  /* use tokens in privatemsg */     'authenticated user' => 'authenticated user',
  /* use tokens in privatemsg */   ),
  /* use tokens in privatemsg */   'module' => 'privatemsg',
  /* use tokens in privatemsg */ );

  // Exported permission: 'view Terms and Conditions'.
  $permissions['view Terms and Conditions'] = array(
  /* view Terms and Conditions */   'name' => 'view Terms and Conditions',
  /* view Terms and Conditions */   'roles' => array(
  /* view Terms and Conditions */     'administrator' => 'administrator',
  /* view Terms and Conditions */   ),
  /* view Terms and Conditions */   'module' => 'legal',
  /* view Terms and Conditions */ );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
  /* view advanced help index */   'name' => 'view advanced help index',
  /* view advanced help index */   'roles' => array(
  /* view advanced help index */     'administrator' => 'administrator',
  /* view advanced help index */   ),
  /* view advanced help index */   'module' => 'advanced_help',
  /* view advanced help index */ );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
  /* view advanced help popup */   'name' => 'view advanced help popup',
  /* view advanced help popup */   'roles' => array(
  /* view advanced help popup */     'administrator' => 'administrator',
  /* view advanced help popup */   ),
  /* view advanced help popup */   'module' => 'advanced_help',
  /* view advanced help popup */ );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
  /* view advanced help topic */   'name' => 'view advanced help topic',
  /* view advanced help topic */   'roles' => array(
  /* view advanced help topic */     'administrator' => 'administrator',
  /* view advanced help topic */   ),
  /* view advanced help topic */   'module' => 'advanced_help',
  /* view advanced help topic */ );

  // Exported permission: 'view all 1 relationships'.
  $permissions['view all 1 relationships'] = array(
  /* view all 1 relationships */   'name' => 'view all 1 relationships',
  /* view all 1 relationships */   'roles' => array(
  /* view all 1 relationships */     'administrator' => 'administrator',
  /* view all 1 relationships */     'authenticated user' => 'authenticated user',
  /* view all 1 relationships */   ),
  /* view all 1 relationships */   'module' => 'user_relationships_ui',
  /* view all 1 relationships */ );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
  /* view any entityform */   'name' => 'view any entityform',
  /* view any entityform */   'roles' => array(
  /* view any entityform */     'administrator' => 'administrator',
  /* view any entityform */   ),
  /* view any entityform */   'module' => 'entityform',
  /* view any entityform */ );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
  /* view date repeats */   'name' => 'view date repeats',
  /* view date repeats */   'roles' => array(
  /* view date repeats */     'administrator' => 'administrator',
  /* view date repeats */   ),
  /* view date repeats */   'module' => 'date_repeat_field',
  /* view date repeats */ );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
  /* view files */   'name' => 'view files',
  /* view files */   'roles' => array(
  /* view files */     'administrator' => 'administrator',
  /* view files */     'anonymous user' => 'anonymous user',
  /* view files */     'authenticated user' => 'authenticated user',
  /* view files */   ),
  /* view files */   'module' => 'file_entity',
  /* view files */ );

  // Exported permission: 'view organic groups recipients'.
  $permissions['view organic groups recipients'] = array(
  /* view organic groups recipients */   'name' => 'view organic groups recipients',
  /* view organic groups recipients */   'roles' => array(
  /* view organic groups recipients */     'administrator' => 'administrator',
  /* view organic groups recipients */     'authenticated user' => 'authenticated user',
  /* view organic groups recipients */   ),
  /* view organic groups recipients */   'module' => 'privatemsg_groups',
  /* view organic groups recipients */ );

  // Exported permission: 'view own 1 relationships'.
  $permissions['view own 1 relationships'] = array(
  /* view own 1 relationships */   'name' => 'view own 1 relationships',
  /* view own 1 relationships */   'roles' => array(
  /* view own 1 relationships */     'administrator' => 'administrator',
  /* view own 1 relationships */     'authenticated user' => 'authenticated user',
  /* view own 1 relationships */   ),
  /* view own 1 relationships */   'module' => 'user_relationships_ui',
  /* view own 1 relationships */ );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
  /* view own entityform */   'name' => 'view own entityform',
  /* view own entityform */   'roles' => array(
  /* view own entityform */     'administrator' => 'administrator',
  /* view own entityform */   ),
  /* view own entityform */   'module' => 'entityform',
  /* view own entityform */ );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
  /* view own files */   'name' => 'view own files',
  /* view own files */   'roles' => array(
  /* view own files */     'administrator' => 'administrator',
  /* view own files */     'authenticated user' => 'authenticated user',
  /* view own files */   ),
  /* view own files */   'module' => 'file_entity',
  /* view own files */ );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
  /* view own private files */   'name' => 'view own private files',
  /* view own private files */   'roles' => array(
  /* view own private files */     'administrator' => 'administrator',
  /* view own private files */     'authenticated user' => 'authenticated user',
  /* view own private files */   ),
  /* view own private files */   'module' => 'file_entity',
  /* view own private files */ );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
  /* view own unpublished content */   'name' => 'view own unpublished content',
  /* view own unpublished content */   'roles' => array(
  /* view own unpublished content */     'administrator' => 'administrator',
  /* view own unpublished content */     'authenticated user' => 'authenticated user',
  /* view own unpublished content */   ),
  /* view own unpublished content */   'module' => 'node',
  /* view own unpublished content */ );

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
  /* view own userpoints */   'name' => 'view own userpoints',
  /* view own userpoints */   'roles' => array(
  /* view own userpoints */     'administrator' => 'administrator',
  /* view own userpoints */   ),
  /* view own userpoints */   'module' => 'userpoints',
  /* view own userpoints */ );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
  /* view pane admin links */   'name' => 'view pane admin links',
  /* view pane admin links */   'roles' => array(
  /* view pane admin links */     'administrator' => 'administrator',
  /* view pane admin links */   ),
  /* view pane admin links */   'module' => 'panels',
  /* view pane admin links */ );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
  /* view post access counter */   'name' => 'view post access counter',
  /* view post access counter */   'roles' => array(
  /* view post access counter */     'administrator' => 'administrator',
  /* view post access counter */     'authenticated user' => 'authenticated user',
  /* view post access counter */   ),
  /* view post access counter */   'module' => 'statistics',
  /* view post access counter */ );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
  /* view private files */   'name' => 'view private files',
  /* view private files */   'roles' => array(
  /* view private files */     'administrator' => 'administrator',
  /* view private files */   ),
  /* view private files */   'module' => 'file_entity',
  /* view private files */ );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
  /* view rate results page */   'name' => 'view rate results page',
  /* view rate results page */   'roles' => array(
  /* view rate results page */     'administrator' => 'administrator',
  /* view rate results page */     'authenticated user' => 'authenticated user',
  /* view rate results page */   ),
  /* view rate results page */   'module' => 'rate',
  /* view rate results page */ );

  // Exported permission: 'view relationship recipients'.
  $permissions['view relationship recipients'] = array(
  /* view relationship recipients */   'name' => 'view relationship recipients',
  /* view relationship recipients */   'roles' => array(
  /* view relationship recipients */     'administrator' => 'administrator',
  /* view relationship recipients */     'authenticated user' => 'authenticated user',
  /* view relationship recipients */   ),
  /* view relationship recipients */   'module' => 'user_relationship_privatemsg',
  /* view relationship recipients */ );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
  /* view revisions */   'name' => 'view revisions',
  /* view revisions */   'roles' => array(
  /* view revisions */     'administrator' => 'administrator',
  /* view revisions */   ),
  /* view revisions */   'module' => 'node',
  /* view revisions */ );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
  /* view scheduled content */   'name' => 'view scheduled content',
  /* view scheduled content */   'roles' => array(
  /* view scheduled content */     'administrator' => 'administrator',
  /* view scheduled content */   ),
  /* view scheduled content */   'module' => 'scheduler',
  /* view scheduled content */ );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
  /* view the administration theme */   'name' => 'view the administration theme',
  /* view the administration theme */   'roles' => array(
  /* view the administration theme */     'administrator' => 'administrator',
  /* view the administration theme */     'translator' => 'translator',
  /* view the administration theme */   ),
  /* view the administration theme */   'module' => 'system',
  /* view the administration theme */ );

  // Exported permission: 'view userpoints'.
  $permissions['view userpoints'] = array(
  /* view userpoints */   'name' => 'view userpoints',
  /* view userpoints */   'roles' => array(
  /* view userpoints */     'administrator' => 'administrator',
  /* view userpoints */   ),
  /* view userpoints */   'module' => 'userpoints',
  /* view userpoints */ );

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
  /* vote on polls */   'name' => 'vote on polls',
  /* vote on polls */   'roles' => array(
  /* vote on polls */     'administrator' => 'administrator',
  /* vote on polls */     'authenticated user' => 'authenticated user',
  /* vote on polls */   ),
  /* vote on polls */   'module' => 'poll',
  /* vote on polls */ );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
  /* write privatemsg */   'name' => 'write privatemsg',
  /* write privatemsg */   'roles' => array(
  /* write privatemsg */     'administrator' => 'administrator',
  /* write privatemsg */     'authenticated user' => 'authenticated user',
  /* write privatemsg */   ),
  /* write privatemsg */   'module' => 'privatemsg',
  /* write privatemsg */ );

  // Exported permission: 'write privatemsg to all organic groups'.
  $permissions['write privatemsg to all organic groups'] = array(
  /* write privatemsg to all organic groups */   'name' => 'write privatemsg to all organic groups',
  /* write privatemsg to all organic groups */   'roles' => array(
  /* write privatemsg to all organic groups */     'administrator' => 'administrator',
  /* write privatemsg to all organic groups */   ),
  /* write privatemsg to all organic groups */   'module' => 'privatemsg_groups',
  /* write privatemsg to all organic groups */ );

  // Exported permission: 'write privatemsg to own organic groups'.
  $permissions['write privatemsg to own organic groups'] = array(
  /* write privatemsg to own organic groups */   'name' => 'write privatemsg to own organic groups',
  /* write privatemsg to own organic groups */   'roles' => array(
  /* write privatemsg to own organic groups */     'administrator' => 'administrator',
  /* write privatemsg to own organic groups */     'authenticated user' => 'authenticated user',
  /* write privatemsg to own organic groups */   ),
  /* write privatemsg to own organic groups */   'module' => 'privatemsg_groups',
  /* write privatemsg to own organic groups */ );

  // Exported permission: 'write privatemsg to relationships'.
  $permissions['write privatemsg to relationships'] = array(
  /* write privatemsg to relationships */   'name' => 'write privatemsg to relationships',
  /* write privatemsg to relationships */   'roles' => array(
  /* write privatemsg to relationships */     'administrator' => 'administrator',
  /* write privatemsg to relationships */     'authenticated user' => 'authenticated user',
  /* write privatemsg to relationships */   ),
  /* write privatemsg to relationships */   'module' => 'user_relationship_privatemsg',
  /* write privatemsg to relationships */ );

  return $permissions;
}
