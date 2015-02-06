<?php
/**
 * @file
 * This file contains Subscription specific stuff.
 */

/**
 * Page callback, user subscriptions overview.
 */
function ktc_crm_subscriptions_page($account) {
  $args = array();

  $args['subscription_nodes'] = ktc_crm_subscriptions_get_product_list('subscription');
  $args['user_subscriptions'] = ktc_crm_subscriptions_fetch_user_subscriptions($account);

  return theme('ktc_crm_subscriptions_page', $args);
}

/**
 * Form callback for creating/editing a subscription.
 */
function ktc_crm_subscriptions_form($form, &$form_state, $account, $product_nid) {

  $form = array();

  if ($product = node_load($product_nid)) {

    $form['text'] = array(
      '#type' => 'item',
      '#markup' => render(field_view_field('node', $product, 'body', array('label' => 'hidden'))),
    );

    if ($product_uuid = _ktc_crm_get_uuid('node', $product)) {
      $user_uuid = _ktc_crm_get_uuid('user', $account);

      $subscriptions = ktc_crm_subscriptions_fetch_user_subscriptions($account);
      if (isset($subscriptions[$product_uuid])) {
        $form_state['subscriptiondto'] = $subscriptions[$product_uuid];
        $is_new = FALSE;
      }
      else {
        $form_state['subscriptiondto'] = new \KTC\Subscription\SubscriptionDto(NULL);
        $form_state['subscriptiondto']->ProductId = $product_uuid;
        $form_state['subscriptiondto']->RecipientId = $user_uuid;
        $form_state['subscriptiondto']->OtherAddress = new \KTC\Subscription\AddressDto();
        $is_new = TRUE;
      }

      $vocab = taxonomy_vocabulary_machine_name_load('accounts');
      $invoiceaccount = ktc_crm_account_load_from_uuid($form_state['subscriptiondto']->InvoiceAccountId);

      if (!$invoiceaccount) {
        $invoiceaccount = _ktc_crm_account_get_users_account($account);
      }

      $form['invoiceaccount'] = array(
        '#type' => 'hierarchical_select',
        '#title' => t('Firma'),
        '#required' => TRUE,
        '#config' => array(
          'module' => 'hs_taxonomy',
          'params' => array(
            'vid' => $vocab->vid,
          ),
          'enforce_deepest' => 1,
        ),
        '#default_value' => $invoiceaccount->tid,
      );

      $recipient_addresses['Work'] = array(
        'Arbejde',
        ktc_crm_get_user_address($account, 'Work'),
        l(t('ret'), 'user/' . $account->uid . '/edit'),
      );

      $recipient_addresses['Private'] = array(
        'Privat',
        ktc_crm_get_user_address($account, 'Private'),
        l(t('ret'), 'user/' . $account->uid . '/edit'),
      );

      $recipient_addresses['Other'] = array(
        'Anden leveringsadresse',
        'Udfyldes herunder.',
        '',
      );

      $form['recipient_address'] = array(
        '#type' => 'tableselect',
        '#multiple' => FALSE,
        '#header' => array('Levering', 'Adresse', ''),
        '#required' => TRUE,
        '#options' => $recipient_addresses,
        '#default_value' => $form_state['subscriptiondto']->RecipientAddress,
      );

      $form['other_address'] = array(
        '#type' => 'fieldset',
        '#title' => 'Anden leveringsadresse',
        '#description' => 'Udfyldes kun, hvis "Anden leveringsadresse" vælges ovenfor.',
        '#tree' => FALSE,
      );

      $form['other_address']['address_line_1'] = array(
        '#title' => t('Vejnavn'),
        '#type' => 'textfield',
        '#default_value' => $form_state['subscriptiondto']->OtherAddress->AddressLine1,
      );

      $form['other_address']['address_line_2'] = array(
        '#title' => t('Vejnavn 2'),
        '#type' => 'textfield',
        '#default_value' => $form_state['subscriptiondto']->OtherAddress->AddressLine2,
      );

      $form['other_address']['postal_code'] = array(
        '#title' => t('Postnummer'),
        '#type' => 'textfield',
        '#default_value' => $form_state['subscriptiondto']->OtherAddress->PostalCode,
      );

      $form['other_address']['city'] = array(
        '#title' => t('By'),
        '#type' => 'textfield',
        '#default_value' => $form_state['subscriptiondto']->OtherAddress->City,
      );

      $form['ean'] = array(
        '#title' => 'EAN',
        '#type' => 'textfield',
        '#default_value' => $form_state['subscriptiondto']->EAN,
      );

      $form['submit'] = array(
        '#value' => $is_new ? t('Opret') : t('Gem'),
        '#type' => 'submit',
      );
    }
  }

  return $form;
}

/**
 * Submit handler for create/update subscription form.
 */
function ktc_crm_subscriptions_form_submit(&$form, &$form_state) {

  $subscriptiondto = $form_state['subscriptiondto'];

  $invoiceaccount = taxonomy_term_load($form_state['values']['invoiceaccount'][0]);

  $invoiceaccountid = _ktc_crm_get_uuid('taxonomy_term', $invoiceaccount);

  $subscriptiondto->InvoiceAccountId = $invoiceaccountid;

  $subscriptiondto->RecipientAddress = $form_state['values']['recipient_address'];

  $addressdto = new KTC\Subscription\AddressDto($form_state['values']['crm_uuid']);

  $addressdto->AddressLine1 = $form_state['values']['address_line_1'];
  $addressdto->AddressLine2 = $form_state['values']['address_line_2'];
  $addressdto->City = $form_state['values']['city'];
  $addressdto->PostalCode = $form_state['values']['postal_code'];

  $subscriptiondto->OtherAddress = $addressdto;
  $subscriptiondto->EndDate = date('Y-m-d\TH:i:s', strtotime("+100 years"));

  ktc_crm_update_user_subscription($subscriptiondto);

  global $user;
  drupal_goto('user/' . $user->uid . '/abonnementer');
}

/**
 * Form callback for cancelling a subscription.
 */
function ktc_crm_subscription_cancel_form($form, &$form_state, $account, $product_nid) {
  $form = array();

  if ($product = node_load($product_nid)) {
    if ($product_uuid = _ktc_crm_get_uuid('node', $product)) {
      $user_uuid = _ktc_crm_get_uuid('user', $account);

      $subscriptions = ktc_crm_subscriptions_fetch_user_subscriptions($account);
      if (isset($subscriptions[$product_uuid])) {
        $form_state['subscriptiondto'] = $subscriptions[$product_uuid];
      }
    }
  }

  $form['message'] = array(
    '#type' => 'item',
    '#markup' => 'advarsel',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Opsig'),
    '#suffix' => l(t('Annullér'), $_SERVER['HTTP_REFERER']),
    '#attributes' => array('class' => array('btn-warning')),
  );

  return $form;
}

/**
 * Form callback for cancelling a subscription.
 */
function ktc_crm_subscription_cancel_form_submit($form, &$form_state) {
  $subscriptiondto = $form_state['subscriptiondto'];
  $subscriptiondto->EndDate = date('Y-m-d\TH:i:s', time());

  ktc_crm_update_user_subscription($subscriptiondto);

  global $user;
  drupal_goto('user/' . $user->uid . '/abonnementer');
}

/**
 * Get a list of products.
 */
function ktc_crm_subscriptions_get_product_list($type) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'product')
    ->fieldCondition('field_product_type', 'value', $type);
  $result = $query->execute();

  if (isset($result['node'])) {
    return node_load_multiple(array_keys($result['node']));
  }

  return array();
}
