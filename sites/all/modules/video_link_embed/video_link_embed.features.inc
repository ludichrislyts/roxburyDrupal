<?php
/**
 * @file
 * video_link_embed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_link_embed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function video_link_embed_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function video_link_embed_node_info() {
  $items = array(
    'video' => array(
      'name' => t('video'),
      'base' => 'node_content',
      'description' => t('A video player widget'),
      'has_title' => '1',
      'title_label' => t('Remembering Roxbury'),
      'help' => t('Provide a link to your favorite video clip'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
