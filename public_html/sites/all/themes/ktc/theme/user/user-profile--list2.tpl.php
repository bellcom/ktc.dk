<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>

<!-- Begin - user profile - list 2 -->
<section class="ktc-user-profile <?php print $classes; ?>">

    <!-- Begin - wrapper -->
    <div class="ktc-user-profile-content-wrapper">

        <!-- Begin - profile photo -->
        <?php print $image = theme('user_picture', array('account' => $account));?>
        <!-- End - profile photo -->

        <!-- Begin - profile content -->
        <div class="ktc-user-profile-content">

          <?php if (isset($personal['job_title'])): ?>
              <p class="ktc-user-profile-content-job-title"><?php print $personal['job_title']; ?></p>
          <?php endif ?>

          <?php if (isset($personal['full_name'])): ?>
              <h5 class="ktc-user-profile-content-name"><?php print l($personal['full_name'], 'user/' . $personal['uid']); ?></h5>
          <?php endif ?>

        </div>
        <!-- End - profile content -->

    </div>
    <!-- End - wrapper -->

</section>
<!-- End - user profile - list 2 -->
