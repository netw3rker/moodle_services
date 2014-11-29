<?php


function moodle_services_admin_settings_form(){
  $form['moodle_services_auth_token']=array(
    '#type'=>'textfield',
    '#title' => t("Moodle Service User Token"),
    '#description' => t("The token can be issued in your moodle site by visiting /admin/settings.php?section=webservicetokens"),
    '#default_value' => variable_get('moodle_services_auth_token'),
  );
  $form['moodle_services_url']=array(
    '#type'=>'textfield',
    '#title' => t("Moodle Service Site URL"),
    '#description' => t(""),
    '#default_value' => variable_get('moodle_services_url'),
  );
  $form['moodle_services_service_name']=array(
    '#type'=>'textfield',
    '#title' => t("Moodle Service Service Name"),
    '#description' => t("Possibly not needed, but enter it in for good measure"),
    '#default_value' => variable_get('moodle_services_service_name'),
  );
  return system_settings_form($form);
}
