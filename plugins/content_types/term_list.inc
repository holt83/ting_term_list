<?php

/**
 * @file
 *
 * Defines the term list plugin.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
	'title' => t('Term list'),
	'description' => t('Shows a list of ting material terms, based on the settings
	   from the term_list node being viewed.'),
	'content_types' => array('term_list'),
	'single' => TRUE,
	'render callback' => 'ting_term_list_render',
	'required context' => new ctools_context_required(t('Node'), 'node'),
	'edit form' => 'term_list_edit_form',
	'category' => t('Ting'),
);

function ting_term_list_render($subtype, $conf, $args, $context) {	
	$result = ting_subject_list_get_subjects('musik');
	file_put_contents("/home/drupalpro/debug/debug.txt", print_r($result , TRUE), FILE_APPEND);
	// Get the node respresenting this subject list from the context.
	$node = NULL;
	if (!empty($context) && !empty($context->data)) {
		$node = $context->data;
	}
	$block = new stdClass();
	$block->title = 'Term list';
	$block->content = array(
		'#theme' => 'ting_term_list_column',
		'#column_title' => 'Test column title',
	);	
	return $block;
}

function ting_term_list_edit_form($form, &$form_state) {
	return $form;
}