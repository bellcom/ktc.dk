(function ($) {
Drupal.behaviors.os2web_taxonomies = {
  attach: function() {

    // This handler makes a confirm box before the actually ajax event is fired.
    $('.confirm').once().each(function() {
      var events = $(this).clone(true).data('events'); // Get the jQuery events.
      $(this).unbind('click'); // Remove the click events.
      $(this).one('click', function () {
        if (confirm('Are you sure you want to delete all KLE references from this content type?')) {
          $.each(events.click, function() {
            this.handler(); // Invoke the click handlers that was removed.
          });
        }
        // Prevent default action.
        return false;
      });

    });
  }
};
})(jQuery);
