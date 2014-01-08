<?php
/**
 * @file
 * ting_term_list_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ting_term_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ting_term_list-field_term_list_term_cat'
  $field_instances['node-ting_term_list-field_term_list_term_cat'] = array(
    'bundle' => 'ting_term_list',
    'default_value' => array(
      0 => array(
        'value' => 'bog ',
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the category of the terms that is displayed in this term list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_term_list_term_cat',
    'label' => 'Term category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-ting_term_list-field_term_list_term_count'
  $field_instances['node-ting_term_list-field_term_list_term_count'] = array(
    'bundle' => 'ting_term_list',
    'default_value' => array(
      0 => array(
        'value' => 60,
      ),
    ),
    'deleted' => 0,
    'description' => 'The number of terms to display in the term list. Defaults to 60 terms.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_term_list_term_count',
    'label' => 'Term count',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Select the category of the terms that is displayed in this term list.');
  t('Term category');
  t('Term count');
  t('The number of terms to display in the term list. Defaults to 60 terms.');

  return $field_instances;
}
