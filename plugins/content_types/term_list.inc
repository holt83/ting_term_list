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
	'edit form' => 'ting_term_list_edit_form',
	'category' => t('Ting'),
);

/**
 * Render callback for the Ting term list plugin.
 */
function ting_term_list_render($subtype, $conf, $args, $context) {
	if (empty($context) || empty($context->data)) {
		return FALSE;
	}
	// Get term list settings
	$node = $context->data;
	$settings = ting_term_list_get_term_list_settings($node);
	$category = isset($settings['category']) ? $settings['category'] : 'bog';
	$count = isset($settings['count']) ? $settings['count'] : 60;

	// Get terms and setup render array for the plugin.
	$terms = ting_term_list_get_terms($category, $count);
	$block = new stdClass();
	$block->title = $node->title;
	$block->content = array(
		'#theme' => 'ting_term_list',
		'#terms' => $terms,
	);	

	return $block;
}

function ting_term_list_edit_form($form, &$form_state) {
	return $form;
}