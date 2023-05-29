#include <iostream>
#include "DrivingStrategy.h"
class Vehicle{
    public:
        DrivingStrategy* obj;
    public:
        Vehicle(DrivingStrategy* obj){
            this->obj = obj;
        }
        void vehicleDrive(){
            obj->drive();
        }

};

class PassengerVehicle:public Vehicle{
    public:
        PassengerVehicle() : Vehicle(new NormalStrategy()) {}
};

class SportsVehicle:public Vehicle{
    public:
        SportsVehicle():Vehicle(new SpecialStrategy()){}
};