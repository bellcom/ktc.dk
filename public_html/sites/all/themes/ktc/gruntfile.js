/* global module:true*/
module.exports = function(grunt) {
  'use strict';
  var LIVERELOAD_PORT = 12345;
  var timestamp = Date.now(); // Used to cachebust the sprite image.
  grunt.initConfig({
    // server used for livereload
    connect: {
      server: {
        options: {
          hostname: '*',
          base: 'app',
          livereload: LIVERELOAD_PORT
        }
      }
    },
    // running `grunt less` will compile once
    less: {
      development: {
        options: {
          paths: ["./less"],
          yuicompress: false
        },
        files: {
          "./css/style.css": "./less/style.less",
          "./css/editor.css": "./less/editor.less",
          "./css/ie.css": "./less/ie.less"
        }
      },
    },

    //modernizr: {
    //  app: {
    //    devFile      : './js/modernizr-build.js',
    //    files        : {
    //      src: ['./js/*.js', './css/style.css']
    //    },
    //    outputFile   : './js/modernizr.min.js',
    //    extra        : {
    //      shiv      : false,
    //      printshiv : false,
    //      load      : true,
    //      mq        : true,
    //      cssclasses: true
    //    },
    //    extensibility: {
    //      addtest     : false,
    //      prefixed    : false,
    //      teststyles  : false,
    //      testprops   : false,
    //      testallprops: false,
    //      hasevents   : false,
    //      prefixes    : false,
    //      domprefixes : false
    //    }
    //  }
    //},

    sprite: {
      all: {
        src: 'images/sprites/*.png',
        destImg: 'images/sprites.png',
        destCSS: 'less/sprites.less',
        padding: 14,
        cssFormat: 'less',
        cssOpts: {
          cssClass: function (item) {
            return '.' + item.name + timestamp;
          }
        }
      }
    },
    // running `grunt watch` will watch for changes
    watch: {
      options: {
        livereload: LIVERELOAD_PORT
      },
      // Watch less files and run "less" on changes
      less: {
        files: "./less/**/*.less",
        tasks: ["less"]
      },
      // Watch template files, only used to reload page on template changes
      template: {
        files: "./**/*.tpl"
      }
    }
  });
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-contrib-connect');
  grunt.loadNpmTasks('grunt-spritesmith');
  grunt.loadNpmTasks('grunt-modernizr');

  grunt.registerTask('default', ['watch']);
  grunt.registerTask('build', ['less', 'sprite']);
  grunt.registerTask('server', [
      'connect',
      'watch'
    ]);
  };
