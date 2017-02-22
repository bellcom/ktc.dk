/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($) {
  Drupal.behaviors.ktcArticles = {
    attach: function (context, settings) {
      $("#article-sortable").sortable({
        update: function (event, ui) {
          elements = $("#article-sortable").sortable("serialize");
          $.ajax({
            type: 'POST',
            data: elements,
            url: Drupal.settings.basePath + 'ajax/paragraphs/reorder',
          });
        }
      });
    }
  }
  Drupal.behaviors.ktcMagasin = {
    attach: function (context, settings) {
      $(".magasinsider .view-content").sortable({
        update: function (event, ui) {
          $(".magasinsider .view-content").sortable("refresh");
          var moved_item_id = ui.item.attr('id').split('_');
          var prev_item_id = ui.item.prev('.draggable').attr('id').split('_');
          var next_item_id = ui.item.prev('.draggable').attr('id').split('_');
          $.ajax({
            type: 'POST',
            data: {prev_item: prev_item_id[4], moved_item: moved_item_id[4], next_item: next_item_id[4]},
            url: Drupal.settings.basePath + 'ajax/udgivelser/' + moved_item_id[3] + '/reorder',

          });
        }
      });
    }
  }
})(jQuery)

