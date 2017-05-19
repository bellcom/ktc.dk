
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
      $('input[name=ean_bill]').click(function(){
        if($(this).val() == 1 )
          $('.form-item-ean').show();
        else
          $('.form-item-ean').hide();
      });      
      if($('input[name=ean_bill]:checked').val() == 1)
        $('.form-item-ean').show();
      else
        $('.form-item-ean').hide();
    }
  };


})(jQuery);

