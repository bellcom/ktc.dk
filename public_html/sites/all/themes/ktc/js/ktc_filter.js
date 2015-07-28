/* KTC filter script
*/
(function ($) {
    $(window).load(function(){

    var button = 'filter-all';
    var button_active = "btn-primary active";
    var button_normal = "btn-default";
    var $container = $('#section-page-with-filter').find('.view-content:first');

    var path = window.location.href.split('/');
    var type = path[path.length-1];
    if (type == 'teknikmiljoe'){
        $('.filter-box #magazine').addClass(button_active);
        $('.filter-box #magazine').removeClass(button_normal);
        $('#term_type').hide();
    }
    else{
        $('.filter-box #filter-all').addClass(button_active);
        $('.filter-box #filter-all').removeClass(button_normal);
    }
    $('body').on('click', '.filter-link', function(event){
      $container = $('#section-page-with-filter').find('.view-content:first');

      // Change the buttons class.
      if (!$(this).hasClass(button_active)) {
        $(this).addClass(button_active);
        $(this).removeClass(button_normal);
        if ($(this).attr('id') == 'filter-all') {
          $(this).closest('.filter-box').find('.filter-link').not(this).removeClass(button_active);
          $(this).closest('.filter-box').find('.filter-link').not(this).addClass(button_normal);
          if ($(this).closest('.pane-views-panes').attr('id') == 'groups') {
            $('.filter-box').find('.filter-link').not(this).removeClass(button_active);
            $('.filter-box').find('.filter-link').not(this).addClass(button_normal);
            $('.filter-box #filter-all').addClass(button_active);
            $('.filter-box #filter-all').removeClass(button_normal);
          }
        }
        else if ($(this).attr('id') == 'filter-my') {
          $(this).closest('.filter-box').find('.filter-link').not(this).removeClass(button_active);
          $(this).closest('.filter-box').find('.filter-link').not(this).addClass(button_normal);
        }
        else if ($(this).attr('id') == 'filter-status') {
          $(this).closest('#filter-box-hearing-extra').find('.filter-status').not(this).addClass(button_normal);
          $(this).closest('#filter-box-hearing-extra').find('.filter-status').not(this).removeClass(button_active);
        }
        else {
          $(this).closest('.filter-box').find('#filter-all').removeClass(button_active);
          $(this).closest('.filter-box').find('#filter-all').addClass(button_normal);
          $(this).closest('.filter-box').find('#filter-my').removeClass(button_active);
          $(this).closest('.filter-box').find('#filter-my').addClass(button_normal);

        }
      }
      else  {
        if ($(this).attr('id') != 'filter-all' && $(this).attr('id') != 'filter-my') {
          $(this).removeClass(button_active);
          $(this).addClass(button_normal);
        }
        if ($(this).attr('id') == 'filter-all' && $(this).closest('.pane-views-panes').attr('id') == 'groups') {
            $('.filter-box').find('.filter-link').not("[id*='filter-all']").removeClass(button_active);
            $('.filter-box').find('.filter-link').not("[id*='filter-all']").addClass(button_normal);
            $('.filter-box #filter-all').addClass(button_active);
            $('.filter-box #filter-all').removeClass(button_normal);
        }

      }

      if ($(this).closest('.panel-pane').attr('id').indexOf("emner") >= 0) {
       var parent_term_ids = '';
            if ($(this).attr('id') != 'filter-all') {
               $(this).closest('.pane-views-panes').find('.btn-primary').each(function() {
                   parent_term_ids += $(this).attr("data-filter") + ',';
               });
               if (parent_term_ids == "")
                   $(this).closest('.pane-views-panes').next().remove();
               else {
                   jQuery.get('ajax/pane/subterms/view/4/' + parent_term_ids, function(data) {
                       dataObj=$.parseHTML(data);

                         if ($('.pane-sidebar #' + $(dataObj).attr('id')).length > 0)
                           $('.pane-sidebar #' + $(dataObj).attr('id')).replaceWith(data)
                         else
                           $('.pane-sidebar').append(data);
                        });
                    }
                }
                else {
                    $(this).closest('.pane-views-panes').nextAll().remove();
                }
            }
        // Get all the filter values.
      var filter_value = check_filter_value();



        var activeFilterBox = $(this).closest('.panel-pane');

        //selecting all passive filters
        $('.filter-box').closest('.panel-pane').each(function(index, passiveFilterBox){
            if ($(passiveFilterBox).attr('id') != $(activeFilterBox).attr('id')) {
                //console.log("Passive filter: " + $(passiveFilterBox).attr('id'));
                if ($(passiveFilterBox).attr('id') == 'emner') {
                    //hiding or showing emner fields
                    jQuery.get("/netvaerk/emner/" + filter_value[0] + "/" + filter_value[1] + "/" +  filter_value[4], function(data){
                        console.log(data);

                        $(passiveFilterBox).find('.filter-link').each(function(index, passivefilterLink){
                            if ($.inArray($(passivefilterLink).data('filter'), data) == -1) {
                                $(passivefilterLink).removeClass('btn-default');
                            } else {
                                $(passivefilterLink).addClass('btn-default');
                            }
                        });

                    });
                }
            }
        });

      var path = window.location.href.split('/');
      var type = path[path.length-1];

      // Get the group id.
      var gid = $('#content_id').find('.pane-content p').text();
      if (gid == '') {
        gid = check_gid_filter_value();
      }
      else {
        gid += ',' + check_gid_filter_value();
      }
       if (type == 'teknikmiljoe') {
           if (filter_value[0].indexOf("artikler")>=0 || filter_value[0].indexOf("all")>=0)
               $('#term_type').show();
           else
               $('#term_type').hide();
           if (filter_value[0].indexOf("magazine")>=0 || filter_value[0].indexOf("all")>=0)
               $('#magazine-date-filter').show();
           else
               $('#magazine-date-filter').hide();
       }
      var link = '/ajax/' + type +'/view/'+filter_value[0]+'/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4]+'/'+gid;

      // Netvaerk section page my groups and all groups filter.
      if (type == 'netvaerk' && (filter_value[1] != 'all,' || filter_value[2] != 'all,' || filter_value[3] != 'all,' || filter_value[4] != 'all,')) {
        var link_2 = '/all_groups/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4]+'/all,';
        var block = $('#section-page-with-filter-all-groups');

        if (gid == 'my,') {
          link_2 = '/all_groups/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4]+'/my,';
        }
        else if (gid == 'newest,') {
          link_2 = '/all_groups/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4]+'/newest';
        }

        jQuery.get(link_2, function(data){
          block.find('.pane-content').html(data);
          add_pager_ajax();
        });

      }

      // Arrangement/kalender section page: filter events on period (furture/old).
      var substr = type.match(/kalender/g);
      if (type == 'kalender' || substr == 'kalender') {
        var period = $('#period').find('.btn-primary').attr('data-filter');

        link = '/ajax/aktiviteter/view/all/'+filter_value[1]+'/'+period+'/all/'+filter_value[4]+'/'+gid;
      }

      if (type == 'hoeringer') {
        var hearing_filter_value = check_hearing_extra_filter_value();
        link = '/ajax/hoeringer/view/hearing/'+filter_value[1]+'/'+filter_value[2]+'/'+hearing_filter_value[0]+'/'+hearing_filter_value[1]+'/'+hearing_filter_value[2];
      }

      if (type == 'teknikmiljoe') {
          var magazine_date_filter_value = check_magazine_date_filter_value();
          link = '/ajax/' + type +'/view/'+filter_value[0]+'/'+filter_value[1]+'/'+magazine_date_filter_value[0]+'/'+magazine_date_filter_value[1]+'/'+filter_value[4]+'/'+gid;
      }
      jQuery.get(link, function(data){
        $('#section-page-with-filter .pane-content').html(data);
        load_content();
        add_pager_ajax();
      });
    });

    $container = $('#section-page-with-filter').find('.view-content:first');

    // Initial masonry
    if ($container.length) {
      load_content();
    }
    $('.filter-fold').click(function() {
      if ($(this).hasClass('filter-foldin')) {
        $(this).closest('.pane-views-panes').find('.pane-content').css('display', 'none');
        $(this).removeClass('filter-foldin');
        $(this).addClass('filter-foldout');
      }
      else {
        $(this).closest('.pane-views-panes').find('.pane-content').css('display','block');
        $(this).removeClass('filter-foldout');
        $(this).addClass('filter-foldin');
      }
    });

    $('.view-id-arrangement.view-display-id-panel_pane_1 .calendar-calendar table.mini td.mini a').click(function(event) {
      var date = $(this).attr('href').split('/');
      date = date[date.length-1];
      var time = new Date(date + ' 00:00:00');
      $('.filter-box').find('.filter-link').not("[id*='filter-all']").removeClass(button_active);
      $('.filter-box').find('.filter-link').not("[id*='filter-all']").addClass(button_normal);
      $('.filter-box').find('#filter-all').removeClass(button_normal);
      $('.filter-box').find('#filter-all').addClass(button_active);
      filter_value = check_filter_value();
      if (time.getTime() > $.now()) {
        link = '/ajax/aktiviteter/view/all/'+filter_value[1]+'/fulture/'+date+'/'+filter_value[4]+'/all';
      }
      else {
        link = '/ajax/aktiviteter/view/all/'+filter_value[1]+'/old/'+date+'/'+filter_value[4]+'/all';
      }

      jQuery.get(link, function(data){

        $('#section-page-with-filter').html(data);
        load_content();
        add_pager_ajax();
      });
      return false;

    });

    $('.filter-pane-title').css('cursor', 'pointer');

    $('.filter-pane-title').click(function() {
      var foldout = $(this).parent('.panel-pane').find('.pane-content').css('display');
      var icon = $(this).closest('.panel-pane').find('.filter-fold');
      if (foldout == 'block') {
        $(this).closest('.pane-views-panes').find('.pane-content').css('display', 'none');
        icon.removeClass('filter-foldin');
        icon.addClass('filter-foldout');
      }
      else {
        $(this).closest('.pane-views-panes').find('.pane-content').css('display','block');
        icon.removeClass('filter-foldout');
        icon.addClass('filter-foldin');
      }
    });
    filter_on_mobile();
    $( window ).resize(function() {
      filter_on_mobile();
    });


  });

  // Add imagesloaded after views ajax completed.
  $(document).ajaxComplete(function(){
    load_content();
  });

  function filter_on_mobile() {
    if ($(window).width() < 768) {
      $('.filter-fold').each(function() {
        $(this).parent('.panel-pane').find('.pane-content').css('display', 'none');
        $(this).removeClass('filter-foldin');
        $(this).addClass('filter-foldout');
      });
    }
    else {
      $('.filter-fold').each(function() {
        $(this).closest('.panel-pane').find('.pane-content').css('display', 'block');
        $(this).removeClass('filter-foldout');
        $(this).addClass('filter-foldin');
      })
    }
  }
  function load_content() {

    $container = $('.masonry-wrapper');

    $container.imagesLoaded(function(){

        $container.masonry({
            columnWidth: '.masonry-sizer',
            itemSelector: '.masonry-item'
        });

      /*
      $container.infinitescroll({
        state : {
          currPage: 0
        },
        // selector for the paged navigation
        navSelector  : '.pagination',
        // selector for the NEXT link (to page 2)
        nextSelector : '.pagination li.next a',
        // selector for all items you'll retrieve
        itemSelector : '.switch-elements',
        loading: {
          //finishedMsg: 'Der er ikke flere.',
          //img: 'http://i.imgur.com/qkKy8.gif'
        },
        debug: false,
      },
      function(newElements) {
        var $newElems = $(newElements).hide();
        $newElems.imagesLoaded(function(){
          $newElems.fadeIn(); // fade in when ready
          $container.masonry( 'appended', $newElems);
          Drupal.attachBehaviors();
        });
          /*setTimeout(function() {
            $container.masonry( 'insert', $newElems);
          }, 500);
      }
      );*/
    });
  }

  function add_pager_ajax() {
    $('#section-page-with-filter-all-groups .pager-next a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-all-groups .pane-content').html(data);
        add_pager_ajax();
      });
      return false;
    });

    $('#section-page-with-filter-all-groups .pager-previous a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-all-groups .pane-content').html(data);
        add_pager_ajax();
      });
      return false;
    });
    $('#section-page-with-filter-my-groups .pager-next a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-my-groups .pane-content').html(data);
        add_pager_ajax();
      });
      return false;
    });
    $('#section-page-with-filter-my-groups .pager-previous a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-my-groups .pane-content').html(data);
        add_pager_ajax();
      });
      return false;
    });
    $('#section-page-with-filter .pager-next a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter').html(data);
        add_pager_ajax();
        load_content();
      });
      return false;
    });
    $('#section-page-with-filter .pager-previous a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter').html(data);
        add_pager_ajax();
        load_content();
      });
      return false;
    });
    $('#section-page-with-filter .pagination a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter').html(data);
        add_pager_ajax();
        load_content();
      });
      return false;
    });
  }

  // Get all kinds of filters here, and return an array.
  // content_type, term_type (like document, news type, arrangement type..), emner, tags, regioner
  function check_filter_value() {
    var filter_value = [];
    var content_type = '', term_type = '', emner_arr = [], emner = '', tags = '', regioner = '';

    $('.filter-box').each(function(){

      $(this).find('.btn-primary').each(function() {

        var filter_id = $(this).closest('.panel-pane').attr('id');
        if (filter_id == 'content_type') {
          content_type += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'term_type') {
          term_type += $(this).attr('data-filter') + ',';
        }

        if (filter_id.indexOf('emner') >=0) {
           var  level = 0;
           if (filter_id.indexOf('-')>=0 && $(this).attr('data-filter')!='all')
                 level = filter_id.substr(filter_id.indexOf('-')+1);
           if (!emner_arr[level])
                emner_arr[level] = Array();
           if ($(this).attr('data-filter')!='all')
            emner_arr[level].push($(this).attr('data-filter'));

         // emner += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'tags') {
          tags += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'regioner') {
          regioner += $(this).attr('data-filter') + ',';
        }
      });
    });
    if (emner_arr.length)
        emner = emner_arr[emner_arr.length - 1].join(',');

    if (regioner == '') {
      regioner = 'all';
    }
    if (tags == '') {
      tags = 'all';
    }
    filter_value.push(content_type);
    filter_value.push(term_type);
    filter_value.push(emner);
    filter_value.push(tags);
    filter_value.push(regioner);
    return filter_value;
  }

  function check_gid_filter_value() {
    var gid = '';
    $('#groups .btn-primary').each(function() {
      gid += $(this).attr('data-filter') + ',';
    });
    if (gid == '') {
      gid = 'all';
    }
    return gid;
  }

  function check_hearing_extra_filter_value() {
    var hearing_filter_value = [];
    var user = '', hearing_status = '', year = '';

    $('.filter-box #filter-box-hearing-extra').each(function(){

      $(this).find('.btn-primary').each(function() {
        var filter_id = $(this).attr('id');
        if (filter_id == 'filter-status') {
          hearing_status = $(this).attr('data-filter');
        }

        if (filter_id == 'filter-year') {
          year += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'filter-all') {
          user = $(this).attr('data-filter');
        }

        if (filter_id == 'filter-mine') {
          user = $(this).attr('data-filter');
        }

      });
    });

    if (user == '') {
      user = 'all';
    }
    if (hearing_status == '') {
      hearing_status = 'all';
    }
    if (year == '') {
      year = 'all';
    }
    hearing_filter_value.push(user);
    hearing_filter_value.push(hearing_status);
    hearing_filter_value.push(year);
    return hearing_filter_value;
  }

  function check_magazine_date_filter_value() {
    var magazine_date_filter_value = [];
    var month = '', year = '';

    $('.filter-box #filter-box-magazine-date').each(function(){

      $(this).find('.btn-primary').each(function() {
        var filter_id = $(this).attr('id');


        if (filter_id == 'filter-year') {
          year += $(this).attr('data-filter') + ',';
        }

         if (filter_id == 'filter-month') {
          month += $(this).attr('data-filter') + ',';
        }



      });
    });

    if (month == '') {
      month = 'all';
    }

    if (year == '') {
      year = 'all';
    }
   ;
    magazine_date_filter_value.push(year);
    magazine_date_filter_value.push(month);
    return   magazine_date_filter_value;
  }
})( jQuery );
