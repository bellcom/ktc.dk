(function($){
  Drupal.behaviors.ktcNetvaerk = {
    attach: function (context, settings) {
      $('#member-modal').on('hidden.bs.modal', function () {
        $.cookie('netvaerk_show_modal', '0');
      });

      $('#member-modal').on('shown.bs.modal', function () {
        $.cookie('netvaerk_show_modal', '1');
      });

      var show_modal = $.cookie('netvaerk_show_modal');
      if (show_modal === '1') {
        $('#member-modal').modal();
      }

      $('#member-modal .js-form-add-user').click(function(){
        $('#form-add-user').toggleClass('hide');
      });
      $('#member-modal .js-form-massadd-user').click(function(){
        $('#form-massadd-user').toggleClass('hide');
      });

      $('#form-div .close').click(function(){
        $('#form-div').addClass('hide');
        return false;
      });

      $('#member-modal .content a').click(function(){
        var url = $(this).attr('href');
        var pieces = url.split('/');

        // "", "group", "node", "650", "admin", "people", "edit-membership
        $('#form-div div').load('/netvaerk/form/' + pieces[3] + '/' + pieces[6] + '/' + pieces[7] + '?destination=node/' + pieces[3]);
        $('#form-div').removeClass('hide');

        return false;
      });
    }
  };
}(jQuery));
