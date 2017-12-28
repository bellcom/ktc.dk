/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

(function ($) {
  jQuery(document).ready(function ($) {
    if ($('#edit-usertype').val() == 'All') {
      $('#edit-firma-wrapper').hide();
    } else {
      change_firma_list($('#edit-usertype').val());
      $('#edit-firma-wrapper').show();

    }

  });


  function change_firma_list(usertypeTid) {
    var firstLevel = Drupal.settings.ktcUsersSearch.usertypeMap[usertypeTid];
    var firma_value = $('#edit-firma').val();
    $.get('/ajax/users_search/get_children_accounts/' + firstLevel, function (data) {
      var select = $('#edit-firma');
      select.empty();
      $.each(data, function (index, element) {
        select.append('<option value="' + element.key + '">' + element.title + '</option>');
      });
      $('#edit-firma').val(firma_value);
    });

  }
  Drupal.behaviors.ktcUserSearch = {
    attach: function (context, settings) {
      $('#edit-usertype').change(function (event) {
        if ($('#edit-usertype').val() == 'All') {
          $('#edit-firma').val('All');
          $('#edit-firma-wrapper').hide();

        } else {
          var usertypeTid = $(this).val();
          change_firma_list(usertypeTid);
          $('#edit-firma-wrapper').show();
        }
      });
    }

  };
})(jQuery);


