<?php
/**
 * @file
 * gn2_base_config.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function gn2_base_config_default_ctools_custom_content() {
  $export = array();

   /* alumni_updates_fpo */ $content = new stdClass();
   /* alumni_updates_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* alumni_updates_fpo */ $content->api_version = 1;
   /* alumni_updates_fpo */ $content->name = 'alumni_updates_fpo';
   /* alumni_updates_fpo */ $content->admin_title = 'Alumni Updates (FPO)';
   /* alumni_updates_fpo */ $content->admin_description = '';
   /* alumni_updates_fpo */ $content->category = 'Temp';
   /* alumni_updates_fpo */ $content->settings = array(
   /* alumni_updates_fpo */   'admin_title' => 'Alumni Updates (FPO)',
   /* alumni_updates_fpo */   'title' => 'Alumni Updates',
   /* alumni_updates_fpo */   'body' => 'Maecenas faucibus mollis interdum. Donec sed odio dui. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Nullam id dolor id nibh ultricies vehicula ut id elit.',
   /* alumni_updates_fpo */   'format' => 'full_html',
   /* alumni_updates_fpo */   'substitute' => 1,
   /* alumni_updates_fpo */ );
  $export['alumni_updates_fpo'] = $content;

   /* custom_relationship_link */ $content = new stdClass();
   /* custom_relationship_link */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* custom_relationship_link */ $content->api_version = 1;
   /* custom_relationship_link */ $content->name = 'custom_relationship_link';
   /* custom_relationship_link */ $content->admin_title = 'Relationship link';
   /* custom_relationship_link */ $content->admin_description = '';
   /* custom_relationship_link */ $content->category = '';
   /* custom_relationship_link */ $content->settings = array(
   /* custom_relationship_link */   'admin_title' => 'Relationship link',
   /* custom_relationship_link */   'title' => '',
   /* custom_relationship_link */   'body' => '<div class="admin-button-blue"><a href="/relationship/%user:uid/request?destination=members">Add Contact</a></div>
',
   /* custom_relationship_link */   'format' => 'full_html',
   /* custom_relationship_link */   'substitute' => 1,
   /* custom_relationship_link */ );
  $export['custom_relationship_link'] = $content;

   /* custom_send_message_button */ $content = new stdClass();
   /* custom_send_message_button */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* custom_send_message_button */ $content->api_version = 1;
   /* custom_send_message_button */ $content->name = 'custom_send_message_button';
   /* custom_send_message_button */ $content->admin_title = 'Send Message button';
   /* custom_send_message_button */ $content->admin_description = '';
   /* custom_send_message_button */ $content->category = '';
   /* custom_send_message_button */ $content->settings = array(
   /* custom_send_message_button */   'admin_title' => 'Send Message button',
   /* custom_send_message_button */   'title' => '',
   /* custom_send_message_button */   'body' => '<div class="general-content-button"><a href="/messages/new/%user:uid?destination=members">Send Message</a></div>',
   /* custom_send_message_button */   'format' => 'full_html',
   /* custom_send_message_button */   'substitute' => 1,
   /* custom_send_message_button */ );
  $export['custom_send_message_button'] = $content;

   /* faculty_program_news_fpo */ $content = new stdClass();
   /* faculty_program_news_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* faculty_program_news_fpo */ $content->api_version = 1;
   /* faculty_program_news_fpo */ $content->name = 'faculty_program_news_fpo';
   /* faculty_program_news_fpo */ $content->admin_title = 'Faculty & Program News (FPO)';
   /* faculty_program_news_fpo */ $content->admin_description = '';
   /* faculty_program_news_fpo */ $content->category = 'Temp';
   /* faculty_program_news_fpo */ $content->settings = array(
   /* faculty_program_news_fpo */   'admin_title' => 'Faculty & Program News (FPO)',
   /* faculty_program_news_fpo */   'title' => 'Faculty & Program News',
   /* faculty_program_news_fpo */   'body' => 'Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Sed posuere consectetur est at lobortis. Donec id elit non mi porta gravida at eget metus. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.',
   /* faculty_program_news_fpo */   'format' => 'full_html',
   /* faculty_program_news_fpo */   'substitute' => 1,
   /* faculty_program_news_fpo */ );
  $export['faculty_program_news_fpo'] = $content;

   /* group_help_accordion */ $content = new stdClass();
   /* group_help_accordion */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* group_help_accordion */ $content->api_version = 1;
   /* group_help_accordion */ $content->name = 'group_help_accordion';
   /* group_help_accordion */ $content->admin_title = 'Help accordion';
   /* group_help_accordion */ $content->admin_description = 'Creates accordion field for help associated with a group node';
   /* group_help_accordion */ $content->category = '';
   /* group_help_accordion */ $content->settings = array(
   /* group_help_accordion */   'admin_title' => 'Help accordion',
   /* group_help_accordion */   'title' => '',
   /* group_help_accordion */   'body' => '<div class="group-help">
<p>[accordion collapsed]</p>
<h6 id="accordion-help">Help</h6>
%node:field_group_help
<p>[/accordion]</p>
</div>',
   /* group_help_accordion */   'format' => 'full_html',
   /* group_help_accordion */   'substitute' => 1,
   /* group_help_accordion */ );
  $export['group_help_accordion'] = $content;

   /* latest_activity_fpo */ $content = new stdClass();
   /* latest_activity_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* latest_activity_fpo */ $content->api_version = 1;
   /* latest_activity_fpo */ $content->name = 'latest_activity_fpo';
   /* latest_activity_fpo */ $content->admin_title = 'Latest Activity (FPO)';
   /* latest_activity_fpo */ $content->admin_description = '';
   /* latest_activity_fpo */ $content->category = '';
   /* latest_activity_fpo */ $content->settings = array(
   /* latest_activity_fpo */   'admin_title' => 'Latest Activity (FPO)',
   /* latest_activity_fpo */   'title' => 'Latest Activity',
   /* latest_activity_fpo */   'body' => '<p>This is a placeholder block for group-specific latest activity, which is future functionality.</p>
',
   /* latest_activity_fpo */   'format' => 'filtered_html',
   /* latest_activity_fpo */   'substitute' => 1,
   /* latest_activity_fpo */ );
  $export['latest_activity_fpo'] = $content;

   /* latest_insights_fpo */ $content = new stdClass();
   /* latest_insights_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* latest_insights_fpo */ $content->api_version = 1;
   /* latest_insights_fpo */ $content->name = 'latest_insights_fpo';
   /* latest_insights_fpo */ $content->admin_title = 'Latest Insights (FPO)';
   /* latest_insights_fpo */ $content->admin_description = '';
   /* latest_insights_fpo */ $content->category = 'Temp';
   /* latest_insights_fpo */ $content->settings = array(
   /* latest_insights_fpo */   'admin_title' => 'Latest Insights (FPO)',
   /* latest_insights_fpo */   'title' => 'Latest Insights',
   /* latest_insights_fpo */   'body' => 'Donec ullamcorper nulla non metus auctor fringilla. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Maecenas faucibus mollis interdum.',
   /* latest_insights_fpo */   'format' => 'full_html',
   /* latest_insights_fpo */   'substitute' => 1,
   /* latest_insights_fpo */ );
  $export['latest_insights_fpo'] = $content;

   /* media_fpo */ $content = new stdClass();
   /* media_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* media_fpo */ $content->api_version = 1;
   /* media_fpo */ $content->name = 'media_fpo';
   /* media_fpo */ $content->admin_title = 'Media';
   /* media_fpo */ $content->admin_description = 'Media';
   /* media_fpo */ $content->category = 'Temp';
   /* media_fpo */ $content->settings = array(
   /* media_fpo */   'admin_title' => 'Media (FPO)',
   /* media_fpo */   'title' => 'Media',
   /* media_fpo */   'body' => 'Stub for Media view',
   /* media_fpo */   'format' => 'full_html',
   /* media_fpo */   'substitute' => 0,
   /* media_fpo */ );
  $export['media_fpo'] = $content;

   /* members_fpo */ $content = new stdClass();
   /* members_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* members_fpo */ $content->api_version = 1;
   /* members_fpo */ $content->name = 'members_fpo';
   /* members_fpo */ $content->admin_title = 'Members';
   /* members_fpo */ $content->admin_description = 'Members (FPO)';
   /* members_fpo */ $content->category = 'Temp';
   /* members_fpo */ $content->settings = array(
   /* members_fpo */   'admin_title' => 'Members (FPO)',
   /* members_fpo */   'title' => 'Members',
   /* members_fpo */   'body' => 'Stub for List of Group Members',
   /* members_fpo */   'format' => 'full_html',
   /* members_fpo */   'substitute' => 0,
   /* members_fpo */ );
  $export['members_fpo'] = $content;

   /* polls_fpo */ $content = new stdClass();
   /* polls_fpo */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* polls_fpo */ $content->api_version = 1;
   /* polls_fpo */ $content->name = 'polls_fpo';
   /* polls_fpo */ $content->admin_title = 'Polls (FPO)';
   /* polls_fpo */ $content->admin_description = '';
   /* polls_fpo */ $content->category = '';
   /* polls_fpo */ $content->settings = array(
   /* polls_fpo */   'admin_title' => 'Polls (FPO)',
   /* polls_fpo */   'title' => 'Polls',
   /* polls_fpo */   'body' => '<p>Placeholder for "polls" block (future functionality)</p>
',
   /* polls_fpo */   'format' => 'filtered_html',
   /* polls_fpo */   'substitute' => 1,
   /* polls_fpo */ );
  $export['polls_fpo'] = $content;

   /* teaser_author_post_date */ $content = new stdClass();
   /* teaser_author_post_date */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* teaser_author_post_date */ $content->api_version = 1;
   /* teaser_author_post_date */ $content->name = 'teaser_author_post_date';
   /* teaser_author_post_date */ $content->admin_title = 'Teaser: Author & Date Info';
   /* teaser_author_post_date */ $content->admin_description = 'Teaser: Author & Date Info';
   /* teaser_author_post_date */ $content->category = 'Custom blocks';
   /* teaser_author_post_date */ $content->settings = array(
   /* teaser_author_post_date */   'admin_title' => 'Author & Post Date Info',
   /* teaser_author_post_date */   'title' => '',
   /* teaser_author_post_date */   'body' => 'by %node:author | %node:created',
   /* teaser_author_post_date */   'format' => 'full_html',
   /* teaser_author_post_date */   'substitute' => 1,
   /* teaser_author_post_date */ );
  $export['teaser_author_post_date'] = $content;

   /* teaser_comment_count */ $content = new stdClass();
   /* teaser_comment_count */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* teaser_comment_count */ $content->api_version = 1;
   /* teaser_comment_count */ $content->name = 'teaser_comment_count';
   /* teaser_comment_count */ $content->admin_title = 'Teaser: Comment Count';
   /* teaser_comment_count */ $content->admin_description = 'Teaser: Comment Count';
   /* teaser_comment_count */ $content->category = 'Custom blocks';
   /* teaser_comment_count */ $content->settings = array(
   /* teaser_comment_count */   'admin_title' => 'Num. Comments',
   /* teaser_comment_count */   'title' => '',
   /* teaser_comment_count */   'body' => '19 comments',
   /* teaser_comment_count */   'format' => 'full_html',
   /* teaser_comment_count */   'substitute' => 0,
   /* teaser_comment_count */ );
  $export['teaser_comment_count'] = $content;

   /* teaser_download_pdf */ $content = new stdClass();
   /* teaser_download_pdf */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* teaser_download_pdf */ $content->api_version = 1;
   /* teaser_download_pdf */ $content->name = 'teaser_download_pdf';
   /* teaser_download_pdf */ $content->admin_title = 'Teaser: Download PDF';
   /* teaser_download_pdf */ $content->admin_description = 'Teaser: Download PDF';
   /* teaser_download_pdf */ $content->category = 'Custom blocks';
   /* teaser_download_pdf */ $content->settings = array(
   /* teaser_download_pdf */   'admin_title' => 'Download PDF',
   /* teaser_download_pdf */   'title' => '',
   /* teaser_download_pdf */   'body' => 'Download PDF version',
   /* teaser_download_pdf */   'format' => 'full_html',
   /* teaser_download_pdf */   'substitute' => 0,
   /* teaser_download_pdf */ );
  $export['teaser_download_pdf'] = $content;

   /* teaser_group_info */ $content = new stdClass();
   /* teaser_group_info */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* teaser_group_info */ $content->api_version = 1;
   /* teaser_group_info */ $content->name = 'teaser_group_info';
   /* teaser_group_info */ $content->admin_title = 'Teaser: Group Info';
   /* teaser_group_info */ $content->admin_description = 'Teaser: Group Info';
   /* teaser_group_info */ $content->category = 'Custom blocks';
   /* teaser_group_info */ $content->settings = array(
   /* teaser_group_info */   'admin_title' => 'Group(s)',
   /* teaser_group_info */   'title' => '',
   /* teaser_group_info */   'body' => 'Group',
   /* teaser_group_info */   'format' => 'full_html',
   /* teaser_group_info */   'substitute' => 1,
   /* teaser_group_info */ );
  $export['teaser_group_info'] = $content;

   /* teaser_views_count */ $content = new stdClass();
   /* teaser_views_count */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* teaser_views_count */ $content->api_version = 1;
   /* teaser_views_count */ $content->name = 'teaser_views_count';
   /* teaser_views_count */ $content->admin_title = 'Teaser: Views Count';
   /* teaser_views_count */ $content->admin_description = 'Teaser: Views Count';
   /* teaser_views_count */ $content->category = 'Custom blocks';
   /* teaser_views_count */ $content->settings = array(
   /* teaser_views_count */   'admin_title' => 'Num. Views',
   /* teaser_views_count */   'title' => '',
   /* teaser_views_count */   'body' => '201 views',
   /* teaser_views_count */   'format' => 'full_html',
   /* teaser_views_count */   'substitute' => 0,
   /* teaser_views_count */ );
  $export['teaser_views_count'] = $content;

   /* temp_checkbox */ $content = new stdClass();
   /* temp_checkbox */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* temp_checkbox */ $content->api_version = 1;
   /* temp_checkbox */ $content->name = 'temp_checkbox';
   /* temp_checkbox */ $content->admin_title = 'Checkbox (FPO)';
   /* temp_checkbox */ $content->admin_description = 'Just a single checkbox for use as a placeholder whilst theming';
   /* temp_checkbox */ $content->category = '';
   /* temp_checkbox */ $content->settings = array(
   /* temp_checkbox */   'admin_title' => 'Checkbox (FPO)',
   /* temp_checkbox */   'title' => '',
   /* temp_checkbox */   'body' => '<input type="checkbox" name="download" value="1">',
   /* temp_checkbox */   'format' => 'full_html',
   /* temp_checkbox */   'substitute' => 1,
   /* temp_checkbox */ );
  $export['temp_checkbox'] = $content;

   /* temp_download_pdf */ $content = new stdClass();
   /* temp_download_pdf */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* temp_download_pdf */ $content->api_version = 1;
   /* temp_download_pdf */ $content->name = 'temp_download_pdf';
   /* temp_download_pdf */ $content->admin_title = 'Download PDF (FPO)';
   /* temp_download_pdf */ $content->admin_description = '';
   /* temp_download_pdf */ $content->category = '';
   /* temp_download_pdf */ $content->settings = array(
   /* temp_download_pdf */   'admin_title' => 'Download PDF (FPO)',
   /* temp_download_pdf */   'title' => '',
   /* temp_download_pdf */   'body' => 'Download PDF',
   /* temp_download_pdf */   'format' => 'full_html',
   /* temp_download_pdf */   'substitute' => 1,
   /* temp_download_pdf */ );
  $export['temp_download_pdf'] = $content;

   /* temp_num_views */ $content = new stdClass();
   /* temp_num_views */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* temp_num_views */ $content->api_version = 1;
   /* temp_num_views */ $content->name = 'temp_num_views';
   /* temp_num_views */ $content->admin_title = 'Num Views (FPO)';
   /* temp_num_views */ $content->admin_description = '';
   /* temp_num_views */ $content->category = '';
   /* temp_num_views */ $content->settings = array(
   /* temp_num_views */   'admin_title' => 'Num Views (FPO)',
   /* temp_num_views */   'title' => '',
   /* temp_num_views */   'body' => '<div class="num_views">87 views</div>',
   /* temp_num_views */   'format' => 'full_html',
   /* temp_num_views */   'substitute' => 1,
   /* temp_num_views */ );
  $export['temp_num_views'] = $content;

   /* temp_panel_content */ $content = new stdClass();
   /* temp_panel_content */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* temp_panel_content */ $content->api_version = 1;
   /* temp_panel_content */ $content->name = 'temp_panel_content';
   /* temp_panel_content */ $content->admin_title = 'Temp Panel Content';
   /* temp_panel_content */ $content->admin_description = 'This is a block of sample content to use in filling up a panel when necessary.';
   /* temp_panel_content */ $content->category = 'Temp';
   /* temp_panel_content */ $content->settings = array(
   /* temp_panel_content */   'admin_title' => 'Templ Panel Content',
   /* temp_panel_content */   'title' => 'A block of sample content',
   /* temp_panel_content */   'body' => 'Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec sed odio dui.

Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Donec sed odio dui. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Cras mattis consectetur purus sit amet fermentum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit.

Sed posuere consectetur est at lobortis. Donec id elit non mi porta gravida at eget metus. Donec ullamcorper nulla non metus auctor fringilla. Etiam porta sem malesuada magna mollis euismod. Aenean lacinia bibendum nulla sed consectetur.

Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor.',
   /* temp_panel_content */   'format' => 'full_html',
   /* temp_panel_content */   'substitute' => 1,
   /* temp_panel_content */ );
  $export['temp_panel_content'] = $content;

   /* unpublished_node_block */ $content = new stdClass();
   /* unpublished_node_block */ $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
   /* unpublished_node_block */ $content->api_version = 1;
   /* unpublished_node_block */ $content->name = 'unpublished_node_block';
   /* unpublished_node_block */ $content->admin_title = 'Unpublished';
   /* unpublished_node_block */ $content->admin_description = '';
   /* unpublished_node_block */ $content->category = '';
   /* unpublished_node_block */ $content->settings = array(
   /* unpublished_node_block */   'admin_title' => 'Unpublished',
   /* unpublished_node_block */   'title' => '',
   /* unpublished_node_block */   'body' => '<div class="node-unpublished">
  <mark class="unpublished">Unpublished</mark>
</div>',
   /* unpublished_node_block */   'format' => 'full_html',
   /* unpublished_node_block */   'substitute' => 1,
   /* unpublished_node_block */ );
  $export['unpublished_node_block'] = $content;

  return $export;
}
