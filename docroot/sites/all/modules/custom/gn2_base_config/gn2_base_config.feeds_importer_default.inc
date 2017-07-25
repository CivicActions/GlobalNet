<?php
/**
 * @file
 * gn2_base_config.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gn2_base_config_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_users';
  $feeds_importer->config = array(
    'name' => 'Bulk import users to Groups',
    'description' => 'Add multiple existing users to Groups',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          9 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'field_name_first',
            'target' => 'field_name_first',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'field_name_last',
            'target' => 'field_name_last',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'field_user_rank_prefix',
            'target' => 'field_user_rank_prefix',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_country_of_residence',
            'target' => 'field_country_of_residence',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_nationality',
            'target' => 'field_nationality',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_country_of_representation',
            'target' => 'field_country_of_representation',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'pass',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 1,
          ),
          9 => array(
            'source' => 'groups',
            'target' => 'og_user_node:etid',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'field_crm_id',
            'target' => 'field_crm_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'field_crm_source',
            'target' => 'field_crm_source',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_users'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'topics';
  $feeds_importer->config = array(
    'name' => 'Topics',
    'description' => 'Import Topics',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'topics',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['topics'] = $feeds_importer;

  return $export;
}
