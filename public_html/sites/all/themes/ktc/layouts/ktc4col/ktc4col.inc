<?php

// Plugin definition
$plugin = array(
  'title' => t('KTC 4 kolonner'),
  'category' => t('KTC'),
  'icon' => 'ktc4col.png',
  'theme' => 'panels_ktc4col',
  'css' => 'ktc4col.css',
  'regions' => array(
    'col1' => t('Column 1'),
    'col2' => t('Column 2'),
    'col3' => t('Column 3'),
    'col4' => t('Column 4')
  ),
);
