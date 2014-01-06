<?php

/**
 * @file
 *
 * Contains preprocess functions for the Ting term list templates.
 */

function template_preprocess_ting_term_list(&$variables) {
	$terms = $variables['terms'];
	// Total term count for the list.
	$term_count = count($terms);
	$column_count = $variables['column_count'];
	// Term count for each column.
	$column_term_count = $term_count / $column_count;
	$columns = array();
	for ($i = 0; $i < $column_count; $i++) {
		$term_offset = $column_term_count * $i; 
		$column_terms = array_slice($terms, $term_offset, $column_term_count);
		$columns[] = array(
			'#theme' => 'ting_term_list_column',
			'#terms' => $column_terms,
		);
	}
	file_put_contents("/home/drupalpro/debug/debug.txt", print_r($columns, TRUE), FILE_APPEND);
}