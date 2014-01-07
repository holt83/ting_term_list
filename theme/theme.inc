<?php

/**
 * @file
 *
 * Contains preprocess functions for the Ting term list templates.
 */

/**
 * Preprocess function for a term list.
 *
 * Sets up render array for each column and adds CSS. 
 */
function template_preprocess_ting_term_list(&$variables) {
	$terms = $variables['terms'];
	// The total term count for the list.
	$term_count = count($terms);
	$column_count = $variables['column_count'];
	// The term count for a column in the list.
	$column_term_count = (int)($term_count / $column_count);
	$term_rest = $term_count % $column_count;
	$columns = array();
	$offset = 0;
	for ($i = 0; $i < $column_count; $i++) {
		$length = $column_term_count;
		// If we have a rest - put an extra term in this column.
		if ($term_rest > 0) {
			$length++;
			$term_rest--;
		}
		$column_terms = array_slice($terms, $offset, $length); 	
		$offset += $length;
		$columns[$i] = array(
			'#theme' => 'ting_term_list_column',
			'#terms' => $column_terms,
		);
	}
	$variables['columns'] = $columns;
}

/**
 * Preprocess function for a column in the term list.
 *
 * Sets up render array for each term in the column.
 */
function template_preprocess_ting_term_list_column(&$variables) {
	$terms = $variables['terms'];
	$terms_render = array();
	foreach ($terms as $term_name => $term_count) {
		$terms_render[] = array(
			'#theme' => 'ting_term_list_term',
			'#term' => array(
			  'term_name' => $term_name,
			  'term_count' => $term_count,
			),
		);
	}
	$variables['terms'] = $terms_render;
}

/**
 * Preprocess function for a single term in the term list.
 */
function template_preprocess_ting_term_list_term(&$variables) {
	$term = $variables['term'];
	$variables['term_name'] = $term['term_name'];
	$variables['term_count'] = $term['term_count'];
}