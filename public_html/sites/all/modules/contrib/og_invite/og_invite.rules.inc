<?php
/**
 * @file
 * OG Invite Rules integration.
 */

/**
 * Implements hook_rules_event_info().
 */
function og_invite_rules_event_info() {
  return array(
    'og_invite_send_invitation' => array(
      'label' => t('After an invitation have been created, send the message to the invitee.'),
      'module' => 'og_invite',
      'arguments' => array(
        'inviter' => array(
          'type' => 'user',
          'label' => 'Inviter',
        ),
        'invitee' => array(
          'type' => 'user',
          'label' => 'Invitee',
        ),
        'group' => array(
          'type' => array_keys(og_get_all_group_entity()),
          'label' => 'Group',
        ),
        'message' => array(
          'type' => 'string',
          'label' => 'Message',
        ),
        'hash' => array(
          'type' => 'string',
          'label' => 'Hash',
        ),
      ),
      'group' => t('OG invite'),
    ),
  );
}
