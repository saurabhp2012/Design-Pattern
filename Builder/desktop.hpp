#ifndef Desktop_H
#define Desktop_H
 
#include<iostream>
using namespace std;
 
class Desktop{

    string monitor;
    string cpu;

    public:
    void setMonitor(string pmonitor);
    void setCPU(string pcpu);
    void showSpecs();

};
 
 
 
 
 
 
 
 
 
 
 
#endif
