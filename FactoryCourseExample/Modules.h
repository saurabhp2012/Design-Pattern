#include<iostream>
#pragma once

class Modules{
    public:
        virtual void display() = 0;
};

class IntroModule:public Modules{
    public:
        void display(){
            std::cout<<"Intro Module "<<std::endl;
        }
};
class DemoModule:public Modules{
    public:
        void display(){
            std::cout<<"Demo Module "<<std::endl;
        }
};
class ExerciseModule:public Modules{
    public:
        void display(){
            std::cout<<"Exercise Module "<<std::endl;
        }
};
class SummaryModule:public Modules{
    public:
        void display(){
            std::cout<<"Summary Module "<<std::endl;
        }
};