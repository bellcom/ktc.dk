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
  $email   = $user->mail;
  $merge_vars = [
    'EMAIL' => $email,
    'FNAME' => $user->field_navn[LANGUAGE_NONE][0]['value'],
    'LNAME' => $user->field_efternavn[LANGUAGE_NONE][0]['value'],
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

  mailchimp_subscribe($list_id, $email, $merge_vars, $double_optin, $confirm);
}
