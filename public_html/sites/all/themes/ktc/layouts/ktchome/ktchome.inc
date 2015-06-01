<?php

// Plugin definition
$plugin = array(
  'title' => t('KTC startside'),
  'category' => t('KTC'),
  'icon' => 'ktchome.png',
  'theme' => 'panels_ktchome',
  'css' => 'ktchome.css',
  'regions' => array(
    'top_fuld' => t('Top full width'),
    'banner_left' => t('Banner - left'),
    'banner_center_left' => t('Banner - left center'),
    'banner_center_right' => t('Banner - right center'),
    'banner_right' => t('Banner - right'),
    'content_left' => t('Content - left'),
    'content_center' => t('Content - center'),
    'content_right' => t('Content - right')
  ),
);
