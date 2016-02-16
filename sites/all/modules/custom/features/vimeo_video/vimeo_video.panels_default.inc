<?php
/**
 * @file
 * vimeo_video.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function vimeo_video_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'awesome_vimeo_video';
  $mini->category = 'video';
  $mini->admin_title = 'Awesome Vimeo Video';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Random Vimeo Video';
  $display->uuid = 'a5933f24-6fb8-4bb9-96ab-b2e9637d51b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c74b1a30-8e62-4a26-9bfe-9d248e0f9092';
    $pane->panel = 'middle';
    $pane->type = 'random_video';
    $pane->subtype = 'random_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'num_item' => '3',
      'form_build_id' => 'form-G6da9-NM_sBmWpRBI4pMz4En_arY2krqRWxKlbUOZBI',
      'form_token' => 'OgxQSTFknMuHnN6f5f7LqxgTnQHsK47QoEZIWX9JIAQ',
      'form_id' => 'adyax_test_random_video_block_edit_form',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c74b1a30-8e62-4a26-9bfe-9d248e0f9092';
    $display->content['new-c74b1a30-8e62-4a26-9bfe-9d248e0f9092'] = $pane;
    $display->panels['middle'][0] = 'new-c74b1a30-8e62-4a26-9bfe-9d248e0f9092';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c74b1a30-8e62-4a26-9bfe-9d248e0f9092';
  $mini->display = $display;
  $export['awesome_vimeo_video'] = $mini;

  return $export;
}
