<?php

$users = entity_load('user');

$list_id = 'cbe748c6dc';
$double_optin = FALSE;
$confirm = FALSE;

foreach ($users as $user) {
  if (!$user->status) {
    continue;
  }

  if ($user->uid == 0) {
    continue;
  }
  $email    = $user->mail;

  $merge_vars = [
    'EMAIL' => $email,
    'GROUPINGS' => [
      [
        'id' => 6297,
        'groups' => [
          'KTC Update - nyt fra KTC' => 'KTC Update - nyt fra KTC',
          'Nyt fra KTC Netværk' => 'Nyt fra KTC Netværk',
          'Teknik & Miljø - månedens udgave' => 'Teknik & Miljø - månedens udgave',
        ],
      ],
    ],
  ];

  $name     = $user->field_navn[LANGUAGE_NONE][0]['value'];
  $lastname = $user->field_efternavn[LANGUAGE_NONE][0]['value'];

  if (!empty($name)) {
    $merge_var['FNAME'] = $name;
  }
  if (!empty($lastname)) {
    $merge_var['LNAME'] = $lastname;
  }

  if (!mailchimp_is_subscribed($list_id, $email)) {
    mailchimp_subscribe($list_id, $email, $merge_vars, $double_optin, $confirm);
    echo $email."\n";
  }
}
