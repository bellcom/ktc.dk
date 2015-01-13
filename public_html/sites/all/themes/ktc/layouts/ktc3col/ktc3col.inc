<?php

// Plugin definition
$plugin = array(
  'title' => t('KTC 3 kolonner'),
  'category' => t('KTC'),
  'icon' => 'ktc3col.png',
  'theme' => 'panels_ktc3col',
  'css' => 'ktc3col.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'center' => t('Center'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
