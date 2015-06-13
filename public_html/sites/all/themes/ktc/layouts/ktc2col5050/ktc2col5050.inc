<?php

// Plugin definition
$plugin = array(
  'title' => t('KTC 2 kolonner - plus 2 indlejrede til hoejre'),
  'category' => t('KTC'),
  'icon' => 'ktc2col5050.png',
  'theme' => 'panels_ktc2col5050',
  'css' => 'ktc2col5050.css',
  'regions' => array(
    'content' => t('Left'),
    'contentrighttop' => t('Right - Top'),
    'contentrightbotleft' => t('Right - Bottom Left'),
    'contentrightbotright' => t('Right - Bottom Right')
  ),
);
