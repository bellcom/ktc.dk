/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function($) {
  $("#sortable").sortable({
     update: function( event, ui ) {
       elements= $( "#sortable" ).sortable( "serialize" );
      $.ajax({
            type: 'POST',
            data: elements,
            url: Drupal.settings.basePath + 'ajax/paragraphs/reorder',
        });
      }
 });
})(jQuery);

