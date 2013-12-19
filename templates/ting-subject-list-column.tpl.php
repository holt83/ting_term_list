<?php 

/**
 * HTML for a column in the Ting subject list.
 *
 * Available variables:
 *  - $items:
 *  	An array of items to be shown in this column. Each items covers a ting 
 *  	subject and a count of that subject. The array is setup as a render array,
 *  	so it can be passed directly to the render() function.
 *  - $column_title:
 *  	A string containing the title for this column. 
 *  - $classes: 
 *    String of classes that can be used to style contextually through
 *    css. The string can be manipulated through the variable $classes_array in
 *    preprocess functions.
 *  - $attributes: 
 *  	String of attributes to be printed on the container div. The string can 
 *  	be manipulated through the variable $attributes_array in preprocess 
 *  	functions.  
 */

?>

<div class="<?php print $classes ?>" <?php print $attributes; ?>>
	<?php if (isset($column_title)): ?>
		<div class="column-header">
			<?php print $title_prefix; ?>
			<h3 <?php print $title_attributes; ?>> <?php print $column_title; ?></h3>
			<?php print $title_suffix; ?>
		</div>
	<?php endif; ?>
	<?php if (isset($items)): ?>
		<div class="column-wrapper clearfix" <?php print $content_attributes; ?>>
			<?php print $items; ?>
		</div>
	<?php endif; ?>
</div>