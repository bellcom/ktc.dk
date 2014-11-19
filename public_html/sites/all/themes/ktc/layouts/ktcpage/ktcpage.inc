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
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
