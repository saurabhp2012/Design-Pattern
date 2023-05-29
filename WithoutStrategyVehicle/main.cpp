#include<iostream>
#include "Vehicle.h"
using namespace std;
 
int main()
{
    Vehicle* v=  new SportsVehicle();
    v->drive();
}