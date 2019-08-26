#!/bin/bash

function bash {
  docker-compose exec php bash
}

function composer {
  docker-compose exec php composer $@
}

function drush {
  docker-compose exec php drush -r /var/www/html/public_html $@
}

function drupal {
  docker-compose exec php drupal $@
}

$*