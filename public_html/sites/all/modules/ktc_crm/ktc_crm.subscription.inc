<?php
/**
 * @file
 * This file contains Subscription specific stuff
 */

/**
 * Page callback, user subscriptions overview.
 */
function ktc_crm_subscriptions_page($user = NULL) {
  $args = array();
  $user = user_load(2465);

  $args['subscription_nodes'] = ktc_crm_subscriptions_get_product_list('subscription');
  $args['user_subscriptions'] = ktc_crm_subscriptions_fetch_user_subscriptions($user);

  return theme('ktc_crm_subscriptions_page', $args);
}

/**
 * Form callback for creating/editing a subscription.
 */
function ktc_crm_subscriptions_form($form, &$form_state, $product_nid) {
  $user = user_load(1);

  $form = array();
  if ($product = node_load($product_nid)) {
    if ($crm_uuid_field = field_get_items('node', $product, 'field_crm_uuid')) {

      $form['recipient_id'] = array(
        '#type' => 'textfield',
        '#value' => 'USER CRM ID',
      );

      $form['product_id'] = array(
        '#type' => 'textfield',
        '#value' => $crm_uuid_field[0]['value'],
      );

      $recipient_addresses['Work'] = array(
        'Arbejde',
        ktc_crm_get_user_address($user, 'Work'),
      );

      $recipient_addresses['Private'] = array(
        'Privat',
        ktc_crm_get_user_address($user, 'Private'),
      );

      $recipient_addresses['Other'] = array(
        'Anden leveringsadresse', 
        'Udfyldes herunder.',
      );

      $form['recipient_address'] = array(
        '#type' => 'tableselect',
        '#multiple' => FALSE,
        '#header' => array('Levering', 'Adresse'),
        '#options' => $recipient_addresses,
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
      );

      $form['other_address']['address_line_2'] = array(
        '#title' => t('Vejnavn 2'),
        '#type' => 'textfield',
      );

      $form['other_address']['postal_code'] = array(
        '#title' => t('Postnummer'),
        '#type' => 'textfield',
      );

      $form['other_address']['city'] = array(
        '#title' => t('By'),
        '#type' => 'textfield',
      );

      $form['start_date'] = array(
        '#title' => 'Abonnement start',
        '#type' => 'date_popup',
        '#date_format' => 'd/m-Y',
        '#default_value' => date('Y-m-d H:i:s', time()),
      );

      $form['submit'] = array(
        '#value' => t('Opret'),
        '#type' => 'submit',
      );
    }
  }

  return $form;
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

/**
 * Create/update subscription.
 */
function ktc_crm_subscriptions_create_update(array $options) {
  $subscriptiondto = new KTC\Subscription\SubscriptionDto($options['crm_uuid']);
  $subscriptiondto->StartDate = date('Y-m-d\TH:i:s', $options['start_date']);
  $subscriptiondto->EndDate = date('Y-m-d\TH:i:s', $options['end_date']);
  $subscriptiondto->RecipientAddress = $options['recipient_address'];

  $subscriptiondto->RecipientId = $options['recipient_id'];
  $subscriptiondto->ProductId = $options['product_id'];

  $addressdto = new KTC\Subscription\AddressDto($options['crm_uuid']);

  $addressdto->AddressLine1 = $options['address_line_1'];
  $addressdto->AddressLine2 = $options['address_line_2'];
  $addressdto->City = $options['city'];
  //$addressdto->Country = $options['country'];
  $addressdto->PostalCode = $options['postal_code'];
  //$addressdto->Region = $options['region'];

  $subscriptiondto->OtherAddress = $addressdto;

  ktc_crm_update_user_subscription($subscriptiondto);
}
