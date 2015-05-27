This folder is where you should place all your overriding template files. By
default, the Bootstrap base theme provides all the necessary template files in
various folders inside of sites/*/themes/bootstrap/theme. For example, the
page.tpl.php template file is located at
sites/*/themes/bootstrap/theme/system/page.tpl.php. To override any of these
files, copy them from the Bootstrap base theme and place them in here.












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