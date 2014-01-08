<?php
/**
 * @file
 * ting_term_list_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ting_term_list_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ting_term_list_node_info() {
  $items = array(
    'ting_term_list' => array(
      'name' => t('Term list'),
      'base' => 'node_content',
      'description' => t('A content type that shows a list of Ting material terms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
