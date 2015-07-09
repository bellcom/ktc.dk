<?php

// Plugin definition
$plugin = array(
  'title' => t('KTC 3 kolonner - m Data'),
  'category' => t('KTC'),
  'icon' => 'ktc3coldata.png',
  'theme' => 'panels_ktc3coldata',
  'css' => 'ktc3coldata.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'centertop' => t('Center - Top - primary'),
    'centertop_secondary' => t('Center - Top - secondary'),
    'centerleft' => t('Center - Left'),
    'centerright' => t('Center - Right'),
    'center' => t('Center'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
