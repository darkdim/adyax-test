<?php
/**
 * @file
 * vimeo_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vimeo_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vimeo_video_node_info() {
  $items = array(
    'vimeo_video' => array(
      'name' => t('Vimeo Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
