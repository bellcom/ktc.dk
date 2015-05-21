<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div class="header-region">
  <div class="top_header">
  <div class="container">
    <div class="row">
    <?php /* region--header_top.tpl.php */ ?>
    <?php if ($page['header_top']): ?>
      <?php print render($page['header_top']); ?>
    <?php endif; ?>
    </div>
  </div>
  </div>
  <div class="navigation">
  <div class="container">
    <?php /* region--navigation.tpl.php */ ?>
    <?php if ($page['navigation']): ?>
      <?php print render($page['navigation']); ?>
    <?php endif; ?>
  </div>
  </div>
</div>

<div class="main-container container margin-fixed">

  <?php /* region--header.tpl.php */ ?>
  <?php print render($page['header']); ?>

  <div class="row">

      <?php /* region--sidebar.tpl.php */ ?>
      <?php if ($page['sidebar_first']): ?>
        <?php print render($page['sidebar_first']); ?>
      <?php endif; ?>

      <?php /* region--sidebar.tpl.php */ ?>
      <?php if ($page['sidebar_second']): ?>
        <?php print render($page['sidebar_second']); ?>
      <?php endif; ?>

      <?php /* region--content.tpl.php */ ?>
      <?php print render($page['content']); ?>

  </div>
  <?php if ($page['content_bottom']): ?>
  <div class="row">

      <?php /* region--content_bottom.tpl.php */ ?>
        <?php print render($page['content_bottom']); ?>

  </div>
  <?php endif; ?>

    </div>
  </div>


<!-- Begin - temp -->



<!-- Begin - aside -->
<div class="container">
    <div class="row">
      <div class="col-xs-12">
        <h1>Aside examples</h1>
      </div>
    </div>
    <div class="row">

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (default) -->
            <div class="panel panel-block panel-block-aside">
                <div class="panel-heading">
                    <h3 class="panel-title">Default</h3>
                </div>
                <div class="panel-body">
                    <p>Text</p>
                </div>
            </div>
            <!-- End - panel block (default) -->
        </div>

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (tech env) -->
            <div class="tech-env">
                <div class="panel panel-block panel-block-aside panel-block-aside-color">
                    <div class="panel-heading">
                        <h3 class="panel-title">Teknik & miljø</h3>
                    </div>
                    <div class="panel-body">
                        <p>body.tech-env</p>
                        <p>panel-block-aside-color</p>
                    </div>
                </div>
            </div>
            <!-- End - panel block (tech env) -->
        </div>

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (network) -->
            <div class="network">
                <div class="panel panel-block panel-block-aside panel-block-aside-color">
                    <div class="panel-heading">
                        <h3 class="panel-title">Netværk</h3>
                    </div>
                    <div class="panel-body">
                        <p>body.network</p>
                        <p>panel-block-aside-color</p>
                    </div>
                </div>
            </div>
            <!-- End - panel block (network) -->
        </div>

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (not network) -->
            <div class="no-network">
                <div class="panel panel-block panel-block-aside panel-block-aside-color">
                    <div class="panel-heading">
                        <h3 class="panel-title">Ikke netværk</h3>
                    </div>
                    <div class="panel-body">
                        <p>body.no-network</p>
                        <p>panel-block-aside-color</p>
                    </div>
                </div>
            </div>
            <!-- End - panel block (not network) -->
        </div>

    </div>
    <div class="row">

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (action) -->
            <div class="network">
                <div class="panel panel-block panel-block-aside panel-block-aside-action">
                    <div class="panel-heading">
                        <h3 class="panel-title">Action</h3>
                    </div>
                    <div class="panel-body">
                        <p>Text</p>
                    </div>
                </div>
            </div>
            <!-- End - panel block (action) -->
        </div>

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (w./toggle) -->
            <div class="panel panel-block panel-block-aside panel-block-aside-toggle">
                <div class="panel-heading">
                    <h3 class="panel-title">Toggle</h3>
                </div>
                <div class="panel-body">
                    <p>Text</p>
                </div>
            </div>
            <!-- End - panel block (w./toggle) -->
        </div>

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (w./toggle) -->
            <div class="panel panel-block panel-block-aside panel-block-aside-toggle closed">
                <div class="panel-heading">
                    <h3 class="panel-title">Toggle closed multiple lines</h3>
                </div>
                <div class="panel-body">
                    <p>Text</p>
                </div>
            </div>
            <!-- End - panel block (w./toggle) -->
        </div>

        <div class="col-xs-12 col-sm-3">
            <!-- Begin - panel block (w./toggle) -->
            <div class="panel panel-block panel-block-aside panel-block-aside-toggle">
                <div class="panel-heading">
                    <h3 class="panel-title">Toggle w. footer</h3>
                </div>
                <div class="panel-body">
                    <p>Text</p>
                    <div class="panel-user-profile">
                        <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
                        <div class="panel-user-profile-content">
                            <h4>Her er også en tekst</h4>
                            <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
                        </div>
                    </div>
                </div>
                <div class="panel-footer">
                    <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
                    <span class="panel-footer-button panel-footer-button-display">19</span>
                    <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
                </div>
            </div>
            <!-- End - panel block (w./toggle) -->
        </div>

    </div>
