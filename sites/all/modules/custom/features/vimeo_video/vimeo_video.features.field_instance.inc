<?php
/**
 * @file
 * vimeo_video.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function vimeo_video_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-vimeo_video-field_vimeo'.
  $field_instances['node-vimeo_video-field_vimeo'] = array(
    'bundle' => 'vimeo_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'adyax_test',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'image_link' => 'source',
          'image_style' => 'large',
        ),
        'type' => 'adyax_test_embedvideo',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vimeo',
    'label' => 'Vimeo',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'adyax_test',
      'settings' => array(),
      'type' => 'adyax_test_linkfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vimeo');

  return $field_instances;
}
