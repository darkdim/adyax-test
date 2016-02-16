<?php
/**
 * @file
 * vimeo_video.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vimeo_video_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_vimeo'.
  $field_bases['field_vimeo'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_vimeo',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'adyax_test',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'vimeo_video',
  );

  return $field_bases;
}
