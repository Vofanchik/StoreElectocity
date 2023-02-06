#include "CellPhone.h"

CellPhone::CellPhone(int batteryLife, string model):Device(batteryLife), _model(model){}

void CellPhone::ShowSpec()
{
	cout << "Model is " << _model << ", batteryLife is " << _batteryLife << endl;
}
