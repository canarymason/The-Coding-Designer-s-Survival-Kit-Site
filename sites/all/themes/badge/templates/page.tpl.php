<?php
// $Id$

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 */
?>

<nav id='main-nav' role="navigation">
  <h1>Navigation</h1>
  <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
</nav>

<header id="page-header">
  <div class="wrapper">
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
      <h1 id="site-name">
        <?php print $site_name; ?>
      </h1>
    </a>
    <?php print render($page['header']); ?>
  </div>
</header>

<div class="container">
  <div id="page-tools">
    <?php print render($page['highlighted']); ?>
    <?php if ($tabs = render($tabs)): ?><div class="tabs"><?php print $tabs; ?></div><?php endif; ?>
    <?php print render($page['help']); ?>
    <?php if ($action_links = render($action_links)): ?><ul class="action-links"><?php print $action_links; ?></ul><?php endif; ?>
  </div>

  <?php /* if ($breadcrumb): ?>
    <nav id="breadcrumb"><?php print $breadcrumb; ?></nav>
  <?php endif; */ ?>

  <?php print $messages; ?>

  <div role="main">
    <div class="inner">
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
      <?php print render($title_suffix); ?>

      <div class="content-wrapper">
        <?php print $feed_icons; ?>
        <?php print render($page['content']); ?>
      </div>
    </div>
  </div> <!-- /main -->

</div>

<?php //print render($page['sidebar_first']); ?>

<?php //print render($page['sidebar_second']); ?>


<?php print render($page['footer']); ?>
