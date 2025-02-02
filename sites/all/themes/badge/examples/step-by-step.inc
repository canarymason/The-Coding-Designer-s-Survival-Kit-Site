// Imports --------------------------------------------------------------

// --&gt;  1. VARIABLES
// Set up variables for future use
@import partials/variables/colors
@import partials/variables/fonts
// general starter variables
@import partials/variables/base

// --&gt;  2. COMPASS MIXINS
// Add the compass tools you need
// all of compass
@import compass
// individual compass components, if you&#x27;re into the whole brevity thing
// @import compass/css3
// @import compass/layout
// @import compass/support
// @import compass/typography
// @import compass/utilities

// --&gt; 3. CHOOSE A GRID FRAMEWORK
// in partials/variables/_base.sass
// Susy
@import partials/grids/_susy_setup
// todo: add blueprint

// Survival Kit
@import partials/mixins/helpers


// --&gt; 4. PICK A CSS RESET
// html5 boilerplate reset
// @import partials/boilerplate/_boilerplate-reset
// compass reset
@import compass/reset
// susy reset
// @import susy/reset

// --&gt;  5. COMPASS PLUG-INS
// Fancy Buttons
// @import fancy-buttons
// Sassy Buttons
// @import sassybuttons

// --&gt;  6. DEFAULTS
// Set your overall site defaults
@import partials/defaults/_defaults
// @import partials/boilerplate/_boilerplate-setup
@import partials/boilerplate/_boilerplate-helpers
@import partials/defaults/_elements
//////@import partials/ui-patterns/_ui-patterns-common

// --&gt; 7. SPRITES
@import partials/variables/_sprites

// --&gt; 7. Styles just for working in the Survival Kit
// REMOVE THESE IN PRODUCTION
@import partials/survival_kit/_survival-kit


// --&gt; 8. CMS-specific overrides and mixins
// DRUPAL
// @import partials/cms/drupal/drupal
//////@import partials/ui-patterns/_ui-patterns-drupal

// --&gt;  9. STYLES FOR THIS SITE --------------------------------------------------
@import partials/grids/_grids_susy.sass
@import partials/_site-wide.sass

// --&gt;  10. RESPONSIVE --------------------------------------------------
// @import partials/media/_responsive.sass

// --&gt;  11. Modernizr &amp; Browser Support -------------------------------------------
// @import partials/browser_adjustments/_modernizr.sass
// @import partials/browser_adjustments/_ie.sass


// --&gt;  12. Print -------------------------------------------
// @import partials/print