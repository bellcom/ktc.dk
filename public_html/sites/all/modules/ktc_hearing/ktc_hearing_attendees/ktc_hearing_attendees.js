jQuery(document).ready(function ($) {
    $('.chosen-entityreference.ajax').each(function () {
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
                    text: i.replace(/\ \(\d+\)/g, '')
                });
            });

            return results;
        }).change(function (event) {
            var val = $(this).val();

            if (val === null) {
                val = '';
            }

            var $closest = $(this).closest('.form-group');
            $closest.find('.form-text').val(val);
        });
    });


    $('.chosen-entityreference.no-ajax').each(function () {
        var $closest = $(this).closest('.form-group');
        $closest.find('.input-group').hide();

        $(this).chosen().change(function (event) {
            var val = $(this).val();

            if (val === null) {
                val = '';
            }

            restrictOptions($(this), val);

            var $closest = $(this).closest('.form-group');
            $closest.find('.form-text').val(val);
        });

    });

    // Groups (loaded if we have data from a previous save)
    var $group_field = $('#edit-og-group-ref-und'),
        groups = $group_field.val();

    // Update group/network list
    $group_field.change(function (event) {
        var groups_temp = $group_field.val();

        // A group was removed
        if (groups) {

            // Run through all groups
            $.each(groups, function (index, value) {

                // There is no longer any groups or the group does no longer exist inside groups_temp
                if (groups_temp === null || groups_temp.indexOf(value) == -1) {

                    // Get a list of members we need to remove from the group we are running through
                    $.getJSON('/ktc_hearing_attendees/get_group_members/' + value + '/' + groups_temp, function (data) {

                        if (data) {

                            // Run through each field to which we need to grab attendees
                            $.each(data, function (field, attendees) {
                                var $select = $('#edit-field-' + field + ' .chosen-entityreference-container select');

                                if (attendees) {

                                    // Run through all attendees
                                    $.each(attendees, function (index, value) {

                                        // Remove
                                        $('#edit-field-' + field + ' .chosen-entityreference-container select option[value="' + index + '"]').remove();
                                    });

                                    // Select first option
                                    if (!$select.val()) {
                                        selectFirstOption($select);
                                    }
                                }
                            });

                            // Update chosen to reflect the updated list
                            $(".chosen-entityreference-container select").trigger("chosen:updated");
                        }
                    });
                }
            });
        }

        // A group was added
        if (groups_temp) {

            // Run through all temporary groups
            $.each(groups_temp, function (index, value) {

                // This group does not exist inside the groups variable, so it must be new
                if (groups === null || groups.indexOf(value) == -1) {
                    console.log('Add group');
                    addGroupMembers(value, 'selected', groups_temp);
                }
            });
        }

        groups = groups_temp;
    });

    // Add groups members
    function addGroupMembers(group_id, selected, groups) {

        // Get a list of all attendees from the new group
        $.getJSON('/ktc_hearing_attendees/get_group_members/' + group_id + '/' + groups, function (data) {

            // Run through all fields
            $.each(data, function (field, attendees) {
                var $select = $('#edit-field-' + field + ' .chosen-entityreference-container select');

                // Attendees was returned
                if (attendees) {

                    // Run through all attendees
                    $.each(attendees, function (index, value) {

                        // The option does not exist
                        if (!optionExists($select, index)) {
                            var $option = $('<option />', {
                                value: index,
                                text: value
                            });

                            // Select option as it is belongs to a multiple select
                            if ($select.attr('multiple')) {
                                $option.attr('selected', 'selected');
                            }

                            $select.append($option);
                        }
                    });
                }

                // Select first option
                if (!$select.val()) {
                    selectFirstOption($select);
                }
            });

            // Update chosen to reflect the updated list
            $(".chosen-entityreference-container select").trigger("chosen:updated");
        });
    }


    // Select the first option
    function selectFirstOption($select) {

        // Check to see if a second option exist, and has a value
        if ($select.find('option:nth-child(2)') && $select.find('option:nth-child(2)').val()) {
            $select.find('option:nth-child(2)').attr('selected', 'selected');
        }
    }


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
            var $otherSelect = $('#edit-field-' + otherField + ' .chosen-entityreference-container select');
            $otherSelect.children().remove();

            $('#edit-field-' + field + ' .chosen-entityreference-container select option').each(function () {
                if ($(this).attr('selected') !== undefined) {
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


    function optionExists($select, option_value) {
        var $option = $select.find('[value="' + option_value + '"]');

        // The option already exists
        if ($option.length > 0) {
            return true;
        }

        return false;
    }

    // Handle data in form, on form error.
    $('.chosen-entityreference').each(function () {
        var $chosen_select = $(this);
        var $closest = $(this).closest('.form-group');
        var val = $closest.find('.form-text').val();

        $chosen_select.children().remove();

        data = val.split(',');

        $.each(data, function (i, val) {
            var text = val.replace(/\ \(\d+\)/g, '');

            $chosen_select.append(
                $('<option/>', {
                    value: val,
                    text: text
                }).attr('selected', 'selected'));
        });
        $(".chosen-entityreference-container select").trigger("chosen:updated");
    });

    if ($('#edit-og-group-ref-und').val()) {
        $.each($('#edit-og-group-ref-und').val(), function (i, val) {
            addGroupMembers(val, 'selected');
        });
    }

    // Handle updating original field.
    $(".chosen-entityreference-container select").on("chosen:updated", function () {
        var $chosen_select = $(this);
        var $closest = $(this).closest('.form-group');
        var val = [];
        $closest.find('.form-text').val('');

        $chosen_select.find('option:selected').each(function () {
            if ($(this).val()) {
                val.push($(this).val());
            }
        });

        $closest.find('.form-text').val(val.join(','));
    });
});
