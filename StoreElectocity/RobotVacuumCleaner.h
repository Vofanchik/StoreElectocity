#pragma once
#include "Appliances.h"
#include "Device.h"
class RobotVacuumCleaner final: public Device, Appliances
{
public:
	RobotVacuumCleaner(int weight, int batteryLife, string manufacturer);

	void ShowSpec() override;

protected:
	string _manufacturer;
};

