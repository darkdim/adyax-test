<?php

/**
 * @file
 * Defines the CTools Random Video plugin.
 */

/**
 * Defines this Random Video plugin.
 */
$plugin = array(
  'title' => t('Vimeo Videos'),
  'description' => t('CTools content type for panels to show random 3 Vimeo videos created on the site.'),
  'single' => TRUE,
  'content_types' => array('no_context_content_type'),
  'render callback' => 'adyax_test_content_type_render',
  'defaults' => array(),

  'edit form' => 'adyax_test_random_video_block_edit_form',
  'icon' => 'favicon.ico',
  'category' => array(t('Adyax Examples'), -9),
);

/**
 * 'Edit' callback for the content type.
 * This returns a form.
 */
function adyax_test_random_video_block_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['num_item'] = array(
    '#type' => 'textfield',
    '#title' => t('Config number random video show'),
    '#size' => 30,
    '#description' => t('Enter number value'),
    '#default_value' => !empty($conf['num_item']) ? $conf['num_item'] : 3,
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function adyax_test_random_video_block_edit_form_validate($form, &$form_state) {
  $value = $form_state['values']['num_item'];
  if ($value !== '' && (!is_numeric($value) || intval($value) != $value) || $value <= 0) {
    form_set_error('num_item', t('%name must be a positive integer.', array('%name' => 'num_item')));
  }
}

function adyax_test_random_video_block_edit_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Run-time rendering of the body of the block (content type)
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time
 * @param $args
 * @param $context
 *   Context - in this case we don't have any
 *
 * @return
 *   An object with at least title and content members
 */
function adyax_test_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->title = "Awesome Vimeo Video";
  $block->content = '';
  if (empty($conf['num_item'])) {
    $conf['num_item'] = 3;
  }
  $items = adyax_test_get_random_instances_fields($conf['num_item'], 'vimeo_video');

  foreach ($items as $item) {
    $rows[0][] = drupal_render($item);
    $header[] = check_plain($item['#path']['options']['entity']->title);
  }
  $block->content = theme('table', array('header' => $header, 'rows' => $rows));

  return $block;
}

function adyax_test_get_random_instances_fields($num, $type) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', $type)
    ->propertyCondition('status', 1)
    ->addTag('random')
    ->range(0, $num);
    $results = $query->execute();

  $nodes = node_load_multiple(array_keys($results['node']));
  foreach ($nodes as $key => $value) {
    $field = field_get_items('node', $value, 'field_vimeo');
    $fields[] = field_view_value('node', $value, 'field_vimeo', $field[0], array(
      'label' => 'hidden',
      'type' => 'default_formatter',
      'settings' => array(
        'image_style' => 'medium',
        'image_link' => 'content',
        'description' => 0,
        'description_position' => 'bottom',
      ),
    ));
  }

  return $fields;
}

/**
 * Implements hook_query_TAG_alter().
 */
function adyax_test_query_random_alter($query) {
  $query->orderRandom();
}
