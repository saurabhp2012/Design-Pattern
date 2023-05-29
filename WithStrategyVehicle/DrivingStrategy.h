#include <iostream>

class DrivingStrategy{
    public:
        DrivingStrategy(){}
         virtual void drive() = 0;
};

class NormalStrategy: public DrivingStrategy{
    public:
        NormalStrategy(){}
        void drive(){
            std::cout<<"Normal drive capability"<<std::endl;
        }
};

class SpecialStrategy: public DrivingStrategy{
    public:
        SpecialStrategy(){}
        void drive(){
            std::cout<<"Special drive capability"<<std::endl;
        }
};