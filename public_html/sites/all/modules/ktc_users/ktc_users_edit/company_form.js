(function ($) {
  Drupal.behaviors.ktcUsersEdit = {
    attach: function (context, settings) {
      /**
       * Show the company address for the selected company.
       */
      function load_company_address() {
        var account_tid = $('.form-item-account select:last :selected').val();

        if (account_tid.indexOf('label') != -1) {
          account_tid = $('.form-item-account .has-children:last:selected').val();
        }

        $.get('/ktc_users_edit/get_account_address/' + account_tid, function(data) {
          $('#company-address').html(data);
        });
      }

      load_company_address();

      $('.form-item-account').bind('change-hierarchical-select', function(event) {
        load_company_address();
      });

    }
  };
})(jQuery);
