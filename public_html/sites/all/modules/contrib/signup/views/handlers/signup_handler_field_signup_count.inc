<?php

/**
 * Field handler to display the number of signups for a node.
 */
class signup_handler_field_signup_count extends views_handler_field {
  function query() {
    $sql = t("SELECT COUNT(*) FROM {signup_log} WHERE nid = node.nid");
    $this->aliases['signup_count'] = $this->query->add_field('', "($sql)", 'signup_count');
  }

  function render($values) {
    return $values->{$this->aliases['signup_count']};
  }

  function click_sort($order) {
    $this->query->add_orderby('', '', $order, $this->aliases['signup_count']);
  }
}