jQuery(document).ready(function($){
  $('.chosen-entityreference.ajax').each(function(){
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

  $('.chosen-entityreference.no-ajax').each(function(){
    var $closest = $(this).closest('.form-group');
    $closest.find('.input-group').hide();

    $(this).chosen().change(function(event){
      var val = $(this).val();

      if (val === null) {
        val = '';
      }

      restrictOptions($(this), val);

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
          addGroupMembers(val, 'selected');
        }
      });
    }
    selected_groups = change_groups;
  });

  function restrictOptions($select, val) {
    var closestClass = $select.closest('.form-group').attr('class');

    var field = '';
    var otherField = '';

    if (closestClass.indexOf('chairman') > 0) {
      field = 'chairman';
      otherField = 'responsible-foreman';
    }
    else if (closestClass.indexOf('coordinator') > 0) {
      field = 'coordinator';
      otherField = 'responsible-admin';
    }

    if (field !== '') {
      var $otherSelect = $('#edit-field-'+otherField+' .chosen-entityreference-container select');
      $otherSelect.children().remove();

      $('#edit-field-'+field+' .chosen-entityreference-container select option').each(function(){
        if($(this).attr('selected') !== undefined) {
          var text = $(this).text();
          var val = $(this).val();

          $otherSelect.append(
            $('<option/>', {
              value: val,
              text: text
            }));
          }
      });


      $(".chosen-entityreference-container select").trigger("chosen:updated");
    }
  }

  function optionExists($select, val) {
    exists = false;
    $select.find('option').each(function() {
      if (this.value == val) {
        exists = true;
      }
    });
    return exists;
  }

  function addGroupMembers(group_id, selected) {
    $.getJSON('/ktc_hearing_attendees/get_group_members/' + group_id, function(data) {

      $.each(data, function (field, attendees) {
        $.each(attendees, function (i, val) {

          var $select = $('#edit-field-'+field+' .chosen-entityreference-container select');

          if (!optionExists($select, i)) {
            $select.append(
              $('<option/>', {
                value: i,
                text: val
              }).attr(selected, selected));
          }
        });
      });

      $(".chosen-entityreference-container select").trigger("chosen:updated");
    });
  }

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

  $.each($('#edit-og-group-ref-und').val(), function (i, val) {
    addGroupMembers(val);
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
