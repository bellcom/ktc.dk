<?php
/**
 * @file
 * Template for users subscriptions page.
 */
?>
Abonnementer

<?php if (!empty($subscription_nodes)): ?>
  <?php foreach($subscription_nodes as $node): ?>
    <?php print $node->title; ?>
  <?php endforeach; ?>
<?php endif; ?>

<?php if (!empty($user_subscriptions)): ?>
  <?php foreach($user_subscriptions as $sub): ?>
    <?php print $sub->ProductDescription; ?>
  <?php endforeach; ?>
<?php endif; ?>
