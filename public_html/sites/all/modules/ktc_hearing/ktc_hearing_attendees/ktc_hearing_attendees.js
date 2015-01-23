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

  // Handle adding/removing groups
  $('#edit-og-group-ref-und').change(function(event){
    var change_groups = $('#edit-og-group-ref-und').val();

    // group removed
    if (selected_groups) {
      $.each(selected_groups, function(i, val) {
        if ( change_groups === null || change_groups.indexOf(val) == -1) {
          $.getJSON('/ktc_hearing_attendees/get_group_members/' + val, function(data) {

            $.each(data, function (field, attendees) {
              $.each(attendees, function (i, val) {

                $('#edit-field-'+field+' .chosen-entityreference-container select option[value="' + i + '"]').remove();
              });
            });

            $(".chosen-entityreference-container select").trigger("chosen:updated");
          });
        }
      });
    }

    // group added
    if (change_groups) {
      $.each(change_groups, function(i, val) {

        if (selected_groups === null || selected_groups.indexOf(val) == -1) {
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

            $(".chosen-entityreference-container select").trigger("chosen:updated");
          });
        }
      });
    }
    selected_groups = change_groups;
  });

  // Handle data in form, on form error.
  $('.chosen-entityreference').each(function(){
    var $chosen_select = $(this);
    var $closest = $(this).closest('.form-group');
    var val = $closest.find('.form-text').val();

    $chosen_select.children().remove();

    data = val.split(',');

    $.each(data, function (i, val) {
      var text = val.replace(/\ \(\d+\)/g,'');

      $chosen_select.append(
        $('<option/>', {
          value: val,
          text: text
        }).attr('selected', 'selected'));
    });
    $(".chosen-entityreference-container select").trigger("chosen:updated");
  });

  // Handle updating original field.
  $(".chosen-entityreference-container select").on("chosen:updated", function(){
    var $chosen_select = $(this);
    var $closest = $(this).closest('.form-group');
    var val = [];
    $closest.find('.form-text').val('');

    $chosen_select.find('option:selected').each(function(){
      if ($(this).val()) {
        val.push($(this).val());
      }
    });

    $closest.find('.form-text').val(val.join(','));
  });
});
