api = 2
core = 7.x

;; OS2Web projects:

; OS2Web Modules

;; Contrib modules below:

; Libraries

libraries[solr-php-client][download][type] = "get"
libraries[solr-php-client][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip"
libraries[solr-php-client][directory_name] = "SolrPhpClient"
libraries[solr-php-client][destination] = "libraries"

; Contrib modules

; Features + related

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

; Panels

; Basic

# projects[ctools][subdir] = "contrib"
# projects[ctools][version] = "1.3"

projects[apachesolr][subdir] = "contrib"
projects[apachesolr][version] = "1.1"

projects[facetapi][subdir] = "contrib"
projects[facetapi][version] = "1.3"
