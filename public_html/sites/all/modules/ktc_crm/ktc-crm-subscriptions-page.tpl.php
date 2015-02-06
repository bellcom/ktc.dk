<?php
/**
 * @file
 * Template for users subscriptions page.
 */
?>
<h2>Abonnementer</h2>

<?php if (!empty($subscription_nodes)): ?>
  <?php foreach($subscription_nodes as $node): ?>
    <div class="well well-sm">
      <h4><?php print $node->title; ?></h4>
      <?php
      $product_uuid = field_get_items('node', $node, 'field_crm_uuid');
      if ($product_uuid && isset($user_subscriptions[$product_uuid[0]['value']])) :
        if ($user_subscriptions[$product_uuid[0]['value']]->is_active):
          print l(t('Opsig'), current_path() . '/' . $node->nid . '/cancel', array('attributes' => array('class' => 'pull-right btn btn-warning')));
          print l(t('Rediger'), current_path() . '/' . $node->nid . '/edit', array('attributes' => array('class' => 'pull-right btn btn-success')));
        else:
          print l(t('Opret'), current_path() . '/' . $node->nid . '/add', array('attributes' => array('class' => 'pull-right btn btn-success')));
        endif;
      else:
        print l(t('Opret'), current_path() . '/' . $node->nid . '/add', array('attributes' => array('class' => 'pull-right btn btn-success')));
      endif;
      ?>
      <?php print render(field_view_field('node', $node, 'field_short_description', array('label' => 'hidden'))); ?>
    </div>
  <?php endforeach; ?>
<?php endif; ?>

<?php if (!empty($user_subscriptions)): ?>
  <?php foreach($user_subscriptions as $sub): ?>
    <?php print $sub->ProductDescription; ?>
  <?php endforeach; ?>
<?php endif; ?>
