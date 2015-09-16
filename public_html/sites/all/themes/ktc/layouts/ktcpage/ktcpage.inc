<?php

// Plugin definition
$plugin = array(
  'title' => t('KTC Indholdsside'),
  'category' => t('KTC'),
  'icon' => 'ktcpage.png',
  'theme' => 'panels_ktcpage',
  'css' => 'ktcpage.css',
  'regions' => array(
    'top' => t('Top'),
    'main-content' => t('Main content'),
    'content-1' => t('Content - 1'),
    'content-1-masonry' => t('Content - 1 - masonry'),
    'content-2' => t('Content - 2'),
    'content-2-masonry' => t('Content - 2 - masonry'),
    'content-3' => t('Content - 3'),
    'content-3-masonry' => t('Content - 3 - masonry'),
    'content-4' => t('Content - 4'),
    'content-4-masonry' => t('Content - 4 - masonry'),
    'sidebar-right' => t('Sidebar - right'),
    'bottom' => t('Bottom'),

    'right' => t('Right side'),
    'left' => t('Left side'),
    'left1' => t('Left side - 1'),
    'left2' => t('Left side - 2'),
  ),
);
