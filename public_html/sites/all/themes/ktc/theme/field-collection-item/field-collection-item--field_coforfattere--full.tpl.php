<!-- field-collection-item--field_coforfattere.tpl.php -->
<?php
/* Render system user */
if (isset($content['field_eksisterende_bruger'])):
?>

  <?php print render($content['field_eksisterende_bruger']); ?>

<?php
/* Render hard-typed user */
else:
?>

  <section class="ktc-user-profile">
    <div class="ktc-user-profile-content-wrapper">

      <?php if (isset($content['field_foto_af_forfatter'])): ?>
        <!-- Begin - profile photo -->
        <div class="ktc-user-profile-photo-container">
          <?php print render($content['field_foto_af_forfatter']); ?>
        </div>
        <!-- End - profile photo -->
      <?php endif; ?>

      <!-- Begin - profile content -->
      <div class="ktc-user-profile-content">

        <?php if (isset($content['field_jobposition'])): ?>
          <!-- Begin - job title -->
          <div class="ktc-user-profile-content-job-title">
            <?php print render($content['field_jobposition']); ?>
          </div>
          <!-- End - job title -->
        <?php endif; ?>

        <div class="ktc-user-profile-content-name">
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
        </div>

        <?php if (isset($content['field_employee'])): ?>
          <!-- Begin - employee -->
          <div class="ktc-user-profile-content-employer">
            <?php print render($content['field_employee']); ?>
          </div>
          <!-- End - employee -->
        <?php endif; ?>

      </div>
    </div>
  </section>

<?php endif; ?>
