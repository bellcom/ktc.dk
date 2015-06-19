
(function ($) {
  Drupal.behaviors.exampleModule = {
    attach: function (context, settings) {
      $('#edit-submit').click(function(){
        var button = $(this);

        button.text('Vent venligst..');
        setTimeout(function(){
          button.attr('disabled', 'disabled');
        }, 50);
      });
    }
  };


})(jQuery);

