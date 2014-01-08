<?php
/**
 * @file
 * ting_term_list_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ting_term_list_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_term_list_term_cat'
  $field_bases['field_term_list_term_cat'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_term_list_term_cat',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'bog ' => ' Bog',
        'musik ' => ' Musik',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_term_list_term_count'
  $field_bases['field_term_list_term_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_term_list_term_count',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
