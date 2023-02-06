#include <iostream>
#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"
#include "RobotVacuumCleaner.h"
#include "CellPhone.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    IElectronics* storage[6];

    storage[0] = new RobotVacuumCleaner(20, 10000, "Mi");
    storage[1] = new RobotVacuumCleaner(21, 13000, "Sony");
    storage[2] = new RobotVacuumCleaner(23, 15000, "Philips");
    storage[3] = new CellPhone(3000, "A55");
    storage[4] = new CellPhone(2000, "M11");
    storage[5] = new CellPhone(5000, "s10");

    bool open = true;
    while (open)
    {
        cout << "Выберите товар : 1 - Mi, 2 - Sony, 3 - Philips, 4 - A55, 5 - M11, 6 - s10, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            storage[0]->ShowSpec();
            break;

        case 2:
            storage[1]->ShowSpec();
            break;

        case 3:
            storage[2]->ShowSpec();
            break;

        case 4:
            storage[3]->ShowSpec();
            break;

        case 5:
            storage[4]->ShowSpec();
            break;

        case 6:
            storage[5]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите товар от 1 до 6 или 0, чтобы выйти" << endl;
            break;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        delete storage[i];
    }

    return 0;
}

