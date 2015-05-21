#!/bin/bash

echo "Generate KTC\Webuser"
php wsdl2phpgenerator-2.4.0\ \(1\).phar -i http://crm.ktc.dk:8080/WebUser.svc\?wsdl -o KTC/WebUser -n "KTC\WebUser"
echo "Generate KTC\AccountService"
php wsdl2phpgenerator-2.4.0\ \(1\).phar -i http://crm.ktc.dk:8080/AccountService.svc\?wsdl -o KTC/AccountService -n "KTC\AccountService"
echo "Generate KTC\GroupService"
php wsdl2phpgenerator-2.4.0\ \(1\).phar -i http://crm.ktc.dk:8080/GroupService.svc\?wsdl -o KTC/GroupService -n "KTC\GroupService"
echo "Generate KTC\Subscription"
php wsdl2phpgenerator-2.4.0\ \(1\).phar -i http://crm.ktc.dk:8080/Subscription.svc?wsdl -o KTC/Subscription -n "KTC\Subscription"
