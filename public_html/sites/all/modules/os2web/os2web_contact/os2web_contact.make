api = 2
core = 7.x

;; OS2Web projects:

; OS2Web Modules

# projects[os2web_base][type] = "module"
# projects[os2web_base][download][type] = "git"
# ;projects[os2web_base][download][tag] = "1.10"
# projects[os2web_base][download][branch] = "master"
# projects[os2web_base][download][url] = "https://github.com/OS2web/os2web_base.git"

;; Contrib modules below:

; Libraries

; Contrib modules

; Basic

# projects[ctools][subdir] = "contrib"
# projects[ctools][version] = "1.3"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0-beta2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta6"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"
; Patch to remove notices in badly stored features. TODO: add issue on d.o
; projects[field_group][patch][] = "patches/field_group-1.patch"