</div>
<!-- End - aside -->

<!-- Begin - teaser examples -->
<div class="container">
  <div class="row">
    <div class="col-xs-12">
      <h1>Small teaser examples</h1>
    </div>
  </div>
  <div class="row">

    <div class="col-xs-12 col-sm-3">
      <!-- Begin - teaser -->
      <div class="ktc-blue">
        <div class="panel panel-block panel-block-teaser">
          <div class="panel-heading">
            <a href="#" class="panel-title">Stacked blue</a>
          </div>
          <div class="panel-body">
            <h3><a href="#">Test headline</a></h3>
            <p>Kære Naturtema. Som aftalt kommer <a href="#">Danmarks Miljøportal</a> ud og underviser i Arealinformation, Naturappl </p>
            <div class="panel-user-profile">
              <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
              <div class="panel-user-profile-content">
                <h4>Her er også en tekst</h4>
                <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
              </div>
            </div>
          </div>
          <div class="panel-footer">
            <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
            <span class="panel-footer-button panel-footer-button-display">19</span>
            <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
          </div>
        </div>
        <div class="panel panel-block panel-block-teaser">
          <div class="panel-heading">
            <a href="#" class="panel-title">Stacked blue</a>
          </div>
          <div class="panel-body">
            <h3><a href="#">Test headline</a></h3>
            <p>Kære Naturtema. Som aftalt kommer <a href="#">Danmarks Miljøportal</a> ud og underviser i Arealinformation, Naturappl </p>
            <div class="panel-user-profile">
              <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
              <div class="panel-user-profile-content">
                <h4>Her er også en tekst</h4>
                <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
              </div>
            </div>
          </div>
          <div class="panel-footer">
            <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
            <span class="panel-footer-button panel-footer-button-display">19</span>
            <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
          </div>
        </div>
        <div class="panel panel-block panel-block-teaser">
          <div class="panel-heading">
            <a href="#" class="panel-title">Stacked blue</a>
          </div>
          <div class="panel-body">
            <h3><a href="#">Test headline</a></h3>
            <p>Kære Naturtema. Som aftalt kommer <a href="#">Danmarks Miljøportal</a> ud og underviser i Arealinformation, Naturappl </p>
            <div class="panel-user-profile">
              <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
              <div class="panel-user-profile-content">
                <h4>Her er også en tekst</h4>
                <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
              </div>
            </div>
          </div>
          <div class="panel-footer">
            <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
            <span class="panel-footer-button panel-footer-button-display">19</span>
            <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
          </div>
        </div>
      </div>
      <!-- End - teaser -->
    </div>

    <div class="col-xs-12 col-sm-3">
      <!-- Begin - teaser -->
      <div class="ktc-gold">
        <div class="panel panel-block panel-block-teaser">
          <div class="panel-heading">
            <a href="#" class="panel-title">Gold</a>
          </div>
          <div class="panel-body">
            <h3><a href="#">Test headline</a></h3>
            <p>Kære Naturtema. Som aftalt kommer <a href="#">Danmarks Miljøportal</a> ud og underviser i Arealinformation, Naturappl </p>
            <div class="panel-user-profile">
              <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
              <div class="panel-user-profile-content">
                  <h4>Her er også en tekst</h4>
                  <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
              </div>
            </div>
          </div>
          <div class="panel-footer">
            <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
            <span class="panel-footer-button panel-footer-button-display">19</span>
            <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
          </div>
        </div>
      </div>
      <!-- End - teaser -->
    </div>

    <div class="col-xs-12 col-sm-3">
      <!-- Begin - teaser -->
      <div class="ktc-green">
        <div class="panel panel-block panel-block-teaser">
          <div class="panel-heading">
            <a href="#" class="panel-title">Green</a>
          </div>
          <div class="panel-body">
            <h3><a href="#">Test headline</a></h3>
            <p>Kære Naturtema. Som aftalt kommer <a href="#">Danmarks Miljøportal</a> ud og underviser i Arealinformation, Naturappl </p>
            <div class="panel-user-profile">
              <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
              <div class="panel-user-profile-content">
                  <h4>Her er også en tekst</h4>
                  <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
              </div>
            </div>
          </div>
          <div class="panel-footer">
            <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
            <span class="panel-footer-button panel-footer-button-display">19</span>
            <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
          </div>
        </div>
      </div>
      <!-- End - teaser -->
    </div>

    <div class="col-xs-12 col-sm-3">
      <!-- Begin - teaser -->
      <div class="ktc-red">
        <div class="panel panel-block panel-block-teaser">
          <div class="panel-heading">
            <a href="#" class="panel-title">Red</a>
          </div>
          <div class="panel-body">
            <h3><a href="#">Test headline</a></h3>
            <p>Kære Naturtema. Som aftalt kommer <a href="#">Danmarks Miljøportal</a> ud og underviser i Arealinformation, Naturappl </p>
            <div class="panel-user-profile">
              <img class="panel-user-profile-photo" src="http://ktc.mn/sites/all/themes/ktc/images/user-icon.png" alt="Jesper Hedegaard Hedegaard - KTC Sekretariats billede" title="Jesper Hedegaard Hedegaard - KTC Sekretariats billede">
              <div class="panel-user-profile-content">
                  <h4>Her er også en tekst</h4>
                  <p>Er der nogen der ligger inde med gode erfaringer mht. at få jeres badevandsprofiler opdateret?</p>
              </div>
            </div>
          </div>
          <div class="panel-footer">
            <a href="#" class="panel-footer-button panel-footer-button-comment">1348</a>
            <span class="panel-footer-button panel-footer-button-display">19</span>
            <span class="panel-footer-button panel-footer-button-hearing pull-right">1</span>
          </div>
        </div>
      </div>
      <!-- End - teaser -->
    </div>

  </div>
