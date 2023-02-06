#include "RobotVacuumCleaner.h"
using namespace std;

RobotVacuumCleaner::RobotVacuumCleaner(int weight, int batteryLife, string manufacturer):Device(batteryLife), Appliances(weight), _manufacturer(manufacturer){}

void RobotVacuumCleaner::ShowSpec()
{
	cout << "Manufacturer is "<< _manufacturer <<", weight is " << _weight << ", batteryLife is " << _batteryLife << endl;
}
