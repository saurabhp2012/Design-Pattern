#include<iostream>
using namespace std;
#include"desktop.hpp"

void Desktop::setMonitor(string pmonitor)
{
    monitor = pmonitor;
}

void Desktop::setCPU(string pcpu)
{
    cpu = pcpu;
}

void Desktop::showSpecs()
{
    cout<<"*************************"<<endl;
    cout<<"Monitor "<<monitor<<endl;
    cout<<"CPU "<<cpu<<endl;
    cout<<"*************************"<<endl;

}
