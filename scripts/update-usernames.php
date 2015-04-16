<?php
/**
 * @file
 * Update users usernames.
 */

// Get all uids.
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'user')
  ->propertyCondition('uid', array(0, 1), 'NOT IN');
$result = $query->execute();

$total = count($result['user']);
echo "Going to update " . $total . " users \n";

$usernames = array();
foreach ($result['user'] as $uid => $info) {
  $user = user_load($uid);

  $name = '';
  if ($field = field_get_items('user', $user, 'field_navn')) {
    $name = $field[0]['value'];
  }

  if ($field = field_get_items('user', $user, 'field_employer_name')) {
    $employer = $field[0]['value'];
  }

  if ($field = field_get_items('user', $user, 'field_kommune')) {
    $term = taxonomy_term_load($field[0]['tid']);
    $employer = $term->name;
  }

  // We rely on the function ktc_users uses to generate the username.
  $username = ktc_users_generate_username($name, $employer, $user->mail, $user->uid);

  if (!in_array($username, $usernames)) {
    // Save user with new username.
    @user_save($user, array('name' => $username));
  }
  $usernames[] = $username;

  // Just because we can. Add a fancy percentage counter.
  $percentage = (int) (count($usernames) / $total * 100);
  $blink = count($usernames) % 2 ? '.' : ' ';
  echo "\033[7D";
  echo str_pad($percentage, 3, ' ', STR_PAD_LEFT) . " % " . $blink;
}
echo "\n done";
