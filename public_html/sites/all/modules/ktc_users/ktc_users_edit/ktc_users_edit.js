(function ($) {
  Drupal.behaviors.ktcUsersEdit = {
    attach: function (context, settings) {
      /**
       * Show the company address for the selected company.
       */
      $('#edit-field-account').bind('change-hierarchical-select', function(event) {
        var account_tid = $('#edit-field-account select:last :selected').val();

        if (account_tid.indexOf('label') != -1) {
          account_tid = $('#edit-field-account .has-children:last:selected').val();
        }

        $.get('/ktc_users_edit/get_account_address/' + account_tid, function(data) {
          $('.account-address .address').html(data);
        });
      });

      /**
       * Change the first level of the hierarchical select according to the
       * selected usertype.
       */
      $('#edit-field-account-und-hierarchical-select-selects-0').hide();

      function limitMembershipFieldsTo(usertypeTid) {
        var hidefields = settings.ktcUsersEdit.membershipMap[usertypeTid];

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
        var firstLevel = settings.ktcUsersEdit.usertypeMap[usertypeTid];

        $select = $('#edit-field-account-und-hierarchical-select-selects-0');

        $select.children().removeAttr('selected');
        $select.find('option[value=' + firstLevel + ']').attr('selected', 'selected');
        // Wait a little bit, otherwise, hierarchical select will funk up.
        setTimeout(function(){
          $select.change();
        }, 500);
      }

      limitMembershipFieldsTo($('#edit-field-usertype-und').val());

      $('#edit-field-usertype-und').change(function(){
        limitCompaniesTo($(this).val());
        limitMembershipFieldsTo($(this).val());
      });
    }
  };
})(jQuery);
