<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <div class="ktc-aside ktc-aside-green">
      <div class="ktc-aside-heading">
        <h3 class="ktc-aside-title"><?php print $view->build_info['title']; ?></h3>
      </div>
      <div class="ktc-aside-body">
        <?php print $row; ?>
      </div>
    </div>
  </div>
<?php endforeach; ?>
