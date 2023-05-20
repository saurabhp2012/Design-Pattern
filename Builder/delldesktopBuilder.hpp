#ifndef DellDesktop_H
#define DellDesktop_H
#include<iostream>
#include "desktopBuilder.hpp"
 class DellDesktopBuilder: public DesktopBuilder{
    void buildMonitor();
    void buildCPU();

    Desktop *getDesktop();
};

#endif

 
