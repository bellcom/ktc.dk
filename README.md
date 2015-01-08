# ktc.dk

## Elasticsearch setup

### Elasticsearch on Debian
* wget -qO - http://packages.elasticsearch.org/GPG-KEY-elasticsearch | apt-key add -
* echo "deb http://packages.elasticsearch.org/elasticsearch/1.4/debian stable main" > /etc/apt/sources.list.d/elasticsearch.list
* apt-get update && apt-get install elasticsearch
* Edit /etc/elasticsearch/elasticsearch.yml and set: "discovery.zen.ping.multicast.enabled: false" (will disable auto cluster discovery)

### Modules
* cd public_html
* drush en composer_manager # y, y, n (maybe also cd ~;drush cache-clear drush)
* drush vset composer_manager_vendor_dir ../vendor
* drush vset composer_manager_file_dir ../
* cd ..
* drush -r <path_to_public_html> composer-rebuild
* drush -r <path_to_public_html> composer install
* cd public_html
* drush en elasticsearch_connector # y, y, y
* Add cluster on /admin/config/elasticsearch-connector/clusters
* drush en search_api
* drush en elasticsearch_connector_search_api
* Setup a server on /admin/config/search/search_api
* Use search_api_pages (https://www.drupal.org/project/search_api_page) for a search page or use another search_api way

### Authcache
* 
