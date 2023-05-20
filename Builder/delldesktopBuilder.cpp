#include "delldesktopBuilder.hpp"

void DellDesktopBuilder::buildMonitor()
{
    desktop->setMonitor(" Dell Monitor");

}

void DellDesktopBuilder::buildCPU()
{
    desktop->setCPU(" Dell CPU");

}

Desktop* DellDesktopBuilder ::getDesktop(){
    return desktop;
}
