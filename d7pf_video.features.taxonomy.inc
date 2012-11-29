<?php
/**
 * @file
 * d7pf_video.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function d7pf_video_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_3' => array(
      'name' => 'PP',
      'machine_name' => 'vocabulary_3',
      'description' => 'Primary Page Taxonomy, created by Paul on 02/13/2012.  To dynamically generate content in a primary page from different sources',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-3',
    ),
  );
}
