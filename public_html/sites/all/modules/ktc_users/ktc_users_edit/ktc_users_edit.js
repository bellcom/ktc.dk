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

      $('#edit-field-usertype-und').change(function(){
        limitCompaniesTo($(this).val());
      });
    }
  };
})(jQuery);
