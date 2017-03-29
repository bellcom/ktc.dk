
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
      $('#ean_billing').change(function(){
        if($(this).is(':checked'))
          $('.form-item-ean').show();
        else
          $('.form-item-ean').hide();
      });
      if($('#ean_billing').is(':checked'))
        $('.form-item-ean').show();
      else
        $('.form-item-ean').hide();
    }
  };


})(jQuery);

