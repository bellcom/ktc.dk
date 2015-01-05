/* KTC filter script
*/
( function ($) {
  $(document).ready(function(){

    var button = 'filter-all';
    var button_class = "btn-primary";
    var button_normal = "btn-blacknblue";
    var $container = $("#section-page-with-filter").find(".view-content:first");

    $('.filter-box #filter-all').addClass(button_class);
    $('.filter-box #filter-all').removeClass(button_normal);

    $('.filter-link').click(function(event){
      $container = $("#section-page-with-filter").find(".view-content:first");
      $container.infinitescroll('unbind');
      if (!$(this).hasClass(button_class)) {
        $(this).addClass(button_class);
        $(this).removeClass(button_normal);
        if ($(this).attr('id') == 'filter-all') {
          $(this).closest('.filter-box').find('.filter-link').not(this).removeClass(button_class);
          $(this).closest('.filter-box').find('.filter-link').not(this).addClass(button_normal);
          if ($(this).closest('.pane-views-panes').attr('id') == 'groups') {
            $('.filter-box').find('.filter-link').not(this).removeClass(button_class);
            $('.filter-box').find('.filter-link').not(this).addClass(button_normal);
            $('.filter-box #filter-all').addClass(button_class);
            $('.filter-box #filter-all').removeClass(button_normal);
          }
        }
        else if ($(this).attr('id') == 'filter-my') {
          $(this).closest('.filter-box').find('.filter-link').not(this).removeClass(button_class);
          $(this).closest('.filter-box').find('.filter-link').not(this).addClass(button_normal);
        }
        else if ($(this).attr('id') == 'filter-status') {
          $(this).closest('#filter-box-hearing-extra').find('.filter-status').not(this).addClass(button_normal);
          $(this).closest('#filter-box-hearing-extra').find('.filter-status').not(this).removeClass(button_class);
        }
        else {
          $(this).closest('.filter-box').find('#filter-all').removeClass(button_class);
          $(this).closest('.filter-box').find('#filter-all').addClass(button_normal);
          $(this).closest('.filter-box').find('#filter-my').removeClass(button_class);
          $(this).closest('.filter-box').find('#filter-my').addClass(button_normal);
        }
      }
      else  {
        if ($(this).attr('id') != 'filter-all' && $(this).attr('id') != 'filter-my') {
          $(this).removeClass(button_class);
          $(this).addClass(button_normal);
        }
        if ($(this).attr('id') == 'filter-all' && $(this).closest('.pane-views-panes').attr('id') == 'groups') {
            $('.filter-box').find('.filter-link').not("[id*='filter-all']").removeClass(button_class);
            $('.filter-box').find('.filter-link').not("[id*='filter-all']").addClass(button_normal);
            $('.filter-box #filter-all').addClass(button_class);
            $('.filter-box #filter-all').removeClass(button_normal);
        }

      }
      var filter_value = check_filter_value();

      var path = window.location.href.split('/');
      var type = path[path.length-1];

      var gid = $('#content_id').find('.pane-content').text();
      if (gid == '') {
        gid = check_gid_filter_value();
      }
      else {
        gid += ',' + check_gid_filter_value();
      }

      var link = '/ajax/' + type +'/view/'+filter_value[0]+'/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4]+'/'+gid;
      if (type == 'netvaerk' && (filter_value[1] != 'all,' || filter_value[2] != 'all,' || filter_value[3] != 'all,' || filter_value[4] != 'all,')) {
        var link_2 = '/my_groups/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4];
        var link_3 = '/all_groups/'+filter_value[1]+'/'+filter_value[2]+'/'+filter_value[3]+'/'+filter_value[4];
        jQuery.get(link_2, function(data){
          $('#section-page-with-filter-my-groups').html(data);
            add_pager_ajax();
          });

        jQuery.get(link_3, function(data){
          $('#section-page-with-filter-all-groups').html(data);
          add_pager_ajax();
        });
      }
      var substr = type.match(/aktiviteter/g);
      if (type == 'aktiviteter' || substr == 'aktiviteter') {
        var period = $('#period').find('.btn-primary').attr('data-filter');


        link = '/ajax/aktiviteter/view/all/'+filter_value[1]+'/'+period+'/all/'+filter_value[4]+'/'+gid;
      }

      if (type == 'hoeringer') {
        var hearing_filter_value = check_hearing_extra_filter_value();
        link = '/ajax/hoeringer/view/hearing/'+filter_value[1]+'/'+filter_value[2]+'/'+hearing_filter_value[0]+'/'+hearing_filter_value[1]+'/'+hearing_filter_value[2];
      }

      console.log(link);
      jQuery.get(link, function(data){

        $('#section-page-with-filter').html(data);
        load_content();
        add_pager_ajax();
      });
    });

    $container = $("#section-page-with-filter").find(".view-content:first");

    // Initial masonry
    if ($container.length) {
      load_content();
    }

    $('.filter-foldin').click(function() {
      if ($(this).closest('.pane-content').css('display') == 'block') {
        $(this).closest('.pane-content').css('display','none');
        $(this).closest('.pane-views-panes').find('.filter-foldout').css('display', 'block');
      }
    });
    $('.filter-foldout').click(function() {
      $(this).closest('.pane-views-panes').find('.pane-content').css('display','block');
      $(this).css('display', 'none');
    });
    $('.view-id-arrangement.view-display-id-panel_pane_1 .calendar-calendar table.mini td.mini a').click(function(event) {
      var date = $(this).attr('href').split('/');
      date = date[date.length-1];
      var time = new Date(date + ' 00:00:00');
      $('.filter-box').find('.filter-link').not("[id*='filter-all']").removeClass(button_class);
      $('.filter-box').find('.filter-link').not("[id*='filter-all']").addClass(button_normal);
      $('.filter-box').find('#filter-all').removeClass(button_normal);
      $('.filter-box').find('#filter-all').addClass(button_class);
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

  });

  // Add imagesloaded after views ajax completed.
  $(document).ajaxComplete(function(){
    load_content();
  });

  function load_content() {
    $container = $("#section-page-with-filter").find(".view-content:first");

    $container.imagesLoaded(function(){
      $container.masonry({
        columnWidth: '.switch-elements',
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
        $('#section-page-with-filter-all-groups').html(data);
        add_pager_ajax();
      });
      return false;
    });

    $('#section-page-with-filter-all-groups .pager-previous a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-all-groups').html(data);
        add_pager_ajax();
      });
      return false;
    });
    $('#section-page-with-filter-my-groups .pager-next a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-my-groups').html(data);
        add_pager_ajax();
      });
      return false;
    });
    $('#section-page-with-filter-my-groups .pager-previous a').click(function(event) {
      jQuery.get($(this).attr('href'), function(data){
        $('#section-page-with-filter-my-groups').html(data);
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
    var content_type = '', term_type = '', emner = '', tags = '', regioner = '';

    $('.filter-box').each(function(){

      $(this).find('.btn-primary').each(function() {

        var filter_id = $(this).closest('.pane-views-panes').attr('id');
        if (filter_id == 'content_type') {
          content_type += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'term_type') {
          term_type += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'emner') {
          emner += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'tags') {
          tags += $(this).attr('data-filter') + ',';
        }

        if (filter_id == 'regioner') {
          regioner += $(this).attr('data-filter') + ',';
        }
      });
    });

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
    console.log(filter_value);
    return filter_value;
  }

  function check_gid_filter_value() {
    var filter_value = '', gid = '';
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

})( jQuery );
