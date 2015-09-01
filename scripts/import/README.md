# Dataimport
Be sure to do a dry run on a test installation of the site.

Steps to migrate data from netvaerk.ktc.dk (old drupal site) and www.ktc.dk (old typo3 site) to ktc(.bellcom).dk:
* Export content from netvaerk.ktc.dk
* Dump tables from www.ktc.dk
* Copy files from the "old" server to the "new" server
* Run JSON content importer
* Run hearing importer

The steps are explained further below.

## Export data from current prod sites.
Firstly we need to export the data from the 2 current production sites.

### netvaerk.ktc.dk
This is a drupal site. A script is made that will read out the relevant data and save it as JSON files.

The script is located in `exporters/` and is named `export_data.php`.

The script must be run with `drush php-script export_data.php`, and it will then create
5 files in the current directory.

```
nodes.json
comments.json
users.json
files.json
makemeeting.json
```

**Files**
Files are to be copied to a temporary location where they can be accessed from the new site. Be sure to preserve the file structure from sites/default/files
The script `copy_files.php` can be used to copy only the nessecary files from the server. Run with `php copy_files.php {ssh-passwd}`, it will copy "public" and "private" folders content to the cwd.

Files should be copied to `/var/tmp/ktc.dk-files/drupal`. (on ktc.dk / ktc.bellcom.dk)

**Group roles**
A script to export the group roles for members is located in `exporters`, named `export_og_users_roles.php`. This is run in the same way as the data export script.

This generates a JSON file. Copy this along with the 5 from the data exporter to the new site.

```
og_users_roles.json
```

### ktc.dk
Content is exported from ktc.dk via a DB dump

see `exporter/db_export.txt`

**Files**

Copy files from `/var/www/www.ktc.dk/htdocs/uploads/tx_ktcfileman` on the production server to `/var/tmp/ktc.dk-files/` on our ktc server
I have done this by sshfs mounting the appropriate folder to my local machine and then rsyncing the files the new server.

## Import data
All data is imported to the new KTC site.

### netvaerk.ktc.dk
The 6 exported JSON files, are to be placed in the `scripts/json/import/var` folder. 
On the test server there is a set of files for production 

The entities that are to be imported are defined in config.php in the `json/import` folder.

The import script is also executed with drush from the site root. Eg.: `drush php-script {path_to}/import_data.php`

**Be aware that the makemeeting answers will be imported as new rows each time** The save handler is disabled ind the importer. When all other content is in place, the `makemeeting_answer` table can be truncated, the save handler enabled and then rerun the importer.

**Files**
Files will be imported from the folder specified in config.php. (mnetioned earliver in the document)

### ktc.dk
Import the rows to the same DB Drupal uses (the filename earliver is db_export.txt):
`cat {path_to}/hearing_dump.sql | drush sql-cli`

Run these 3 drush scripts
`drush scr ktc_php_script/import_hearing.php`

`drush scr ktc_php_script/import_hearing_response.php`

`drush scr ktc_php_script/import_files_hearing.php`
