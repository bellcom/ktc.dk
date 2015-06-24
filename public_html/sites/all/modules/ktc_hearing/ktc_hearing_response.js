(function ($) {
  Drupal.behaviors.ktcHearingResponse = {
    attach: function (context, settings) {
      $('.toggle-all').click(function(event){
        event.preventDefault();
        $('.ktc-aside-toggle').removeClass('closed');
      });
    }
  };
})(jQuery);
