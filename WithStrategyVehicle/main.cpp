#include<iostream>
#include "Vehicle.h"
using namespace std;
 
int main()
{
    Vehicle* v=  new SportsVehicle();
    v->vehicleDrive();

    Vehicle* v2 = new PassengerVehicle();
    v2->vehicleDrive();
}