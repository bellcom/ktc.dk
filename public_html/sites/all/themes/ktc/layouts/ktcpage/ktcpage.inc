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
    'left1' => t('Left side center (row)'),
    'left2' => t('Left side bottom'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
