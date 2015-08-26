<?php
use Monolog\Logger;
use Monolog\Handler\AbstractProcessingHandler;

class KtcCrmLoggerToWatchdogHandler extends AbstractProcessingHandler {

  /**
   * @param integer $level  The minimum logging level at which this handler will be triggered
   * @param Boolean $bubble Whether the messages that are handled can bubble up the stack or not
   *
   * @return void
   * @author Henrik Farre <hf@bellcom.dk>
   */
  public function __construct($level = Logger::DEBUG, $bubble = true) {
    parent::__construct($level, $bubble);
  }

  /**
   * @param array $record
   *
   * @return void
   * @author Henrik Farre <hf@bellcom.dk>
   */
  protected function write(array $record) {
    $type      = 'ktc_crm';
    $message   = (string) $record['formatted'];
    $variables = array();
    $severity  = $this->mapLevelToSeverity($record['level']);

    watchdog($type, $message, $variables, $severity);
  }

  /**
   * @param integer $level Monolog level to map to watchdog severity
   *
   * @return int
   * @author Henrik Farre <hf@bellcom.dk>
   */
  private function mapLevelToSeverity($level) {
    $severity = WATCHDOG_NOTICE;

    switch ($level)
    {
      case Logger::EMERGENCY:
        $severity = WATCHDOG_EMERGENCY;
        break;
      case Logger::ALERT:
        $severity = WATCHDOG_ALERT;
        break;
      case Logger::CRITICAL:
        $severity = WATCHDOG_CRITICAL;
        break;
      case Logger::ERROR:
        $severity = WATCHDOG_ERROR;
        break;
      case Logger::WARNING:
        $severity = WATCHDOG_WARNING;
        break;
      case Logger::NOTICE:
        $severity = WATCHDOG_NOTICE;
        break;
      case Logger::INFO:
        $severity = WATCHDOG_INFO;
        break;
      case Logger::DEBUG:
        $severity = WATCHDOG_DEBUG;
        break;
    }

    return $severity;
  }
}

