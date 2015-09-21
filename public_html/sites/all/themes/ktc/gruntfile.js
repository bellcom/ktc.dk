// Configurations
var pkgjson = require('./package.json');
var config = {
    pkg      : pkgjson,
    directory: {
        vendor: './src/vendor',
        src   : './src',
        dist  : './dist'
    }
};
var module;

// Grunt
module.exports = function (grunt) {
    'use strict';

    // Configurations
    var gruntConfig = grunt.file.readJSON('./src/grunt/config.json', { encoding: 'utf8' });

    // Setup
    grunt.initConfig({
        config: config,
        pkg   : config.pkg,

        clean: {
            css: '<%= config.directory.dist %>/css',
            js : '<%= config.directory.dist %>/js'
        },

        less: {
            app: {
                options: {
                    strictMath       : true,
                    sourceMap        : true,
                    outputSourceFiles: true,
                    sourceMapURL     : '<%= config.directory.dist %>/css/stylesheet.css.map',
                    sourceMapFilename: '<%= config.directory.dist %>/css/stylesheet.css.map'
                },
                src    : '<%= config.directory.src %>/less/stylesheet.less',
                dest   : '<%= config.directory.dist %>/css/stylesheet.css'
            },
            ie9: {
                options: {
                    strictMath       : true,
                    outputSourceFiles: true
                },
                src    : '<%= config.directory.src %>/less/stylesheet.less',
                dest   : '<%= config.directory.dist %>/css/stylesheet-ie9.css'
            }
        },

        sprite: {
            all: {
                src: '<%= config.directory.dist %>/images/sprites/*.png',
                dest: '<%= config.directory.dist %>/images/sprites.png',
                destCss: '<%= config.directory.src %>/less/template/sprites.less',
                imgPath: '../images/sprites.png',
                padding: 14,
                cssFormat: 'less',
                cssOpts: {
                    cssClass: function (item) {
                        return '.' + item.name + timestamp;
                    }
                }
            }
        },

        csslint: {
            options: {
                csslintrc: '<%= config.directory.src %>/less/.csslintrc'
            },
            app    : [
                '<%= config.directory.dist %>/css/stylesheet.css'
            ]
        },

        autoprefixer: {
            app    : {
                options: {
                    map: true,
                    browsers: gruntConfig.autoprefixer.browsers.other
                },
                src    : '<%= config.directory.dist %>/css/stylesheet.css'
            },
            ie9: {
                options: {
                    map: true,
                    browsers: gruntConfig.autoprefixer.browsers.ie9
                },
                src    : '<%= config.directory.dist %>/css/stylesheet-ie9.css'
            }

        },

        sakugawa: {
            ie9: {
                options: {
                    maxSelectors: 4095,
                    mediaQueries: 'separate',
                    suffix: '-'
                },
                src: ['<%= config.directory.dist %>/css/stylesheet-ie9.css']
            }
        },

        cssmin: {
            app: {
                options: {
                    keepSpecialComments: false,
                    advanced           : false
                },
                src : '<%= config.directory.dist %>/css/stylesheet.css',
                dest: '<%= config.directory.dist %>/css/stylesheet.min.css'
            },
            ie9: {
                options: {
                    compatibility      : 'ie9',
                    keepSpecialComments: false,
                    advanced           : false
                },
                src : '<%= config.directory.dist %>/css/stylesheet-ie9.css',
                dest: '<%= config.directory.dist %>/css/stylesheet-ie9.min.css'
            }
        },

        modernizr: {
            app: {
                devFile      : 'remote',
                parseFiles   : true,
                files        : {
                    src: ['<%= config.directory.dist %>/js/app.js', '<%= config.directory.dist %>/js/ie9.js', '<%= config.directory.dist %>/css/stylesheet.css']
                },
                outputFile   : '<%= config.directory.dist %>/js/modernizr.js',
            }
        },

        jshint: {
            options: {
                jshintrc: '<%= config.directory.src %>/js/.jshintrc'
            },
            app    : {
                src: ['<%= config.directory.src %>/js/*.js']
            }
        },

        jscs: {
            options: {
                config: '<%= config.directory.src %>/js/.jscsrc'
            },
            app    : {
                src: '<%= jshint.app.src %>'
            }
        },

        concat: {
            options: {
                sourceMap   : true,
                stripBanners: true
            },
            app    : {
                src : gruntConfig.concat.jsApp,
                dest: '<%= config.directory.dist %>/js/app.js'
            },
            ie9Lt  : {
                src : gruntConfig.concat.jsIe9,
                dest: '<%= config.directory.dist %>/js/ie9.js'
            }
        },

        uglify: {
            options  : {
                compress        : {
                    warnings: false
                },
                mangle          : true,
                preserveComments: 'some'
            },
            app      : {
                src : '<%= config.directory.dist %>/js/app.js',
                dest: '<%= config.directory.dist %>/js/app.min.js'
            },
            ie9Lt    : {
                src : '<%= config.directory.dist %>/js/ie9.js',
                dest: '<%= config.directory.dist %>/js/ie9.min.js'
            },
            modernizr: {
                src : '<%= config.directory.dist %>/js/modernizr.js',
                dest: '<%= config.directory.dist %>/js/modernizr.min.js'
            }
        },

        copy: {
            src : {
                files: [
                    {
                        expand: true,
                        cwd   : '<%= config.directory.vendor %>/bootstrap/less/',
                        src   : '**/*',
                        dest  : '<%= config.directory.src %>/less/vendor/bootstrap/'
                    },
                    {
                        expand: true,
                        cwd   : '<%= config.directory.vendor %>/fontawesome/less/',
                        src   : '**/*',
                        dest  : '<%= config.directory.src %>/less/vendor/fontawesome/'
                    },
                    {
                        expand: true,
                        cwd   : '<%= config.directory.vendor %>/bs3-designer/less/',
                        src   : '**/*',
                        dest  : '<%= config.directory.src %>/less/vendor/bs3-designer/'
                    },
                    {
                        expand: true,
                        cwd   : '<%= config.directory.vendor %>/bs3-masonry/less/',
                        src   : '**/*',
                        dest  : '<%= config.directory.src %>/less/vendor/bs3-masonry/'
                    }
                ]
            },
            dist: {
                files: [
                    {
                        expand : true,
                        flatten: true,
                        cwd    : '<%= config.directory.vendor %>/fontawesome/',
                        src    : '**/fonts/*',
                        dest   : '<%= config.directory.dist %>/fonts/'
                    }
                ]
            }
        },

        watch: {
            less: {
                files: ['<%= config.directory.src %>/less/**/*.less'],
                tasks: ['clean:css', 'less', 'sprite', 'autoprefixer', 'sakugawa', 'cssmin', 'modernizr']
            },
            js  : {
                files: '<%= config.directory.src %>/js/**/*.js',
                tasks: ['clean:js', 'concat', 'uglify', 'modernizr']
            }
        }
    });

    // Load
    grunt.loadNpmTasks('grunt-autoprefixer');
    grunt.loadNpmTasks('grunt-jscs');
    grunt.loadNpmTasks('grunt-modernizr');
    grunt.loadNpmTasks('grunt-contrib-clean');
    grunt.loadNpmTasks('grunt-contrib-copy');
    grunt.loadNpmTasks('grunt-contrib-concat');
    grunt.loadNpmTasks('grunt-contrib-csslint');
    grunt.loadNpmTasks('grunt-contrib-cssmin');
    grunt.loadNpmTasks('grunt-contrib-jshint');
    grunt.loadNpmTasks('grunt-contrib-less');
    grunt.loadNpmTasks('grunt-contrib-uglify');
    grunt.loadNpmTasks('grunt-contrib-watch');
    grunt.loadNpmTasks('grunt-spritesmith');
    grunt.loadNpmTasks('grunt-sakugawa');

    // Register
    grunt.registerTask('default', ['watch']);

    grunt.registerTask('build', ['clean', 'concat', 'sprite', 'less', 'autoprefixer', 'modernizr', 'uglify', 'sakugawa', 'cssmin']);
    grunt.registerTask('build-css', ['clean:css', 'sprite', 'less', 'autoprefixer', 'modernizr', 'sakugawa', 'cssmin']);
    grunt.registerTask('build-js', ['clean:js', 'concat', 'modernizr', 'uglify']);

    grunt.registerTask('test', ['clean', 'concat', 'jscs', 'jshint', 'sprite', 'less', 'autoprefixer', 'csslint', 'modernizr', 'uglify', 'sakugawa', 'cssmin']);
    grunt.registerTask('test-css', ['clean:css', 'sprite', 'less', 'autoprefixer', 'csslint', 'modernizr', 'sakugawa', 'cssmin']);
    grunt.registerTask('test-js', ['clean:js', 'concat', 'jscs', 'jshint', 'modernizr', 'uglify']);

    grunt.registerTask('copy-files', ['copy']);
};
