<?php

/**
 * @file
 *
 * Contains preprocess functions for the Ting term list templates.
 */

/**
 * Preprocess function for a term list. 
 * Setup render arrays for each column.
 */
function template_preprocess_ting_term_list(&$variables) {
	$terms = $variables['terms'];
	// Setup each column in the term list.
	$column_count = $variables['column_count'];
	$columns = array();
	for ($i = 0; $i < $column_count; $i++) { 
		$columns[$i] = array(
			'#theme' => 'ting_term_list_column',
			'#terms' => array(),
		); 
	}
	$current_column = 0;
	foreach ($terms as $term_name => $term_count) {
		$columns[$current_column]['#terms'][] = array(
			'#theme' => 'ting_term_list_term',
			'#term_name' => $term_name,
			'#term_count' => $term_count, 
		);
		$current_column = ($current_column + 1) % $column_count;
	}
	$variables['columns'] = $columns;
	file_put_contents("/home/drupalpro/debug/debug.txt", print_r($variables['columns'] , TRUE), FILE_APPEND);
}
