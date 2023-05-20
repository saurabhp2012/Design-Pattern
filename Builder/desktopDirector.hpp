#ifndef DesktopDirector_H
#define DesktopDirector_H
 
#include<iostream>
using namespace std;
#include"desktopBuilder.hpp"

class DesktopDirector{
    private:
        DesktopBuilder* desktopBuider;
    public:
        DesktopDirector(DesktopBuilder* pdesktopBuider){
            desktopBuider = pdesktopBuider;
        }

        Desktop* BuildDesktop(){
            desktopBuider->buildMonitor();
            desktopBuider->buildCPU();
            return desktopBuider->getDesktop();
        }


};
 
 
 
 
 
 
 
 
 
 
 
#endif
