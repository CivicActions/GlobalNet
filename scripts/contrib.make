; Core version
; ------------
core = 7.x

; API version
; -----------
api = 2

; Contrib Modules
;
; Note: ../patches/merge-assist/*.patch required for gn2_base_config feature
;
; PLEASE list in alphabetical order
;
; Module count: 113 as of 11/7/2016 (please increment when other modules are added)
;
; ---------------------------------
;
defaults[projects][subdir] = contrib

projects[adminrole][version] = "1.0"

projects[admin_menu][version] = "3.0-rc5"
projects[adminimal_admin_menu][version] = "1.6"

projects[anonymous_publishing][version] = "1.0"
projects[anonymous_publishing][patch][] = https://www.drupal.org/files/issues/anonymous_publishing-2492359-01.patch

projects[advanced_help][version] = "1.2"

projects[apc][version] = "1.0-beta6"
projects[apc][patch][] = "https://www.drupal.org/files/issues/apc-lock-2332725-1.patch"

projects[autocomplete_deluxe][version] =  "2.3"

projects[autologout][version] =  "4.5"
; https://www.drupal.org/project/autologout/issues/2764407
projects[autologout][patch][] = "https://www.drupal.org/files/issues/2018-05-31/automated_logout_error-2764407-4_0.patch"


projects[better_exposed_filters][version] = "3.4"

projects[better_formats][version] ="1.0-beta1"

projects[block_class][version] = "2.3"

projects[browscap][version] ="2.2"
projects[browscap][patch][] = https://www.drupal.org/files/issues/browscap-7.x-2.x-fix_bools-24.patch

projects[browscap_ctools][version] ="1.0"

projects[calendar][version] = "3.5"

projects[captcha][version] = "1.5"

projects[charts][version] = "2.0-rc1"

projects[chosen][version] = "2.0-beta4"

projects[colorbox][version] = "2.10"

projects[ctools][version] = "1.14"
projects[ctools][patch][] = ../patches/merge-assist/ctools_includes_export.inc.patch

projects[clean_markup][version] = "2.7"

projects[clamav][version] = "1.0-beta1"
projects[clamav][patch][] = https://www.drupal.org/files/issues/clamav-per_scheme_settings-2690329-26.patch

projects[conditional_fields][version] = "3.0-alpha1"
projects[conditional_fields][patch][] = ../patches/merge-assist/conditional_fields.features.inc.patch
projects[conditional_fields][patch][] = https://www.drupal.org/files/issues/2724735-3-conditional_fields-jq-error.patch

projects[customerror][version] = "1.4"

projects[date][version] = "2.8"
projects[date][patch][] = ../patches/date-n998076-wip.patch

projects[date_facets][version] = "1.0"

projects[diff][version] = "3.2"

projects[drupalauth4ssp][version] = "1.0-beta5"

projects[elysia_cron][version] = "2.4"

projects[email][version] = "1.3"

projects[email_confirm][version] = "1.2"

projects[entity][patch][] = https://www.drupal.org/files/issues/2018-06-04/2636332-entity_api_performance-12.patch

projects[entity_bulk_delete][version] = "1.x-dev"
projects[entity_bulk_delete][download][type] = "git"
projects[entity_bulk_delete][download][url] = "http://git.drupal.org/project/entity_bulk_delete.git"
projects[entity_bulk_delete][download][revision] = "3b99b917e65757315f556e2be0bdae6dd307c5e2"
projects[entity_bulk_delete][patch][] = https://www.drupal.org/files/issues/entity_bulk_delete-prevent-delete-admin-user-4.patch

projects[entitycache][version] = "1.5"

projects[entityform][version] = "2.0-rc1"
projects[entityform][patch][] = https://www.drupal.org/files/issues/entityform-clone-fields.patch

projects[entity_delete_log][version] = "1.1"

projects[entityreference][version] = "1.5"
projects[entityreference][patch][] = https://www.drupal.org/files/issues/2018-03-09/2497435-pass-og-pid-as-arg-to-view-3.patch
projects[entityreference][patch][] = https://www.drupal.org/files/issues/2151631-getReferencableEntities-node-users-23.patch

projects[entityreference_prepopulate][version] = "1.5"

projects[entity_view_mode][version] = "1.0-rc1"

projects[exclude_node_title][version] = "1.9"

projects[extlink][version] = "1.18"

projects[facetapi][version] = "1.5"

projects[facetapi_bonus][version] = "1.1"

projects[facetapi_pretty_paths][version] = "1.4"

projects[features][version] = "2.10"
projects[features][patch][] = ../patches/merge-assist/features.field.inc.patch
projects[features][patch][] = ../patches/merge-assist/features.filter.inc.patch
projects[features][patch][] = ../patches/merge-assist/features.image.inc.patch
projects[features][patch][] = ../patches/merge-assist/features.locale.inc.patch
projects[features][patch][] = ../patches/merge-assist/features.menu.inc.patch
projects[features][patch][] = ../patches/merge-assist/features.user.inc.patch

projects[features_extra][version] = "1.0-beta1"

projects[feedback_simple][version] = "1.6"

projects[feeds][version] = "2.0-alpha9"

projects[fences][version] = "1.0"

projects[field_collection][version] = "1.0-beta12"

projects[field_collection_views][version] = "1.0-beta3"

projects[field_group][version] = "1.5"

projects[file_entity][version] = "2.0-beta2"

projects[file_token_link][version] = "1.0"

projects[fitvids][version] = "1.17"

projects[flag][version] = "3.9"

projects[flexslider][version] = "2.0-alpha3"

projects[flexslider_views_slideshow][version] = "2.x-dev"

projects[flood_control][version] = "1.0"

projects[focal_point][version] = "1.2"

projects[google_analytics_reports][version] = "3.1"
projects[google_analytics_reports][patch][] = https://www.drupal.org/files/issues/ga_reports.update.patch

projects[hook_update_deploy_tools][version] = "1.2"

projects[image_resize_filter][version] = "1.14"

; Translation tools: keep in one block until settled
projects[i18n][version] = "1.13"
projects[tmgmt][version] = "1.0-rc1"
projects[tmgmt_google][version] = "1.0-alpha2"
projects[l10n_update][version] = "2.0"

projects[in_field_labels][download][type] = "git"
projects[in_field_labels][download][url] = "http://git.drupal.org/project/In-Field-Labels.git"
projects[in_field_labels][download][revision] = "601ea85"

projects[jira_rest][version] ="6.x-dev"

projects[jquery_update][version] = "2.5"

projects[job_scheduler][version] = "2.0-alpha3"

projects[jquery_update][version] = "2.7"

projects[legal][version] = "1.10"

projects[link][version] = "1.6"

projects[login_tracker][version] = "1.0"
projects[login_tracker][patch][] = https://www.drupal.org/files/issues/login_tracker-fix_permission-2680599-2.patch

projects[media][version] = "2.19"
projects[media][patch][] = https://www.drupal.org/files/issues/media_wysiwyg_filter-broken_filter.patch
projects[media][patch][] = ../patches/media_bulk_upload-file-upload.patch

projects[media_gallery][version] = "2.x-dev"
projects[media_gallery][patch][] = https://www.drupal.org/files/issues/2018-06-07/media_gallery-issue-2978201.patch

projects[media_livestream][version] = "1.x-dev"

projects[media_youtube][version] = "3.0"

projects[media_vimeo][version] = "2.1"

projects[menu_token][version] = "1.0-beta5"

projects[message][version] = "1.12"

projects[migrate][version] = "2.8"

projects[migrate_d2d][version] = "2.1"
projects[migrate_d2d][patch][] = https://www.drupal.org/files/issues/migrate_d2d-user_query_modification-2680739-3.patch

projects[module_filter][version] = "3.1"

projects[multiform][version] = "1.1"

projects[og][version] = "2.9"
projects[og][patch][] = ../patches/merge-assist/og_features_permission.features.inc.patch
projects[og][patch][] = ../patches/merge-assist/og_features_role.features.inc.patch
projects[og][patch][] = https://www.drupal.org/files/issues/1892606-vbo-roles-change-13.patch
projects[og][patch][] = https://www.drupal.org/files/issues/og_vbo_and_og_2561507-6.patch
projects[og][patch][] = ../patches/og_ui_subscription_text.patch
projects[og][patch][] = ../patches/og_ui_subscription_role_status.patch
projects[og][patch][] = https://www.drupal.org/files/issues/2134365-og-is-group-remove-5.patch

projects[og_entityform][version] = "1.x-dev"

projects[og_invite][version] = "1.0-beta5"

projects[og_menu][version] = "3.1"
projects[og_menu][patch][] = https://www.drupal.org/files/issues/og_menu-i18n-2348821-12.patch

projects[og_simplestats][version] = "1.0-beta1"
projects[og_simplestats][patch][] = https://www.drupal.org/files/issues/2640092-add-index.patch

projects[one_time_login][version] = "1.1"

projects[panelizer][version] = "3.4"

projects[panels][version] = "3.7"

projects[panels_tabs][version] = "1.x-dev"

projects[password_policy][version] = "1.16"
projects[password_policy][patch][] = https://www.drupal.org/files/issues/password_policy-reset_password-2681237-2.patch
projects[password_policy][patch][] = "https://www.drupal.org/files/issues/password_policy-985758-53.patch"

projects[path_alias_xt][version] = "1.2"
projects[path_alias_xt][patch][] = "https://www.drupal.org/files/issues/2603992-invalid-urls-are-not-triggering-404.patch"


projects[pathauto][type] = 'module'
projects[pathauto][download][type] = "git"
projects[pathauto][branch] = "7.x-1.x"
projects[pathauto][download][url] = "https://git.drupal.org/project/pathauto.git"
projects[pathauto][download][revision] = "88db3ee74ddf62eab54e12347955dd2f6dd66737"
projects[pathauto][patch][] = "https://www.drupal.org/files/issues/pathauto-total-not-actual-2694525-4.patch"
projects[pathauto][patch][] = "https://www.drupal.org/files/pathauto-add-drush-support-867578-42.patch"


projects[permission_watchdog][version] = "1.1"

projects[pki_authentication][type] = "module"
projects[pki_authentication][download][type] = "git"
projects[pki_authentication][download][branch] = "7.x-1.x"
projects[pki_authentication][download][url] = "http://git.drupal.org/sandbox/rickwelch/1663258.git"
projects[pki_authentication][download][revision] = "a0f5e07e101bd741b7e70f692487c6f1dc4dc652"
projects[pki_authentication][patch][] = ../patches/pki_changes.patch
projects[pki_authentication][patch][] = ../patches/pki_redirect.patch
projects[pki_authentication][patch][] = ../patches/pki_cac_password.patch

projects[plupload][version] = "1.7"

projects[print][patch][] = https://www.drupal.org/files/issues/2018-06-11/print-dompdf-unicode-entities-font-2085169-8.patch

projects[privatemsg][version] = "2.x-dev"
projects[privatemsg][patch][] = "https://www.drupal.org/files/issues/privatemsg-add-exclude-option-2196537-5.patch"
projects[privatemsg][patch][] = ../patches/privatemsg.pages.inc.patch
projects[privatemsg][patch][] = ../patches/privatemsg_tags.patch
projects[privatemsg][patch][] = https://www.drupal.org/files/issues/privatemsg_group-title_display_fix-2681271-2.patch
projects[privatemsg][patch][] = https://www.drupal.org/files/issues/privatemsg_group-comma_fix-2681251-2.patch

projects[rate][version] = "1.7"
projects[rate][patch][] = https://www.drupal.org/files/issues/rate-fix_widget_id-2681373-2.patch

projects[redirect][download][type] = "git"
projects[redirect][download][url] = "http://git.drupal.org/project/redirect.git"
projects[redirect][download][revision] = "20542c1"
projects[redirect][patch][] = "https://www.drupal.org/files/redirect-migrate-support-1116408-69.patch"

projects[replicate][version] =  "1.1"

projects[responsive_menus][version] = "1.7"

projects[resumable_download][version] = "1.0-beta1"
projects[resumable_download][patch][] = "https://www.drupal.org/files/issues/resumable_download-do_not_use_module_invoke_all_for_hook_file_download-2295897-8.patch"
projects[resumable_download][patch][] = "https://www.drupal.org/files/issues/invalid_header_generated-2362393.patch"

projects[role_watchdog][version] = "2.0-beta2"
projects[role_watchdog][patch][] = "https://www.drupal.org/files/issues/2056375-role_watchdog-format_username-5.patch"
projects[role_watchdog][patch][] = "https://www.drupal.org/files/og_role_watchdog-support_og_2x-1954896-3.patch"
projects[role_watchdog][patch][] = ../patches/og_role_watchdog.patch


projects[rules][version] = "2.11"
projects[rules][patch][] = "https://www.drupal.org/files/issues/rules-revert-2474577.patch"

projects[rules_link][version] = "2.0"

projects[save_draft][version] = "1.4"

projects[security_review][version] = "1.2"

projects[simplify][version] = "3.3"
projects[simplify][patch][] = "https://www.drupal.org/files/issues/add_form_element_checks-2483393-2.patch"

projects[subscriptions][version] = "1.1"
projects[subscriptions][patch][] = ../patches/subscriptions_mail.admin.inc.patch
projects[subscriptions][patch][] = ../patches/subscriptions_mail.cron.inc.patch

projects[scheduler][version] = "1.3"

projects[search_api][version] = "1.18"

projects[search_api_attachments][version] = "1.9"
projects[search_api_solr_overrides][version] = "1.0-rc1"
projects[search_api_solr][version] = "1.9"

projects[strongarm][version] = "2.0"
projects[strongarm][patch][] = ../patches/merge-assist/strongarm.module.patch

projects[term_reference_tree][version] = "1.11"

projects [timezone_detect] = "1.2"

projects[token][version] = "1.6"

projects[track_field_changes][version] = "1.6"

projects[uif][patch][] = https://www.drupal.org/files/issues/uif-fix_messages-2681441-3.patch
projects[uif][patch][] = ../patches/uif.admin.inc-2.patch

projects[uif_plus][patch][] = https://www.drupal.org/files/issues/uif-fix_messages-2681441-2.patch

projects[userpoints][version] = "1.1"

projects[user_changed][type] = 'module'
projects[user_changed][download][type] = "git"
projects[user_changed][branch] = "7.x-1.x"
projects[user_changed][download][url] = "http://git.drupal.org/sandbox/nateswart/1938524.git"
projects[user_changed][download][revision] = "c36ea36d7be3f5fe31f1359d7d04d2b218386823"
#projects[user_changed][patch][] = "https://www.drupal.org/files/redirect-migrate-support-1116408-69.patch"

projects[user_relationships][version] = "1.0-alpha6"
projects[user_relationships][patch][] = ../patches/user_relationships_ui_pages.patch

projects[userpoints][version] = "1.1"
projects[userpoints][patch][] = https://www.drupal.org/files/issues/userpoints-code_clean_up-2681411-2.patch

projects[user_revision][download][type] = "git"
projects[user_revision][branch] = "7.x-1.x"
projects[user_revision][download][url] = "http://git.drupal.org/project/user_revision.git"
projects[user_revision][download][revision] = "cce42174aec453e6652da8738e397df20b6f2cd0"
#projects[user_revision][patch][] = "https://www.drupal.org/files/redirect-migrate-support-1116408-69.patch"

projects[usfedgov_google_analytics][version] = "1.1"

projects[views][version] = "3.21"
projects[views][patch][] = "https://www.drupal.org/files/issues/2018-05-11/allow-datetime-format-2178287-11.patch"
projects[views][patch][] = ../patches/merge-assist/view.inc.patch

projects[views_accordion][version] = "1.1"

projects[views_bulk_operations][version] = "3.3"

projects[views_conditional][version] = "1.x-dev"

projects[views_data_export][version] = "3.1"

projects[views_field_view][version] = "1.1"
projects[views_field_view][patch][] = https://www.drupal.org/files/issues/views_field_view-recursion_fix-2008724-7.patch

projects[views_fieldsets][version] = "2.3"

projects[views_load_more][version] = "1.5"

projects[views_rules][version] = "1.0"

projects[views_slideshow][version] = "3.1"

projects[views_tree][version] = "2.0"

projects[votingapi][version] = "2.12"


