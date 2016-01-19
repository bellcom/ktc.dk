(function ($) {

    var button = 'filter-all';
    var button_active = "btn-primary active";
    var button_normal = "btn-default";
    var cookie_data = {'type' : {}};

    $(window).load(function () {

        var $container = $('#section-page-with-filter').find('.view-content:first');

        var filter_value;
        var path = window.location.href.split('/');
        var type = path[path.length - 1];
        if (type == 'teknikmiljoe') {
            $('.filter-box #magazine').addClass(button_active);
            $('.filter-box #magazine').removeClass(button_normal);
            $('#term_type').hide();
        }
        else {
            $('.filter-box #filter-all').addClass(button_active);
            $('.filter-box #filter-all').removeClass(button_normal);
        }

        // Check if filter-value is stored in a cookie, so we can restore the search filters to previous state
        var filter_value_cookie;
        if (filter_value_cookie = JSON.parse($.cookie('filter_value'))) {

            // Check if cookie data is from this page.
            var page = window.location.pathname.split( '/' )[1];
            if (filter_value_cookie.page == page) {
                // Cookie exist. Restore search filters
                set_filter_value(filter_value_cookie);

                // Submit search filters
                display_content(check_filter_value());
            }
        }

        $('body').on('click', '.filter-link', function (event) {

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
            else {
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
            if (typeof $(this).closest('.panel-pane').attr('id') != "undefined" && $(this).closest('.panel-pane').attr('id').indexOf("emner") >= 0) {
                var parent_term_ids = '';
                if ($(this).attr('id') != 'filter-all') {
                    $(this).closest('.pane-views-panes').find('.btn-primary').each(function () {
                        parent_term_ids += $(this).attr("data-filter") + ',';
                    });
                    if (parent_term_ids == "")
                        $(this).closest('.pane-views-panes').next().remove();
                    else {
                        jQuery.get('ajax/pane/subterms/view/4/' + parent_term_ids, function (data) {
                            dataObj = $.parseHTML(data);

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
            filter_value = check_filter_value();

            var activeFilterBox = $(this).closest('.panel-pane');

            //selecting all passive filters
            $('.filter-box').closest('.panel-pane').each(function (index, passiveFilterBox) {
                if ($(passiveFilterBox).attr('id') != $(activeFilterBox).attr('id')) {
                    //console.log("Passive filter: " + $(passiveFilterBox).attr('id'));
                    if ($(passiveFilterBox).attr('id') == 'emner') {
                        //hiding or showing emner fields
                        jQuery.get("/netvaerk/emner/" + filter_value[0] + "/" + filter_value[1] + "/" + filter_value[4], function (data) {
                            $(passiveFilterBox).find('.filter-link').each(function (index, passivefilterLink) {
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


            // Store current filter values in cookie for later retrieval
            cookie_data.page = window.location.pathname.split( '/' )[1];
            cookie_data.type.regular = filter_value;
            cookie_data.type.calendar_date = get_calendar_date_filter_value();
            cookie_data.type.magazine_date = check_magazine_date_filter_value();
            cookie_data.type.calendar_period = $('#period').find('.btn-primary').attr('data-filter');
            cookie_data.type.hearing = check_hearing_extra_filter_value();
            cookie_data.type.group = get_group_id(filter_value);

            $.cookie('filter_value', JSON.stringify(cookie_data), { expires : Drupal.settings.ktc_sectionpage_filter_cookie_expire / 60 / 24, path: '/' });

            display_content(filter_value);
        });

        $container = $('#section-page-with-filter').find('.view-content:first');

        // Initial masonry
        if ($container.length) {
            load_content();
        }
        $('.filter-fold').click(function () {
            if ($(this).hasClass('filter-foldin')) {
                $(this).closest('.pane-views-panes').find('.pane-content').css('display', 'none');
                $(this).removeClass('filter-foldin');
                $(this).addClass('filter-foldout');
            }
            else {
                $(this).closest('.pane-views-panes').find('.pane-content').css('display', 'block');
                $(this).removeClass('filter-foldout');
                $(this).addClass('filter-foldin');
            }
        });

        $('.view-id-arrangement.view-display-id-panel_pane_1 .calendar-calendar table.mini td.mini a').click(function (event) {
            var date = $(this).attr('href').split('/');
            date = date[date.length - 1];
            var time = new Date(date + ' 00:00:00');
            $('.filter-box').find('.filter-link').not("[id*='filter-all']").removeClass(button_active);
            $('.filter-box').find('.filter-link').not("[id*='filter-all']").addClass(button_normal);
            $('.filter-box').find('#filter-all').removeClass(button_normal);
            $('.filter-box').find('#filter-all').addClass(button_active);
            filter_value = check_filter_value();
            if (time.getTime() > $.now()) {
                link = '/ajax/aktiviteter/view/all/' + filter_value[1] + '/fulture/' + date + '/' + filter_value[4] + '/all';
            }
            else {
                link = '/ajax/aktiviteter/view/all/' + filter_value[1] + '/old/' + date + '/' + filter_value[4] + '/all';
            }

            jQuery.get(link, function (data) {

                $('#section-page-with-filter').html(data);
                load_content();
                add_pager_ajax();
            });
            return false;

        });

        $('.filter-pane-title').css('cursor', 'pointer');

        $('.filter-pane-title').click(function () {
            var foldout = $(this).parent('.panel-pane').find('.pane-content').css('display');
            var icon = $(this).closest('.panel-pane').find('.filter-fold');
            if (foldout == 'block') {
                $(this).closest('.pane-views-panes').find('.pane-content').css('display', 'none');
                icon.removeClass('filter-foldin');
                icon.addClass('filter-foldout');
            }
            else {
                $(this).closest('.pane-views-panes').find('.pane-content').css('display', 'block');
                icon.removeClass('filter-foldout');
                icon.addClass('filter-foldin');
            }
        });
    });

    // Add imagesloaded after views ajax completed.
    $(document).ajaxComplete(function () {
        load_content();
    });

    function load_content() {

        $container = $('.masonry-wrapper');

        $container.imagesLoaded(function () {

            $container.masonry({
                columnWidth : '.masonry-sizer',
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
        $('#section-page-with-filter-all-groups .pager-next a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
                $('#section-page-with-filter-all-groups .pane-content').html(data);
                add_pager_ajax();
            });
            return false;
        });

        $('#section-page-with-filter-all-groups .pager-previous a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
                $('#section-page-with-filter-all-groups .pane-content').html(data);
                add_pager_ajax();
            });
            return false;
        });
        $('#section-page-with-filter-my-groups .pager-next a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
                $('#section-page-with-filter-my-groups .pane-content').html(data);
                add_pager_ajax();
            });
            return false;
        });
        $('#section-page-with-filter-my-groups .pager-previous a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
                $('#section-page-with-filter-my-groups .pane-content').html(data);
                add_pager_ajax();
            });
            return false;
        });
        $('#section-page-with-filter .pager-next a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
                $('#section-page-with-filter').html(data);
                add_pager_ajax();
                load_content();
            });
            return false;
        });
        $('#section-page-with-filter .pager-previous a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
                $('#section-page-with-filter').html(data);
                add_pager_ajax();
                load_content();
            });
            return false;
        });
        $('#section-page-with-filter .pagination a').click(function (event) {
            jQuery.get($(this).attr('href'), function (data) {
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

        $('.filter-box').each(function () {

            $(this).find('.btn-primary').each(function () {

                var filter_id = $(this).closest('.panel-pane').attr('id');
                if (filter_id == 'content_type') {
                    content_type += $(this).attr('data-filter') + ',';
                }

                if (filter_id == 'term_type') {
                    term_type += $(this).attr('data-filter') + ',';
                }

                if (typeof filter_id != "undefined" && filter_id.indexOf('emner') >= 0) {
                    var level = 0;
                    if (filter_id.indexOf('-') >= 0 && $(this).attr('data-filter') != 'all')
                        level = filter_id.substr(filter_id.indexOf('-') + 1);
                    if (!emner_arr[level])
                        emner_arr[level] = Array();
                    if ($(this).attr('data-filter') != 'all')
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
        $('#groups .btn-primary').each(function () {
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

        $('.filter-box #filter-box-hearing-extra').each(function () {

            $(this).find('.btn-primary').each(function () {
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

        $('.filter-box #filter-box-magazine-date').each(function () {

            $(this).find('.btn-primary').each(function () {
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
        return magazine_date_filter_value;
    }

    function get_calendar_date_filter_value() {
        var calendar_date_filter_value = [];
        var month = '';
        var year = '';

        $('.filter-box #filter-box-magazine-date').each(function () {

            $(this).find('.btn-primary').each(function () {
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

        calendar_date_filter_value.push(year);
        calendar_date_filter_value.push(month);
        return calendar_date_filter_value;
    }

    /**
     * Sets the filter states after page load, in order to "remember" search history.
     */
    function set_filter_value(filter_value) {

        if (filter_value.page == 'netvaerk' || filter_value.page == 'nyheder' || filter_value.page == 'teknikmiljoe') {
            // Set on network (all, mine, newest)
            if (typeof filter_value.type.group != 'undefined') {
                var group = sanitize_str(filter_value.type.group);
                $('#groups').find('[data-filter="' + group + '"]').addClass(button_active);
                $('#groups').find('#filter-all').removeClass(button_active);
                $('#groups').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on Content types filter
            var content_types = sanitize_str(filter_value.type.regular[0]).split(',');
            for (var i = 0; i < content_types.length; i++) {
                if (content_types[i]) {
                    $('#content_type').find('#' + content_types[i]).addClass(button_active);
                }
                $('#content_type').find('#filter-all').removeClass(button_active);
                $('#content_type').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on newstype
            var newstype = sanitize_str(filter_value.type.regular[1]).split(',');
            for (var i = 0; i < newstype.length; i++) {
                $('#term_type').find('#filter-' + newstype[i]).addClass(button_active);
                $('#term_type').find('#filter-all').removeClass(button_active);
                $('#term_type').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on Emner
            var topics = sanitize_str(filter_value.type.regular[2]).split(',');
            for (var i = 0; i < topics.length; i++) {
                $('#emner').find('#filter-' + topics[i]).addClass(button_active);
                $('#emner').find('#filter-all').removeClass(button_active);
                $('#emner').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on news topic
            var news_topic = sanitize_str(filter_value.type.regular[3]).split(',');
            for (var i = 0; i < news_topic.length; i++) {
                $('#tags').find('#filter-' + news_topic[i]).addClass(button_active);
                $('#tags').find('#filter-all').removeClass(button_active);
                $('#tags').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on network types
            var regions = sanitize_str(filter_value.type.regular[4]).split(',');
            for (var i = 0; i < regions.length; i++) {
                $('#regioner').find('#filter-' + regions[i]).addClass(button_active);
                $('#regioner').find('#filter-all').removeClass(button_active);
                $('#regioner').find('#filter-all').addClass(button_normal);
            }
        }

        if (filter_value.page == 'kalender' || filter_value.page == 'teknikmiljoe') {

            var magazine_date_year;
            var magazine_date_month;

            // Set buttons on calendar types (year)
            if (typeof filter_value.type.calendar_date != 'undefined') {
                magazine_date_year = sanitize_str(filter_value.type.calendar_date[0]).split(',');
                magazine_date_month = sanitize_str(filter_value.type.calendar_date[1]).split(',');
            }
            else if (typeof filter_value.type.magazine_date != 'undefined') {
                magazine_date_year = sanitize_str(filter_value.type.magazine_date[0]).split(',');
                magazine_date_month = sanitize_str(filter_value.type.magazine_date[1]).split(',');
            }

            // Set buttons on calendar types (year)
            for (var i = 0; i < magazine_date_year.length; i++) {
                $('#magazine-date-filter').find('[data-filter="' + magazine_date_year[i] + '"]').addClass(button_active);
                $('#magazine-date-filter').find('#filter-all').removeClass(button_active);
                $('#magazine-date-filter').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on calendar types (month)
            for (var i = 0; i < magazine_date_month.length; i++) {
                $('#magazine-date-filter').find('[data-filter="' + magazine_date_month[i] + '"]').addClass(button_active);
                $('#magazine-date-filter').find('#filter-all').removeClass(button_active);
                $('#magazine-date-filter').find('#filter-all').addClass(button_normal);
            }
        }

        if (filter_value.page == 'kalender') {
            // Set buttons on calendar period
            var magazine_date_period = sanitize_str(filter_value.type.calendar_period[0]).split(',');
            for (var i = 0; i < magazine_date_period.length; i++) {
                $('#period').find('#filter-old').addClass(button_active);
                $('#period').find('#filter-all').removeClass(button_active);
                $('#period').find('#filter-all').addClass(button_normal);
            }

            // Set buttons on newstype
            var newstype = sanitize_str(filter_value.type.regular[1]).split(',');
            for (var i = 0; i < newstype.length; i++) {
                $('#term_type').find('#filter-' + newstype[i]).addClass(button_active);
                $('#term_type').find('#filter-all').removeClass(button_active);
                $('#term_type').find('#filter-all').addClass(button_normal);
            }
        }
    }

    /*
     * Helper function to remove trailing comma from a string.
     */
    function sanitize_str(str) {
        return str.replace(/,\s*$/, "");
    }

    /*
     * Loads the content base on the filter values, and displays it on the screen.
     */
    function display_content(filter_value) {
        var path = window.location.href.split('/');
        var type = path[path.length - 1];
        var gid = get_group_id();
        var link = '/ajax/' + type + '/view/' + filter_value[0] + '/' + filter_value[1] + '/' + filter_value[2] + '/' + filter_value[3] + '/' + filter_value[4] + '/' + gid;

        if (type == 'teknikmiljoe') {
            if (filter_value[0].indexOf("artikler") >= 0 || filter_value[0].indexOf("all") >= 0)
                $('#term_type').show();
            else
                $('#term_type').hide();
            if (filter_value[0].indexOf("magazine") >= 0 || filter_value[0].indexOf("all") >= 0)
                $('#magazine-date-filter').show();
            else
                $('#magazine-date-filter').hide();
        }

        // Netvaerk section page my groups and all groups filter.
        if (type == 'netvaerk' && (filter_value[1] != 'all,' || filter_value[2] != 'all,' || filter_value[3] != 'all,' || filter_value[4] != 'all,')) {
            var link_2 = '/all_groups/' + filter_value[1] + '/' + filter_value[2] + '/' + filter_value[3] + '/' + filter_value[4] + '/all,';
            var block = $('#section-page-with-filter-all-groups');

            if (gid == 'my,') {
                link_2 = '/all_groups/' + filter_value[1] + '/' + filter_value[2] + '/' + filter_value[3] + '/' + filter_value[4] + '/my,';
            }
            else if (gid == 'newest,') {
                link_2 = '/all_groups/' + filter_value[1] + '/' + filter_value[2] + '/' + filter_value[3] + '/' + filter_value[4] + '/newest';
            }

            jQuery.get(link_2, function (data) {
                block.find('.pane-content').html(data);
                add_pager_ajax();
            });

        }

        // Arrangement/kalender section page: filter events on period (future/old).
        var substr = type.match(/kalender/g);
        if (type == 'kalender' || substr == 'kalender') {
            var period = $('#period').find('.btn-primary').attr('data-filter');
            var calendar_date_filter_value = get_calendar_date_filter_value();
            cookie_data.type.calendar_period = period;
            link = '/ajax/aktiviteter/view/all/' + filter_value[1] + '/' + period + '/' + calendar_date_filter_value[0] + '/' + calendar_date_filter_value[1] + '/' + gid;
        }

        if (type == 'hoeringer') {
            var hearing_filter_value = check_hearing_extra_filter_value();
            link = '/ajax/hoeringer/view/hearing/' + filter_value[1] + '/' + filter_value[2] + '/' + hearing_filter_value[0] + '/' + hearing_filter_value[1] + '/' + hearing_filter_value[2];
        }

        if (type == 'teknikmiljoe') {
            var magazine_date_filter_value = check_magazine_date_filter_value();
            cookie_data.type.magazine_date = magazine_date_filter_value;
            link = '/ajax/' + type + '/view/' + filter_value[0] + '/' + filter_value[1] + '/' + magazine_date_filter_value[0] + '/' + magazine_date_filter_value[1] + '/' + filter_value[4] + '/' + gid;
        }
        jQuery.get(link, function (data) {
            $('#section-page-with-filter .pane-content').html(data);
            load_content();
            add_pager_ajax();
        });
    }

    function get_group_id() {
        var gid = $('#content_id').find('.pane-content p').text();
        if (gid == '') {
            gid = check_gid_filter_value();
        }
        else {
            gid += ',' + check_gid_filter_value();
        }
        return gid;
    }
})(jQuery);

( function ($) {
    $(document).ready(function(){

        // Load masonry
        $container = $('.masonry-wrapper .view-content');
        // Don't use masonry if items contain comments (it screws up comments)
        if ($container.find('.ktc-comments-list').length === 0 && !$('body').hasClass('node-type-group')) {
            if ($container) {

                $container.masonry({
                    itemSelector: '.masonry-item'
                });
            }
        }
        bs3Masonry.init();

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

        // Aside user toggle
        $('.ktc-aside-toggle .ktc-aside-user-wrapper').on('click', function(event) {
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
        $('.og-members-all a').on('click', function(event) {
            event.preventDefault();
            $('#section-page-with-filter .pane-content .view').hide();
            $('.ktc-group-members').removeClass('hide');
            return false;
        });
        $('.og-members-show-modal a, .og-members-show-modal').click(function() {
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

//# sourceMappingURL=app.js.map