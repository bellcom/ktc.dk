/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

(function($) {
    Drupal.behaviors.ktcHearingNodeSubmit = {
        attach: function(context, settings) {
            $('#confirm').dialog({
            autoOpen: false,
            width: 400,
            modal: true,
            resizable: false,
            buttons: {
                "Fortsæt": function() {
                    $(this).dialog("close");
                    $('#hearing-node-form').submit();
                    return true;
                },
                "Annuller": function() {
                    $(this).dialog("close");
                    return false;
                }
            }
        });

            $('#hearing-node-form .form-submit').click(function(event) {
                event.preventDefault();
                var isError = false;
      
                //event.preventDefault();
                //alert($('#edit-field-official-responsedate-und-0-value-datepicker-popup-0').val() + ' ' + $('#edit-field-official-responsedate-und-0-value-timeEntry-popup-1').val());
                official_date_parts = $('#edit-field-official-date-und-0-value-datepicker-popup-0').val().split('/');
                official_date = new Date(official_date_parts[1] + '/' + official_date_parts[0] + '/' + official_date_parts[2]);
                attendee_deadlines_parts = $('#edit-field-attendee-deadlines-und-0-value-datepicker-popup-0').val().split('/')
                attendee_deadlines = new Date(attendee_deadlines_parts[1] + '/' + attendee_deadlines_parts[0] + '/' + attendee_deadlines_parts[2]);
                enrollment_deadlines_parts = $('#edit-field-enrollment-deadlines-und-0-value-datepicker-popup-0').val().split('/');
                enrollment_deadlines = new Date(enrollment_deadlines_parts[1] + '/' + enrollment_deadlines_parts[0] + '/' + enrollment_deadlines_parts[2]);
                $("#confirm").html(''); 
                //$("#confirm").attr('title', '');
                if (daysBetween(attendee_deadlines, official_date) <= 14) {
                     $("#confirm").append('<p><b>Deltagers frist</b></p><p>Du har angivet deltagernes høringsfrist, til at være mindre end 14 dage. Det kan gøre det svært for KTC at indhente tilstrækkeligt grundige høringssvar fra deltagerne. Ønsker du at fortsætte? Tryk "annuller" for at ændre datoen.</p>');
                     $("#confirm").attr('title', 'Deltagers frist');
                     isError = true;
               }

                if (daysBetween(enrollment_deadlines, attendee_deadlines) < 3) {
                     $("#confirm").append('<p><b>KTC høringsfrist</b></p><p>Du har angivet en frist, der efterlader mindre end 3 dage til KTC, til at sammenskrive deltagernes høringssvar og færdigbehandle høringen hos faggruppeformand/-formænd. Ønsker du at fortsætte? Tryk "annuller" for at ændre datoen</p>');
                     $("#confirm").attr('title', $("#confirm").attr('title') + 'Deltagers frist');
                     isError = true;  
                }
                if (isError == true) 
                   $('#confirm').dialog('open');
               else
                   $('#hearing-node-form').submit();
               /* if (daysBetween(attendee_deadlines, official_date) <= 14) {
                    if (!confirm('Du har angivet deltagernes høringsfrist, til at være mindre end 14 dage. Det kan gøre det svært for KTC at indhente tilstrækkeligt grundige høringssvar fra deltagerne. Ønsker du at fortsætte? Tryk "annuller" for at ændre datoen.')) {
                        return false;
                    }
                }

                if (daysBetween(enrollment_deadlines, attendee_deadlines) <= 3) {
                    if (!confirm('Du har angivet en frist, der efterlader mindre end 3 dage til KTC, til at sammenskrive deltagernes høringssvar og færdigbehandle høringen hos faggruppeformand/-formænd. Ønsker du at fortsætte? Tryk "annuller" for at ændre datoen')) {
                        return false;
                    }
                }*/
               
                return true;
            });
        }
    };
})(jQuery);

function daysBetween(date1, date2) {
    // The number of milliseconds in one day
    var ONE_DAY = 1000 * 60 * 60 * 24

    // Convert both dates to milliseconds
    var date1_ms = date1.getTime()
    var date2_ms = date2.getTime()

    // Calculate the difference in milliseconds

    var difference_ms = Math.abs(date1_ms - date2_ms)

    // Convert back to days and return
    return Math.round(difference_ms / ONE_DAY)

}