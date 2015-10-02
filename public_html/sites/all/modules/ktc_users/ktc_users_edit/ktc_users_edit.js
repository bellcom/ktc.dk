jQuery(document).ready(function($){

  /**
   * Show the company address for the selected company.
   */
  $('#edit-field-account--2').bind('change-hierarchical-select', function(event) {
    var account_tid = $('#edit-field-account--2 select:last :selected').val();

    if (account_tid && account_tid.indexOf('label') != -1) {
      account_tid = $('#edit-field-account--2 .has-children:last:selected').val();
    }

    $.get('/ktc_users_edit/get_account_address/' + account_tid, function(data) {
      $('.account-address .address').html(data);
    });
  });

  /**
   * Change the first level of the hierarchical select according to the
   * selected usertype.
   */
  function limitMembershipFieldsTo(usertypeTid) {
    var hidefields = Drupal.settings.ktcUsersEdit.membershipMap[usertypeTid];

    if (hidefields) {
      $('#edit-field-membership-ktc').hide();
      $('#edit-field-membership-kef').hide();
      $('#edit-field-membership-dp').hide();
      $('#edit-field-membership-kvf').hide();
      $('#edit-field-membership-kpn').hide();
      $('#edit-field-membership-dabyfo').hide();
      $('#edit-field-membership-envina').hide();
      $('#edit-field-membership-ffuk').hide();
    }
    else {
      $('#edit-field-membership-ktc').show();
      $('#edit-field-membership-kef').show();
      $('#edit-field-membership-dp').show();
      $('#edit-field-membership-kvf').show();
      $('#edit-field-membership-kpn').show();
      $('#edit-field-membership-dabyfo').show();
      $('#edit-field-membership-envina').show();
      $('#edit-field-membership-ffuk').show();
    }
  }

  function limitCompaniesTo(usertypeTid) {
    var usertypeMap = [];
    var firstLevel = Drupal.settings.ktcUsersEdit.usertypeMap[usertypeTid];

    $select = $('[name="field_account[und][hierarchical_select][selects][0]"]');

    // $select.children().removeAttr('selected');
    $select.find('option[value=' + firstLevel + ']').attr('selected', 'selected');
    // Wait a little bit, otherwise, hierarchical select will funk up.
    setTimeout(function(){
      $select.change();
    }, 500);
  }

  $('[name="field_usertype[und]"]').change(function(){
    limitCompaniesTo($(this).val());
    limitMembershipFieldsTo($(this).val());
  });
  $('[name="field_usertype[und]"]').trigger('change');

  $('.account-address a').click(function(event) {
    if (!$(this).attr('data-href')) {
      $(this).attr('data-href', $(this).attr('href'));
    }
    var firstLevel = Drupal.settings.ktcUsersEdit.usertypeMap[$('[name="field_usertype[und]"]').val()];
    $(this).attr('href', $(this).attr('data-href') + '/' + firstLevel);
    if (window.confirm("Hvis du forlader denne side vil dine rettelser ikke blive tabt. \n\nEr du sikker på at du vil fortsætte?")) {
      return true;
    }
    else {
      event.preventDefault();
    }
  });
});

(function ($) {
  Drupal.behaviors.ktcUsersEdit = {
    attach: function (context, settings) {
      $('[name="field_account[und][hierarchical_select][selects][0]"]').hide();
      $('[name="field_account[und][hierarchical_select][selects][0]"]').css('height', 22);
    }
  };
})(jQuery);
