#include <iostream>


class Vehicle{
    public:
        virtual void drive(){
            std::cout<<"Normal drive capability"<<std::endl;
        }
};

class PassengerVehicle:public Vehicle {

};

class SportsVehicle:public Vehicle{

    public:
        void drive(){
            std::cout<<"Special drive capability"<<std::endl;
        }
};

class OffRoadVehicle:public Vehicle{

    public:
        void drive(){
            std::cout<<"Special drive capability"<<std::endl;//code duplication in case of similiar functionality 
                                                            // in child class which can't be inherited
        }
};