</div>
<!-- End - teaser examples -->

<!-- Begin - large teaser examples -->
<div class="container">
  <div class="row">
    <div class="col-xs-12">
      <h1>Large teaser examples</h1>
    </div>
  </div>
  <div class="row">

    <div class="col-xs-12 col-md-6">
      <!-- Begin - teaser large -->
      <div class="panel panel-block panel-block-teaser panel-block-teaser-large">
        <div class="panel-heading">
          <h3 class="panel-title">panel-block-teaser-large</h3>
        </div>
        <div class="panel-body">
          <p>Kære Naturtema. Som aftalt kommer Danmarks Miljøportal ud og underviser i Arealinformation, Naturappl </p>
        </div>
        <div class="panel-footer">

          <!-- Begin - left aligned -->
          <a href="#" class="panel-footer-button panel-footer-button-comment">
            1348
          </a>
                    <span class="panel-footer-button panel-footer-button-display">
                        19
                    </span>
          <!-- End - left aligned -->

          <!-- Begin - right aligned -->
                    <span class="panel-footer-button panel-footer-button-hearing pull-right">
                        1
                    </span>
                    <span class="panel-footer-button panel-footer-button-event pull-right">
                        1
                    </span>
                    <span class="panel-footer-button panel-footer-button-forum pull-right">
                        1
                    </span>
                    <span class="panel-footer-button panel-footer-button-news pull-right">
                        1
                    </span>
                    <span class="panel-footer-button panel-footer-button-article pull-right">
                        1
                    </span>
                    <span class="panel-footer-button panel-footer-button-vote pull-right">
                        1
                    </span>
                    <span class="panel-footer-button panel-footer-button-private pull-right">
                        1
                    </span>
          <!-- End - right aligned -->

        </div>
      </div>
      <!-- End - teaser large -->
    </div>

  </div>
</div>
<!-- End - large teaser examples -->

<!-- End - temp -->

</div>
<?php /* region--footer.tpl.php */ ?>
<?php print render($page['footer']); ?>
<?php print render($page['footer_2']); ?>
<?php print render($page['footer_3']); ?>
<?php print render($page['footer_4']); ?>
<?php print render($page['footer_5']); ?>
