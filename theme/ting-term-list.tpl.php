<?php 

/**
 * HTML for a Ting term list.
 *
 * Availbale variables:
 *  - $terms: 
 * 	  An array of terms for this list. The array is setup as a render
 *    array, so it can be passed directly to the render() function.
 *  - $columns: 
 *    A render array setup with the columns of this term list.
 *  - $column_count: 
 *    The number of columns in this list.
 *  - $classes: 
 *    String of classes that can be used to style contextually through
 *    css. The string can be manipulated through the variable $classes_array in
 *    preprocess functions.
 *  - $attributes: 
 *    String of attributes to be printed on the container div. The string can 
 *    be manipulated through the variable $attributes_array in preprocess 
 *    functions.  
 */

?>

<div id="ting-term-list" class="<?php print $classes ?> clearfix" <?php print $attributes ?>>
	<?php if (isset($columns)): ?>
		<div class="term-list-columns-wrapper">
			<?php print render($columns); ?>
		</div>
	<?php endif; ?>
</div>