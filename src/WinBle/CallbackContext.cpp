#include "CallbackContext.h"

CallbackContext::CallbackContext(function<void(BleGattNotificationData&)> _notificationHandler, 
	PBTH_LE_GATT_CHARACTERISTIC _pGattCharacteristic) :
	notificationHandler(_notificationHandler)
{	
}

CallbackContext::~CallbackContext()
{
}

function<void(BleGattNotificationData&)> CallbackContext::getNotificationHandler()
{
	return notificationHandler;
}

PBTH_LE_GATT_CHARACTERISTIC CallbackContext::getGattCharacteristic()
{
	return pGattCharacteristic;
}
