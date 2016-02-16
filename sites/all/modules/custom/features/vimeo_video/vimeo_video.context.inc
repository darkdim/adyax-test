<?php
/**
 * @file
 * vimeo_video.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function vimeo_video_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vimeo_video_page';
  $context->description = 'Output blocks on vimeo page';
  $context->tag = 'vimeo';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'vimeo_video' => 'vimeo_video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-awesome_vimeo_video' => array(
          'module' => 'panels_mini',
          'delta' => 'awesome_vimeo_video',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Output blocks on vimeo page');
  t('vimeo');
  $export['vimeo_video_page'] = $context;

  return $export;
}
