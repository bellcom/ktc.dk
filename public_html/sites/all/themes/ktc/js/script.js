/* KTC theme script
*/
( function ($) {
  $(document).ready(function(){

      // Load masonry
      $container = $('.masonry-wrapper .view-content');
      // Don't use masonry if items contain comments (it screws up comments)
      if ($container.find('.ktc-comments-list').length === 0 && !$('body').hasClass('node-type-group')) {
          $container.masonry({
              itemSelector: '.masonry-item'
          });
      }

      // Search facetapi.
      $('ul.facetapi-facetapi-links li').each(function(){
          var li_text = $(this).clone() //clone the element
              .children() //select all the children
              .remove()   //remove all the children
              .end()  //again go back to selected element
              .text();
          if (li_text != '') {
              $(this).find('a').append(li_text);
              $(this).contents().filter(function () {
                  return this.nodeType === 3 && $.trim(this.nodeValue).length;
              }).replaceWith('');
          }
      });

      // Search page
      var $searchPage = $('body.page-search'),
          $searchFilters = $searchPage.find('.view-filters'),
          $searchFacetContainer = $searchPage.find('.block-facetapi'),
          $searchResultBody = $searchPage.find('.view-Search > .view-content');

      // Facet
      $searchFacetContainer.addClass('ktc-aside').addClass('ktc-aside-checkbox-filter');
      $searchFacetContainer.find('.block-heading').addClass('ktc-aside-heading');
      $searchFacetContainer.find('.block-heading > h3').addClass('ktc-aside-title');
      $searchFacetContainer.find('.facetapi-facetapi-links').addClass('list-unstyled');

      $searchFacetContainer = $searchPage.find('.block-facetapi');

      // Filters
      $searchFilters.addClass('ktc-content');

      // Search result
      $searchResultBody.addClass('masonry-wrapper').addClass('row');

      // Facet
      $searchFacetContainer.addClass('ktc-aside').addClass('ktc-aside-checkbox-filter');
      $searchFacetContainer.find('.block-heading').addClass('ktc-aside-heading').removeClass('panel-heading');
      $searchFacetContainer.find('.block-heading > h3').addClass('ktc-aside-title');
      $searchFacetContainer.find('.facetapi-facetapi-links').addClass('list-unstyled').addClass('view-content');
      $searchFacetContainer.find('.facetapi-facetapi-links').parent().addClass('ktc-aside-body');
      $searchFacetContainer.find('.facetapi-facetapi-links > li').addClass('ktc-filter-button-container');
      $searchFacetContainer.find('.facetapi-facetapi-links > li > a').addClass('btn').addClass('btn-default');

      // Add button class to "gennemse" knap in media modules
      $('div.media-widget .button').addClass('btn').addClass('btn-default');

      // Enable tooltips
      $("[data-toggle=tooltip]").tooltip({container: 'body'});

      // Aside toggle
      $('.ktc-aside-toggle .ktc-aside-title').on('click', function(event) {
          var $toggle = $(this).parents('.ktc-aside-toggle');
          $toggle.toggleClass('closed');
      });
      if (Modernizr.touch) {
          $('.ktc-aside-toggle').each(function() {
              var $element = $(this);
              if ( ! $element.hasClass('closed')) {
                  $element.addClass('closed');
             }
          });
      }

      // Header - add content
      $('.ktc-header-top-bar-add-content').click(function(element) {

          // Toggle menu
          $(this).toggleClass('open');
      });

      // Header - toggle user menu
      $('.ktc-header-top-bar-user-menu-icon-toggle').click(function(element) {

          // Toggle menu
          $('.ktc-header-dropdown').toggleClass('open');
      });

    // Header user-menu
    $('.header-user .icon-arrow-down').click(function() {
      if ($('.header-user .header-user-menu').css('display') == 'none') {
        $('.header-user .header-user-menu').css('display', 'block');
        $(this).addClass('icon-arrow-up');
      }
      else {
        $('.header-user .header-user-menu').css('display', 'none');
        $(this).removeClass('icon-arrow-up');
      }
    });

    // Header user-blocks
    $('.header-user .header-user-blocks').click(function() {
      if ($('.region-header').css('display') == 'none') {
        $('.region-header').css('display', 'block');
        $(this).text('SKJUL DINE GENVEJE');
        $('.main-container').removeClass('margin-fixed');
      }
      else {
        $('.region-header').css('display', 'none');
        $(this).text('ÅBN DINE GENVEJE');
        $('.main-container').addClass('margin-fixed');

      }
    });

    // Show all members link.
    $('.og-members-all a').click(function() {
      $('#section-page-with-filter .pane-content .view').hide();
      $('.ktc-group-members').removeClass('hide');
      return false;
    });
    $('.og-members-show-modal a').click(function() {
      $('#member-modal').modal();
      return false;
    });

    // borger.dk articles
    $('div.mArticle').hide();
    $('.microArticle a.gplus').click(function() {
      var article = $(this).parent().find('h2');
      var myid = article.attr('id');
      var style = $('div.' + myid).css('display');
      var path = $(this).css('background-image');
      if (style == 'none') {
        $('div.' + myid).show('500');
        $(this).addClass('gminus');
        $(this).removeClass('gplus');
      }
      else {
        $('div.' + myid).hide('500');
        $(this).addClass('gplus');
        $(this).removeClass('gminus');
      }
      return false;
    });

    $('.gplus_all').click(function() {
      if ($('.microArticle a').hasClass('gminus')) {
        $('div.mArticle').hide();
        $('.microArticle a.gminus').addClass('gplus');
        $('.microArticle a.gminus').removeClass('gminus');
      }
      else {
        $('div.mArticle').show();
        $('.microArticle a.gplus').addClass('gminus');
        $('.microArticle a.gplus').removeClass('gplus');
      }

      return false;
    });
    $('.gminus_all').click(function() {
      if ($('.microArticle a').hasClass('gminus')) {
        $('div.mArticle').hide();
        $('.microArticle a.gminus').addClass('gplus');
        $('.microArticle a.gminus').removeClass('gminus');
      }
      else {
        $('div.mArticle').show();
        $('.microArticle a.gplus').addClass('gminus');
        $('.microArticle a.gplus').removeClass('gplus');
      }

      return false;
    });

    // Open search bar if there is text in input.
    if ($('.header_top .views-widget-filter-search_api_views_fulltext input').val()) {
      $(this).addClass('search_open');
      $( '.header_top .views-widget-filter-search_api_views_fulltext' ).css('display', 'inline-block');
    }

    // nav header search_form button
    $('.header_top button#edit-submit-search').click(function(){

      if (!$(this).hasClass('search_open')) {
        $(this).addClass('search_open');
        $( '.header_top .views-widget-filter-search_api_views_fulltext' ).css('display', 'inline-block');
        $( '.header_top .views-widget-filter-search_api_views_fulltext' ).focus();
        return false;

      }
      else {
        if (!$('.header_top .views-widget-filter-search_api_views_fulltext input').val()) {
          $(this).removeClass('search_open');
          $( '.header_top .views-widget-filter-search_api_views_fulltext' ).css('display', 'none');
          return false;
        }
      }
    });

    // nav header login
    $('.header_top #block-user-login button#edit-submit').click(function(){
      if (!$(this).hasClass('login_open')) {
        $(this).addClass('login_open');
        $( '.header_top #block-user-login .form-type-textfield' ).css('display', 'inline-block');
        $( '.header_top #block-user-login .form-type-password' ).css('display', 'inline-block');
        $( '.header_top .views-widget-filter-search_api_views_fulltext' ).focus();
        return false;
      }
      else {
        if (!$('.header_top #block-user-login .form-type-textfield input').val()) {
          $(this).removeClass('login_open');
          $( '.header_top #block-user-login .form-type-textfield' ).css('display', 'none');
          $( '.header_top #block-user-login .form-type-password' ).css('display', 'none');
          return false;
        }
      }
    });

    // Frontpage.
    var $container = $('#panel-pane-content');
    $container.imagesLoaded(function(){
      $container.append('<div class="panel-pane col-md-1"></div>');
      $container.masonry({
        itemSelector: '.panel-pane',
        columnWidth: '.col-md-1'
      });
    });

    // Search page.
    var $search_container = $('.view-Search.view-id-Search .view-content')

    $search_container.imagesLoaded(function(){
      $search_container.masonry({
        itemSelector: '.select-element',
        columnWidth: '.select-element'
      });
    });

    $('#feedback-submit').addClass('btn-primary');

    var links = $('.region-content a');
    $(links).each(function() {
      if (!$(this).attr('href') && $(this).attr('id') && $(this).attr('id') !== 'main-content') {
        $(this).addClass('link_here');
      }
    });

    // Toggle description length
    $('.toggle-pane-content').each(function(){
      if ($(this).find('.pane-content').height() > 115) {
        $(this).find('.pane-content').append('<a href="#" class="js-toggle-description-length short btn btn-default">Vis mere</a>');
        $(this).find('.pane-content').append('<a href="#" class="js-toggle-description-length hide long btn btn-default">Skjul</a>');

        $('.js-toggle-description-length').click(function(){
          $(this).parent().find('.js-toggle-description-length').toggleClass('hide');
          $(this).closest('.pane-content').toggleClass('short-description');
          return false;
        });

        $(this).find('.pane-content').addClass('short-description');
      }
    });

    // Remove css attributes from fieldgroups. Bootstrap themes handling of
    // fieldgroups conflicts with the functionality from the fieldgroup module,
    // Resulting in forms with a lot of unnessecary whitespace when there are
    // errors.
    $('fieldset.tab-pane').removeAttr('style');

  });

Drupal.behaviors.feedbackForm = {
  attach: function (context) {
    $('#block-feedback-form').addClass('hidden-xs');
    $('#block-feedback-form', context).once('feedback', function () {
      var $block = $(this);
      $block.find('span.feedback-link')
        .prepend('<span id="feedback-form-toggle">[ + ]</span> ')
        .css('cursor', 'pointer')
        .toggle(function () {
            Drupal.feedbackFormToggle($block, true);
          },
          function() {
            Drupal.feedbackFormToggle($block, false);
          }
        );
      $block.find('form').hide();
      $block.show();
    });
  }
};

/**
 * Re-collapse the feedback form after every successful form submission.
 */
Drupal.behaviors.feedbackFormSubmit = {
  attach: function (context) {
    var $context = $(context);
    if (!$context.is('#feedback-status-message')) {
      return;
    }
    // Collapse the form.
    $('#block-feedback-form .feedback-link').click();
    // Blend out and remove status message.
    window.setTimeout(function () {
      $context.fadeOut('slow', function () {
        $context.remove();
      });
    }, 3000);
  }
};

/**
 * Collapse or uncollapse the feedback form block.
 */
Drupal.feedbackFormToggle = function ($block, enable) {
  if (enable) {
    $block.animate({width:'329px'});
    $block.css('z-index','960');
    $block.find('form').css('display','block');
    $('#feedback-form-toggle', $block).html('[ + ]');
    var cittaslow = $('#block-cittaslow-block');
    if (cittaslow.width() > 51) {
      Drupal.cittaslowToggle(cittaslow, false);
    }
  }
  else {
    $block.animate({width:'29px'});
    $block.css('z-index','900');
    $('#feedback-form-toggle', $block).html('[ &minus; ]');
  }
};

Drupal.behaviors.cittaslow= {
  attach: function (context) {
    $('#block-cittaslow-block', context).once(function () {
      var $block = $(this);
      $block.find('span.cittaslow-link').toggle(function () {
          if ($block.width() < 300) {
            Drupal.cittaslowToggle($block, true);
          }
          else {
            Drupal.cittaslowToggle($block, false);
          }

          },
          function() {
            if ($block.width() < 300) {
              Drupal.cittaslowToggle($block, true);
            }
            else {
              Drupal.cittaslowToggle($block, false);
            }
          }
        );
      $block.show();
    });
  }
};

  Drupal.cittaslowToggle = function ($block, enable) {

  if (enable) {
    $block.animate({width:'351px'});

  }
  else {
    $block.animate({width:'51px'});
  }
};

})( jQuery );


/**
 * Re-collapse the feedback form after every successful form submission.
 */
Drupal.behaviors.feedbackFormSubmit = {
  attach: function (context) {}
};
