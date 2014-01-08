<?php

/**
 * HTML for a single term in the Ting term list.
 *
 * Avialable variables:
 *  - $term:
 *  	An array with the data for this term.
 *  - $term_name:
 *    The name of this term.
 *  - $term_count:
 *    The material count for this term.
 *  - $zebra:
 *  	Variable that is either 'odd' or 'even' to help create zebra markings in 
 *  	the list. 
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

<div class="<?php print $classes;?> <?php print $zebra;?>" <?php print $attributes; ?>>
	<?php if (isset($term_name)): ?>
		<a href="#" class="ting-term-list-term-name"><?php print $term_name; ?></a>
	<?php endif; ?>
	<?php if (isset($term_count)): ?>
		<div class="ting-term-list-term-count"><?php print $term_count; ?></div>
	<?php endif; ?>
</div>