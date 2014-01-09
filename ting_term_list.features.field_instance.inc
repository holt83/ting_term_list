<?php
/**
 * @file
 * ting_term_list.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ting_term_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ting_term_list-field_term_list_column_count'
  $field_instances['node-ting_term_list-field_term_list_column_count'] = array(
    'bundle' => 'ting_term_list',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the number of columns in this term list. The terms of the list will automatically be distributed among the chosen number of columns.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
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
    'field_name' => 'field_term_list_column_count',
    'label' => 'Number of columns',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
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
    'label' => 'Number of terms',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ting_term_list-field_term_list_term_query'
  $field_instances['node-ting_term_list-field_term_list_term_query'] = array(
    'bundle' => 'ting_term_list',
    'default_value' => array(
      0 => array(
        'value' => 'bog',
      ),
    ),
    'deleted' => 0,
    'description' => 'The CQL query that should be passed to the datawell webservice.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
    'field_name' => 'field_term_list_term_query',
    'label' => 'Term query',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Number of columns');
  t('Number of terms');
  t('Select the number of columns in this term list. The terms of the list will automatically be distributed among the chosen number of columns.');
  t('Term query');
  t('The CQL query that should be passed to the datawell webservice.');
  t('The number of terms to display in the term list. Defaults to 60 terms.');

  return $field_instances;
}
