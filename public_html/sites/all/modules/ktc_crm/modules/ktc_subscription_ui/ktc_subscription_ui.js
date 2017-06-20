
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
      $('input[name=recipient_address]').click(function(){
        if ($('input[name=recipient_address]:checked').val() == 'Other') {
        $('#edit-other-address').show();
      }
      else {
        $('#edit-other-address').hide();
     }
      })
      if($('input[name=ean_bill]:checked').val() == 1)
        $('.form-item-ean').show();
      else
        $('.form-item-ean').hide();
      $('.has-error').closest('.table-responsive').addClass('has-error');

      if ($('input[name=recipient_address]:checked').val() == 'Other') {
        $('#edit-other-address').show();
      }
      else {
        $('#edit-other-address').hide();
     }
    }
  };


})(jQuery);

