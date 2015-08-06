<!-- field-collection-item--field_coforfattere--listevisning.tpl.php -->
<?php
/* Render system user */
if (isset($content['field_eksisterende_bruger'])):
?>

  <?php print render($content['field_eksisterende_bruger']); ?>

<?php
/* Render hard-typed user */
else:
?>

  <?php if (isset($content['field_navn'])): ?>
    <!-- Begin - firstname -->
    <?php print render($content['field_navn']); ?>
    <!-- End - firstname -->
  <?php endif; ?>

  <?php if (isset($content['field_efternavn'])): ?>
    <!-- Begin - lastname -->
    <?php print render($content['field_efternavn']); ?>
    <!-- End - lastname -->
  <?php endif; ?>

<?php
endif;
?>

