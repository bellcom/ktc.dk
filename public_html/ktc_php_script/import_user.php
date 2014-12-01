<?php
include 'import_content.php';

 //getUserElements('user', 'user-export_1.xml');
 //getUserElements('user', 'user-export_2.xml');

   //getUserElements('user', 'user-export_3.xml');
//   getUserElements('user', 'user-export_4.xml');
 //getUserElements('user', 'user-export_5.xml');
// getUserElements('user', 'user-export_6.xml');
 getUserElements('user', 'user-export_7.xml');
// getUserElements('user', 'user-export_8.xml');
// getUserElements('user', 'user-export_9.xml');
// getUserElements('user', 'user-export_10.xml');


function getUserElements($type, $filename) {
  $path = 'private://xml';
  $content = file_get_contents(drupal_realpath($path) . '/' . $filename);

  $count = 0;
  $size = count(qp($content, 'node'));
  print "There are " . $size . " user in xml file \n";
  $step = 0;
  $count = 0;
  $skip = 0;

  foreach (qp($content, 'node') as $data) {
    $email = $data->children('E-mail')->text();
    if ($user = user_load_by_mail($email)) {
      if ($user->field_navn[LANGUAGE_NONE][0]['value'] == $data->children('Navn')->text()) {
        $skip ++;
        $count ++;
        if ($count == $size) {
          print ($count - $skip) . " Users are updated. Done \n";
          print "Skip " . $skip . " users";
        }
        continue;
      }
      // <regioner>
      if (is_numeric($data->children('regioner')->text())) {
        $user->field_regioner[LANGUAGE_NONE][0]['tid'] = $data->children('regioner')->text();
      }

      // <user_type>
      if (is_numeric($data->children('Brugertype')->text())) {
        $user->field_usertype[LANGUAGE_NONE][0]['tid'] = $data->children('Brugertype')->text();
      }

      // <field_kommune>
      if (is_numeric($data->children('Kommune')->text())) {
        $user->field_kommune[LANGUAGE_NONE][0]['tid'] = $data->children('Kommune')->text();
      }

      // <address>
      $user->field_adresse[LANGUAGE_NONE][0]['value'] = $data->children('address')->text();
      $user->field_adresse[LANGUAGE_NONE][0]['safe_value'] = $data->children('address')->text();

      // <cell>
      if ($data->children('Mobil')->text() != '') {
        $user->field_cell[LANGUAGE_NONE][0]['value'] = $data->children('Mobil')->text();
        $user->field_cell[LANGUAGE_NONE][0]['safe_value'] = $data->children('Mobil')->text();
      }
      // <city>
      $user->field_city[LANGUAGE_NONE][0]['value'] = $data->children('By')->text();
      $user->field_city[LANGUAGE_NONE][0]['safe_value'] = $data->children('By')->text();

      // <field_zipcode>
      $user->field_zipcode[LANGUAGE_NONE][0]['value'] = $data->children('Postnr')->text();
      $user->fiefield_zipcodeld_city[LANGUAGE_NONE][0]['safe_value'] = $data->children('Postnr')->text();

      // <field_country>
      //$user->field_country[LANGUAGE_NONE][0]['value'] = $data->children('field_short')->text();
      //$user->field_country[LANGUAGE_NONE][0]['safe_value'] = $data->children('field_short')->text();

      // <field_department>
      $user->field_department[LANGUAGE_NONE][0]['value'] = $data->children('afdeling')->text();
      $user->field_department[LANGUAGE_NONE][0]['safe_value'] = $data->children('afdeling')->text();

      // <field_directe_telefon>
      $user->field_directe_telefon[LANGUAGE_NONE][0]['value'] = $data->children('Direktetelefon')->text();
      $user->field_directe_telefon[LANGUAGE_NONE][0]['safe_value'] = $data->children('Direktetelefon')->text();

      // <field_ekspertise>
      $user->field_ekspertise[LANGUAGE_NONE][0]['value'] = $data->children('Ekspertise')->text();
      $user->field_ekspertise[LANGUAGE_NONE][0]['safe_value'] = $data->children('Ekspertise')->text();
      $user->field_ekspertise[LANGUAGE_NONE][0]['format'] = 'full_html';

      // <field_employer_name>
      $user->field_employer_name[LANGUAGE_NONE][0]['value'] = $data->children('Arbejdsgiver')->text();
      $user->field_employer_name[LANGUAGE_NONE][0]['safe_value'] = $data->children('Arbejdsgiver')->text();

      // <field_jobposition>
      $user->field_jobposition[LANGUAGE_NONE][0]['value'] = $data->children('Stillingtitel')->text();
      $user->field_jobposition[LANGUAGE_NONE][0]['safe_value'] = $data->children('Stillingtitel')->text();

      // <field_linkedin>
      $user->field_linkedin[LANGUAGE_NONE][0]['value'] = $data->children('LinkedIn')->text();
      $user->field_linkedin[LANGUAGE_NONE][0]['safe_value'] = $data->children('LinkedIn')->text();

      // <field_memberships_text>
      $user->field_memberships_text[LANGUAGE_NONE][0]['value'] = $data->children('field_short')->text();
      $user->field_memberships_text[LANGUAGE_NONE][0]['safe_value'] = $data->children('field_short')->text();

      // <field_navn>
      $user->field_navn[LANGUAGE_NONE][0]['value'] = $data->children('Navn')->text();
      $user->field_navn[LANGUAGE_NONE][0]['safe_value'] = $data->children('Navn')->text();

      // <field_phone>
      $user->field_phone[LANGUAGE_NONE][0]['value'] = $data->children('phone')->text();
      $user->field_phone[LANGUAGE_NONE][0]['safe_value'] = $data->children('phone')->text();

      // <field_dob>
      if ($data->children('birthday')->text() != '') {
        $user->field_dob[LANGUAGE_NONE][0]['value'] = date('Y-m-m H:i:0', strtotime($data->children('birthday')->text()));
        $user->field_dob[LANGUAGE_NONE][0]['timezone'] = 'Europe/Copenhagen';
      }
      // <field_special_skills>
      $user->field_special_skills[LANGUAGE_NONE][0]['value'] = $data->children('Srligekompetencer')->text();
      $user->field_special_skills[LANGUAGE_NONE][0]['safe_value'] = $data->children('Srligekompetencer')->text();

      // <field_gammel_uid>
      $user->field_gammel_uid[LANGUAGE_NONE][0]['value'] = $data->children('uid')->text();
      $user->field_gammel_uid[LANGUAGE_NONE][0]['safe_value'] = $data->children('uid')->text();

      // <roles> array
      $role = $data->children('Roller')->text();
      $roles = explode(',', $role);
      $error = array_filter($roles);
      if (!empty($error)) {
        foreach ($roles as $key => $role) {
          user_multiple_role_edit(array($user->uid), 'add_role', $role);
        }
      }

      // <field_hidden>
      if (is_numeric($data->children('Skjultilister')->text())) {
        $user->field_hidden[LANGUAGE_NONE][0]['value'] = $data->children('Skjultilister')->text();
      }

      // <field_content_type_notify>
      if (is_numeric($data->children('content_notify')->text())) {
        $user->field_content_type_notify[LANGUAGE_NONE][0]['value'] = $data->children('content_notify')->text();
      }

      // <field_all_comment_notify>
      if (is_numeric($data->children('comment_notify')->text())) {
        $user->field_all_comment_notify[LANGUAGE_NONE][0]['value'] = $data->children('comment_notify')->text();
      }

      // <field_my_comment_notify>
      if (is_numeric($data->children('my_comment')->text())) {
        $user->field_my_comment_notify[LANGUAGE_NONE][0]['value'] = $data->children('my_comment')->text();
      }

      // <picture>
      $url = $data->children('Billede')->text();
      $url_ar = explode('/', $url);
      $url = 'public://user_picture/' . $url_ar[count($url_ar) - 1];
      if ($url_ar[count($url_ar) - 1] != 'intet_billede.png') {
        if ($drupalfile = get_images($url, 'user_picture', $url_ar[count($url_ar) - 1])) {
          $user->picture[LANGUAGE_NONE][0]['fid'] = $drupalfile->fid;
          $user->picture[LANGUAGE_NONE][0]['uri'] = $drupalfile->uri;
        }
      }

      // old uid
      $user->field_gammel_uid[LANGUAGE_NONE][0]['value'] = $data->children('uid')->text();

      // Groups.
      $groups = $data->children('gid')->text();
      $groups_ar = explode(',', $groups);
      $error = array_filter($groups_ar);
      if (!empty($error)) {
        foreach ($groups_ar as $key => $value) {
          if ($value == '')
            $key -= 1;
          if ($value != '' && $new_gid = get_group_id_by_oldGid($value)) {
            $user->og_user_node[LANGUAGE_NONE][$key]['target_id'] = $new_gid;
          }
        }
      }

      $topics = $data->children('field_topics')->text();
      $topics_ar = explode(', ', $topics);
      $error = array_filter($topics_ar);
      if (!empty($error)) {
        foreach ($topics_ar as $key => $value) {
          $user->field_topics[LANGUAGE_NONE][$key]['tid'] = $value;
        }
      }
      $tags = $data->children('field_tags')->text();
      $tags_ar = explode(', ', $tags);
      $error = array_filter($tags_ar);
      if (!empty($error)) {
        foreach ($tags_ar as $key => $value) {
          $user->field_tags[LANGUAGE_NONE][$key]['tid'] = $value;
        }
      }
      user_save($user);
    }
    $count ++;
    if ($count > 4) {
      //print "\n number 4\n";
      //break;
    }
    $left = (int) $size - $count;
    if ($count > $step) {
      print "user uid (" . $user->uid . ") is updated, number " . $count . ". There are " . $left . " left. \n";
      $step += 10;
    }
    if ($count == $size) {
      print ($count - $skip) . " Users are updated. Done \n";
      print "Skip " . $skip . " users";
    }
  }
  print "\n\n";
}

function get_images($url, $file_dir, $name = NULL) {
  $drupalfile = FALSE;
  if (file_exists($url)) {
    $dfile = (object) array(
      'uri' => $url,
      'filemime' => file_get_mimetype($url),
      'status' => 1,
    );
    // Now get Drupal to copy it.
    $mydir = 'private://' . $file_dir;
    file_prepare_directory($mydir, FILE_CREATE_DIRECTORY);
    $drupalfile = file_copy($dfile, 'private://' . $file_dir . '/' . $name, FILE_EXISTS_RENAME);
  }
  return $drupalfile;
}
