<?php

/**
 * @file
 *
 * Defines the subject list plugin.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
	'title' => t('Subject list'),
	'description' => t('Shows a list of ting subjectsm, based on the settings from the subject_list node being viewed.'),
	'content_types' => array('subject_list'),
	'single' => TRUE,
	'render callback' => 'subject_list_render',
	'required context' => new ctools_context_required(t('Node'), 'node'),
	'edit form' => 'subject_list_edit_form',
	'category' => t('Ting'),
);

function subject_list_render($subtype, $conf, $args, $context) {
	file_put_contents("/home/drupalpro/debug/debug.txt", print_r($context , TRUE), FILE_APPEND);
	require_once drupal_get_path('module', 'ting') . '/ting.client.inc';
	$scan_results = ting_subject_list_do_scan('arkitekter', 'subject', 100);
	$block = new stdClass();
	$block->title = 'Subject list';
	$block->content = 'A little test line';
	return $block;
}

function subject_list_edit_form($form, &$form_state) {
	return $form;
}