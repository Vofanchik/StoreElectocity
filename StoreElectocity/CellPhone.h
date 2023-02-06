#pragma once
#include "Device.h"
class CellPhone final:
    public Device
{
public:
    CellPhone(int batteryLife, string model);
    void ShowSpec() override;

protected:
    string _model;
};

