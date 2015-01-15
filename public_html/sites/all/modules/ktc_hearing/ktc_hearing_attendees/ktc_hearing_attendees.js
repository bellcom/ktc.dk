jQuery(document).ready(function($){
  $('.chosen-entityreference').each(function(){
    var $closest = $(this).closest('.form-group');
    $closest.find('.input-group').hide();

    var url = $(this).attr('data-autocomplete-path');

    $(this).ajaxChosen({
        type: 'GET',
        url: url,
        dataType: 'json'
    }, function (data) {
        var results = [];

        $.each(data, function (i, val) {
            results.push({
              value: i,
              text: i.replace(/\ \(\d+\)/g,'') });
        });

        return results;
    }).change(function(event){
      var val = $(this).val();

      if (val === null) {
        val = '';
      }

      var $closest = $(this).closest('.form-group');
      $closest.find('.form-text').val(val);
    });
  });

  var selected_groups = $('#edit-og-group-ref-und').val();

  $('#edit-og-group-ref-und').change(function(event){
    var change_groups = $('#edit-og-group-ref-und').val();

    if (change_groups) {
      $.each(change_groups, function(i, val) {

        if (selected_groups.indexOf(val) == -1) {
          $.getJSON('/ktc_hearing_attendees/get_group_members/' + val, function(data) {

            $.each(data, function (field, attendees) {
              $.each(attendees, function (i, val) {

                $('#edit-field-'+field+' .chosen-entityreference-container select').append(
                  $('<option/>', {
                    value: i,
                    text: val
                  }).attr('selected', 'selected'));
              });
            });
            console.log('hst');
          });
        }
      });

      selected_groups = change_groups;
    }
  });
});
