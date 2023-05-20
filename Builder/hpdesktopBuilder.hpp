#ifndef HPDesktop_H
#define HPDesktop_H
 
#include<iostream>
#include "desktopBuilder.hpp"
 
class HpDesktopBuilder: public DesktopBuilder{
    void buildMonitor();
    void buildCPU();

    Desktop *getDesktop();
};

#endif
