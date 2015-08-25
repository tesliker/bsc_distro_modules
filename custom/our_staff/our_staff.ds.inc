<?php
/**
 * @file
 * our_staff.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function our_staff_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|team_member|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'team_member';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_job_title',
        2 => 'field_phone_number',
        3 => 'field_e_mail',
        4 => 'body',
        5 => 'field_extended_bio',
        6 => 'field_facebook',
        7 => 'field_youtube',
        8 => 'field_instagram',
        9 => 'field_linked_in',
        10 => 'field_twitter',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_job_title' => 'right',
      'field_phone_number' => 'right',
      'field_e_mail' => 'right',
      'body' => 'right',
      'field_extended_bio' => 'right',
      'field_facebook' => 'right',
      'field_youtube' => 'right',
      'field_instagram' => 'right',
      'field_linked_in' => 'right',
      'field_twitter' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'header' => array(
        'col-lg-12' => 'col-lg-12',
      ),
      'left' => array(
        'col-sm-4' => 'col-sm-4',
      ),
      'right' => array(
        'col-sm-8' => 'col-sm-8',
      ),
      'footer' => array(
        'col-lg-12' => 'col-lg-12',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|team_member|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|team_member|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'team_member';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_name',
      ),
      'left' => array(
        1 => 'field_image',
      ),
      'right' => array(
        2 => 'field_job_title',
        3 => 'field_phone_number',
        4 => 'field_e_mail',
        5 => 'body',
        6 => 'field_facebook',
        7 => 'field_youtube',
        8 => 'field_instagram',
        9 => 'field_linked_in',
        10 => 'field_twitter',
      ),
    ),
    'fields' => array(
      'field_name' => 'header',
      'field_image' => 'left',
      'field_job_title' => 'right',
      'field_phone_number' => 'right',
      'field_e_mail' => 'right',
      'body' => 'right',
      'field_facebook' => 'right',
      'field_youtube' => 'right',
      'field_instagram' => 'right',
      'field_linked_in' => 'right',
      'field_twitter' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'header' => array(
        'col-lg-12' => 'col-lg-12',
      ),
      'left' => array(
        'col-sm-4' => 'col-sm-4',
      ),
      'right' => array(
        'col-sm-8' => 'col-sm-8',
      ),
      'footer' => array(
        'col-lg-12' => 'col-lg-12',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|team_member|teaser'] = $ds_layout;

  return $export;
}
