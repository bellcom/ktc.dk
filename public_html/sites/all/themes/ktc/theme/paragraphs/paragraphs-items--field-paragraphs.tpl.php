<?php

/**
 * @file
 * Default theme implementation for a group of paragraph items.
 *
 * Available variables:
 * - $content: Rendered HTML of content items.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - paragraphs-items
 *   - paragraphs-items-{field_name}
 *   - paragraphs-items-{field_name}-{view_mode}
 *   - paragraphs-items-{view_mode}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_paragraphs_items()
 * @see template_process()
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php
    print $content;
  ?>
  <?php if(isset($operations['add'])) :?>
  <ul class="action-links action-links-paragraphs-add dropdown">
    
    <a class="btn btn-success dropdown-toggle" type="button" data-toggle="dropdown"> <?php print t('Add') ?>
    </a> 
    <ul class="dropdown-menu">
     <?php foreach($operations['add'] as $add_link) : ?>
  <li><?php print render($add_link)?></li>
  <?php endforeach;?>
  </ul>
</ul>
    <?php endif ?>
</div>
